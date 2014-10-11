disableSerialization;

ctrlSetFocus ((ctrlParent (_this select 0)) displayCtrl 101);
_num = (ctrlIDC (_this select 0)) - 1300;
sweetk_i = _num;
swt_markers_mark_type = swt_marker_icon_slot_params select _num;
swt_pic = (ctrlText (_this select 0));
((ctrlParent (_this select 0)) displayCtrl 102) ctrlSetText swt_pic;