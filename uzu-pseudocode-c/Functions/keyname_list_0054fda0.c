// Function : keyname_list
// Namespace: 
// Entry    : 0054fda0
// Prototype: undefined keyname_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 0054fda0 - 0054fdee


void keyname_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,int param_11,long param_12)

{
  long *plVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar2;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  plVar1 = *(long **)(param_9 + 0x38);
  atom_getsymbolarg(1,param_11,param_12);
  outlet_symbol(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,plVar1);
  plVar1 = *(long **)(param_9 + 0x30);
  uVar2 = atom_getfloatarg(0,param_11,param_12);
  outlet_float(CONCAT44(extraout_XMM0_Db_00,uVar2),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,plVar1);
  return;
}


