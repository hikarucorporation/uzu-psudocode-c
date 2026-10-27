// Function : iemgui_select
// Namespace: 
// Entry    : 00575200
// Prototype: undefined iemgui_select(long param_1, undefined8 param_2, uint param_3)
// Body     : 00575200 - 0057524f


void iemgui_select(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x440) & 0xfeffffff | (param_3 & 1) << 0x18;
  uVar1 = glist_isvisible(*(long *)(param_1 + 0x30));
  if (uVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00575246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x38))(param_1,param_2,3);
  return;
}


