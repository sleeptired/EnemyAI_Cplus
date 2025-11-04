// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EnemyAI_Cplus : ModuleRules
{
	public EnemyAI_Cplus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"EnemyAI_Cplus",
			"EnemyAI_Cplus/Variant_Platforming",
			"EnemyAI_Cplus/Variant_Platforming/Animation",
			"EnemyAI_Cplus/Variant_Combat",
			"EnemyAI_Cplus/Variant_Combat/AI",
			"EnemyAI_Cplus/Variant_Combat/Animation",
			"EnemyAI_Cplus/Variant_Combat/Gameplay",
			"EnemyAI_Cplus/Variant_Combat/Interfaces",
			"EnemyAI_Cplus/Variant_Combat/UI",
			"EnemyAI_Cplus/Variant_SideScrolling",
			"EnemyAI_Cplus/Variant_SideScrolling/AI",
			"EnemyAI_Cplus/Variant_SideScrolling/Gameplay",
			"EnemyAI_Cplus/Variant_SideScrolling/Interfaces",
			"EnemyAI_Cplus/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
