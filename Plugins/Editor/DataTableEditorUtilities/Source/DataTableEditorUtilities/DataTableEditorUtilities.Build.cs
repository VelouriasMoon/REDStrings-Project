//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

using UnrealBuildTool;

public class DataTableEditorUtilities : ModuleRules
{
	public DataTableEditorUtilities(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

       /* PCHUsage = ModuleRules.PCHUsageMode.NoPCHs;
        bUseUnity = false;*/

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"UnrealEd"
			}
			);
		
	}
}
