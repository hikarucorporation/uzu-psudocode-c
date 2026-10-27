// Function : midiin_list
// Namespace: 
// Entry    : 00554390
// Prototype: undefined midiin_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 00554390 - 005543e3


void midiin_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,int param_11,long param_12)

{
  long *plVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  plVar1 = *(long **)(param_9 + 0x38);
  fVar2 = (float)atom_getfloatarg(1,param_11,param_12);
  outlet_float(CONCAT44(extraout_XMM0_Db,fVar2 + DAT_005d9038),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,plVar1);
  plVar1 = *(long **)(param_9 + 0x30);
  uVar3 = atom_getfloatarg(0,param_11,param_12);
  outlet_float(CONCAT44(extraout_XMM0_Db_00,uVar3),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,plVar1);
  return;
}


