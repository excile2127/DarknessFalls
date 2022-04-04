// A list of all of dash states
public enum DashState
{
    // Ready to dash
    Ready,
    // Actively dashing, can double dash
    Dashing,
    // Actively double-dashing
    DoubleDashing,
    // On cooldown for a single dash, can double dash
    DashCooldown,
    // On cooldown for a double dash
    DoubleDashCooldown
}