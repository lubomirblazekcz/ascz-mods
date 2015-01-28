class CfgPatches
{
	class BOSA_BASEBALL_HEADSET
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_Common"};
	};
};
class cfgWeapons
{
	class H_Cap_oli_hs;
	class ItemInfo;
	class H_Cap_bosa3_hs: H_Cap_oli_hs
	{
		displayname = "$STR_BoSA_Hat_3";
		hiddenselectionstextures[] = {"BoSA_Hats\data\bosa_cap_texture3.paa"};
		model = "\A3\Characters_F_epb\Common\capb_hs";
		picture = "\BoSA_Hats\data\bosa_cap_icon3.paa";
		UiPicture = "\BoSA_Hats\data\bosa_cap_icon3.paa";
		class ItemInfo: ItemInfo{};
	};
	class H_Cap_bosa2_hs: H_Cap_oli_hs
	{
		displayname = "$STR_BoSA_Hat_2";
		hiddenselectionstextures[] = {"BoSA_Hats\data\bosa_cap_texture2.paa"};
		model = "\A3\Characters_F_epb\Common\capb_hs";
		picture = "\BoSA_Hats\data\bosa_cap_icon2.paa";
		UiPicture = "\BoSA_Hats\data\bosa_cap_icon2.paa";
		class ItemInfo: ItemInfo{};
	};
	class H_Cap_bosa1_hs: H_Cap_oli_hs
	{
		displayname = "$STR_BoSA_Hat_1";
		hiddenselectionstextures[] = {"BoSA_Hats\data\bosa_cap_texture1.paa"};
		model = "\A3\Characters_F_epb\Common\capb_hs";
		picture = "\BoSA_Hats\data\bosa_cap_icon1.paa";
		UiPicture = "\BoSA_Hats\data\bosa_cap_icon1.paa";
		class ItemInfo: ItemInfo{};
	};
};