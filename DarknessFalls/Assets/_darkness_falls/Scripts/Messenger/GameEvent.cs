// A list of all game events that can be broadcasted via the Messenger system
public static class GameEvent {
	// Event for when the player has died
	public const string PLAYER_DIED = "PLAYER_DIED";
	// Event to make the torch gain or lose torchlight
	public const string TORCHLIGHT_UPDATE = "TORCHLIGHT_UPDATE";
	// Event for when the torch gains or loses torchlight
	public const string TORCHLIGHT_CHANGED = "TORCHLIGHT_CHANGED";
	// Event for when no enemies are remaining
	public const string ALL_ENEMIES_SLAYED = "ALL_ENEMIES_SLAYED";
	// Event for when a scene transition is triggered
	public const string SCENE_TRANSITION = "SCENE_TRANSITION";
}