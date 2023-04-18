#include "NetMessage.h"

class UNetMessage;
class UObject;

FString UNetMessage::ToJson() {
    return TEXT("");
}

UNetMessage* UNetMessage::Set(int32 ID, const TArray<uint8>& Data) {
    return NULL;
}

FString UNetMessage::DumpHttpHeader(const FString& Prefix) {
    return TEXT("");
}

FString UNetMessage::DumpHttp(const FString& Prefix) {
    return TEXT("");
}

FString UNetMessage::Dump(const FString& Prefix) {
    return TEXT("");
}

UNetMessage* UNetMessage::Create(UObject* WorldContextObject) {
    return NULL;
}

UNetMessage::UNetMessage() {
}

