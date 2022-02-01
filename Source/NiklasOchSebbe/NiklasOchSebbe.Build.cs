// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NiklasOchSebbe : ModuleRules
{
	public NiklasOchSebbe(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
