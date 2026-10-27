// Function : compress_output
// Namespace: juce:jpeglibNamespace
// Entry    : 00361bb0
// Prototype: undefined8 compress_output(long param_1)
// Body     : 00361bb0 - 00361f90


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::compress_output(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char***) */

undefined8 __cdecl juce::jpeglibNamespace::compress_output(long param_1)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long lVar29;
  long lVar30;
  long lVar31;
  long alStack_58 [5];
  
  lVar4 = *(long *)(param_1 + 0x1f8);
  iVar8 = *(int *)(param_1 + 0x164);
  if (0 < iVar8) {
    lVar12 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x168 + lVar12 * 8);
      lVar6 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar4 + 0x70 + (long)*(int *)(lVar6 + 4) * 8),
                         *(int *)(lVar4 + 0x10) * *(int *)(lVar6 + 0xc));
      alStack_58[lVar12] = lVar6;
      lVar12 = lVar12 + 1;
      iVar8 = *(int *)(param_1 + 0x164);
    } while (lVar12 < iVar8);
  }
  lVar12 = (long)*(int *)(lVar4 + 0x18);
  iVar16 = *(int *)(lVar4 + 0x1c);
  if (*(int *)(lVar4 + 0x18) < iVar16) {
    uVar17 = *(uint *)(lVar4 + 0x14);
    uVar7 = *(uint *)(param_1 + 0x188);
    lVar6 = _DAT_00656c40;
    lVar29 = _UNK_00656c48;
    lVar30 = _DAT_005dd7d0;
    lVar31 = _UNK_005dd7d8;
    do {
      if (uVar17 < uVar7) {
        do {
          uVar7 = *(uint *)(param_1 + 0x164);
          if (0 < (int)uVar7) {
            uVar9 = 0;
            plVar11 = (long *)(lVar4 + 0x20);
            do {
              lVar21 = *(long *)(param_1 + 0x168 + uVar9 * 8);
              uVar3 = *(uint *)(lVar21 + 0x3c);
              if (0 < (int)uVar3) {
                iVar8 = *(int *)(lVar21 + 0x38);
                uVar1 = (ulong)(iVar8 - 1U) + 1;
                uVar13 = uVar1 & 0xfffffffffffffffc;
                uVar14 = (uVar13 - 4 >> 2) + 1;
                uVar23 = (ulong)((uint)uVar14 & 3);
                uVar19 = 0;
                do {
                  lVar21 = (ulong)(iVar8 * uVar17) * 0x80 +
                           *(long *)(alStack_58[uVar9] + (uVar19 + lVar12) * 8);
                  if (iVar8 - 1U < 3) {
                    iVar16 = iVar8;
LAB_00361eb0:
                    do {
                      *plVar11 = lVar21;
                      plVar11 = plVar11 + 1;
                      lVar21 = lVar21 + 0x80;
                      iVar16 = iVar16 + -1;
                    } while (iVar16 != 0);
                  }
                  else {
                    lVar18 = lVar21;
                    if (uVar13 - 4 < 0xc) {
                      lVar20 = 0;
                    }
                    else {
                      lVar20 = 0;
                      uVar22 = uVar14 & 0xfffffffffffffffc;
                      do {
                        auVar24._8_4_ = (int)lVar18;
                        auVar24._0_8_ = lVar18;
                        auVar24._12_4_ = (int)((ulong)lVar18 >> 0x20);
                        plVar11[lVar20] = lVar18 + lVar6;
                        (plVar11 + lVar20)[1] = auVar24._8_8_ + lVar29;
                        plVar11[lVar20 + 2] = lVar18 + lVar30;
                        (plVar11 + lVar20 + 2)[1] = auVar24._8_8_ + lVar31;
                        lVar15 = lVar18 + 0x200;
                        auVar25._8_4_ = (int)lVar15;
                        auVar25._0_8_ = lVar15;
                        auVar25._12_4_ = (int)((ulong)lVar15 >> 0x20);
                        plVar11[lVar20 + 4] = lVar15 + lVar6;
                        (plVar11 + lVar20 + 4)[1] = auVar25._8_8_ + lVar29;
                        plVar11[lVar20 + 6] = lVar15 + lVar30;
                        (plVar11 + lVar20 + 6)[1] = auVar25._8_8_ + lVar31;
                        lVar15 = lVar18 + 0x400;
                        auVar26._8_4_ = (int)lVar15;
                        auVar26._0_8_ = lVar15;
                        auVar26._12_4_ = (int)((ulong)lVar15 >> 0x20);
                        plVar11[lVar20 + 8] = lVar15 + lVar6;
                        (plVar11 + lVar20 + 8)[1] = auVar26._8_8_ + lVar29;
                        plVar11[lVar20 + 10] = lVar15 + lVar30;
                        (plVar11 + lVar20 + 10)[1] = auVar26._8_8_ + lVar31;
                        lVar15 = lVar18 + 0x600;
                        auVar27._8_4_ = (int)lVar15;
                        auVar27._0_8_ = lVar15;
                        auVar27._12_4_ = (int)((ulong)lVar15 >> 0x20);
                        plVar11[lVar20 + 0xc] = lVar15 + lVar6;
                        (plVar11 + lVar20 + 0xc)[1] = auVar27._8_8_ + lVar29;
                        plVar11[lVar20 + 0xe] = lVar15 + lVar30;
                        (plVar11 + lVar20 + 0xe)[1] = auVar27._8_8_ + lVar31;
                        lVar20 = lVar20 + 0x10;
                        lVar18 = lVar18 + 0x800;
                        uVar22 = uVar22 - 4;
                      } while (uVar22 != 0);
                    }
                    if (uVar23 != 0) {
                      lVar15 = 0;
                      do {
                        auVar28._8_4_ = (int)lVar18;
                        auVar28._0_8_ = lVar18;
                        auVar28._12_4_ = (int)((ulong)lVar18 >> 0x20);
                        plVar2 = (long *)((long)plVar11 + lVar15 + lVar20 * 8);
                        *plVar2 = lVar18 + lVar6;
                        plVar2[1] = auVar28._8_8_ + lVar29;
                        plVar2 = (long *)((long)plVar11 + lVar15 + lVar20 * 8 + 0x10);
                        *plVar2 = lVar18 + lVar30;
                        plVar2[1] = auVar28._8_8_ + lVar31;
                        lVar18 = lVar18 + 0x200;
                        lVar15 = lVar15 + 0x20;
                      } while (uVar23 * 0x20 != lVar15);
                    }
                    plVar11 = plVar11 + uVar13;
                    if (uVar1 != uVar13) {
                      lVar21 = lVar21 + uVar13 * 0x80;
                      iVar16 = iVar8 - (int)uVar13;
                      goto LAB_00361eb0;
                    }
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar19 != uVar3);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar7);
          }
          cVar5 = (**(code **)(*(long *)(param_1 + 0x220) + 8))(param_1,(long *)(lVar4 + 0x20));
          if (cVar5 == '\0') {
            *(int *)(lVar4 + 0x18) = (int)lVar12;
            *(uint *)(lVar4 + 0x14) = uVar17;
            return 0;
          }
          uVar17 = uVar17 + 1;
          uVar7 = *(uint *)(param_1 + 0x188);
          lVar6 = _DAT_00656c40;
          lVar29 = _UNK_00656c48;
          lVar30 = _DAT_005dd7d0;
          lVar31 = _UNK_005dd7d8;
        } while (uVar17 < uVar7);
        iVar16 = *(int *)(lVar4 + 0x1c);
      }
      *(undefined4 *)(lVar4 + 0x14) = 0;
      lVar12 = lVar12 + 1;
      uVar17 = 0;
    } while (lVar12 < iVar16);
    iVar8 = *(int *)(param_1 + 0x164);
  }
  *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  lVar4 = *(long *)(param_1 + 0x1f8);
  uVar10 = 1;
  if (iVar8 < 2) {
    uVar10 = *(undefined4 *)
              ((ulong)(*(int *)(param_1 + 0x160) - 1U <= *(uint *)(lVar4 + 0x10)) * 0x40 + 0xc +
              *(long *)(param_1 + 0x168));
  }
  *(undefined4 *)(lVar4 + 0x1c) = uVar10;
  *(undefined8 *)(lVar4 + 0x14) = 0;
  return CONCAT71((int7)((ulong)lVar4 >> 8),1);
}


