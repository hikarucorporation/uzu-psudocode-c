// Function : decodeImage
// Namespace: juce:JPEGImageFormat
// Entry    : 003566d0
// Prototype: long * decodeImage(long * param_1, undefined8 param_2, long * param_3)
// Body     : 003566d0 - 00359c69


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JPEGImageFormat::decodeImage(juce::InputStream&) */

long * __cdecl juce::JPEGImageFormat::decodeImage(long *param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [14];
  undefined1 auVar6 [12];
  unkbyte10 Var7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [12];
  code **ppcVar10;
  char cVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  uint uVar14;
  long *plVar15;
  void *pvVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 *puVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined1 *puVar24;
  int *piVar25;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar26;
  ulong extraout_RDX_01;
  long lVar27;
  long lVar28;
  uint uVar29;
  long lVar30;
  char *pcVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  uint *puVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  int *piVar42;
  ulong uVar43;
  size_t __size;
  NamedValueSet *this;
  code *pcVar44;
  long lVar45;
  undefined8 *puVar46;
  int iVar47;
  int iVar48;
  ulong uVar49;
  bool bVar50;
  undefined1 auVar51 [16];
  ulong uVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar56;
  int iVar57;
  int iVar61;
  int iVar62;
  ulong uVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined2 uVar82;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  char local_429;
  undefined8 *local_428;
  uint local_41c;
  undefined8 *local_418;
  undefined8 local_410;
  code **local_408;
  undefined8 *local_400;
  undefined8 *local_3f8;
  char *local_3f0;
  undefined1 local_3e8;
  uint local_3e4;
  long *local_3e0;
  uint local_3d0;
  uint local_3cc;
  uint local_3c8;
  char local_3b0;
  char cStack_3af;
  char local_3a6;
  int local_3a4;
  char local_3a0;
  uint local_39c;
  undefined2 local_398;
  char local_396;
  uint local_394;
  uint local_390;
  uint local_38c;
  uint local_388;
  long local_378;
  uint local_370;
  undefined4 local_36c;
  undefined4 local_364;
  undefined4 *local_358;
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  int local_2f0;
  long local_2e8;
  char local_2df;
  char local_2de;
  int local_29c;
  char local_298;
  undefined8 local_290;
  uint local_288;
  uint local_284;
  int local_280;
  int local_27c;
  uint local_278;
  long local_270;
  int local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  long *local_188;
  ulong local_180;
  ulong local_178;
  undefined1 *local_170;
  undefined1 local_168 [12];
  int local_15c;
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  long *local_148;
  long *local_140;
  undefined8 *local_138;
  ulong local_130;
  undefined **local_128;
  long local_120;
  long *local_118;
  void *local_110;
  long local_100 [2];
  ulong local_f0;
  ulong local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_128,0x100);
                    /* try { // try from 00356704 to 00356716 has its CatchHandler @ 00359d09 */
  (**(code **)((long)local_128 + 0xb0))((MemoryOutputStream *)&local_128,param_3,0xffffffffffffffff)
  ;
  *param_1 = 0;
  if (local_f0 < 0x11) goto LAB_00356c14;
  local_40 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  local_d8 = JPEGHelpers::fatalErrorHandler;
  local_d0 = JPEGHelpers::silentErrorCallback2;
  local_c8 = JPEGHelpers::silentErrorCallback1;
  local_c0 = JPEGHelpers::silentErrorCallback3;
  local_b8 = JPEGHelpers::silentErrorCallback1;
  memset(&local_400,0,0x270);
  local_408 = &local_d8;
  local_3e8 = 1;
                    /* try { // try from 003567eb to 003569c9 has its CatchHandler @ 00359d26 */
  jpeglibNamespace::jinit_memory_mgr((long *)&local_408);
  local_3f8 = (undefined8 *)0x0;
  local_3e0 = (long *)0x0;
  local_290 = 0;
  local_350 = (undefined1  [16])0x0;
  local_340 = (undefined1  [16])0x0;
  local_330 = (undefined1  [16])0x0;
  local_320 = (undefined1  [16])0x0;
  local_310 = (undefined1  [16])0x0;
  local_300 = (undefined1  [16])0x0;
  local_1c0 = (undefined8 *)(*(code *)*local_400)(&local_408,0,0x108);
  *local_1c0 = jpeglibNamespace::reset_marker_reader;
  local_1c0[1] = jpeglibNamespace::read_markers;
  local_1c0[2] = jpeglibNamespace::read_restart_marker;
  local_1c0[5] = jpeglibNamespace::skip_variable;
  local_1c0[7] = jpeglibNamespace::skip_variable;
  local_1c0[8] = jpeglibNamespace::skip_variable;
  *(undefined1 (*) [16])(local_1c0 + 0x16) = (undefined1  [16])0x0;
  local_1c0[9] = jpeglibNamespace::skip_variable;
  local_1c0[10] = jpeglibNamespace::skip_variable;
  local_1c0[0xb] = jpeglibNamespace::skip_variable;
  local_1c0[0xc] = jpeglibNamespace::skip_variable;
  *(undefined1 (*) [16])(local_1c0 + 0x18) = (undefined1  [16])0x0;
  local_1c0[0xd] = jpeglibNamespace::skip_variable;
  local_1c0[0xe] = jpeglibNamespace::skip_variable;
  local_1c0[0xf] = jpeglibNamespace::skip_variable;
  local_1c0[0x10] = jpeglibNamespace::skip_variable;
  *(undefined1 (*) [16])(local_1c0 + 0x1a) = (undefined1  [16])0x0;
  local_1c0[0x11] = jpeglibNamespace::skip_variable;
  local_1c0[0x12] = jpeglibNamespace::skip_variable;
  local_1c0[0x13] = jpeglibNamespace::skip_variable;
  *(undefined1 (*) [16])(local_1c0 + 0x1c) = (undefined1  [16])0x0;
  local_1c0[0x15] = jpeglibNamespace::skip_variable;
  *(undefined4 *)(local_1c0 + 0x1e) = 0;
  local_1c0[6] = jpeglibNamespace::get_interesting_appn;
  local_1c0[0x14] = jpeglibNamespace::get_interesting_appn;
  local_2e8 = 0;
  local_36c = 0;
  local_1ec = 0;
  *(undefined2 *)(local_1c0 + 3) = 0;
  *(undefined4 *)(local_1c0 + 4) = 0;
  local_1c0[0x1f] = 0;
  local_1c8 = (undefined8 *)(*(code *)*local_400)(&local_408,0,0x30);
  *local_1c8 = jpeglibNamespace::consume_markers;
  local_1c8[1] = jpeglibNamespace::reset_input_controller;
  local_1c8[2] = jpeglibNamespace::start_input_pass;
  local_1c8[3] = jpeglibNamespace::finish_input_pass;
  *(undefined2 *)(local_1c8 + 4) = 0;
  *(undefined4 *)(local_1c8 + 5) = 1;
  local_3e4 = 200;
  local_3e0 = (long *)(*(code *)*local_400)(&local_408,0,0x38);
  uVar14 = local_3e4;
  ppcVar10 = local_408;
  local_429 = '\0';
  local_3f0 = &local_429;
  local_3e0[2] = (long)JPEGHelpers::dummyCallback1;
  local_3e0[3] = (long)JPEGHelpers::jpegFill;
  local_3e0[4] = (long)JPEGHelpers::jpegSkip;
  local_3e0[5] = (long)jpeglibNamespace::jpeg_resync_to_restart;
  local_3e0[6] = (long)JPEGHelpers::dummyCallback1;
  if (local_118 == (long *)0x0) {
    plVar15 = local_100;
  }
  else {
    plVar15 = local_118;
    if (local_f0 < (ulong)local_118[1]) {
      *(undefined1 *)(*local_118 + local_f0) = 0;
    }
  }
  *local_3e0 = *plVar15;
  local_3e0[1] = local_f0;
  if ((local_3e4 & 0xfffffffe) != 200) {
    *(undefined4 *)(local_408 + 5) = 0x15;
    *(uint *)((long)ppcVar10 + 0x2c) = uVar14;
                    /* try { // try from 00356a7c to 00356c13 has its CatchHandler @ 00359d0b */
    (**ppcVar10)(&local_408);
  }
  if (local_3e4 - 200 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x00356aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar15 = (long *)(*(code *)((long)&DAT_005df5ac + (long)(int)(&DAT_005df5ac)[local_3e4 - 200]))
                                ();
    return plVar15;
  }
  *(undefined4 *)(local_408 + 5) = 0x15;
  *(uint *)((long)local_408 + 0x2c) = local_3e4;
  (**local_408)(&local_408);
  if ((local_429 != '\0') ||
     (jpeglibNamespace::jpeg_calc_output_dimensions((long *)&local_408), local_429 != '\0'))
  goto LAB_00356bff;
  local_180 = (ulong)local_394;
  local_178 = (ulong)local_390;
  local_3c8 = 2;
                    /* try { // try from 00356cc9 to 00356d8a has its CatchHandler @ 00359ce2 */
  local_188 = param_1;
  local_140 = param_3;
  local_138 = (undefined8 *)(*(code *)local_400[2])(&local_408,1,local_394 * 3,1);
  if (local_3e4 == 0xcc) goto LAB_003587a5;
  if (local_3e4 == 0xcb) goto LAB_003586eb;
  if (local_3e4 != 0xca) {
    *(undefined4 *)(local_408 + 5) = 0x15;
    *(uint *)((long)local_408 + 0x2c) = local_3e4;
    (**local_408)(&local_408);
    goto LAB_00358779;
  }
  local_418 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x30);
  *local_418 = jpeglibNamespace::prepare_for_output_pass;
  local_418[1] = jpeglibNamespace::finish_output_pass;
  *(undefined1 *)(local_418 + 2) = 0;
  local_1e8 = local_418;
  if (local_2f0 != 8) {
    *(undefined4 *)(local_408 + 5) = 0x10;
    *(int *)((long)local_408 + 0x2c) = local_2f0;
    (**local_408)(&local_408);
  }
  jpeglibNamespace::jpeg_calc_output_dimensions((long *)&local_408);
  pvVar16 = (void *)(*(code *)*local_400)(&local_408,1,0x500);
  memset(pvVar16,0,0x200);
  uVar17 = _UNK_005dd428;
  local_270 = (long)pvVar16 + 0x200;
  *(undefined8 *)((long)pvVar16 + 0x200) = _DAT_005dd420;
  *(undefined8 *)((long)pvVar16 + 0x208) = uVar17;
  uVar17 = _UNK_005dd438;
  *(undefined8 *)((long)pvVar16 + 0x210) = _DAT_005dd430;
  *(undefined8 *)((long)pvVar16 + 0x218) = uVar17;
  uVar17 = _UNK_005dd448;
  *(undefined8 *)((long)pvVar16 + 0x220) = _DAT_005dd440;
  *(undefined8 *)((long)pvVar16 + 0x228) = uVar17;
  uVar17 = _UNK_005dd458;
  *(undefined8 *)((long)pvVar16 + 0x230) = _DAT_005dd450;
  *(undefined8 *)((long)pvVar16 + 0x238) = uVar17;
  uVar17 = _UNK_005dd468;
  *(undefined8 *)((long)pvVar16 + 0x240) = _DAT_005dd460;
  *(undefined8 *)((long)pvVar16 + 0x248) = uVar17;
  uVar17 = _UNK_005dd478;
  *(undefined8 *)((long)pvVar16 + 0x250) = _DAT_005dd470;
  *(undefined8 *)((long)pvVar16 + 600) = uVar17;
  uVar17 = _UNK_005dd488;
  *(undefined8 *)((long)pvVar16 + 0x260) = _DAT_005dd480;
  *(undefined8 *)((long)pvVar16 + 0x268) = uVar17;
  uVar17 = _UNK_005dd498;
  *(undefined8 *)((long)pvVar16 + 0x270) = _DAT_005dd490;
  *(undefined8 *)((long)pvVar16 + 0x278) = uVar17;
  uVar17 = _UNK_005dd4a8;
  *(undefined8 *)((long)pvVar16 + 0x280) = _DAT_005dd4a0;
  *(undefined8 *)((long)pvVar16 + 0x288) = uVar17;
  uVar17 = _UNK_005dd4b8;
  *(undefined8 *)((long)pvVar16 + 0x290) = _DAT_005dd4b0;
  *(undefined8 *)((long)pvVar16 + 0x298) = uVar17;
  uVar17 = _UNK_005dd4c8;
  *(undefined8 *)((long)pvVar16 + 0x2a0) = _DAT_005dd4c0;
  *(undefined8 *)((long)pvVar16 + 0x2a8) = uVar17;
  uVar17 = _UNK_005dd4d8;
  *(undefined8 *)((long)pvVar16 + 0x2b0) = _DAT_005dd4d0;
  *(undefined8 *)((long)pvVar16 + 0x2b8) = uVar17;
  uVar17 = _UNK_005dd4e8;
  *(undefined8 *)((long)pvVar16 + 0x2c0) = _DAT_005dd4e0;
  *(undefined8 *)((long)pvVar16 + 0x2c8) = uVar17;
  uVar17 = _UNK_005dd4f8;
  *(undefined8 *)((long)pvVar16 + 0x2d0) = _DAT_005dd4f0;
  *(undefined8 *)((long)pvVar16 + 0x2d8) = uVar17;
  uVar17 = _UNK_005dd508;
  *(undefined8 *)((long)pvVar16 + 0x2e0) = _DAT_005dd500;
  *(undefined8 *)((long)pvVar16 + 0x2e8) = uVar17;
  uVar17 = _UNK_005dd518;
  *(undefined8 *)((long)pvVar16 + 0x2f0) = _DAT_005dd510;
  *(undefined8 *)((long)pvVar16 + 0x2f8) = uVar17;
  memset((void *)((long)pvVar16 + 0x300),0xff,0x200);
  if (((local_390 == 0) || (local_394 == 0)) || ((int)local_38c < 1)) {
    *(undefined4 *)(local_408 + 5) = 0x21;
                    /* try { // try from 00356ed3 to 00356fca has its CatchHandler @ 00359ce2 */
    (**local_408)(&local_408);
  }
  if ((long)(int)local_38c * (ulong)local_394 >> 0x20 != 0) {
    *(undefined4 *)(local_408 + 5) = 0x48;
    (**local_408)(&local_408);
  }
  puVar46 = local_418;
  *(undefined4 *)(local_418 + 3) = 0;
  uVar17 = jpeglibNamespace::use_merged_upsample((long)&local_408);
  *(char *)((long)puVar46 + 0x1c) = (char)uVar17;
  *(undefined1 (*) [16])(puVar46 + 4) = (undefined1  [16])0x0;
  if (local_3a6 == '\0') {
    local_398 = 0;
    local_396 = '\0';
  }
  else {
    if (local_3b0 == '\0') {
      local_398 = 0;
      local_396 = '\0';
    }
    if (cStack_3af != '\0') {
      *(undefined4 *)(local_408 + 5) = 0x30;
      (**local_408)(&local_408);
    }
    if (local_38c == 3) {
      if (local_378 == 0) {
        if (local_3a0 == '\0') {
          local_398 = CONCAT11(local_398._1_1_,1);
        }
        else {
          local_396 = '\x01';
        }
      }
      else {
        local_398 = CONCAT11(1,(char)local_398);
      }
    }
    else {
      local_398 = 1;
      local_396 = '\0';
      local_378 = 0;
    }
    if ((char)local_398 != '\0') {
                    /* try { // try from 00357111 to 00357395 has its CatchHandler @ 00359ce2 */
      auVar96 = (*(code *)*local_400)(&local_408,1,0x98);
      local_198 = auVar96._0_8_;
      *local_198 = jpeglibNamespace::start_pass_1_quant;
      local_198[2] = jpeglibNamespace::finish_pass_1_quant;
      local_198[3] = jpeglibNamespace::new_color_map_1_quant;
      local_198[0xe] = 0;
      local_198[10] = 0;
      if (4 < (int)local_38c) {
        local_408[5] = (code *)0x400000039;
        (**local_408)(&local_408);
        auVar96._8_8_ = extraout_RDX;
        auVar96._0_8_ = local_198;
      }
      local_198 = auVar96._0_8_;
      if (0x100 < (int)local_39c) {
        local_408[5] = (code *)0x1000000003b;
        (**local_408)(&local_408);
        auVar96._8_8_ = extraout_RDX_00;
        auVar96._0_8_ = local_198;
      }
      uVar14 = local_38c;
      uVar26 = auVar96._8_8_;
      local_198 = auVar96._0_8_;
      local_190 = local_198;
      uVar18 = (ulong)local_38c;
      uVar49 = (ulong)(int)local_39c;
      if ((int)local_38c < 2) {
        uVar34 = 1;
        if (1 < (long)uVar49) {
          uVar34 = uVar49;
        }
        uVar43 = uVar34 + 1;
      }
      else {
        uVar29 = local_38c - 1 & 7;
        uVar38 = (local_38c - 9 >> 3) + 1;
        uVar26 = 1;
        do {
          uVar34 = uVar26;
          uVar26 = uVar34 + 1;
          uVar43 = uVar26;
          if (6 < local_38c - 2) {
            if (7 < local_38c - 9) {
              uVar33 = uVar38 & 0xfffffffe;
              do {
                uVar43 = uVar43 * uVar26 * uVar26 * uVar26 * uVar26 * uVar26 * uVar26 * uVar26 *
                         uVar26 * uVar26 * uVar26 * uVar26 * uVar26 * uVar26 * uVar26 * uVar26 *
                         uVar26;
                uVar33 = uVar33 - 2;
              } while (uVar33 != 0);
            }
            if ((uVar38 & 1) != 0) {
              uVar43 = uVar43 * uVar26 * uVar26 * uVar26 * uVar26 * uVar26 * uVar26 * uVar26 *
                       uVar26;
            }
          }
          if (uVar29 != 0) {
            uVar33 = uVar29;
            do {
              uVar43 = uVar43 * uVar26;
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
        } while ((long)uVar43 <= (long)uVar49);
      }
      uVar29 = (uint)uVar34;
      if (uVar29 < 2) {
        *(undefined4 *)(local_408 + 5) = 0x3a;
        *(int *)((long)local_408 + 0x2c) = (int)uVar43;
        (**local_408)();
        uVar26 = extraout_RDX_01;
      }
      if ((int)uVar14 < 1) {
        local_41c = 1;
      }
      else {
        if (7 < uVar14) {
          uVar26 = (ulong)(uVar14 & 0xfffffff8);
          uVar39 = (uVar26 - 8 >> 3) + 1;
          uVar43 = (ulong)((uint)uVar39 & 3);
          if (uVar26 - 8 < 0x18) {
            lVar40 = 0;
            auVar52 = _DAT_0065a040;
            auVar58 = _DAT_0065a040;
          }
          else {
            uVar39 = uVar39 & 0xfffffffffffffffc;
            lVar40 = 0;
            auVar52 = _DAT_0065a040;
            auVar58 = _DAT_0065a040;
            do {
              puVar36 = (uint *)((long)local_190 + lVar40 * 4 + 0x3c);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              puVar36 = (uint *)((long)local_190 + lVar40 * 4 + 0x4c);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              uVar38 = auVar52._4_4_;
              auVar68._4_4_ = uVar38;
              auVar68._0_4_ = uVar38;
              auVar68._8_4_ = auVar52._12_4_;
              auVar68._12_4_ = auVar52._12_4_;
              uVar55 = auVar52._8_8_;
              uVar33 = auVar58._4_4_;
              auVar65._4_4_ = uVar33;
              auVar65._0_4_ = uVar33;
              auVar65._8_4_ = auVar58._12_4_;
              auVar65._12_4_ = auVar58._12_4_;
              uVar63 = auVar58._8_8_;
              puVar36 = (uint *)((long)local_190 + lVar40 * 4 + 0x5c);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              puVar36 = (uint *)((long)local_190 + lVar40 * 4 + 0x6c);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              puVar36 = (uint *)((long)local_190 + lVar40 * 4 + 0x7c);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              puVar36 = (uint *)((long)local_190 + lVar40 * 4 + 0x8c);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              puVar36 = (uint *)((long)local_190 + lVar40 * 4 + 0x9c);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              puVar36 = (uint *)((long)local_190 + lVar40 * 4 + 0xac);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              auVar52._0_4_ =
                   (undefined4)
                   (((((ulong)auVar52._0_4_ * (uVar34 & 0xffffffff) & 0xffffffff) *
                      (uVar34 & 0xffffffff) & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff) *
                   (uVar34 & 0xffffffff));
              auVar53._8_4_ =
                   (undefined4)
                   (((((uVar55 & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff) *
                      (uVar34 & 0xffffffff) & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff) *
                   (uVar34 & 0xffffffff));
              auVar53._4_4_ = auVar53._8_4_;
              auVar53._0_4_ = auVar52._0_4_;
              auVar53._12_4_ =
                   (int)(((((auVar68._8_8_ & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff) *
                           (uVar34 & 0xffffffff) & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff)
                        * (uVar34 & 0xffffffff));
              auVar52._8_8_ = auVar53._8_8_;
              auVar52._4_4_ =
                   (int)(((((ulong)uVar38 * (uVar34 & 0xffffffff) & 0xffffffff) *
                           (uVar34 & 0xffffffff) & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff)
                        * (uVar34 & 0xffffffff));
              auVar58._0_4_ =
                   (undefined4)
                   (((((ulong)auVar58._0_4_ * (uVar34 & 0xffffffff) & 0xffffffff) *
                      (uVar34 & 0xffffffff) & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff) *
                   (uVar34 & 0xffffffff));
              auVar59._8_4_ =
                   (undefined4)
                   (((((uVar63 & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff) *
                      (uVar34 & 0xffffffff) & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff) *
                   (uVar34 & 0xffffffff));
              auVar59._4_4_ = auVar59._8_4_;
              auVar59._0_4_ = auVar58._0_4_;
              auVar59._12_4_ =
                   (int)(((((auVar65._8_8_ & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff) *
                           (uVar34 & 0xffffffff) & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff)
                        * (uVar34 & 0xffffffff));
              auVar58._8_8_ = auVar59._8_8_;
              auVar58._4_4_ =
                   (int)(((((ulong)uVar33 * (uVar34 & 0xffffffff) & 0xffffffff) *
                           (uVar34 & 0xffffffff) & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff)
                        * (uVar34 & 0xffffffff));
              lVar40 = lVar40 + 0x20;
              uVar39 = uVar39 - 4;
            } while (uVar39 != 0);
          }
          if (uVar43 != 0) {
            lVar30 = 0;
            do {
              puVar36 = (uint *)((long)local_190 + lVar30 + lVar40 * 4 + 0x3c);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              puVar36 = (uint *)((long)local_190 + lVar30 + lVar40 * 4 + 0x4c);
              *puVar36 = uVar29;
              puVar36[1] = uVar29;
              puVar36[2] = uVar29;
              puVar36[3] = uVar29;
              uVar38 = auVar52._4_4_;
              auVar66._4_4_ = uVar38;
              auVar66._0_4_ = uVar38;
              auVar66._8_4_ = auVar52._12_4_;
              auVar66._12_4_ = auVar52._12_4_;
              uVar39 = auVar52._8_8_;
              auVar52._0_4_ = (undefined4)((ulong)auVar52._0_4_ * (uVar34 & 0xffffffff));
              auVar54._8_4_ = (undefined4)((uVar39 & 0xffffffff) * (uVar34 & 0xffffffff));
              auVar54._4_4_ = auVar54._8_4_;
              auVar54._0_4_ = auVar52._0_4_;
              auVar54._12_4_ = (int)((auVar66._8_8_ & 0xffffffff) * (uVar34 & 0xffffffff));
              auVar52._8_8_ = auVar54._8_8_;
              auVar52._4_4_ = (int)((ulong)uVar38 * (uVar34 & 0xffffffff));
              uVar38 = auVar58._4_4_;
              auVar67._4_4_ = uVar38;
              auVar67._0_4_ = uVar38;
              auVar67._8_4_ = auVar58._12_4_;
              auVar67._12_4_ = auVar58._12_4_;
              uVar39 = auVar58._8_8_;
              auVar58._0_4_ = (undefined4)((ulong)auVar58._0_4_ * (uVar34 & 0xffffffff));
              auVar60._8_4_ = (undefined4)((uVar39 & 0xffffffff) * (uVar34 & 0xffffffff));
              auVar60._4_4_ = auVar60._8_4_;
              auVar60._0_4_ = auVar58._0_4_;
              auVar60._12_4_ = (int)((auVar67._8_8_ & 0xffffffff) * (uVar34 & 0xffffffff));
              auVar58._8_8_ = auVar60._8_8_;
              auVar58._4_4_ = (int)((ulong)uVar38 * (uVar34 & 0xffffffff));
              lVar30 = lVar30 + 0x20;
            } while (uVar43 * 0x20 != lVar30);
          }
          uVar43 = (((ulong)auVar58._12_4_ * (ulong)auVar52._12_4_ & 0xffffffff) *
                    ((ulong)auVar58._4_4_ * (ulong)auVar52._4_4_ & 0xffffffff) & 0xffffffff) *
                   (((auVar58._8_8_ & 0xffffffff) * (ulong)auVar52._8_4_ & 0xffffffff) *
                    ((ulong)auVar58._0_4_ * (ulong)auVar52._0_4_ & 0xffffffff) & 0xffffffff);
          uVar34 = uVar43 & 0xffffffff;
          local_41c = (uint)uVar43;
          goto joined_r0x003575e8;
        }
        uVar34 = 1;
        uVar26 = 0;
        do {
          *(uint *)((long)local_190 + uVar26 * 4 + 0x3c) = uVar29;
          local_41c = (int)uVar34 * uVar29;
          uVar34 = (ulong)local_41c;
          uVar26 = uVar26 + 1;
joined_r0x003575e8:
        } while (uVar26 != uVar18);
        if (local_3c8 == 2) {
          piVar42 = (int *)(local_190 + 8);
          iVar22 = *piVar42;
          uVar26 = (long)(int)local_41c % (long)iVar22 & 0xffffffff;
          lVar40 = (long)iVar22 + 1;
          uVar18 = ((int)local_41c / iVar22) * lVar40;
          if ((long)uVar18 <= (long)uVar49) {
            uVar34 = 0;
            piVar25 = piVar42;
LAB_0035765b:
            do {
              *piVar25 = (int)lVar40;
              local_41c = (uint)uVar18;
              if (uVar34 != uVar14 - 1) {
                lVar30 = uVar34 * 4;
                uVar34 = uVar34 + 1;
                iVar22 = *(int *)((long)local_190 +
                                 (long)*(int *)(jpeglibNamespace::
                                                select_ncolors(juce::jpeglibNamespace::jpeg_decompress_struct*,int*)
                                                ::RGB_order + lVar30 + 4) * 4 + 0x3c);
                lVar40 = (long)iVar22 + 1;
                uVar18 = lVar40 * (int)((long)((ulong)(uint)((int)local_41c >> 0x1f) << 0x20 |
                                              uVar18 & 0xffffffff) / (long)iVar22);
                piVar25 = (int *)((long)local_190 +
                                 (long)*(int *)(jpeglibNamespace::
                                                select_ncolors(juce::jpeglibNamespace::jpeg_decompress_struct*,int*)
                                                ::RGB_order + lVar30 + 4) * 4 + 0x3c);
                if ((long)uVar18 <= (long)uVar49) goto LAB_0035765b;
              }
              iVar22 = *piVar42;
              uVar26 = (long)(int)local_41c % (long)iVar22 & 0xffffffff;
              lVar40 = (long)iVar22 + 1;
              uVar18 = lVar40 * ((int)local_41c / iVar22);
              uVar34 = 0;
              piVar25 = piVar42;
            } while ((long)uVar18 <= (long)uVar49);
          }
        }
        else {
          piVar42 = (int *)((long)local_190 + 0x3c);
          iVar22 = *piVar42;
          uVar26 = (long)(int)local_41c % (long)iVar22 & 0xffffffff;
          lVar40 = (long)iVar22 + 1;
          uVar18 = ((int)local_41c / iVar22) * lVar40;
          if ((long)uVar18 <= (long)uVar49) {
            uVar34 = 0;
            piVar25 = piVar42;
LAB_0035913f:
            do {
              *piVar25 = (int)lVar40;
              local_41c = (uint)uVar18;
              if (uVar34 != uVar14 - 1) {
                uVar34 = uVar34 + 1;
                iVar22 = *(int *)((long)local_190 + uVar34 * 4 + 0x3c);
                lVar40 = (long)iVar22 + 1;
                uVar18 = lVar40 * (int)((long)((ulong)(uint)((int)local_41c >> 0x1f) << 0x20 |
                                              uVar18 & 0xffffffff) / (long)iVar22);
                piVar25 = (int *)((long)local_190 + uVar34 * 4 + 0x3c);
                if ((long)uVar18 <= (long)uVar49) goto LAB_0035913f;
              }
              iVar22 = *piVar42;
              uVar26 = (long)(int)local_41c % (long)iVar22 & 0xffffffff;
              lVar40 = (long)iVar22 + 1;
              uVar18 = lVar40 * ((int)local_41c / iVar22);
              uVar34 = 0;
              piVar25 = piVar42;
            } while ((long)uVar18 <= (long)uVar49);
          }
        }
      }
      *(uint *)((long)local_408 + 0x2c) = local_41c;
      uVar13 = 0x61;
      if (local_38c == 3) {
        *(undefined4 *)(local_408 + 6) = *(undefined4 *)((long)local_190 + 0x3c);
        *(undefined4 *)((long)local_408 + 0x34) = *(undefined4 *)(local_190 + 8);
        *(undefined4 *)(local_408 + 7) = *(undefined4 *)((long)local_190 + 0x44);
        uVar13 = 0x60;
      }
      *(undefined4 *)(local_408 + 5) = uVar13;
                    /* try { // try from 003576e8 to 003578a7 has its CatchHandler @ 00359ce2 */
      (*local_408[1])(&local_408,1,uVar26);
      lVar40 = (*(code *)local_400[2])(&local_408,1,local_41c,local_38c);
      if (0 < (int)local_38c) {
        lVar30 = 0;
        uVar26 = (ulong)local_41c;
        do {
          uVar14 = *(uint *)((long)local_190 + lVar30 * 4 + 0x3c);
          local_428 = (undefined8 *)(ulong)uVar14;
          iVar22 = (int)uVar26;
          uVar18 = (long)iVar22 / (long)(int)uVar14;
          uVar26 = uVar18 & 0xffffffff;
          uVar29 = (uint)uVar18;
          if ((0 < (int)uVar14) && (0 < (int)uVar29)) {
            local_130 = (ulong)(uVar14 - 1);
            local_e0 = (ulong)(uVar14 - 1 >> 1);
            puVar46 = (undefined8 *)0x0;
            iVar48 = 0;
            do {
              if ((int)(uVar29 * (int)puVar46) < (int)local_41c) {
                uVar49 = (long)puVar46 * 0xff + local_e0;
                if (uVar49 >> 0x20 == 0) {
                  uVar12 = (undefined1)((uVar49 & 0xffffffff) / local_130);
                }
                else {
                  uVar12 = (undefined1)(uVar49 / local_130);
                }
                lVar27 = (long)iVar48;
                do {
                  uVar49 = 0;
                  if (2 < (uVar18 & 0xffffffff) - 1) {
                    do {
                      *(undefined1 *)(uVar49 + *(long *)(lVar40 + lVar30 * 8) + lVar27) = uVar12;
                      *(undefined1 *)(uVar49 + 1 + *(long *)(lVar40 + lVar30 * 8) + lVar27) = uVar12
                      ;
                      *(undefined1 *)(uVar49 + 2 + *(long *)(lVar40 + lVar30 * 8) + lVar27) = uVar12
                      ;
                      *(undefined1 *)(uVar49 + 3 + *(long *)(lVar40 + lVar30 * 8) + lVar27) = uVar12
                      ;
                      uVar49 = uVar49 + 4;
                    } while ((uVar29 & 0xfffffffc) != uVar49);
                  }
                  if ((ulong)(uVar29 & 3) != 0) {
                    lVar45 = uVar49 + lVar27;
                    uVar49 = (ulong)(uVar29 & 3);
                    do {
                      *(undefined1 *)(*(long *)(lVar40 + lVar30 * 8) + lVar45) = uVar12;
                      lVar45 = lVar45 + 1;
                      uVar49 = uVar49 - 1;
                    } while (uVar49 != 0);
                  }
                  lVar27 = lVar27 + iVar22;
                } while (lVar27 < (int)local_41c);
              }
              puVar46 = (undefined8 *)((long)puVar46 + 1);
              iVar48 = iVar48 + uVar29;
            } while (puVar46 != local_428);
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 < (int)local_38c);
      }
      local_190[4] = lVar40;
      *(uint *)(local_190 + 5) = local_41c;
      jpeglibNamespace::create_colorindex((long)&local_408);
      puVar46 = local_198;
      if ((local_3a4 == 2) && (0 < (int)local_38c)) {
        uVar26 = (ulong)local_394;
        lVar40 = 0;
        do {
                    /* try { // try from 003578df to 003578ec has its CatchHandler @ 00359cc0 */
          uVar17 = (*(code *)local_400[1])(&local_408,1,uVar26 * 2 + 4);
          puVar46[lVar40 + 0xe] = uVar17;
          lVar40 = lVar40 + 1;
        } while (lVar40 < (int)local_38c);
      }
      local_418[4] = local_198;
    }
    if (local_396 != '\0' || local_398._1_1_ != '\0') {
                    /* try { // try from 00357930 to 00358077 has its CatchHandler @ 00359ce2 */
      puVar46 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x58);
      *puVar46 = jpeglibNamespace::start_pass_2_quant;
      puVar46[3] = jpeglibNamespace::new_color_map_2_quant;
      puVar46[8] = 0;
      puVar46[10] = 0;
      local_198 = puVar46;
      if (local_38c != 3) {
        *(undefined4 *)(local_408 + 5) = 0x30;
        (**local_408)(&local_408);
      }
      uVar17 = (*(code *)*local_400)(&local_408,1,0x100);
      puVar46[6] = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      plVar15 = puVar46 + 6;
      *(undefined8 *)*plVar15 = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 8) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x10) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x18) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x20) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x28) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x30) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x38) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x40) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x48) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x50) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x58) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x60) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x68) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x70) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x78) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x80) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x88) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x90) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0x98) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xa0) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xa8) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xb0) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xb8) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xc0) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 200) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xd0) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xd8) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xe0) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xe8) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(*plVar15 + 0xf0) = uVar17;
      uVar17 = (*(code *)local_400[1])(&local_408,1,0x1000);
      *(undefined8 *)(puVar46[6] + 0xf8) = uVar17;
      *(undefined1 *)(puVar46 + 7) = 1;
      if (local_396 == '\0') {
        puVar46[4] = 0;
      }
      else {
        if ((int)local_39c < 8) {
          uVar13 = 8;
          uVar21 = 0x3a;
LAB_00357de2:
          *(undefined4 *)(local_408 + 5) = uVar21;
          *(undefined4 *)((long)local_408 + 0x2c) = uVar13;
          (**local_408)(&local_408);
        }
        else if (0x100 < local_39c) {
          uVar13 = 0x100;
          uVar21 = 0x3b;
          goto LAB_00357de2;
        }
        uVar17 = (*(code *)local_400[2])(&local_408,1,local_39c,3);
        puVar46[4] = uVar17;
        *(uint *)(puVar46 + 5) = local_39c;
      }
      if (local_3a4 != 0) {
        local_3a4 = 2;
        uVar17 = (*(code *)local_400[1])(&local_408,1,(ulong)local_394 * 6 + 0xc);
        puVar35 = local_198;
        puVar46[8] = uVar17;
        lVar40 = (*(code *)*local_400)(&local_408,1,0x7fc);
        puVar35[10] = lVar40 + 0x3fc;
        uVar17 = _UNK_005dd528;
        *(undefined8 *)(lVar40 + 0x3f0) = _DAT_005dd520;
        *(undefined8 *)(lVar40 + 0x3f8) = uVar17;
        uVar17 = _UNK_005dd538;
        *(undefined8 *)(lVar40 + 0x400) = _DAT_005dd530;
        *(undefined8 *)(lVar40 + 0x408) = uVar17;
        uVar17 = _UNK_005dd548;
        *(undefined8 *)(lVar40 + 0x3e0) = _DAT_005dd540;
        *(undefined8 *)(lVar40 + 1000) = uVar17;
        uVar17 = _UNK_005dd558;
        *(undefined8 *)(lVar40 + 0x410) = _DAT_005dd550;
        *(undefined8 *)(lVar40 + 0x418) = uVar17;
        uVar17 = _UNK_005dd568;
        *(undefined8 *)(lVar40 + 0x3d0) = _DAT_005dd560;
        *(undefined8 *)(lVar40 + 0x3d8) = uVar17;
        uVar17 = _UNK_005dd578;
        *(undefined8 *)(lVar40 + 0x420) = _DAT_005dd570;
        *(undefined8 *)(lVar40 + 0x428) = uVar17;
        uVar17 = _UNK_005dd588;
        *(undefined8 *)(lVar40 + 0x3c0) = _DAT_005dd580;
        *(undefined8 *)(lVar40 + 0x3c8) = uVar17;
        uVar17 = _UNK_005dd598;
        *(undefined8 *)(lVar40 + 0x430) = _DAT_005dd590;
        *(undefined8 *)(lVar40 + 0x438) = uVar17;
        uVar17 = _UNK_005dd5a8;
        *(undefined8 *)(lVar40 + 0x3b0) = _DAT_005dd5a0;
        *(undefined8 *)(lVar40 + 0x3b8) = uVar17;
        uVar17 = _UNK_005dd5b8;
        *(undefined8 *)(lVar40 + 0x440) = _DAT_005dd5b0;
        *(undefined8 *)(lVar40 + 0x448) = uVar17;
        uVar17 = _UNK_005dd5c8;
        *(undefined8 *)(lVar40 + 0x3a0) = _DAT_005dd5c0;
        *(undefined8 *)(lVar40 + 0x3a8) = uVar17;
        uVar17 = _UNK_005dd5d8;
        *(undefined8 *)(lVar40 + 0x450) = _DAT_005dd5d0;
        *(undefined8 *)(lVar40 + 0x458) = uVar17;
        uVar17 = _UNK_005dd5e8;
        *(undefined8 *)(lVar40 + 0x390) = _DAT_005dd5e0;
        *(undefined8 *)(lVar40 + 0x398) = uVar17;
        uVar17 = _UNK_005dd5f8;
        *(undefined8 *)(lVar40 + 0x460) = _DAT_005dd5f0;
        *(undefined8 *)(lVar40 + 0x468) = uVar17;
        uVar17 = _UNK_005dd608;
        *(undefined8 *)(lVar40 + 0x380) = _DAT_005dd600;
        *(undefined8 *)(lVar40 + 0x388) = uVar17;
        uVar17 = _UNK_005dd618;
        *(undefined8 *)(lVar40 + 0x470) = _DAT_005dd610;
        *(undefined8 *)(lVar40 + 0x478) = uVar17;
        uVar17 = _UNK_005dd628;
        *(undefined8 *)(lVar40 + 0x370) = _DAT_005dd620;
        *(undefined8 *)(lVar40 + 0x378) = uVar17;
        uVar17 = _UNK_005dd638;
        *(undefined8 *)(lVar40 + 0x480) = _DAT_005dd630;
        *(undefined8 *)(lVar40 + 0x488) = uVar17;
        uVar17 = _UNK_005dd648;
        *(undefined8 *)(lVar40 + 0x360) = _DAT_005dd640;
        *(undefined8 *)(lVar40 + 0x368) = uVar17;
        uVar17 = _UNK_005dd658;
        *(undefined8 *)(lVar40 + 0x490) = _DAT_005dd650;
        *(undefined8 *)(lVar40 + 0x498) = uVar17;
        uVar17 = _UNK_005dd668;
        *(undefined8 *)(lVar40 + 0x350) = _DAT_005dd660;
        *(undefined8 *)(lVar40 + 0x358) = uVar17;
        uVar17 = _UNK_005dd678;
        *(undefined8 *)(lVar40 + 0x4a0) = _DAT_005dd670;
        *(undefined8 *)(lVar40 + 0x4a8) = uVar17;
        *(undefined8 *)(lVar40 + 0x4b0) = 0x1f0000001e;
        *(undefined4 *)(lVar40 + 0x4b8) = 0x1f;
        uVar17 = _UNK_005dd688;
        *(undefined8 *)(lVar40 + 0x340) = _DAT_005dd680;
        *(undefined8 *)(lVar40 + 0x348) = uVar17;
        puVar23 = (undefined4 *)(lVar40 + 0x4c8);
        lVar30 = 0;
        do {
          puVar23[-3] = 0x20;
          *(undefined4 *)(lVar40 + 0x33c + lVar30 * 4) = 0xffffffe0;
          puVar23[-2] = 0x20;
          *(undefined4 *)(lVar40 + 0x338 + lVar30 * 4) = 0xffffffe0;
          puVar23[-1] = 0x20;
          *(undefined4 *)(lVar40 + 0x334 + lVar30 * 4) = 0xffffffe0;
          *puVar23 = 0x20;
          *(undefined4 *)(lVar40 + 0x330 + lVar30 * 4) = 0xffffffe0;
          lVar30 = lVar30 + -4;
          puVar23 = puVar23 + 4;
        } while (lVar30 != -0xd0);
      }
      local_418[5] = local_198;
    }
  }
  if (cStack_3af != '\0') goto LAB_00358062;
  if (*(char *)((long)local_418 + 0x1c) != '\0') {
    puVar46 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x58);
    *puVar46 = jpeglibNamespace::start_pass_merged_upsample;
    *(undefined1 *)(puVar46 + 2) = 0;
    *(uint *)((long)puVar46 + 0x4c) = local_38c * local_394;
    local_1a8 = puVar46;
    if (local_284 == 2) {
      puVar46[1] = jpeglibNamespace::merged_2v_upsample;
      puVar46[3] = jpeglibNamespace::h2v2_merged_upsample;
      uVar17 = (*(code *)local_400[1])(&local_408,1,local_38c * local_394);
    }
    else {
      puVar46[1] = jpeglibNamespace::merged_1v_upsample;
      puVar46[3] = jpeglibNamespace::h2v1_merged_upsample;
      uVar17 = 0;
    }
    puVar35 = local_1a8;
    puVar46[8] = uVar17;
                    /* try { // try from 00358fb7 to 003596bd has its CatchHandler @ 00359ce2 */
    uVar17 = (*(code *)*local_400)(&local_408,1,0x400);
    puVar35[4] = uVar17;
    uVar17 = (*(code *)*local_400)(&local_408,1,0x400);
    puVar35[5] = uVar17;
    uVar17 = (*(code *)*local_400)(&local_408,1,0x800);
    puVar35[6] = uVar17;
    lVar45 = (*(code *)*local_400)(&local_408,1,0x800);
    puVar35[7] = lVar45;
    lVar40 = puVar35[4];
    lVar30 = puVar35[5];
    lVar27 = puVar35[6];
    if (local_3cc == 7) {
      pcVar44 = pow_tilde_perform_scalar;
      lVar37 = 0xb6d180;
      lVar32 = -0x1c52200;
      lVar41 = -0x1666980;
      lVar28 = 0;
      do {
        *(int *)(lVar40 + lVar28) = (int)((ulong)lVar41 >> 0x10);
        *(int *)(lVar30 + lVar28) = (int)((ulong)lVar32 >> 0x10);
        *(long *)(lVar27 + lVar28 * 2) = lVar37;
        *(code **)(lVar45 + lVar28 * 2) = pcVar44;
        lVar28 = lVar28 + 4;
        pcVar44 = pcVar44 + -0xb033;
        lVar37 = lVar37 + -0x16da3;
        lVar32 = lVar32 + 0x38b44;
        lVar41 = lVar41 + 0x2cdd3;
      } while (lVar28 != 0x400);
    }
    else {
      lVar41 = 0x2c8c80;
      puVar20 = &LAB_005b6900;
      lVar37 = -0xe25100;
      lVar28 = -0xb2f480;
      lVar32 = 0;
      do {
        *(int *)(lVar40 + lVar32) = (int)((ulong)lVar28 >> 0x10);
        *(int *)(lVar30 + lVar32) = (int)((ulong)lVar37 >> 0x10);
        *(undefined1 **)(lVar27 + lVar32 * 2) = puVar20;
        *(long *)(lVar45 + lVar32 * 2) = lVar41;
        lVar32 = lVar32 + 4;
        lVar41 = lVar41 + -0x5819;
        puVar20 = puVar20 + -0xb6d2;
        lVar37 = lVar37 + 0x1c5a2;
        lVar28 = lVar28 + 0x166e9;
      } while (lVar32 != 0x400);
    }
    goto LAB_00359821;
  }
  puVar46 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x48);
  *puVar46 = jpeglibNamespace::start_pass_dcolor;
  local_1a0 = puVar46;
  if (local_3cc < 8) {
    if ((0xccU >> (local_3cc & 0x1f) & 1) == 0) {
      if ((0x30U >> (local_3cc & 0x1f) & 1) == 0) {
        if (local_3cc != 1) goto LAB_0035918e;
        if (local_3d0 != 1) goto LAB_00359195;
      }
      else if (local_3d0 != 4) goto LAB_00359195;
    }
    else if (local_3d0 != 3) goto LAB_00359195;
  }
  else {
LAB_0035918e:
    if ((int)local_3d0 < 1) {
LAB_00359195:
      *(undefined4 *)(local_408 + 5) = 0xb;
      (**local_408)();
    }
  }
  if ((local_29c != 0) && ((local_3cc | 4) != 6)) {
    *(undefined4 *)(local_408 + 5) = 0x1c;
    (**local_408)();
  }
  puVar35 = local_1a0;
  switch(local_3c8) {
  case 1:
    local_38c = 1;
    switch(local_3cc) {
    case 1:
    case 3:
    case 7:
      puVar46[1] = jpeglibNamespace::grayscale_convert;
      if (1 < (int)local_3d0) {
        uVar26 = (ulong)local_3d0 - 1;
        uVar18 = (ulong)((uint)uVar26 & 3);
        lVar40 = 1;
        if (2 < (ulong)local_3d0 - 2) {
          puVar20 = (undefined1 *)(local_2e8 + 0x1b4);
          lVar40 = 1;
          do {
            puVar20[-0x120] = 0;
            puVar20[-0xc0] = 0;
            puVar20[-0x60] = 0;
            *puVar20 = 0;
            puVar20 = puVar20 + 0x180;
            lVar30 = lVar40 - (uVar26 & 0xfffffffffffffffc);
            lVar40 = lVar40 + 4;
          } while (lVar30 != -3);
        }
        if (uVar18 != 0) {
          lVar30 = 0;
          do {
            *(undefined1 *)(local_2e8 + lVar40 * 0x60 + 0x34 + lVar30) = 0;
            lVar30 = lVar30 + 0x60;
          } while (uVar18 * 0x60 != lVar30);
        }
      }
      break;
    case 2:
      if (local_29c == 0) {
        pcVar44 = jpeglibNamespace::rgb_gray_convert;
LAB_00359b8b:
        puVar46[1] = pcVar44;
      }
      else {
        if (local_29c == 1) {
          pcVar44 = jpeglibNamespace::rgb1_gray_convert;
          goto LAB_00359b8b;
        }
        *(undefined4 *)(local_408 + 5) = 0x1c;
        (**local_408)(&local_408);
      }
      puVar46 = local_1a0;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x800);
      puVar46[6] = uVar17;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x800);
      puVar46[7] = uVar17;
      lVar27 = (*(code *)*local_400)(&local_408,1,0x800);
      puVar46[8] = lVar27;
      lVar40 = puVar46[6];
      lVar30 = puVar46[7];
      lVar32 = 0x9d2f;
      lVar37 = 0x9646;
      lVar28 = 0x4c8b;
      lVar45 = 0;
      do {
        *(long *)(lVar40 + lVar45) = lVar28 + -0x4c8b;
        *(long *)(lVar30 + lVar45) = lVar37 + -0x9646;
        *(long *)(lVar27 + lVar45) = lVar32 + -0x1d2f;
        *(long *)(lVar40 + 8 + lVar45) = lVar28;
        *(long *)(lVar30 + 8 + lVar45) = lVar37;
        *(long *)(lVar27 + 8 + lVar45) = lVar32;
        lVar45 = lVar45 + 0x10;
        lVar32 = lVar32 + 0x3a5e;
        lVar37 = lVar37 + 0x12c8c;
        lVar28 = lVar28 + 0x9916;
      } while (lVar45 != 0x800);
      break;
    default:
      *(undefined4 *)(local_408 + 5) = 0x1c;
                    /* try { // try from 00359986 to 00359bf5 has its CatchHandler @ 00359ce2 */
      (**local_408)(&local_408);
    }
    break;
  case 2:
    local_38c = 3;
    pcVar44 = jpeglibNamespace::gray_rgb_convert;
    switch(local_3cc) {
    case 1:
      goto switchD_003592f9_caseD_1;
    case 2:
      if (local_29c == 0) goto LAB_00359903;
      if (local_29c == 1) goto LAB_00359511;
      *(undefined4 *)(local_408 + 5) = 0x1c;
      (**local_408)(&local_408);
      break;
    case 3:
      puVar46[1] = jpeglibNamespace::ycc_rgb_convert;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x400);
      puVar35[2] = uVar17;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x400);
      puVar35[3] = uVar17;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x800);
      puVar35[4] = uVar17;
      lVar45 = (*(code *)*local_400)(&local_408,1,0x800);
      puVar35[5] = lVar45;
      lVar40 = puVar35[2];
      lVar30 = puVar35[3];
      lVar27 = puVar35[4];
      lVar41 = 0x2c8c80;
      puVar20 = &LAB_005b6900;
      lVar32 = -0xe2d100;
      lVar37 = -0xb37480;
      lVar28 = 0;
      do {
        *(int *)(lVar40 + lVar28) = (int)((ulong)lVar37 >> 0x10);
        *(int *)(lVar30 + lVar28) = (int)((ulong)lVar32 >> 0x10);
        *(undefined1 **)(lVar27 + lVar28 * 2) = puVar20;
        *(long *)(lVar45 + lVar28 * 2) = lVar41;
        lVar28 = lVar28 + 4;
        lVar41 = lVar41 + -0x5819;
        puVar20 = puVar20 + -0xb6d2;
        lVar32 = lVar32 + 0x1c5a2;
        lVar37 = lVar37 + 0x166e9;
      } while (lVar28 != 0x400);
      break;
    default:
      *(undefined4 *)(local_408 + 5) = 0x1c;
      (**local_408)(&local_408);
      break;
    case 7:
      puVar46[1] = jpeglibNamespace::ycc_rgb_convert;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x400);
      puVar35[2] = uVar17;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x400);
      puVar35[3] = uVar17;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x800);
      puVar35[4] = uVar17;
      lVar45 = (*(code *)*local_400)(&local_408,1,0x800);
      puVar35[5] = lVar45;
      lVar40 = puVar35[2];
      lVar30 = puVar35[3];
      lVar27 = puVar35[4];
      pcVar44 = pow_tilde_perform_scalar;
      lVar37 = 0xb6d180;
      lVar32 = -0x1c5a200;
      lVar41 = -0x166e980;
      lVar28 = 0;
      do {
        *(int *)(lVar40 + lVar28) = (int)((ulong)lVar41 >> 0x10);
        *(int *)(lVar30 + lVar28) = (int)((ulong)lVar32 >> 0x10);
        *(long *)(lVar27 + lVar28 * 2) = lVar37;
        *(code **)(lVar45 + lVar28 * 2) = pcVar44;
        lVar28 = lVar28 + 4;
        pcVar44 = pcVar44 + -0xb033;
        lVar37 = lVar37 + -0x16da3;
        lVar32 = lVar32 + 0x38b44;
        lVar41 = lVar41 + 0x2cdd3;
      } while (lVar28 != 0x400);
    }
    break;
  default:
    goto LAB_0035949e;
  case 4:
    if (local_3cc == 5) {
      local_38c = 4;
      puVar46[1] = jpeglibNamespace::ycck_cmyk_convert;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x400);
      puVar35[2] = uVar17;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x400);
      puVar35[3] = uVar17;
      uVar17 = (*(code *)*local_400)(&local_408,1,0x800);
      puVar35[4] = uVar17;
      lVar45 = (*(code *)*local_400)(&local_408,1,0x800);
      puVar35[5] = lVar45;
      lVar40 = puVar35[2];
      lVar30 = puVar35[3];
      lVar27 = puVar35[4];
      lVar41 = 0x2c8c80;
      puVar20 = &LAB_005b6900;
      lVar32 = -0xe2d100;
      lVar37 = -0xb37480;
      lVar28 = 0;
      do {
        *(int *)(lVar40 + lVar28) = (int)((ulong)lVar37 >> 0x10);
        *(int *)(lVar30 + lVar28) = (int)((ulong)lVar32 >> 0x10);
        *(undefined1 **)(lVar27 + lVar28 * 2) = puVar20;
        *(long *)(lVar45 + lVar28 * 2) = lVar41;
        lVar28 = lVar28 + 4;
        lVar41 = lVar41 + -0x5819;
        puVar20 = puVar20 + -0xb6d2;
        lVar32 = lVar32 + 0x1c5a2;
        lVar37 = lVar37 + 0x166e9;
      } while (lVar28 != 0x400);
      break;
    }
