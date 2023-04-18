// Copyright 2021 BANDAI NAMCO Entertainment Inc.

using UnrealBuildTool;
using System.Collections.Generic;

public class ScarletNexusEditorTarget : TargetRules
{
	public ScarletNexusEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "ScarletNexus" } );
        ExtraModuleNames.AddRange(new string[] { "BattlePrototype" });
    }
}