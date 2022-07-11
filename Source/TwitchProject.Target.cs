using UnrealBuildTool;

public class TwitchProjectTarget : TargetRules
{
	public TwitchProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("TwitchProject");
	}
}