LAB_0035949e:
    if (local_3c8 != local_3cc) {
LAB_003594a2:
      *(undefined4 *)(local_408 + 5) = 0x1c;
      (**local_408)();
    }
    uVar26 = (ulong)local_3d0;
    if ((int)local_3d0 < 1) {
      local_38c = 0;
    }
    else {
      if (local_3d0 < 8) {
        uVar18 = 0;
        local_38c = 0;
      }
      else {
        uVar18 = (ulong)(local_3d0 & 0xfffffff8);
        lVar40 = 0;
        iVar57 = 0;
        iVar61 = 0;
        iVar62 = 0;
        iVar64 = 0;
        iVar22 = 0;
        iVar48 = 0;
        iVar47 = 0;
        iVar56 = 0;
        do {
          auVar69[0] = -(*(char *)(local_2e8 + 0x34 + lVar40) == '\0');
          auVar69[1] = -((char)*(undefined4 *)(local_2e8 + 0x94 + lVar40) == '\0');
          auVar69[2] = -(*(char *)(local_2e8 + 0xf4 + lVar40) == '\0');
          auVar69[3] = -((char)*(undefined4 *)(local_2e8 + 0x154 + lVar40) == '\0');
          auVar69[4] = 0xff;
          auVar69[5] = 0xff;
          auVar69[6] = 0xff;
          auVar69[7] = 0xff;
          auVar69[8] = 0xff;
          auVar69[9] = 0xff;
          auVar69[10] = 0xff;
          auVar69[0xb] = 0xff;
          auVar69[0xc] = 0xff;
          auVar69[0xd] = 0xff;
          auVar69[0xe] = 0xff;
          auVar69[0xf] = 0xff;
          auVar3._8_4_ = 0xffffffff;
          auVar3._0_8_ = 0xffffffffffffffff;
          auVar3._12_4_ = 0xffffffff;
          auVar69 = auVar69 ^ auVar3;
          auVar77._0_14_ = auVar69._0_14_;
          auVar77[0xe] = auVar69[7];
          auVar77[0xf] = auVar69[7];
          auVar76._14_2_ = auVar77._14_2_;
          auVar76._0_13_ = auVar69._0_13_;
          auVar76[0xd] = auVar69[6];
          auVar75._13_3_ = auVar76._13_3_;
          auVar75._0_12_ = auVar69._0_12_;
          auVar75[0xc] = auVar69[6];
          auVar74._12_4_ = auVar75._12_4_;
          auVar74._0_11_ = auVar69._0_11_;
          auVar74[0xb] = auVar69[5];
          auVar73._11_5_ = auVar74._11_5_;
          auVar73._0_10_ = auVar69._0_10_;
          auVar73[10] = auVar69[5];
          auVar72._10_6_ = auVar73._10_6_;
          auVar72._0_9_ = auVar69._0_9_;
          auVar72[9] = auVar69[4];
          auVar71._9_7_ = auVar72._9_7_;
          auVar71._0_8_ = auVar69._0_8_;
          auVar71[8] = auVar69[4];
          Var7 = CONCAT91(CONCAT81(auVar71._8_8_,auVar69[3]),auVar69[3]);
          auVar6._2_10_ = Var7;
          auVar6[1] = auVar69[2];
          auVar6[0] = auVar69[2];
          auVar5._2_12_ = auVar6;
          auVar5[1] = auVar69[1];
          auVar5[0] = auVar69[1];
          auVar70._0_2_ = CONCAT11(auVar69[0],auVar69[0]);
          auVar70._2_14_ = auVar5;
          uVar82 = (undefined2)Var7;
          auVar80._0_12_ = auVar70._0_12_;
          auVar80._12_2_ = uVar82;
          auVar80._14_2_ = uVar82;
          auVar79._12_4_ = auVar80._12_4_;
          auVar79._0_10_ = auVar70._0_10_;
          auVar79._10_2_ = auVar6._0_2_;
          auVar78._10_6_ = auVar79._10_6_;
          auVar78._0_8_ = auVar70._0_8_;
          auVar78._8_2_ = auVar6._0_2_;
          auVar81._8_8_ = auVar78._8_8_;
          auVar81._6_2_ = auVar5._0_2_;
          auVar81._4_2_ = auVar5._0_2_;
          auVar81._2_2_ = auVar70._0_2_;
          auVar81._0_2_ = auVar70._0_2_;
          auVar81 = auVar81 & _DAT_0065a040;
          iVar57 = iVar57 + auVar81._0_4_;
          iVar61 = iVar61 + auVar81._4_4_;
          iVar62 = iVar62 + auVar81._8_4_;
          iVar64 = iVar64 + auVar81._12_4_;
          auVar83[0] = -(*(char *)(local_2e8 + 0x1b4 + lVar40) == '\0');
          auVar83[1] = -((char)*(undefined4 *)(local_2e8 + 0x214 + lVar40) == '\0');
          auVar83[2] = -(*(char *)(local_2e8 + 0x274 + lVar40) == '\0');
          auVar83[3] = -((char)*(undefined4 *)(local_2e8 + 0x2d4 + lVar40) == '\0');
          auVar83[4] = 0xff;
          auVar83[5] = 0xff;
          auVar83[6] = 0xff;
          auVar83[7] = 0xff;
          auVar83[8] = 0xff;
          auVar83[9] = 0xff;
          auVar83[10] = 0xff;
          auVar83[0xb] = 0xff;
          auVar83[0xc] = 0xff;
          auVar83[0xd] = 0xff;
          auVar83[0xe] = 0xff;
          auVar83[0xf] = 0xff;
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar83 = auVar83 ^ auVar4;
          auVar91._0_14_ = auVar83._0_14_;
          auVar91[0xe] = auVar83[7];
          auVar91[0xf] = auVar83[7];
          auVar90._14_2_ = auVar91._14_2_;
          auVar90._0_13_ = auVar83._0_13_;
          auVar90[0xd] = auVar83[6];
          auVar89._13_3_ = auVar90._13_3_;
          auVar89._0_12_ = auVar83._0_12_;
          auVar89[0xc] = auVar83[6];
          auVar88._12_4_ = auVar89._12_4_;
          auVar88._0_11_ = auVar83._0_11_;
          auVar88[0xb] = auVar83[5];
          auVar87._11_5_ = auVar88._11_5_;
          auVar87._0_10_ = auVar83._0_10_;
          auVar87[10] = auVar83[5];
          auVar86._10_6_ = auVar87._10_6_;
          auVar86._0_9_ = auVar83._0_9_;
          auVar86[9] = auVar83[4];
          auVar85._9_7_ = auVar86._9_7_;
          auVar85._0_8_ = auVar83._0_8_;
          auVar85[8] = auVar83[4];
          Var7 = CONCAT91(CONCAT81(auVar85._8_8_,auVar83[3]),auVar83[3]);
          auVar9._2_10_ = Var7;
          auVar9[1] = auVar83[2];
          auVar9[0] = auVar83[2];
          auVar8._2_12_ = auVar9;
          auVar8[1] = auVar83[1];
          auVar8[0] = auVar83[1];
          auVar84._0_2_ = CONCAT11(auVar83[0],auVar83[0]);
          auVar84._2_14_ = auVar8;
          uVar82 = (undefined2)Var7;
          auVar94._0_12_ = auVar84._0_12_;
          auVar94._12_2_ = uVar82;
          auVar94._14_2_ = uVar82;
          auVar93._12_4_ = auVar94._12_4_;
          auVar93._0_10_ = auVar84._0_10_;
          auVar93._10_2_ = auVar9._0_2_;
          auVar92._10_6_ = auVar93._10_6_;
          auVar92._0_8_ = auVar84._0_8_;
          auVar92._8_2_ = auVar9._0_2_;
          auVar95._8_8_ = auVar92._8_8_;
          auVar95._6_2_ = auVar8._0_2_;
          auVar95._4_2_ = auVar8._0_2_;
          auVar95._2_2_ = auVar84._0_2_;
          auVar95._0_2_ = auVar84._0_2_;
          auVar95 = auVar95 & _DAT_0065a040;
          iVar22 = iVar22 + auVar95._0_4_;
          iVar48 = iVar48 + auVar95._4_4_;
          iVar47 = iVar47 + auVar95._8_4_;
          iVar56 = iVar56 + auVar95._12_4_;
          lVar40 = lVar40 + 0x300;
        } while ((uVar26 & 0x7fffffffffffff8) * 0x60 != lVar40);
        local_38c = iVar56 + iVar64 + iVar48 + iVar61 + iVar47 + iVar62 + iVar22 + iVar57;
        if (uVar18 == uVar26) goto LAB_00359637;
      }
      lVar40 = uVar26 - uVar18;
      pcVar31 = (char *)(local_2e8 + uVar18 * 0x60 + 0x34);
      do {
        local_38c = (local_38c + 1) - (uint)(*pcVar31 == '\0');
        pcVar31 = pcVar31 + 0x60;
        lVar40 = lVar40 + -1;
      } while (lVar40 != 0);
    }
