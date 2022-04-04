// A list of all game events that can be broadcasted via the Messenger system
public static class GameEvent {
	// Event for when the player has died
	public const string PLAYER_DIED = "PLAYER_DIED";
	// Event for when the player has fallen off the map
	public const string PLAYER_FELL = "PLAYER_FELL";
	// Event to make the torch gain or lose torchlight
	public const string TORCHLIGHT_UPDATE = "TORCHLIGHT_UPDATE";
	// Event for when the torch gains or loses torchlight
	public const string TORCHLIGHT_CHANGED = "TORCHLIGHT_CHANGED";
}