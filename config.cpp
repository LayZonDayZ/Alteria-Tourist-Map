class CfgPatches
{
	class MapData
	{
		units[]=
		{
			"AlteriaMap"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts",
			"DZ_Gear_Navigation"
		};
	};
};
class CfgMods
{
	class MapData
	{
		dir="AlteriaMap";
		picture="";
		action="";
		hideName=1;
		hidePicture=0;
		name="AlteriaMap";
		credits="";
		author="LayZ";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World",
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"AlteriaMap\scripts\3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"AlteriaMap\scripts\4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"AlteriaMap\scripts\5_Mission"
				};
			};
		};
	};
};
class CfgWorlds
{
	class CAWorld;
	class alteria: CAWorld
	{
		// map item name (default value is #STR_CfgVehicles_ChernarusMap0)
		mapDisplayNameKey = "Alteria Tourist Map";
		// map item description (default value is #STR_CfgVehicles_ChernarusMap1)
		mapDescriptionKey = "Alteria Tourist Map WIP by dayzlater.com";
		// closed map item texture (default value is dz\gear\navigation\data\map_chernarus_co.paa)
		mapTextureClosed = "AlteriaMap\map_alteria_co.paa";
		// opened map item texture (check dz\structures\signs\tourist\data\karta_co.paa to see how it should look like)
		mapTextureOpened = "AlteriaMap\karta_co.paa";
		// opened map item legend part (check dz\structures\signs\tourist\data\karta_side_co.paa to see how it should look like)
		mapTextureLegend = "AlteriaMap\karta_side_co.paa";
		// 2D map overlay map for this world (see dz\gear\navigation\data\usermap for an example - it is basically same like proper satellite texture for the terrain just with different sort of info)
		userMapPath = "AlteriaMap\navmap.paa";
	};
};