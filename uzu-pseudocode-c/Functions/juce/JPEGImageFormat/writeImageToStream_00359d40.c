// Function : writeImageToStream
// Namespace: juce:JPEGImageFormat
// Entry    : 00359d40
// Prototype: undefined8 writeImageToStream(JPEGImageFormat * this, long * param_1, undefined8 param_2)
// Body     : 00359d40 - 0035d257


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JPEGImageFormat::writeImageToStream(juce::Image const&, juce::OutputStream&) */

undefined8 __thiscall
juce::JPEGImageFormat::writeImageToStream(JPEGImageFormat *this,long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  void *__ptr;
  undefined8 *puVar18;
  ulong uVar19;
  void *pvVar20;
  undefined8 uVar21;
  undefined8 extraout_RAX;
  byte bVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  void *pvVar27;
  undefined1 *puVar28;
  size_t __n;
  ulong extraout_RDX;
  void *pvVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  uint *puVar33;
  int iVar34;
  int iVar35;
  code *pcVar36;
  int *piVar37;
  void *pvVar38;
  long lVar39;
  void *pvVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  void *pvVar44;
  undefined1 *puVar45;
  ushort uVar46;
  int iVar47;
  wchar_t *pwVar48;
  int iVar49;
  int iVar50;
  bool bVar51;
  undefined8 uVar53;
  undefined1 auVar52 [16];
  long local_e30;
  code **local_de0;
  undefined8 *local_dd8;
  undefined8 *local_dd0;
  char local_dc0;
  int local_dbc;
  void **local_db8;
  uint local_db0;
  uint local_dac;
  undefined8 local_da8;
  undefined8 local_da0;
  undefined8 local_d98;
  uint local_d90;
  uint local_d8c;
  int local_d88;
  undefined8 local_d84;
  int *local_d78;
  long lStack_d70;
  long local_d68;
  long lStack_d60;
  long local_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  long local_d40;
  long lStack_d38;
  long local_d30;
  long lStack_d28;
  long local_d20;
  long lStack_d18;
  long local_d10;
  long lStack_d08;
  long local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  long lStack_ce8;
  long local_ce0;
  undefined8 uStack_cd8;
  uint local_cd0;
  uint *local_cc8;
  char local_cc0;
  char local_cbf;
  undefined2 local_cbe;
  char local_cbc;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined1 local_ca8 [3];
  undefined1 local_ca5;
  undefined4 local_ca4;
  undefined1 local_ca0;
  int local_c9c;
  uint local_c98;
  char local_c94;
  uint local_c90;
  uint uStack_c8c;
  int local_c88;
  int local_c84;
  uint local_c80;
  undefined8 local_c68;
  int local_c14;
  wchar_t *local_c10;
  uint local_c08;
  undefined8 *local_c00;
  undefined8 *local_bf8;
  undefined8 *local_bf0;
  undefined8 *local_be8;
  undefined8 *local_be0;
  undefined8 *local_bd8;
  undefined8 *local_bd0;
  undefined8 *local_bc8;
  undefined8 *local_bc0;
  undefined8 local_bb8;
  long local_ba8;
  ulong local_ba0;
  ulong local_b98;
  long local_b8c;
  long local_b80;
  long local_b78;
  long local_b70;
  ulong local_b68;
  ulong local_b60;
  ulong local_b58;
  ulong local_b50;
  long local_b48;
  long local_b40;
  long local_b38;
  long local_b30;
  long local_b28;
  long *local_b20;
  void *local_b18;
  undefined8 local_b10;
  code *local_b08;
  code *local_b00;
  code *local_af8;
  undefined8 local_af0;
  void *local_ae8;
  code *local_ae0;
  code *local_ad8;
  code *local_ad0;
  code *local_ac8;
  code *local_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  long local_a38 [2];
  int local_a28;
  int local_a24;
  int local_a20;
  uint local_a1c;
  undefined4 local_a18;
  long *local_a10;
  
  uVar13 = 0;
  memset(&local_de0,0,0x238);
  jpeglibNamespace::jinit_memory_mgr((long *)&local_de0);
  local_dd0 = (undefined8 *)0x0;
  local_d78 = (int *)0x0;
  lStack_d70 = 0;
  local_d68 = 0;
  lStack_d60 = 0;
  local_d58 = 0;
  local_d50 = _DAT_005dd6d0;
  uStack_d48 = _UNK_005dd6d8;
  local_d40 = 0;
  lStack_d38 = 0;
  local_d30 = 0;
  lStack_d28 = 0;
  local_d20 = 0;
  lStack_d18 = 0;
  local_d10 = 0;
  lStack_d08 = 0;
  local_c14 = 8;
  pwVar48 = L"";
  local_c10 = L"";
  local_c08 = 0x3f;
  local_bb8 = 0;
  local_da0 = 0x3ff0000000000000;
  local_dbc = 100;
  local_a48 = 0;
  uStack_a40 = 0;
  local_a58 = 0;
  uStack_a50 = 0;
  local_a68 = 0;
  uStack_a60 = 0;
  local_a78 = 0;
  uStack_a70 = 0;
  local_a88 = 0;
  uStack_a80 = 0;
  local_a98 = 0;
  uStack_a90 = 0;
  local_aa8 = 0;
  uStack_aa0 = 0;
  local_ab8 = 0;
  uStack_ab0 = 0;
  local_ae0 = JPEGHelpers::fatalErrorHandler;
  local_ad8 = JPEGHelpers::silentErrorCallback2;
  local_ad0 = JPEGHelpers::silentErrorCallback1;
  local_ac8 = JPEGHelpers::silentErrorCallback3;
  local_ac0 = JPEGHelpers::silentErrorCallback1;
  local_de0 = &local_ae0;
  local_db8 = &local_b18;
  local_af0 = param_2;
  __ptr = malloc(0x200);
  local_b10 = 0x200;
  local_b08 = JPEGHelpers::jpegWriteInit;
  local_b00 = JPEGHelpers::jpegWriteFlush;
  local_af8 = JPEGHelpers::jpegWriteTerminate;
  lVar24 = *param_1;
  if (lVar24 == 0) {
    local_db0 = 0;
  }
  else {
    local_db0 = *(uint *)(lVar24 + 0x10);
    uVar13 = *(uint *)(lVar24 + 0x14);
  }
  local_da8 = 0x200000003;
  local_ca8[0] = 1;
  local_ca4 = 0x480048;
                    /* try { // try from 00359f88 to 0035a07f has its CatchHandler @ 0035d286 */
  local_dac = uVar13;
  local_b20 = param_1;
  local_b18 = __ptr;
  local_ae8 = __ptr;
  local_d78 = (int *)(*(code *)*local_dd8)(&local_de0,0,0x3c0);
  local_d98 = 0x100000001;
  local_d88 = 8;
  jpeglibNamespace::jpeg_set_linear_quality((long *)&local_de0,0x32);
  if (local_d40 != 0) {
    plVar30 = &lStack_d08;
    if (local_dc0 == '\0') {
      plVar30 = &local_d40;
    }
    puVar18 = (undefined8 *)*plVar30;
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,0,0x112);
      *(undefined1 *)((long)puVar18 + 0x111) = 0;
      *plVar30 = (long)puVar18;
    }
    uVar21 = jpeglibNamespace::
             jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
             bits_dc_luminance._8_8_;
    *puVar18 = jpeglibNamespace::
               jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
               bits_dc_luminance._0_8_;
    puVar18[1] = uVar21;
    *(undefined1 *)(puVar18 + 2) = 0;
    *(undefined8 *)((long)puVar18 + 0x11) = 0x706050403020100;
    *(undefined4 *)((long)puVar18 + 0x19) = 0xb0a0908;
    *(undefined1 *)((long)puVar18 + 0x111) = 0;
  }
  if (local_d20 != 0) {
    plVar30 = &lStack_ce8;
    if (local_dc0 == '\0') {
      plVar30 = &local_d20;
    }
    puVar18 = (undefined8 *)*plVar30;
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,0,0x112);
      *(undefined1 *)((long)puVar18 + 0x111) = 0;
      *plVar30 = (long)puVar18;
    }
    uVar21 = jpeglibNamespace::
             jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
             bits_ac_luminance._8_8_;
    *puVar18 = jpeglibNamespace::
               jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
               bits_ac_luminance._0_8_;
    puVar18[1] = uVar21;
    *(undefined1 *)(puVar18 + 2) = 0x7d;
    memcpy((void *)((long)puVar18 + 0x11),
           jpeglibNamespace::
           jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
           val_ac_luminance,0xa2);
    *(undefined1 *)((long)puVar18 + 0x111) = 0;
  }
  if (lStack_d38 != 0) {
    plVar30 = &local_d00;
    if (local_dc0 == '\0') {
      plVar30 = &lStack_d38;
    }
    puVar18 = (undefined8 *)*plVar30;
    if (puVar18 == (undefined8 *)0x0) {
                    /* try { // try from 0035a0eb to 0035a163 has its CatchHandler @ 0035d286 */
      puVar18 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,0,0x112);
      *(undefined1 *)((long)puVar18 + 0x111) = 0;
      *plVar30 = (long)puVar18;
    }
    uVar21 = jpeglibNamespace::
             jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
             bits_dc_chrominance._8_8_;
    *puVar18 = jpeglibNamespace::
               jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
               bits_dc_chrominance._0_8_;
    puVar18[1] = uVar21;
    *(undefined1 *)(puVar18 + 2) = 0;
    *(undefined8 *)((long)puVar18 + 0x11) = 0x706050403020100;
    *(undefined4 *)((long)puVar18 + 0x19) = 0xb0a0908;
    *(undefined1 *)((long)puVar18 + 0x111) = 0;
  }
  if (lStack_d18 != 0) {
    plVar30 = &local_ce0;
    if (local_dc0 == '\0') {
      plVar30 = &lStack_d18;
    }
    puVar18 = (undefined8 *)*plVar30;
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,0,0x112);
      *(undefined1 *)((long)puVar18 + 0x111) = 0;
      *plVar30 = (long)puVar18;
    }
    uVar21 = jpeglibNamespace::
             jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
             bits_ac_chrominance._8_8_;
    *puVar18 = jpeglibNamespace::
               jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
               bits_ac_chrominance._0_8_;
    puVar18[1] = uVar21;
    *(undefined1 *)(puVar18 + 2) = 0x77;
    memcpy((void *)((long)puVar18 + 0x11),
           jpeglibNamespace::
           jpeg_std_huff_table(juce::jpeglibNamespace::jpeg_common_struct*,unsigned_char,int)::
           val_ac_chrominance,0xa2);
    *(undefined1 *)((long)puVar18 + 0x111) = 0;
  }
  local_d00 = 0;
  uStack_cf8 = 0;
  local_cf0 = _DAT_005dd3b0;
  lStack_ce8 = _UNK_005dd3b8;
  local_ce0 = _DAT_005dd6e0;
  uStack_cd8 = _UNK_005dd6e8;
  local_cc8 = (uint *)0x0;
  local_cd0 = 0;
  local_cc0 = '\0';
  local_cbf = 8 < local_d88;
  local_cbe = 0;
  local_cbc = '\x01';
  local_cb8 = 0;
  uStack_cb0 = 0;
  local_ca8._1_2_ = 0x101;
  local_ca5 = 0;
  local_ca4 = 0x10001;
  local_c9c = 0;
  switch(local_da8 >> 0x20) {
  case 0:
    if (local_dbc != 100) {
      *(undefined4 *)(local_de0 + 5) = 0x15;
      *(int *)((long)local_de0 + 0x2c) = local_dbc;
                    /* try { // try from 0035a274 to 0035b141 has its CatchHandler @ 0035d286 */
      (**local_de0)(&local_de0);
    }
    local_ca8 = (undefined1  [3])((uint3)local_ca8 & 0xffff00);
    local_ca0 = 0;
    local_d84 = local_da8 & 0xffffffff;
    uVar31 = local_da8;
    if ((int)local_da8 - 0xbU < 0xfffffff6) {
      *(undefined4 *)(local_de0 + 5) = 0x1b;
      *(int *)((long)local_de0 + 0x2c) = (int)local_da8;
      *(undefined4 *)(local_de0 + 6) = 10;
      (**local_de0)(&local_de0);
      uVar31 = local_d84;
      if ((int)local_d84 < 1) break;
    }
    uVar53 = _UNK_00654cd8;
    uVar21 = _DAT_00654cd0;
    if ((uint)uVar31 == 1) {
      uVar42 = 0;
    }
    else {
      uVar42 = 0;
      piVar37 = local_d78;
      do {
        *piVar37 = (int)uVar42;
        *(undefined8 *)(piVar37 + 2) = uVar21;
        *(undefined8 *)(piVar37 + 4) = uVar53;
        piVar37[6] = 0;
        piVar37[0x18] = (int)uVar42 + 1;
        *(undefined8 *)(piVar37 + 0x1a) = uVar21;
        *(undefined8 *)(piVar37 + 0x1c) = uVar53;
        piVar37[0x1e] = 0;
        uVar42 = uVar42 + 2;
        piVar37 = piVar37 + 0x30;
      } while (uVar42 != ((uint)uVar31 & 0xfffffffe));
    }
    if ((uVar31 & 1) != 0) {
      local_d78[uVar42 * 0x18] = (int)uVar42;
      uVar21 = _UNK_00654cd8;
      *(undefined8 *)(local_d78 + uVar42 * 0x18 + 2) = _DAT_00654cd0;
      *(undefined8 *)(local_d78 + uVar42 * 0x18 + 2 + 2) = uVar21;
      local_d78[uVar42 * 0x18 + 6] = 0;
    }
    break;
  case 1:
    if (local_dbc != 100) {
      *(undefined4 *)(local_de0 + 5) = 0x15;
      *(int *)((long)local_de0 + 0x2c) = local_dbc;
      (**local_de0)(&local_de0);
    }
    local_ca0 = 0;
    local_ca8[0] = 1;
    local_d84 = 0x100000001;
    *local_d78 = 1;
    uVar21 = _UNK_00654cd8;
    *(undefined8 *)(local_d78 + 2) = _DAT_00654cd0;
    *(undefined8 *)(local_d78 + 4) = uVar21;
    local_d78[6] = 0;
    break;
  case 2:
    if (local_dbc != 100) {
      *(undefined4 *)(local_de0 + 5) = 0x15;
      *(int *)((long)local_de0 + 0x2c) = local_dbc;
      (**local_de0)(&local_de0);
    }
    goto LAB_0035a3a8;
  case 3:
    if (local_dbc != 100) {
      *(undefined4 *)(local_de0 + 5) = 0x15;
      *(int *)((long)local_de0 + 0x2c) = local_dbc;
      (**local_de0)(&local_de0);
    }
LAB_0035a3a8:
    local_ca8[0] = 1;
    local_d84 = 0x300000003;
    *local_d78 = 1;
    uVar21 = _UNK_00651fa8;
    *(undefined8 *)(local_d78 + 2) = _DAT_00651fa0;
    *(undefined8 *)(local_d78 + 4) = uVar21;
    local_d78[6] = 0;
    local_d78[0x18] = 2;
    uVar53 = _UNK_0065a048;
    uVar21 = _DAT_0065a040;
    *(undefined8 *)(local_d78 + 0x1a) = _DAT_0065a040;
    *(undefined8 *)(local_d78 + 0x1c) = uVar53;
    local_d78[0x1e] = 1;
    local_d78[0x30] = 3;
LAB_0035a6a7:
    local_ca0 = 0;
    *(undefined8 *)(local_d78 + 0x32) = uVar21;
    *(undefined8 *)(local_d78 + 0x34) = uVar53;
    local_d78[0x36] = 1;
    break;
  case 4:
    if (local_dbc != 100) {
      *(undefined4 *)(local_de0 + 5) = 0x15;
      *(int *)((long)local_de0 + 0x2c) = local_dbc;
      (**local_de0)(&local_de0);
    }
    local_d84 = 0x400000004;
    *local_d78 = 0x43;
    uVar53 = _UNK_00654cd8;
    uVar21 = _DAT_00654cd0;
    *(undefined8 *)(local_d78 + 2) = _DAT_00654cd0;
    *(undefined8 *)(local_d78 + 4) = uVar53;
    local_d78[6] = 0;
    local_d78[0x18] = 0x4d;
    *(undefined8 *)(local_d78 + 0x1a) = uVar21;
    *(undefined8 *)(local_d78 + 0x1c) = uVar53;
    local_d78[0x1e] = 0;
    local_d78[0x30] = 0x59;
    *(undefined8 *)(local_d78 + 0x32) = uVar21;
    *(undefined8 *)(local_d78 + 0x34) = uVar53;
    local_d78[0x36] = 0;
    local_d78[0x48] = 0x4b;
    goto LAB_0035a556;
  case 5:
    if (local_dbc != 100) {
      *(undefined4 *)(local_de0 + 5) = 0x15;
      *(int *)((long)local_de0 + 0x2c) = local_dbc;
      (**local_de0)(&local_de0);
    }
    local_d84 = 0x500000004;
    *local_d78 = 1;
    uVar53 = _UNK_00651fa8;
    uVar21 = _DAT_00651fa0;
    *(undefined8 *)(local_d78 + 2) = _DAT_00651fa0;
    *(undefined8 *)(local_d78 + 4) = uVar53;
    local_d78[6] = 0;
    local_d78[0x18] = 2;
    uVar9 = _UNK_0065a048;
    uVar8 = _DAT_0065a040;
    *(undefined8 *)(local_d78 + 0x1a) = _DAT_0065a040;
    *(undefined8 *)(local_d78 + 0x1c) = uVar9;
    local_d78[0x1e] = 1;
    local_d78[0x30] = 3;
    *(undefined8 *)(local_d78 + 0x32) = uVar8;
    *(undefined8 *)(local_d78 + 0x34) = uVar9;
    local_d78[0x36] = 1;
    local_d78[0x48] = 4;
LAB_0035a556:
    local_ca0 = 1;
    local_ca8 = (undefined1  [3])((uint3)local_ca8 & 0xffff00);
    *(undefined8 *)(local_d78 + 0x4a) = uVar21;
    *(undefined8 *)(local_d78 + 0x4c) = uVar53;
    local_d78[0x4e] = 0;
    break;
  case 6:
    if (local_dbc != 100) {
      *(undefined4 *)(local_de0 + 5) = 0x15;
      *(int *)((long)local_de0 + 0x2c) = local_dbc;
      (**local_de0)(&local_de0);
    }
    local_ca0 = 0;
    local_ca8._0_2_ = 0x201;
    local_d84 = 0x600000003;
    *local_d78 = 0x72;
    local_d78[2] = 1;
    local_d78[3] = 1;
    uVar13 = (uint)(local_c9c == 1);
    local_d78[4] = uVar13;
    local_d78[5] = uVar13;
    uVar13 = (uint)(local_c9c == 1);
    local_d78[6] = uVar13;
    local_d78[0x18] = 0x67;
    uVar21 = _UNK_00654cd8;
    *(undefined8 *)(local_d78 + 0x1a) = _DAT_00654cd0;
    *(undefined8 *)(local_d78 + 0x1c) = uVar21;
    local_d78[0x1e] = 0;
    local_d78[0x30] = 0x62;
    local_d78[0x32] = 1;
    local_d78[0x33] = 1;
    local_d78[0x34] = uVar13;
    local_d78[0x35] = uVar13;
    local_d78[0x36] = uVar13;
    break;
  case 7:
    if (local_dbc != 100) {
      *(undefined4 *)(local_de0 + 5) = 0x15;
      *(int *)((long)local_de0 + 0x2c) = local_dbc;
      (**local_de0)(&local_de0);
    }
    local_ca8._0_2_ = 0x201;
    local_d84 = 0x700000003;
    *local_d78 = 1;
    uVar21 = _UNK_00651fa8;
    *(undefined8 *)(local_d78 + 2) = _DAT_00651fa0;
    *(undefined8 *)(local_d78 + 4) = uVar21;
    local_d78[6] = 0;
    local_d78[0x18] = 0x22;
    uVar53 = _UNK_0065a048;
    uVar21 = _DAT_0065a040;
    *(undefined8 *)(local_d78 + 0x1a) = _DAT_0065a040;
    *(undefined8 *)(local_d78 + 0x1c) = uVar53;
    local_d78[0x1e] = 1;
    local_d78[0x30] = 0x23;
    goto LAB_0035a6a7;
  default:
    *(undefined4 *)(local_de0 + 5) = 10;
    (**local_de0)(&local_de0);
  }
  local_cb8 = CONCAT44(2,(int)local_cb8);
  local_cbe = CONCAT11(local_cbe._1_1_,1);
  fVar7 = *(float *)(this + 8);
  if (*(float *)(this + 8) < 0.0) {
    *(undefined4 *)(this + 8) = 0x3f59999a;
    fVar7 = DAT_005de428;
  }
  uVar41 = SUB84((double)(fVar7 * DAT_005d94c4) + DAT_005d9098,0);
  uVar13 = 100;
  if ((int)uVar41 < 100) {
    uVar13 = uVar41;
  }
  if ((int)uVar13 < 1) {
    uVar13 = 1;
  }
  if ((int)uVar41 < 1) {
    uVar13 = 1;
  }
  if (99 < uVar13) {
    uVar13 = 100;
  }
  if (uVar13 < 0x32) {
    uVar13 = 5000 / (uVar13 & 0xffff);
  }
  else {
    uVar13 = uVar13 * -2 + 200;
  }
  jpeglibNamespace::jpeg_set_linear_quality((long *)&local_de0,uVar13);
  if (local_dbc != 100) {
    *(undefined4 *)(local_de0 + 5) = 0x15;
    *(int *)((long)local_de0 + 0x2c) = local_dbc;
    (**local_de0)(&local_de0);
  }
  if (lStack_d70 != 0) {
    *(undefined1 *)(lStack_d70 + 0x80) = 0;
  }
  if (local_d68 != 0) {
    *(undefined1 *)(local_d68 + 0x80) = 0;
  }
  if (lStack_d60 != 0) {
    *(undefined1 *)(lStack_d60 + 0x80) = 0;
  }
  if (local_d58 != 0) {
    *(undefined1 *)(local_d58 + 0x80) = 0;
  }
  if (local_d40 != 0) {
    *(undefined1 *)(local_d40 + 0x111) = 0;
  }
  if (local_d20 != 0) {
    *(undefined1 *)(local_d20 + 0x111) = 0;
  }
  if (lStack_d38 != 0) {
    *(undefined1 *)(lStack_d38 + 0x111) = 0;
  }
  if (lStack_d18 != 0) {
    *(undefined1 *)(lStack_d18 + 0x111) = 0;
  }
  if (local_d30 != 0) {
    *(undefined1 *)(local_d30 + 0x111) = 0;
  }
  if (local_d10 != 0) {
    *(undefined1 *)(local_d10 + 0x111) = 0;
  }
  if (lStack_d28 != 0) {
    *(undefined1 *)(lStack_d28 + 0x111) = 0;
  }
  if (lStack_d08 != 0) {
    *(undefined1 *)(lStack_d08 + 0x111) = 0;
  }
  (*local_de0[4])(&local_de0);
  (*local_db8[2])(&local_de0);
  if (local_d88 != 8) {
    *(undefined4 *)(local_de0 + 5) = 0x10;
    *(int *)((long)local_de0 + 0x2c) = local_d88;
    (**local_de0)(&local_de0);
  }
  if (((local_dac == 0) || (local_db0 == 0)) || ((int)local_da8 < 1)) {
    *(undefined4 *)(local_de0 + 5) = 0x21;
    (**local_de0)(&local_de0);
  }
  if ((long)(int)local_da8 * (ulong)local_db0 >> 0x20 != 0) {
    *(undefined4 *)(local_de0 + 5) = 0x48;
    (**local_de0)(&local_de0);
  }
  if ((0xffffff < local_db0) || (0xffffff < local_dac)) {
    local_de0[5] = (code *)0xffdc0000002a;
    (**local_de0)(&local_de0);
  }
  lVar24 = (long)local_c14;
  uVar13 = local_d98._4_4_ * local_c14;
  if ((uint)local_d98 < uVar13) {
    if ((uint)local_d98 * 2 < uVar13) {
      if ((uint)local_d98 * 3 < uVar13) {
        if ((uint)local_d98 * 4 < uVar13) {
          if ((uint)local_d98 * 5 < uVar13) {
            if ((uint)local_d98 * 6 < uVar13) {
              if ((uint)local_d98 * 7 < uVar13) {
                if ((uint)local_d98 * 8 < uVar13) {
                  if ((uint)local_d98 * 9 < uVar13) {
                    if ((uint)local_d98 * 10 < uVar13) {
                      if ((uint)local_d98 * 0xb < uVar13) {
                        if ((uint)local_d98 * 0xc < uVar13) {
                          if ((uint)local_d98 * 0xd < uVar13) {
                            if ((uint)local_d98 * 0xe < uVar13) {
                              lVar39 = (ulong)local_db0 * lVar24;
                              if ((uint)local_d98 * 0xf < uVar13) {
                                uVar31 = lVar39 + 0x1e;
                                if (-1 < (long)(lVar39 + 0xfU)) {
                                  uVar31 = lVar39 + 0xfU;
                                }
                                local_d90 = (uint)(uVar31 >> 4);
                                uVar31 = (ulong)local_dac * lVar24 + 0xf;
                                uVar42 = (ulong)local_dac * lVar24 + 0x1e;
                                if (-1 < (long)uVar31) {
                                  uVar42 = uVar31;
                                }
                                local_d8c = (uint)(uVar42 >> 4);
                                local_c88 = 0x10;
                              }
                              else {
                                uVar31 = SUB168(SEXT816(lVar39 + 0xe) * SEXT816(-0x7777777777777777)
                                                ,8) + lVar39 + 0xe;
                                local_d90 = (int)(uVar31 >> 3) - (int)((long)uVar31 >> 0x3f);
                                uVar31 = SUB168(SEXT816((long)((ulong)local_dac * lVar24 + 0xe)) *
                                                SEXT816(-0x7777777777777777),8) +
                                         (ulong)local_dac * lVar24 + 0xe;
                                local_d8c = (int)(uVar31 >> 3) - (int)((long)uVar31 >> 0x3f);
                                local_c88 = 0xf;
                              }
                            }
                            else {
                              auVar52 = SEXT816((long)((ulong)local_db0 * lVar24 + 0xd)) *
                                        SEXT816(0x4924924924924925);
                              local_d90 = (int)(auVar52._8_8_ >> 2) - (auVar52._12_4_ >> 0x1f);
                              auVar52 = SEXT816((long)((ulong)local_dac * lVar24 + 0xd)) *
                                        SEXT816(0x4924924924924925);
                              local_d8c = (int)(auVar52._8_8_ >> 2) - (auVar52._12_4_ >> 0x1f);
                              local_c88 = 0xe;
                            }
                          }
                          else {
                            auVar52 = SEXT816((long)((ulong)local_db0 * lVar24 + 0xc)) *
                                      SEXT816(0x4ec4ec4ec4ec4ec5);
                            local_d90 = (int)(auVar52._8_8_ >> 2) - (auVar52._12_4_ >> 0x1f);
                            auVar52 = SEXT816((long)((ulong)local_dac * lVar24 + 0xc)) *
                                      SEXT816(0x4ec4ec4ec4ec4ec5);
                            local_d8c = (int)(auVar52._8_8_ >> 2) - (auVar52._12_4_ >> 0x1f);
                            local_c88 = 0xd;
                          }
                        }
                        else {
                          lVar39 = (ulong)local_db0 * lVar24 + 0xb;
                          local_d90 = (int)((ulong)(lVar39 / 6 + (lVar39 >> 0x3f)) >> 1) -
                                      (int)(lVar39 >> 0x3f);
                          lVar24 = (ulong)local_dac * lVar24 + 0xb;
                          local_d8c = (int)((ulong)(lVar24 / 6 + (lVar24 >> 0x3f)) >> 1) -
                                      (int)(lVar24 >> 0x3f);
                          local_c88 = 0xc;
                        }
                      }
                      else {
                        auVar52 = SEXT816((long)((ulong)local_db0 * lVar24 + 10)) *
                                  SEXT816(0x2e8ba2e8ba2e8ba3);
                        local_d90 = (int)(auVar52._8_8_ >> 1) - (auVar52._12_4_ >> 0x1f);
                        auVar52 = SEXT816((long)((ulong)local_dac * lVar24 + 10)) *
                                  SEXT816(0x2e8ba2e8ba2e8ba3);
                        local_d8c = (int)(auVar52._8_8_ >> 1) - (auVar52._12_4_ >> 0x1f);
                        local_c88 = 0xb;
                      }
                    }
                    else {
                      auVar52 = SEXT816((long)((ulong)local_db0 * lVar24 + 9)) *
                                SEXT816(0x6666666666666667);
                      local_d90 = (int)(auVar52._8_8_ >> 2) - (auVar52._12_4_ >> 0x1f);
                      auVar52 = SEXT816((long)((ulong)local_dac * lVar24 + 9)) *
                                SEXT816(0x6666666666666667);
                      local_d8c = (int)(auVar52._8_8_ >> 2) - (auVar52._12_4_ >> 0x1f);
                      local_c88 = 10;
                    }
                  }
                  else {
                    local_d90 = (uint)((long)((ulong)local_db0 * lVar24 + 8) / 9);
                    local_d8c = (uint)((long)((ulong)local_dac * lVar24 + 8) / 9);
                    local_c88 = 9;
                  }
                }
                else {
                  uVar31 = (ulong)local_db0 * lVar24 + 7;
                  uVar42 = (ulong)local_db0 * lVar24 + 0xe;
                  if (-1 < (long)uVar31) {
                    uVar42 = uVar31;
                  }
                  local_d90 = (uint)(uVar42 >> 3);
                  uVar31 = (ulong)local_dac * lVar24 + 7;
                  uVar42 = (ulong)local_dac * lVar24 + 0xe;
                  if (-1 < (long)uVar31) {
                    uVar42 = uVar31;
                  }
                  local_d8c = (uint)(uVar42 >> 3);
                  local_c88 = 8;
                }
              }
              else {
                auVar52 = SEXT816((long)((ulong)local_db0 * lVar24 + 6)) *
                          SEXT816(0x4924924924924925);
                local_d90 = (int)(auVar52._8_8_ >> 1) - (auVar52._12_4_ >> 0x1f);
                auVar52 = SEXT816((long)((ulong)local_dac * lVar24 + 6)) *
                          SEXT816(0x4924924924924925);
                local_d8c = (int)(auVar52._8_8_ >> 1) - (auVar52._12_4_ >> 0x1f);
                local_c88 = 7;
              }
            }
            else {
              local_d90 = (uint)((long)((ulong)local_db0 * lVar24 + 5) / 6);
              local_d8c = (uint)((long)((ulong)local_dac * lVar24 + 5) / 6);
              local_c88 = 6;
            }
          }
          else {
            auVar52 = SEXT816((long)((ulong)local_db0 * lVar24 + 4)) * SEXT816(0x6666666666666667);
            local_d90 = (int)(auVar52._8_8_ >> 1) - (auVar52._12_4_ >> 0x1f);
            auVar52 = SEXT816((long)((ulong)local_dac * lVar24 + 4)) * SEXT816(0x6666666666666667);
            local_d8c = (int)(auVar52._8_8_ >> 1) - (auVar52._12_4_ >> 0x1f);
            local_c88 = 5;
          }
        }
        else {
          uVar31 = (ulong)local_db0 * lVar24 + 3;
          uVar42 = (ulong)local_db0 * lVar24 + 6;
          if (-1 < (long)uVar31) {
            uVar42 = uVar31;
          }
          local_d90 = (uint)(uVar42 >> 2);
          uVar31 = (ulong)local_dac * lVar24 + 3;
          uVar42 = (ulong)local_dac * lVar24 + 6;
          if (-1 < (long)uVar31) {
            uVar42 = uVar31;
          }
          local_d8c = (uint)(uVar42 >> 2);
          local_c88 = 4;
        }
      }
      else {
        local_d90 = (uint)((long)((ulong)local_db0 * lVar24 + 2) / 3);
        local_d8c = (uint)((long)((ulong)local_dac * lVar24 + 2) / 3);
        local_c88 = 3;
      }
    }
    else {
      local_d90 = (uint)(((ulong)local_db0 * lVar24 -
                         ((long)((ulong)local_db0 * lVar24 + 1) >> 0x3f)) + 1 >> 1);
      local_d8c = (uint)(((ulong)local_dac * lVar24 -
                         ((long)((ulong)local_dac * lVar24 + 1) >> 0x3f)) + 1 >> 1);
      local_c88 = 2;
    }
  }
  else {
    local_d90 = local_db0 * local_c14;
    local_d8c = local_c14 * local_dac;
    local_c88 = 1;
  }
  local_c84 = local_c88;
  puVar18 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,1,0x30);
  *puVar18 = jpeglibNamespace::prepare_for_pass;
  puVar18[1] = jpeglibNamespace::pass_startup;
  puVar18[2] = jpeglibNamespace::finish_pass_master;
  *(undefined1 *)((long)puVar18 + 0x19) = 0;
  local_c00 = puVar18;
  if (local_c14 - 0x11U < 0xfffffff0) {
    *(undefined4 *)(local_de0 + 5) = 7;
    *(int *)((long)local_de0 + 0x2c) = local_c14;
    *(int *)(local_de0 + 6) = local_c14;
    (**local_de0)(&local_de0);
  }
  if (local_c14 - 2U < 6) {
    pwVar48 = (wchar_t *)(&PTR_jpeg_natural_order2_00712688)[(int)(local_c14 - 2U)];
  }
  local_c08 = 0x3f;
  if (local_c14 < 8) {
    local_c08 = local_c14 * local_c14 - 1;
  }
  local_c10 = pwVar48;
  if (((local_d8c == 0) || (local_d90 == 0)) || ((int)local_d84 < 1)) {
    *(undefined4 *)(local_de0 + 5) = 0x21;
    (**local_de0)(&local_de0);
  }
  if ((0xffdc < local_d8c) || (0xffdc < local_d90)) {
    local_de0[5] = (code *)0xffdc0000002a;
    (**local_de0)(&local_de0);
  }
  if (local_d88 - 0xdU < 0xfffffffb) {
    *(undefined4 *)(local_de0 + 5) = 0x10;
    *(int *)((long)local_de0 + 0x2c) = local_d88;
    (**local_de0)(&local_de0);
  }
  if (10 < (int)local_d84) {
    *(undefined4 *)(local_de0 + 5) = 0x1b;
    *(int *)((long)local_de0 + 0x2c) = (int)local_d84;
    *(undefined4 *)(local_de0 + 6) = 10;
    (**local_de0)(&local_de0);
  }
  uVar31 = local_d84 & 0xffffffff;
  local_c90 = 1;
  uStack_c8c = 1;
  if ((int)local_d84 < 1) {
LAB_0035b4be:
    uVar31 = (ulong)local_d8c;
    uVar42 = (long)(int)uStack_c8c * (long)local_c14;
    lVar24 = uVar42 - 1;
  }
  else {
    puVar33 = (uint *)(local_d78 + 3);
    iVar34 = 0;
    do {
      uVar13 = puVar33[-1];
      if ((uVar13 - 5 < 0xfffffffc) || (uVar41 = *puVar33, uVar41 - 5 < 0xfffffffc)) {
        *(undefined4 *)(local_de0 + 5) = 0x13;
                    /* try { // try from 0035b18c to 0035b190 has its CatchHandler @ 0035d27e */
        (**local_de0)(&local_de0);
        uVar31 = local_d84 & 0xffffffff;
        uVar13 = puVar33[-1];
        uVar41 = *puVar33;
      }
      if ((int)uVar13 < (int)local_c90) {
        uVar13 = local_c90;
      }
      if ((int)uVar41 < (int)uStack_c8c) {
        uVar41 = uStack_c8c;
      }
      iVar34 = iVar34 + 1;
      puVar33 = puVar33 + 0x18;
      iVar50 = (int)uVar31;
      local_c90 = uVar13;
      uStack_c8c = uVar41;
    } while (iVar34 < iVar50);
    if (iVar50 < 1) goto LAB_0035b4be;
    local_ba0 = CONCAT71(local_ba0._1_7_,local_cc0);
    uVar31 = (ulong)local_d8c;
    uVar23 = local_c14 * uVar13;
    uVar25 = (ulong)(int)uVar23;
    uVar14 = local_c14 * uVar41;
    local_ba8 = CONCAT44(local_ba8._4_4_,uVar14);
    uVar42 = (ulong)(int)uVar14;
    lVar24 = uVar42 - 1;
    iVar34 = (uint)(local_cbc != '\0') * 4 + 4;
    iVar47 = 0;
    piVar37 = local_d78;
    do {
      piVar37[1] = iVar47;
      if (local_cc0 == '\0') {
        iVar35 = 1;
        if (local_c88 <= iVar34) {
          iVar35 = 1;
          do {
            iVar49 = iVar35 * 2;
            if ((int)uVar13 % (iVar49 * piVar37[2]) != 0) break;
            iVar35 = iVar49;
          } while (iVar49 * local_c88 <= iVar34);
        }
        iVar35 = iVar35 * local_c88;
        piVar37[9] = iVar35;
        iVar49 = 1;
        if (local_c84 <= iVar34) {
          iVar49 = 1;
          do {
            iVar15 = iVar49 * 2;
            if ((int)uVar41 % (iVar15 * piVar37[3]) != 0) break;
            iVar49 = iVar15;
          } while (iVar15 * local_c84 <= iVar34);
        }
      }
      else {
        piVar37[9] = local_c88;
        iVar49 = 1;
        iVar35 = local_c88;
      }
      iVar49 = iVar49 * local_c84;
      piVar37[10] = iVar49;
      iVar15 = iVar49 * 2;
      if (iVar15 < iVar35) {
        piVar37[9] = iVar15;
        iVar35 = iVar15;
      }
      else {
        iVar15 = iVar35 * 2;
        if (iVar15 < iVar49) {
          piVar37[10] = iVar15;
          iVar49 = iVar15;
        }
      }
      uVar19 = (long)piVar37[2] * (ulong)local_d90 + (uVar25 - 1);
      if ((uVar19 | uVar25) >> 0x20 == 0) {
        iVar15 = (int)((uVar19 & 0xffffffff) / (ulong)uVar23);
      }
      else {
        iVar15 = (int)((long)uVar19 / (long)uVar25);
      }
      piVar37[7] = iVar15;
      uVar19 = (long)piVar37[3] * uVar31 + lVar24;
      if ((uVar19 | uVar42) >> 0x20 == 0) {
        iVar15 = (int)((uVar19 & 0xffffffff) / (ulong)uVar14);
      }
      else {
        iVar15 = (int)((long)uVar19 / (long)uVar42);
      }
      piVar37[8] = iVar15;
      uVar19 = (long)iVar35 * (long)piVar37[2] * (ulong)local_d90 + (uVar25 - 1);
      if ((uVar19 | uVar25) >> 0x20 == 0) {
        iVar35 = (int)((uVar19 & 0xffffffff) / (ulong)uVar23);
      }
      else {
        iVar35 = (int)((long)uVar19 / (long)uVar25);
      }
      piVar37[0xb] = iVar35;
      uVar19 = (long)piVar37[3] * (long)iVar49 * uVar31 + lVar24;
      if ((uVar19 | uVar42) >> 0x20 == 0) {
        iVar35 = (int)((uVar19 & 0xffffffff) / (ulong)uVar14);
      }
      else {
        iVar35 = (int)((long)uVar19 / (long)uVar42);
      }
      piVar37[0xc] = iVar35;
      *(undefined1 *)(piVar37 + 0xd) = 0;
      iVar47 = iVar47 + 1;
      piVar37 = piVar37 + 0x18;
    } while (iVar47 != iVar50);
    local_b98 = uVar31;
  }
  uVar31 = lVar24 + uVar31;
  if ((uVar31 | uVar42) >> 0x20 == 0) {
    local_c80 = (uint)((uVar31 & 0xffffffff) / (uVar42 & 0xffffffff));
    if (local_cc8 == (uint *)0x0) goto LAB_0035b53a;
LAB_0035b509:
    if ((int)local_cd0 < 1) {
      local_de0[5] = (code *)0x14;
                    /* try { // try from 0035b559 to 0035b55f has its CatchHandler @ 0035d286 */
      (**local_de0)(&local_de0);
      if (local_cc8[5] == 0) goto LAB_0035b56f;
LAB_0035b5a0:
      local_c94 = '\x01';
      uVar31 = local_d84 & 0xffffffff;
      cVar10 = '\x01';
      puVar33 = local_cc8;
      if (0 < (int)local_d84) {
        __n = uVar31 << 8;
        plVar30 = local_a38;
        iVar34 = 0xff;
LAB_0035b5cc:
        puVar33 = local_cc8;
        memset(plVar30,iVar34,__n);
      }
    }
    else {
      if (local_cc8[5] != 0) goto LAB_0035b5a0;
LAB_0035b56f:
      if (local_cc8[6] != 0x3f) goto LAB_0035b5a0;
      local_c94 = '\0';
      __n = local_d84 & 0xffffffff;
      uVar31 = __n;
      if (0 < (int)local_d84) {
        plVar30 = &local_b8c;
        cVar10 = '\0';
        iVar34 = 0;
        goto LAB_0035b5cc;
      }
      cVar10 = '\0';
      puVar33 = local_cc8;
    }
    if (0 < (int)local_cd0) {
      iVar34 = 1;
      do {
        uVar13 = *puVar33;
        uVar31 = (ulong)uVar13;
        if (uVar13 - 5 < 0xfffffffc) {
          *(undefined4 *)(local_de0 + 5) = 0x1b;
          *(uint *)((long)local_de0 + 0x2c) = uVar13;
          *(undefined4 *)(local_de0 + 6) = 4;
                    /* try { // try from 0035b632 to 0035b66d has its CatchHandler @ 0035d28a */
          (**local_de0)(&local_de0);
          if (0 < (int)uVar13) goto LAB_0035b642;
          bVar51 = false;
        }
        else {
LAB_0035b642:
          if (((int)puVar33[1] < 0) || ((int)local_d84 <= (int)puVar33[1])) {
            *(undefined4 *)(local_de0 + 5) = 0x14;
            *(int *)((long)local_de0 + 0x2c) = iVar34;
            (**local_de0)(&local_de0);
          }
          bVar51 = true;
          if (uVar13 != 1) {
            uVar42 = 0;
            do {
              uVar41 = puVar33[uVar42 + 2];
              if (((int)uVar41 < 0) || ((int)local_d84 <= (int)uVar41)) {
                *(undefined4 *)(local_de0 + 5) = 0x14;
                *(int *)((long)local_de0 + 0x2c) = iVar34;
                    /* try { // try from 0035b6af to 0035b6d9 has its CatchHandler @ 0035d299 */
                (**local_de0)(&local_de0);
              }
              if ((int)uVar41 <= (int)puVar33[(uVar42 & 0xffffffff) + 1]) {
                *(undefined4 *)(local_de0 + 5) = 0x14;
                *(int *)((long)local_de0 + 0x2c) = iVar34;
                (**local_de0)(&local_de0);
              }
              uVar42 = uVar42 + 1;
            } while (uVar31 - 1 != uVar42);
          }
        }
        uVar41 = puVar33[5];
        uVar14 = puVar33[6];
        uVar23 = puVar33[7];
        uVar6 = puVar33[8];
        if (local_c94 == '\0') {
          if ((((uVar41 != 0) || (uVar14 != 0x3f)) || (uVar23 != 0)) || (uVar6 != 0)) {
            *(undefined4 *)(local_de0 + 5) = 0x12;
            *(int *)((long)local_de0 + 0x2c) = iVar34;
            (**local_de0)(&local_de0);
          }
          if (bVar51) {
            uVar42 = 0;
            do {
              uVar13 = puVar33[uVar42 + 1];
              if (*(char *)((long)&local_b8c + (long)(int)uVar13) != '\0') {
                *(undefined4 *)(local_de0 + 5) = 0x14;
                *(int *)((long)local_de0 + 0x2c) = iVar34;
                    /* try { // try from 0035b7f8 to 0035b7fe has its CatchHandler @ 0035d28e */
                (**local_de0)(&local_de0);
              }
              *(undefined1 *)((long)&local_b8c + (long)(int)uVar13) = 1;
              uVar42 = uVar42 + 1;
            } while (uVar31 != uVar42);
          }
        }
        else {
          if (((((0x3f < uVar41) || ((int)uVar14 < (int)uVar41)) ||
               ((0x3f < (int)uVar14 ||
                (((int)uVar23 < 0 || (uVar16 = (uint)(8 < local_d88) * 3 + 10, uVar16 < uVar23))))))
              || ((int)uVar6 < 0)) || ((int)uVar16 < (int)uVar6)) {
            *(undefined4 *)(local_de0 + 5) = 0x12;
            *(int *)((long)local_de0 + 0x2c) = iVar34;
                    /* try { // try from 0035b754 to 0035b7b0 has its CatchHandler @ 0035d28a */
            (**local_de0)(&local_de0);
          }
          if (uVar41 == 0) {
            if (uVar14 != 0) goto LAB_0035b817;
          }
          else if (uVar13 != 1) {
LAB_0035b817:
            *(undefined4 *)(local_de0 + 5) = 0x12;
            *(int *)((long)local_de0 + 0x2c) = iVar34;
                    /* try { // try from 0035b82b to 0035b831 has its CatchHandler @ 0035d28a */
            (**local_de0)(&local_de0);
          }
          if (bVar51) {
            iVar50 = (uVar14 - uVar41) + 1;
            uVar42 = 0;
            local_ba0 = uVar31;
            do {
              lVar24 = (long)(int)puVar33[uVar42 + 1];
              if ((uVar41 != 0) && ((int)local_a38[lVar24 * 0x20] < 0)) {
                *(undefined4 *)(local_de0 + 5) = 0x12;
                *(int *)((long)local_de0 + 0x2c) = iVar34;
                    /* try { // try from 0035b8cd to 0035b8d3 has its CatchHandler @ 0035d28c */
                (**local_de0)(&local_de0);
              }
              if ((int)uVar41 <= (int)uVar14) {
                if (uVar23 == 0) {
                  if (uVar6 == 0xffffffff) {
                    lVar24 = lVar24 * 0x100 + (long)(int)uVar41 * 4 + -0xa38;
                    lVar39 = 0;
                    do {
                      if (0 < *(int *)((long)local_a38 + lVar39 * 4 + lVar24 + 0xa38)) {
                        *(undefined4 *)(local_de0 + 5) = 0x12;
                        *(int *)((long)local_de0 + 0x2c) = iVar34;
                    /* try { // try from 0035b97e to 0035b984 has its CatchHandler @ 0035d29d */
                        (**local_de0)(&local_de0);
                      }
                      *(undefined4 *)((long)local_a38 + lVar39 * 4 + lVar24 + 0xa38) = 0xffffffff;
                      lVar39 = lVar39 + 1;
                    } while (iVar50 != (int)lVar39);
                  }
                  else {
                    lVar24 = lVar24 * 0x100 + (long)(int)uVar41 * 4 + -0xa38;
                    lVar39 = 0;
                    do {
                      if (-1 < *(int *)((long)local_a38 + lVar39 * 4 + lVar24 + 0xa38)) {
                        *(undefined4 *)(local_de0 + 5) = 0x12;
                        *(int *)((long)local_de0 + 0x2c) = iVar34;
                    /* try { // try from 0035b9ce to 0035b9d4 has its CatchHandler @ 0035d29b */
                        (**local_de0)(&local_de0);
                      }
                      *(uint *)((long)local_a38 + lVar39 * 4 + lVar24 + 0xa38) = uVar6;
                      lVar39 = lVar39 + 1;
                    } while (iVar50 != (int)lVar39);
                  }
                }
                else {
                  lVar24 = lVar24 * 0x100 + (long)(int)uVar41 * 4 + -0xa38;
                  lVar39 = 0;
                  do {
                    uVar13 = *(uint *)((long)local_a38 + lVar39 * 4 + lVar24 + 0xa38);
                    if ((((int)uVar13 < 0) || (uVar23 != uVar13)) || (uVar6 != uVar23 - 1)) {
                      *(undefined4 *)(local_de0 + 5) = 0x12;
                      *(int *)((long)local_de0 + 0x2c) = iVar34;
                    /* try { // try from 0035b904 to 0035b90a has its CatchHandler @ 0035d2b7 */
                      (**local_de0)(&local_de0);
                    }
                    *(uint *)((long)local_a38 + lVar39 * 4 + lVar24 + 0xa38) = uVar6;
                    lVar39 = lVar39 + 1;
                  } while (iVar50 != (int)lVar39);
                }
              }
              uVar42 = uVar42 + 1;
            } while (uVar42 != local_ba0);
          }
        }
        puVar33 = puVar33 + 9;
        bVar51 = iVar34 < (int)local_cd0;
        iVar34 = iVar34 + 1;
      } while (bVar51);
      uVar31 = local_d84 & 0xffffffff;
      cVar10 = local_c94;
    }
    if (cVar10 == '\0') {
      if (0 < (int)uVar31) {
        lVar24 = 0;
        do {
          if (*(char *)((long)&local_b8c + lVar24) == '\0') {
            *(undefined4 *)(local_de0 + 5) = 0x2e;
                    /* try { // try from 0035ba8a to 0035ba8e has its CatchHandler @ 0035d274 */
            (**local_de0)(&local_de0);
            uVar31 = local_d84 & 0xffffffff;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)uVar31);
      }
    }
    else if (0 < (int)uVar31) {
      plVar30 = local_a38;
      lVar24 = 0;
      do {
        if ((int)*plVar30 < 0) {
          *(undefined4 *)(local_de0 + 5) = 0x2e;
                    /* try { // try from 0035ba3d to 0035ba41 has its CatchHandler @ 0035d27a */
          (**local_de0)(&local_de0);
          uVar31 = local_d84 & 0xffffffff;
        }
        lVar24 = lVar24 + 1;
        plVar30 = plVar30 + 0x20;
      } while (lVar24 < (int)uVar31);
    }
    if (local_c14 < 8) {
      if ((int)local_cd0 < 1) {
        uVar13 = 0;
      }
      else {
        uVar31 = 0;
        uVar13 = 0;
        puVar33 = local_cc8;
        do {
          if (uVar31 == uVar13) {
            uVar41 = local_cc8[(long)(int)uVar13 * 9 + 5];
          }
          else {
            lVar24 = (long)(int)uVar13;
            local_cc8[lVar24 * 9 + 8] = puVar33[8];
            uVar21 = *(undefined8 *)puVar33;
            uVar53 = *(undefined8 *)(puVar33 + 2);
            uVar8 = *(undefined8 *)(puVar33 + 6);
            *(undefined8 *)(local_cc8 + lVar24 * 9 + 4) = *(undefined8 *)(puVar33 + 4);
            *(undefined8 *)(local_cc8 + lVar24 * 9 + 4 + 2) = uVar8;
            *(undefined8 *)(local_cc8 + lVar24 * 9) = uVar21;
            *(undefined8 *)(local_cc8 + lVar24 * 9 + 2) = uVar53;
            uVar41 = local_cc8[lVar24 * 9 + 5];
          }
          if ((int)uVar41 <= (int)local_c08) {
            if ((int)local_c08 < (int)local_cc8[(long)(int)uVar13 * 9 + 6]) {
              local_cc8[(long)(int)uVar13 * 9 + 6] = local_c08;
            }
            uVar13 = uVar13 + 1;
          }
          uVar31 = uVar31 + 1;
          puVar33 = puVar33 + 9;
        } while ((long)uVar31 < (long)(int)local_cd0);
      }
      goto LAB_0035bb59;
    }
  }
  else {
    local_c80 = (uint)((long)uVar31 / (long)uVar42);
    if (local_cc8 != (uint *)0x0) goto LAB_0035b509;
LAB_0035b53a:
    local_c94 = '\0';
    uVar13 = 1;
LAB_0035bb59:
    local_cd0 = uVar13;
  }
  if ((char)local_cbe == '\0') {
    if ((local_cbf == '\0') && ((local_c94 != '\0' || (local_c14 - 2U < 6)))) {
      local_cbe = CONCAT11(local_cbe._1_1_,1);
      goto LAB_0035bb72;
    }
    puVar18[4] = 0;
    *(undefined4 *)((long)puVar18 + 0x2c) = 0;
    *(uint *)(puVar18 + 5) = local_cd0;
    if (local_cc0 == '\0') goto LAB_0035bbd6;
  }
  else {
    local_cbf = '\0';
LAB_0035bb72:
    puVar18[4] = 0;
    *(undefined4 *)((long)puVar18 + 0x2c) = 0;
    *(uint *)(puVar18 + 5) = local_cd0 * 2;
    if (local_cc0 != '\0') goto LAB_0035c812;
LAB_0035bbd6:
                    /* try { // try from 0035bbdb to 0035bfe2 has its CatchHandler @ 0035d286 */
    puVar18 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,1,0x18);
    *puVar18 = jpeglibNamespace::null_method;
    local_bd8 = puVar18;
    if (local_da8._4_4_ < 8) {
      if ((0xccU >> (local_da8._4_4_ & 0x1f) & 1) == 0) {
        if ((0x30U >> (local_da8._4_4_ & 0x1f) & 1) == 0) {
          if (local_da8._4_4_ != 1) goto LAB_0035bc74;
          if ((int)local_da8 != 1) goto LAB_0035bc7e;
        }
        else if ((int)local_da8 != 4) goto LAB_0035bc7e;
      }
      else if ((int)local_da8 != 3) goto LAB_0035bc7e;
    }
    else {
LAB_0035bc74:
      if ((int)local_da8 < 1) {
LAB_0035bc7e:
        *(undefined4 *)(local_de0 + 5) = 10;
        (**local_de0)(&local_de0);
      }
    }
    if ((local_c9c != 0) && ((local_d84._4_4_ | 4) != 6)) {
      *(undefined4 *)(local_de0 + 5) = 0x1c;
      (**local_de0)(&local_de0);
    }
    switch(local_d84._4_4_) {
    case 1:
      if ((int)local_d84 != 1) {
        *(undefined4 *)(local_de0 + 5) = 0xb;
        (**local_de0)(&local_de0);
      }
      pcVar36 = jpeglibNamespace::grayscale_convert;
      switch(local_da8._4_4_) {
      case 1:
      case 3:
      case 7:
        break;
      case 2:
        *puVar18 = jpeglibNamespace::rgb_ycc_start;
        pcVar36 = jpeglibNamespace::rgb_gray_convert;
        break;
      default:
        *(undefined4 *)(local_de0 + 5) = 0x1c;
        (**local_de0)(&local_de0);
        goto LAB_0035bf8b;
      }
      break;
    case 2:
    case 6:
      if ((int)local_d84 != 3) {
        *(undefined4 *)(local_de0 + 5) = 0xb;
        (**local_de0)(&local_de0);
      }
      if (local_da8._4_4_ != local_d84._4_4_) {
        *(undefined4 *)(local_de0 + 5) = 0x1c;
        (**local_de0)(&local_de0);
      }
      if (local_c9c == 0) {
        pcVar36 = jpeglibNamespace::rgb_convert;
      }
      else {
        if (local_c9c != 1) {
          *(undefined4 *)(local_de0 + 5) = 0x1c;
          (**local_de0)(&local_de0);
          goto LAB_0035bf8b;
        }
        pcVar36 = jpeglibNamespace::rgb_rgb1_convert;
      }
      break;
    case 3:
      if ((int)local_d84 != 3) {
        *(undefined4 *)(local_de0 + 5) = 0xb;
        (**local_de0)(&local_de0);
      }
      if (local_da8._4_4_ == 3) goto LAB_0035beb2;
      if (local_da8._4_4_ != 2) {
        *(undefined4 *)(local_de0 + 5) = 0x1c;
        (**local_de0)(&local_de0);
        goto LAB_0035bf8b;
      }
LAB_0035bf16:
      *puVar18 = jpeglibNamespace::rgb_ycc_start;
      pcVar36 = jpeglibNamespace::rgb_ycc_convert;
      break;
    case 4:
      if ((int)local_d84 != 4) {
        *(undefined4 *)(local_de0 + 5) = 0xb;
        (**local_de0)(&local_de0);
      }
      pcVar36 = jpeglibNamespace::null_convert;
      if (local_da8._4_4_ != 4) {
        *(undefined4 *)(local_de0 + 5) = 0x1c;
        (**local_de0)(&local_de0);
      }
      break;
    case 5:
      if ((int)local_d84 != 4) {
        *(undefined4 *)(local_de0 + 5) = 0xb;
        (**local_de0)(&local_de0);
      }
      if (local_da8._4_4_ == 5) goto LAB_0035beb2;
      if (local_da8._4_4_ != 4) {
        *(undefined4 *)(local_de0 + 5) = 0x1c;
        (**local_de0)(&local_de0);
        goto LAB_0035bf8b;
      }
      *puVar18 = jpeglibNamespace::rgb_ycc_start;
      pcVar36 = jpeglibNamespace::cmyk_ycck_convert;
      break;
    case 7:
      if ((int)local_d84 != 3) {
        *(undefined4 *)(local_de0 + 5) = 0xb;
        (**local_de0)(&local_de0);
      }
      pcVar36 = jpeglibNamespace::null_convert;
      if (local_da8._4_4_ != 7) {
        if (local_da8._4_4_ != 3) {
          if (local_da8._4_4_ == 2) {
            *(undefined1 *)(local_d78 + 0x25) = 1;
            *(undefined1 *)(local_d78 + 0x3d) = 1;
            goto LAB_0035bf16;
          }
          *(undefined4 *)(local_de0 + 5) = 0x1c;
                    /* try { // try from 0035d234 to 0035d252 has its CatchHandler @ 0035d286 */
          (**local_de0)(&local_de0);
          goto LAB_0035bf8b;
        }
        *(undefined1 *)(local_d78 + 0x25) = 1;
        *(undefined1 *)(local_d78 + 0x3d) = 1;
      }
      break;
    default:
      if ((local_d84._4_4_ != local_da8._4_4_) || ((int)local_d84 != (int)local_da8)) {
        *(undefined4 *)(local_de0 + 5) = 0x1c;
        (**local_de0)(&local_de0);
      }
LAB_0035beb2:
      pcVar36 = jpeglibNamespace::null_convert;
    }
    puVar18[1] = pcVar36;
