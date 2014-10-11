class CfgPatches
{
	class swt_markers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"a3_ui_f"};
		author[] = {"swatSTEAM"};
	};
};
class CfgFunctions
{
	class swt_markers
	{
		class Init
		{
			file = "\swt_markers_a3";
			class init
			{
				preInit = 1;
			};
		};
	};
};
class RscListBox;
class RscIGUIListBox;
class RscXListBox;
class RscStructuredText;
class RscButtonMenu;
class RscButton;
class RscPicture;
class RscText;
class RscEdit;
class RscActivePicture;
class RscToolbox;
class RscIGUIShortcutButton;
class RscShortcutButton;
class RscActiveText;
class ScrollBar;
class RscCombo;
class RscControlsGroup;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscCheckBox;
class swt_RscButtonMenu: RscButtonMenu
{
	style = 2;
	w = "10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
	h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};
class swt_RscStructuredText: RscStructuredText
{
	w = "(10-0.9) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
	size = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.85)";
	class Attributes
	{
		color = "#ffffff";
	};
};
class swt_RscCheckBox: RscCheckBox
{
	idc = -1;
	type = 77;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "1 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
	h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};
class swt_ScrollBar: ScrollBar
{
	color[] = {0,0,0,0.7};
	colorActive[] = {0,0,0,0.7};
	colorDisabled[] = {0,0,0,0.7};
	arrowEmpty = "#(argb,8,8,3)color(0,0,0,0)";
	arrowFull = "#(argb,8,8,3)color(0,0,0,0)";
};
class swt_RscControlsGroup: RscControlsGroup
{
	class VScrollbar: swt_ScrollBar
	{
		width = 0.021;
		autoScrollEnabled = 1;
	};
	class HScrollbar: swt_ScrollBar
	{
		height = 0;
	};
};
class swt_RscCombo: RscCombo
{
	colorSelect[] = {0,0,0,1};
	colorText[] = {1,1,1,1.0};
	colorBackground[] = {0,0,0,0.7};
	colorSelectBackground[] = {1,1,1,0.7};
	colorScrollbar[] = {1,0,0,1};
	wholeHeight = 0.45;
	colorActive[] = {1,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	class ComboScrollBar: ScrollBar
	{
		color[] = {1,1,1,0.5};
	};
};
class swt_RscActivePicture: RscActivePicture
{
	style = 48;
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
};
class swt_RscButton
{
	type = 1;
	style = 2;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	borderSize = 0.0;
	soundEnter[] = {};
	soundPush[] = {};
	soundClick[] = {};
	soundEscape[] = {};
};
class RscDisplayChannel
{
	onLoad = "[_this select 0] spawn {swt_text_insertMarker = ctrlText ((_this select 0) displayCtrl 101)}";
};
class RscDisplayInsertMarker
{
	onLoad = "[""onLoad"",_this] call compile preprocessfilelinenumbers '\swt_markers_a3\RscDisplayInsertMarker.sqf'; [_this, swt_text_insertMarker] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_markers_onLoad.sqf';";
	onUnload = "call swt_markers_unLoad";
	idd = 54;
	movingEnable = 1;
	onKeyDown = "_this call swt_bis_change";
	onKeyUp = "_this call swt_markers_UP";
	onMouseButtonDown = "_this call swt_markers_d_cl_pic";
	onMouseZChanged = "_this call swt_markers_scale";
	class controlsBackground
	{
		delete RscText_1000;
		class Description: RscStructuredText
		{
			colorBackground[] = {0,0,0,0.7};
			idc = 1100;
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX)";
			y = "9.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "(ctrlParent (_this select 0)) call swt_markers_click_chann";
		};
	};
	class controls
	{
		delete ButtonOK;
		class ButtonMenuOK: RscButtonMenuOK
		{
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX)";
			y = "12.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "5 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "(ctrlParent (_this select 0)) call compile preprocessFileLineNumbers '\swt_markers_a3\swt_markers_sys_sendMark.sqf'; true";
		};
		class ButtonMenuCancel: RscButtonMenuCancel
		{
			x = "19 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX)";
			y = "12.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "5 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonMenuInfo: swt_RscButtonMenu
		{
			idc = 2400;
			text = "$STR_A3_RscDisplayInsertMarker_ButtonMenuInfo";
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX)";
			y = "13.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "['buttonclick',_this] spawn compile preprocessfilelinenumbers '\swt_markers_a3\RscDisplayInsertMarker.sqf';";
		};
		delete Title;
		delete Description;
		delete Info;
		class swt_RscControlsGroup: swt_RscControlsGroup
		{
			idc = 1103;
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX)";
			y = "11.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "15 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class Info_butt_1: swt_RscButtonMenu
				{
					idc = 2000;
					text = "Info";
					x = "0";
					y = "0";
					w = "3.33 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					OnButtonClick = "[_this select 0,'info'] call swt_markers_info_buttons";
				};
				class Info_butt_2: swt_RscButtonMenu
				{
					idc = 2001;
					text = "Sett";
					x = "3.33*    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0";
					w = "3.33 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					OnButtonClick = "[_this select 0,'sett'] call swt_markers_info_buttons";
				};
				class Info_butt_3: swt_RscButtonMenu
				{
					idc = 2002;
					text = "Author";
					x = "6.66*    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0";
					w = "3.33 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					OnButtonClick = "[_this select 0,'author'] call swt_markers_info_buttons";
				};
				class Info_1: RscStructuredText
				{
					colorBackground[] = {0,0,0,0.7};
					idc = 1101;
					x = "0";
					y = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "23.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
			};
		};
		class swt_RscControlsGroup_adv: swt_RscControlsGroup
		{
			idc = 1104;
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX)";
			y = "11.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "25 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "20 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			class controls
			{
				class adv_background: RscText
				{
					idc = 822;
					x = "0 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = 0;
					w = "(21.1) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "((3.5*0.9)+(4.5*0.9)+(5.5*0.9) + 2.5 * 0.9 + 0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					colorBackground[] = {0,0,0,0.7};
					text = "";
				};
				class first_block: RscText
				{
					style = "64 + 2";
					x = "0.15 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "$STR_SWT_M_SHOW_BUTTONS";
					w = "(9.7) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(3.5*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					SizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class cb_show_butt: swt_RscCheckBox
				{
					idc = 229;
					x = "0.3 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.9)*    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "[_this,'SHOW OK'] spawn swt_markers_cb_butt";
				};
				class text_show_butt: swt_RscStructuredText
				{
					idc = 230;
					text = "$STR_SWT_M_OKCAN";
					x = "(0.9+0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h = "0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class cb_show_info: swt_RscCheckBox
				{
					idc = 241;
					x = "(0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "[_this,'SHOW INFO'] spawn swt_markers_cb_butt";
				};
				class text_show_info: swt_RscStructuredText
				{
					idc = 242;
					text = "INFO";
					x = "(0.9+0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h = "0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class Second_block: RscText
				{
					style = "64 + 2";
					x = "0.15 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.5*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "$STR_SWT_M_CHOOSE";
					w = "(9.7) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(4.5*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					SizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class cb_show_icon: swt_RscCheckBox
				{
					idc = 231;
					x = "0.3 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.5*0.9+0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "[_this,'SHOW ICON'] spawn swt_markers_cb_butt";
				};
				class text_show_icon: swt_RscStructuredText
				{
					idc = 232;
					text = "$STR_SWT_M_ICONS";
					x = "(0.9+0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.5*0.9+0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h = "0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class cb_show_color: swt_RscCheckBox
				{
					idc = 233;
					x = "0.3 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.5*0.9+2*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "[_this,'SHOW COLOR'] spawn swt_markers_cb_butt";
				};
				class text_show_color: swt_RscStructuredText
				{
					idc = 234;
					text = "$STR_SWT_M_COLORS";
					x = "(0.9+0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.5*0.9+2*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h = "0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class cb_show_lb: swt_RscCheckBox
				{
					idc = 235;
					x = "0.3 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.5*0.9+3*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "[_this,'SHOW LB'] spawn swt_markers_cb_butt";
				};
				class text_show_lb: swt_RscStructuredText
				{
					idc = 236;
					text = "$STR_SWT_M_ADVL";
					x = "(0.9+0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3.5*0.9+3*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h = "0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class third_block: RscText
				{
					style = "64 + 2";
					x = "0.15 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9)) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					text = "$STR_SWT_M_F";
					w = "(9.7) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(5.5*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					SizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class cb_save_text: swt_RscCheckBox
				{
					idc = 237;
					x = "0.3 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9) + 0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "[_this,'SAVE TEXT'] spawn swt_markers_cb_butt";
				};
				class text_save_text: swt_RscStructuredText
				{
					idc = 238;
					text = "$STR_SWT_M_SAVET";
					x = "(0.9+0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9) + 0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h = "0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class cb_save_mark: swt_RscCheckBox
				{
					idc = 245;
					x = "0.3 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9) + 2*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "[_this,'SAVE MARK'] spawn swt_markers_cb_butt";
				};
				class text_save_mark: swt_RscStructuredText
				{
					idc = 246;
					text = "$STR_SWT_M_SAVEM";
					x = "(0.9+0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9) + 2*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h = "0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class cb_fast_load: swt_RscCheckBox
				{
					idc = 239;
					x = "0.3 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9)+3*0.9)* ((((safezoneW/safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "[_this,'FAST LOAD'] spawn swt_markers_cb_butt";
				};
				class text_fast_load: swt_RscStructuredText
				{
					idc = 240;
					text = "$STR_SWT_M_FASTL";
					x = "(0.9+0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9)+3*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h = "0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class cb_show_back: swt_RscCheckBox
				{
					idc = 243;
					x = "0.3 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9) + 4*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onButtonClick = "[_this,'SHOW BACK'] spawn swt_markers_cb_butt";
				};
				class text_show_back: swt_RscStructuredText
				{
					idc = 244;
					text = "$STR_SWT_M_BACKGROUND";
					x = "(0.9+0.3) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9) + 4*0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					h = "0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class swt_text_saved: RscText
				{
					idc = 450;
					style = "64 + 2";
					text = "$STR_SWT_M_SAVEDTEXT";
					x = "0.15 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9)+(5.5*0.9)) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "9.7 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "2.5 * 0.9 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class swt_edit_saved: RscEdit
				{
					idc = 451;
					text = "";
					x = "0.3 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "((3.5*0.9)+(4.5*0.9)+(5.5*0.9) + 0.9) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "9.2 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					onKeyUp = "swt_markers_fast_text_T_saved = ctrlText (_this select 0);swt_marker_settings_params set [9, swt_markers_fast_text_T_saved]; profileNamespace setVariable ['swt_marker_settings_params', swt_marker_settings_params];saveProfileNamespace;";
					color[] = {1,1,1,1};
				};
				class swt_text_markersmap: RscText
				{
					idc = 650;
					style = "64 + 2";
					text = "$STR_SWT_M_SAVEDM";
					x = "10.2 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "0 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10.8 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(9 + 9*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class swt_text_markerspr: RscText
				{
					idc = 651;
					style = "64 + 2";
					text = "$STR_SWT_M_INPROF";
					x = "10.4 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(1) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10.4 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(4+4*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class swt_ButtonSAVE: swt_RscButtonMenu
				{
					idc = 347;
					text = "$STR_SWT_M_SAVE";
					x = "10.6 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(2)*    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					size = "0.85*(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					OnButtonClick = "_this call swt_markers_fnc_save_markers";
				};
				class swt_ButtonLOAD: swt_RscButtonMenu
				{
					idc = 348;
					text = "$STR_SWT_M_LOAD";
					x = "10.6 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(3 + 1*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					size = "0.85*(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					OnButtonClick = "[_this] call swt_markers_fnc_load_markers";
				};
				class swt_ButtonUnload: swt_RscButtonMenu
				{
					idc = 346;
					text = "$STR_SWT_M_UNLOAD";
					x = "10.6 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(4 + 2*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					size = "0.85*(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					OnButtonClick = "profileNamespace setVariable ['swt_markers_save_arr',[]]; saveProfileNamespace;";
				};
				class swt_text_clip: RscText
				{
					idc = 652;
					style = "64 + 2";
					text = "$STR_SWT_M_CLIP";
					x = "10.4 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(5 + 3*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10.4 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "(4+4*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
				};
				class swt_ButtonSaveClp: swt_RscButtonMenu
				{
					idc = 351;
					text = "$STR_SWT_M_SAVE";
					x = "10.6 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(6 + 3*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					size = "0.85*(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
					OnButtonClick = "call swt_markers_fnc_save_markers_clip";
				};
				class swt_Edit: RscEdit
				{
					idc = 653;
					text = "$STR_SWT_M_ENTERARRAY";
					x = "10.6 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(7 + 4*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					w = "10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					size = "0.85*(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class swt_ButtonClpLoad: swt_RscButtonMenu
				{
					idc = 654;
					text = "$STR_SWT_M_LOAD";
					x = "10.6 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(8 + 5*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					OnButtonClick = "[_this,ctrlText ((ctrlParent (_this select 0)) displayCtrl 653)] call swt_markers_fnc_load_markers";
					size = "0.85*(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class swt_Buttondef: swt_RscButtonMenu
				{
					idc = 345;
					text = "$STR_SWT_M_DEF";
					x = "10.6 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(9 + 10*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					OnButtonClick = "call swt_def; (ctrlParent (_this select 0)) closeDisplay 0;";
					colorBackground[] = {0.957,0,0,0.8};
					color[] = {0,0,0,1};
					size = "0.85*(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class swt_ButtonClear: swt_RscButtonMenu
				{
					idc = 349;
					text = "$STR_SWT_M_CLEARMAP";
					x = "10.6 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(10 + 11*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					OnButtonClick = "call swt_markers_clear_map_fnc";
					colorBackground[] = {0.957,0,0,0.8};
					color[] = {0,0,0,1};
					size = "0.85*(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
				class swt_ButtonDisable: swt_RscButtonMenu
				{
					idc = 350;
					text = "$STR_SWT_M_DISABLE";
					x = "10.6 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
					y = "(11 + 12*0.15) *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
					OnButtonClick = "(_this select 0) call swt_markers_DisableLoc_fnc";
					colorBackground[] = {0.957,0,0,0.8};
					color[] = {0,0,0,1};
					size = "0.85*(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				};
			};
		};
		class Settings_butt: swt_RscActivePicture
		{
			idc = 900;
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_config_ca.paa";
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX) + 10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			y = "13.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "0.75 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "_this spawn swt_markers_set_butt";
		};
		class Picture: RscPicture
		{
			idc = 102;
			moving = 1;
			x = 0.259984;
			y = 0.4;
			w = 0.05;
			h = 0.0666667;
		};
		class add_group: RscActiveText
		{
			idc = 903;
			text = "G";
			color[] = {1,1,1,0.25};
			colorText[] = {1,1,1,0.25};
			colorActive[] = {0.8,0.8,0.8,0.5};
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX) + 10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			y = "13.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "0.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "[_this select 0,'G'] call swt_markers_fast_text";
		};
		class add_name: RscActiveText
		{
			idc = 902;
			text = "N";
			color[] = {1,1,1,0.25};
			colorText[] = {1,1,1,0.25};
			colorActive[] = {0.8,0.8,0.8,0.5};
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX) + 10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			y = "13.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "0.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "[_this select 0,'N'] call swt_markers_fast_text";
		};
		class add_text: RscActiveText
		{
			idc = 901;
			text = "T";
			color[] = {1,1,1,0.25};
			colorText[] = {1,1,1,0.25};
			colorActive[] = {0.8,0.8,0.8,0.5};
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX) + 10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			y = "13.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "0.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "0.8 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "[_this select 0,'T'] call swt_markers_fast_text";
		};
		class Text: RscEdit
		{
			idc = 101;
			color[] = {1,1,1,1};
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {1,1,1,0.25};
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX)";
			y = "10.5 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class RscListbox_15000_color: RscListbox
		{
			idc = 15000;
			x = "(safezoneX)";
			y = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)+ (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "2 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel_adv";
		};
		class RscListbox_15001_pic: RscListbox
		{
			idc = 15001;
			x = "3 * (((safezoneW / safezoneH) min 1.2) / 40)+ (safezoneX)";
			y = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)+ (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "2 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel_adv";
		};
		class swt_ButtonAdv: swt_RscButtonMenu
		{
			idc = 228;
			text = "$STR_SWT_M_ADV";
			x = "14 *    (   ((safezoneW / safezoneH) min 1.2) / 40) +    (safezoneX)";
			y = "14.6 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +    (safezoneY + safezoneH -    (   ((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "_this spawn swt_markers_adv_set_butt";
		};
		class swt_color_1200: swt_RscActivePicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * safezoneW + safezoneX + 0.025* safezoneW * 1";
			y = "0.467 * safezoneH + safezoneY";
			w = "(10/6) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.7 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "[_this select 0,1] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_color_button.sqf';";
		};
		class swt_color_1201: swt_RscActivePicture
		{
			idc = 1201;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * safezoneW + safezoneX + 0.025* safezoneW * 2";
			y = "0.467 * safezoneH + safezoneY";
			w = "(10/6) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.7 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "[_this select 0,2] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_color_button.sqf';";
		};
		class swt_color_1202: swt_RscActivePicture
		{
			idc = 1202;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * safezoneW + safezoneX + 0.025* safezoneW * 3";
			y = "0.467 * safezoneH + safezoneY";
			w = "(10/6) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.7 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "[_this select 0,3] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_color_button.sqf';";
		};
		class swt_color_1203: swt_RscActivePicture
		{
			idc = 1203;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * safezoneW + safezoneX + 0.025* safezoneW * 4";
			y = "0.467 * safezoneH + safezoneY";
			w = "(10/6) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.7 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "[_this select 0,4] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_color_button.sqf';";
		};
		class swt_color_1204: swt_RscActivePicture
		{
			idc = 1204;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * safezoneW + safezoneX + 0.025* safezoneW * 5";
			y = "0.467 * safezoneH + safezoneY";
			w = "(10/6) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.7 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "[_this select 0,5] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_color_button.sqf';";
		};
		class swt_color_1205: swt_RscActivePicture
		{
			idc = 1205;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = "0.5 * safezoneW + safezoneX + 0.025 * safezoneW * 6";
			y = "0.467 * safezoneH + safezoneY";
			w = "(10/6) *    (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h = "0.7 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			OnButtonClick = "[_this select 0,6] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_color_button.sqf';";
		};
		class swt_icon_1300: swt_RscButton
		{
			idc = 1300;
			text = "\A3\ui_f\data\map\markers\military\dot_CA.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 1";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
			OnButtonClick = "[_this select 0] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_icon_button.sqf';";
		};
		class swt_icon_1301: swt_RscButton
		{
			idc = 1301;
			text = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 2";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
			OnButtonClick = "[_this select 0] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_icon_button.sqf';";
		};
		class swt_icon_1302: swt_RscButton
		{
			idc = 1302;
			text = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 3";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
			OnButtonClick = "[_this select 0] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_icon_button.sqf';";
		};
		class swt_icon_1303: swt_RscButton
		{
			idc = 1303;
			text = "\A3\ui_f\data\map\markers\handdrawn\pickup_CA.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 4";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
			OnButtonClick = "[_this select 0] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_icon_button.sqf';";
		};
		class swt_icon_1304: swt_RscButton
		{
			idc = 1304;
			text = "\A3\ui_f\data\map\markers\handdrawn\warning_CA.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 5";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
			OnButtonClick = "[_this select 0] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_icon_button.sqf';";
		};
		class swt_icon_1305: swt_RscButton
		{
			idc = 1305;
			text = "\A3\ui_f\data\map\markers\handdrawn\unknown_CA.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 6";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
			OnButtonClick = "[_this select 0] call compile preprocessFileLineNumbers '\swt_markers_a3\swt_icon_button.sqf';";
		};
		class swt_icon_1400: RscPicture
		{
			idc = 1400;
			text = "\A3\ui_f\data\map\markers\military\dot_CA.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 1";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
		};
		class swt_icon_1401: RscPicture
		{
			idc = 1401;
			text = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 2";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
		};
		class swt_icon_1402: RscPicture
		{
			idc = 1402;
			text = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 3";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
		};
		class swt_icon_1403: RscPicture
		{
			idc = 1403;
			text = "\A3\ui_f\data\map\markers\handdrawn\pickup_CA.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 4";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
		};
		class swt_icon_1404: RscPicture
		{
			idc = 1404;
			text = "\A3\ui_f\data\map\markers\handdrawn\warning_CA.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 5";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
		};
		class swt_icon_1405: RscPicture
		{
			idc = 1405;
			text = "\A3\ui_f\data\map\markers\handdrawn\unknown_CA.paa";
			x = "0.5 * safezoneW + safezoneX + 0.02* safezoneW * 6";
			y = "0.5 * safezoneH + safezoneY";
			w = 0.05;
			h = 0.0666667;
		};
		class swt_RscCombo_2100: swt_RscCombo
		{
			idc = 2100;
			x = "0.448438 * safezoneW + safezoneX";
			y = "0.511 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2101: swt_RscCombo
		{
			idc = 2101;
			x = "0.448438 * safezoneW + safezoneX";
			y = "0.533 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2102: swt_RscCombo
		{
			idc = 2102;
			x = "0.448438 * safezoneW + safezoneX";
			y = "0.555 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2103: swt_RscCombo
		{
			idc = 2103;
			x = "0.448438 * safezoneW + safezoneX";
			y = "0.577 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2104: swt_RscCombo
		{
			idc = 2104;
			x = "0.448438 * safezoneW + safezoneX";
			y = "0.599 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2105: swt_RscCombo
		{
			idc = 2105;
			x = "0.448438 * safezoneW + safezoneX";
			y = "0.621 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2106: swt_RscCombo
		{
			idc = 2106;
			x = "0.520625 * safezoneW + safezoneX";
			y = "0.511 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2107: swt_RscCombo
		{
			idc = 2107;
			x = "0.520625 * safezoneW + safezoneX";
			y = "0.533 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2108: swt_RscCombo
		{
			idc = 2108;
			x = "0.520625 * safezoneW + safezoneX";
			y = "0.555 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2109: swt_RscCombo
		{
			idc = 2109;
			x = "0.520625 * safezoneW + safezoneX";
			y = "0.577 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2110: swt_RscCombo
		{
			idc = 2110;
			x = "0.520625 * safezoneW + safezoneX";
			y = "0.599 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
		class swt_RscCombo_2111: swt_RscCombo
		{
			idc = 2111;
			x = "0.520625 * safezoneW + safezoneX";
			y = "0.621 * safezoneH + safezoneY";
			w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			onLBSelChanged = "_this call swt_markers_lb_sel;";
		};
	};
};
class CfgFactionClasses
{
	class swt_markers_a3
	{
		displayName = "Sweet Markers System";
		priority = 0;
		side = 7;
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F;
	class swt_markers_disable: Module_F
	{
		scope = 2;
		author = "swatSTEAM";
		displayName = "$STR_SWT_M_MODUL_BRIEF";
		category = "swt_markers_a3";
		function = "";
		functionPriority = 1;
		class init
		{
			postInit = 1;
		};
		isGlobal = 2;
		isTriggerActivated = 0;
		class Eventhandlers
		{
			init = "_this spawn compile preprocessFileLineNumbers '\swt_markers_a3\swt_disable.sqf';";
		};
	};
	class swt_markers_uniq_maps: Module_F
	{
		scope = 2;
		author = "swatSTEAM";
		displayName = "$STR_SWT_M_MODUL_UNIQ";
		category = "swt_markers_a3";
		function = "";
		functionPriority = 1;
		class init
		{
			postInit = 1;
		};
		isGlobal = 2;
		isTriggerActivated = 0;
		class Eventhandlers
		{
			init = "_this spawn compile preprocessFileLineNumbers '\swt_markers_a3\uniq_maps.sqf';";
		};
	};
	class swt_markers_params: Module_F
	{
		scope = 2;
		author = "swatSTEAM";
		displayName = "$STR_SWT_M_MODUL_CONF";
		category = "swt_markers_a3";
		function = "";
		functionPriority = 1;
		class init
		{
			postInit = 1;
		};
		isGlobal = 2;
		isTriggerActivated = 0;
		class Eventhandlers
		{
			init = "_this spawn compile preprocessFileLineNumbers '\swt_markers_a3\swt_markers_params.sqf';";
		};
		class Arguments
		{
			class Loads
			{
				displayName = "$STR_SWT_M_MODUL_LOAD";
				description = "$STR_SWT_M_MODUL_LOAD_T";
				typeName = "BOOL";
				class values
				{
					class On
					{
						name = "On";
						value = 1;
						default = 1;
					};
					class Off
					{
						name = "Off";
						value = 0;
					};
				};
			};
			class Loads_for
			{
				displayName = "$STR_SWT_M_MODUL_LOAD_FOR";
				description = "$STR_SWT_M_MODUL_LOAD_FOR_T";
				typeName = "BOOL";
				class values
				{
					class On
					{
						name = "$STR_SWT_M_MODUL_LOAD_FOR_LEAD";
						value = 1;
						default = 1;
					};
					class Off
					{
						name = "$STR_SWT_M_MODUL_LOAD_FOR_ALL";
						value = 0;
					};
				};
			};
			class Loads_brif
			{
				displayName = "$STR_SWT_M_MODUL_LOAD_WHEN";
				description = "$STR_SWT_M_MODUL_LOAD_WHEN";
				typeName = "BOOL";
				class values
				{
					class On
					{
						name = "$STR_SWT_M_MODUL_LOAD_WHEN_A";
						value = 1;
						default = 1;
					};
					class Off
					{
						name = "$STR_SWT_M_MODUL_LOAD_WHEN_BRIEF";
						value = 0;
					};
				};
			};
			class Fast
			{
				displayName = "$STR_SWT_M_MODUL_FAST";
				description = "$STR_SWT_M_MODUL_FAST";
				typeName = "BOOL";
				class values
				{
					class On
					{
						name = "On";
						value = 1;
					};
					class Off
					{
						name = "Off";
						value = 0;
						default = 1;
					};
				};
			};
			class Fast_for
			{
				displayName = "$STR_SWT_M_MODUL_FAST_FOR";
				description = "$STR_SWT_M_MODUL_FAST_FOR";
				typeName = "BOOL";
				class values
				{
					class On
					{
						name = "$STR_SWT_M_MODUL_LOAD_FOR_LEAD";
						value = 1;
						default = 1;
					};
					class Off
					{
						name = "$STR_SWT_M_MODUL_LOAD_FOR_ALL";
						value = 0;
					};
				};
			};
		};
	};
};
class CfgWeapons
{
	class ItemMap;
	class swt_map_id_1: ItemMap
	{
		displayName = "Personal map ID:1";
	};
	class swt_map_id_2: ItemMap
	{
		displayName = "Personal map ID:2";
	};
	class swt_map_id_3: ItemMap
	{
		displayName = "Personal map ID:3";
	};
	class swt_map_id_4: ItemMap
	{
		displayName = "Personal map ID:4";
	};
	class swt_map_id_5: ItemMap
	{
		displayName = "Personal map ID:5";
	};
	class swt_map_id_6: ItemMap
	{
		displayName = "Personal map ID:6";
	};
	class swt_map_id_7: ItemMap
	{
		displayName = "Personal map ID:7";
	};
	class swt_map_id_8: ItemMap
	{
		displayName = "Personal map ID:8";
	};
	class swt_map_id_9: ItemMap
	{
		displayName = "Personal map ID:9";
	};
	class swt_map_id_10: ItemMap
	{
		displayName = "Personal map ID:10";
	};
	class swt_map_id_11: ItemMap
	{
		displayName = "Personal map ID:11";
	};
	class swt_map_id_12: ItemMap
	{
		displayName = "Personal map ID:12";
	};
	class swt_map_id_13: ItemMap
	{
		displayName = "Personal map ID:13";
	};
	class swt_map_id_14: ItemMap
	{
		displayName = "Personal map ID:14";
	};
	class swt_map_id_15: ItemMap
	{
		displayName = "Personal map ID:15";
	};
	class swt_map_id_16: ItemMap
	{
		displayName = "Personal map ID:16";
	};
	class swt_map_id_17: ItemMap
	{
		displayName = "Personal map ID:17";
	};
	class swt_map_id_18: ItemMap
	{
		displayName = "Personal map ID:18";
	};
	class swt_map_id_19: ItemMap
	{
		displayName = "Personal map ID:19";
	};
	class swt_map_id_20: ItemMap
	{
		displayName = "Personal map ID:20";
	};
	class swt_map_id_21: ItemMap
	{
		displayName = "Personal map ID:21";
	};
	class swt_map_id_22: ItemMap
	{
		displayName = "Personal map ID:22";
	};
	class swt_map_id_23: ItemMap
	{
		displayName = "Personal map ID:23";
	};
	class swt_map_id_24: ItemMap
	{
		displayName = "Personal map ID:24";
	};
	class swt_map_id_25: ItemMap
	{
		displayName = "Personal map ID:25";
	};
	class swt_map_id_26: ItemMap
	{
		displayName = "Personal map ID:26";
	};
	class swt_map_id_27: ItemMap
	{
		displayName = "Personal map ID:27";
	};
	class swt_map_id_28: ItemMap
	{
		displayName = "Personal map ID:28";
	};
	class swt_map_id_29: ItemMap
	{
		displayName = "Personal map ID:29";
	};
	class swt_map_id_30: ItemMap
	{
		displayName = "Personal map ID:30";
	};
	class swt_map_id_31: ItemMap
	{
		displayName = "Personal map ID:31";
	};
	class swt_map_id_32: ItemMap
	{
		displayName = "Personal map ID:32";
	};
	class swt_map_id_33: ItemMap
	{
		displayName = "Personal map ID:33";
	};
	class swt_map_id_34: ItemMap
	{
		displayName = "Personal map ID:34";
	};
	class swt_map_id_35: ItemMap
	{
		displayName = "Personal map ID:35";
	};
	class swt_map_id_36: ItemMap
	{
		displayName = "Personal map ID:36";
	};
	class swt_map_id_37: ItemMap
	{
		displayName = "Personal map ID:37";
	};
	class swt_map_id_38: ItemMap
	{
		displayName = "Personal map ID:38";
	};
	class swt_map_id_39: ItemMap
	{
		displayName = "Personal map ID:39";
	};
	class swt_map_id_40: ItemMap
	{
		displayName = "Personal map ID:40";
	};
	class swt_map_id_41: ItemMap
	{
		displayName = "Personal map ID:41";
	};
	class swt_map_id_42: ItemMap
	{
		displayName = "Personal map ID:42";
	};
	class swt_map_id_43: ItemMap
	{
		displayName = "Personal map ID:43";
	};
	class swt_map_id_44: ItemMap
	{
		displayName = "Personal map ID:44";
	};
	class swt_map_id_45: ItemMap
	{
		displayName = "Personal map ID:45";
	};
	class swt_map_id_46: ItemMap
	{
		displayName = "Personal map ID:46";
	};
	class swt_map_id_47: ItemMap
	{
		displayName = "Personal map ID:47";
	};
	class swt_map_id_48: ItemMap
	{
		displayName = "Personal map ID:48";
	};
	class swt_map_id_49: ItemMap
	{
		displayName = "Personal map ID:49";
	};
	class swt_map_id_50: ItemMap
	{
		displayName = "Personal map ID:50";
	};
	class swt_map_id_51: ItemMap
	{
		displayName = "Personal map ID:51";
	};
	class swt_map_id_52: ItemMap
	{
		displayName = "Personal map ID:52";
	};
	class swt_map_id_53: ItemMap
	{
		displayName = "Personal map ID:53";
	};
	class swt_map_id_54: ItemMap
	{
		displayName = "Personal map ID:54";
	};
	class swt_map_id_55: ItemMap
	{
		displayName = "Personal map ID:55";
	};
	class swt_map_id_56: ItemMap
	{
		displayName = "Personal map ID:56";
	};
	class swt_map_id_57: ItemMap
	{
		displayName = "Personal map ID:57";
	};
	class swt_map_id_58: ItemMap
	{
		displayName = "Personal map ID:58";
	};
	class swt_map_id_59: ItemMap
	{
		displayName = "Personal map ID:59";
	};
	class swt_map_id_60: ItemMap
	{
		displayName = "Personal map ID:60";
	};
	class swt_map_id_61: ItemMap
	{
		displayName = "Personal map ID:61";
	};
	class swt_map_id_62: ItemMap
	{
		displayName = "Personal map ID:62";
	};
	class swt_map_id_63: ItemMap
	{
		displayName = "Personal map ID:63";
	};
	class swt_map_id_64: ItemMap
	{
		displayName = "Personal map ID:64";
	};
	class swt_map_id_65: ItemMap
	{
		displayName = "Personal map ID:65";
	};
	class swt_map_id_66: ItemMap
	{
		displayName = "Personal map ID:66";
	};
	class swt_map_id_67: ItemMap
	{
		displayName = "Personal map ID:67";
	};
	class swt_map_id_68: ItemMap
	{
		displayName = "Personal map ID:68";
	};
	class swt_map_id_69: ItemMap
	{
		displayName = "Personal map ID:69";
	};
	class swt_map_id_70: ItemMap
	{
		displayName = "Personal map ID:70";
	};
	class swt_map_id_71: ItemMap
	{
		displayName = "Personal map ID:71";
	};
	class swt_map_id_72: ItemMap
	{
		displayName = "Personal map ID:72";
	};
	class swt_map_id_73: ItemMap
	{
		displayName = "Personal map ID:73";
	};
	class swt_map_id_74: ItemMap
	{
		displayName = "Personal map ID:74";
	};
	class swt_map_id_75: ItemMap
	{
		displayName = "Personal map ID:75";
	};
	class swt_map_id_76: ItemMap
	{
		displayName = "Personal map ID:76";
	};
	class swt_map_id_77: ItemMap
	{
		displayName = "Personal map ID:77";
	};
	class swt_map_id_78: ItemMap
	{
		displayName = "Personal map ID:78";
	};
	class swt_map_id_79: ItemMap
	{
		displayName = "Personal map ID:79";
	};
	class swt_map_id_80: ItemMap
	{
		displayName = "Personal map ID:80";
	};
	class swt_map_id_81: ItemMap
	{
		displayName = "Personal map ID:81";
	};
	class swt_map_id_82: ItemMap
	{
		displayName = "Personal map ID:82";
	};
	class swt_map_id_83: ItemMap
	{
		displayName = "Personal map ID:83";
	};
	class swt_map_id_84: ItemMap
	{
		displayName = "Personal map ID:84";
	};
	class swt_map_id_85: ItemMap
	{
		displayName = "Personal map ID:85";
	};
	class swt_map_id_86: ItemMap
	{
		displayName = "Personal map ID:86";
	};
	class swt_map_id_87: ItemMap
	{
		displayName = "Personal map ID:87";
	};
	class swt_map_id_88: ItemMap
	{
		displayName = "Personal map ID:88";
	};
	class swt_map_id_89: ItemMap
	{
		displayName = "Personal map ID:89";
	};
	class swt_map_id_90: ItemMap
	{
		displayName = "Personal map ID:90";
	};
	class swt_map_id_91: ItemMap
	{
		displayName = "Personal map ID:91";
	};
	class swt_map_id_92: ItemMap
	{
		displayName = "Personal map ID:92";
	};
	class swt_map_id_93: ItemMap
	{
		displayName = "Personal map ID:93";
	};
	class swt_map_id_94: ItemMap
	{
		displayName = "Personal map ID:94";
	};
	class swt_map_id_95: ItemMap
	{
		displayName = "Personal map ID:95";
	};
	class swt_map_id_96: ItemMap
	{
		displayName = "Personal map ID:96";
	};
	class swt_map_id_97: ItemMap
	{
		displayName = "Personal map ID:97";
	};
	class swt_map_id_98: ItemMap
	{
		displayName = "Personal map ID:98";
	};
	class swt_map_id_99: ItemMap
	{
		displayName = "Personal map ID:99";
	};
	class swt_map_id_100: ItemMap
	{
		displayName = "Personal map ID:100";
	};
	class swt_map_id_101: ItemMap
	{
		displayName = "Personal map ID:101";
	};
	class swt_map_id_102: ItemMap
	{
		displayName = "Personal map ID:102";
	};
	class swt_map_id_103: ItemMap
	{
		displayName = "Personal map ID:103";
	};
	class swt_map_id_104: ItemMap
	{
		displayName = "Personal map ID:104";
	};
	class swt_map_id_105: ItemMap
	{
		displayName = "Personal map ID:105";
	};
	class swt_map_id_106: ItemMap
	{
		displayName = "Personal map ID:106";
	};
	class swt_map_id_107: ItemMap
	{
		displayName = "Personal map ID:107";
	};
	class swt_map_id_108: ItemMap
	{
		displayName = "Personal map ID:108";
	};
	class swt_map_id_109: ItemMap
	{
		displayName = "Personal map ID:109";
	};
	class swt_map_id_110: ItemMap
	{
		displayName = "Personal map ID:110";
	};
	class swt_map_id_111: ItemMap
	{
		displayName = "Personal map ID:111";
	};
	class swt_map_id_112: ItemMap
	{
		displayName = "Personal map ID:112";
	};
	class swt_map_id_113: ItemMap
	{
		displayName = "Personal map ID:113";
	};
	class swt_map_id_114: ItemMap
	{
		displayName = "Personal map ID:114";
	};
	class swt_map_id_115: ItemMap
	{
		displayName = "Personal map ID:115";
	};
	class swt_map_id_116: ItemMap
	{
		displayName = "Personal map ID:116";
	};
	class swt_map_id_117: ItemMap
	{
		displayName = "Personal map ID:117";
	};
	class swt_map_id_118: ItemMap
	{
		displayName = "Personal map ID:118";
	};
	class swt_map_id_119: ItemMap
	{
		displayName = "Personal map ID:119";
	};
	class swt_map_id_120: ItemMap
	{
		displayName = "Personal map ID:120";
	};
	class swt_map_id_121: ItemMap
	{
		displayName = "Personal map ID:121";
	};
	class swt_map_id_122: ItemMap
	{
		displayName = "Personal map ID:122";
	};
	class swt_map_id_123: ItemMap
	{
		displayName = "Personal map ID:123";
	};
	class swt_map_id_124: ItemMap
	{
		displayName = "Personal map ID:124";
	};
	class swt_map_id_125: ItemMap
	{
		displayName = "Personal map ID:125";
	};
	class swt_map_id_126: ItemMap
	{
		displayName = "Personal map ID:126";
	};
	class swt_map_id_127: ItemMap
	{
		displayName = "Personal map ID:127";
	};
	class swt_map_id_128: ItemMap
	{
		displayName = "Personal map ID:128";
	};
	class swt_map_id_129: ItemMap
	{
		displayName = "Personal map ID:129";
	};
	class swt_map_id_130: ItemMap
	{
		displayName = "Personal map ID:130";
	};
	class swt_map_id_131: ItemMap
	{
		displayName = "Personal map ID:131";
	};
	class swt_map_id_132: ItemMap
	{
		displayName = "Personal map ID:132";
	};
	class swt_map_id_133: ItemMap
	{
		displayName = "Personal map ID:133";
	};
	class swt_map_id_134: ItemMap
	{
		displayName = "Personal map ID:134";
	};
	class swt_map_id_135: ItemMap
	{
		displayName = "Personal map ID:135";
	};
	class swt_map_id_136: ItemMap
	{
		displayName = "Personal map ID:136";
	};
	class swt_map_id_137: ItemMap
	{
		displayName = "Personal map ID:137";
	};
	class swt_map_id_138: ItemMap
	{
		displayName = "Personal map ID:138";
	};
	class swt_map_id_139: ItemMap
	{
		displayName = "Personal map ID:139";
	};
	class swt_map_id_140: ItemMap
	{
		displayName = "Personal map ID:140";
	};
	class swt_map_id_141: ItemMap
	{
		displayName = "Personal map ID:141";
	};
	class swt_map_id_142: ItemMap
	{
		displayName = "Personal map ID:142";
	};
	class swt_map_id_143: ItemMap
	{
		displayName = "Personal map ID:143";
	};
	class swt_map_id_144: ItemMap
	{
		displayName = "Personal map ID:144";
	};
	class swt_map_id_145: ItemMap
	{
		displayName = "Personal map ID:145";
	};
	class swt_map_id_146: ItemMap
	{
		displayName = "Personal map ID:146";
	};
	class swt_map_id_147: ItemMap
	{
		displayName = "Personal map ID:147";
	};
	class swt_map_id_148: ItemMap
	{
		displayName = "Personal map ID:148";
	};
	class swt_map_id_149: ItemMap
	{
		displayName = "Personal map ID:149";
	};
	class swt_map_id_150: ItemMap
	{
		displayName = "Personal map ID:150";
	};
	class swt_map_id_151: ItemMap
	{
		displayName = "Personal map ID:151";
	};
	class swt_map_id_152: ItemMap
	{
		displayName = "Personal map ID:152";
	};
	class swt_map_id_153: ItemMap
	{
		displayName = "Personal map ID:153";
	};
	class swt_map_id_154: ItemMap
	{
		displayName = "Personal map ID:154";
	};
	class swt_map_id_155: ItemMap
	{
		displayName = "Personal map ID:155";
	};
	class swt_map_id_156: ItemMap
	{
		displayName = "Personal map ID:156";
	};
	class swt_map_id_157: ItemMap
	{
		displayName = "Personal map ID:157";
	};
	class swt_map_id_158: ItemMap
	{
		displayName = "Personal map ID:158";
	};
	class swt_map_id_159: ItemMap
	{
		displayName = "Personal map ID:159";
	};
	class swt_map_id_160: ItemMap
	{
		displayName = "Personal map ID:160";
	};
	class swt_map_id_161: ItemMap
	{
		displayName = "Personal map ID:161";
	};
	class swt_map_id_162: ItemMap
	{
		displayName = "Personal map ID:162";
	};
	class swt_map_id_163: ItemMap
	{
		displayName = "Personal map ID:163";
	};
	class swt_map_id_164: ItemMap
	{
		displayName = "Personal map ID:164";
	};
	class swt_map_id_165: ItemMap
	{
		displayName = "Personal map ID:165";
	};
	class swt_map_id_166: ItemMap
	{
		displayName = "Personal map ID:166";
	};
	class swt_map_id_167: ItemMap
	{
		displayName = "Personal map ID:167";
	};
	class swt_map_id_168: ItemMap
	{
		displayName = "Personal map ID:168";
	};
	class swt_map_id_169: ItemMap
	{
		displayName = "Personal map ID:169";
	};
	class swt_map_id_170: ItemMap
	{
		displayName = "Personal map ID:170";
	};
	class swt_map_id_171: ItemMap
	{
		displayName = "Personal map ID:171";
	};
	class swt_map_id_172: ItemMap
	{
		displayName = "Personal map ID:172";
	};
	class swt_map_id_173: ItemMap
	{
		displayName = "Personal map ID:173";
	};
	class swt_map_id_174: ItemMap
	{
		displayName = "Personal map ID:174";
	};
	class swt_map_id_175: ItemMap
	{
		displayName = "Personal map ID:175";
	};
	class swt_map_id_176: ItemMap
	{
		displayName = "Personal map ID:176";
	};
	class swt_map_id_177: ItemMap
	{
		displayName = "Personal map ID:177";
	};
	class swt_map_id_178: ItemMap
	{
		displayName = "Personal map ID:178";
	};
	class swt_map_id_179: ItemMap
	{
		displayName = "Personal map ID:179";
	};
	class swt_map_id_180: ItemMap
	{
		displayName = "Personal map ID:180";
	};
	class swt_map_id_181: ItemMap
	{
		displayName = "Personal map ID:181";
	};
	class swt_map_id_182: ItemMap
	{
		displayName = "Personal map ID:182";
	};
	class swt_map_id_183: ItemMap
	{
		displayName = "Personal map ID:183";
	};
	class swt_map_id_184: ItemMap
	{
		displayName = "Personal map ID:184";
	};
	class swt_map_id_185: ItemMap
	{
		displayName = "Personal map ID:185";
	};
	class swt_map_id_186: ItemMap
	{
		displayName = "Personal map ID:186";
	};
	class swt_map_id_187: ItemMap
	{
		displayName = "Personal map ID:187";
	};
	class swt_map_id_188: ItemMap
	{
		displayName = "Personal map ID:188";
	};
	class swt_map_id_189: ItemMap
	{
		displayName = "Personal map ID:189";
	};
	class swt_map_id_190: ItemMap
	{
		displayName = "Personal map ID:190";
	};
	class swt_map_id_191: ItemMap
	{
		displayName = "Personal map ID:191";
	};
	class swt_map_id_192: ItemMap
	{
		displayName = "Personal map ID:192";
	};
	class swt_map_id_193: ItemMap
	{
		displayName = "Personal map ID:193";
	};
	class swt_map_id_194: ItemMap
	{
		displayName = "Personal map ID:194";
	};
	class swt_map_id_195: ItemMap
	{
		displayName = "Personal map ID:195";
	};
	class swt_map_id_196: ItemMap
	{
		displayName = "Personal map ID:196";
	};
	class swt_map_id_197: ItemMap
	{
		displayName = "Personal map ID:197";
	};
	class swt_map_id_198: ItemMap
	{
		displayName = "Personal map ID:198";
	};
	class swt_map_id_199: ItemMap
	{
		displayName = "Personal map ID:199";
	};
	class swt_map_id_200: ItemMap
	{
		displayName = "Personal map ID:200";
	};
	class swt_map_id_201: ItemMap
	{
		displayName = "Personal map ID:201";
	};
	class swt_map_id_202: ItemMap
	{
		displayName = "Personal map ID:202";
	};
	class swt_map_id_203: ItemMap
	{
		displayName = "Personal map ID:203";
	};
	class swt_map_id_204: ItemMap
	{
		displayName = "Personal map ID:204";
	};
	class swt_map_id_205: ItemMap
	{
		displayName = "Personal map ID:205";
	};
	class swt_map_id_206: ItemMap
	{
		displayName = "Personal map ID:206";
	};
	class swt_map_id_207: ItemMap
	{
		displayName = "Personal map ID:207";
	};
	class swt_map_id_208: ItemMap
	{
		displayName = "Personal map ID:208";
	};
	class swt_map_id_209: ItemMap
	{
		displayName = "Personal map ID:209";
	};
	class swt_map_id_210: ItemMap
	{
		displayName = "Personal map ID:210";
	};
	class swt_map_id_211: ItemMap
	{
		displayName = "Personal map ID:211";
	};
	class swt_map_id_212: ItemMap
	{
		displayName = "Personal map ID:212";
	};
	class swt_map_id_213: ItemMap
	{
		displayName = "Personal map ID:213";
	};
	class swt_map_id_214: ItemMap
	{
		displayName = "Personal map ID:214";
	};
	class swt_map_id_215: ItemMap
	{
		displayName = "Personal map ID:215";
	};
	class swt_map_id_216: ItemMap
	{
		displayName = "Personal map ID:216";
	};
	class swt_map_id_217: ItemMap
	{
		displayName = "Personal map ID:217";
	};
	class swt_map_id_218: ItemMap
	{
		displayName = "Personal map ID:218";
	};
	class swt_map_id_219: ItemMap
	{
		displayName = "Personal map ID:219";
	};
	class swt_map_id_220: ItemMap
	{
		displayName = "Personal map ID:220";
	};
	class swt_map_id_221: ItemMap
	{
		displayName = "Personal map ID:221";
	};
	class swt_map_id_222: ItemMap
	{
		displayName = "Personal map ID:222";
	};
	class swt_map_id_223: ItemMap
	{
		displayName = "Personal map ID:223";
	};
	class swt_map_id_224: ItemMap
	{
		displayName = "Personal map ID:224";
	};
	class swt_map_id_225: ItemMap
	{
		displayName = "Personal map ID:225";
	};
	class swt_map_id_226: ItemMap
	{
		displayName = "Personal map ID:226";
	};
	class swt_map_id_227: ItemMap
	{
		displayName = "Personal map ID:227";
	};
	class swt_map_id_228: ItemMap
	{
		displayName = "Personal map ID:228";
	};
	class swt_map_id_229: ItemMap
	{
		displayName = "Personal map ID:229";
	};
	class swt_map_id_230: ItemMap
	{
		displayName = "Personal map ID:230";
	};
	class swt_map_id_231: ItemMap
	{
		displayName = "Personal map ID:231";
	};
	class swt_map_id_232: ItemMap
	{
		displayName = "Personal map ID:232";
	};
	class swt_map_id_233: ItemMap
	{
		displayName = "Personal map ID:233";
	};
	class swt_map_id_234: ItemMap
	{
		displayName = "Personal map ID:234";
	};
	class swt_map_id_235: ItemMap
	{
		displayName = "Personal map ID:235";
	};
	class swt_map_id_236: ItemMap
	{
		displayName = "Personal map ID:236";
	};
	class swt_map_id_237: ItemMap
	{
		displayName = "Personal map ID:237";
	};
	class swt_map_id_238: ItemMap
	{
		displayName = "Personal map ID:238";
	};
	class swt_map_id_239: ItemMap
	{
		displayName = "Personal map ID:239";
	};
	class swt_map_id_240: ItemMap
	{
		displayName = "Personal map ID:240";
	};
	class swt_map_id_241: ItemMap
	{
		displayName = "Personal map ID:241";
	};
	class swt_map_id_242: ItemMap
	{
		displayName = "Personal map ID:242";
	};
	class swt_map_id_243: ItemMap
	{
		displayName = "Personal map ID:243";
	};
	class swt_map_id_244: ItemMap
	{
		displayName = "Personal map ID:244";
	};
	class swt_map_id_245: ItemMap
	{
		displayName = "Personal map ID:245";
	};
	class swt_map_id_246: ItemMap
	{
		displayName = "Personal map ID:246";
	};
	class swt_map_id_247: ItemMap
	{
		displayName = "Personal map ID:247";
	};
	class swt_map_id_248: ItemMap
	{
		displayName = "Personal map ID:248";
	};
	class swt_map_id_249: ItemMap
	{
		displayName = "Personal map ID:249";
	};
	class swt_map_id_250: ItemMap
	{
		displayName = "Personal map ID:250";
	};
	class swt_map_id_251: ItemMap
	{
		displayName = "Personal map ID:251";
	};
	class swt_map_id_252: ItemMap
	{
		displayName = "Personal map ID:252";
	};
	class swt_map_id_253: ItemMap
	{
		displayName = "Personal map ID:253";
	};
	class swt_map_id_254: ItemMap
	{
		displayName = "Personal map ID:254";
	};
	class swt_map_id_255: ItemMap
	{
		displayName = "Personal map ID:255";
	};
	class swt_map_id_256: ItemMap
	{
		displayName = "Personal map ID:256";
	};
	class swt_map_id_257: ItemMap
	{
		displayName = "Personal map ID:257";
	};
	class swt_map_id_258: ItemMap
	{
		displayName = "Personal map ID:258";
	};
	class swt_map_id_259: ItemMap
	{
		displayName = "Personal map ID:259";
	};
	class swt_map_id_260: ItemMap
	{
		displayName = "Personal map ID:260";
	};
	class swt_map_id_261: ItemMap
	{
		displayName = "Personal map ID:261";
	};
	class swt_map_id_262: ItemMap
	{
		displayName = "Personal map ID:262";
	};
	class swt_map_id_263: ItemMap
	{
		displayName = "Personal map ID:263";
	};
	class swt_map_id_264: ItemMap
	{
		displayName = "Personal map ID:264";
	};
	class swt_map_id_265: ItemMap
	{
		displayName = "Personal map ID:265";
	};
	class swt_map_id_266: ItemMap
	{
		displayName = "Personal map ID:266";
	};
	class swt_map_id_267: ItemMap
	{
		displayName = "Personal map ID:267";
	};
	class swt_map_id_268: ItemMap
	{
		displayName = "Personal map ID:268";
	};
	class swt_map_id_269: ItemMap
	{
		displayName = "Personal map ID:269";
	};
	class swt_map_id_270: ItemMap
	{
		displayName = "Personal map ID:270";
	};
	class swt_map_id_271: ItemMap
	{
		displayName = "Personal map ID:271";
	};
	class swt_map_id_272: ItemMap
	{
		displayName = "Personal map ID:272";
	};
	class swt_map_id_273: ItemMap
	{
		displayName = "Personal map ID:273";
	};
	class swt_map_id_274: ItemMap
	{
		displayName = "Personal map ID:274";
	};
	class swt_map_id_275: ItemMap
	{
		displayName = "Personal map ID:275";
	};
	class swt_map_id_276: ItemMap
	{
		displayName = "Personal map ID:276";
	};
	class swt_map_id_277: ItemMap
	{
		displayName = "Personal map ID:277";
	};
	class swt_map_id_278: ItemMap
	{
		displayName = "Personal map ID:278";
	};
	class swt_map_id_279: ItemMap
	{
		displayName = "Personal map ID:279";
	};
	class swt_map_id_280: ItemMap
	{
		displayName = "Personal map ID:280";
	};
	class swt_map_id_281: ItemMap
	{
		displayName = "Personal map ID:281";
	};
	class swt_map_id_282: ItemMap
	{
		displayName = "Personal map ID:282";
	};
	class swt_map_id_283: ItemMap
	{
		displayName = "Personal map ID:283";
	};
	class swt_map_id_284: ItemMap
	{
		displayName = "Personal map ID:284";
	};
	class swt_map_id_285: ItemMap
	{
		displayName = "Personal map ID:285";
	};
	class swt_map_id_286: ItemMap
	{
		displayName = "Personal map ID:286";
	};
	class swt_map_id_287: ItemMap
	{
		displayName = "Personal map ID:287";
	};
	class swt_map_id_288: ItemMap
	{
		displayName = "Personal map ID:288";
	};
	class swt_map_id_289: ItemMap
	{
		displayName = "Personal map ID:289";
	};
	class swt_map_id_290: ItemMap
	{
		displayName = "Personal map ID:290";
	};
	class swt_map_id_291: ItemMap
	{
		displayName = "Personal map ID:291";
	};
	class swt_map_id_292: ItemMap
	{
		displayName = "Personal map ID:292";
	};
	class swt_map_id_293: ItemMap
	{
		displayName = "Personal map ID:293";
	};
	class swt_map_id_294: ItemMap
	{
		displayName = "Personal map ID:294";
	};
	class swt_map_id_295: ItemMap
	{
		displayName = "Personal map ID:295";
	};
	class swt_map_id_296: ItemMap
	{
		displayName = "Personal map ID:296";
	};
	class swt_map_id_297: ItemMap
	{
		displayName = "Personal map ID:297";
	};
	class swt_map_id_298: ItemMap
	{
		displayName = "Personal map ID:298";
	};
	class swt_map_id_299: ItemMap
	{
		displayName = "Personal map ID:299";
	};
	class swt_map_id_300: ItemMap
	{
		displayName = "Personal map ID:300";
	};
};