#pragma once

#include "CoreMinimal.h"
#include "RenderCore.h"

/// @brief A pool of render targets for fluid simulation
class FWindyRenderTargetPool
{
public:
    FWindyRenderTargetPool() {};

    ~FWindyRenderTargetPool() {};

    void Initialize();

    void Deinitialize();

    void FindOrCreateRenderTarget(FRHITexture2D* OutTexture);

    FRHITexture2D* GetRenderTargetTexture(EFluidType Type, uint32 Index);

private:
    void AllocateRenderTarget(const FFluidFieldInfo& Info, bool ResizePool = false);

    void ReleaseRenderTarget(const FFluidFieldInfo& Info, bool ResizePool = false);
};