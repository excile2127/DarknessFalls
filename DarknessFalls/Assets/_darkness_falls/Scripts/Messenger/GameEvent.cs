// A list of all game events that can be broadcasted via the Messenger system
public static class GameEvent {
	// Event for when the player double jumps, double dashes, or double attacks
	public const string DOUBLE_ACTION = "DOUBLE_ACTION";
	// Event for when the player is hit by an enemy
	public const string PLAYER_HIT = "PLAYER_HIT";
	// Event for when the player falls off the map
	public const string PLAYER_FELL = "PLAYER_FELL";
	// Event for when an enemy is slayed
	public const string ENEMY_SLAYED = "ENEMY_SLAYED";
	// Event for when the torch gains or loses torchlight
	public const string TORCH_CHANGED = "TORCH_CHANGED";
}