LAB_0035bf8b:
    puVar18 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,1,0xa8);
    *puVar18 = jpeglibNamespace::start_pass_downsample;
    puVar18[1] = jpeglibNamespace::sep_downsample;
    *(undefined1 *)(puVar18 + 2) = 0;
    local_bd0 = puVar18;
    if (local_cbe._1_1_ != '\0') {
      *(undefined4 *)(local_de0 + 5) = 0x1a;
      (**local_de0)(&local_de0);
    }
    if (0 < (int)local_d84) {
      piVar37 = local_d78 + 10;
      bVar51 = true;
      lVar24 = 0;
      do {
        uVar41 = (piVar37[-1] * piVar37[-8]) / local_c88;
        uVar13 = (*piVar37 * piVar37[-7]) / local_c84;
        uVar31 = (long)(*piVar37 * piVar37[-7]) % (long)local_c84 & 0xffffffff;
        *(uint *)((long)puVar18 + lVar24 * 4 + 0x68) = uVar13;
        if ((local_c90 == uVar41) && (uStack_c8c == uVar13)) {
          if ((int)local_cb8 == 0) {
            puVar18[lVar24 + 3] = jpeglibNamespace::fullsize_downsample;
          }
          else {
            puVar18[lVar24 + 3] = jpeglibNamespace::fullsize_smooth_downsample;
LAB_0035c087:
            *(undefined1 *)(puVar18 + 2) = 1;
          }
        }
        else {
          uVar14 = uVar41 * 2;
          uVar31 = (ulong)uVar14;
          if ((local_c90 == uVar14) && (uStack_c8c == uVar13)) {
            puVar18[lVar24 + 3] = jpeglibNamespace::h2v1_downsample;
            bVar51 = false;
          }
          else if ((local_c90 == uVar14) && (uVar31 = (ulong)(uVar13 * 2), uStack_c8c == uVar13 * 2)
                  ) {
            if ((int)local_cb8 != 0) {
              puVar18[lVar24 + 3] = jpeglibNamespace::h2v2_smooth_downsample;
              goto LAB_0035c087;
            }
            puVar18[lVar24 + 3] = jpeglibNamespace::h2v2_downsample;
          }
          else if (((int)local_c90 % (int)uVar41 == 0) && ((int)uStack_c8c % (int)uVar13 == 0)) {
            uVar31 = (long)(int)uStack_c8c % (long)(int)uVar13 & 0xffffffff;
            puVar18[lVar24 + 3] = jpeglibNamespace::int_downsample;
            *(char *)((long)puVar18 + lVar24 + 0x90) = (char)((int)local_c90 / (int)uVar41);
            *(char *)((long)puVar18 + lVar24 + 0x9a) = (char)((int)uStack_c8c / (int)uVar13);
            bVar51 = false;
          }
          else {
            *(undefined4 *)(local_de0 + 5) = 0x27;
                    /* try { // try from 0035c0f1 to 0035c0fe has its CatchHandler @ 0035d258 */
            (**local_de0)(&local_de0);
            uVar31 = extraout_RDX;
          }
        }
        lVar24 = lVar24 + 1;
        piVar37 = piVar37 + 0x18;
      } while (lVar24 < (int)local_d84);
      if (((int)local_cb8 != 0) && (!bVar51)) {
        *(undefined4 *)(local_de0 + 5) = 0x65;
                    /* try { // try from 0035c159 to 0035c1e5 has its CatchHandler @ 0035d286 */
        (*local_de0[1])(&local_de0,0,uVar31);
      }
    }
    puVar18 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,1,0x70);
    uVar13 = uStack_c8c;
    *puVar18 = jpeglibNamespace::start_pass_prep;
    local_bf0 = puVar18;
    if (*(char *)(local_bd0 + 2) == '\0') {
      puVar18[1] = jpeglibNamespace::pre_process_data;
      if (0 < (int)local_d84) {
        puVar33 = (uint *)(local_d78 + 7);
        lVar24 = 0;
        do {
          uVar31 = (long)(int)local_c90 * (long)local_c88 * (ulong)*puVar33;
          uVar13 = puVar33[-5];
          if ((uVar31 | (long)(int)uVar13) >> 0x20 == 0) {
            uVar17 = (undefined4)((uVar31 & 0xffffffff) / (ulong)uVar13);
          }
          else {
            uVar17 = (undefined4)((long)uVar31 / (long)(int)uVar13);
          }
                    /* try { // try from 0035c72b to 0035c737 has its CatchHandler @ 0035d276 */
          uVar21 = (*(code *)local_dd8[2])(&local_de0,1,uVar17,uStack_c8c);
          puVar18[lVar24 + 2] = uVar21;
          lVar24 = lVar24 + 1;
          puVar33 = puVar33 + 0x18;
        } while (lVar24 < (int)local_d84);
      }
    }
    else {
      puVar18[1] = jpeglibNamespace::pre_process_context;
      uVar31 = (ulong)(int)uStack_c8c;
      iVar34 = uStack_c8c * 5;
      lVar24 = (*(code *)*local_dd8)(&local_de0,1,(long)((int)local_d84 * iVar34) << 3);
      local_b80 = lVar24;
      if (0 < (int)local_d84) {
        local_ba0 = uVar31 * 0x18;
        if ((int)uVar13 < 1) {
          pvVar38 = (void *)(lVar24 + uVar31 * 8);
          puVar33 = (uint *)(local_d78 + 7);
          lVar24 = 0;
          do {
            uVar42 = (long)(int)local_c90 * (long)local_c88 * (ulong)*puVar33;
            uVar13 = puVar33[-5];
            if ((uVar42 | (long)(int)uVar13) >> 0x20 == 0) {
              uVar17 = (undefined4)((uVar42 & 0xffffffff) / (ulong)uVar13);
            }
            else {
              uVar17 = (undefined4)((long)uVar42 / (long)(int)uVar13);
            }
                    /* try { // try from 0035c7c4 to 0035c7d5 has its CatchHandler @ 0035d272 */
            pvVar20 = (void *)(*(code *)local_dd8[2])(&local_de0,1,uVar17,uVar31 * 3);
            memcpy(pvVar38,pvVar20,local_ba0);
            puVar18[lVar24 + 2] = pvVar38;
            lVar24 = lVar24 + 1;
            pvVar38 = (void *)((long)pvVar38 + (long)iVar34 * 8);
            puVar33 = puVar33 + 0x18;
          } while (lVar24 < (int)local_d84);
        }
        else {
          local_ba8 = uVar31 * 2;
          local_b78 = (long)(int)(uVar13 * 4);
          uVar42 = (ulong)uVar13;
          lVar43 = (long)iVar34 * 8;
          local_b28 = uVar42 * 8;
          local_b30 = local_b78 * 8;
          local_b38 = local_b28 + local_b78 * 8;
          local_b40 = uVar31 * 2 + uVar42;
          local_b50 = (ulong)(uVar13 & 0xfffffffc);
          local_b58 = local_b50 - 4;
          local_b60 = (local_b58 >> 2) + 1;
          local_b68 = local_b60 & 0xfffffffffffffffe;
          lVar32 = lVar24 + local_b78 * 8 + 0x30;
          local_b70 = uVar31 * 2 + 6;
          lVar39 = lVar24 + local_b78 * 8;
          local_b48 = uVar31 * 2 + 1;
          local_e30 = 0;
          piVar37 = local_d78;
          do {
            uVar25 = (long)(int)local_c90 * (long)local_c88 * (ulong)(uint)piVar37[7];
            uVar41 = piVar37[2];
            if ((uVar25 | (long)(int)uVar41) >> 0x20 == 0) {
              uVar17 = (undefined4)((uVar25 & 0xffffffff) / (ulong)uVar41);
            }
            else {
              uVar17 = (undefined4)((long)uVar25 / (long)(int)uVar41);
            }
                    /* try { // try from 0035c394 to 0035c3ac has its CatchHandler @ 0035d278 */
            pvVar20 = (void *)(*(code *)local_dd8[2])(&local_de0,1,uVar17,uVar31 * 3);
            pvVar38 = (void *)(lVar24 + uVar31 * 8);
            memcpy(pvVar38,pvVar20,local_ba0);
            if (uVar13 < 4) {
              uVar25 = 0;
joined_r0x0035c671:
              uVar19 = uVar25;
              if ((uVar31 & 1) != 0) {
                *(undefined8 *)(lVar24 + uVar25 * 8) =
                     *(undefined8 *)((long)pvVar20 + (local_ba8 + uVar25) * 8);
                *(undefined8 *)(lVar24 + (local_b78 + uVar25) * 8) =
                     *(undefined8 *)((long)pvVar20 + uVar25 * 8);
                uVar19 = uVar25 | 1;
              }
              if (~uVar25 != -uVar42) {
                do {
                  *(undefined8 *)(lVar24 + uVar19 * 8) =
                       *(undefined8 *)((long)pvVar20 + uVar19 * 8 + local_b48 * 8 + -8);
                  *(undefined8 *)(lVar39 + uVar19 * 8) = *(undefined8 *)((long)pvVar20 + uVar19 * 8)
                  ;
                  *(undefined8 *)(lVar24 + 8 + uVar19 * 8) =
                       *(undefined8 *)((long)pvVar20 + uVar19 * 8 + local_b48 * 8);
                  *(undefined8 *)(lVar39 + 8 + uVar19 * 8) =
                       *(undefined8 *)((long)pvVar20 + uVar19 * 8 + 8);
                  uVar19 = uVar19 + 2;
                } while (uVar42 != uVar19);
              }
            }
            else {
              lVar26 = lVar43 * local_e30;
              pvVar27 = (void *)(lVar26 + local_b80);
              pvVar40 = (void *)(local_b28 + lVar26 + local_b80);
              pvVar44 = (void *)(local_b30 + lVar26 + local_b80);
              pvVar29 = (void *)(local_b38 + lVar26 + local_b80);
              pvVar1 = (void *)((long)pvVar20 + local_ba8 * 8);
              pvVar2 = (void *)((long)pvVar20 + local_b40 * 8);
              pvVar3 = (void *)((long)pvVar20 + uVar42 * 8);
              local_b98 = CONCAT71(local_b98._1_7_,pvVar1 < pvVar40);
              if (pvVar27 < pvVar29 && pvVar44 < pvVar40) {
                uVar25 = 0;
                goto joined_r0x0035c671;
              }
              if (((pvVar27 < pvVar2 && pvVar1 < pvVar40) || (pvVar27 < pvVar3 && pvVar20 < pvVar40)
                  ) || (pvVar44 < pvVar2 && pvVar1 < pvVar29)) {
                uVar25 = 0;
                goto joined_r0x0035c671;
              }
              uVar25 = 0;
              if (pvVar44 < pvVar3 && pvVar20 < pvVar29) goto joined_r0x0035c671;
              if (local_b58 == 0) {
                lVar26 = 0;
              }
              else {
                lVar26 = 0;
                uVar25 = local_b68;
                do {
                  puVar4 = (undefined8 *)((long)pvVar20 + lVar26 * 8 + local_b70 * 8 + -0x30);
                  uVar21 = puVar4[1];
                  puVar5 = (undefined8 *)((long)pvVar20 + lVar26 * 8 + local_b70 * 8 + -0x20);
                  uVar53 = *puVar5;
                  uVar8 = puVar5[1];
                  puVar5 = (undefined8 *)(lVar24 + lVar26 * 8);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar21;
                  puVar5 = (undefined8 *)(lVar24 + 0x10 + lVar26 * 8);
                  *puVar5 = uVar53;
                  puVar5[1] = uVar8;
                  puVar5 = (undefined8 *)((long)pvVar20 + lVar26 * 8);
                  uVar21 = puVar5[1];
                  puVar4 = (undefined8 *)((long)pvVar20 + lVar26 * 8 + 0x10);
                  uVar53 = *puVar4;
                  uVar8 = puVar4[1];
                  puVar4 = (undefined8 *)(lVar32 + -0x30 + lVar26 * 8);
                  *puVar4 = *puVar5;
                  puVar4[1] = uVar21;
                  puVar5 = (undefined8 *)(lVar32 + -0x20 + lVar26 * 8);
                  *puVar5 = uVar53;
                  puVar5[1] = uVar8;
                  puVar4 = (undefined8 *)((long)pvVar20 + lVar26 * 8 + local_b70 * 8 + -0x10);
                  uVar21 = puVar4[1];
                  puVar5 = (undefined8 *)((long)pvVar20 + lVar26 * 8 + local_b70 * 8);
                  uVar53 = *puVar5;
                  uVar8 = puVar5[1];
                  puVar5 = (undefined8 *)(lVar24 + 0x20 + lVar26 * 8);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar21;
                  puVar5 = (undefined8 *)(lVar24 + 0x30 + lVar26 * 8);
                  *puVar5 = uVar53;
                  puVar5[1] = uVar8;
                  puVar5 = (undefined8 *)((long)pvVar20 + lVar26 * 8 + 0x20);
                  uVar21 = puVar5[1];
                  puVar4 = (undefined8 *)((long)pvVar20 + lVar26 * 8 + 0x30);
                  uVar53 = *puVar4;
                  uVar8 = puVar4[1];
                  puVar4 = (undefined8 *)(lVar32 + -0x10 + lVar26 * 8);
                  *puVar4 = *puVar5;
                  puVar4[1] = uVar21;
                  puVar5 = (undefined8 *)(lVar32 + lVar26 * 8);
                  *puVar5 = uVar53;
                  puVar5[1] = uVar8;
                  lVar26 = lVar26 + 8;
                  uVar25 = uVar25 - 2;
                } while (uVar25 != 0);
              }
              if ((local_b60 & 1) != 0) {
                puVar5 = (undefined8 *)((long)pvVar20 + (local_ba8 + lVar26) * 8);
                uVar21 = puVar5[1];
                puVar4 = (undefined8 *)((long)pvVar20 + (local_ba8 + lVar26) * 8 + 0x10);
                uVar53 = *puVar4;
                uVar8 = puVar4[1];
                puVar4 = (undefined8 *)(lVar24 + lVar26 * 8);
                *puVar4 = *puVar5;
                puVar4[1] = uVar21;
                puVar5 = (undefined8 *)(lVar24 + 0x10 + lVar26 * 8);
                *puVar5 = uVar53;
                puVar5[1] = uVar8;
                puVar5 = (undefined8 *)((long)pvVar20 + lVar26 * 8);
                uVar21 = puVar5[1];
                puVar4 = (undefined8 *)((long)pvVar20 + lVar26 * 8 + 0x10);
                uVar53 = *puVar4;
                uVar8 = puVar4[1];
                puVar4 = (undefined8 *)(lVar24 + (lVar26 + local_b78) * 8);
                *puVar4 = *puVar5;
                puVar4[1] = uVar21;
                puVar5 = (undefined8 *)(lVar24 + 0x10 + (lVar26 + local_b78) * 8);
                *puVar5 = uVar53;
                puVar5[1] = uVar8;
              }
              uVar25 = local_b50;
              if (local_b50 != uVar42) goto joined_r0x0035c671;
            }
            puVar18[local_e30 + 2] = pvVar38;
            lVar24 = lVar24 + lVar43;
            local_e30 = local_e30 + 1;
            piVar37 = piVar37 + 0x18;
            lVar32 = lVar32 + lVar43;
            lVar39 = lVar39 + lVar43;
          } while (local_e30 < (int)local_d84);
        }
      }
    }
  }