LAB_00359637:
    pcVar44 = jpeglibNamespace::null_convert;
switchD_003592f9_caseD_1:
    puVar46[1] = pcVar44;
    break;
  case 5:
    if (local_3cc != 4) goto LAB_0035949e;
    if ((((*(char *)(local_2e8 + 0x34) != '\0') && (*(char *)(local_2e8 + 0x94) == '\0')) &&
        (*(char *)(local_2e8 + 0xf4) == '\0')) && (*(char *)(local_2e8 + 0x154) != '\0')) {
      local_38c = 2;
      *(undefined1 *)(local_2e8 + 0x94) = 1;
      *(undefined1 *)(local_2e8 + 0xf4) = 1;
      puVar46[1] = jpeglibNamespace::cmyk_yk_convert;
      jpeglibNamespace::build_rgb_y_table((long)&local_408);
      break;
    }
    goto LAB_003594a2;
  case 6:
    if (local_3cc != 6) {
      *(undefined4 *)(local_408 + 5) = 0x1c;
      (**local_408)(&local_408);
    }
    local_38c = 3;
    if (local_29c == 0) {
LAB_00359903:
      local_38c = 3;
      pcVar44 = jpeglibNamespace::rgb_convert;
    }
    else {
      if (local_29c != 1) {
        *(undefined4 *)(local_408 + 5) = 0x1c;
        (**local_408)(&local_408);
        break;
      }
LAB_00359511:
      local_38c = 3;
      pcVar44 = jpeglibNamespace::rgb1_rgb_convert;
    }
    goto switchD_003592f9_caseD_1;
  }
  local_388 = 1;
  if (local_3a6 == '\0') {
    local_388 = local_38c;
  }
  puVar46 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x100);
  *puVar46 = jpeglibNamespace::start_pass_upsample;
  puVar46[1] = jpeglibNamespace::sep_upsample;
  *(undefined1 *)(puVar46 + 2) = 0;
  local_1a8 = puVar46;
  if (local_298 != '\0') {
    *(undefined4 *)(local_408 + 5) = 0x1a;
    (**local_408)(&local_408);
  }
  if (0 < (int)local_3d0) {
    pcVar31 = (char *)(local_2e8 + 0x34);
    lVar40 = 0;
    do {
      if (*pcVar31 != '\0') {
        uVar29 = (*(int *)(pcVar31 + -0x10) * *(int *)(pcVar31 + -0x2c)) / local_280;
        uVar14 = (*(int *)(pcVar31 + -0xc) * *(int *)(pcVar31 + -0x28)) / local_27c;
        *(uint *)((long)puVar46 + lVar40 * 4 + 0xc0) = uVar14;
        if ((uVar29 == local_288) && (uVar14 == local_284)) {
          puVar46[lVar40 + 0xd] = jpeglibNamespace::fullsize_upsample;
        }
        else {
          if ((uVar29 * 2 == local_288) && (uVar14 == local_284)) {
            puVar46[lVar40 + 0xd] = jpeglibNamespace::h2v1_upsample;
          }
          else if ((uVar29 * 2 == local_288) && (uVar14 * 2 == local_284)) {
            puVar46[lVar40 + 0xd] = jpeglibNamespace::h2v2_upsample;
          }
          else if (((int)local_288 % (int)uVar29 == 0) && ((int)local_284 % (int)uVar14 == 0)) {
            puVar46[lVar40 + 0xd] = jpeglibNamespace::int_upsample;
            *(char *)((long)puVar46 + lVar40 + 0xe8) = (char)((int)local_288 / (int)uVar29);
            *(char *)((long)puVar46 + lVar40 + 0xf2) = (char)((int)local_284 / (int)uVar14);
          }
          else {
            *(undefined4 *)(local_408 + 5) = 0x27;
                    /* try { // try from 00359797 to 003597f0 has its CatchHandler @ 00359cba */
            (**local_408)(&local_408);
          }
          uVar26 = (ulong)(int)local_288;
          uVar18 = (local_394 + uVar26) - 1;
          if ((uVar18 | uVar26) >> 0x20 == 0) {
            iVar22 = (int)((uVar18 & 0xffffffff) % (ulong)local_288);
          }
          else {
            iVar22 = (int)((long)uVar18 % (long)uVar26);
          }
          uVar17 = (*(code *)local_400[2])(&local_408,1,(int)uVar18 - iVar22);
          puVar46[lVar40 + 3] = uVar17;
        }
      }
      lVar40 = lVar40 + 1;
      pcVar31 = pcVar31 + 0x60;
    } while (lVar40 < (int)local_3d0);
  }
