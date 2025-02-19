#include "WindyRuntime.h"

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "ShaderCore.h"

void FWindyRuntimeModule::StartupModule()
{
    FString BaseDir = IPluginManager::Get().FindPlugin("Windy")->GetBaseDir();
    FString ShaderDir = FPaths::Combine(BaseDir, TEXT("Shaders"));
    AddShaderSourceDirectoryMapping(BaseDir, ShaderDir);
}

void FWindyRuntimeModule::ShutdownModule()
{
}

IMPLEMENT_MODULE(FWindyRuntimeModule, WindyRuntime)