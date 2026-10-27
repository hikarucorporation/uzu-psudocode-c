// Function : vu_label_font
// Namespace: 
// Entry    : 005b0d80
// Prototype: undefined vu_label_font(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 005b0d80 - 005b0da6


void vu_label_font(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,int param_11,long param_12)

{
  iemgui_label_font(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9,
                    param_10,param_11,param_12);
                    /* WARNING: Could not recover jumptable at 0x005b0da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),5);
  return;
}


