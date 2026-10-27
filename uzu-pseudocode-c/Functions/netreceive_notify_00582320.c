// Function : netreceive_notify
// Namespace: 
// Entry    : 00582320
// Prototype: undefined netreceive_notify(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ulong param_10, undefined8 param_11, long param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00582320 - 00582456


void netreceive_notify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,ulong param_10,undefined8 param_11,long param_12,char *param_13,
                      undefined8 param_14,undefined1 param_15)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  undefined8 extraout_RDX;
  long lVar6;
  ulong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  iVar3 = *(int *)(param_9 + 0xe8);
  uVar7 = param_10;
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      while (lVar5 = *(long *)(param_9 + 0xf0), *(int *)(lVar5 + lVar6 * 4) == (int)param_10) {
        lVar1 = lVar6 + 1;
        memmove((void *)(lVar5 + lVar6 * 4),(void *)(lVar5 + lVar6 * 4 + 4),
                (long)(iVar3 - (int)lVar1) << 2);
        pvVar4 = resizebytes(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                             param_5,param_6,param_7,param_8,*(void **)(param_9 + 0xf0),
                             (long)*(int *)(param_9 + 0xe8) << 2,
                             (long)*(int *)(param_9 + 0xe8) * 4 - 4);
        *(void **)(param_9 + 0xf0) = pvVar4;
        lVar5 = *(long *)(param_9 + 0x100);
        puVar2 = *(undefined8 **)(lVar5 + lVar6 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          socketreceiver_free(puVar2);
          lVar5 = *(long *)(param_9 + 0x100);
        }
        memmove((void *)(lVar5 + lVar6 * 8),(void *)(lVar5 + lVar1 * 8),
                ((long)*(int *)(param_9 + 0xe8) - (long)(int)lVar1) * 8);
        uVar7 = (long)*(int *)(param_9 + 0xe8) << 3;
        pvVar4 = resizebytes(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,*(void **)(param_9 + 0x100),
                             uVar7,(long)*(int *)(param_9 + 0xe8) * 8 - 8);
        param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
        *(void **)(param_9 + 0x100) = pvVar4;
        iVar3 = *(int *)(param_9 + 0xe8) + -1;
        *(int *)(param_9 + 0xe8) = iVar3;
        param_12 = (long)iVar3;
        param_11 = extraout_RDX;
        lVar6 = lVar1;
        if (param_12 <= lVar1) goto LAB_00582423;
      }
      lVar6 = lVar6 + 1;
      param_12 = (long)iVar3;
    } while (lVar6 < param_12);
  }
LAB_00582423:
  if (*(long **)(param_9 + 0x38) == (long *)0x0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"netreceive_notify",uVar7,
        param_11,param_12,param_13,param_14,param_15);
    return;
  }
  outlet_float(CONCAT44((int)((ulong)param_1 >> 0x20),(float)iVar3),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,*(long **)(param_9 + 0x38));
  return;
}


