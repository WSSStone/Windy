#pragma once

#include "Modules/ModuleManager.h"

class FWindyEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};