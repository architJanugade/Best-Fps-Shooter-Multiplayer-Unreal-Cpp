// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SuperShooters : ModuleRules
{
	public SuperShooters(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
