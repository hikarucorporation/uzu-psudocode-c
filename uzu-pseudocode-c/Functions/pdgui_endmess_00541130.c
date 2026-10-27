// Function : pdgui_endmess
// Namespace: 
// Entry    : 00541130
// Prototype: undefined pdgui_endmess(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00541130 - 0054115a


void pdgui_endmess(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int local_18 [4];
  undefined *local_8;
  
  local_18[0] = 0x72;
  local_18[1] = 1;
  local_8 = &DAT_00652b71;
  addmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_18);
  return;
}


