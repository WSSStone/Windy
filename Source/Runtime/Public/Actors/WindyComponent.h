#pragma once

#include "IField.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "WindyComponent.generated.h"

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EFluidType : uint8 {
    None = 0,
    Wind = 1,
    Water = 1 << 1,
    Fire = 1 << 2,
    Slice = 1 << 3,
    MAX = 4 UMETA(Hidden)
};
ENUM_CLASS_FLAGS(EFluidType)

USTRUCT(BlueprintType)
struct FFluidFieldInfo {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    EFluidType Type;

    UPROPERTY(EditAnywhere)
    FName Name;

    UPROPERTY(EditAnywhere)
    FIntVector2 Size;

    UPROPERTY(EditAnywhere)
    EPixelFormat Format;
};

UCLASS()
class WINDYRUNTIME_API AWindyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindSpeed = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindDirection = 0.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindStrength = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindTurbulence = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindFrequency = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindAmplitude = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindDecay = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindLift = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindDrag = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindSwirl = 1.0f;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Windy")
    float WindSuction = 1.0f;
};

class FFieldProxy {

};