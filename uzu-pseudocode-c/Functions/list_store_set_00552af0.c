// Function : list_store_set
// Namespace: 
// Entry    : 00552af0
// Prototype: undefined list_store_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 00552af0 - 00552bcc


void list_store_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,int param_11,int *param_12,char *param_13,
                   undefined8 param_14)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  ulong extraout_RDX;
  undefined8 unaff_RBX;
  long lVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  undefined4 extraout_XMM0_Db;
  
  if (1 < param_11) {
    piVar6 = param_12;
    fVar12 = (float)atom_getfloat(param_12);
    uVar7 = (uint)fVar12;
    uVar8 = (ulong)uVar7;
    if (((int)uVar7 < 0) ||
       (uVar5 = *(int *)(param_9 + 0x38) - uVar7,
       uVar5 == 0 || *(int *)(param_9 + 0x38) < (int)uVar7)) {
      pd_error(CONCAT44(extraout_XMM0_Db,fVar12),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,"list_store_set: index %d out of range",uVar8,piVar6,param_13,
               param_14);
      return;
    }
    uVar10 = param_11 - 1U;
    if ((int)uVar5 < (int)(param_11 - 1U)) {
      uVar10 = uVar5;
    }
    if (0 < (int)uVar10) {
      lVar11 = (ulong)uVar7 * 0x28 + 0x10;
      lVar9 = 0;
      do {
        puVar1 = (undefined8 *)((long)param_12 + lVar9 + 0x10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        puVar1 = (undefined8 *)(*(long *)(param_9 + 0x40) + -0x10 + lVar11);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        lVar2 = *(long *)(param_9 + 0x40);
        if (*(int *)(lVar2 + -0x10 + lVar11) == 3) {
          *(int *)(param_9 + 0x3c) = *(int *)(param_9 + 0x3c) + 1;
          gpointer_copy(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(undefined8 **)(lVar2 + -8 + lVar11),(undefined8 *)(lVar2 + lVar11),uVar8,
                        piVar6,param_13,param_14,(char)unaff_RBX);
          piVar6 = (int *)(*(long *)(param_9 + 0x40) + lVar11);
          *(int **)(*(long *)(param_9 + 0x40) + -8 + lVar11) = piVar6;
          uVar8 = extraout_RDX;
        }
        lVar9 = lVar9 + 0x10;
        lVar11 = lVar11 + 0x28;
      } while ((ulong)uVar10 * 0x10 != lVar9);
    }
  }
  return;
}


