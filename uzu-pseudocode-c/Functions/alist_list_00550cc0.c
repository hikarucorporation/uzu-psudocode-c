// Function : alist_list
// Namespace: 
// Entry    : 00550cc0
// Prototype: undefined alist_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 00550cc0 - 00550dfa


void alist_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,ulong param_11,undefined8 *param_12,char *param_13,
               undefined8 param_14)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar10;
  undefined8 unaff_RBX;
  long lVar11;
  long lVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  iVar8 = (int)param_11;
  iVar5 = *(int *)(param_9 + 8);
  puVar7 = param_12;
  if (0 < iVar5) {
    lVar12 = 8;
    lVar11 = 0;
    uVar2 = param_11;
    do {
      lVar1 = *(long *)(param_9 + 0x10);
      if (*(int *)(lVar1 + -8 + lVar12) == 3) {
        param_1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 *(long *)(lVar1 + lVar12),param_10,uVar2,lVar1,param_13,param_14);
        uVar2 = CONCAT44(extraout_var,extraout_EDX);
        iVar5 = *(int *)(param_9 + 8);
      }
      lVar11 = lVar11 + 1;
      puVar7 = (undefined8 *)(long)iVar5;
      lVar12 = lVar12 + 0x28;
    } while (lVar11 < (long)puVar7);
  }
  if (*(void **)(param_9 + 0x10) != (void *)0x0) {
    freebytes(*(void **)(param_9 + 0x10));
  }
  pvVar6 = getbytes((long)iVar8 * 0x28);
  *(void **)(param_9 + 0x10) = pvVar6;
  if (pvVar6 == (void *)0x0) {
    *(undefined4 *)(param_9 + 8) = 0;
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"list: out of memory",CONCAT44(extraout_var_00,extraout_EDX_00),
             puVar7,param_13,param_14);
    return;
  }
  *(int *)(param_9 + 8) = iVar8;
  *(undefined4 *)(param_9 + 0xc) = 0;
  if (0 < iVar8) {
    lVar11 = (param_11 & 0xffffffff) * 5;
    lVar12 = 0;
    uVar9 = extraout_EDX_00;
    uVar10 = extraout_var_00;
    while( true ) {
      uVar3 = *param_12;
      uVar4 = param_12[1];
      *(undefined8 *)((long)pvVar6 + lVar12) = uVar3;
      ((undefined8 *)((long)pvVar6 + lVar12))[1] = uVar4;
      lVar1 = *(long *)(param_9 + 0x10);
      if (*(int *)(lVar1 + lVar12) == 3) {
        *(int *)(param_9 + 0xc) = *(int *)(param_9 + 0xc) + 1;
        gpointer_copy(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(undefined8 **)(lVar1 + 8 + lVar12),(undefined8 *)(lVar1 + lVar12 + 0x10),
                      CONCAT44(uVar10,uVar9),lVar11,param_13,param_14,(char)unaff_RBX);
        lVar11 = *(long *)(param_9 + 0x10) + lVar12 + 0x10;
        *(long *)(*(long *)(param_9 + 0x10) + 8 + lVar12) = lVar11;
        uVar9 = extraout_EDX_01;
        uVar10 = extraout_var_01;
      }
      if ((param_11 & 0xffffffff) * 0x28 + -0x28 == lVar12) break;
      pvVar6 = *(void **)(param_9 + 0x10);
      lVar12 = lVar12 + 0x28;
      param_12 = param_12 + 2;
    }
  }
  return;
}


