// Function : list_split_anything
// Namespace: 
// Entry    : 00552f60
// Prototype: undefined list_split_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00552f60 - 005530cf


void list_split_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,undefined8 param_10,uint param_11,long param_12,char *param_13
                        ,undefined8 param_14)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 in_EAX;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uStack_38;
  
  uVar1 = param_11 + 1;
  uStack_38 = CONCAT44(uVar1,in_EAX);
  if ((int)param_11 < 99) {
    lVar5 = (long)(int)uVar1;
    puVar12 = &uStack_38 + lVar5 * -2;
    *(undefined4 *)(&uStack_38 + lVar5 * -2) = 2;
    *(undefined8 *)((long)register_RSP + lVar5 * -0x10 + -0x30) = param_10;
    puVar6 = puVar12;
    if ((int)param_11 < 1) goto LAB_00553003;
    puVar13 = (undefined8 *)((long)register_RSP + lVar5 * -0x10 + -0x28);
    puVar11 = puVar12;
    if (param_11 == 1) goto LAB_00553049;
LAB_00552fc4:
    lVar5 = 0x10;
    uVar9 = 0;
    do {
      puVar12 = (undefined8 *)(param_12 + -0x10 + lVar5);
      uVar3 = puVar12[1];
      puVar2 = (undefined8 *)((long)puVar13 + lVar5 + -0x10);
      *puVar2 = *puVar12;
      puVar2[1] = uVar3;
      uVar3 = ((undefined8 *)(param_12 + lVar5))[1];
      *(undefined8 *)((long)puVar13 + lVar5) = *(undefined8 *)(param_12 + lVar5);
      ((undefined8 *)((long)puVar13 + lVar5))[1] = uVar3;
      uVar9 = uVar9 + 2;
      lVar5 = lVar5 + 0x20;
      puVar12 = puVar11;
      uVar3 = uStack_38;
    } while ((param_11 & 0xfffffffe) != uVar9);
  }
  else {
    puVar6 = getbytes((ulong)uVar1 << 4);
    puVar12 = &uStack_38;
    puVar11 = &uStack_38;
    *(undefined4 *)puVar6 = 2;
    puVar6[1] = param_10;
    puVar13 = puVar6 + 2;
    if (param_11 != 1) goto LAB_00552fc4;
LAB_00553049:
    uVar9 = 0;
    uVar3 = uStack_38;
  }
  if ((param_11 & 1) != 0) {
    puVar11 = (undefined8 *)(param_12 + uVar9 * 0x10);
    uVar4 = puVar11[1];
    puVar13[uVar9 * 2] = *puVar11;
    (puVar13 + uVar9 * 2)[1] = uVar4;
  }
  uStack_38._4_4_ = (uint)((ulong)uVar3 >> 0x20);
  uVar1 = uStack_38._4_4_;
  uStack_38 = uVar3;
LAB_00553003:
  uVar10 = 0;
  if (-1 < (int)*(float *)(param_9 + 0x30)) {
    uVar10 = (int)*(float *)(param_9 + 0x30);
  }
  if ((int)uVar1 < (int)uVar10) {
    puVar13 = (undefined8 *)(param_9 + 0x48);
    uVar10 = uVar1;
  }
  else {
    puVar12[-1] = 0x553062;
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar5 = *plVar7;
    plVar7 = *(long **)(param_9 + 0x40);
    puVar12[-1] = 0x55307f;
    outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,plVar7,lVar5 + 0xc0,uVar1 - uVar10,puVar6 + (ulong)uVar10 * 2,
                param_13,param_14);
    puVar13 = (undefined8 *)(param_9 + 0x38);
  }
  plVar7 = (long *)*puVar13;
  puVar12[-1] = 0x553096;
  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar5 = *plVar8;
  puVar12[-1] = 0x5530ab;
  outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
              param_6,param_7,param_8,plVar7,lVar5 + 0xc0,uVar10,puVar6,param_13,param_14);
  if (0x62 < (int)param_11) {
    puVar12[-1] = 0x5530c1;
    freebytes(puVar6);
  }
  return;
}


