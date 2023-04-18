

#include "CriWareMemory.h"
#include "HAL/UnrealMemory.h"
#include "HAL/LowLevelMemTracker.h"

#if STATS
#include "CriWareInitializer.h"
DECLARE_MEMORY_STAT_EXTERN(TEXT("CriWare Default Memory"), STAT_CriWare_Memory, STATGROUP_CriWare, );
DEFINE_STAT(STAT_CriWare_Memory);
#endif

namespace FCriWareAllocator_Native
{
	extern "C" void* CRIAPI AllocateMemory(void* ObjectPointer, CriUint32 Size)
	{
		auto Alloc = static_cast<FCriWareAllocator*>(ObjectPointer);
		check(Alloc);
		return Alloc->AllocateCallback(Alloc->ObjectPointer, static_cast<CriUint32>(Size));
	}

	extern "C" void CRIAPI FreeMemory(void* ObjectPointer, void* Pointer)
	{
		auto Alloc = static_cast<FCriWareAllocator*>(ObjectPointer);
		check(Alloc);
		Alloc->FreeCallback(ObjectPointer, Pointer);
	}
}

FCriWareAllocator FCriWareAllocator::DefaultAllocator = FCriWareAllocator();

void* FCriWareAllocator::DefaultAlloc(void* , unsigned int Size)
{
	LLM_SCOPE(ELLMTag::FMalloc);

	void* Pointer = FMemory::Malloc(Size);

#if STATS
	uint32 BytesInUseCount = FMemory::GetAllocSize(Pointer);
	INC_MEMORY_STAT_BY(STAT_CriWare_Memory, BytesInUseCount);
#endif

	return Pointer;
}

void FCriWareAllocator::DefaultFree(void* , void* Pointer)
{
#if STATS
	uint32 BytesInUseCount = FMemory::GetAllocSize(Pointer);
	DEC_MEMORY_STAT_BY(STAT_CriWare_Memory, BytesInUseCount);
#endif

	FMemory::Free(Pointer);
}
