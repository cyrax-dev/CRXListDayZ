modded class MissionServer
{
    void MissionServer()
    {
        g_CRXListConfig.ClearList();
    }

    void ~MissionServer()
    {
        g_CRXListConfig.ClearList();
    }

    override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
    {
        super.InvokeOnConnect(player, identity);
        g_CRXListConfig.InsertPlayer(identity);
        JsonFileLoader<CRXListConfig>.JsonSaveFile(CRX_LIST_FILE, g_CRXListConfig);
    }

    override void OnClientDisconnectedEvent(PlayerIdentity identity, PlayerBase player, int logoutTime, bool authFailed)
    {
        super.OnClientDisconnectedEvent(identity, player, logoutTime, authFailed);
        g_CRXListConfig.RemovePlayer(identity);
        JsonFileLoader<CRXListConfig>.JsonSaveFile(CRX_LIST_FILE, g_CRXListConfig);
    }
}
