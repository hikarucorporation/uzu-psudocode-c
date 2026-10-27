// Function : tabplay_tilde_perform
// Namespace: 
// Entry    : 0058d1e0
// Prototype: long tabplay_tilde_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0058d1e0 - 0058d552


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long tabplay_tilde_perform
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  size_t __n;
  undefined4 *puVar16;
  undefined4 *__s;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  char *in_R8;
  undefined8 in_R9;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar33 [16];
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  int local_3c;
  long local_38;
  
  lVar4 = *(long *)(param_9 + 8);
  plVar5 = *(long **)(param_9 + 0x10);
  __s = *(undefined4 **)(param_9 + 0x18);
  uVar14 = *(ulong *)(param_9 + 0x20);
  iVar22 = (int)plVar5[4];
  lVar18 = (long)iVar22;
  uVar13 = dsparray_get_array(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                              ,(char *)&local_3c,&local_38,0,in_R8,in_R9);
  iVar26 = (int)uVar14;
  if (((int)uVar13 == 0) || (local_3c <= iVar22)) {
    if (iVar26 == 0) goto LAB_0058d53d;
    __n = (uVar14 & 0xffffffff) << 2;
  }
  else {
    if (*(int *)(lVar4 + 0x38) < local_3c) {
      local_3c = *(int *)(lVar4 + 0x38);
    }
    uVar25 = local_3c - iVar22;
    uVar24 = (ulong)uVar25;
    if (iVar26 < (int)uVar25) {
      uVar24 = uVar14 & 0xffffffff;
    }
    uVar6 = (uint)uVar24;
    if (uVar6 != 0) {
      puVar16 = (undefined4 *)(local_38 + lVar18 * 8);
      uVar14 = (ulong)(uVar6 - 1);
      if ((uVar6 - 1 < 8) ||
         ((__s < (undefined4 *)(local_38 + (uVar14 + lVar18) * 8 + 4) &&
          (puVar16 < __s + uVar14 + 1)))) {
        puVar2 = __s;
      }
      else {
        uVar20 = (ulong)((uint)(uVar14 + 1) & 7);
        uVar24 = 8;
        if (uVar20 != 0) {
          uVar24 = uVar20;
        }
        lVar23 = (uVar14 + 1) - uVar24;
        uVar24 = (ulong)(uVar6 - (int)lVar23);
        puVar16 = puVar16 + lVar23 * 2;
        local_38 = local_38 + lVar18 * 8;
        lVar18 = 0;
        do {
          puVar1 = (undefined4 *)(local_38 + lVar18 * 8);
          uVar3 = puVar1[2];
          puVar2 = (undefined4 *)(local_38 + 0x10 + lVar18 * 8);
          uVar7 = *puVar2;
          uVar8 = puVar2[2];
          puVar2 = (undefined4 *)(local_38 + 0x20 + lVar18 * 8);
          uVar9 = *puVar2;
          uVar10 = puVar2[2];
          puVar2 = (undefined4 *)(local_38 + 0x30 + lVar18 * 8);
          uVar11 = *puVar2;
          uVar12 = puVar2[2];
          puVar2 = __s + lVar18;
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar2[2] = uVar7;
          puVar2[3] = uVar8;
          puVar2 = __s + lVar18 + 4;
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          lVar18 = lVar18 + 8;
          puVar2 = __s + lVar23;
        } while (lVar23 != lVar18);
      }
      __s = puVar2;
      uVar19 = (uint)uVar24;
      uVar21 = uVar19 - 1;
      if ((uVar24 & 7) != 0) {
        uVar17 = 0;
        do {
          uVar3 = *puVar16;
          puVar16 = puVar16 + 2;
          *__s = uVar3;
          __s = __s + 1;
          uVar17 = uVar17 + 1;
        } while ((uVar19 & 7) != uVar17);
        uVar19 = uVar19 - uVar17;
      }
      if (6 < uVar21) {
        lVar18 = 0;
        do {
          *__s = puVar16[lVar18 * 2];
          __s[1] = puVar16[lVar18 * 2 + 2];
          __s[2] = puVar16[lVar18 * 2 + 4];
          __s[3] = puVar16[lVar18 * 2 + 6];
          __s[4] = puVar16[lVar18 * 2 + 8];
          __s[5] = puVar16[lVar18 * 2 + 10];
          __s[6] = puVar16[lVar18 * 2 + 0xc];
          __s[7] = puVar16[lVar18 * 2 + 0xe];
          __s = __s + 8;
          lVar18 = lVar18 + 8;
        } while (uVar19 != (uint)lVar18);
      }
    }
    if ((int)(uVar6 + iVar22) < local_3c) {
      *(uint *)(plVar5 + 4) = uVar6 + iVar22;
      goto LAB_0058d53d;
    }
    *(undefined4 *)(plVar5 + 4) = 0x7fffffff;
    uVar19 = *(uint *)(lVar4 + 0x48);
    uVar14 = (ulong)uVar19;
    if ((int)uVar19 < 1) {
LAB_0058d50a:
      clock_delay(0.0,*(double **)(lVar4 + 0x40));
    }
    else {
      lVar18 = *(long *)(lVar4 + 0x50);
      if (uVar19 < 8) {
        uVar24 = 0;
        bVar27 = false;
LAB_0058d4d1:
        piVar15 = (int *)(lVar18 + uVar24 * 0x30 + 0x20);
        lVar18 = uVar14 - uVar24;
        do {
          if (*piVar15 != 0x7fffffff) {
            bVar27 = true;
          }
          piVar15 = piVar15 + 0xc;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      else {
        uVar24 = (ulong)(uVar19 & 0xfffffff8);
        uVar19 = 0;
        uVar21 = 0;
        uVar17 = 0;
        uVar28 = 0;
        lVar23 = 0;
        uVar29 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        do {
          uVar34 = -(uint)(*(int *)(lVar18 + 0x20 + lVar23) == _DAT_005d91c0);
          uVar35 = -(uint)(*(int *)(lVar18 + 0x50 + lVar23) == _UNK_005d91c4);
          uVar36 = -(uint)(*(int *)(lVar18 + 0x80 + lVar23) == _UNK_005d91c8);
          uVar37 = -(uint)(*(int *)(lVar18 + 0xb0 + lVar23) == _UNK_005d91cc);
          uVar38 = -(uint)(*(int *)(lVar18 + 0xe0 + lVar23) == _DAT_005d91c0);
          uVar39 = -(uint)(*(int *)(lVar18 + 0x110 + lVar23) == _UNK_005d91c4);
          uVar40 = -(uint)(*(int *)(lVar18 + 0x140 + lVar23) == _UNK_005d91c8);
          uVar41 = -(uint)(*(int *)(lVar18 + 0x170 + lVar23) == _UNK_005d91cc);
          uVar19 = (uVar19 & uVar34) + uVar34 + 1;
          uVar21 = (uVar21 & uVar35) + uVar35 + 1;
          uVar17 = (uVar17 & uVar36) + uVar36 + 1;
          uVar28 = (uVar28 & uVar37) + uVar37 + 1;
          uVar29 = (uVar29 & uVar38) + uVar38 + 1;
          uVar30 = (uVar30 & uVar39) + uVar39 + 1;
          uVar31 = (uVar31 & uVar40) + uVar40 + 1;
          uVar32 = (uVar32 & uVar41) + uVar41 + 1;
          lVar23 = lVar23 + 0x180;
        } while ((uVar14 & 0xffffffffffffff8) * 0x30 != lVar23);
        auVar33._0_4_ =
             -(uint)((~-(uint)(uVar19 == 0) & uVar19) == 0 && (uVar29 & -(uint)(uVar19 == 0)) == 0);
        auVar33._4_4_ =
             -(uint)((~-(uint)(uVar21 == 0) & uVar21) == 0 && (uVar30 & -(uint)(uVar21 == 0)) == 0);
        auVar33._8_4_ =
             -(uint)((~-(uint)(uVar17 == 0) & uVar17) == 0 && (uVar31 & -(uint)(uVar17 == 0)) == 0);
        auVar33._12_4_ =
             -(uint)((~-(uint)(uVar28 == 0) & uVar28) == 0 && (uVar32 & -(uint)(uVar28 == 0)) == 0);
        iVar22 = movmskps((int)lVar23,auVar33);
        bVar27 = iVar22 != 0xf;
        if (uVar24 != uVar14) goto LAB_0058d4d1;
      }
      if (!bVar27) goto LAB_0058d50a;
    }
    if (iVar26 <= (int)uVar25) goto LAB_0058d53d;
    __n = (ulong)(~uVar6 + iVar26) * 4 + 4;
  }
  memset(__s,0,__n);
LAB_0058d53d:
  return param_9 + 0x28;
}


