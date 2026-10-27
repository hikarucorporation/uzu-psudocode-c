// Function : file_isabsolute_symbol
// Namespace: 
// Entry    : 0057cb30
// Prototype: undefined file_isabsolute_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 0057cb30 - 0057cb8a


void file_isabsolute_symbol
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10)

{
  long *plVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined4 extraout_XMM0_Db;
  char acStack_3f8 [999];
  undefined1 local_11;
  
  plVar1 = *(long **)(param_9 + 0x58);
  do_expandpath((char *)*param_10,acStack_3f8,1000);
  local_11 = 0;
  sys_unbashfilename(acStack_3f8,acStack_3f8);
  local_11 = 0;
  bVar2 = sys_isabsolutepath(acStack_3f8);
  outlet_float(CONCAT44(extraout_XMM0_Db,(float)(int)CONCAT71(extraout_var,bVar2)),param_2,param_3,
               param_4,param_5,param_6,param_7,param_8,plVar1);
  return;
}


