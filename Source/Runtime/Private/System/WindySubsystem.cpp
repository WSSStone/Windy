#include "WindySubsystem.h"

#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

#define LOCTEXT_NAMESPACE "WindySubsystem"

DEFINE_LOG_CATEGORY_STATIC(LogStoryBoard, Log, All);

void UWindySubsystem::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);

    FWorldDelegates::OnWorldInitialized.AddUObject(this, &UWindySubsystem::OnWorldInitialized);

    WindyRenderTargetPool = MakeSharable(new FWindyRenderTargetPool());
    WindyRenderTargetPool->Initialize();

    SceneViewExtension = FSceneViewExtensions::NewExtension<FStoryBoardSceneViewExtension>(this);
}

#undef LOCTEXT_NAMESPACE