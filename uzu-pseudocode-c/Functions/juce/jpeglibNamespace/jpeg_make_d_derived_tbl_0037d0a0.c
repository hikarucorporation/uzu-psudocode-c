// Function : jpeg_make_d_derived_tbl
// Namespace: juce:jpeglibNamespace
// Entry    : 0037d0a0
// Prototype: undefined jpeg_make_d_derived_tbl(long * param_1, char param_2, uint param_3, long * param_4)
// Body     : 0037d0a0 - 0037ebb7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_make_d_derived_tbl(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char, int, juce::jpeglibNamespace::d_derived_tbl**) */

void __cdecl
juce::jpeglibNamespace::jpeg_make_d_derived_tbl
          (long *param_1,char param_2,uint param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined8 uVar18;
  undefined1 auVar19 [13];
  undefined1 auVar20 [15];
  unkuint9 Var21;
  undefined1 auVar22 [15];
  undefined1 auVar23 [11];
  undefined1 auVar24 [15];
  undefined1 auVar25 [14];
  uint6 uVar26;
  undefined8 uVar27;
  uint uVar28;
  undefined1 *puVar29;
  long lVar30;
  ulong uVar31;
  undefined1 *puVar32;
  long lVar33;
  ulong uVar34;
  undefined1 *puVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  long lVar41;
  long lVar42;
  uint uVar43;
  long *plVar44;
  undefined1 *puVar45;
  int iVar46;
  bool bVar47;
  uint uVar48;
  undefined1 auVar49 [16];
  undefined8 *local_588;
  byte local_548 [268];
  uint auStack_43c [259];
  
  if (3 < param_3) {
    lVar30 = *param_1;
    *(undefined4 *)(lVar30 + 0x28) = 0x34;
    *(uint *)(lVar30 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  local_588 = (undefined8 *)param_1[(ulong)(param_2 == '\0') * 4 + (long)(int)param_3 + 0x1b];
  if (local_588 != (undefined8 *)0x0) goto LAB_0037d2a0;
  if ((char)param_1[4] == '\0') {
    if (param_2 == '\0') {
      plVar44 = param_1 + 0x18;
      goto joined_r0x0037d1a8;
    }
    plVar44 = param_1 + 0x14;
    if (param_3 != 1) goto LAB_0037d154;
LAB_0037d1aa:
    puVar39 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
              bits_dc_chrominance;
    if (param_2 == '\0') {
      puVar39 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
                bits_ac_chrominance;
    }
    puVar29 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
              val_ac_chrominance;
  }
  else {
    if (param_2 == '\0') {
      plVar44 = param_1 + 0x1f;
    }
    else {
      plVar44 = param_1 + 0x1b;
    }
joined_r0x0037d1a8:
    if (param_3 == 1) goto LAB_0037d1aa;
LAB_0037d154:
    if (param_3 != 0) {
      lVar30 = *param_1;
      *(undefined4 *)(lVar30 + 0x28) = 0x34;
      *(uint *)(lVar30 + 0x2c) = param_3;
      (**(code **)*param_1)();
      local_588 = (undefined8 *)0x0;
      goto LAB_0037d2a0;
    }
    puVar39 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
              bits_dc_luminance;
    if (param_2 == '\0') {
      puVar39 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
                bits_ac_luminance;
    }
    puVar29 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
              val_ac_luminance;
  }
  puVar32 = jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
            val_dc_chrominance;
  if (param_2 == '\0') {
    puVar32 = puVar29;
  }
  local_588 = (undefined8 *)plVar44[param_3];
  if (local_588 == (undefined8 *)0x0) {
    local_588 = (undefined8 *)(**(code **)param_1[1])(param_1,0,0x112);
    *(undefined1 *)((long)local_588 + 0x111) = 0;
    plVar44[param_3] = (long)local_588;
  }
  *(undefined1 *)(local_588 + 2) = *(undefined1 *)((long)puVar39 + 0x10);
  uVar18 = *(undefined8 *)((long)puVar39 + 8);
  auVar49 = *(undefined1 (*) [16])((long)puVar39 + 1);
  *local_588 = *(undefined8 *)puVar39;
  local_588[1] = uVar18;
  uVar38 = CONCAT13(0,CONCAT12(auVar49[9],(ushort)auVar49[8]));
  auVar9[0xc] = auVar49[0xb];
  auVar9._0_12_ = ZEXT112(auVar49[0xc]) << 0x40;
  auVar10._10_3_ = auVar9._10_3_;
  auVar10._0_10_ = (unkuint10)auVar49[10] << 0x40;
  auVar19._5_8_ = 0;
  auVar19._0_5_ = auVar10._8_5_;
  auVar11[4] = auVar49[9];
  auVar11._0_4_ = uVar38;
  auVar11[5] = 0;
  auVar11._6_7_ = SUB137(auVar19 << 0x40,6);
  auVar5[0xd] = 0;
  auVar5._0_13_ = auVar49._0_13_;
  auVar5[0xe] = auVar49[7];
  auVar7[0xc] = auVar49[6];
  auVar7._0_12_ = auVar49._0_12_;
  auVar7._13_2_ = auVar5._13_2_;
  auVar8[0xb] = 0;
  auVar8._0_11_ = auVar49._0_11_;
  auVar8._12_3_ = auVar7._12_3_;
  uVar48 = auVar8._11_4_;
  auVar12[10] = auVar49[5];
  auVar12._0_10_ = auVar49._0_10_;
  auVar12._11_4_ = uVar48;
  auVar14[9] = 0;
  auVar14._0_9_ = auVar49._0_9_;
  auVar14._10_5_ = auVar12._10_5_;
  auVar15[8] = auVar49[4];
  auVar15._0_8_ = auVar49._0_8_;
  auVar15._9_6_ = auVar14._9_6_;
  auVar20._7_8_ = 0;
  auVar20._0_7_ = auVar15._8_7_;
  Var21 = CONCAT81(SUB158(auVar20 << 0x40,7),auVar49[3]);
  auVar22._9_6_ = 0;
  auVar22._0_9_ = Var21;
  auVar23._1_10_ = SUB1510(auVar22 << 0x30,5);
  auVar23[0] = auVar49[2];
  auVar24._11_4_ = 0;
  auVar24._0_11_ = auVar23;
  auVar16[2] = auVar49[1];
  auVar16._0_2_ = auVar49._0_2_;
  auVar16._3_12_ = SUB1512(auVar24 << 0x20,3);
  auVar17._2_13_ = auVar16._2_13_;
  auVar17._0_2_ = auVar49._0_2_ & 0xff;
  auVar6._10_2_ = 0;
  auVar6._0_10_ = auVar17._0_10_;
  auVar6._12_2_ = (short)Var21;
  uVar26 = CONCAT42(auVar6._10_4_,auVar23._0_2_);
  auVar25._6_8_ = 0;
  auVar25._0_6_ = uVar26;
  auVar13._4_2_ = auVar16._2_2_;
  auVar13._0_4_ = auVar17._0_4_;
  auVar13._6_8_ = SUB148(auVar25 << 0x40,6);
  uVar48 = (uVar48 >> 0x18) + (uint)auVar49[0xf] +
           (auVar6._10_4_ >> 0x10) + (uint)(uint3)(auVar9._10_3_ >> 0x10) +
           (uint)auVar12._10_2_ + (uint)auVar49[0xd] + auVar13._4_4_ + auVar11._4_4_ +
           (uVar48 >> 8 & 0xffff) + (uint)auVar49[0xe] + (int)uVar26 + auVar10._8_4_ +
           (uint)auVar15._8_2_ + (uint)auVar49[0xc] + (auVar17._0_4_ & 0xffff) + (uVar38 & 0xffff);
  if (uVar48 < 0x101) {
    if (uVar48 != 0) goto LAB_0037d28b;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)();
LAB_0037d28b:
    memcpy((void *)((long)local_588 + 0x11),puVar32,(ulong)uVar48);
  }
  *(undefined1 *)((long)local_588 + 0x111) = 0;
LAB_0037d2a0:
  lVar30 = *param_4;
  if (lVar30 == 0) {
    lVar30 = (**(code **)param_1[1])(param_1,1,0x620);
    *param_4 = lVar30;
  }
  *(undefined8 **)(lVar30 + 0x118) = local_588;
  bVar1 = *(byte *)((long)local_588 + 1);
  uVar48 = (uint)bVar1;
  if (bVar1 == 0) {
    uVar48 = 0;
  }
  else {
    memset(local_548,1,(ulong)bVar1);
  }
  bVar1 = *(byte *)((long)local_588 + 2);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,2,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 3);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,3,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 4);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,4,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 5);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,5,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 6);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,6,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 7);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,7,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)(local_588 + 1);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,8,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 9);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,9,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 10);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,10,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 0xb);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,0xb,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 0xc);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,0xc,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 0xd);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,0xd,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 0xe);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,0xe,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)((long)local_588 + 0xf);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,0xf,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  bVar1 = *(byte *)(local_588 + 2);
  if (0x100 < bVar1 + uVar48) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 9;
    (*(code *)*puVar4)(param_1);
  }
  if ((ulong)bVar1 != 0) {
    memset(local_548 + uVar48,0x10,(ulong)bVar1);
    uVar48 = bVar1 + uVar48;
  }
  local_548[uVar48] = 0;
  uVar38 = (uint)(char)local_548[0];
  if (uVar38 != 0) {
    uVar43 = 0;
    iVar46 = 0;
    uVar28 = uVar38;
    do {
      if (uVar38 == (int)(char)uVar28) {
        lVar37 = 0;
        do {
          auStack_43c[(long)iVar46 + lVar37 + 1] = uVar43 + (int)lVar37;
          lVar42 = lVar37 + iVar46;
          lVar37 = lVar37 + 1;
        } while (uVar38 == (int)(char)local_548[lVar42 + 1]);
        iVar46 = iVar46 + (int)lVar37;
        uVar43 = uVar43 + (int)lVar37;
      }
      if (1L << ((byte)uVar38 & 0x3f) <= (long)(ulong)uVar43) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 9;
        (*(code *)*puVar4)(param_1);
      }
      uVar43 = uVar43 * 2;
      uVar38 = uVar38 + 1;
      uVar28 = (uint)local_548[iVar46];
    } while (local_548[iVar46] != 0);
  }
  uVar34 = 0xffffffffffffffff;
  if (*(char *)((long)local_588 + 1) == '\0') {
    uVar31 = 0;
    uVar38 = 0;
    *(undefined8 *)(lVar30 + 8) = 0xffffffffffffffff;
    cVar2 = *(char *)((long)local_588 + 2);
  }
  else {
    *(ulong *)(lVar30 + 0x98) = -(ulong)auStack_43c[1];
    uVar31 = (ulong)*(byte *)((long)local_588 + 1);
    uVar38 = (uint)*(byte *)((long)local_588 + 1);
    *(ulong *)(lVar30 + 8) = (ulong)auStack_43c[uVar31];
    cVar2 = *(char *)((long)local_588 + 2);
  }
  if (cVar2 != '\0') {
    uVar31 = (ulong)uVar38;
    *(ulong *)(lVar30 + 0xa0) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 2) + uVar31;
    uVar34 = (ulong)auStack_43c[uVar31];
  }
  *(ulong *)(lVar30 + 0x10) = uVar34;
  uVar34 = 0xffffffffffffffff;
  if (*(char *)((long)local_588 + 3) == '\0') {
    *(undefined8 *)(lVar30 + 0x18) = 0xffffffffffffffff;
    cVar2 = *(char *)((long)local_588 + 4);
  }
  else {
    *(ulong *)(lVar30 + 0xa8) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 3) + uVar31;
    *(ulong *)(lVar30 + 0x18) = (ulong)auStack_43c[uVar31];
    cVar2 = *(char *)((long)local_588 + 4);
  }
  if (cVar2 != '\0') {
    *(ulong *)(lVar30 + 0xb0) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 4) + uVar31;
    uVar34 = (ulong)auStack_43c[uVar31];
  }
  *(ulong *)(lVar30 + 0x20) = uVar34;
  uVar34 = 0xffffffffffffffff;
  if (*(char *)((long)local_588 + 5) == '\0') {
    *(undefined8 *)(lVar30 + 0x28) = 0xffffffffffffffff;
    cVar2 = *(char *)((long)local_588 + 6);
  }
  else {
    *(ulong *)(lVar30 + 0xb8) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 5) + uVar31;
    *(ulong *)(lVar30 + 0x28) = (ulong)auStack_43c[uVar31];
    cVar2 = *(char *)((long)local_588 + 6);
  }
  if (cVar2 != '\0') {
    *(ulong *)(lVar30 + 0xc0) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 6) + uVar31;
    uVar34 = (ulong)auStack_43c[uVar31];
  }
  *(ulong *)(lVar30 + 0x30) = uVar34;
  uVar34 = 0xffffffffffffffff;
  if (*(char *)((long)local_588 + 7) == '\0') {
    *(undefined8 *)(lVar30 + 0x38) = 0xffffffffffffffff;
    cVar2 = *(char *)(local_588 + 1);
  }
  else {
    *(ulong *)(lVar30 + 200) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 7) + uVar31;
    *(ulong *)(lVar30 + 0x38) = (ulong)auStack_43c[uVar31];
    cVar2 = *(char *)(local_588 + 1);
  }
  if (cVar2 != '\0') {
    *(ulong *)(lVar30 + 0xd0) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)(local_588 + 1) + uVar31;
    uVar34 = (ulong)auStack_43c[uVar31];
  }
  *(ulong *)(lVar30 + 0x40) = uVar34;
  uVar34 = 0xffffffffffffffff;
  if (*(char *)((long)local_588 + 9) == '\0') {
    *(undefined8 *)(lVar30 + 0x48) = 0xffffffffffffffff;
    cVar2 = *(char *)((long)local_588 + 10);
  }
  else {
    *(ulong *)(lVar30 + 0xd8) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 9) + uVar31;
    *(ulong *)(lVar30 + 0x48) = (ulong)auStack_43c[uVar31];
    cVar2 = *(char *)((long)local_588 + 10);
  }
  if (cVar2 != '\0') {
    *(ulong *)(lVar30 + 0xe0) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 10) + uVar31;
    uVar34 = (ulong)auStack_43c[uVar31];
  }
  *(ulong *)(lVar30 + 0x50) = uVar34;
  uVar34 = 0xffffffffffffffff;
  if (*(char *)((long)local_588 + 0xb) == '\0') {
    *(undefined8 *)(lVar30 + 0x58) = 0xffffffffffffffff;
    cVar2 = *(char *)((long)local_588 + 0xc);
  }
  else {
    *(ulong *)(lVar30 + 0xe8) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 0xb) + uVar31;
    *(ulong *)(lVar30 + 0x58) = (ulong)auStack_43c[uVar31];
    cVar2 = *(char *)((long)local_588 + 0xc);
  }
  if (cVar2 != '\0') {
    *(ulong *)(lVar30 + 0xf0) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 0xc) + uVar31;
    uVar34 = (ulong)auStack_43c[uVar31];
  }
  *(ulong *)(lVar30 + 0x60) = uVar34;
  uVar34 = 0xffffffffffffffff;
  if (*(char *)((long)local_588 + 0xd) == '\0') {
    *(undefined8 *)(lVar30 + 0x68) = 0xffffffffffffffff;
    cVar2 = *(char *)((long)local_588 + 0xe);
  }
  else {
    *(ulong *)(lVar30 + 0xf8) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 0xd) + uVar31;
    *(ulong *)(lVar30 + 0x68) = (ulong)auStack_43c[uVar31];
    cVar2 = *(char *)((long)local_588 + 0xe);
  }
  if (cVar2 != '\0') {
    *(ulong *)(lVar30 + 0x100) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 0xe) + uVar31;
    uVar34 = (ulong)auStack_43c[uVar31];
  }
  *(ulong *)(lVar30 + 0x70) = uVar34;
  uVar34 = 0xffffffffffffffff;
  if (*(char *)((long)local_588 + 0xf) == '\0') {
    *(undefined8 *)(lVar30 + 0x78) = 0xffffffffffffffff;
    cVar2 = *(char *)(local_588 + 2);
  }
  else {
    *(ulong *)(lVar30 + 0x108) = uVar31 - auStack_43c[uVar31 + 1];
    uVar31 = *(byte *)((long)local_588 + 0xf) + uVar31;
    *(ulong *)(lVar30 + 0x78) = (ulong)auStack_43c[uVar31];
    cVar2 = *(char *)(local_588 + 2);
  }
  if (cVar2 != '\0') {
    *(ulong *)(lVar30 + 0x110) = uVar31 - auStack_43c[uVar31 + 1];
    uVar34 = (ulong)auStack_43c[*(byte *)(local_588 + 2) + uVar31];
  }
  *(ulong *)(lVar30 + 0x80) = uVar34;
  *(undefined8 *)(lVar30 + 0x88) = 0xfffff;
  lVar37 = 0;
  memset((void *)(lVar30 + 0x120),0,0x400);
  uVar27 = _UNK_0065a048;
  uVar18 = _DAT_0065a040;
  if (*(char *)((long)local_588 + 1) != '\0') {
    lVar37 = 0;
    uVar38 = 1;
    do {
      puVar45 = (undefined1 *)((long)local_588 + lVar37 + 0x12);
      uVar34 = (ulong)(int)(auStack_43c[lVar37 + 1] << 7);
      puVar35 = (undefined1 *)(uVar34 * 4 + 0x120 + lVar30);
      puVar39 = (undefined1 *)(lVar30 + 800 + uVar34 * 4);
      puVar32 = (undefined1 *)(uVar34 + lVar30 + 0x520);
      puVar29 = (undefined1 *)(lVar30 + 0x5a0 + uVar34);
      puVar40 = (undefined1 *)((long)local_588 + lVar37 + 0x11);
      if (((puVar35 < puVar29 && puVar32 < puVar39) || (puVar35 < puVar45 && puVar40 < puVar39)) ||
         (puVar32 < puVar45 && puVar40 < puVar29)) {
        lVar33 = lVar30 + 0x523 + uVar34;
        lVar42 = lVar30 + 300 + uVar34 * 4;
        lVar36 = 0;
        do {
          *(undefined4 *)(lVar42 + -0xc + lVar36 * 4) = 1;
          *(undefined1 *)(lVar33 + -3 + lVar36) = *puVar40;
          *(undefined4 *)(lVar42 + -8 + lVar36 * 4) = 1;
          *(undefined1 *)(lVar33 + -2 + lVar36) = *puVar40;
          *(undefined4 *)(lVar42 + -4 + lVar36 * 4) = 1;
          *(undefined1 *)(lVar33 + -1 + lVar36) = *puVar40;
          *(undefined4 *)(lVar42 + lVar36 * 4) = 1;
          *(undefined1 *)(lVar33 + lVar36) = *puVar40;
          lVar36 = lVar36 + 4;
        } while ((int)lVar36 != 0x80);
      }
      else {
        auVar49 = ZEXT216(CONCAT11(*puVar40,*puVar40));
        auVar49 = pshuflw(auVar49,auVar49,0);
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar34 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar34 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        uVar3 = auVar49._0_4_;
        *(undefined4 *)(lVar30 + 0x520 + uVar34) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar34) = uVar3;
        uVar31 = uVar34 | 8;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x10;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x18;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x20;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x28;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x30;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x38;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x40;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x48;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x50;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x58;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x60;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x68;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar31 = uVar34 | 0x70;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar31 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar31) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar31) = uVar3;
        uVar34 = uVar34 | 0x78;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar34 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        puVar4 = (undefined8 *)(lVar30 + 0x130 + uVar34 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + uVar34) = uVar3;
        *(undefined4 *)(lVar30 + 0x524 + uVar34) = uVar3;
      }
      lVar37 = lVar37 + 1;
      bVar47 = uVar38 < *(byte *)((long)local_588 + 1);
      uVar38 = uVar38 + 1;
    } while (bVar47);
  }
  uVar27 = _UNK_005ddad8;
  uVar18 = _DAT_005ddad0;
  if (*(char *)((long)local_588 + 2) != '\0') {
    iVar46 = (int)lVar37;
    lVar42 = 0;
    lVar37 = (long)iVar46;
    uVar38 = 1;
    do {
      puVar45 = (undefined1 *)((long)local_588 + iVar46 + lVar42 + 0x12);
      uVar34 = (ulong)(int)(auStack_43c[lVar37 + 1] << 6);
      puVar29 = (undefined1 *)(uVar34 * 4 + 0x120 + lVar30);
      puVar39 = (undefined1 *)(lVar30 + 0x220 + uVar34 * 4);
      puVar35 = (undefined1 *)(uVar34 + lVar30 + 0x520);
      puVar40 = (undefined1 *)(lVar30 + 0x560 + uVar34);
      puVar32 = (undefined1 *)((long)local_588 + lVar37 + 0x11);
      if (((puVar29 < puVar40 && puVar35 < puVar39) || (puVar29 < puVar45 && puVar32 < puVar39)) ||
         (puVar35 < puVar45 && puVar32 < puVar40)) {
        lVar36 = lVar30 + 0x523 + uVar34;
        lVar33 = lVar30 + 300 + uVar34 * 4;
        lVar41 = 0;
        do {
          *(undefined4 *)(lVar33 + -0xc + lVar41 * 4) = 2;
          *(undefined1 *)(lVar36 + -3 + lVar41) = *puVar32;
          *(undefined4 *)(lVar33 + -8 + lVar41 * 4) = 2;
          *(undefined1 *)(lVar36 + -2 + lVar41) = *puVar32;
          *(undefined4 *)(lVar33 + -4 + lVar41 * 4) = 2;
          *(undefined1 *)(lVar36 + -1 + lVar41) = *puVar32;
          *(undefined4 *)(lVar33 + lVar41 * 4) = 2;
          *(undefined1 *)(lVar36 + lVar41) = *puVar32;
          lVar41 = lVar41 + 4;
        } while ((int)lVar41 != 0x40);
      }
      else {
        puVar4 = (undefined8 *)(lVar30 + 0x120 + uVar34 * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        auVar49 = ZEXT216(CONCAT11(*puVar32,*puVar32));
        auVar49 = pshuflw(auVar49,auVar49,0);
        uVar3 = auVar49._0_4_;
        *(undefined4 *)(lVar30 + 0x520 + uVar34) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 4) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 4)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 8) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 8)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0xc) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0xc)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x10) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x10)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x14) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x14)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x18) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x18)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x1c) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x1c)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x20) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x20)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x24) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x24)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x28) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x28)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x2c) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x2c)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x30) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x30)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x34) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(undefined4 *)(lVar30 + 0x520 + (uVar34 | 0x34)) = uVar3;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x38) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        auVar49 = ZEXT216(CONCAT11(*puVar32,*puVar32));
        auVar49 = pshuflw(auVar49,auVar49,0);
        *(int *)(lVar30 + 0x520 + (uVar34 | 0x38)) = auVar49._0_4_;
        puVar4 = (undefined8 *)(lVar30 + 0x120 + (uVar34 | 0x3c) * 4);
        *puVar4 = uVar18;
        puVar4[1] = uVar27;
        *(int *)(lVar30 + 0x520 + (uVar34 | 0x3c)) = auVar49._0_4_;
      }
      lVar37 = lVar37 + 1;
      lVar42 = lVar42 + 1;
      bVar47 = uVar38 < *(byte *)((long)local_588 + 2);
      uVar38 = uVar38 + 1;
    } while (bVar47);
  }
  if (*(char *)((long)local_588 + 3) != '\0') {
    lVar37 = (long)(int)lVar37;
    uVar38 = 0;
    do {
      lVar42 = (long)(int)(auStack_43c[lVar37 + 1] << 5);
      *(undefined4 *)(lVar30 + 0x120 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x520 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x124 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x521 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x128 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x522 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 300 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x523 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x130 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x524 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x134 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x525 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x138 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x526 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x13c + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x527 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x140 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x528 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x144 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x529 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x148 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x52a + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x14c + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x52b + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x150 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x52c + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x154 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x52d + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x158 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x52e + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x15c + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x52f + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x160 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x530 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x164 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x531 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x168 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x532 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x16c + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x533 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x170 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x534 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x174 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x535 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x178 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x536 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x17c + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x537 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x180 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x538 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x184 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x539 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x188 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x53a + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x18c + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x53b + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 400 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x53c + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x194 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x53d + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x198 + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x53e + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x19c + lVar42 * 4) = 3;
      *(undefined1 *)(lVar30 + 0x53f + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      lVar37 = lVar37 + 1;
      uVar38 = uVar38 + 1;
    } while (uVar38 < *(byte *)((long)local_588 + 3));
  }
  if (*(char *)((long)local_588 + 4) != '\0') {
    lVar37 = (long)(int)lVar37;
    uVar38 = 0;
    do {
      lVar42 = (long)(int)(auStack_43c[lVar37 + 1] << 4);
      *(undefined4 *)(lVar30 + 0x120 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x520 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x124 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x521 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x128 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x522 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 300 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x523 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x130 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x524 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x134 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x525 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x138 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x526 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x13c + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x527 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x140 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x528 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x144 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x529 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x148 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x52a + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x14c + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x52b + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x150 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x52c + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x154 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x52d + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x158 + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x52e + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x15c + lVar42 * 4) = 4;
      *(undefined1 *)(lVar30 + 0x52f + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      lVar37 = lVar37 + 1;
      uVar38 = uVar38 + 1;
    } while (uVar38 < *(byte *)((long)local_588 + 4));
  }
  if (*(char *)((long)local_588 + 5) != '\0') {
    lVar37 = (long)(int)lVar37;
    uVar38 = 0;
    do {
      lVar42 = (long)(int)(auStack_43c[lVar37 + 1] << 3);
      *(undefined4 *)(lVar30 + 0x120 + lVar42 * 4) = 5;
      *(undefined1 *)(lVar30 + 0x520 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x124 + lVar42 * 4) = 5;
      *(undefined1 *)(lVar30 + 0x521 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x128 + lVar42 * 4) = 5;
      *(undefined1 *)(lVar30 + 0x522 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 300 + lVar42 * 4) = 5;
      *(undefined1 *)(lVar30 + 0x523 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x130 + lVar42 * 4) = 5;
      *(undefined1 *)(lVar30 + 0x524 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x134 + lVar42 * 4) = 5;
      *(undefined1 *)(lVar30 + 0x525 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x138 + lVar42 * 4) = 5;
      *(undefined1 *)(lVar30 + 0x526 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x13c + lVar42 * 4) = 5;
      *(undefined1 *)(lVar30 + 0x527 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      lVar37 = lVar37 + 1;
      uVar38 = uVar38 + 1;
    } while (uVar38 < *(byte *)((long)local_588 + 5));
  }
  if (*(char *)((long)local_588 + 6) != '\0') {
    lVar37 = (long)(int)lVar37;
    uVar38 = 0;
    do {
      lVar42 = (long)(int)(auStack_43c[lVar37 + 1] << 2);
      *(undefined4 *)(lVar30 + 0x120 + lVar42 * 4) = 6;
      *(undefined1 *)(lVar30 + 0x520 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x124 + lVar42 * 4) = 6;
      *(undefined1 *)(lVar30 + 0x521 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x128 + lVar42 * 4) = 6;
      *(undefined1 *)(lVar30 + 0x522 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 300 + lVar42 * 4) = 6;
      *(undefined1 *)(lVar30 + 0x523 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      lVar37 = lVar37 + 1;
      uVar38 = uVar38 + 1;
    } while (uVar38 < *(byte *)((long)local_588 + 6));
  }
  if (*(char *)((long)local_588 + 7) != '\0') {
    lVar37 = (long)(int)lVar37;
    uVar38 = 0;
    do {
      lVar42 = (long)(int)(auStack_43c[lVar37 + 1] * 2);
      *(undefined4 *)(lVar30 + 0x120 + lVar42 * 4) = 7;
      *(undefined1 *)(lVar30 + 0x520 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      *(undefined4 *)(lVar30 + 0x124 + lVar42 * 4) = 7;
      *(undefined1 *)(lVar30 + 0x521 + lVar42) = *(undefined1 *)((long)local_588 + lVar37 + 0x11);
      lVar37 = lVar37 + 1;
      uVar38 = uVar38 + 1;
    } while (uVar38 < *(byte *)((long)local_588 + 7));
  }
  if (*(char *)(local_588 + 1) != '\0') {
    lVar42 = 0;
    do {
      uVar38 = auStack_43c[(long)(int)lVar37 + lVar42 + 1];
      *(undefined4 *)(lVar30 + 0x120 + (long)(int)uVar38 * 4) = 8;
      *(undefined1 *)(lVar30 + 0x520 + (long)(int)uVar38) =
           *(undefined1 *)((long)local_588 + lVar42 + (long)(int)lVar37 + 0x11);
      lVar42 = lVar42 + 1;
    } while ((uint)lVar42 < (uint)*(byte *)(local_588 + 1));
  }
  if ((param_2 != '\0') && (uVar48 != 0)) {
    uVar34 = 0;
    do {
      if (0xf < *(byte *)((long)local_588 + uVar34 + 0x11)) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 9;
        (*(code *)*puVar4)();
      }
      uVar34 = uVar34 + 1;
    } while (uVar48 != uVar34);
  }
  return;
}


