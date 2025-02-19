#include "Simulation/WindySceneViewExtension.h"
#include "System/WindySubsystem.h"

FWindySceneViewExtension::FWindySceneViewExtension(
    const FAutoRegister& AutoRegister,
    UWindySubsystem* InSubsystem)
    : FSceneViewExtensionBase(AutoRegister),
    WorldSubsystem(InSubsystem) {

}

void FWindySceneViewExtension::Invalidate() {
    WorldSubsystem = nullptr;
}