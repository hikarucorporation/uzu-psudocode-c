// Function : consume_data
// Namespace: juce:jpeglibNamespace
// Entry    : 0037ae70
// Prototype: undefined8 consume_data(long param_1)
// Body     : 0037ae70 - 0037b287


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::consume_data(juce::jpeglibNamespace::jpeg_decompress_struct*) */

undefined8 __cdecl juce::jpeglibNamespace::consume_data(long param_1)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lVar30;
  long lVar31;
  long lVar32;
  long alStack_58 [5];
  
  lVar4 = *(long *)(param_1 + 0x230);
  if (0 < *(int *)(param_1 + 0x1a0)) {
    lVar11 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x1a8 + lVar11 * 8);
      lVar6 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar4 + 0x88 + (long)*(int *)(lVar6 + 4) * 8),
                         *(int *)(param_1 + 0xa0) * *(int *)(lVar6 + 0xc));
      alStack_58[lVar11] = lVar6;
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x1a0));
  }
  lVar11 = (long)*(int *)(lVar4 + 0x2c);
  iVar13 = *(int *)(lVar4 + 0x30);
  if (*(int *)(lVar4 + 0x2c) < iVar13) {
    uVar18 = *(uint *)(lVar4 + 0x28);
    uVar8 = *(uint *)(param_1 + 0x1c8);
    lVar6 = _DAT_00656c40;
    lVar30 = _UNK_00656c48;
    lVar31 = _DAT_005dd7d0;
    lVar32 = _UNK_005dd7d8;
    do {
      if (uVar18 < uVar8) {
        do {
          uVar8 = *(uint *)(param_1 + 0x1a0);
          if (0 < (int)uVar8) {
            uVar9 = 0;
            plVar10 = (long *)(lVar4 + 0x38);
            do {
              lVar22 = *(long *)(param_1 + 0x1a8 + uVar9 * 8);
              uVar3 = *(uint *)(lVar22 + 0x3c);
              if (0 < (int)uVar3) {
                iVar13 = *(int *)(lVar22 + 0x38);
                uVar1 = (ulong)(iVar13 - 1U) + 1;
                uVar12 = uVar1 & 0xfffffffffffffffc;
                uVar15 = (uVar12 - 4 >> 2) + 1;
                uVar24 = (ulong)((uint)uVar15 & 3);
                uVar20 = 0;
                do {
                  lVar22 = (ulong)(iVar13 * uVar18) * 0x80 +
                           *(long *)(alStack_58[uVar9] + (uVar20 + lVar11) * 8);
                  if (iVar13 - 1U < 3) {
                    iVar17 = iVar13;
LAB_0037b180:
                    do {
                      *plVar10 = lVar22;
                      plVar10 = plVar10 + 1;
                      lVar22 = lVar22 + 0x80;
                      iVar17 = iVar17 + -1;
                    } while (iVar17 != 0);
                  }
                  else {
                    lVar19 = lVar22;
                    if (uVar12 - 4 < 0xc) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = 0;
                      uVar23 = uVar15 & 0xfffffffffffffffc;
                      do {
                        auVar25._8_4_ = (int)lVar19;
                        auVar25._0_8_ = lVar19;
                        auVar25._12_4_ = (int)((ulong)lVar19 >> 0x20);
                        plVar10[lVar21] = lVar19 + lVar6;
                        (plVar10 + lVar21)[1] = auVar25._8_8_ + lVar30;
                        plVar10[lVar21 + 2] = lVar19 + lVar31;
                        (plVar10 + lVar21 + 2)[1] = auVar25._8_8_ + lVar32;
                        lVar16 = lVar19 + 0x200;
                        auVar26._8_4_ = (int)lVar16;
                        auVar26._0_8_ = lVar16;
                        auVar26._12_4_ = (int)((ulong)lVar16 >> 0x20);
                        plVar10[lVar21 + 4] = lVar16 + lVar6;
                        (plVar10 + lVar21 + 4)[1] = auVar26._8_8_ + lVar30;
                        plVar10[lVar21 + 6] = lVar16 + lVar31;
                        (plVar10 + lVar21 + 6)[1] = auVar26._8_8_ + lVar32;
                        lVar16 = lVar19 + 0x400;
                        auVar27._8_4_ = (int)lVar16;
                        auVar27._0_8_ = lVar16;
                        auVar27._12_4_ = (int)((ulong)lVar16 >> 0x20);
                        plVar10[lVar21 + 8] = lVar16 + lVar6;
                        (plVar10 + lVar21 + 8)[1] = auVar27._8_8_ + lVar30;
                        plVar10[lVar21 + 10] = lVar16 + lVar31;
                        (plVar10 + lVar21 + 10)[1] = auVar27._8_8_ + lVar32;
                        lVar16 = lVar19 + 0x600;
                        auVar28._8_4_ = (int)lVar16;
                        auVar28._0_8_ = lVar16;
                        auVar28._12_4_ = (int)((ulong)lVar16 >> 0x20);
                        plVar10[lVar21 + 0xc] = lVar16 + lVar6;
                        (plVar10 + lVar21 + 0xc)[1] = auVar28._8_8_ + lVar30;
                        plVar10[lVar21 + 0xe] = lVar16 + lVar31;
                        (plVar10 + lVar21 + 0xe)[1] = auVar28._8_8_ + lVar32;
                        lVar21 = lVar21 + 0x10;
                        lVar19 = lVar19 + 0x800;
                        uVar23 = uVar23 - 4;
                      } while (uVar23 != 0);
                    }
                    if (uVar24 != 0) {
                      lVar16 = 0;
                      do {
                        auVar29._8_4_ = (int)lVar19;
                        auVar29._0_8_ = lVar19;
                        auVar29._12_4_ = (int)((ulong)lVar19 >> 0x20);
                        plVar2 = (long *)((long)plVar10 + lVar16 + lVar21 * 8);
                        *plVar2 = lVar19 + lVar6;
                        plVar2[1] = auVar29._8_8_ + lVar30;
                        plVar2 = (long *)((long)plVar10 + lVar16 + lVar21 * 8 + 0x10);
                        *plVar2 = lVar19 + lVar31;
                        plVar2[1] = auVar29._8_8_ + lVar32;
                        lVar19 = lVar19 + 0x200;
                        lVar16 = lVar16 + 0x20;
                      } while (uVar24 * 0x20 != lVar16);
                    }
                    plVar10 = plVar10 + uVar12;
                    if (uVar1 != uVar12) {
                      lVar22 = lVar22 + uVar12 * 0x80;
                      iVar17 = iVar13 - (int)uVar12;
                      goto LAB_0037b180;
                    }
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 != uVar3);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar8);
          }
          cVar5 = (**(code **)(*(long *)(param_1 + 0x250) + 8))(param_1,(long *)(lVar4 + 0x38));
          if (cVar5 == '\0') {
            *(int *)(lVar4 + 0x2c) = (int)lVar11;
            *(uint *)(lVar4 + 0x28) = uVar18;
            return 0;
          }
          uVar18 = uVar18 + 1;
          uVar8 = *(uint *)(param_1 + 0x1c8);
          lVar6 = _DAT_00656c40;
          lVar30 = _UNK_00656c48;
          lVar31 = _DAT_005dd7d0;
          lVar32 = _UNK_005dd7d8;
        } while (uVar18 < uVar8);
        iVar13 = *(int *)(lVar4 + 0x30);
      }
      *(undefined4 *)(lVar4 + 0x28) = 0;
      lVar11 = lVar11 + 1;
      uVar18 = 0;
    } while (lVar11 < iVar13);
  }
  uVar18 = *(int *)(param_1 + 0xa0) + 1;
  *(uint *)(param_1 + 0xa0) = uVar18;
  if (uVar18 < *(uint *)(param_1 + 400)) {
    lVar4 = *(long *)(param_1 + 0x230);
    uVar14 = 1;
    if (*(int *)(param_1 + 0x1a0) < 2) {
      uVar14 = *(undefined4 *)
                ((ulong)(*(uint *)(param_1 + 400) - 1 <= uVar18) * 0x40 + 0xc +
                *(long *)(param_1 + 0x1a8));
    }
    *(undefined4 *)(lVar4 + 0x30) = uVar14;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    uVar7 = 3;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x240) + 0x18))(param_1);
    uVar7 = 4;
  }
  return uVar7;
}


