// Function : h2v1_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038ab20
// Prototype: undefined h2v1_upsample(long param_1, undefined8 param_2, long param_3, long * param_4)
// Body     : 0038ab20 - 0038ac36


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::h2v1_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, unsigned char***) */

void __cdecl
juce::jpeglibNamespace::h2v1_upsample(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar22;
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  
  iVar5 = *(int *)(param_1 + 0x184);
  if (0 < iVar5) {
    lVar4 = *param_4;
    lVar9 = 0;
    do {
      if ((ulong)*(uint *)(param_1 + 0x74) != 0) {
        uVar6 = *(ulong *)(lVar4 + lVar9 * 8);
        uVar13 = *(uint *)(param_1 + 0x74) + uVar6;
        uVar11 = uVar6 + 2;
        if (uVar6 + 2 < uVar13) {
          uVar11 = uVar13;
        }
        uVar8 = *(ulong *)(param_3 + lVar9 * 8);
        uVar11 = ~uVar6 + uVar11;
        if ((uVar11 < 0x1e) ||
           ((uVar6 < uVar8 + (uVar11 >> 1) + 1 &&
            (uVar8 < uVar6 + (uVar11 & 0xfffffffffffffffe) + 2)))) {
LAB_0038ac00:
          lVar7 = 0;
          do {
            uVar22 = *(undefined1 *)(uVar8 + lVar7);
            *(undefined1 *)(uVar6 + lVar7 * 2) = uVar22;
            *(undefined1 *)(uVar6 + 1 + lVar7 * 2) = uVar22;
            lVar1 = lVar7 * 2;
            lVar7 = lVar7 + 1;
          } while (uVar6 + lVar1 + 2 < uVar13);
        }
        else {
          uVar10 = (uVar11 >> 1) + 1;
          uVar12 = uVar10 & 0xfffffffffffffff0;
          uVar11 = 0;
          do {
            uVar2 = *(ulong *)(uVar8 + uVar11);
            uVar3 = *(ulong *)(uVar8 + 8 + uVar11);
            uVar22 = (undefined1)(uVar2 >> 0x38);
            auVar21._8_6_ = 0;
            auVar21._0_8_ = uVar2;
            auVar21[0xe] = uVar22;
            auVar21[0xf] = uVar22;
            uVar22 = (undefined1)(uVar2 >> 0x30);
            auVar20._14_2_ = auVar21._14_2_;
            auVar20._8_5_ = 0;
            auVar20._0_8_ = uVar2;
            auVar20[0xd] = uVar22;
            auVar19._13_3_ = auVar20._13_3_;
            auVar19._8_4_ = 0;
            auVar19._0_8_ = uVar2;
            auVar19[0xc] = uVar22;
            uVar22 = (undefined1)(uVar2 >> 0x28);
            auVar18._12_4_ = auVar19._12_4_;
            auVar18._8_3_ = 0;
            auVar18._0_8_ = uVar2;
            auVar18[0xb] = uVar22;
            auVar17._11_5_ = auVar18._11_5_;
            auVar17._8_2_ = 0;
            auVar17._0_8_ = uVar2;
            auVar17[10] = uVar22;
            uVar22 = (undefined1)(uVar2 >> 0x20);
            auVar16._10_6_ = auVar17._10_6_;
            auVar16[8] = 0;
            auVar16._0_8_ = uVar2;
            auVar16[9] = uVar22;
            auVar15._9_7_ = auVar16._9_7_;
            auVar15[8] = uVar22;
            auVar15._0_8_ = uVar2;
            uVar22 = (undefined1)(uVar2 >> 0x18);
            auVar14._8_8_ = auVar15._8_8_;
            auVar14[7] = uVar22;
            auVar14[6] = uVar22;
            uVar22 = (undefined1)(uVar2 >> 0x10);
            auVar14[5] = uVar22;
            auVar14[4] = uVar22;
            uVar22 = (undefined1)(uVar2 >> 8);
            auVar14[3] = uVar22;
            auVar14[2] = uVar22;
            auVar14[0] = (undefined1)uVar2;
            auVar14[1] = auVar14[0];
            *(undefined1 (*) [16])(uVar6 + uVar11 * 2) = auVar14;
            uVar22 = (undefined1)(uVar3 >> 0x38);
            auVar30._8_6_ = 0;
            auVar30._0_8_ = uVar3;
            auVar30[0xe] = uVar22;
            auVar30[0xf] = uVar22;
            uVar22 = (undefined1)(uVar3 >> 0x30);
            auVar29._14_2_ = auVar30._14_2_;
            auVar29._8_5_ = 0;
            auVar29._0_8_ = uVar3;
            auVar29[0xd] = uVar22;
            auVar28._13_3_ = auVar29._13_3_;
            auVar28._8_4_ = 0;
            auVar28._0_8_ = uVar3;
            auVar28[0xc] = uVar22;
            uVar22 = (undefined1)(uVar3 >> 0x28);
            auVar27._12_4_ = auVar28._12_4_;
            auVar27._8_3_ = 0;
            auVar27._0_8_ = uVar3;
            auVar27[0xb] = uVar22;
            auVar26._11_5_ = auVar27._11_5_;
            auVar26._8_2_ = 0;
            auVar26._0_8_ = uVar3;
            auVar26[10] = uVar22;
            uVar22 = (undefined1)(uVar3 >> 0x20);
            auVar25._10_6_ = auVar26._10_6_;
            auVar25[8] = 0;
            auVar25._0_8_ = uVar3;
            auVar25[9] = uVar22;
            auVar24._9_7_ = auVar25._9_7_;
            auVar24[8] = uVar22;
            auVar24._0_8_ = uVar3;
            uVar22 = (undefined1)(uVar3 >> 0x18);
            auVar23._8_8_ = auVar24._8_8_;
            auVar23[7] = uVar22;
            auVar23[6] = uVar22;
            uVar22 = (undefined1)(uVar3 >> 0x10);
            auVar23[5] = uVar22;
            auVar23[4] = uVar22;
            uVar22 = (undefined1)(uVar3 >> 8);
            auVar23[3] = uVar22;
            auVar23[2] = uVar22;
            auVar23[0] = (undefined1)uVar3;
            auVar23[1] = auVar23[0];
            *(undefined1 (*) [16])(uVar6 + 0x10 + uVar11 * 2) = auVar23;
            uVar11 = uVar11 + 0x10;
          } while (uVar12 != uVar11);
          if (uVar10 != uVar12) {
            uVar8 = uVar8 + uVar12;
            uVar6 = uVar6 + uVar12 * 2;
            goto LAB_0038ac00;
          }
        }
        iVar5 = *(int *)(param_1 + 0x184);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar5);
  }
  return;
}


