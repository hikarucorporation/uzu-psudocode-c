// Function : dac_set
// Namespace: 
// Entry    : 00590b50
// Prototype: undefined dac_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12)
// Body     : 00590b50 - 00590ba8


void dac_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 param_10,uint param_11,long param_12)

{
  ulong uVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  
  if (0 < (int)param_11) {
    uVar1 = 0;
    do {
      if (*(long *)(param_9 + 0x30) <= (long)uVar1) break;
      fVar2 = (float)atom_getfloatarg((int)uVar1,param_11,param_12);
      param_1 = CONCAT44(extraout_XMM0_Db,fVar2);
      *(long *)(*(long *)(param_9 + 0x38) + uVar1 * 8) = (long)fVar2;
      uVar1 = uVar1 + 1;
    } while (param_11 != uVar1);
  }
  canvas_update_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


