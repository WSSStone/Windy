#pragma once

#include "Modules/ModuleManager.h"

class FWindyRuntimeModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};