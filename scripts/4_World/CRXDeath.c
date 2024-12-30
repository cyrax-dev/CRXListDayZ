modded class PlayerBase
{
    override void EEKilled(Object killer)
    {
        super.EEKilled(killer);
        PlayerIdentity identity = this.GetIdentity();

        g_CRXListConfig.RemovePlayer(identity);
        JsonFileLoader<CRXListConfig>.JsonSaveFile(CRX_LIST_FILE, g_CRXListConfig);
    }
}
