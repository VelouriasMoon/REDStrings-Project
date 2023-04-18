#include "ASCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AASCharacter;
class AActor;
class AController;
class UASDamageType;
class UPrimitiveComponent;

void AASCharacter::ServerTakePointDamage_Implementation(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}
bool AASCharacter::ServerTakePointDamage_Validate(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
    return true;
}

void AASCharacter::ServerTakeDamage_Implementation(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}
bool AASCharacter::ServerTakeDamage_Validate(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
    return true;
}

void AASCharacter::ServerNotifyHit_Implementation(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType> DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection) {
}
bool AASCharacter::ServerNotifyHit_Validate(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType> DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection) {
    return true;
}

void AASCharacter::OnRep_LastTakeHitInfo() {
}

bool AASCharacter::OnAttackOverlap(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, const FHitResult& SweepResult) {
    return false;
}

void AASCharacter::JumpDamageState(TEnumAsByte<EDamageState> State) {
}

void AASCharacter::ClientTakePointDamage_Implementation(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}
bool AASCharacter::ClientTakePointDamage_Validate(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
    return true;
}

void AASCharacter::ClientTakeDamage_Implementation(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}
bool AASCharacter::ClientTakeDamage_Validate(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
    return true;
}

void AASCharacter::ClientNotifyHit_Implementation(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType> DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection) {
}
bool AASCharacter::ClientNotifyHit_Validate(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType> DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection) {
    return true;
}

void AASCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AASCharacter, LastTakeHitInfo);
}

AASCharacter::AASCharacter() {
}

