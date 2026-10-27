// Function : get_sof
// Namespace: juce:jpeglibNamespace
// Entry    : 00392a20
// Prototype: undefined8 get_sof(long * param_1, undefined1 param_2, undefined1 param_3, undefined1 param_4)
// Body     : 00392a20 - 00392fcf


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::get_sof(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned char,
   unsigned char, unsigned char) */

undefined8 __cdecl
juce::jpeglibNamespace::get_sof
          (long *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  puVar4 = (undefined8 *)param_1[5];
  puVar17 = (undefined1 *)*puVar4;
  lVar11 = puVar4[1];
  *(undefined1 *)(param_1 + 0x25) = param_2;
  *(undefined1 *)((long)param_1 + 0x129) = param_3;
  *(undefined1 *)((long)param_1 + 0x12a) = param_4;
  if (lVar11 == 0) {
    cVar7 = (*(code *)puVar4[3])(param_1);
    if (cVar7 == '\0') {
      return 0;
    }
    puVar17 = (undefined1 *)*puVar4;
    lVar11 = puVar4[1];
    uVar1 = *puVar17;
  }
  else {
    uVar1 = *puVar17;
  }
  if (lVar11 == 1) {
    cVar7 = (*(code *)puVar4[3])(param_1);
    if (cVar7 == '\0') {
      return 0;
    }
    puVar17 = (undefined1 *)*puVar4;
    uVar2 = *puVar17;
    lVar11 = puVar4[1] + -1;
  }
  else {
    puVar17 = puVar17 + 1;
    uVar2 = *puVar17;
    lVar11 = lVar11 + -2;
  }
  if (lVar11 == 0) {
    cVar7 = (*(code *)puVar4[3])(param_1);
    if (cVar7 == '\0') {
      return 0;
    }
    pbVar18 = (byte *)*puVar4;
    lVar11 = puVar4[1];
    *(uint *)(param_1 + 0x23) = (uint)*pbVar18;
  }
  else {
    pbVar18 = puVar17 + 1;
    *(uint *)(param_1 + 0x23) = (uint)*pbVar18;
  }
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    cVar7 = (*(code *)puVar4[3])(param_1);
    if (cVar7 == '\0') {
      return 0;
    }
    pbVar18 = (byte *)*puVar4;
    lVar11 = puVar4[1];
  }
  else {
    pbVar18 = (byte *)((long)pbVar18 + 1);
  }
  iVar8 = (uint)*pbVar18 << 8;
  *(int *)((long)param_1 + 0x34) = iVar8;
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    cVar7 = (*(code *)puVar4[3])(param_1);
    if (cVar7 == '\0') {
      return 0;
    }
    pbVar18 = (byte *)*puVar4;
    lVar11 = puVar4[1];
    iVar8 = *(int *)((long)param_1 + 0x34);
  }
  else {
    pbVar18 = pbVar18 + 1;
  }
  *(uint *)((long)param_1 + 0x34) = (uint)*pbVar18 + iVar8;
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    cVar7 = (*(code *)puVar4[3])(param_1);
    if (cVar7 == '\0') {
      return 0;
    }
    pbVar18 = (byte *)*puVar4;
    lVar11 = puVar4[1];
  }
  else {
    pbVar18 = pbVar18 + 1;
  }
  iVar8 = (uint)*pbVar18 << 8;
  *(int *)(param_1 + 6) = iVar8;
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    cVar7 = (*(code *)puVar4[3])(param_1);
    if (cVar7 == '\0') {
      return 0;
    }
    pbVar18 = (byte *)*puVar4;
    lVar11 = puVar4[1];
    iVar8 = (int)param_1[6];
  }
  else {
    pbVar18 = pbVar18 + 1;
  }
  *(uint *)(param_1 + 6) = (uint)*pbVar18 + iVar8;
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    cVar7 = (*(code *)puVar4[3])(param_1);
    if (cVar7 == '\0') {
      return 0;
    }
    pbVar18 = (byte *)*puVar4;
    lVar11 = puVar4[1];
  }
  else {
    pbVar18 = pbVar18 + 1;
  }
  *(uint *)(param_1 + 7) = (uint)*pbVar18;
  lVar12 = *param_1;
  *(undefined4 *)(lVar12 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
  *(int *)(lVar12 + 0x30) = (int)param_1[6];
  *(undefined4 *)(lVar12 + 0x34) = *(undefined4 *)((long)param_1 + 0x34);
  *(int *)(lVar12 + 0x38) = (int)param_1[7];
  *(undefined4 *)(lVar12 + 0x28) = 0x66;
  (**(code **)(lVar12 + 8))(param_1,1);
  if (*(char *)(param_1[0x49] + 0x19) != '\0') {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x3d;
    (*(code *)*puVar5)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x34) == 0) || ((int)param_1[6] == 0)) ||
     (iVar8 = (int)param_1[7], iVar8 < 1)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x21;
    (*(code *)*puVar5)(param_1);
    iVar8 = (int)param_1[7];
  }
  if ((ulong)CONCAT11(uVar1,uVar2) - 8 == (long)(iVar8 * 3)) {
    lVar12 = param_1[0x24];
  }
  else {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0xc;
    (*(code *)*puVar5)(param_1);
    lVar12 = param_1[0x24];
  }
  if (lVar12 == 0) {
    lVar12 = (**(code **)param_1[1])(param_1,1,(long)(int)param_1[7] * 0x60);
    param_1[0x24] = lVar12;
    iVar8 = (int)param_1[7];
  }
  else {
    iVar8 = (int)param_1[7];
  }
  lVar12 = lVar11 + -1;
  pbVar19 = pbVar18 + 1;
  if (0 < iVar8) {
    pbVar19 = pbVar18 + 1;
    lVar12 = lVar11 + -1;
    uVar20 = 0xfffffffe;
    uVar21 = 0;
    do {
      if (lVar12 == 0) {
        cVar7 = (*(code *)puVar4[3])(param_1);
        if (cVar7 == '\0') {
          return 0;
        }
        pbVar19 = (byte *)*puVar4;
        lVar12 = puVar4[1];
      }
      lVar12 = lVar12 + -1;
      uVar14 = (uint)*pbVar19;
      puVar6 = (uint *)param_1[0x24];
      puVar9 = puVar6;
      if (uVar21 != 0) {
        uVar15 = (ulong)uVar20 + 1 & 0xfffffffffffffff8;
        uVar10 = (uVar21 - 2 & 0xffffffff) + 1;
        uVar13 = uVar21;
LAB_00392dc0:
        if (*puVar9 != (uint)*pbVar19) goto code_r0x00392dc4;
        uVar14 = *puVar6;
        puVar9 = puVar6 + 0x18;
        if (uVar21 < 2) goto LAB_00392f34;
        uVar16 = 1;
        if ((uint)(uVar21 - 2) < 7) goto LAB_00392f18;
        uVar13 = uVar10 & 0xfffffffffffffff8;
        auVar22._4_4_ = uVar14;
        auVar22._0_4_ = uVar14;
        auVar22._8_4_ = uVar14;
        auVar22._12_4_ = uVar14;
        auVar23 = auVar22;
        do {
          auVar29._12_4_ = puVar6[0x60];
          auVar29._8_4_ = puVar6[0x48];
          auVar29._4_4_ = puVar6[0x30];
          auVar29._0_4_ = puVar6[0x18];
          uVar14 = puVar6[0xc0];
          auVar30._12_4_ = uVar14;
          auVar30._8_4_ = puVar6[0xa8];
          auVar30._4_4_ = puVar6[0x90];
          auVar30._0_4_ = puVar6[0x78];
          auVar26._0_4_ = -(uint)(auVar22._0_4_ < (int)puVar6[0x18]);
          auVar26._4_4_ = -(uint)(auVar22._4_4_ < (int)puVar6[0x30]);
          auVar26._8_4_ = -(uint)(auVar22._8_4_ < (int)puVar6[0x48]);
          auVar26._12_4_ = -(uint)(auVar22._12_4_ < (int)puVar6[0x60]);
          auVar22 = ~auVar26 & auVar22 | auVar29 & auVar26;
          auVar27._0_4_ = -(uint)(auVar23._0_4_ < (int)puVar6[0x78]);
          auVar27._4_4_ = -(uint)(auVar23._4_4_ < (int)puVar6[0x90]);
          auVar27._8_4_ = -(uint)(auVar23._8_4_ < (int)puVar6[0xa8]);
          auVar27._12_4_ = -(uint)(auVar23._12_4_ < (int)uVar14);
          auVar23 = ~auVar27 & auVar23 | auVar30 & auVar27;
          uVar15 = uVar15 - 8;
          puVar6 = puVar6 + 0xc0;
        } while (uVar15 != 0);
        puVar9 = puVar9 + uVar13 * 0x18;
        auVar28._0_4_ = -(uint)(auVar23._0_4_ < auVar22._0_4_);
        auVar28._4_4_ = -(uint)(auVar23._4_4_ < auVar22._4_4_);
        auVar28._8_4_ = -(uint)(auVar23._8_4_ < auVar22._8_4_);
        auVar28._12_4_ = -(uint)(auVar23._12_4_ < auVar22._12_4_);
        auVar22 = ~auVar28 & auVar23 | auVar22 & auVar28;
        auVar23._0_8_ = auVar22._8_8_;
        auVar23._8_4_ = auVar22._8_4_;
        auVar23._12_4_ = auVar22._12_4_;
        auVar24._0_4_ = -(uint)(auVar22._8_4_ < auVar22._0_4_);
        auVar24._4_4_ = -(uint)(auVar22._12_4_ < auVar22._4_4_);
        auVar24._8_8_ = 0;
        auVar23 = ~auVar24 & auVar23 | auVar22 & auVar24;
        uVar14 = auVar23._0_4_;
        uVar16 = auVar23._4_4_;
        uVar25 = -(uint)((int)uVar16 < (int)uVar14);
        uVar14 = ~uVar25 & uVar16 | uVar14 & uVar25;
        if (uVar10 != uVar13) {
          uVar16 = (uint)uVar13 | 1;
LAB_00392f18:
          uVar13 = (ulong)uVar16;
          do {
            if ((int)uVar14 < (int)*puVar9) {
              uVar14 = *puVar9;
            }
            puVar9 = puVar9 + 0x18;
            uVar13 = uVar13 + 1;
          } while (uVar21 != uVar13);
        }
LAB_00392f34:
        uVar14 = uVar14 + 1;
      }
LAB_00392f3a:
      *puVar9 = uVar14;
      puVar9[1] = (uint)uVar21;
      if (lVar12 == 0) {
        cVar7 = (*(code *)puVar4[3])(param_1);
        if (cVar7 == '\0') {
          return 0;
        }
        pbVar19 = (byte *)*puVar4;
        lVar12 = puVar4[1];
      }
      else {
        pbVar19 = pbVar19 + 1;
      }
      bVar3 = *pbVar19;
      puVar9[2] = (uint)(bVar3 >> 4);
      puVar9[3] = bVar3 & 0xf;
      lVar12 = lVar12 + -1;
      if (lVar12 == 0) {
        cVar7 = (*(code *)puVar4[3])(param_1);
        if (cVar7 == '\0') {
          return 0;
        }
        pbVar19 = (byte *)*puVar4;
        lVar12 = puVar4[1];
      }
      else {
        pbVar19 = pbVar19 + 1;
      }
      puVar9[4] = (uint)*pbVar19;
      lVar11 = *param_1;
      *(uint *)(lVar11 + 0x2c) = *puVar9;
      *(uint *)(lVar11 + 0x30) = puVar9[2];
      *(uint *)(lVar11 + 0x34) = puVar9[3];
      *(uint *)(lVar11 + 0x38) = puVar9[4];
      *(undefined4 *)(lVar11 + 0x28) = 0x67;
      (**(code **)(lVar11 + 8))(param_1,1);
      uVar21 = uVar21 + 1;
      pbVar19 = pbVar19 + 1;
      lVar12 = lVar12 + -1;
      uVar20 = uVar20 + 1;
    } while ((long)uVar21 < (long)(int)param_1[7]);
  }
  *(undefined1 *)(param_1[0x49] + 0x19) = 1;
  *puVar4 = pbVar19;
  puVar4[1] = lVar12;
  return CONCAT71((int7)((ulong)puVar4 >> 8),1);
code_r0x00392dc4:
  puVar9 = puVar9 + 0x18;
  uVar13 = uVar13 - 1;
  if (uVar13 == 0) goto LAB_00392f3a;
  goto LAB_00392dc0;
}


