// Function : netreceive_closeall
// Namespace: 
// Entry    : 00582f20
// Prototype: undefined netreceive_closeall(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00582f20 - 00583034


void netreceive_closeall(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_9 + 0xe8);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      sys_rmpollfn(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   *(int *)(*(long *)(param_9 + 0xf0) + lVar4 * 4));
      param_1 = sys_closesocket(*(int *)(*(long *)(param_9 + 0xf0) + lVar4 * 4));
      puVar1 = *(undefined8 **)(*(long *)(param_9 + 0x100) + lVar4 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        param_1 = socketreceiver_free(puVar1);
        *(undefined8 *)(*(long *)(param_9 + 0x100) + lVar4 * 8) = 0;
      }
      lVar4 = lVar4 + 1;
      iVar2 = *(int *)(param_9 + 0xe8);
    } while (lVar4 < iVar2);
  }
  pvVar3 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0xf0),(long)iVar2 << 2,0);
  *(void **)(param_9 + 0xf0) = pvVar3;
  pvVar3 = resizebytes(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,*(void **)(param_9 + 0x100),
                       (long)*(int *)(param_9 + 0xe8) << 3,0);
  *(void **)(param_9 + 0x100) = pvVar3;
  *(undefined4 *)(param_9 + 0xe8) = 0;
  uVar5 = extraout_XMM0_Db_00;
  if (-1 < *(int *)(param_9 + 0x48)) {
    sys_rmpollfn(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,*(int *)(param_9 + 0x48));
    sys_closesocket(*(int *)(param_9 + 0x48));
    uVar5 = extraout_XMM0_Db_01;
  }
  *(undefined4 *)(param_9 + 0x48) = 0xffffffff;
  if (*(undefined8 **)(param_9 + 0x58) != (undefined8 *)0x0) {
    socketreceiver_free(*(undefined8 **)(param_9 + 0x58));
    uVar5 = extraout_XMM0_Db_02;
  }
  *(undefined8 *)(param_9 + 0x58) = 0;
  if (*(long **)(param_9 + 0x38) == (long *)0x0) {
    return;
  }
  outlet_float(CONCAT44(uVar5,(float)*(int *)(param_9 + 0xe8)),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,*(long **)(param_9 + 0x38));
  return;
}