LAB_0035c812:
                    /* try { // try from 0035c817 to 0035c827 has its CatchHandler @ 0035d286 */
  local_bc8 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,1,0xf8);
  *local_bc8 = jpeglibNamespace::start_pass_fdctmgr;
  if (0 < (int)local_d84) {
    piVar37 = local_d78 + 0x16;
    iVar34 = 0;
    do {
                    /* try { // try from 0035c865 to 0035c873 has its CatchHandler @ 0035d284 */
      uVar21 = (*(code *)*local_dd8)(&local_de0,1,0x100);
      *(undefined8 *)piVar37 = uVar21;
      iVar34 = iVar34 + 1;
      piVar37 = piVar37 + 0x18;
    } while (iVar34 < (int)local_d84);
  }
  if (local_cbf == '\0') {
    local_bc0 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,1,0xf8);
    *local_bc0 = jpeglibNamespace::start_pass_huff;
    *(undefined1 (*) [16])(local_bc0 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0xc) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0xe) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x14) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x16) = (undefined1  [16])0x0;
    if (local_c94 != '\0') {
      local_bc0[0x1e] = 0;
    }
  }
  else {
                    /* try { // try from 0035c89e to 0035c9fd has its CatchHandler @ 0035d286 */
    local_bc0 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,1,0x170);
    *local_bc0 = jpeglibNamespace::start_pass;
    local_bc0[2] = jpeglibNamespace::finish_pass;
    *(undefined1 (*) [16])(local_bc0 + 0xd) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0xf) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x11) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x13) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x15) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x17) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x19) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x1b) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x1d) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x1f) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x21) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x23) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x25) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x27) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x29) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_bc0 + 0x2b) = (undefined1  [16])0x0;
    *(undefined1 *)(local_bc0 + 0x2d) = 0x71;
  }
  if ((int)local_cd0 < 2) {
    pcVar36 = (code *)*local_dd8;
    if ((char)local_cbe == '\0') {
                    /* try { // try from 0035cac8 to 0035cb66 has its CatchHandler @ 0035d286 */
      puVar18 = (undefined8 *)(*pcVar36)(&local_de0,1,0x5c0);
      auVar52._8_4_ = (int)puVar18;
      auVar52._0_8_ = puVar18;
      auVar52._12_4_ = (int)((ulong)puVar18 >> 0x20);
      lVar24 = auVar52._8_8_;
      lVar39 = _UNK_005dd6f8 + lVar24;
      puVar18[4] = _DAT_005dd6f0 + (long)puVar18;
      puVar18[5] = lVar39;
      lVar39 = _UNK_005dd708 + lVar24;
      puVar18[6] = _DAT_005dd700 + (long)puVar18;
      puVar18[7] = lVar39;
      lVar39 = _UNK_005dd718 + lVar24;
      puVar18[8] = _DAT_005dd710 + (long)puVar18;
      puVar18[9] = lVar39;
      lVar39 = _UNK_005dd728 + lVar24;
      puVar18[10] = _DAT_005dd720 + (long)puVar18;
      puVar18[0xb] = lVar39;
      lVar24 = lVar24 + _UNK_005dd738;
      puVar18[0xc] = (long)puVar18 + _DAT_005dd730;
      puVar18[0xd] = lVar24;
      puVar18[0xe] = 0;
      goto LAB_0035cb3f;
    }
  }
  else {
    pcVar36 = (code *)*local_dd8;
  }
  puVar18 = (undefined8 *)(*pcVar36)(&local_de0,1,0xc0);
  if (0 < (int)local_d84) {
    puVar33 = (uint *)(local_d78 + 8);
    lVar24 = 0;
    do {
      uVar42 = (ulong)(int)puVar33[-6];
      uVar31 = (puVar33[-1] + uVar42) - 1;
      if ((uVar31 | uVar42) >> 0x20 == 0) {
        iVar34 = (int)((uVar31 & 0xffffffff) % (ulong)puVar33[-6]);
      }
      else {
        iVar34 = (int)((long)uVar31 % (long)uVar42);
      }
      uVar25 = (ulong)(int)puVar33[-5];
      uVar42 = (*puVar33 + uVar25) - 1;
      if ((uVar42 | uVar25) >> 0x20 == 0) {
        iVar50 = (int)((uVar42 & 0xffffffff) % (ulong)puVar33[-5]);
      }
      else {
        iVar50 = (int)((long)uVar42 % (long)uVar25);
      }
                    /* try { // try from 0035ca9b to 0035caa7 has its CatchHandler @ 0035d282 */
      uVar21 = (*(code *)local_dd8[5])(&local_de0,1,0,(int)uVar31 - iVar34,(int)uVar42 - iVar50);
      puVar18[lVar24 + 0xe] = uVar21;
      lVar24 = lVar24 + 1;
      puVar33 = puVar33 + 0x18;
    } while (lVar24 < (int)local_d84);
  }
