using UnrealBuildTool;

public class HorizonUI : ModuleRules {
    public HorizonUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "Paper2D",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
