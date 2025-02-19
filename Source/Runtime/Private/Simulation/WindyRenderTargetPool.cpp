#include "WindyRenderTargetPool.h"

FWindyRenderTargetPool FWindyRenderTargetPool::Get()
{
    static FWindyRenderTargetPool Instance;
    return Instance;
}

void FWindyRenderTargetPool::Initialize()
{
    Preinit(512, 512, 4);
}

void FWindyRenderTargetPool::Deinitialize()
{
    ReleaseResources();
}

void FWindyRenderTargetPool::FindOrCreateRenderTarget(const FFluidFieldInfo& Info, FRHITexture2D* OutTexture)
{
}

FRHITexture2D* FWindyRenderTargetPool::GetRenderTargetTexture(EFluidType Type, uint32 Index) {
    return nullptr;
}

void FWindyRenderTargetPool::AllocateRenderTarget(const FFluidFieldInfo &Info, bool ResizePool)
{
}

void FWindyRenderTargetPool::ReleaseRenderTarget(const FFluidFieldInfo &Info, bool ResizePool)
{
}

