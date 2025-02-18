using UnrealBuildTool;

public class WindyRuntime : ModuleRules
{
    public WindyRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "RHI",
                "RenderCore",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
				"InputCore",
                "EnhancedInput",
                "Slate",
				"SlateCore", 
			}
        );
	}
}