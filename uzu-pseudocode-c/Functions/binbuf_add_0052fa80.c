// Function : binbuf_add
// Namespace: 
// Entry    : 0052fa80
// Prototype: undefined binbuf_add(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, uint param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052fa80 - 0052fb52


void binbuf_add(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               int *param_9,uint param_10,undefined8 *param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 extraout_RDX;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  lVar9 = (long)(int)param_10 + (long)*param_9;
  uVar10 = (long)*param_9 * 0x10;
  pvVar6 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 2),uVar10,lVar9 * 0x10);
  if (pvVar6 == (void *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"binbuf_addmessage: out of space",extraout_RDX,param_12,param_13,
             param_14);
    return;
  }
  *(void **)(param_9 + 2) = pvVar6;
  *param_9 = (int)lVar9;
  if (param_10 != 0) {
    puVar7 = (undefined8 *)((long)pvVar6 + uVar10);
    uVar1 = param_10 - 1;
    if ((param_10 & 3) != 0) {
      uVar8 = 0;
      do {
        uVar4 = *param_11;
        uVar5 = param_11[1];
        param_11 = param_11 + 2;
        *puVar7 = uVar4;
        puVar7[1] = uVar5;
        puVar7 = puVar7 + 2;
        uVar8 = uVar8 + 1;
      } while ((param_10 & 3) != uVar8);
      param_10 = param_10 - uVar8;
    }
    if (2 < uVar1) {
      lVar9 = 0;
      do {
        uVar4 = ((undefined8 *)((long)param_11 + lVar9))[1];
        *(undefined8 *)((long)puVar7 + lVar9) = *(undefined8 *)((long)param_11 + lVar9);
        ((undefined8 *)((long)puVar7 + lVar9))[1] = uVar4;
        puVar2 = (undefined8 *)((long)param_11 + lVar9 + 0x10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)((long)param_11 + lVar9 + 0x20);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)((long)puVar7 + lVar9 + 0x20);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)((long)param_11 + lVar9 + 0x30);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)((long)puVar7 + lVar9 + 0x30);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        lVar9 = lVar9 + 0x40;
        param_10 = param_10 - 4;
      } while (param_10 != 0);
    }
  }
  return;
}


