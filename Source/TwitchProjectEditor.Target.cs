using UnrealBuildTool;

public class TwitchProjectEditorTarget : TargetRules
{
	public TwitchProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("TwitchProject");
	}
}
