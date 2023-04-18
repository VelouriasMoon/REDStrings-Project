

#pragma once

#include "CoreMinimal.h"
#include "CriWareApi.h"

enum class ECriWareMemoryType : uint8
{
	FileSystemMemory,
	AtomMemory,
	ManaMemory,
	ManaVp9Memory,
};

namespace FCriWareAllocator_Native
{
	extern "C" void* CRIAPI AllocateMemory(void* ObjectPointer, CriUint32 Size);
	extern "C" void CRIAPI FreeMemory(void* ObjectPointer, void* Pointer);
}

/** Structure to maintain allocation functions and allow c++ classes method functions for CriWare libraries. */
struct CRIWARERUNTIME_API FCriWareAllocator
{
	friend void* CRIAPI FCriWareAllocator_Native::AllocateMemory(void* ObjectPointer, CriUint32 Size);
	friend void CRIAPI FCriWareAllocator_Native::FreeMemory(void* ObjectPointer, void* Pointer);

	using FAllocator = TFunction<void* (void* ObjectPointer, unsigned int Size)>;
	using FDeallocator = TFunction<void(void* ObjectPointer, void* Pointer)>;

private:

	FAllocator AllocateCallback;
	FDeallocator FreeCallback;
	void* ObjectPointer;

public:

	FCriWareAllocator() : FCriWareAllocator(DefaultAlloc, DefaultFree, nullptr) {}

	FCriWareAllocator(const FAllocator& AllocFunc, const FDeallocator& FreeFunc, void* InObjectPointer)
		: AllocateCallback(AllocFunc)
		, FreeCallback(FreeFunc)
		, ObjectPointer(InObjectPointer)
	{
	}

public:

	static FORCEINLINE FCriWareAllocator& GetDefault() { return DefaultAllocator; }

protected:

	static FCriWareAllocator DefaultAllocator;
	
	static void* DefaultAlloc(void* ObjectPointer, unsigned int Size);
	static void DefaultFree(void* ObjectPointer, void* Pointer);
};
