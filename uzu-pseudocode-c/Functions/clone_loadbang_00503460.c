// Function : clone_loadbang
// Namespace: 
// Entry    : 00503460
// Prototype: undefined clone_loadbang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00503460 - 005034a3


void clone_loadbang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  long lVar1;
  long lVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (((float)param_1 == 0.0) && (0 < *(int *)(param_9 + 0x38))) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      canvas_loadbang(param_1,CONCAT44(uVar4,uVar3),param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long *)(*(long *)(param_9 + 0x40) + lVar2),param_10,param_11,param_12,
                      param_13,param_14);
      param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x10;
      param_11 = extraout_RDX;
    } while (lVar1 < *(int *)(param_9 + 0x38));
  }
  return;
}