LAB_00359821:
  cVar11 = local_396;
                    /* try { // try from 0035982e to 00359921 has its CatchHandler @ 00359ce2 */
  puVar46 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x30);
  *puVar46 = jpeglibNamespace::start_pass_dpost;
  *(undefined1 (*) [16])(puVar46 + 2) = (undefined1  [16])0x0;
  local_1d0 = puVar46;
  if (local_3a6 != '\0') {
    uVar26 = (ulong)local_284;
    *(uint *)(puVar46 + 4) = local_284;
    if (cVar11 == '\0') {
      uVar17 = (*(code *)local_400[2])(&local_408,1,local_38c * local_394);
      puVar46[3] = uVar17;
    }
    else {
      uVar18 = (uVar26 + local_390) - 1;
      if (uVar18 >> 0x20 == 0) {
        iVar22 = (int)((uVar18 & 0xffffffff) % uVar26);
      }
      else {
        iVar22 = (int)((long)uVar18 % (long)uVar26);
      }
      uVar17 = (*(code *)local_400[4])(&local_408,1,0,local_38c * local_394,(int)uVar18 - iVar22);
      puVar46[2] = uVar17;
    }
  }
LAB_00358062:
  puVar46 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x80);
  *puVar46 = jpeglibNamespace::start_pass;
  local_1b0 = puVar46;
  if (0 < (int)local_3d0) {
    puVar35 = (undefined8 *)(local_2e8 + 0x58);
    lVar40 = 0;
    do {
                    /* try { // try from 003580b5 to 003580c3 has its CatchHandler @ 00359cde */
      pauVar19 = (undefined1 (*) [16])(*(code *)*local_400)(&local_408,1,0x100);
      *puVar35 = pauVar19;
      pauVar19[0xf] = (undefined1  [16])0x0;
      pauVar19[0xe] = (undefined1  [16])0x0;
      pauVar19[0xd] = (undefined1  [16])0x0;
      pauVar19[0xc] = (undefined1  [16])0x0;
      pauVar19[0xb] = (undefined1  [16])0x0;
      pauVar19[10] = (undefined1  [16])0x0;
      pauVar19[9] = (undefined1  [16])0x0;
      pauVar19[8] = (undefined1  [16])0x0;
      pauVar19[7] = (undefined1  [16])0x0;
      pauVar19[6] = (undefined1  [16])0x0;
      pauVar19[5] = (undefined1  [16])0x0;
      pauVar19[4] = (undefined1  [16])0x0;
      pauVar19[3] = (undefined1  [16])0x0;
      pauVar19[2] = (undefined1  [16])0x0;
      pauVar19[1] = (undefined1  [16])0x0;
      *pauVar19 = (undefined1  [16])0x0;
      *(undefined4 *)((long)puVar46 + lVar40 * 4 + 0x58) = 0xffffffff;
      lVar40 = lVar40 + 1;
      puVar35 = puVar35 + 0xc;
    } while (lVar40 < (int)local_3d0);
  }
  if (local_2de == '\0') {
    puVar46 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x178);
    *puVar46 = jpeglibNamespace::start_pass_huff_decoder;
    puVar46[2] = jpeglibNamespace::finish_pass_huff;
    local_1b8 = puVar46;
    if (local_2df == '\0') {
      *(undefined1 (*) [16])(puVar46 + 0x14) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x12) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 0xe) = (undefined1  [16])0x0;
    }
    else {
      local_358 = (undefined4 *)(*(code *)*local_400)(&local_408,1,(long)(int)local_3d0 << 8);
      if (0 < (int)local_3d0) {
        iVar22 = 0;
        puVar23 = local_358;
        do {
          puVar23[0x3c] = 0xffffffff;
          puVar23[0x3d] = 0xffffffff;
          puVar23[0x3e] = 0xffffffff;
          puVar23[0x3f] = 0xffffffff;
          puVar23[0x38] = 0xffffffff;
          puVar23[0x39] = 0xffffffff;
          puVar23[0x3a] = 0xffffffff;
          puVar23[0x3b] = 0xffffffff;
          puVar23[0x34] = 0xffffffff;
          puVar23[0x35] = 0xffffffff;
          puVar23[0x36] = 0xffffffff;
          puVar23[0x37] = 0xffffffff;
          puVar23[0x30] = 0xffffffff;
          puVar23[0x31] = 0xffffffff;
          puVar23[0x32] = 0xffffffff;
          puVar23[0x33] = 0xffffffff;
          puVar23[0x2c] = 0xffffffff;
          puVar23[0x2d] = 0xffffffff;
          puVar23[0x2e] = 0xffffffff;
          puVar23[0x2f] = 0xffffffff;
          puVar23[0x28] = 0xffffffff;
          puVar23[0x29] = 0xffffffff;
          puVar23[0x2a] = 0xffffffff;
          puVar23[0x2b] = 0xffffffff;
          puVar23[0x24] = 0xffffffff;
          puVar23[0x25] = 0xffffffff;
          puVar23[0x26] = 0xffffffff;
          puVar23[0x27] = 0xffffffff;
          puVar23[0x20] = 0xffffffff;
          puVar23[0x21] = 0xffffffff;
          puVar23[0x22] = 0xffffffff;
          puVar23[0x23] = 0xffffffff;
          puVar23[0x1c] = 0xffffffff;
          puVar23[0x1d] = 0xffffffff;
          puVar23[0x1e] = 0xffffffff;
          puVar23[0x1f] = 0xffffffff;
          puVar23[0x18] = 0xffffffff;
          puVar23[0x19] = 0xffffffff;
          puVar23[0x1a] = 0xffffffff;
          puVar23[0x1b] = 0xffffffff;
          puVar23[0x14] = 0xffffffff;
          puVar23[0x15] = 0xffffffff;
          puVar23[0x16] = 0xffffffff;
          puVar23[0x17] = 0xffffffff;
          puVar23[0x10] = 0xffffffff;
          puVar23[0x11] = 0xffffffff;
          puVar23[0x12] = 0xffffffff;
          puVar23[0x13] = 0xffffffff;
          puVar23[0xc] = 0xffffffff;
          puVar23[0xd] = 0xffffffff;
          puVar23[0xe] = 0xffffffff;
          puVar23[0xf] = 0xffffffff;
          puVar23[8] = 0xffffffff;
          puVar23[9] = 0xffffffff;
          puVar23[10] = 0xffffffff;
          puVar23[0xb] = 0xffffffff;
          puVar23[4] = 0xffffffff;
          puVar23[5] = 0xffffffff;
          puVar23[6] = 0xffffffff;
          puVar23[7] = 0xffffffff;
          *puVar23 = 0xffffffff;
          puVar23[1] = 0xffffffff;
          puVar23[2] = 0xffffffff;
          puVar23[3] = 0xffffffff;
          puVar23 = puVar23 + 0x40;
          iVar22 = iVar22 + 1;
        } while (iVar22 < (int)local_3d0);
      }
      *(undefined1 (*) [16])(puVar46 + 0xb) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar46 + 9) = (undefined1  [16])0x0;
    }
  }
  else {
                    /* try { // try from 00358168 to 00358510 has its CatchHandler @ 00359ce2 */
    local_1b8 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x158);
    *local_1b8 = jpeglibNamespace::start_pass_jdarith;
    local_1b8[2] = jpeglibNamespace::finish_pass;
    *(undefined1 (*) [16])(local_1b8 + 10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0xc) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0xe) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x12) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x14) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x16) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x1a) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x1c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x1e) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x22) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x24) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x26) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(local_1b8 + 0x28) = (undefined1  [16])0x0;
    *(undefined1 *)(local_1b8 + 0x2a) = 0x71;
    if ((local_2df != '\0') &&
       (local_358 = (undefined4 *)(*(code *)*local_400)(&local_408,1,(long)(int)local_3d0 << 8),
       0 < (int)local_3d0)) {
      iVar22 = 0;
      puVar23 = local_358;
      do {
        puVar23[0x3c] = 0xffffffff;
        puVar23[0x3d] = 0xffffffff;
        puVar23[0x3e] = 0xffffffff;
        puVar23[0x3f] = 0xffffffff;
        puVar23[0x38] = 0xffffffff;
        puVar23[0x39] = 0xffffffff;
        puVar23[0x3a] = 0xffffffff;
        puVar23[0x3b] = 0xffffffff;
        puVar23[0x34] = 0xffffffff;
        puVar23[0x35] = 0xffffffff;
        puVar23[0x36] = 0xffffffff;
        puVar23[0x37] = 0xffffffff;
        puVar23[0x30] = 0xffffffff;
        puVar23[0x31] = 0xffffffff;
        puVar23[0x32] = 0xffffffff;
        puVar23[0x33] = 0xffffffff;
        puVar23[0x2c] = 0xffffffff;
        puVar23[0x2d] = 0xffffffff;
        puVar23[0x2e] = 0xffffffff;
        puVar23[0x2f] = 0xffffffff;
        puVar23[0x28] = 0xffffffff;
        puVar23[0x29] = 0xffffffff;
        puVar23[0x2a] = 0xffffffff;
        puVar23[0x2b] = 0xffffffff;
        puVar23[0x24] = 0xffffffff;
        puVar23[0x25] = 0xffffffff;
        puVar23[0x26] = 0xffffffff;
        puVar23[0x27] = 0xffffffff;
        puVar23[0x20] = 0xffffffff;
        puVar23[0x21] = 0xffffffff;
        puVar23[0x22] = 0xffffffff;
        puVar23[0x23] = 0xffffffff;
        puVar23[0x1c] = 0xffffffff;
        puVar23[0x1d] = 0xffffffff;
        puVar23[0x1e] = 0xffffffff;
        puVar23[0x1f] = 0xffffffff;
        puVar23[0x18] = 0xffffffff;
        puVar23[0x19] = 0xffffffff;
        puVar23[0x1a] = 0xffffffff;
        puVar23[0x1b] = 0xffffffff;
        puVar23[0x14] = 0xffffffff;
        puVar23[0x15] = 0xffffffff;
        puVar23[0x16] = 0xffffffff;
        puVar23[0x17] = 0xffffffff;
        puVar23[0x10] = 0xffffffff;
        puVar23[0x11] = 0xffffffff;
        puVar23[0x12] = 0xffffffff;
        puVar23[0x13] = 0xffffffff;
        puVar23[0xc] = 0xffffffff;
        puVar23[0xd] = 0xffffffff;
        puVar23[0xe] = 0xffffffff;
        puVar23[0xf] = 0xffffffff;
        puVar23[8] = 0xffffffff;
        puVar23[9] = 0xffffffff;
        puVar23[10] = 0xffffffff;
        puVar23[0xb] = 0xffffffff;
        puVar23[4] = 0xffffffff;
        puVar23[5] = 0xffffffff;
        puVar23[6] = 0xffffffff;
        puVar23[7] = 0xffffffff;
        *puVar23 = 0xffffffff;
        puVar23[1] = 0xffffffff;
        puVar23[2] = 0xffffffff;
        puVar23[3] = 0xffffffff;
        puVar23 = puVar23 + 0x40;
        iVar22 = iVar22 + 1;
      } while (iVar22 < (int)local_3d0);
    }
  }
  if (*(char *)(local_1c8 + 4) == '\0') {
    pcVar44 = (code *)*local_400;
    if (local_3b0 != '\0') goto LAB_00358500;
                    /* try { // try from 00358e5e to 00358e6e has its CatchHandler @ 00359ce2 */
    local_1d8 = (undefined8 *)(*pcVar44)(&local_408,1,0x5e0);
    if (local_1f0 == 0) {
      memset(local_1d8 + 0x1c,0,0x500);
    }
    local_1d8[7] = local_1d8 + 0x1c;
    auVar51._8_4_ = (int)local_1d8;
    auVar51._0_8_ = local_1d8;
    auVar51._12_4_ = (int)((ulong)local_1d8 >> 0x20);
    lVar40 = auVar51._8_8_;
    lVar30 = _UNK_005dd698 + lVar40;
    local_1d8[8] = _DAT_005dd690 + (long)local_1d8;
    local_1d8[9] = lVar30;
    lVar30 = _UNK_005dd6a8 + lVar40;
    local_1d8[10] = _DAT_005dd6a0 + (long)local_1d8;
    local_1d8[0xb] = lVar30;
    lVar30 = _UNK_005dd6b8 + lVar40;
    local_1d8[0xc] = _DAT_005dd6b0 + (long)local_1d8;
    local_1d8[0xd] = lVar30;
    lVar40 = lVar40 + _UNK_005dd6c8;
    local_1d8[0xe] = (long)local_1d8 + _DAT_005dd6c0;
    local_1d8[0xf] = lVar40;
    local_1d8[0x10] = local_1d8 + 0xac;
    local_1d8[1] = jpeglibNamespace::dummy_consume_data;
    local_1d8[3] = jpeglibNamespace::decompress_onepass;
    local_1d8[4] = 0;
  }
  else {
    pcVar44 = (code *)*local_400;
LAB_00358500:
    local_1d8 = (undefined8 *)(*pcVar44)(&local_408,1,0xe0);
    if (0 < (int)local_3d0) {
      puVar36 = (uint *)(local_2e8 + 0x20);
      lVar40 = 0;
      do {
        uVar14 = puVar36[-5];
        uVar26 = (ulong)(int)uVar14;
        uVar29 = uVar14 * 3;
        if (local_2df == '\0') {
          uVar29 = uVar14;
        }
        uVar49 = (ulong)(int)puVar36[-6];
        uVar18 = (puVar36[-1] + uVar49) - 1;
        if ((uVar18 | uVar49) >> 0x20 == 0) {
          iVar22 = (int)((uVar18 & 0xffffffff) % (ulong)puVar36[-6]);
        }
        else {
          iVar22 = (int)((long)uVar18 % (long)uVar49);
        }
        uVar49 = (uVar26 + *puVar36) - 1;
        if ((uVar49 | uVar26) >> 0x20 == 0) {
          iVar48 = (int)((uVar49 & 0xffffffff) % (ulong)uVar14);
        }
        else {
          iVar48 = (int)((long)uVar49 % (long)uVar26);
        }
                    /* try { // try from 003585b5 to 003585c4 has its CatchHandler @ 00359cdc */
        uVar17 = (*(code *)local_400[5])
                           (&local_408,1,1,(int)uVar18 - iVar22,(int)uVar49 - iVar48,uVar29);
        local_1d8[lVar40 + 0x11] = uVar17;
        lVar40 = lVar40 + 1;
        puVar36 = puVar36 + 0x18;
      } while (lVar40 < (int)local_3d0);
    }
    local_1d8[1] = jpeglibNamespace::consume_data;
    local_1d8[3] = jpeglibNamespace::decompress_data;
    local_1d8[4] = local_1d8 + 0x11;
  }
  *local_1d8 = jpeglibNamespace::start_input_pass_jdcoefct;
  local_1d8[2] = jpeglibNamespace::start_output_pass;
  local_1d8[0x1b] = 0;
  if (cStack_3af == '\0') {
                    /* try { // try from 0035893b to 003589c5 has its CatchHandler @ 00359ce2 */
    local_428 = (undefined8 *)(*(code *)*local_400)(&local_408,1,0x90);
    *local_428 = jpeglibNamespace::start_pass_main;
    local_1e0 = local_428;
    if (*(char *)(local_1a8 + 2) == '\0') {
      *(int *)((long)local_428 + 100) = local_27c;
      uVar26 = (ulong)local_3d0;
      iVar22 = local_27c;
    }
    else {
      if (local_27c < 2) {
        *(undefined4 *)(local_408 + 5) = 0x30;
        (**local_408)(&local_408);
      }
      puVar46 = local_1e0;
      iVar22 = local_27c;
      lVar40 = (*(code *)*local_400)(&local_408,1,(long)(int)local_3d0 << 4);
      puVar46[0xe] = lVar40;
      uVar26 = (ulong)(int)local_3d0;
      puVar46[0xf] = lVar40 + uVar26 * 8;
      if (0 < (long)uVar26) {
        pcVar31 = (char *)(local_2e8 + 0x34);
        lVar40 = 0;
        do {
          if (*pcVar31 != '\0') {
            iVar48 = (*(int *)(pcVar31 + -0xc) * *(int *)(pcVar31 + -0x28)) / local_27c;
            iVar47 = iVar48 * (iVar22 + 4);
                    /* try { // try from 00358a58 to 00358a63 has its CatchHandler @ 00359cbe */
            lVar30 = (*(code *)*local_400)(&local_408,1,(long)(iVar47 * 2) << 3);
            lVar30 = lVar30 + (long)iVar48 * 8;
            *(long *)(puVar46[0xe] + lVar40 * 8) = lVar30;
            *(long *)(puVar46[0xf] + lVar40 * 8) = lVar30 + (long)iVar47 * 8;
            uVar26 = (ulong)local_3d0;
          }
          lVar40 = lVar40 + 1;
          pcVar31 = pcVar31 + 0x60;
        } while (lVar40 < (int)uVar26);
      }
      iVar22 = local_27c + 2;
    }
    puVar46 = local_428;
    if (0 < (int)uVar26) {
      pcVar31 = (char *)(local_2e8 + 0x34);
      lVar40 = 0;
      do {
        if (*pcVar31 != '\0') {
                    /* try { // try from 00358f74 to 00358f83 has its CatchHandler @ 00359cc2 */
          uVar17 = (*(code *)local_400[2])
                             (&local_408,1,*(int *)(pcVar31 + -0x10) * *(int *)(pcVar31 + -0x18),
                              ((*(int *)(pcVar31 + -0xc) * *(int *)(pcVar31 + -0x28)) / local_27c) *
                              iVar22);
          puVar46[lVar40 + 2] = uVar17;
          uVar26 = (ulong)local_3d0;
        }
        lVar40 = lVar40 + 1;
        pcVar31 = pcVar31 + 0x60;
      } while (lVar40 < (int)uVar26);
    }
  }
                    /* try { // try from 00358641 to 00358658 has its CatchHandler @ 00359ce2 */
  (*(code *)local_400[6])(&local_408);
  (*(code *)local_1c8[2])(&local_408);
  if ((local_3f8 == (undefined8 *)0x0) || (local_3b0 != '\0')) {
    local_3e4 = 0xcf;
    param_1 = local_188;
    if (local_3b0 == '\0') goto LAB_003586e3;
LAB_0035888a:
    if (local_429 == '\0') {
                    /* try { // try from 00358899 to 003588a2 has its CatchHandler @ 00359cb8 */
      plVar15 = operator_new(0x60);
      uVar26 = local_180;
      plVar15[1] = 0x100000000;
      iVar48 = (int)local_180;
      *(int *)(plVar15 + 2) = iVar48;
      *(int *)((long)plVar15 + 0x14) = (int)local_178;
      *(undefined1 (*) [16])(plVar15 + 3) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar15 + 5) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar15 + 7) = (undefined1  [16])0x0;
      *(undefined4 *)(plVar15 + 9) = 0;
      *plVar15 = (long)&PTR__SoftwarePixelData_00711df0;
      *(undefined4 *)(plVar15 + 0xb) = 3;
      iVar22 = 1;
      if (0 < iVar48) {
        iVar22 = iVar48;
      }
      uVar14 = iVar22 * 3 + 3U & 0x7ffffffc;
      *(uint *)((long)plVar15 + 0x5c) = uVar14;
      uVar18 = 1;
      if (0 < (int)local_178) {
        uVar18 = local_178 & 0xffffffff;
      }
      __size = uVar18 * uVar14;
      if (__size == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        pvVar16 = malloc(__size);
      }
      plVar15[10] = (long)pvVar16;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      plVar2 = (long *)*param_1;
      *param_1 = (long)plVar15;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar15 = plVar2 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar15 = (long *)*param_1;
      }
                    /* try { // try from 00358a90 to 00358aa0 has its CatchHandler @ 00359cb6 */
      Identifier::Identifier((Identifier *)&local_410,(byte *)"originalImageHadAlpha");
      this = (NamedValueSet *)(plVar15 + 3);
      if (plVar15 == (long *)0x0) {
        this = (NamedValueSet *)0x0;
      }
      local_170 = &var::Instance::attributesBool;
      local_168[0] = 0;
                    /* try { // try from 00358acb to 00358adc has its CatchHandler @ 00359c74 */
      NamedValueSet::set(this,&local_410,(long *)&local_170);
                    /* try { // try from 00358ae5 to 00358aea has its CatchHandler @ 00359c6c */
      (**(code **)(local_170 + 0x58))(local_168);
      piVar42 = (int *)(CONCAT44(local_410._4_4_,(int)local_410) + -0x10);
      if (piVar42 != &emptyString) {
        LOCK();
        iVar22 = *piVar42;
        *piVar42 = *piVar42 + -1;
        UNLOCK();
        if (iVar22 == 0) {
          operator_delete__(piVar42);
        }
      }
      if (plVar15 == (long *)0x0) {
        local_428 = (undefined8 *)CONCAT71(local_428._1_7_,1);
        local_154 = 0;
        local_150 = 0;
      }
      else {
        local_428 = (undefined8 *)CONCAT71(local_428._1_7_,*(int *)((long)plVar15 + 0xc) != 1);
        local_154 = (undefined4)plVar15[2];
        local_150 = *(undefined4 *)((long)plVar15 + 0x14);
      }
      local_148 = (long *)0x0;
                    /* try { // try from 00358b51 to 00358b68 has its CatchHandler @ 00359c6a */
      (**(code **)(*plVar15 + 0x38))(plVar15,&local_170,0,0,1);
      if (0 < (int)local_178) {
        uVar14 = iVar48 - 1;
        uVar18 = 0;
        do {
          if (local_3e4 != 0xcd) {
            *(undefined4 *)(local_408 + 5) = 0x15;
            *(uint *)((long)local_408 + 0x2c) = local_3e4;
                    /* try { // try from 00358bb9 to 00358c32 has its CatchHandler @ 00359cc4 */
            (**local_408)(&local_408);
          }
          if (local_370 < local_390) {
            if (local_3f8 != (undefined8 *)0x0) {
              local_3f8[1] = (ulong)local_370;
              local_3f8[2] = (ulong)local_390;
              (*(code *)*local_3f8)(&local_408);
            }
            local_410._0_4_ = 0;
            (*(code *)local_1e0[1])(&local_408,local_138,&local_410,1);
            local_370 = local_370 + (int)local_410;
          }
          else {
            *(undefined4 *)(local_408 + 5) = 0x7e;
            (*local_408[1])(&local_408,0xffffffff);
          }
          if (local_429 != '\0') goto LAB_00358dd0;
          puVar20 = (undefined1 *)*local_138;
          puVar24 = local_170 + (long)local_15c * uVar18;
          if ((char)local_428 == '\0') {
            if (0 < (int)uVar26) {
              lVar40 = (long)local_158;
              if ((local_180 & 1) == 0) {
                uVar29 = (uint)local_180;
              }
              else {
                uVar12 = puVar20[1];
                uVar1 = puVar20[2];
                puVar24[2] = *puVar20;
                puVar24[1] = uVar12;
                *puVar24 = uVar1;
                puVar24 = puVar24 + lVar40;
                puVar20 = puVar20 + 3;
                uVar29 = uVar14;
              }
              if (uVar14 != 0) {
                uVar29 = uVar29 - 1;
                puVar24 = puVar24 + 2;
                do {
                  uVar12 = puVar20[1];
                  uVar1 = puVar20[2];
                  *puVar24 = *puVar20;
                  puVar24[-1] = uVar12;
                  puVar24[-2] = uVar1;
                  uVar12 = puVar20[4];
                  uVar1 = puVar20[5];
                  puVar24[lVar40] = puVar20[3];
                  puVar24[lVar40 + -1] = uVar12;
                  puVar24[lVar40 + -2] = uVar1;
                  puVar24 = puVar24 + lVar40 * 2;
                  puVar20 = puVar20 + 6;
                  bVar50 = 1 < uVar29;
                  uVar29 = uVar29 - 2;
                } while (bVar50);
              }
            }
          }
          else if (0 < (int)uVar26) {
            uVar26 = local_180;
            if ((local_180 & 1) != 0) {
              uVar12 = *puVar20;
              uVar1 = puVar20[1];
              *puVar24 = puVar20[2];
              puVar24[1] = uVar1;
              puVar24[2] = uVar12;
              puVar24[3] = 0xff;
              puVar24 = puVar24 + local_158;
              puVar20 = puVar20 + 3;
              uVar26 = (ulong)uVar14;
            }
            if (uVar14 != 0) {
              uVar29 = (int)uVar26 - 1;
              do {
                uVar12 = *puVar20;
                uVar1 = puVar20[1];
                *puVar24 = puVar20[2];
                puVar24[1] = uVar1;
                puVar24[2] = uVar12;
                puVar24[3] = 0xff;
                lVar40 = (long)local_158;
                uVar12 = puVar20[3];
                uVar1 = puVar20[4];
                puVar24[lVar40] = puVar20[5];
                puVar24[lVar40 + 1] = uVar1;
                puVar24[lVar40 + 2] = uVar12;
                puVar24[lVar40 + 3] = 0xff;
                puVar24 = puVar24 + local_158 + lVar40;
                puVar20 = puVar20 + 6;
                bVar50 = 1 < uVar29;
                uVar29 = uVar29 - 2;
              } while (bVar50);
            }
          }
          uVar18 = uVar18 + 1;
          uVar26 = local_180;
        } while (uVar18 != local_178);
      }
      if (local_429 == '\0') {
                    /* try { // try from 00358dc6 to 00358e27 has its CatchHandler @ 00359cbc */
        jpeglibNamespace::jpeg_finish_decompress((long *)&local_408);
      }
