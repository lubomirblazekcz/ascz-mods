_num = (ctrlIDC (_this select 0)) - 1200;
swt_markers_mark_color = swt_marker_color_slot_params select _num;
ctrlSetFocus ((ctrlParent (_this select 0)) displayCtrl 101);
sweetk_c = _num;
swt_marker_color_arr = getArray (configFile >> "CfgMarkerColors" >> swt_markers_mark_color >> "color");

{
    if (typeName _x != "SCALAR") then {
        swt_marker_color_arr set [_forEachIndex, call compile _x];
    };
} forEach swt_marker_color_arr;

((ctrlParent (_this select 0)) displayCtrl 102) ctrlSetTextColor swt_marker_color_arr;
{
((ctrlParent (_this select 0)) displayCtrl _x) ctrlSetTextColor swt_marker_color_arr;
} forEach controls_icon_pic;