// Interface for game managers
public interface IGameManager
{
    ManagerStatus status { get; }
    void Startup();
}