// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IT_Test : ModuleRules
{
	public IT_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
