// Function : message_any
// Namespace: 
// Entry    : 00564e60
// Prototype: undefined message_any(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00564e60 - 00564f11


void message_any(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                undefined8 param_10,uint param_11,long param_12,char *param_13,undefined8 param_14)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  undefined8 extraout_RDX_00;
  long lVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar8;
  
  *(undefined8 *)(param_9 + 0x48) = 1;
  *(undefined8 *)(param_9 + 0x60) = param_10;
  if (param_11 == 0) {
    *(undefined8 *)(param_9 + 0x40) = 0;
    *(undefined8 *)(param_9 + 0x50) = 0;
  }
  else {
    lVar4 = param_12;
    pvVar2 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(param_9 + 0x50),*(long *)(param_9 + 0x40) << 4,
                         (long)(int)param_11 << 4);
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    *(void **)(param_9 + 0x50) = pvVar2;
    *(long *)(param_9 + 0x40) = (long)(int)param_11;
    if (0 < (int)param_11) {
      lVar6 = 0;
      uVar5 = extraout_RDX;
      uVar7 = extraout_XMM0_Da;
      uVar8 = extraout_XMM0_Db;
      do {
        if (*(int *)(param_12 + lVar6) == 2) {
          puVar3 = canvas_realizedollar
                             (CONCAT44(uVar8,uVar7),param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,*(long *)(param_9 + 0x68),
                              *(undefined8 **)(param_12 + 8 + lVar6),uVar5,lVar4,param_13,param_14);
          *(undefined8 **)(param_12 + 8 + lVar6) = puVar3;
          uVar5 = extraout_RDX_00;
        }
        auVar1 = *(undefined1 (*) [16])(param_12 + lVar6);
        uVar7 = auVar1._0_4_;
        uVar8 = auVar1._4_4_;
        param_1 = auVar1._0_8_;
        *(undefined1 (*) [16])(*(long *)(param_9 + 0x50) + lVar6) = auVar1;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)param_11 * 0x10 != lVar6);
    }
  }
  message_output(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}


