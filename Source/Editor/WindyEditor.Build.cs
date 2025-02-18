using UnrealBuildTool;

public class EnvokeEditor : ModuleRules
{
    public EnvokeEditor(ReadOnlyTargetRules Target) : base(Target)
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
                "EnvokeRuntime",
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