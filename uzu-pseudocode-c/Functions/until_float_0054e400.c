// Function : until_float
// Namespace: 
// Entry    : 0054e400
// Prototype: undefined until_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054e400 - 0054e43d


void until_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  int iVar1;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  fVar2 = 0.0;
  if (0.0 <= (float)param_1) {
    fVar2 = (float)param_1;
  }
  *(undefined4 *)(param_9 + 0x30) = 1;
  iVar1 = (int)fVar2;
  *(int *)(param_9 + 0x34) = iVar1;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    *(int *)(param_9 + 0x34) = iVar1 + -1;
    outlet_bang(param_1,CONCAT44(uVar3,fVar2),param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x18));
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    if (*(int *)(param_9 + 0x30) == 0) break;
    iVar1 = *(int *)(param_9 + 0x34);
  }
  return;
}


