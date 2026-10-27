// Function : cartopol_perform
// Namespace: 
// Entry    : 0055e500
// Prototype: long cartopol_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055e500 - 0055e7f9


long cartopol_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  float __y;
  long lVar2;
  bool bVar3;
  uint uVar4;
  undefined7 extraout_var;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 extraout_RDX;
  ulong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  
  lVar11 = *(long *)(param_9 + 8);
  iVar15 = (int)*(undefined8 *)(param_9 + 0x10);
  lVar12 = *(long *)(param_9 + 0x18);
  lVar2 = *(long *)(param_9 + 0x20);
  puVar14 = *(undefined4 **)(param_9 + 0x28);
  puVar9 = *(undefined4 **)(param_9 + 0x30);
  bVar3 = magic_isnan(**(uint **)(lVar11 + 0x48));
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    uVar18 = magic_setnan(*(undefined4 **)(lVar11 + 0x48));
    pd_error(uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar11,
             "cartopol~: doesn\'t understand \'float\'",extraout_RDX,param_12,param_13,param_14);
  }
  if (iVar15 != 0) {
    uVar10 = iVar15 - 1;
    if (*(long *)(lVar11 + 0x50) == 0) {
      if ((6 < uVar10) &&
         ((uVar5 = (ulong)uVar10, puVar9 + uVar5 + 1 <= puVar14 || (puVar14 + uVar5 + 1 <= puVar9)))
         ) {
        uVar7 = uVar5 + 1 & 0xfffffffffffffff8;
        uVar13 = (uVar7 - 8 >> 3) + 1;
        uVar8 = (ulong)((uint)uVar13 & 3);
        if (uVar7 - 8 < 0x18) {
          lVar11 = 0;
        }
        else {
          uVar13 = uVar13 & 0xfffffffffffffffc;
          lVar11 = 0;
          do {
            *(undefined8 *)(puVar14 + lVar11) = 0;
            *(undefined8 *)((long)(puVar14 + lVar11) + 8) = 0;
            *(undefined8 *)(puVar14 + lVar11 + 4) = 0;
            *(undefined8 *)((long)(puVar14 + lVar11 + 4) + 8) = 0;
            *(undefined8 *)(puVar9 + lVar11) = 0;
            *(undefined8 *)((long)(puVar9 + lVar11) + 8) = 0;
            *(undefined8 *)(puVar9 + lVar11 + 4) = 0;
            *(undefined8 *)((long)(puVar9 + lVar11 + 4) + 8) = 0;
            *(undefined8 *)(puVar14 + lVar11 + 8) = 0;
            *(undefined8 *)((long)(puVar14 + lVar11 + 8) + 8) = 0;
            *(undefined8 *)(puVar14 + lVar11 + 0xc) = 0;
            *(undefined8 *)((long)(puVar14 + lVar11 + 0xc) + 8) = 0;
            *(undefined8 *)(puVar9 + lVar11 + 8) = 0;
            *(undefined8 *)((long)(puVar9 + lVar11 + 8) + 8) = 0;
            *(undefined8 *)(puVar9 + lVar11 + 0xc) = 0;
            *(undefined8 *)((long)(puVar9 + lVar11 + 0xc) + 8) = 0;
            *(undefined8 *)(puVar14 + lVar11 + 0x10) = 0;
            *(undefined8 *)((long)(puVar14 + lVar11 + 0x10) + 8) = 0;
            *(undefined8 *)(puVar14 + lVar11 + 0x14) = 0;
            *(undefined8 *)((long)(puVar14 + lVar11 + 0x14) + 8) = 0;
            *(undefined8 *)(puVar9 + lVar11 + 0x10) = 0;
            *(undefined8 *)((long)(puVar9 + lVar11 + 0x10) + 8) = 0;
            *(undefined8 *)(puVar9 + lVar11 + 0x14) = 0;
            *(undefined8 *)((long)(puVar9 + lVar11 + 0x14) + 8) = 0;
            *(undefined8 *)(puVar14 + lVar11 + 0x18) = 0;
            *(undefined8 *)((long)(puVar14 + lVar11 + 0x18) + 8) = 0;
            *(undefined8 *)(puVar14 + lVar11 + 0x1c) = 0;
            *(undefined8 *)((long)(puVar14 + lVar11 + 0x1c) + 8) = 0;
            *(undefined8 *)(puVar9 + lVar11 + 0x18) = 0;
            *(undefined8 *)((long)(puVar9 + lVar11 + 0x18) + 8) = 0;
            *(undefined8 *)(puVar9 + lVar11 + 0x1c) = 0;
            *(undefined8 *)((long)(puVar9 + lVar11 + 0x1c) + 8) = 0;
            lVar11 = lVar11 + 0x20;
            uVar13 = uVar13 - 4;
          } while (uVar13 != 0);
        }
        if (uVar8 != 0) {
          lVar12 = 0;
          do {
            puVar1 = (undefined8 *)((long)puVar14 + lVar12 + lVar11 * 4);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)((long)puVar14 + lVar12 + lVar11 * 4 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)((long)puVar9 + lVar12 + lVar11 * 4);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)((long)puVar9 + lVar12 + lVar11 * 4 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            lVar12 = lVar12 + 0x20;
          } while (uVar8 * 0x20 != lVar12);
        }
        if (uVar5 + 1 == uVar7) goto LAB_0055e7e2;
        uVar10 = uVar10 - (int)uVar7;
        puVar9 = puVar9 + uVar7;
        puVar14 = puVar14 + uVar7;
      }
      uVar4 = uVar10 + 1 & 7;
      uVar6 = uVar10;
      if (uVar4 != 0) {
        uVar6 = 0;
        do {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar4 != uVar6);
        uVar6 = uVar10 - uVar6;
      }
      if (6 < uVar10) {
        lVar11 = 0;
        do {
          puVar14[lVar11] = 0;
          puVar9[lVar11] = 0;
          puVar14[lVar11 + 1] = 0;
          puVar9[lVar11 + 1] = 0;
          puVar14[lVar11 + 2] = 0;
          puVar9[lVar11 + 2] = 0;
          puVar14[lVar11 + 3] = 0;
          puVar9[lVar11 + 3] = 0;
          puVar14[lVar11 + 4] = 0;
          puVar9[lVar11 + 4] = 0;
          puVar14[lVar11 + 5] = 0;
          puVar9[lVar11 + 5] = 0;
          puVar14[lVar11 + 6] = 0;
          puVar9[lVar11 + 6] = 0;
          puVar14[lVar11 + 7] = 0;
          puVar9[lVar11 + 7] = 0;
          lVar11 = lVar11 + 8;
        } while (uVar6 + 1 != (int)lVar11);
      }
    }
    else {
      lVar11 = 0;
      do {
        fVar17 = *(float *)(lVar12 + lVar11 * 4);
        __y = *(float *)(lVar2 + lVar11 * 4);
        fVar16 = hypotf(fVar17,__y);
        fVar17 = atan2f(__y,fVar17);
        puVar14[lVar11] = fVar16;
        puVar9[lVar11] = fVar17;
        lVar11 = lVar11 + 1;
      } while (iVar15 != (int)lVar11);
    }
  }
LAB_0055e7e2:
  return param_9 + 0x38;
}


