// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PopupBookPrototype : ModuleRules
{
	public PopupBookPrototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "Paper2D" });
	}
}
