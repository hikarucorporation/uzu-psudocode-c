// Function : iemgui_color
// Namespace: 
// Entry    : 005750e0
// Prototype: undefined iemgui_color(undefined8 param_1, long param_2, undefined8 param_3, uint param_4, long param_5)
// Body     : 005750e0 - 0057518c


void iemgui_color(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  uint uVar1;
  
  if ((int)param_4 < 1) goto LAB_00575159;
  uVar1 = iemgui_compatible_colorarg(0,param_4,param_5);
  *(uint *)(param_2 + 0x450) = uVar1;
  if ((param_4 == 2) && (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x2f)) {
    uVar1 = 1;
    param_4 = 2;
  }
  else {
    if (param_4 < 2) goto LAB_00575159;
    uVar1 = iemgui_compatible_colorarg(1,param_4,param_5);
    *(uint *)(param_2 + 0x44c) = uVar1;
    if (param_4 == 2) goto LAB_00575159;
    uVar1 = 2;
  }
  uVar1 = iemgui_compatible_colorarg(uVar1,param_4,param_5);
  *(uint *)(param_2 + 0x454) = uVar1;
LAB_00575159:
  uVar1 = glist_isvisible(*(long *)(param_2 + 0x30));
  if (uVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00575180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x38))(param_1,*(undefined8 *)(param_2 + 0x30),5);
  return;
}


