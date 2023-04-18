// Copyright 2021 BANDAI NAMCO Entertainment Inc.

using UnrealBuildTool;
using System.Collections.Generic;

public class ScarletNexusTarget : TargetRules
{
	public ScarletNexusTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "ScarletNexus" } );

        if (bBuildEditor)
        {
            ExtraModuleNames.AddRange(new string[] { "BattlePrototype" });
        }
    }
}