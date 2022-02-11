// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GrappleHookSystem : ModuleRules
{
	public GrappleHookSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GrappleHookSystemPlugin" });
	}
}
