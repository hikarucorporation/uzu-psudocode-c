// Function : message_proxy_anything
// Namespace: 
// Entry    : 00564f20
// Prototype: undefined message_proxy_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00564f20 - 00564fca


void message_proxy_anything
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,uint param_11,long param_12,char *param_13,
               undefined8 param_14)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_RDX;
  undefined8 uVar8;
  undefined8 extraout_RDX_00;
  long lVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar11;
  
  lVar2 = *(long *)(param_9 + 8);
  *(undefined8 *)(lVar2 + 0x48) = 1;
  *(undefined8 *)(lVar2 + 0x60) = param_10;
  if (param_11 == 0) {
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
  }
  else {
    lVar7 = param_12;
    pvVar5 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(lVar2 + 0x50),*(long *)(lVar2 + 0x40) << 4,
                         (long)(int)param_11 << 4);
    *(void **)(lVar2 + 0x50) = pvVar5;
    *(long *)(lVar2 + 0x40) = (long)(int)param_11;
    if (0 < (int)param_11) {
      lVar9 = 0;
      uVar8 = extraout_RDX;
      uVar10 = extraout_XMM0_Da;
      uVar11 = extraout_XMM0_Db;
      do {
        if (*(int *)(param_12 + lVar9) == 2) {
          puVar6 = canvas_realizedollar
                             (CONCAT44(uVar11,uVar10),param_2,param_3,param_4,param_5,param_6,
                              param_7,param_8,*(long *)(lVar2 + 0x68),
                              *(undefined8 **)(param_12 + 8 + lVar9),uVar8,lVar7,param_13,param_14);
          *(undefined8 **)(param_12 + 8 + lVar9) = puVar6;
          uVar8 = extraout_RDX_00;
        }
        puVar1 = (undefined4 *)(param_12 + lVar9);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        puVar1 = (undefined4 *)(*(long *)(lVar2 + 0x50) + lVar9);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)param_11 * 0x10 != lVar9);
    }
  }
  return;
}


