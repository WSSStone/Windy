#pragma once

#include "Simulation/WindySceneViewExtension.h"
#include "Simulation/WindyRenderTargetPool.h"

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "Subsystems/WorldSubsystem.h"

#include "WindySubsystem.generated.h"

#if WITH_EDITOR
class FWindyEditorUndoClient : public FEditorUndoClient {
};
#else
class FWindyEditorUndoClient {
};
#endif

class UWindySubsystem : public UWorldSubsystem, public FWindyEditorUndoClient
{
    GENERATED_BODY()
public:
    virtual void Initialize(FSubsystemCollectionBase &Collection) override;

    virtual void Deinitialize() override;

#if WITH_EDITOR
    virtual void PostUndo(bool bSuccess) override {}

    virtual void PostRedo(bool bSuccess) override {}
#endif
    
    void OnWorldInitialized(UWorld *World);

    void OnActorComponentsInitliazed(TArray<AActorComponents>* ActorComps);
private:
    TSharedPtr<FWindyRenderTargetPool> WindyRenderTargetPool;

    TSharedPtr<class FWindySceneViewExtension, ESPMode::ThreadSafe> StoryBoardSceneViewExtension;

    friend class FWindySceneViewExtension;
};