LAB_00358dd0:
      lVar40 = *local_3e0;
      if (local_118 == (long *)0x0) {
        local_118 = local_100;
      }
      else if (local_f0 < (ulong)local_118[1]) {
        *(undefined1 *)(*local_118 + local_f0) = 0;
      }
      (**(code **)(*local_140 + 0xb8))(local_140,lVar40 - *local_118);
      if (local_148 != (long *)0x0) {
        (**(code **)(*local_148 + 8))();
      }
      param_1 = local_188;
    }
    else {
LAB_00356bff:
    }
  }
  else {
    if (*(char *)(local_1c8 + 4) != '\0') {
      uVar14 = local_3d0 * 3 + 2;
      if (local_2df == '\0') {
        uVar14 = local_3d0;
      }
      local_3f8[1] = 0;
      local_3f8[2] = (long)(int)uVar14 * (ulong)local_278;
      *(undefined4 *)(local_3f8 + 3) = 0;
      *(uint *)((long)local_3f8 + 0x1c) = 3 - (uint)(local_396 == '\0');
      *(int *)(local_418 + 3) = *(int *)(local_418 + 3) + 1;
    }
LAB_003586e3:
    local_3e4 = 0xcb;
LAB_003586eb:
    param_1 = local_188;
    if (*(char *)(local_1c8 + 4) != '\0') {
      while( true ) {
        if (local_3f8 != (undefined8 *)0x0) {
                    /* try { // try from 00358715 to 00358726 has its CatchHandler @ 00359ce0 */
          (*(code *)*local_3f8)(&local_408);
        }
        uVar14 = (*(code *)*local_1c8)(&local_408);
        if (uVar14 == 0) goto LAB_00356bff;
        if (uVar14 == 2) break;
        if (((uVar14 & 0xfffffffd) == 1) && (local_3f8 != (undefined8 *)0x0)) {
          lVar40 = local_3f8[1];
          local_3f8[1] = lVar40 + 1;
          if ((long)local_3f8[2] <= lVar40 + 1) {
            local_3f8[2] = local_3f8[2] + (ulong)local_278;
          }
        }
      }
    }
    local_364 = local_36c;
LAB_00358779:
    if (local_3e4 != 0xcc) {
                    /* try { // try from 0035878b to 00358791 has its CatchHandler @ 00359ce2 */
      (*(code *)*local_1e8)(&local_408);
      local_370 = 0;
      local_3e4 = 0xcc;
    }
LAB_003587a5:
    param_1 = local_188;
    if (*(char *)(local_1e8 + 2) == '\0') {
LAB_0035887a:
      local_3e4 = 0xce - (cStack_3af == '\0');
      goto LAB_0035888a;
    }
    do {
      while (local_390 <= local_370) {
        (*(code *)local_1e8[1])(&local_408);
        (*(code *)*local_1e8)(&local_408);
        local_370 = 0;
        if (*(char *)(local_1e8 + 2) == '\0') goto LAB_0035887a;
      }
      if (local_3f8 != (undefined8 *)0x0) {
        local_3f8[1] = (ulong)local_370;
        local_3f8[2] = (ulong)local_390;
                    /* try { // try from 003587ff to 0035885a has its CatchHandler @ 00359d28 */
        (*(code *)*local_3f8)(&local_408);
      }
      uVar14 = local_370;
      (*(code *)local_1e0[1])(&local_408,0,&local_370,0);
    } while (local_370 != uVar14);
  }
  if (local_400 != (undefined8 *)0x0) {
    (*(code *)local_400[10])(&local_408);
  }
LAB_00356c14:
  local_128 = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 00356c23 to 00356c2f has its CatchHandler @ 00359ce4 */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_128);
  free(local_110);
  local_128 = &PTR__OutputStream_00713440;
  piVar42 = (int *)(local_120 + -0x10);
  if (piVar42 != &emptyString) {
    LOCK();
    iVar22 = *piVar42;
    *piVar42 = *piVar42 + -1;
    UNLOCK();
    if (iVar22 == 0) {
      operator_delete__(piVar42);
    }
  }
  return param_1;
}


