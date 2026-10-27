// Function : alist_anything
// Namespace: 
// Entry    : 00550e00
// Prototype: undefined alist_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, ulong param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00550e00 - 00550f4b


void alist_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,ulong param_11,long param_12,char *param_13,
                   undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar8;
  undefined4 extraout_EDX_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar9;
  undefined4 extraout_var_01;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  iVar7 = (int)param_11;
  iVar3 = *(int *)(param_9 + 8);
  lVar5 = param_12;
  if (0 < iVar3) {
    lVar10 = 8;
    lVar11 = 0;
    uVar12 = param_10;
    uVar6 = param_11;
    do {
      lVar5 = *(long *)(param_9 + 0x10);
      if (*(int *)(lVar5 + -8 + lVar10) == 3) {
        param_1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 *(long *)(lVar5 + lVar10),uVar12,uVar6,lVar5,param_13,param_14);
        uVar6 = CONCAT44(extraout_var,extraout_EDX);
        iVar3 = *(int *)(param_9 + 8);
      }
      lVar11 = lVar11 + 1;
      lVar5 = (long)iVar3;
      lVar10 = lVar10 + 0x28;
    } while (lVar11 < lVar5);
  }
  if (*(void **)(param_9 + 0x10) != (void *)0x0) {
    freebytes(*(void **)(param_9 + 0x10));
  }
  puVar4 = getbytes((long)iVar7 * 0x28 + 0x28);
  *(undefined4 **)(param_9 + 0x10) = puVar4;
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)(param_9 + 8) = 0;
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"list_alloc: out of memory",CONCAT44(extraout_var_00,extraout_EDX_00)
             ,lVar5,param_13,param_14);
    return;
  }
  uVar6 = (ulong)(iVar7 + 1U);
  *(uint *)(param_9 + 8) = iVar7 + 1U;
  *(undefined4 *)(param_9 + 0xc) = 0;
  *puVar4 = 2;
  *(undefined8 *)(puVar4 + 2) = param_10;
  if (0 < iVar7) {
    lVar5 = 0x38;
    lVar10 = 0;
    uVar8 = extraout_EDX_00;
    uVar9 = extraout_var_00;
    do {
      uVar12 = *(undefined8 *)(param_12 + lVar10);
      uVar2 = ((undefined8 *)(param_12 + lVar10))[1];
      puVar1 = (undefined8 *)(*(long *)(param_9 + 0x10) + -0x10 + lVar5);
      *puVar1 = uVar12;
      puVar1[1] = uVar2;
      lVar11 = *(long *)(param_9 + 0x10);
      if (*(int *)(lVar11 + -0x10 + lVar5) == 3) {
        *(int *)(param_9 + 0xc) = *(int *)(param_9 + 0xc) + 1;
        gpointer_copy(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(undefined8 **)(lVar11 + -8 + lVar5),(undefined8 *)(lVar11 + lVar5),
                      CONCAT44(uVar9,uVar8),uVar6,param_13,param_14,(char)in_RAX);
        uVar6 = *(long *)(param_9 + 0x10) + lVar5;
        *(ulong *)(*(long *)(param_9 + 0x10) + -8 + lVar5) = uVar6;
        uVar8 = extraout_EDX_01;
        uVar9 = extraout_var_01;
      }
      lVar10 = lVar10 + 0x10;
      lVar5 = lVar5 + 0x28;
    } while ((param_11 & 0xffffffff) * 0x10 != lVar10);
  }
  return;
}


