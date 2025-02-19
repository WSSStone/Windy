using UnrealBuildTool;

public class WindyEditor : ModuleRules
{
    public WindyEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "UnrealEd",
                "Kismet",
                "Core",
                "RenderCore",
                "RHI",
                "AssetRegistry",
                "EditorFramework",
                "EditorSubsystem",
                "WindyRuntime",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "AssetTools",
                "Slate",
                "SlateCore",
                "PropertyEditor",
                "AssetRegistry",
                "EditorStyle",
                "InputCore",
                "ContentBrowser",
                "ContentBrowserData",
                "ToolMenus",
                "Projects",
                "LevelEditor",
                "DataLayerEditor",
                "EnhancedInput",
            }
        );
    }
}