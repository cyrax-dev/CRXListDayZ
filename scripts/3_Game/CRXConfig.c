class CRXListConfig
{
    ref array<string> steamIDs = new array<string>();

    void CRXListConfig()
    {
        LoadConfig();
    }

    private void LoadConfig()
    {
        if (FileExist(CRX_LIST_FILE))
        {
            JsonFileLoader<CRXListConfig>.JsonLoadFile(CRX_LIST_FILE, this);
        }
        else
        {
            CreateConfig();
        }
    }

    private void SaveConfig()
    {
        JsonFileLoader<CRXListConfig>.JsonSaveFile(CRX_LIST_FILE, this);
    }

    private void CreateConfig()
    {
        if (!FileExist(CRX_LIST_FOLDER))
        {
            MakeDirectory(CRX_LIST_FOLDER);
        }
        SaveConfig();
    }

    void InsertPlayer(PlayerIdentity identity)
    {
        string steamID = identity.GetPlainId();
        if (!IsPlayerInList(steamID))
        {
            steamIDs.Insert(steamID);
        }
    }

    void RemovePlayer(PlayerIdentity identity)
    {
        for (int i; i < steamIDs.Count(); i++)
        {
            if(steamIDs[i] && steamIDs[i] == identity.GetPlainId())
            {
                steamIDs.Remove(steamIDs.Find(steamIDs[i]));
                break;
            }
        }
    }

    bool IsPlayerInList(string steamId)
    {
        foreach (string playerSteamId : steamIDs)
        {
            if (playerSteamId == steamId)
            {
                return true;
            }
        }
        return false;
    }

    void ClearList()
    {
        steamIDs.Clear();
        SaveConfig();
    }
}

static ref CRXListConfig g_CRXListConfig = new CRXListConfig();
static ref CRXListConfig GetCRXListConfig()
{
    return new CRXListConfig();
}
