class CfgMods
{
    class CRXList
    {
        dir="CRXList";
        name="CRXList";
        hideName=0;
        hidePicture=0;
        type="mod";
        version="1.0";
        extra=0;
        dependencies[] =
        {
            "Game",
            "World",
            "Mission"
        };

        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] =
                {
                    "CRXList/scripts/3_Game"
                };
            };
			class worldScriptModule
			{
				files[]=
				{
					"CRXList/scripts/4_World"
				};
			};
            class missionScriptModule
            {
                value = "";
                files[] =
                {
                    "CRXList/scripts/5_Mission"
                };
            };
        };
    };
};

class CfgPatches
{
	class CRXList
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Scripts"
		};
	};
};