LAB_0035cb3f:
  *puVar18 = jpeglibNamespace::start_pass_coef;
  local_be8 = puVar18;
  puVar18 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,1,0x70);
  *puVar18 = jpeglibNamespace::start_pass_main;
  local_bf8 = puVar18;
  if ((local_cc0 == '\0') && (0 < (int)local_d84)) {
    piVar37 = local_d78 + 10;
    lVar24 = 0;
    do {
                    /* try { // try from 0035cbc3 to 0035cbcd has its CatchHandler @ 0035d280 */
      uVar21 = (*(code *)local_dd8[2])
                         (&local_de0,1,piVar37[-1] * piVar37[-3],*piVar37 * piVar37[-7]);
      puVar18[lVar24 + 4] = uVar21;
      lVar24 = lVar24 + 1;
      piVar37 = piVar37 + 0x18;
    } while (lVar24 < (int)local_d84);
  }
                    /* try { // try from 0035cbed to 0035cc83 has its CatchHandler @ 0035d286 */
  local_be0 = (undefined8 *)(*(code *)*local_dd8)(&local_de0,1,0x40);
  *local_be0 = jpeglibNamespace::write_file_header;
  local_be0[1] = jpeglibNamespace::write_frame_header;
  local_be0[2] = jpeglibNamespace::write_scan_header;
  local_be0[3] = jpeglibNamespace::write_file_trailer;
  local_be0[4] = jpeglibNamespace::write_tables_only;
  local_be0[5] = jpeglibNamespace::write_marker_header;
  local_be0[6] = jpeglibNamespace::write_marker_byte;
  *(undefined4 *)(local_be0 + 7) = 0;
  (*(code *)local_dd8[6])(&local_de0);
  (*(code *)*local_be0)(&local_de0);
  (*(code *)*local_c00)(&local_de0);
  local_c98 = 0;
  local_dbc = 0x66 - (uint)(local_cc0 == '\0');
                    /* try { // try from 0035ccb7 to 0035ccc8 has its CatchHandler @ 0035d270 */
  puVar18 = (undefined8 *)(*(code *)local_dd8[2])(&local_de0,1,(int)local_da8 * local_db0,1);
  plVar30 = (long *)*local_b20;
  if (plVar30 == (long *)0x0) {
    local_a1c = 0;
    local_a18 = 0;
  }
  else {
    local_a1c = *(uint *)(plVar30 + 2);
    local_a18 = *(undefined4 *)((long)plVar30 + 0x14);
  }
  local_a10 = (long *)0x0;
                    /* try { // try from 0035cd0e to 0035cd1f has its CatchHandler @ 0035d25a */
  (**(code **)(*plVar30 + 0x38))(plVar30,local_a38,0,0,0);
  if (local_c98 < local_dac) {
    do {
      puVar45 = (undefined1 *)*puVar18;
      if (local_a28 == 1) {
        if (0 < (int)local_a1c) {
          puVar28 = (undefined1 *)((long)(int)local_c98 * (long)local_a24 + local_a38[0]);
          uVar13 = local_a1c;
          if ((local_a1c & 1) != 0) {
            *puVar45 = puVar28[2];
            puVar45[1] = puVar28[1];
            puVar45[2] = *puVar28;
            puVar45 = puVar45 + 3;
            puVar28 = puVar28 + local_a20;
            uVar13 = local_a1c - 1;
          }
          if (local_a1c != 1) {
            uVar13 = uVar13 - 1;
            do {
              *puVar45 = puVar28[2];
              puVar45[1] = puVar28[1];
              puVar45[2] = *puVar28;
              lVar24 = (long)local_a20;
              puVar45[3] = puVar28[lVar24 + 2];
              puVar45[4] = puVar28[lVar24 + 1];
              puVar45[5] = puVar28[lVar24];
              puVar28 = puVar28 + local_a20 + lVar24;
              puVar45 = puVar45 + 6;
              bVar51 = 1 < uVar13;
              uVar13 = uVar13 - 2;
            } while (bVar51);
          }
        }
      }
      else if (0 < (int)local_a1c) {
        lVar24 = 1;
        while( true ) {
          lVar39 = (long)local_a24 * (long)(int)local_c98 + local_a38[0];
          lVar32 = (long)local_a20 * (lVar24 + -1);
          if (local_a28 == 1) {
            uVar13 = (uint)CONCAT12(*(undefined1 *)(lVar39 + 2 + lVar32),
                                    *(undefined2 *)(lVar39 + lVar32));
          }
          else if (local_a28 == 3) {
            uVar13 = (uint)*(byte *)(lVar39 + lVar32) * 0x1010101;
          }
          else {
            uVar13 = 0;
            if (local_a28 == 2) {
              uVar13 = *(uint *)(lVar39 + lVar32);
              uVar14 = uVar13 >> 8;
              uVar41 = uVar13 >> 0x10;
              bVar22 = (byte)(uVar13 >> 0x18);
              if (bVar22 != 0xff) {
                if (bVar22 == 0) {
                  uVar41 = 0;
                  uVar14 = 0;
                  uVar13 = 0;
                }
                else {
                  uVar13 = ((uVar13 & 0xff) * 0xff) / (uVar13 >> 0x18);
                  uVar11 = (ushort)uVar13;
                  if (0xfe < uVar13) {
                    uVar11 = 0xff;
                  }
                  uVar13 = ((uVar14 & 0xff) * 0xff) / (uint)(ushort)bVar22;
                  uVar12 = (ushort)uVar13;
                  if (0xfe < uVar13) {
                    uVar12 = 0xff;
                  }
                  uVar13 = ((uVar41 & 0xff) * 0xff) / (uint)(ushort)bVar22;
                  uVar46 = 0xff;
                  if (uVar13 < 0xff) {
                    uVar46 = (ushort)uVar13;
                  }
                  uVar13 = (uint)uVar11;
                  uVar14 = (uint)uVar12;
                  uVar41 = (uint)uVar46;
                }
              }
              uVar13 = uVar13 & 0xff | (uVar14 & 0xff) << 8 | (uVar41 & 0xff) << 0x10;
            }
          }
          *puVar45 = (char)(uVar13 >> 0x10);
          puVar45[1] = (char)(uVar13 >> 8);
          puVar45[2] = (char)uVar13;
          if ((int)local_a1c <= lVar24) break;
          lVar24 = lVar24 + 1;
          puVar45 = puVar45 + 3;
        }
      }
      if (local_dbc != 0x65) {
        *(undefined4 *)(local_de0 + 5) = 0x15;
        *(int *)((long)local_de0 + 0x2c) = local_dbc;
                    /* try { // try from 0035cfa8 to 0035d03e has its CatchHandler @ 0035d290 */
        (**local_de0)(&local_de0);
      }
      if (local_dac <= local_c98) {
        *(undefined4 *)(local_de0 + 5) = 0x7e;
        (*local_de0[1])(&local_de0,0xffffffff);
      }
      if (local_dd0 != (undefined8 *)0x0) {
        local_dd0[1] = (ulong)local_c98;
        local_dd0[2] = (ulong)local_dac;
        (*(code *)*local_dd0)(&local_de0);
      }
      if (*(char *)(local_c00 + 3) != '\0') {
        (*(code *)local_c00[1])(&local_de0);
      }
      local_b8c._0_4_ = 0;
      (*(code *)local_bf8[1])(&local_de0,puVar18,&local_b8c,local_dac != local_c98);
      local_c98 = local_c98 + (int)local_b8c;
    } while (local_c98 < local_dac);
  }
  if (local_dbc - 0x65U < 2) {
    if (local_c98 < local_dac) {
      *(undefined4 *)(local_de0 + 5) = 0x45;
                    /* try { // try from 0035d083 to 0035d0ba has its CatchHandler @ 0035d27c */
      (**local_de0)(&local_de0);
    }
    (*(code *)local_c00[2])(&local_de0);
  }
  else if (local_dbc != 0x67) {
    *(undefined4 *)(local_de0 + 5) = 0x15;
    *(int *)((long)local_de0 + 0x2c) = local_dbc;
    (**local_de0)(&local_de0);
  }
  if (*(char *)((long)local_c00 + 0x19) == '\0') {
    do {
                    /* try { // try from 0035d0e0 to 0035d0e4 has its CatchHandler @ 0035d288 */
      (*(code *)*local_c00)(&local_de0);
      uVar31 = (ulong)local_c80;
      if (local_c80 != 0) {
        uVar42 = 0;
        do {
          if (local_dd0 != (undefined8 *)0x0) {
            local_dd0[1] = uVar42;
            local_dd0[2] = uVar31;
                    /* try { // try from 0035d124 to 0035d14d has its CatchHandler @ 0035d29f */
            (*(code *)*local_dd0)(&local_de0);
          }
          cVar10 = (*(code *)local_be8[1])(&local_de0,0);
          if (cVar10 == '\0') {
            *(undefined4 *)(local_de0 + 5) = 0x19;
            (**local_de0)(&local_de0);
          }
          uVar42 = uVar42 + 1;
          uVar31 = (ulong)local_c80;
        } while (uVar42 < uVar31);
      }
                    /* try { // try from 0035d158 to 0035d15d has its CatchHandler @ 0035d288 */
      (*(code *)local_c00[2])(&local_de0);
    } while (*(char *)((long)local_c00 + 0x19) == '\0');
  }
                    /* try { // try from 0035d178 to 0035d1e7 has its CatchHandler @ 0035d27c */
  (*(code *)local_be0[3])(&local_de0);
  (*local_db8[4])(&local_de0);
  if (local_dd8 != (undefined8 *)0x0) {
    (*(code *)local_dd8[9])(&local_de0,1);
    if (local_dc0 == '\0') {
      local_dbc = 100;
    }
    else {
      local_dbc = 200;
      local_c68 = 0;
    }
    if (local_dd8 != (undefined8 *)0x0) {
      (*(code *)local_dd8[10])(&local_de0);
    }
  }
  local_dd8 = (undefined8 *)0x0;
  local_dbc = 0;
  if (local_a10 != (long *)0x0) {
    (**(code **)(*local_a10 + 8))();
  }
  free(__ptr);
  return CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
}


