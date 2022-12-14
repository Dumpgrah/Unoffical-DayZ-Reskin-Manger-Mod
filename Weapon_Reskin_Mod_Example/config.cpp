class CfgPatches
{
	class Weapon_Reskin_Mod_Example
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class Weapon_Reskin_Mod_Example
	{
		dir="Weapon_Reskin_Mod_Example";
		name="Paintable_stuff_101";
		credits="Dumpgrah,Daemon";
		author="Dumpgrah";
		authorID="0";
		version="1.25";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Weapon_Reskin_Mod_Example\Scripts\4_World"
				};
			};
		};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class B95_Base: Rifle_Base
	{
		hiddenSelections[]=
		{
			"zbytek"
		};
	};
	class FAL_Base: Rifle_Base
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\weapons\firearms\fal\data\fal_co.paa"
		};
	};

};
class CfgVehicles
{
	class Spraycan_ColorBase;
	class Versatile_Spraycan: Spraycan_ColorBase
	{
		scope=2;
		displayName="Testing Versatile Paint Spray Can";
		descriptionShort="A spray can used for painting ojects.";
		model="\dz\gear\consumables\spraycan.p3d";
		weight=100;
		itemSize[]={1,3};
		stackedUnit="ml";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		hiddenSelectionsTextures[]=
		{
			"Weapon_Reskin_Mod_Example\data\RandomSpray.paa"
		};
	};

};
