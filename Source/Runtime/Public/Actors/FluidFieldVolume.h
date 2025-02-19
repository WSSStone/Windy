#pragma once

#include "IField.h"

#include "CoreMinimal.h"
#include "Engine/Volume.h"

#include "FluidFieldVolume.generated.h"

UCLASS(showcategories = Collision, hidecategories = (Navigation, Physics, Collision, Rendering, Tags, Cooking, Replication, Input, Actor, HLOD, Mobile, LOD), abstract, ConversionRoot)
class WINDY_API AFluidFieldVolume : public AVolume, public FInteractiveField {
    GENERATED_BODY()
public:

protected:
    
};