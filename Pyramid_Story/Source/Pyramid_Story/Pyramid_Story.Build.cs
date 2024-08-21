// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Pyramid_Story : ModuleRules
{
	public Pyramid_Story(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG", "HTTP", "Json", "JsonUtilities" });
	}
}
