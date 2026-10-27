// Function : h2v2_upsample
// Namespace: juce:jpeglibNamespace
// Entry    : 0038ac40
// Prototype: undefined h2v2_upsample(long param_1, undefined8 param_2, ulong * param_3, long * param_4)
// Body     : 0038ac40 - 0038ad6a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::h2v2_upsample(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::jpeg_component_info*, unsigned char**, unsigned char***) */

void __cdecl
juce::jpeglibNamespace::h2v2_upsample(long param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  void *__src;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
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
  
  if (0 < (long)*(int *)(param_1 + 0x184)) {
    puVar13 = (ulong *)*param_4;
    puVar12 = puVar13 + *(int *)(param_1 + 0x184);
    do {
      __src = (void *)*puVar13;
      if ((ulong)*(uint *)(param_1 + 0x74) == 0) {
        uVar4 = 0;
      }
      else {
        uVar5 = (ulong)*(uint *)(param_1 + 0x74) + (long)__src;
        uVar7 = (long)__src + 2U;
        if ((long)__src + 2U < uVar5) {
          uVar7 = uVar5;
        }
        uVar6 = *param_3;
        uVar7 = ~(ulong)__src + uVar7;
        if ((uVar7 < 0x1e) ||
           ((__src < (void *)(uVar6 + (uVar7 >> 1) + 1) &&
            (uVar6 < (long)__src + (uVar7 & 0xfffffffffffffffe) + 2)))) {
          pvVar8 = __src;
LAB_0038ace1:
          lVar9 = 0;
          do {
            uVar22 = *(undefined1 *)(uVar6 + lVar9);
            *(undefined1 *)((long)pvVar8 + lVar9 * 2) = uVar22;
            *(undefined1 *)((long)pvVar8 + lVar9 * 2 + 1) = uVar22;
            lVar1 = lVar9 * 2;
            lVar9 = lVar9 + 1;
          } while ((ulong)((long)pvVar8 + lVar1 + 2) < uVar5);
        }
        else {
          uVar11 = (uVar7 >> 1) + 1;
          uVar10 = uVar11 & 0xfffffffffffffff0;
          pvVar8 = (void *)((long)__src + uVar10 * 2);
          uVar7 = 0;
          do {
            uVar2 = *(ulong *)(uVar6 + uVar7);
            uVar3 = *(ulong *)(uVar6 + 8 + uVar7);
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
            *(undefined1 (*) [16])((long)__src + uVar7 * 2) = auVar14;
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
            *(undefined1 (*) [16])((long)__src + uVar7 * 2 + 0x10) = auVar23;
            uVar7 = uVar7 + 0x10;
          } while (uVar10 != uVar7);
          if (uVar11 != uVar10) {
            uVar6 = uVar6 + uVar10;
            goto LAB_0038ace1;
          }
        }
        uVar4 = *(uint *)(param_1 + 0x74);
        __src = (void *)*puVar13;
      }
      param_3 = param_3 + 1;
      memcpy((void *)puVar13[1],__src,(ulong)uVar4);
      puVar13 = puVar13 + 2;
    } while (puVar13 < puVar12);
  }
  return;
}


