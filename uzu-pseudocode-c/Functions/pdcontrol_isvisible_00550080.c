// Function : pdcontrol_isvisible
// Namespace: 
// Entry    : 00550080
// Prototype: undefined pdcontrol_isvisible(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00550080 - 0055009d


void pdcontrol_isvisible(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9)

{
  long *plVar1;
  uint uVar2;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = *(long **)(param_9 + 0x38);
  uVar2 = glist_isvisible(*(long *)(param_9 + 0x30));
  outlet_float(CONCAT44(extraout_XMM0_Db,(float)(int)uVar2),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,plVar1);
  return;
}


