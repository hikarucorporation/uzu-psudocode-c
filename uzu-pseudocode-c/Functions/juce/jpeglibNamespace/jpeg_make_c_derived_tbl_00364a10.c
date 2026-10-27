// Function : jpeg_make_c_derived_tbl
// Namespace: juce:jpeglibNamespace
// Entry    : 00364a10
// Prototype: undefined jpeg_make_c_derived_tbl(long * param_1, char param_2, uint param_3, long * param_4)
// Body     : 00364a10 - 0036520d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_make_c_derived_tbl(juce::jpeglibNamespace::jpeg_compress_struct*,
   unsigned char, int, juce::jpeglibNamespace::c_derived_tbl**) */

void __cdecl
juce::jpeglibNamespace::jpeg_make_c_derived_tbl
          (long *param_1,char param_2,uint param_3,long *param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [14];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [15];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined8 uVar17;
  undefined1 auVar18 [13];
  undefined1 auVar19 [15];
  unkuint9 Var20;
  undefined1 auVar21 [15];
  undefined1 auVar22 [11];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  uint6 uVar25;
  long lVar26;
  uint uVar27;
  undefined1 *puVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  ulong uVar34;
  long *plVar35;
  byte bVar36;
  int iVar37;
  undefined1 *__src;
  uint uVar38;
  undefined8 *local_558;
  byte local_548 [272];
  int local_438 [258];
  
  if (3 < param_3) {
    lVar29 = *param_1;
    *(undefined4 *)(lVar29 + 0x28) = 0x34;
    *(uint *)(lVar29 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  local_558 = (undefined8 *)param_1[(ulong)(param_2 == '\0') * 4 + (long)(int)param_3 + 0x14];
  if (local_558 != (undefined8 *)0x0) {
    lVar29 = *param_4;
    goto joined_r0x00364b27;
  }
  if ((char)param_1[4] == '\0') {
    if (param_2 == '\0') {
      plVar35 = param_1 + 0x18;
    }
    else {
      plVar35 = param_1 + 0x14;
    }
joined_r0x00364b3c:
    if (param_3 != 1) goto LAB_00364ae1;
LAB_00364b3e:
    puVar32 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
              bits_dc_chrominance;
    if (param_2 == '\0') {
      puVar32 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
                bits_ac_chrominance;
    }
    puVar28 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
              val_ac_chrominance;
  }
  else {
    if (param_2 == '\0') {
      plVar35 = param_1 + 0x1f;
      goto joined_r0x00364b3c;
    }
    plVar35 = param_1 + 0x1b;
    if (param_3 == 1) goto LAB_00364b3e;
LAB_00364ae1:
    if (param_3 != 0) {
      lVar29 = *param_1;
      *(undefined4 *)(lVar29 + 0x28) = 0x34;
      *(uint *)(lVar29 + 0x2c) = param_3;
      (**(code **)*param_1)(param_1);
      local_558 = (undefined8 *)0x0;
      lVar29 = *param_4;
      goto joined_r0x00364b27;
    }
    puVar32 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
              bits_dc_luminance;
    if (param_2 == '\0') {
      puVar32 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
                bits_ac_luminance;
    }
    puVar28 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
              val_ac_luminance;
  }
  __src = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
          val_dc_chrominance;
  if (param_2 == '\0') {
    __src = puVar28;
  }
  local_558 = (undefined8 *)plVar35[param_3];
  if (local_558 == (undefined8 *)0x0) {
    local_558 = (undefined8 *)(**(code **)param_1[1])(param_1,0,0x112);
    *(undefined1 *)((long)local_558 + 0x111) = 0;
    plVar35[param_3] = (long)local_558;
  }
  *(undefined1 *)(local_558 + 2) = *(undefined1 *)((long)puVar32 + 0x10);
  uVar17 = *(undefined8 *)((long)puVar32 + 8);
  auVar1 = *(undefined1 (*) [16])((long)puVar32 + 1);
  *local_558 = *(undefined8 *)puVar32;
  local_558[1] = uVar17;
  uVar31 = CONCAT13(0,CONCAT12(auVar1[9],(ushort)auVar1[8]));
  auVar8[0xc] = auVar1[0xb];
  auVar8._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
  auVar9._10_3_ = auVar8._10_3_;
  auVar9._0_10_ = (unkuint10)auVar1[10] << 0x40;
  auVar18._5_8_ = 0;
  auVar18._0_5_ = auVar9._8_5_;
  auVar10[4] = auVar1[9];
  auVar10._0_4_ = uVar31;
  auVar10[5] = 0;
  auVar10._6_7_ = SUB137(auVar18 << 0x40,6);
  auVar4[0xd] = 0;
  auVar4._0_13_ = auVar1._0_13_;
  auVar4[0xe] = auVar1[7];
  auVar6[0xc] = auVar1[6];
  auVar6._0_12_ = auVar1._0_12_;
  auVar6._13_2_ = auVar4._13_2_;
  auVar7[0xb] = 0;
  auVar7._0_11_ = auVar1._0_11_;
  auVar7._12_3_ = auVar6._12_3_;
  uVar38 = auVar7._11_4_;
  auVar11[10] = auVar1[5];
  auVar11._0_10_ = auVar1._0_10_;
  auVar11._11_4_ = uVar38;
  auVar13[9] = 0;
  auVar13._0_9_ = auVar1._0_9_;
  auVar13._10_5_ = auVar11._10_5_;
  auVar14[8] = auVar1[4];
  auVar14._0_8_ = auVar1._0_8_;
  auVar14._9_6_ = auVar13._9_6_;
  auVar19._7_8_ = 0;
  auVar19._0_7_ = auVar14._8_7_;
  Var20 = CONCAT81(SUB158(auVar19 << 0x40,7),auVar1[3]);
  auVar21._9_6_ = 0;
  auVar21._0_9_ = Var20;
  auVar22._1_10_ = SUB1510(auVar21 << 0x30,5);
  auVar22[0] = auVar1[2];
  auVar23._11_4_ = 0;
  auVar23._0_11_ = auVar22;
  auVar15[2] = auVar1[1];
  auVar15._0_2_ = auVar1._0_2_;
  auVar15._3_12_ = SUB1512(auVar23 << 0x20,3);
  auVar16._2_13_ = auVar15._2_13_;
  auVar16._0_2_ = auVar1._0_2_ & 0xff;
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar16._0_10_;
  auVar5._12_2_ = (short)Var20;
  uVar25 = CONCAT42(auVar5._10_4_,auVar22._0_2_);
  auVar24._6_8_ = 0;
  auVar24._0_6_ = uVar25;
  auVar12._4_2_ = auVar15._2_2_;
  auVar12._0_4_ = auVar16._0_4_;
  auVar12._6_8_ = SUB148(auVar24 << 0x40,6);
  uVar38 = (uVar38 >> 0x18) + (uint)auVar1[0xf] +
           (auVar5._10_4_ >> 0x10) + (uint)(uint3)(auVar8._10_3_ >> 0x10) +
           (uint)auVar11._10_2_ + (uint)auVar1[0xd] + auVar12._4_4_ + auVar10._4_4_ +
           (uVar38 >> 8 & 0xffff) + (uint)auVar1[0xe] + (int)uVar25 + auVar9._8_4_ +
           (uint)auVar14._8_2_ + (uint)auVar1[0xc] + (auVar16._0_4_ & 0xffff) + (uVar31 & 0xffff);
  if (uVar38 < 0x101) {
    if (uVar38 != 0) goto LAB_00364c18;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
LAB_00364c18:
    memcpy((void *)((long)local_558 + 0x11),__src,(ulong)uVar38);
  }
  *(undefined1 *)((long)local_558 + 0x111) = 0;
  lVar29 = *param_4;
joined_r0x00364b27:
  if (lVar29 == 0) {
    lVar29 = (**(code **)param_1[1])(param_1,1,0x500);
    *param_4 = lVar29;
    bVar36 = *(byte *)((long)local_558 + 1);
  }
  else {
    bVar36 = *(byte *)((long)local_558 + 1);
  }
  if (bVar36 == 0) {
    uVar38 = 0;
  }
  else {
    uVar38 = (uint)bVar36;
    memset(local_548,1,(ulong)bVar36);
  }
  bVar36 = *(byte *)((long)local_558 + 2);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,2,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 3);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,3,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 4);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,4,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 5);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,5,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 6);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,6,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 7);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,7,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)(local_558 + 1);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,8,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 9);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,9,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 10);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,10,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 0xb);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,0xb,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 0xc);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,0xc,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 0xd);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,0xd,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 0xe);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,0xe,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)((long)local_558 + 0xf);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,0xf,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  bVar36 = *(byte *)(local_558 + 2);
  if (0x100 < bVar36 + uVar38) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 9;
    (*(code *)*puVar3)(param_1);
  }
  if ((ulong)bVar36 != 0) {
    memset(local_548 + uVar38,0x10,(ulong)bVar36);
    uVar38 = bVar36 + uVar38;
  }
  local_548[uVar38] = 0;
  uVar31 = (uint)(char)local_548[0];
  if (uVar31 != 0) {
    uVar34 = 0;
    iVar37 = 0;
    uVar27 = uVar31;
    do {
      if (uVar31 == (int)(char)uVar27) {
        lVar30 = 0;
        do {
          local_438[iVar37 + lVar30] = (int)uVar34 + (int)lVar30;
          lVar26 = lVar30 + iVar37;
          lVar30 = lVar30 + 1;
        } while (uVar31 == (int)(char)local_548[lVar26 + 1]);
        iVar37 = iVar37 + (int)lVar30;
        uVar34 = (ulong)(uint)((int)uVar34 + (int)lVar30);
      }
      if (1L << ((byte)uVar31 & 0x3f) <= (long)uVar34) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 9;
        (*(code *)*puVar3)(param_1);
      }
      uVar34 = (ulong)(uint)((int)uVar34 * 2);
      uVar31 = uVar31 + 1;
      uVar27 = (uint)local_548[iVar37];
    } while (local_548[iVar37] != 0);
  }
  *(undefined1 (*) [16])(lVar29 + 0x4f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x4e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x4d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x4c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x4b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x4a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x490) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x480) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x470) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x460) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x450) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x440) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x430) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x420) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x410) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar29 + 0x400) = (undefined1  [16])0x0;
  bVar36 = 0xf;
  if (param_2 == '\0') {
    bVar36 = 0xff;
  }
  if (uVar38 != 0) {
    uVar34 = 0;
    do {
      bVar2 = *(byte *)((long)local_558 + uVar34 + 0x11);
      uVar33 = (ulong)bVar2;
      if ((bVar36 < bVar2) || (*(char *)(lVar29 + 0x400 + uVar33) != '\0')) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 9;
        (*(code *)*puVar3)(param_1);
      }
      *(int *)(lVar29 + uVar33 * 4) = local_438[uVar34];
      *(byte *)(lVar29 + 0x400 + uVar33) = local_548[uVar34];
      uVar34 = uVar34 + 1;
    } while (uVar38 != uVar34);
  }
  return;
}


