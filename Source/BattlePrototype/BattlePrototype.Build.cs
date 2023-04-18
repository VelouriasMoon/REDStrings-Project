using UnrealBuildTool;

public class BattlePrototype : ModuleRules {
    public BattlePrototype(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "ActionSystem",
            "AnimGraphRuntime",
            "AnimationCore",
            "ApexDestruction",
            "AssetRegistry",
            "AudioExtensions",
            "AudioMixer",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "CriWareRuntime",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "HorizonUI",
            "InputCore",
            "Landscape",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "Paper2D",
            "PropertyPath",
            "REDAnimationNode",
            "Slate",
            "SlateCore",
            "UMG",
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "RenderCore",
        });

        //PublicIncludePaths.AddRange(new string[] { });
    }
}
