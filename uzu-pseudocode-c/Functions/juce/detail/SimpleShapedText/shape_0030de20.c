// Function : shape
// Namespace: juce:detail:SimpleShapedText
// Entry    : 0030de20
// Prototype: undefined shape(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, undefined8 param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, SimpleShapedText * this, undefined8 * param_10, ulong * param_11, undefined8 param_12, undefined8 param_13, ulong * * param_14)
// Body     : 0030de20 - 003145fc


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::detail::SimpleShapedText::shape(juce::String const&, juce::detail::ShapedTextOptions
   const&) */

void __thiscall
juce::detail::SimpleShapedText::shape
          (undefined8 param_1_00,undefined8 param_2_00,long *param_3,long *param_4,ulong param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,SimpleShapedText *this,
          undefined8 *param_10,ulong *param_11,undefined8 param_12,undefined8 param_13,
          ulong **param_14)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  ulong *puVar5;
  float fVar6;
  int iVar7;
  undefined1 auVar8 [16];
  code *pcVar9;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *pvVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  void *pvVar30;
  char cVar31;
  ulong uVar32;
  long lVar33;
  long *plVar34;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *pvVar35;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *pvVar36;
  long *plVar37;
  undefined8 *puVar38;
  ulong uVar39;
  ulong *puVar40;
  void *pvVar41;
  long *plVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  long *plVar45;
  ulong *puVar46;
  ulong **ppuVar47;
  code *pcVar48;
  ulong *puVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long *plVar53;
  ulong *puVar54;
  undefined8 *puVar55;
  long lVar56;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *pvVar57;
  undefined1 *puVar58;
  ulong *puVar59;
  undefined8 *puVar60;
  ulong *puVar61;
  long *plVar62;
  undefined1 (*pauVar63) [16];
  ulong uVar64;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *pvVar65;
  undefined1 (*pauVar66) [16];
  long lVar67;
  long *plVar68;
  undefined1 (*pauVar69) [16];
  uint uVar70;
  ulong uVar71;
  long *plVar72;
  ulong uVar73;
  ulong **ppuVar74;
  ulong uVar75;
  ulong *puVar76;
  undefined8 *puVar77;
  long *plVar78;
  void *pvVar79;
  ulong uVar80;
  long lVar81;
  ulong *puVar82;
  code *pcVar83;
  long lVar84;
  undefined8 *puVar85;
  undefined8 *puVar86;
  bool bVar87;
  bool bVar88;
  long *extraout_XMM0_Qa;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined8 *local_310;
  undefined8 *local_308;
  long *local_300;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  long *local_2e8;
  long *plStack_2e0;
  long *local_2d8;
  ulong *local_2c8;
  ulong local_2c0;
  long *local_2b8;
  undefined1 (*local_2b0) [16];
  undefined1 (*local_2a8) [16];
  ulong *local_2a0;
  undefined1 local_298 [12];
  float fStack_28c;
  code *local_288;
  long *local_280;
  long lStack_278;
  long *local_270;
  code *pcStack_268;
  long *local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  ulong *local_210;
  long *local_208;
  ulong uStack_200;
  byte local_1f8;
  undefined7 uStack_1f7;
  undefined8 *local_1f0;
  undefined8 *puStack_1e8;
  undefined8 *local_1e0;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *local_1d8;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *pvStack_1d0;
  vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *local_1c8;
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*local_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  SimpleShapedText *local_1a0;
  long *local_198;
  undefined4 local_18f;
  undefined3 uStack_18b;
  undefined1 local_188 [16];
  long *local_178;
  long *local_168;
  ulong uStack_160;
  code *local_158;
  code *local_150;
  SimpleShapedText *local_140;
  long *local_138;
  long lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  long *local_118;
  undefined8 *local_110;
  SimpleShapedText *local_108;
  SimpleShapedText *local_100;
  SimpleShapedText *local_f8;
  void *local_f0;
  int local_e4;
  
  local_2e8 = (long *)0x0;
  plStack_2e0 = (long *)0x0;
  local_2d8 = (long *)0x0;
                    /* try { // try from 0030de48 to 0030de5c has its CatchHandler @ 003145fd */
  local_110 = param_10;
  Unicode::performAnalysis((Unicode *)&local_f0,param_10);
  uVar71 = (ulong)local_e4;
  if (uVar71 == 0) {
    free(local_f0);
  }
  else {
    plVar72 = (long *)0x0;
    local_2b8 = (long *)0x0;
    plVar34 = (long *)0x0;
    pvVar41 = local_f0;
    local_2a0 = param_11;
    do {
      plVar68 = plVar34;
      uVar80 = uVar71 * 0xc;
      uVar32 = uVar80;
      pvVar79 = pvVar41;
      if (0x24 < (long)uVar80) {
        lVar50 = uVar80 / 0x30 + 1;
        pvVar30 = (void *)((long)pvVar41 + 0x18);
        do {
          pvVar79 = pvVar30;
          if (*(int *)((long)pvVar79 + -0x14) == 2) {
            pvVar79 = (void *)((long)pvVar79 + -0x18);
            goto LAB_0030dfb0;
          }
          if (*(int *)((long)pvVar79 + -8) == 2) {
            pvVar79 = (void *)((long)pvVar79 + -0xc);
            goto LAB_0030dfb0;
          }
          if (*(int *)((long)pvVar79 + 4) == 2) goto LAB_0030dfb0;
          if (*(int *)((long)pvVar79 + 0x10) == 2) {
            pvVar79 = (void *)((long)pvVar79 + 0xc);
            goto LAB_0030dfb0;
          }
          lVar50 = lVar50 + -1;
          uVar32 = uVar32 - 0x30;
          pvVar30 = (void *)((long)pvVar79 + 0x30);
        } while (1 < lVar50);
        pvVar79 = (void *)((long)pvVar79 + 0x18);
      }
      lVar50 = ((long)uVar32 >> 2) * -0x5555555555555555;
      if (lVar50 == 1) {
LAB_0030df8d:
        if (*(int *)((long)pvVar79 + 4) != 2) {
LAB_0030df94:
          pvVar79 = (void *)(uVar80 + (long)pvVar41);
        }
      }
      else if (lVar50 == 2) {
LAB_0030df82:
        if (*(int *)((long)pvVar79 + 4) != 2) {
          pvVar79 = (void *)((long)pvVar79 + 0xc);
          goto LAB_0030df8d;
        }
      }
      else {
        if (lVar50 != 3) goto LAB_0030df94;
        if (*(int *)((long)pvVar79 + 4) != 2) {
          pvVar79 = (void *)((long)pvVar79 + 0xc);
          goto LAB_0030df82;
        }
      }
LAB_0030dfb0:
      uVar80 = ((long)pvVar79 - (long)pvVar41 >> 2) * -0x5555555555555555 + 1;
      if (uVar71 <= uVar80) {
        uVar80 = uVar71;
      }
      lVar81 = ((long)pvVar41 - (long)local_f0 >> 2) * -0x5555555555555555;
      lVar50 = lVar81 + uVar80;
      if ((long)(lVar81 + uVar80) <= lVar81) {
        lVar50 = lVar81;
      }
      if (plVar68 == plVar72) {
        lVar33 = (long)plVar72 - (long)local_2b8;
        if (lVar33 == 0x7ffffffffffffff0) {
                    /* try { // try from 003145d4 to 003145df has its CatchHandler @ 00314629 */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar75 = lVar33 >> 4;
        uVar32 = uVar75;
        if (lVar33 == 0) {
          uVar32 = 1;
        }
        uVar64 = uVar32 + uVar75;
        if (0x7ffffffffffffff < uVar64) {
          uVar64 = 0x7ffffffffffffff;
        }
        if (CARRY8(uVar32,uVar75)) {
          uVar64 = 0x7ffffffffffffff;
        }
                    /* try { // try from 0030e056 to 0030e05d has its CatchHandler @ 00314627 */
        plVar34 = operator_new(uVar64 * 0x10);
        param_11 = local_2a0;
        plVar34[uVar75 * 2] = lVar81;
        plVar34[uVar75 * 2 + 1] = lVar50;
        plVar68 = plVar34;
        if (local_2b8 != plVar72) {
          plVar37 = local_2b8;
          do {
            lVar50 = plVar37[1];
            *plVar68 = *plVar37;
            plVar68[1] = lVar50;
            plVar37 = plVar37 + 2;
            plVar68 = plVar68 + 2;
          } while (plVar37 != plVar72);
        }
        if (local_2b8 != (long *)0x0) {
          operator_delete(local_2b8);
        }
        plVar72 = plVar34 + uVar64 * 2;
        local_2b8 = plVar34;
      }
      else {
        *plVar68 = lVar81;
        plVar68[1] = lVar50;
      }
      pvVar41 = (void *)((long)pvVar41 + uVar80 * 0xc);
      uVar71 = uVar71 - uVar80;
      plVar34 = plVar68 + 2;
    } while (uVar71 != 0);
    local_118 = plVar68;
    free(local_f0);
    if (local_2b8 != plVar68 + 2) {
      local_1a0 = this + 0x20;
      local_f8 = this + 0x98;
      local_140 = this + 0x68;
      local_108 = this + 0x50;
      local_100 = this + 0x38;
      plVar34 = local_2b8;
LAB_0030e176:
      local_198 = plVar34;
                    /* try { // try from 0030e185 to 0030e197 has its CatchHandler @ 0031461a */
      Shaper::Shaper((Shaper *)&local_f0,local_110,(ulong *)*plVar34,plVar34[1],param_11,param_14);
      fVar6 = _DAT_00659418;
      if ((char)param_11[2] != '\0') {
        fVar6 = *(float *)((long)param_11 + 0xc);
      }
      local_1f8 = *(byte *)((long)param_11 + 0x66) ^ 1;
      local_2c8 = (ulong *)CONCAT71(local_2c8._1_7_,*(undefined1 *)((long)param_11 + 0x65));
      local_210 = (ulong *)CONCAT44(local_210._4_4_,fVar6);
      uVar89 = 0;
      uVar90 = 0;
      local_1b8 = (undefined1 (*) [16])0x0;
      pauStack_1b0 = (undefined1 (*) [16])0x0;
      local_1c8 = (vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>>
                   *)0x0;
      pauStack_1c0 = (undefined1 (*) [16])0x0;
      local_1d8 = (vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>>
                   *)0x0;
      pvStack_1d0 = (vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>>
                     *)0x0;
      local_208 = (long *)0xffffffffffffffff;
      uStack_200 = (ulong)(uint)(fVar6 - *(float *)(param_11 + 0xb));
      local_2c0 = CONCAT71(local_2c0._1_7_,*(byte *)((long)param_11 + 0x66)) ^ 1;
      local_1f0 = (undefined8 *)0x0;
      puStack_1e8 = (undefined8 *)0x0;
      local_1e0 = (undefined8 *)0x0;
                    /* try { // try from 0030e228 to 0030e239 has its CatchHandler @ 0031460f */
      Shaper::getChunksUpToNextSafeBreak
                ((ulong)(uint)(fVar6 - *(float *)(param_11 + 0xb)),0,param_3,param_4,param_5,param_6
                 ,param_7,param_8,(undefined8 *)local_188,(long *)&local_f0,0);
      if (local_188._0_8_ != local_188._8_8_) {
        local_2f8 = (undefined8 *)0x0;
        local_2f0 = (undefined8 *)0x0;
        local_308 = (undefined8 *)0x0;
        local_310 = (undefined8 *)0x0;
        pvVar57 = (vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>>
                   *)0x0;
LAB_0030e2e0:
        pvVar25 = local_1d8;
        lVar50 = (long)pvVar57 - (long)local_1d8;
        if (lVar50 == 0x7ffffffffffffff8) {
                    /* try { // try from 0031459f to 003145af has its CatchHandler @ 0031466c */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        lVar81 = lVar50 >> 3;
        uVar80 = lVar81 * -0x5555555555555555;
        uVar71 = uVar80;
        if (lVar50 == 0) {
          uVar71 = 1;
        }
        uVar32 = uVar71 + uVar80;
        if (0x555555555555555 < uVar32) {
          uVar32 = 0x555555555555555;
        }
        if (CARRY8(uVar71,uVar80)) {
          uVar32 = 0x555555555555555;
        }
                    /* try { // try from 0030e34d to 0030e351 has its CatchHandler @ 0031466a */
        pvVar35 = operator_new(uVar32 * 0x18);
        *(undefined8 *)(pvVar35 + lVar81 * 8) = local_188._0_8_;
        *(undefined8 *)(pvVar35 + lVar81 * 8 + 8) = local_188._8_8_;
        *(long **)(pvVar35 + lVar81 * 8 + 0x10) = local_178;
        local_188 = ZEXT816(0);
        local_178 = (long *)0x0;
        pvVar65 = pvVar35;
        if (pvVar25 != pvVar57) {
          uVar89 = 0;
          uVar90 = 0;
          pvVar36 = pvVar25;
          do {
            lVar50 = *(long *)(pvVar36 + 8);
            *(long *)pvVar65 = *(long *)pvVar36;
            *(long *)(pvVar65 + 8) = lVar50;
            *(long *)(pvVar65 + 0x10) = *(long *)(pvVar36 + 0x10);
            *(long *)pvVar36 = 0;
            *(long *)(pvVar36 + 8) = 0;
            *(long *)(pvVar36 + 0x10) = 0;
            pvVar65 = pvVar65 + 0x18;
            pvVar36 = pvVar36 + 0x18;
          } while (pvVar36 != pvVar57);
        }
        if (pvVar25 !=
            (vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *)
            0x0) {
          operator_delete(pvVar25);
        }
        local_1c8 = pvVar35 + uVar32 * 0x18;
        local_1d8 = pvVar35;
        do {
          pvStack_1d0 = pvVar65 + 0x18;
          plVar72 = (long *)0x0;
          lVar50 = *(long *)pvVar65;
          plVar34 = (long *)((*(long *)(pvVar65 + 8) - lVar50) / 0x48);
          local_128 = (long *)0x0;
          uStack_120 = (code *)0x0;
          local_138 = plVar34;
          lStack_130 = lVar50;
          if (*(long *)(pvVar65 + 8) - lVar50 == 0) {
            uVar71 = 0;
          }
          else {
            if (*(long *)(lVar50 + -0x28 + (long)plVar34 * 0x48) != 0) {
              plVar37 = (long *)((long)plVar34 * 0x48 + -0x28 + lVar50);
              pcVar83 = (code *)0x0;
              plVar68 = (long *)0x0;
              do {
                if (((char)local_2c8 == '\0') && ((long)local_208 < 0)) {
                  local_258 = (long *)0x0;
                  uStack_250._0_4_ = 0;
                  uStack_250._4_4_ = 0.0;
                  uStack_240 = std::
                               _Function_handler<bool(juce::detail::LineState_const&,juce::detail::ShapedGlyph_const&),juce::detail::LineOfWrappedGlyphCursorRanges::consume(juce::detail::WrappedGlyphsCursor_const&,bool)::{lambda(auto:1&,auto:2&)#1}>
                               ::_M_invoke;
                  uStack_248._0_4_ = 0x323200;
                  uStack_248._4_4_ = 0;
                  local_288 = (code *)CONCAT71(uStack_1f7,local_1f8);
                  stack0xfffffffffffffd70 = (ulong *)uStack_200;
                  local_298._0_8_ = local_208;
                  if ((*plVar37 == 0) || (plVar34 <= plVar68)) {
                    local_168 = local_208;
                    uStack_160 = uStack_200;
                    pcVar48 = std::
                              _Function_handler<bool(juce::detail::LineState_const&,juce::detail::ShapedGlyph_const&),juce::detail::LineOfWrappedGlyphCursorRanges::consume(juce::detail::WrappedGlyphsCursor_const&,bool)::{lambda(auto:1&,auto:2&)#1}>
                              ::_M_manager;
                    local_158 = local_288;
LAB_0030e96a:
                    /* try { // try from 0030e96a to 0030e97b has its CatchHandler @ 003146d7 */
                    local_288 = local_158;
                    (*pcVar48)(&local_258,&local_258,3);
                  }
                  else {
                    while( true ) {
                      plVar72 = (long *)(lVar50 + 0x28 + (long)plVar68 * 0x48);
                      lVar81 = (long)pcVar83 * 0x20;
                    /* try { // try from 0030e55e to 0030e574 has its CatchHandler @ 00314797 */
                      cVar31 = (*uStack_240)(&local_258,local_298,*plVar72 + lVar81);
                      auVar8 = _local_298;
                      if (cVar31 == '\0') break;
                      lVar33 = *plVar72;
                      fStack_28c = *(float *)(lVar33 + lVar81) + fStack_28c;
                      auVar12 = _local_298;
                      local_298._0_8_ = auVar8._0_8_;
                      lVar81 = *(long *)(lVar33 + 0x10 + lVar81);
                      if ((long)local_298._0_8_ < lVar81) {
                        local_298._0_8_ = lVar81;
                      }
                      stack0xfffffffffffffd70 = auVar12._8_8_;
                      if (*plVar37 == 0) break;
                      uVar71 = 1;
                      plVar72 = plVar68;
                      do {
                        if (plVar34 <= plVar68) break;
                        pcVar48 = *(code **)(lVar50 + 0x20 + (long)plVar68 * 0x48);
                        uVar80 = (long)pcVar48 - (long)pcVar83;
                        if (uVar71 <= uVar80) {
                          uVar80 = uVar71;
                        }
                        pcVar83 = pcVar83 + uVar80;
                        plVar62 = (long *)((long)plVar68 + 1);
                        if (pcVar83 == pcVar48) {
                          pcVar83 = (code *)0x0;
                          plVar68 = plVar62;
                          plVar72 = plVar62;
                        }
                        uVar71 = uVar71 - uVar80;
                      } while (uVar71 != 0);
                      plVar68 = plVar72;
                      if (plVar34 <= plVar72) break;
                      if (CONCAT44(uStack_248._4_4_,(undefined4)uStack_248) == 0) {
                    /* try { // try from 003144c1 to 003144ca has its CatchHandler @ 00314792 */
                    /* WARNING: Subroutine does not return */
                        std::__throw_bad_function_call();
                      }
                    }
                    pcVar48 = (code *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
                    local_168 = (long *)local_298._0_8_;
                    uStack_160 = (ulong)stack0xfffffffffffffd70;
                    local_158 = local_288;
                    if (pcVar48 != (code *)0x0) goto LAB_0030e96a;
                  }
                  if (local_310 == local_1e0) {
                    lVar81 = (long)local_310 - (long)local_308;
                    if (lVar81 == 0x7fffffffffffffc0) {
                    /* try { // try from 00314518 to 00314528 has its CatchHandler @ 003146b5 */
                    /* WARNING: Subroutine does not return */
                      std::__throw_length_error("vector::_M_realloc_insert");
                    }
                    uVar80 = lVar81 >> 6;
                    uVar71 = uVar80;
                    if (lVar81 == 0) {
                      uVar71 = 1;
                    }
                    uVar32 = uVar71 + uVar80;
                    if (0x1ffffffffffffff < uVar32) {
                      uVar32 = 0x1ffffffffffffff;
                    }
                    if (CARRY8(uVar71,uVar80)) {
                      uVar32 = 0x1ffffffffffffff;
                    }
                    /* try { // try from 0030ea18 to 0030eb72 has its CatchHandler @ 003146b3 */
                    local_2f8 = operator_new(uVar32 * 0x40);
                    puVar38 = local_2f8 + uVar80 * 8 + 2;
                    *(undefined4 *)puVar38 = (undefined4)local_128;
                    *(undefined4 *)((long)puVar38 + 4) = local_128._4_4_;
                    *(undefined4 *)(puVar38 + 1) = (undefined4)uStack_120;
                    *(undefined4 *)((long)puVar38 + 0xc) = uStack_120._4_4_;
                    local_2f8[uVar80 * 8] = local_138;
                    (local_2f8 + uVar80 * 8)[1] = lStack_130;
                    local_2f8[uVar80 * 8 + 4] = plVar34;
                    local_2f8[uVar80 * 8 + 5] = lVar50;
                    local_2f8[uVar80 * 8 + 6] = plVar68;
                    local_2f8[uVar80 * 8 + 7] = pcVar83;
                    puVar38 = local_2f8;
                    uVar89 = (undefined4)local_128;
                    uVar90 = local_128._4_4_;
                    for (puVar55 = local_308; puVar55 != local_310; puVar55 = puVar55 + 8) {
                      uVar19 = *puVar55;
                      uVar20 = puVar55[1];
                      uVar89 = *(undefined4 *)(puVar55 + 2);
                      uVar90 = *(undefined4 *)((long)puVar55 + 0x14);
                      uVar91 = *(undefined4 *)(puVar55 + 3);
                      uVar92 = *(undefined4 *)((long)puVar55 + 0x1c);
                      auVar8 = *(undefined1 (*) [16])(puVar55 + 4);
                      param_3 = auVar8._0_8_;
                      param_4 = (long *)puVar55[6];
                      uVar11 = puVar55[7];
                      puVar38[6] = param_4;
                      puVar38[7] = uVar11;
                      *(undefined1 (*) [16])(puVar38 + 4) = auVar8;
                      *(undefined4 *)(puVar38 + 2) = uVar89;
                      *(undefined4 *)((long)puVar38 + 0x14) = uVar90;
                      *(undefined4 *)(puVar38 + 3) = uVar91;
                      *(undefined4 *)((long)puVar38 + 0x1c) = uVar92;
                      *puVar38 = uVar19;
                      puVar38[1] = uVar20;
                      puVar38 = puVar38 + 8;
                    }
                    if (local_308 != (undefined8 *)0x0) {
                      operator_delete(local_308);
                    }
                    local_1e0 = local_2f8 + uVar32 * 8;
                    local_308 = local_2f8;
                    local_1f0 = local_2f8;
                  }
                  else {
                    *(undefined4 *)(local_310 + 2) = (undefined4)local_128;
                    *(undefined4 *)((long)local_310 + 0x14) = local_128._4_4_;
                    *(undefined4 *)(local_310 + 3) = (undefined4)uStack_120;
                    *(undefined4 *)((long)local_310 + 0x1c) = uStack_120._4_4_;
                    *local_310 = local_138;
                    local_310[1] = lStack_130;
                    local_310[4] = plVar34;
                    local_310[5] = lVar50;
                    local_310[6] = plVar68;
                    local_310[7] = pcVar83;
                    uVar89 = (undefined4)local_128;
                    uVar90 = local_128._4_4_;
                    puVar38 = local_310;
                  }
                  puStack_1e8 = puVar38 + 8;
                  local_1f8 = (byte)local_158;
                  local_208 = local_168;
                  uStack_200 = uStack_160;
                  local_310 = puStack_1e8;
                  plVar72 = local_168;
                  local_2f0 = puStack_1e8;
                }
                else {
                  local_168 = (long *)0x0;
                  uStack_160 = 0;
                  local_150 = std::
                              _Function_handler<bool(juce::detail::LineState_const&,juce::detail::ShapedGlyph_const&),juce::detail::LineOfWrappedGlyphCursorRanges::consume(juce::detail::WrappedGlyphsCursor_const&,bool)::{lambda(auto:1&,auto:2&)#2}>
                              ::_M_invoke;
                  local_158 = std::
                              _Function_handler<bool(juce::detail::LineState_const&,juce::detail::ShapedGlyph_const&),juce::detail::LineOfWrappedGlyphCursorRanges::consume(juce::detail::WrappedGlyphsCursor_const&,bool)::{lambda(auto:1&,auto:2&)#2}>
                              ::_M_manager;
                  uStack_248._0_4_ = (undefined4)CONCAT71(uStack_1f7,local_1f8);
                  uStack_248._4_4_ = (undefined4)((uint7)uStack_1f7 >> 0x18);
                  local_258 = local_208;
                  uStack_250._0_4_ = (undefined4)uStack_200;
                  uStack_250._4_4_ = (float)(uStack_200 >> 0x20);
                  plVar62 = plVar68;
                  pcVar48 = pcVar83;
                  if ((*plVar37 != 0) && (plVar68 < plVar34)) {
                    while( true ) {
                      plVar72 = (long *)(lVar50 + 0x28 + (long)plVar62 * 0x48);
                      lVar81 = (long)pcVar48 * 0x20;
                    /* try { // try from 0030e6e7 to 0030e6fd has its CatchHandler @ 003147cd */
                      cVar31 = (*local_150)(&local_168,&local_258,*plVar72 + lVar81);
                      if (cVar31 == '\0') break;
                      lVar33 = *plVar72;
                      uStack_250._4_4_ = *(float *)(lVar33 + lVar81) + uStack_250._4_4_;
                      plVar72 = *(long **)(lVar33 + 0x10 + lVar81);
                      if ((long)local_258 < (long)plVar72) {
                        local_258 = plVar72;
                      }
                      if (*plVar37 == 0) break;
                      uVar71 = 1;
                      plVar72 = plVar62;
                      do {
                        if (plVar34 <= plVar62) break;
                        pcVar9 = *(code **)(lVar50 + 0x20 + (long)plVar62 * 0x48);
                        uVar80 = (long)pcVar9 - (long)pcVar48;
                        if (uVar71 <= uVar80) {
                          uVar80 = uVar71;
                        }
                        pcVar48 = pcVar48 + uVar80;
                        plVar42 = (long *)((long)plVar62 + 1);
                        if (pcVar48 == pcVar9) {
                          pcVar48 = (code *)0x0;
                          plVar62 = plVar42;
                          plVar72 = plVar42;
                        }
                        uVar71 = uVar71 - uVar80;
                      } while (uVar71 != 0);
                      plVar62 = plVar72;
                      if (plVar34 <= plVar72) break;
                      if (local_158 == (code *)0x0) {
                    /* try { // try from 003144b7 to 003144c0 has its CatchHandler @ 003147c8 */
                    /* WARNING: Subroutine does not return */
                        std::__throw_bad_function_call();
                      }
                    }
                  }
                  local_288 = (code *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
                  fStack_28c = uStack_250._4_4_;
                  local_298._8_4_ = (undefined4)uStack_250;
                  local_298._0_8_ = local_258;
                  plVar72 = local_258;
                  local_280 = plVar34;
                  lStack_278 = lVar50;
                  local_270 = plVar62;
                  pcStack_268 = pcVar48;
                  if (local_158 != (code *)0x0) {
                    /* try { // try from 0030e847 to 0030e858 has its CatchHandler @ 003146bd */
                    plVar72 = (long *)(*local_158)(&local_168,&local_168,3);
                  }
                  if (((long)local_208 < 0) || (*plVar37 == 0)) {
LAB_0030e87a:
                    if (plVar62 == plVar68) {
                      if (pcVar48 != pcVar83) goto LAB_0030e888;
                    }
                    else {
LAB_0030e888:
                      uStack_248._0_4_ = SUB84(local_128,0);
                      uStack_248._4_4_ = (undefined4)((ulong)local_128 >> 0x20);
                      uStack_240 = uStack_120;
                      pcVar83 = uStack_240;
                      local_258 = local_138;
                      uStack_250._0_4_ = (undefined4)lStack_130;
                      uStack_250._4_4_ = (float)((ulong)lStack_130 >> 0x20);
                      local_228 = local_270;
                      uStack_220 = pcStack_268;
                      local_238 = SUB84(local_280,0);
                      uStack_234 = (undefined4)((ulong)local_280 >> 0x20);
                      uStack_230 = (undefined4)lStack_278;
                      uStack_22c = (undefined4)((ulong)lStack_278 >> 0x20);
                      if (local_310 == local_1e0) {
                        lVar81 = (long)local_310 - (long)local_308;
                        if (lVar81 == 0x7fffffffffffffc0) {
                    /* try { // try from 00314587 to 00314592 has its CatchHandler @ 003146b5 */
                    /* WARNING: Subroutine does not return */
                          std::__throw_length_error("vector::_M_realloc_insert");
                        }
                        uVar80 = lVar81 >> 6;
                        uVar71 = uVar80;
                        if (lVar81 == 0) {
                          uVar71 = 1;
                        }
                        uVar32 = uVar71 + uVar80;
                        if (0x1ffffffffffffff < uVar32) {
                          uVar32 = 0x1ffffffffffffff;
                        }
                        if (CARRY8(uVar71,uVar80)) {
                          uVar32 = 0x1ffffffffffffff;
                        }
                        if (uVar32 == 0) {
                          local_2f8 = (undefined8 *)0x0;
                        }
                        else {
                          local_2f8 = operator_new(uVar32 << 6);
                        }
                        puVar38 = local_2f8 + uVar80 * 8 + 6;
                        *(undefined4 *)puVar38 = (undefined4)local_228;
                        *(undefined4 *)((long)puVar38 + 4) = local_228._4_4_;
                        *(undefined4 *)(puVar38 + 1) = (undefined4)uStack_220;
                        *(undefined4 *)((long)puVar38 + 0xc) = uStack_220._4_4_;
                        puVar38 = local_2f8 + uVar80 * 8 + 4;
                        *(undefined4 *)puVar38 = local_238;
                        *(undefined4 *)((long)puVar38 + 4) = uStack_234;
                        *(undefined4 *)(puVar38 + 1) = uStack_230;
                        *(undefined4 *)((long)puVar38 + 0xc) = uStack_22c;
                        puVar38 = local_2f8 + uVar80 * 8 + 2;
                        *(undefined4 *)puVar38 = (undefined4)uStack_248;
                        *(undefined4 *)((long)puVar38 + 4) = uStack_248._4_4_;
                        *(undefined4 *)(puVar38 + 1) = (undefined4)uStack_240;
                        *(undefined4 *)((long)puVar38 + 0xc) = uStack_240._4_4_;
                        local_2f8[uVar80 * 8] = local_258;
                        (local_2f8 + uVar80 * 8)[1] =
                             CONCAT44(uStack_250._4_4_,(undefined4)uStack_250);
                        puVar38 = local_2f8;
                        uVar89 = (undefined4)uStack_248;
                        uVar90 = uStack_248._4_4_;
                        uVar91 = local_238;
                        uVar92 = uStack_234;
                        uVar93 = (undefined4)local_228;
                        uVar94 = local_228._4_4_;
                        if (local_308 != local_310) {
                          puVar55 = local_308;
                          do {
                            uVar11 = *puVar55;
                            uVar19 = puVar55[1];
                            uVar89 = *(undefined4 *)(puVar55 + 2);
                            uVar90 = *(undefined4 *)((long)puVar55 + 0x14);
                            uVar95 = *(undefined4 *)(puVar55 + 3);
                            uVar14 = *(undefined4 *)((long)puVar55 + 0x1c);
                            uVar91 = *(undefined4 *)(puVar55 + 4);
                            uVar92 = *(undefined4 *)((long)puVar55 + 0x24);
                            uVar15 = *(undefined4 *)(puVar55 + 5);
                            uVar16 = *(undefined4 *)((long)puVar55 + 0x2c);
                            uVar93 = *(undefined4 *)(puVar55 + 6);
                            uVar94 = *(undefined4 *)((long)puVar55 + 0x34);
                            uVar17 = *(undefined4 *)(puVar55 + 7);
                            uVar18 = *(undefined4 *)((long)puVar55 + 0x3c);
                            *(undefined4 *)(puVar38 + 6) = uVar93;
                            *(undefined4 *)((long)puVar38 + 0x34) = uVar94;
                            *(undefined4 *)(puVar38 + 7) = uVar17;
                            *(undefined4 *)((long)puVar38 + 0x3c) = uVar18;
                            *(undefined4 *)(puVar38 + 4) = uVar91;
                            *(undefined4 *)((long)puVar38 + 0x24) = uVar92;
                            *(undefined4 *)(puVar38 + 5) = uVar15;
                            *(undefined4 *)((long)puVar38 + 0x2c) = uVar16;
                            *(undefined4 *)(puVar38 + 2) = uVar89;
                            *(undefined4 *)((long)puVar38 + 0x14) = uVar90;
                            *(undefined4 *)(puVar38 + 3) = uVar95;
                            *(undefined4 *)((long)puVar38 + 0x1c) = uVar14;
                            *puVar38 = uVar11;
                            puVar38[1] = uVar19;
                            puVar55 = puVar55 + 8;
                            puVar38 = puVar38 + 8;
                          } while (puVar55 != local_310);
                        }
                        local_310 = puVar38 + 8;
                        if (local_308 != (undefined8 *)0x0) {
                          operator_delete(local_308);
                        }
                        param_4 = (long *)CONCAT44(uVar94,uVar93);
                        param_3 = (long *)CONCAT44(uVar92,uVar91);
                        local_1e0 = local_2f8 + uVar32 * 8;
                        local_308 = local_2f8;
                        local_2f0 = local_310;
                        local_1f0 = local_2f8;
                        puStack_1e8 = local_310;
                      }
                      else {
                        uStack_240._0_4_ = SUB84(uStack_120,0);
                        uStack_240._4_4_ = (undefined4)((ulong)uStack_120 >> 0x20);
                        auVar8._8_4_ = uStack_230;
                        auVar8._0_8_ = local_280;
                        auVar8._12_4_ = uStack_22c;
                        local_310[6] = local_270;
                        local_310[7] = pcStack_268;
                        *(undefined1 (*) [16])(local_310 + 4) = auVar8;
                        *(undefined4 *)(local_310 + 2) = (undefined4)uStack_248;
                        *(undefined4 *)((long)local_310 + 0x14) = uStack_248._4_4_;
                        *(undefined4 *)(local_310 + 3) = (undefined4)uStack_240;
                        *(undefined4 *)((long)local_310 + 0x1c) = uStack_240._4_4_;
                        *local_310 = local_138;
                        local_310[1] = lStack_130;
                        local_310 = local_310 + 8;
                        uVar89 = (undefined4)uStack_248;
                        uVar90 = uStack_248._4_4_;
                        param_3 = local_280;
                        param_4 = local_270;
                        local_2f0 = local_310;
                        uStack_240 = pcVar83;
                        puStack_1e8 = local_310;
                      }
                    }
                    local_1f8 = (byte)local_288;
                    local_208 = (long *)local_298._0_8_;
                    uStack_200 = (ulong)stack0xfffffffffffffd70;
                    plVar68 = plVar62;
                    pcVar83 = pcVar48;
                    plVar72 = (long *)local_298._0_8_;
                  }
                  else if (plVar34 <= plVar62) goto LAB_0030e87a;
                }
                pauVar66 = local_1b8;
                local_138 = plVar34;
                lStack_130 = lVar50;
                local_128 = plVar68;
                uStack_120 = pcVar83;
                if (*plVar37 != 0) {
                  if (plVar68 < plVar34) {
                    if (local_1b8 == pauStack_1b0) {
                      std::
                      vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>>
                      ::
                      _M_realloc_insert<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&>
                                ((vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>>
                                  *)&pauStack_1c0,(undefined8 *)local_1b8,(long *)&local_1f0);
                    }
                    else {
                      uVar71 = (long)local_2f0 - (long)local_2f8 >> 6;
                      *(undefined8 *)*local_1b8 = 0;
                      *(undefined8 *)(*local_1b8 + 8) = 0;
                      *(undefined8 *)local_1b8[1] = 0;
                      if ((long)local_2f0 - (long)local_2f8 == 0) {
                        puVar38 = (undefined8 *)0x0;
                      }
                      else {
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = uVar71;
                        if (SUB168(auVar12 * ZEXT816(0x40),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00314513 to 00314517 has its CatchHandler @ 003146a1 */
                          std::__throw_bad_array_new_length();
                        }
                    /* try { // try from 0030ed10 to 0030ed38 has its CatchHandler @ 003146ca */
                        puVar38 = operator_new(SUB168(auVar12 * ZEXT816(0x40),0));
                      }
                      *(undefined8 **)*pauVar66 = puVar38;
                      *(undefined8 **)(*pauVar66 + 8) = puVar38;
                      *(undefined8 **)pauVar66[1] = puVar38 + uVar71 * 8;
                      for (puVar55 = local_2f8; puVar55 != local_2f0; puVar55 = puVar55 + 8) {
                        uVar19 = *puVar55;
                        uVar20 = puVar55[1];
                        uVar89 = *(undefined4 *)(puVar55 + 2);
                        uVar90 = *(undefined4 *)((long)puVar55 + 0x14);
                        uVar91 = *(undefined4 *)(puVar55 + 3);
                        uVar92 = *(undefined4 *)((long)puVar55 + 0x1c);
                        auVar8 = *(undefined1 (*) [16])(puVar55 + 4);
                        param_3 = auVar8._0_8_;
                        param_4 = (long *)puVar55[6];
                        uVar11 = puVar55[7];
                        puVar38[6] = param_4;
                        puVar38[7] = uVar11;
                        *(undefined1 (*) [16])(puVar38 + 4) = auVar8;
                        *(undefined4 *)(puVar38 + 2) = uVar89;
                        *(undefined4 *)((long)puVar38 + 0x14) = uVar90;
                        *(undefined4 *)(puVar38 + 3) = uVar91;
                        *(undefined4 *)((long)puVar38 + 0x1c) = uVar92;
                        *puVar38 = uVar19;
                        puVar38[1] = uVar20;
                        puVar38 = puVar38 + 8;
                      }
                      *(undefined8 **)(*pauVar66 + 8) = puVar38;
                      local_1b8 = (undefined1 (*) [16])(pauVar66[1] + 8);
                    }
                    local_208 = (long *)0xffffffffffffffff;
                    uStack_200 = (ulong)local_210 & 0xffffffff;
                    local_1f8 = (byte)local_2c0;
                    plVar72 = (long *)0x0;
                    local_1f0 = (undefined8 *)0x0;
                    puStack_1e8 = (undefined8 *)0x0;
                    local_1e0 = (undefined8 *)0x0;
                    if (local_2f8 != (undefined8 *)0x0) {
                      operator_delete(local_2f8);
                      plVar72 = extraout_XMM0_Qa;
                    }
                    local_2f8 = (undefined8 *)0x0;
                    local_2f0 = (undefined8 *)0x0;
                    local_308 = (undefined8 *)0x0;
                    local_310 = (undefined8 *)0x0;
                  }
                }
                uStack_250 = (long *)CONCAT44(uStack_250._4_4_,(undefined4)uStack_250);
                uStack_248 = (long *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
                if (*plVar37 == 0) break;
                uStack_250 = (long *)CONCAT44(uStack_250._4_4_,(undefined4)uStack_250);
                uStack_248 = (long *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
              } while (plVar68 < plVar34);
            }
            lVar81 = 0;
            uVar71 = 0;
            uVar80 = 0;
            do {
              uVar32 = *(ulong *)(lVar50 + 0x30 + lVar81);
              uVar75 = *(ulong *)(lVar50 + 0x38 + lVar81);
              if ((long)uVar32 < (long)uVar80) {
                uVar80 = uVar32;
              }
              if ((long)uVar71 < (long)uVar75) {
                uVar71 = uVar75;
              }
              if ((long)uVar71 <= (long)uVar80) {
                uVar71 = uVar80;
              }
              lVar81 = lVar81 + 0x48;
            } while ((long)plVar34 * 0x48 != lVar81);
          }
                    /* try { // try from 0030ee92 to 0030eea1 has its CatchHandler @ 00314695 */
          Shaper::getChunksUpToNextSafeBreak
                    (plVar72,CONCAT44(uVar90,uVar89),param_3,param_4,param_5,param_6,param_7,param_8
                     ,&local_258,(long *)&local_f0,uVar71);
          local_188._8_8_ = uStack_250;
          local_188._0_8_ = local_258;
          local_178 = uStack_248;
          plVar34 = local_258;
          if (local_258 == uStack_250) goto joined_r0x0030eee2;
          pvVar57 = local_1c8;
          if (pvStack_1d0 == local_1c8) goto LAB_0030e2e0;
          *(long **)pvStack_1d0 = local_258;
          *(long **)(pvStack_1d0 + 8) = uStack_250;
          *(long **)(pvStack_1d0 + 0x10) = uStack_248;
          local_188 = (undefined1  [16])0x0;
          local_178 = (long *)0x0;
          pvVar65 = pvStack_1d0;
        } while( true );
      }
      local_308 = (undefined8 *)0x0;
      local_310 = (undefined8 *)0x0;
      plVar34 = (long *)local_188._0_8_;
joined_r0x0030eee2:
      if (plVar34 != (long *)0x0) {
        operator_delete(plVar34);
      }
      pauVar66 = local_1b8;
      if (local_1b8 == pauStack_1b0) {
        std::
        vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>>
        ::
        _M_realloc_insert<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&>
                  ((vector<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>,std::allocator<std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>>>
                    *)&pauStack_1c0,(undefined8 *)local_1b8,(long *)&local_1f0);
      }
      else {
        uVar71 = (long)local_310 - (long)local_308 >> 6;
        *local_1b8 = (undefined1  [16])0x0;
        *(undefined8 *)local_1b8[1] = 0;
        if ((long)local_310 - (long)local_308 == 0) {
          puVar38 = (undefined8 *)0x0;
        }
        else {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar71;
          if (SUB168(auVar13 * ZEXT816(0x40),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003145f8 to 003145fc has its CatchHandler @ 00314605 */
            std::__throw_bad_array_new_length();
          }
                    /* try { // try from 0030ef32 to 0030ef67 has its CatchHandler @ 00314607 */
          puVar38 = operator_new(SUB168(auVar13 * ZEXT816(0x40),0));
        }
        *(undefined8 **)*pauVar66 = puVar38;
        *(undefined8 **)(*pauVar66 + 8) = puVar38;
        *(undefined8 **)pauVar66[1] = puVar38 + uVar71 * 8;
        if (local_308 != local_310) {
          puVar55 = local_308;
          do {
            uVar19 = *puVar55;
            uVar20 = puVar55[1];
            uVar89 = *(undefined4 *)(puVar55 + 2);
            uVar90 = *(undefined4 *)((long)puVar55 + 0x14);
            uVar91 = *(undefined4 *)(puVar55 + 3);
            uVar92 = *(undefined4 *)((long)puVar55 + 0x1c);
            auVar8 = *(undefined1 (*) [16])(puVar55 + 4);
            param_3 = auVar8._0_8_;
            param_4 = (long *)puVar55[6];
            uVar11 = puVar55[7];
            puVar38[6] = param_4;
            puVar38[7] = uVar11;
            *(undefined1 (*) [16])(puVar38 + 4) = auVar8;
            *(undefined4 *)(puVar38 + 2) = uVar89;
            *(undefined4 *)((long)puVar38 + 0x14) = uVar90;
            *(undefined4 *)(puVar38 + 3) = uVar91;
            *(undefined4 *)((long)puVar38 + 0x1c) = uVar92;
            *puVar38 = uVar19;
            puVar38[1] = uVar20;
            puVar55 = puVar55 + 8;
            puVar38 = puVar38 + 8;
          } while (puVar55 != local_310);
        }
        *(undefined8 **)(*pauVar66 + 8) = puVar38;
        local_1b8 = (undefined1 (*) [16])(pauVar66[1] + 8);
      }
      if (local_308 != (undefined8 *)0x0) {
        operator_delete(local_308);
      }
      pauVar69 = local_1b8;
      pauVar66 = pauStack_1c0;
      local_210 = (ulong *)local_2a0[0xd];
      local_2c8 = (ulong *)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 4);
      local_2a8 = pauStack_1c0;
      uVar71 = (long)local_210 - (long)local_2c8;
      if ((uVar71 == 0) ||
         (uVar80 = ((long)local_1b8 - (long)pauStack_1c0) / 0x18, uVar80 <= uVar71)) {
LAB_0030f620:
        local_2b0 = pauVar69;
        param_11 = local_2a0;
      }
      else {
        local_2b0 = (undefined1 (*) [16])(uVar71 * 3);
        param_14 = (ulong **)((long)pauStack_1c0 + uVar71 * 0x18 + -0x10);
        uVar32 = uVar71;
        local_2c0 = uVar71;
        do {
          puVar76 = *(ulong **)((long)local_2a8 + uVar32 * 0x18);
          puVar59 = *(ulong **)((long)local_2a8 + uVar32 * 0x18 + 8);
          if (puVar76 != puVar59) {
            puVar61 = *param_14;
            pvVar41 = *(void **)((long)pauVar66 + uVar71 * 0x18 + -0x18);
            uVar73 = (long)puVar61 - (long)pvVar41;
            puVar82 = (ulong *)((uVar73 & 0xffffffffffffffc0) + (long)pvVar41);
            uVar64 = (long)puVar59 - (long)puVar76;
            uVar75 = (long)uVar64 >> 6;
            if ((ulong)(*(long *)((long)pauVar66 + uVar71 * 0x18 + -8) - (long)puVar61 >> 6) <
                uVar75) {
              uVar64 = (long)uVar73 >> 6;
              if (0x1ffffffffffffff - uVar64 < uVar75) {
                    /* try { // try from 003145b0 to 003145bb has its CatchHandler @ 00314658 */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_range_insert");
              }
              if (uVar75 <= uVar64) {
                uVar75 = uVar64;
              }
              uVar39 = uVar64 + uVar75;
              if (0x1ffffffffffffff < uVar39) {
                uVar39 = 0x1ffffffffffffff;
              }
              if (CARRY8(uVar75,uVar64)) {
                uVar39 = 0x1ffffffffffffff;
              }
              if (uVar39 == 0) {
                puVar40 = (ulong *)0x0;
              }
              else {
                    /* try { // try from 0030f10a to 0030f10e has its CatchHandler @ 00314656 */
                puVar40 = operator_new(uVar39 << 6);
              }
              puVar49 = puVar40;
              if (uVar73 != 0) {
                lVar50 = 0;
                do {
                  uVar11 = *(undefined8 *)((long)pvVar41 + lVar50);
                  uVar19 = ((undefined8 *)((long)pvVar41 + lVar50))[1];
                  puVar38 = (undefined8 *)((long)pvVar41 + lVar50 + 0x10);
                  uVar20 = *puVar38;
                  uVar21 = puVar38[1];
                  puVar38 = (undefined8 *)((long)pvVar41 + lVar50 + 0x20);
                  uVar22 = *puVar38;
                  uVar23 = puVar38[1];
                  puVar38 = (undefined8 *)((long)pvVar41 + lVar50 + 0x30);
                  uVar24 = puVar38[1];
                  puVar55 = (undefined8 *)((long)puVar40 + lVar50 + 0x30);
                  *puVar55 = *puVar38;
                  puVar55[1] = uVar24;
                  puVar38 = (undefined8 *)((long)puVar40 + lVar50 + 0x20);
                  *puVar38 = uVar22;
                  puVar38[1] = uVar23;
                  puVar38 = (undefined8 *)((long)puVar40 + lVar50 + 0x10);
                  *puVar38 = uVar20;
                  puVar38[1] = uVar21;
                  *(undefined8 *)((long)puVar40 + lVar50) = uVar11;
                  ((undefined8 *)((long)puVar40 + lVar50))[1] = uVar19;
                  lVar50 = lVar50 + 0x40;
                } while (uVar64 * 0x40 != lVar50);
                puVar49 = (ulong *)(lVar50 + (long)puVar40);
              }
              do {
                uVar75 = *puVar76;
                uVar64 = puVar76[1];
                uVar73 = puVar76[2];
                uVar89 = *(undefined4 *)((long)puVar76 + 0x14);
                uVar29 = puVar76[3];
                uVar90 = *(undefined4 *)((long)puVar76 + 0x1c);
                uVar91 = (undefined4)puVar76[4];
                uVar92 = *(undefined4 *)((long)puVar76 + 0x24);
                uVar28 = puVar76[5];
                uVar93 = *(undefined4 *)((long)puVar76 + 0x2c);
                uVar94 = (undefined4)puVar76[6];
                uVar95 = *(undefined4 *)((long)puVar76 + 0x34);
                uVar26 = puVar76[7];
                uVar14 = *(undefined4 *)((long)puVar76 + 0x3c);
                *(undefined4 *)(puVar49 + 6) = uVar94;
                *(undefined4 *)((long)puVar49 + 0x34) = uVar95;
                *(int *)(puVar49 + 7) = (int)uVar26;
                *(undefined4 *)((long)puVar49 + 0x3c) = uVar14;
                *(undefined4 *)(puVar49 + 4) = uVar91;
                *(undefined4 *)((long)puVar49 + 0x24) = uVar92;
                *(int *)(puVar49 + 5) = (int)uVar28;
                *(undefined4 *)((long)puVar49 + 0x2c) = uVar93;
                *(int *)(puVar49 + 2) = (int)uVar73;
                *(undefined4 *)((long)puVar49 + 0x14) = uVar89;
                *(int *)(puVar49 + 3) = (int)uVar29;
                *(undefined4 *)((long)puVar49 + 0x1c) = uVar90;
                *puVar49 = uVar75;
                puVar49[1] = uVar64;
                puVar76 = puVar76 + 8;
                puVar49 = puVar49 + 8;
              } while (puVar76 != puVar59);
              for (; puVar61 != puVar82; puVar82 = puVar82 + 8) {
                uVar75 = *puVar82;
                uVar64 = puVar82[1];
                uVar73 = puVar82[2];
                uVar89 = *(undefined4 *)((long)puVar82 + 0x14);
                uVar29 = puVar82[3];
                uVar90 = *(undefined4 *)((long)puVar82 + 0x1c);
                uVar91 = (undefined4)puVar82[4];
                uVar92 = *(undefined4 *)((long)puVar82 + 0x24);
                uVar28 = puVar82[5];
                uVar93 = *(undefined4 *)((long)puVar82 + 0x2c);
                uVar94 = (undefined4)puVar82[6];
                uVar95 = *(undefined4 *)((long)puVar82 + 0x34);
                uVar26 = puVar82[7];
                uVar14 = *(undefined4 *)((long)puVar82 + 0x3c);
                *(undefined4 *)(puVar49 + 6) = uVar94;
                *(undefined4 *)((long)puVar49 + 0x34) = uVar95;
                *(int *)(puVar49 + 7) = (int)uVar26;
                *(undefined4 *)((long)puVar49 + 0x3c) = uVar14;
                *(undefined4 *)(puVar49 + 4) = uVar91;
                *(undefined4 *)((long)puVar49 + 0x24) = uVar92;
                *(int *)(puVar49 + 5) = (int)uVar28;
                *(undefined4 *)((long)puVar49 + 0x2c) = uVar93;
                *(int *)(puVar49 + 2) = (int)uVar73;
                *(undefined4 *)((long)puVar49 + 0x14) = uVar89;
                *(int *)(puVar49 + 3) = (int)uVar29;
                *(undefined4 *)((long)puVar49 + 0x1c) = uVar90;
                *puVar49 = uVar75;
                puVar49[1] = uVar64;
                puVar49 = puVar49 + 8;
              }
              if (pvVar41 != (void *)0x0) {
                operator_delete(pvVar41);
              }
              param_4 = (long *)CONCAT44(uVar95,uVar94);
              param_3 = (long *)CONCAT44(uVar92,uVar91);
              *(ulong **)((long)pauVar66 + uVar71 * 0x18 + -0x18) = puVar40;
              *param_14 = puVar49;
              *(ulong **)((long)pauVar66 + uVar71 * 0x18 + -8) = puVar40 + uVar39 * 8;
            }
            else {
              uVar73 = (long)puVar61 - (long)puVar82 >> 6;
              if (uVar75 < uVar73) {
                puVar59 = puVar61;
                if (uVar64 != 0) {
                  lVar50 = 0;
                  do {
                    puVar38 = (undefined8 *)((long)puVar61 + lVar50 + uVar75 * -0x40);
                    uVar19 = *puVar38;
                    uVar20 = puVar38[1];
                    puVar2 = (undefined4 *)((long)puVar61 + lVar50 + uVar75 * -0x40 + 0x10);
                    uVar89 = *puVar2;
                    uVar90 = puVar2[1];
                    uVar91 = puVar2[2];
                    uVar92 = puVar2[3];
                    auVar8 = *(undefined1 (*) [16])((long)puVar61 + lVar50 + uVar75 * -0x40 + 0x20);
                    param_3 = auVar8._0_8_;
                    puVar38 = (undefined8 *)((long)puVar61 + lVar50 + uVar75 * -0x40 + 0x30);
                    param_4 = (long *)*puVar38;
                    uVar11 = puVar38[1];
                    puVar38 = (undefined8 *)((long)puVar61 + lVar50 + 0x30);
                    *puVar38 = param_4;
                    puVar38[1] = uVar11;
                    *(undefined1 (*) [16])((long)puVar61 + lVar50 + 0x20) = auVar8;
                    puVar2 = (undefined4 *)((long)puVar61 + lVar50 + 0x10);
                    *puVar2 = uVar89;
                    puVar2[1] = uVar90;
                    puVar2[2] = uVar91;
                    puVar2[3] = uVar92;
                    *(undefined8 *)((long)puVar61 + lVar50) = uVar19;
                    ((undefined8 *)((long)puVar61 + lVar50))[1] = uVar20;
                    lVar50 = lVar50 + 0x40;
                  } while (uVar75 * -0x40 + lVar50 != 0);
                  puVar59 = *param_14;
                }
                *param_14 = puVar59 + uVar75 * 8;
                uVar73 = (long)puVar61 + (uVar75 * -0x40 - (long)puVar82);
                if (0 < (long)uVar73) {
                  uVar73 = (uVar73 >> 6) + 1;
                  do {
                    puVar40 = puVar61 + -8;
                    uVar29 = puVar40[uVar75 * -8];
                    uVar28 = (puVar40 + uVar75 * -8)[1];
                    puVar59 = puVar61 + uVar75 * -8 + -6;
                    uVar26 = *puVar59;
                    uVar89 = *(undefined4 *)((long)puVar59 + 4);
                    uVar27 = puVar59[1];
                    uVar90 = *(undefined4 *)((long)puVar59 + 0xc);
                    auVar8 = *(undefined1 (*) [16])(puVar61 + uVar75 * -8 + -4);
                    param_3 = auVar8._0_8_;
                    param_4 = (long *)puVar61[uVar75 * -8 + -2];
                    uVar39 = (puVar61 + uVar75 * -8 + -2)[1];
                    puVar61[-2] = (ulong)param_4;
                    puVar61[-1] = uVar39;
                    *(undefined1 (*) [16])(puVar61 + -4) = auVar8;
                    *(int *)(puVar61 + -6) = (int)uVar26;
                    *(undefined4 *)((long)puVar61 - 0x2c) = uVar89;
                    *(int *)(puVar61 + -5) = (int)uVar27;
                    *(undefined4 *)((long)puVar61 - 0x24) = uVar90;
                    *puVar40 = uVar29;
                    puVar61[-7] = uVar28;
                    uVar73 = uVar73 - 1;
                    puVar61 = puVar40;
                  } while (1 < uVar73);
                }
                if (0 < (long)uVar64) {
                  uVar75 = (uVar64 >> 6) + 1;
                  lVar50 = 0;
                  do {
                    uVar19 = *(undefined8 *)((long)puVar76 + lVar50);
                    uVar20 = ((undefined8 *)((long)puVar76 + lVar50))[1];
                    puVar2 = (undefined4 *)((long)puVar76 + lVar50 + 0x10);
                    uVar89 = *puVar2;
                    uVar90 = puVar2[1];
                    uVar91 = puVar2[2];
                    uVar92 = puVar2[3];
                    auVar8 = *(undefined1 (*) [16])((long)puVar76 + lVar50 + 0x20);
                    param_3 = auVar8._0_8_;
                    puVar38 = (undefined8 *)((long)puVar76 + lVar50 + 0x30);
                    param_4 = (long *)*puVar38;
                    uVar11 = puVar38[1];
                    puVar38 = (undefined8 *)((long)puVar82 + lVar50 + 0x30);
                    *puVar38 = param_4;
                    puVar38[1] = uVar11;
                    *(undefined1 (*) [16])((long)puVar82 + lVar50 + 0x20) = auVar8;
                    puVar2 = (undefined4 *)((long)puVar82 + lVar50 + 0x10);
                    *puVar2 = uVar89;
                    puVar2[1] = uVar90;
                    puVar2[2] = uVar91;
                    puVar2[3] = uVar92;
                    *(undefined8 *)((long)puVar82 + lVar50) = uVar19;
                    ((undefined8 *)((long)puVar82 + lVar50))[1] = uVar20;
                    uVar75 = uVar75 - 1;
                    lVar50 = lVar50 + 0x40;
                  } while (1 < uVar75);
                }
              }
              else {
                puVar40 = puVar76 + uVar73 * 8;
                puVar49 = puVar61;
                if (puVar40 != puVar59) {
                  do {
                    uVar39 = *puVar40;
                    uVar29 = puVar40[1];
                    uVar28 = puVar40[2];
                    uVar89 = *(undefined4 *)((long)puVar40 + 0x14);
                    uVar26 = puVar40[3];
                    uVar90 = *(undefined4 *)((long)puVar40 + 0x1c);
                    auVar8 = *(undefined1 (*) [16])(puVar40 + 4);
                    param_3 = auVar8._0_8_;
                    param_4 = (long *)puVar40[6];
                    uVar64 = puVar40[7];
                    puVar49[6] = (ulong)param_4;
                    puVar49[7] = uVar64;
                    *(undefined1 (*) [16])(puVar49 + 4) = auVar8;
                    *(int *)(puVar49 + 2) = (int)uVar28;
                    *(undefined4 *)((long)puVar49 + 0x14) = uVar89;
                    *(int *)(puVar49 + 3) = (int)uVar26;
                    *(undefined4 *)((long)puVar49 + 0x1c) = uVar90;
                    *puVar49 = uVar39;
                    puVar49[1] = uVar29;
                    puVar40 = puVar40 + 8;
                    puVar49 = puVar49 + 8;
                  } while (puVar40 != puVar59);
                  puVar49 = *param_14;
                }
                puVar49 = puVar49 + (uVar75 - uVar73) * 8;
                *param_14 = puVar49;
                if (puVar61 != puVar82) {
                  puVar59 = puVar82;
                  do {
                    uVar64 = *puVar59;
                    uVar39 = puVar59[1];
                    uVar29 = puVar59[2];
                    uVar89 = *(undefined4 *)((long)puVar59 + 0x14);
                    uVar28 = puVar59[3];
                    uVar90 = *(undefined4 *)((long)puVar59 + 0x1c);
                    auVar8 = *(undefined1 (*) [16])(puVar59 + 4);
                    param_3 = auVar8._0_8_;
                    param_4 = (long *)puVar59[6];
                    uVar75 = puVar59[7];
                    puVar49[6] = (ulong)param_4;
                    puVar49[7] = uVar75;
                    *(undefined1 (*) [16])(puVar49 + 4) = auVar8;
                    *(int *)(puVar49 + 2) = (int)uVar29;
                    *(undefined4 *)((long)puVar49 + 0x14) = uVar89;
                    *(int *)(puVar49 + 3) = (int)uVar28;
                    *(undefined4 *)((long)puVar49 + 0x1c) = uVar90;
                    *puVar49 = uVar64;
                    puVar49[1] = uVar39;
                    puVar59 = puVar59 + 8;
                    puVar49 = puVar49 + 8;
                  } while (puVar59 != puVar61);
                  puVar49 = *param_14;
                }
                *param_14 = puVar49 + uVar73 * 8;
                if (0 < (long)puVar61 - (long)puVar82) {
                  uVar75 = (uVar73 & 0x3ffffffffffffff) + 1;
                  lVar50 = 0;
                  do {
                    uVar19 = *(undefined8 *)((long)puVar76 + lVar50);
                    uVar20 = ((undefined8 *)((long)puVar76 + lVar50))[1];
                    puVar2 = (undefined4 *)((long)puVar76 + lVar50 + 0x10);
                    uVar89 = *puVar2;
                    uVar90 = puVar2[1];
                    uVar91 = puVar2[2];
                    uVar92 = puVar2[3];
                    auVar8 = *(undefined1 (*) [16])((long)puVar76 + lVar50 + 0x20);
                    param_3 = auVar8._0_8_;
                    puVar38 = (undefined8 *)((long)puVar76 + lVar50 + 0x30);
                    param_4 = (long *)*puVar38;
                    uVar11 = puVar38[1];
                    puVar38 = (undefined8 *)((long)puVar82 + lVar50 + 0x30);
                    *puVar38 = param_4;
                    puVar38[1] = uVar11;
                    *(undefined1 (*) [16])((long)puVar82 + lVar50 + 0x20) = auVar8;
                    puVar2 = (undefined4 *)((long)puVar82 + lVar50 + 0x10);
                    *puVar2 = uVar89;
                    puVar2[1] = uVar90;
                    puVar2[2] = uVar91;
                    puVar2[3] = uVar92;
                    *(undefined8 *)((long)puVar82 + lVar50) = uVar19;
                    ((undefined8 *)((long)puVar82 + lVar50))[1] = uVar20;
                    uVar75 = uVar75 - 1;
                    lVar50 = lVar50 + 0x40;
                  } while (1 < uVar75);
                }
              }
            }
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 < uVar80);
        if (local_2c0 == uVar80) {
          local_2b0 = pauVar69;
          param_11 = local_2a0;
        }
        else {
          uVar71 = (long)pauVar69 - ((long)local_2a8 + uVar80 * 0x18);
          if (uVar71 == 0) {
            uVar71 = 0;
          }
          else if (0 < (long)uVar71) {
            lVar81 = uVar71 / 0x18 + 1;
            lVar33 = (long)local_210 * 0x18 + (long)local_2c8 * -0x18;
            lVar50 = uVar80 * 0x18;
            pauVar66 = local_2a8;
            do {
              pvVar41 = *(void **)((long)pauVar66 + lVar33);
              uVar11 = ((undefined8 *)((long)pauVar66 + lVar50))[1];
              *(undefined8 *)((long)pauVar66 + lVar33) = *(undefined8 *)((long)pauVar66 + lVar50);
              ((undefined8 *)((long)pauVar66 + lVar33))[1] = uVar11;
              *(undefined8 *)((long)pauVar66 + lVar33 + 0x10) =
                   *(undefined8 *)((long)pauVar66 + lVar50 + 0x10);
              *(undefined1 (*) [16])((long)pauVar66 + lVar50) = (undefined1  [16])0x0;
              *(undefined8 *)((long)pauVar66 + lVar50 + 0x10) = 0;
              if (pvVar41 != (void *)0x0) {
                operator_delete(pvVar41);
              }
              lVar81 = lVar81 + -1;
              pauVar66 = (undefined1 (*) [16])(pauVar66[1] + 8);
            } while (1 < lVar81);
          }
          param_11 = local_2a0;
          pauVar66 = (undefined1 (*) [16])(*local_2a8 + uVar71 + (long)local_2b0 * 8);
          if (pauVar69 == pauVar66) goto LAB_0030f620;
          local_2b0 = pauVar66;
          do {
            if (*(void **)*pauVar66 != (void *)0x0) {
              operator_delete(*(void **)*pauVar66);
            }
            pauVar66 = (undefined1 (*) [16])(pauVar66[1] + 8);
          } while (pauVar66 != pauVar69);
          local_1b8 = local_2b0;
        }
      }
      pauVar69 = local_2a8;
      pauVar66 = local_2b0;
      if ((ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 4) < param_11[0xd]) {
        pauVar66 = local_2a8;
        if (local_2a8 != local_2b0) {
LAB_0030f7a7:
          puVar76 = *(ulong **)*pauVar69;
          local_2c8 = *(ulong **)(*pauVar69 + 8);
          _local_298 = (undefined1  [16])0x0;
          local_288 = (code *)0x0;
          local_2a8 = pauVar69;
          if (puVar76 == local_2c8) {
LAB_003101f0:
            local_2c0 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 5;
          }
          else {
            do {
              local_258 = (long *)0x0;
              uVar71 = puVar76[1];
              uStack_250 = (long *)0x0;
              uStack_248 = (long *)0x0;
              if (uVar71 == puVar76[5]) {
                uStack_250 = (long *)0x0;
                uStack_248 = (long *)0x0;
                if (*puVar76 == puVar76[4]) {
                  param_14 = (ulong **)puVar76[2];
                  uVar80 = puVar76[3];
                  uVar32 = puVar76[7];
                  bVar87 = param_14 < (ulong **)puVar76[6];
                  bVar88 = bVar87;
                  if (param_14 == (ulong **)puVar76[6]) {
                    bVar88 = uVar80 < uVar32;
                  }
                  uStack_250 = (long *)0x0;
                  uStack_248 = (long *)0x0;
                  if (bVar88) {
                    plVar34 = (long *)0x0;
                    uStack_248 = (long *)0x0;
                    while( true ) {
                      plVar72 = local_258;
                      lVar50 = *(long *)(uVar71 + 0x28 + (long)param_14 * 0x48);
                      lVar67 = uVar80 * 0x20;
                      lVar81 = *(long *)(uVar71 + 0x20 + (long)param_14 * 0x48);
                      lVar51 = lVar81 * 0x20 + lVar50;
                      lVar33 = 0;
                      if (!bVar87) {
                        lVar33 = uVar32 - lVar81;
                      }
                      lVar56 = lVar33 * 0x20;
                      bVar88 = *(char *)(uVar71 + 0x10 + (long)param_14 * 0x48) != '\0';
                      lVar81 = *(long *)(uVar71 + 0x18 + (long)param_14 * 0x48);
                      lVar84 = lVar56 + -0x20 + lVar51;
                      if (bVar88) {
                        lVar84 = lVar50 + lVar67;
                      }
                      lVar52 = lVar50 + -0x20 + lVar67;
                      if (bVar88) {
                        lVar52 = lVar51 + lVar56;
                      }
                      lVar50 = *(long *)(lVar50 + 0x10 + lVar67);
                      plVar68 = (long *)(uVar71 + 0x38 + (long)param_14 * 0x48);
                      if (lVar33 < 0) {
                        plVar68 = (long *)(lVar56 + 0x10 + lVar51);
                      }
                      lVar33 = *(long *)(uVar71 + 0x40 + (long)param_14 * 0x48);
                      lVar51 = *plVar68;
                      if (*plVar68 <= lVar50) {
                        lVar51 = lVar50;
                      }
                      if (lVar81 != 0) {
                        LOCK();
                        *(int *)(lVar81 + 8) = *(int *)(lVar81 + 8) + 1;
                        UNLOCK();
                      }
                      if (plVar34 == uStack_248) {
                        lVar67 = (long)plVar34 - (long)local_258;
                        uStack_250 = plVar34;
                        if (lVar67 == 0x7fffffffffffffe0) {
                    /* try { // try from 003144d7 to 003144e2 has its CatchHandler @ 00314750 */
                    /* WARNING: Subroutine does not return */
                          std::__throw_length_error("vector::_M_realloc_insert");
                        }
                        lVar56 = lVar67 >> 4;
                        uVar80 = lVar56 * -0x5555555555555555;
                        uVar71 = uVar80;
                        if (lVar67 == 0) {
                          uVar71 = 1;
                        }
                        uVar32 = uVar71 + uVar80;
                        if (0x2aaaaaaaaaaaaaa < uVar32) {
                          uVar32 = 0x2aaaaaaaaaaaaaa;
                        }
                        if (CARRY8(uVar71,uVar80)) {
                          uVar32 = 0x2aaaaaaaaaaaaaa;
                        }
                    /* try { // try from 0030f9be to 0030f9c2 has its CatchHandler @ 00314746 */
                        plVar68 = operator_new(uVar32 * 0x30);
                        plVar68[lVar56 * 2] = lVar84;
                        plVar68[lVar56 * 2 + 1] = lVar52;
                        plVar68[lVar56 * 2 + 2] = lVar33;
                        plVar68[lVar56 * 2 + 3] = lVar50;
                        plVar68[lVar56 * 2 + 4] = lVar51;
                        plVar68[lVar56 * 2 + 5] = lVar81;
                        if (plVar72 == plVar34) {
                          plVar34 = plVar68 + 6;
                        }
                        else {
                          plVar37 = plVar72;
                          plVar62 = plVar68;
                          do {
                            plVar42 = plVar62;
                            plVar42[4] = plVar37[4];
                            lVar50 = *plVar37;
                            lVar81 = plVar37[1];
                            uVar89 = *(undefined4 *)((long)plVar37 + 0x14);
                            lVar33 = plVar37[3];
                            uVar90 = *(undefined4 *)((long)plVar37 + 0x1c);
                            *(int *)(plVar42 + 2) = (int)plVar37[2];
                            *(undefined4 *)((long)plVar42 + 0x14) = uVar89;
                            *(int *)(plVar42 + 3) = (int)lVar33;
                            *(undefined4 *)((long)plVar42 + 0x1c) = uVar90;
                            *plVar42 = lVar50;
                            plVar42[1] = lVar81;
                            plVar42[5] = plVar37[5];
                            plVar37[5] = 0;
                            plVar37 = plVar37 + 6;
                            plVar62 = plVar42 + 6;
                          } while (plVar37 != plVar34);
                          plVar34 = plVar42 + 0xc;
                        }
                        if (plVar72 != (long *)0x0) {
                          operator_delete(plVar72);
                        }
                        uStack_248 = plVar68 + uVar32 * 6;
                        local_258 = plVar68;
                      }
                      else {
                        *plVar34 = lVar84;
                        plVar34[1] = lVar52;
                        plVar34[2] = lVar33;
                        plVar34[3] = lVar50;
                        plVar34[4] = lVar51;
                        plVar34[5] = lVar81;
                        plVar34 = plVar34 + 6;
                      }
                      plVar72 = local_258;
                      param_14 = (ulong **)((long)param_14 + 1);
                      uVar32 = puVar76[7];
                      bVar87 = param_14 < (ulong **)puVar76[6];
                      bVar88 = uVar32 != 0;
                      if (param_14 != (ulong **)puVar76[6]) {
                        bVar88 = bVar87;
                      }
                      if (!bVar88) break;
                      uVar71 = puVar76[1];
                      uVar80 = 0;
                    }
                    uStack_250 = plVar34;
                    if (local_258 != plVar34) {
                      uVar11 = local_298._0_8_;
                      uVar80 = (long)plVar34 - (long)local_258;
                      param_14 = (ulong **)
                                 (((long)uVar80 / 6 + ((long)uVar80 >> 0x3f) >> 3) -
                                 ((long)uVar80 >> 0x3f));
                      puVar38 = stack0xfffffffffffffd70;
                      uVar71 = (long)stack0xfffffffffffffd70 - local_298._0_8_;
                      lVar50 = (long)uVar71 >> 4;
                      ppuVar47 = (ulong **)(lVar50 * -0x5555555555555555);
                      if ((ulong **)
                          (((long)local_288 - (long)stack0xfffffffffffffd70 >> 4) *
                          -0x5555555555555555) < param_14) {
                        if ((ulong **)(lVar50 * 0x5555555555555555 + 0x2aaaaaaaaaaaaaa) < param_14)
                        {
                    /* try { // try from 00314593 to 0031459e has its CatchHandler @ 0031466e */
                    /* WARNING: Subroutine does not return */
                          std::__throw_length_error("vector::_M_range_insert");
                        }
                        ppuVar74 = param_14;
                        if (param_14 <= ppuVar47) {
                          ppuVar74 = ppuVar47;
                        }
                        puVar58 = (undefined1 *)((long)ppuVar74 + (long)ppuVar47);
                        if ((undefined1 *)0x2aaaaaaaaaaaaaa < puVar58) {
                          puVar58 = (undefined1 *)0x2aaaaaaaaaaaaaa;
                        }
                        param_14 = (ulong **)((long)ppuVar74 + (long)ppuVar47);
                        if (CARRY8((ulong)ppuVar74,(ulong)ppuVar47)) {
                          puVar58 = (undefined1 *)0x2aaaaaaaaaaaaaa;
                        }
                        if (puVar58 == (undefined1 *)0x0) {
                          pvVar41 = (void *)0x0;
                        }
                        else {
                    /* try { // try from 0030fb9a to 0030fb9e has its CatchHandler @ 00314668 */
                          pvVar41 = operator_new((long)puVar58 * 0x30);
                        }
                        lVar50 = 0;
                        do {
                          *(undefined8 *)((long)pvVar41 + lVar50 + 0x20) =
                               *(undefined8 *)((long)plVar72 + lVar50 + 0x20);
                          uVar19 = *(undefined8 *)((long)plVar72 + lVar50);
                          uVar20 = ((undefined8 *)((long)plVar72 + lVar50))[1];
                          puVar2 = (undefined4 *)((long)plVar72 + lVar50 + 0x10);
                          uVar89 = puVar2[1];
                          uVar90 = puVar2[2];
                          uVar91 = puVar2[3];
                          puVar3 = (undefined4 *)((long)pvVar41 + lVar50 + 0x10);
                          *puVar3 = *puVar2;
                          puVar3[1] = uVar89;
                          puVar3[2] = uVar90;
                          puVar3[3] = uVar91;
                          *(undefined8 *)((long)pvVar41 + lVar50) = uVar19;
                          ((undefined8 *)((long)pvVar41 + lVar50))[1] = uVar20;
                          lVar81 = *(long *)((long)plVar72 + lVar50 + 0x28);
                          *(long *)((long)pvVar41 + lVar50 + 0x28) = lVar81;
                          if (lVar81 != 0) {
                            LOCK();
                            *(int *)(lVar81 + 8) = *(int *)(lVar81 + 8) + 1;
                            UNLOCK();
                          }
                          lVar33 = lVar50 + 0x30;
                          lVar81 = lVar50 + 0x30;
                          lVar50 = lVar33;
                        } while ((long *)((long)plVar72 + lVar81) != plVar34);
                        puVar77 = (undefined8 *)(lVar33 + (long)pvVar41);
                        puVar55 = (undefined8 *)uVar11;
                        if (puVar38 != (undefined8 *)uVar11) {
                          do {
                            puVar77[4] = puVar55[4];
                            uVar19 = *puVar55;
                            uVar20 = puVar55[1];
                            uVar89 = *(undefined4 *)((long)puVar55 + 0x14);
                            uVar90 = *(undefined4 *)(puVar55 + 3);
                            uVar91 = *(undefined4 *)((long)puVar55 + 0x1c);
                            *(undefined4 *)(puVar77 + 2) = *(undefined4 *)(puVar55 + 2);
                            *(undefined4 *)((long)puVar77 + 0x14) = uVar89;
                            *(undefined4 *)(puVar77 + 3) = uVar90;
                            *(undefined4 *)((long)puVar77 + 0x1c) = uVar91;
                            *puVar77 = uVar19;
                            puVar77[1] = uVar20;
                            puVar77[5] = puVar55[5];
                            puVar55[5] = 0;
                            puVar77 = puVar77 + 6;
                            puVar55 = puVar55 + 6;
                            puVar60 = (undefined8 *)uVar11;
                          } while (puVar55 != puVar38);
                          for (; puVar38 != puVar60; puVar60 = puVar60 + 6) {
                            plVar68 = (long *)puVar60[5];
                            if (plVar68 != (long *)0x0) {
                              LOCK();
                              plVar37 = plVar68 + 1;
                              *(int *)plVar37 = (int)*plVar37 + -1;
                              UNLOCK();
                              if ((int)*plVar37 == 0) {
                                (**(code **)(*plVar68 + 8))();
                              }
                            }
                          }
                        }
                        if ((undefined8 *)uVar11 != (undefined8 *)0x0) {
                          operator_delete((void *)uVar11);
                        }
                        stack0xfffffffffffffd70 = puVar77;
                        local_298._0_8_ = pvVar41;
                        local_288 = (code *)((long)puVar58 * 0x30 + (long)pvVar41);
                      }
                      else {
                        puVar58 = (undefined1 *)((long)param_14 + lVar50 * 0x5555555555555555);
                        if (param_14 < ppuVar47) {
                          if (uVar80 != 0) {
                            lVar50 = (long)param_14 * -0x30;
                            lVar81 = 0;
                            do {
                              *(undefined8 *)((long)stack0xfffffffffffffd70 + lVar81 + 0x20) =
                                   *(undefined8 *)
                                    ((long)stack0xfffffffffffffd70 + lVar81 + lVar50 + 0x20);
                              puVar55 = (undefined8 *)
                                        ((long)stack0xfffffffffffffd70 + lVar81 + lVar50);
                              uVar19 = *puVar55;
                              uVar20 = puVar55[1];
                              puVar2 = (undefined4 *)
                                       ((long)stack0xfffffffffffffd70 + lVar81 + lVar50 + 0x10);
                              uVar89 = puVar2[1];
                              uVar90 = puVar2[2];
                              uVar91 = puVar2[3];
                              puVar3 = (undefined4 *)((long)stack0xfffffffffffffd70 + lVar81 + 0x10)
                              ;
                              *puVar3 = *puVar2;
                              puVar3[1] = uVar89;
                              puVar3[2] = uVar90;
                              puVar3[3] = uVar91;
                              *(undefined8 *)((long)stack0xfffffffffffffd70 + lVar81) = uVar19;
                              ((undefined8 *)((long)stack0xfffffffffffffd70 + lVar81))[1] = uVar20;
                              *(undefined8 *)((long)stack0xfffffffffffffd70 + lVar81 + 0x28) =
                                   *(undefined8 *)
                                    ((long)stack0xfffffffffffffd70 + lVar81 + lVar50 + 0x28);
                              *(undefined8 *)
                               ((long)stack0xfffffffffffffd70 + lVar81 + lVar50 + 0x28) = 0;
                              lVar81 = lVar81 + 0x30;
                            } while ((long)param_14 * -0x30 + lVar81 != 0);
                          }
                          stack0xfffffffffffffd70 = stack0xfffffffffffffd70 + (long)param_14 * 6;
                          uVar71 = (long)puVar38 + ((long)param_14 * -0x30 - local_298._0_8_);
                          ppuVar47 = param_14;
                          if (0 < (long)uVar71) {
                            lVar50 = uVar71 / 0x30 + 1;
                            plVar68 = puVar38 + -1;
                            ppuVar47 = (ulong **)((long)param_14 * 0x10);
                            do {
                              plVar68[-3] = plVar68[(long)param_14 * -6 + -3];
                              lVar81 = (plVar68 + (long)param_14 * -6 + -5)[1];
                              plVar68[-5] = plVar68[(long)param_14 * -6 + -5];
                              plVar68[-4] = lVar81;
                              lVar81 = (plVar68 + (long)param_14 * -6 + -2)[1];
                              plVar68[-2] = plVar68[(long)param_14 * -6 + -2];
                              plVar68[-1] = lVar81;
                              lVar81 = plVar68[(long)param_14 * -6];
                              plVar68[(long)param_14 * -6] = 0;
                              plVar37 = (long *)*plVar68;
                              *plVar68 = lVar81;
                              if (plVar37 != (long *)0x0) {
                                LOCK();
                                plVar62 = plVar37 + 1;
                                *(int *)plVar62 = (int)*plVar62 + -1;
                                UNLOCK();
                                if ((int)*plVar62 == 0) {
                                  (**(code **)(*plVar37 + 8))();
                                }
                              }
                              lVar50 = lVar50 + -1;
                              plVar68 = plVar68 + -6;
                            } while (1 < lVar50);
                          }
                          param_14 = ppuVar47;
                          if (0 < (long)uVar80) {
                            lVar81 = uVar80 / 0x30 + 1;
                            lVar50 = 0;
                            do {
                              *(undefined8 *)(uVar11 + lVar50 + 0x20) =
                                   *(undefined8 *)((long)plVar72 + lVar50 + 0x20);
                              uVar19 = *(undefined8 *)((long)plVar72 + lVar50);
                              uVar20 = ((undefined8 *)((long)plVar72 + lVar50))[1];
                              puVar2 = (undefined4 *)((long)plVar72 + lVar50 + 0x10);
                              uVar89 = puVar2[1];
                              uVar90 = puVar2[2];
                              uVar91 = puVar2[3];
                              puVar3 = (undefined4 *)(uVar11 + lVar50 + 0x10);
                              *puVar3 = *puVar2;
                              puVar3[1] = uVar89;
                              puVar3[2] = uVar90;
                              puVar3[3] = uVar91;
                              *(undefined8 *)(uVar11 + lVar50) = uVar19;
                              ((undefined8 *)(uVar11 + lVar50))[1] = uVar20;
                              lVar33 = *(long *)((long)plVar72 + lVar50 + 0x28);
                              if (lVar33 != 0) {
                                LOCK();
                                *(int *)(lVar33 + 8) = *(int *)(lVar33 + 8) + 1;
                                UNLOCK();
                              }
                              plVar68 = *(long **)(uVar11 + lVar50 + 0x28);
                              *(long *)(uVar11 + lVar50 + 0x28) = lVar33;
                              if (plVar68 != (long *)0x0) {
                                LOCK();
                                plVar37 = plVar68 + 1;
                                *(int *)plVar37 = (int)*plVar37 + -1;
                                UNLOCK();
                                if ((int)*plVar37 == 0) {
                                  (**(code **)(*plVar68 + 8))();
                                }
                              }
                              lVar81 = lVar81 + -1;
                              lVar50 = lVar50 + 0x30;
                            } while (1 < lVar81);
                          }
                        }
                        else {
                          plVar68 = local_258 + lVar50 * 2;
                          if (plVar68 != plVar34) {
                            lVar50 = 0;
                            do {
                              *(undefined8 *)((long)stack0xfffffffffffffd70 + lVar50 + 0x20) =
                                   *(undefined8 *)((long)plVar68 + lVar50 + 0x20);
                              uVar19 = *(undefined8 *)((long)plVar68 + lVar50);
                              uVar20 = ((undefined8 *)((long)plVar68 + lVar50))[1];
                              puVar2 = (undefined4 *)((long)plVar68 + lVar50 + 0x10);
                              uVar89 = puVar2[1];
                              uVar90 = puVar2[2];
                              uVar91 = puVar2[3];
                              puVar3 = (undefined4 *)((long)stack0xfffffffffffffd70 + lVar50 + 0x10)
                              ;
                              *puVar3 = *puVar2;
                              puVar3[1] = uVar89;
                              puVar3[2] = uVar90;
                              puVar3[3] = uVar91;
                              *(undefined8 *)((long)stack0xfffffffffffffd70 + lVar50) = uVar19;
                              ((undefined8 *)((long)stack0xfffffffffffffd70 + lVar50))[1] = uVar20;
                              lVar81 = *(long *)((long)plVar68 + lVar50 + 0x28);
                              *(long *)((long)stack0xfffffffffffffd70 + lVar50 + 0x28) = lVar81;
                              if (lVar81 != 0) {
                                LOCK();
                                *(int *)(lVar81 + 8) = *(int *)(lVar81 + 8) + 1;
                                UNLOCK();
                              }
                              lVar81 = lVar50 + 0x30;
                              lVar50 = lVar50 + 0x30;
                            } while ((long *)((long)plVar68 + lVar81) != plVar34);
                          }
                          if (stack0xfffffffffffffd70 != (ulong *)local_298._0_8_) {
                            lVar50 = 0;
                            do {
                              *(undefined8 *)
                               ((long)stack0xfffffffffffffd70 + lVar50 + (long)puVar58 * 0x30 + 0x20
                               ) = *(undefined8 *)(local_298._0_8_ + lVar50 + 0x20);
                              uVar19 = *(undefined8 *)(local_298._0_8_ + lVar50);
                              uVar20 = ((undefined8 *)(local_298._0_8_ + lVar50))[1];
                              puVar2 = (undefined4 *)(local_298._0_8_ + lVar50 + 0x10);
                              uVar89 = puVar2[1];
                              uVar90 = puVar2[2];
                              uVar91 = puVar2[3];
                              puVar3 = (undefined4 *)
                                       ((long)stack0xfffffffffffffd70 +
                                       lVar50 + (long)puVar58 * 0x30 + 0x10);
                              *puVar3 = *puVar2;
                              puVar3[1] = uVar89;
                              puVar3[2] = uVar90;
                              puVar3[3] = uVar91;
                              puVar38 = (undefined8 *)
                                        ((long)stack0xfffffffffffffd70 +
                                        lVar50 + (long)puVar58 * 0x30);
                              *puVar38 = uVar19;
                              puVar38[1] = uVar20;
                              *(undefined8 *)
                               ((long)stack0xfffffffffffffd70 + lVar50 + (long)puVar58 * 0x30 + 0x28
                               ) = *(undefined8 *)(local_298._0_8_ + lVar50 + 0x28);
                              *(undefined8 *)(local_298._0_8_ + lVar50 + 0x28) = 0;
                              lVar81 = lVar50 + 0x30;
                              lVar50 = lVar50 + 0x30;
                            } while ((undefined8 *)(local_298._0_8_ + lVar81) !=
                                     stack0xfffffffffffffd70);
                          }
                          stack0xfffffffffffffd70 = stack0xfffffffffffffd70 + (long)param_14 * 6;
                          if (0 < (long)uVar71) {
                            lVar81 = uVar71 / 0x30 + 1;
                            lVar50 = 0;
                            do {
                              *(undefined8 *)(uVar11 + lVar50 + 0x20) =
                                   *(undefined8 *)((long)plVar72 + lVar50 + 0x20);
                              uVar19 = *(undefined8 *)((long)plVar72 + lVar50);
                              uVar20 = ((undefined8 *)((long)plVar72 + lVar50))[1];
                              puVar2 = (undefined4 *)((long)plVar72 + lVar50 + 0x10);
                              uVar89 = puVar2[1];
                              uVar90 = puVar2[2];
                              uVar91 = puVar2[3];
                              puVar3 = (undefined4 *)(uVar11 + lVar50 + 0x10);
                              *puVar3 = *puVar2;
                              puVar3[1] = uVar89;
                              puVar3[2] = uVar90;
                              puVar3[3] = uVar91;
                              *(undefined8 *)(uVar11 + lVar50) = uVar19;
                              ((undefined8 *)(uVar11 + lVar50))[1] = uVar20;
                              lVar33 = *(long *)((long)plVar72 + lVar50 + 0x28);
                              if (lVar33 != 0) {
                                LOCK();
                                *(int *)(lVar33 + 8) = *(int *)(lVar33 + 8) + 1;
                                UNLOCK();
                              }
                              plVar68 = *(long **)(uVar11 + lVar50 + 0x28);
                              *(long *)(uVar11 + lVar50 + 0x28) = lVar33;
                              if (plVar68 != (long *)0x0) {
                                LOCK();
                                plVar37 = plVar68 + 1;
                                *(int *)plVar37 = (int)*plVar37 + -1;
                                UNLOCK();
                                if ((int)*plVar37 == 0) {
                                  (**(code **)(*plVar68 + 8))();
                                }
                              }
                              lVar81 = lVar81 + -1;
                              lVar50 = lVar50 + 0x30;
                            } while (1 < lVar81);
                          }
                        }
                      }
                      if (plVar72 != plVar34) {
                        do {
                          plVar68 = (long *)plVar72[5];
                          if (plVar68 != (long *)0x0) {
                            LOCK();
                            plVar37 = plVar68 + 1;
                            *(int *)plVar37 = (int)*plVar37 + -1;
                            UNLOCK();
                            if ((int)*plVar37 == 0) {
                              (**(code **)(*plVar68 + 8))();
                            }
                          }
                          plVar72 = plVar72 + 6;
                        } while (plVar72 != plVar34);
                        plVar34 = local_258;
                        if (local_258 == (long *)0x0) goto LAB_0030f7f0;
                      }
                    }
                    operator_delete(plVar34);
                  }
                }
              }
LAB_0030f7f0:
              puVar76 = puVar76 + 8;
            } while (puVar76 != local_2c8);
            puVar76 = (ulong *)local_298._0_8_;
            puVar59 = stack0xfffffffffffffd70;
            if ((ulong *)local_298._0_8_ == stack0xfffffffffffffd70) goto LAB_003101f0;
            lVar50 = (long)stack0xfffffffffffffd70 - local_298._0_8_;
            uVar80 = (lVar50 >> 4) * -0x5555555555555555;
            uVar71 = 0x3f;
            if (uVar80 != 0) {
              for (; uVar80 >> uVar71 == 0; uVar71 = uVar71 - 1) {
              }
            }
                    /* try { // try from 003100b3 to 003100dc has its CatchHandler @ 00314676 */
            std::
            __introsort_loop<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::__28>>
                      ((long *)local_298._0_8_,(long *)stack0xfffffffffffffd70,
                       (uVar71 ^ 0x3f) * 2 ^ 0x7e);
            if (lVar50 < 0x301) {
                    /* try { // try from 003102b5 to 003102bf has its CatchHandler @ 00314676 */
              std::
              __insertion_sort<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::__28>>
                        (puVar76,puVar59);
            }
            else {
              puVar61 = (ulong *)((undefined8)puVar76 + 0x60);
              std::
              __insertion_sort<__gnu_cxx::__normal_iterator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan*,std::vector<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan,std::allocator<juce::detail::WrappedGlyphsCursor::ShapedGlyphSpan>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::detail::getShapedGlyphSpansInVisualOrder(std::vector<juce::detail::WrappedGlyphsCursorRange,std::allocator<juce::detail::WrappedGlyphsCursorRange>>const&)::__28>>
                        (puVar76,puVar61);
              if (puVar61 != puVar59) {
                puVar76 = (ulong *)((undefined8)puVar76 + 0x65);
                do {
                  local_258 = (long *)*puVar61;
                  uStack_250._0_4_ = (undefined4)puVar61[1];
                  uStack_250._4_4_ = (float)(puVar61[1] >> 0x20);
                  uVar71 = puVar61[2];
                  local_208 = (long *)puVar61[3];
                  uStack_200 = puVar61[4];
                  uVar80 = puVar61[5];
                  puVar61[5] = 0;
                  if (uVar71 < puVar61[-4]) {
                    plVar34 = (long *)0x0;
                    puVar82 = puVar76;
                    do {
                      puVar40 = puVar82;
                      puVar40[-3] = puVar40[-9];
                      puVar40[-5] = puVar40[-0xb];
                      puVar40[-4] = puVar40[-10];
                      puVar40[-2] = puVar40[-8];
                      puVar40[-1] = puVar40[-7];
                      uVar32 = puVar40[-6];
                      puVar40[-6] = 0;
                      *puVar40 = uVar32;
                      if (plVar34 != (long *)0x0) {
                        LOCK();
                        plVar72 = plVar34 + 1;
                        *(int *)plVar72 = (int)*plVar72 + -1;
                        UNLOCK();
                        if ((int)*plVar72 == 0) {
                          (**(code **)(*plVar34 + 8))();
                        }
                      }
                      plVar34 = (long *)puVar40[-6];
                      puVar82 = puVar40 + -6;
                    } while (uVar71 < puVar40[-0xf]);
                    puVar82 = puVar40 + -0xb;
                  }
                  else {
                    plVar34 = (long *)0x0;
                    puVar82 = puVar61;
                  }
                  *puVar82 = (ulong)local_258;
                  puVar82[1] = CONCAT44(uStack_250._4_4_,(undefined4)uStack_250);
                  puVar82[2] = uVar71;
                  puVar82[3] = (ulong)local_208;
                  puVar82[4] = uStack_200;
                  puVar82[5] = uVar80;
                  if (plVar34 != (long *)0x0) {
                    LOCK();
                    plVar72 = plVar34 + 1;
                    *(int *)plVar72 = (int)*plVar72 + -1;
                    UNLOCK();
                    if ((int)*plVar72 == 0) {
                      (**(code **)(*plVar34 + 8))();
                    }
                  }
                  puVar61 = puVar61 + 6;
                  puVar76 = puVar76 + 6;
                } while (puVar61 != puVar59);
                puVar59 = stack0xfffffffffffffd70;
                puVar76 = (ulong *)local_298._0_8_;
              }
            }
            lVar50 = *(long *)(this + 8);
            puVar38 = *(undefined8 **)(this + 0x10);
            local_2c0 = (long)puVar38 - lVar50 >> 5;
            local_210 = puVar59;
            if (puVar76 != puVar59) {
              do {
                puVar55 = (undefined8 *)*puVar76;
                puVar77 = (undefined8 *)puVar76[1];
                puVar60 = puVar55;
                puVar85 = puVar38;
                if (puVar55 < puVar77) {
                  do {
                    while (puVar85 != *(undefined8 **)(this + 0x18)) {
                      uVar11 = *puVar60;
                      uVar19 = puVar60[1];
                      uVar89 = *(undefined4 *)((long)puVar60 + 0x14);
                      uVar90 = *(undefined4 *)(puVar60 + 3);
                      uVar91 = *(undefined4 *)((long)puVar60 + 0x1c);
                      *(undefined4 *)(puVar85 + 2) = *(undefined4 *)(puVar60 + 2);
                      *(undefined4 *)((long)puVar85 + 0x14) = uVar89;
                      *(undefined4 *)(puVar85 + 3) = uVar90;
                      *(undefined4 *)((long)puVar85 + 0x1c) = uVar91;
                      *puVar85 = uVar11;
                      puVar85[1] = uVar19;
                      puVar85 = (undefined8 *)(*(long *)(this + 0x10) + 0x20);
                      *(undefined8 **)(this + 0x10) = puVar85;
                      puVar60 = puVar60 + 4;
                      if ((undefined8 *)puVar76[1] <= puVar60) goto LAB_00311340;
                    }
                    puVar10 = *(undefined8 **)(this + 8);
                    lVar81 = (long)puVar85 - (long)puVar10;
                    if (lVar81 == 0x7fffffffffffffe0) {
                    /* try { // try from 003144ab to 003144b6 has its CatchHandler @ 00314828 */
                    /* WARNING: Subroutine does not return */
                      std::__throw_length_error("vector::_M_realloc_insert");
                    }
                    uVar80 = lVar81 >> 5;
                    uVar71 = uVar80;
                    if (lVar81 == 0) {
                      uVar71 = 1;
                    }
                    uVar32 = uVar71 + uVar80;
                    if (0x3ffffffffffffff < uVar32) {
                      uVar32 = 0x3ffffffffffffff;
                    }
                    if (CARRY8(uVar71,uVar80)) {
                      uVar32 = 0x3ffffffffffffff;
                    }
                    if (uVar32 == 0) {
                      puVar43 = (undefined8 *)0x0;
                    }
                    else {
                    /* try { // try from 00311153 to 00311157 has its CatchHandler @ 0031478d */
                      puVar43 = operator_new(uVar32 << 5);
                    }
                    uVar11 = *puVar60;
                    uVar19 = puVar60[1];
                    uVar89 = *(undefined4 *)((long)puVar60 + 0x14);
                    uVar90 = *(undefined4 *)(puVar60 + 3);
                    uVar91 = *(undefined4 *)((long)puVar60 + 0x1c);
                    puVar86 = puVar43 + uVar80 * 4 + 2;
                    *(undefined4 *)puVar86 = *(undefined4 *)(puVar60 + 2);
                    *(undefined4 *)((long)puVar86 + 4) = uVar89;
                    *(undefined4 *)(puVar86 + 1) = uVar90;
                    *(undefined4 *)((long)puVar86 + 0xc) = uVar91;
                    puVar43[uVar80 * 4] = uVar11;
                    (puVar43 + uVar80 * 4)[1] = uVar19;
                    puVar86 = puVar43;
                    if (puVar10 != puVar85) {
                      puVar44 = puVar10;
                      do {
                        uVar11 = *puVar44;
                        uVar19 = puVar44[1];
                        uVar89 = *(undefined4 *)((long)puVar44 + 0x14);
                        uVar90 = *(undefined4 *)(puVar44 + 3);
                        uVar91 = *(undefined4 *)((long)puVar44 + 0x1c);
                        *(undefined4 *)(puVar86 + 2) = *(undefined4 *)(puVar44 + 2);
                        *(undefined4 *)((long)puVar86 + 0x14) = uVar89;
                        *(undefined4 *)(puVar86 + 3) = uVar90;
                        *(undefined4 *)((long)puVar86 + 0x1c) = uVar91;
                        *puVar86 = uVar11;
                        puVar86[1] = uVar19;
                        puVar44 = puVar44 + 4;
                        puVar86 = puVar86 + 4;
                      } while (puVar44 != puVar85);
                    }
                    puVar85 = puVar86 + 4;
                    if (puVar10 != (undefined8 *)0x0) {
                      operator_delete(puVar10);
                    }
                    *(undefined8 **)(this + 8) = puVar43;
                    *(undefined8 **)(this + 0x10) = puVar85;
                    *(undefined8 **)(this + 0x18) = puVar43 + uVar32 * 4;
                    puVar60 = puVar60 + 4;
                  } while (puVar60 < (undefined8 *)puVar76[1]);
                }
                else if (puVar77 < puVar55) {
                  do {
                    while (puVar85 != *(undefined8 **)(this + 0x18)) {
                      uVar11 = *puVar60;
                      uVar19 = puVar60[1];
                      uVar89 = *(undefined4 *)((long)puVar60 + 0x14);
                      uVar90 = *(undefined4 *)(puVar60 + 3);
                      uVar91 = *(undefined4 *)((long)puVar60 + 0x1c);
                      *(undefined4 *)(puVar85 + 2) = *(undefined4 *)(puVar60 + 2);
                      *(undefined4 *)((long)puVar85 + 0x14) = uVar89;
                      *(undefined4 *)(puVar85 + 3) = uVar90;
                      *(undefined4 *)((long)puVar85 + 0x1c) = uVar91;
                      *puVar85 = uVar11;
                      puVar85[1] = uVar19;
                      puVar85 = (undefined8 *)(*(long *)(this + 0x10) + 0x20);
                      *(undefined8 **)(this + 0x10) = puVar85;
                      puVar60 = puVar60 + -4;
                      if (puVar60 <= (undefined8 *)puVar76[1]) goto LAB_00311340;
                    }
                    puVar10 = *(undefined8 **)(this + 8);
                    lVar81 = (long)puVar85 - (long)puVar10;
                    if (lVar81 == 0x7fffffffffffffe0) {
                    /* try { // try from 003144cb to 003144d6 has its CatchHandler @ 00314788 */
                    /* WARNING: Subroutine does not return */
                      std::__throw_length_error("vector::_M_realloc_insert");
                    }
                    uVar80 = lVar81 >> 5;
                    uVar71 = uVar80;
                    if (lVar81 == 0) {
                      uVar71 = 1;
                    }
                    uVar32 = uVar71 + uVar80;
                    if (0x3ffffffffffffff < uVar32) {
                      uVar32 = 0x3ffffffffffffff;
                    }
                    if (CARRY8(uVar71,uVar80)) {
                      uVar32 = 0x3ffffffffffffff;
                    }
                    if (uVar32 == 0) {
                      puVar43 = (undefined8 *)0x0;
                    }
                    else {
                    /* try { // try from 0031129a to 0031129e has its CatchHandler @ 0031473c */
                      puVar43 = operator_new(uVar32 << 5);
                    }
                    uVar11 = *puVar60;
                    uVar19 = puVar60[1];
                    uVar89 = *(undefined4 *)((long)puVar60 + 0x14);
                    uVar90 = *(undefined4 *)(puVar60 + 3);
                    uVar91 = *(undefined4 *)((long)puVar60 + 0x1c);
                    puVar86 = puVar43 + uVar80 * 4 + 2;
                    *(undefined4 *)puVar86 = *(undefined4 *)(puVar60 + 2);
                    *(undefined4 *)((long)puVar86 + 4) = uVar89;
                    *(undefined4 *)(puVar86 + 1) = uVar90;
                    *(undefined4 *)((long)puVar86 + 0xc) = uVar91;
                    puVar43[uVar80 * 4] = uVar11;
                    (puVar43 + uVar80 * 4)[1] = uVar19;
                    puVar86 = puVar43;
                    if (puVar10 != puVar85) {
                      puVar44 = puVar10;
                      do {
                        uVar11 = *puVar44;
                        uVar19 = puVar44[1];
                        uVar89 = *(undefined4 *)((long)puVar44 + 0x14);
                        uVar90 = *(undefined4 *)(puVar44 + 3);
                        uVar91 = *(undefined4 *)((long)puVar44 + 0x1c);
                        *(undefined4 *)(puVar86 + 2) = *(undefined4 *)(puVar44 + 2);
                        *(undefined4 *)((long)puVar86 + 0x14) = uVar89;
                        *(undefined4 *)(puVar86 + 3) = uVar90;
                        *(undefined4 *)((long)puVar86 + 0x1c) = uVar91;
                        *puVar86 = uVar11;
                        puVar86[1] = uVar19;
                        puVar44 = puVar44 + 4;
                        puVar86 = puVar86 + 4;
                      } while (puVar44 != puVar85);
                    }
                    puVar85 = puVar86 + 4;
                    if (puVar10 != (undefined8 *)0x0) {
                      operator_delete(puVar10);
                    }
                    *(undefined8 **)(this + 8) = puVar43;
                    *(undefined8 **)(this + 0x10) = puVar85;
                    *(undefined8 **)(this + 0x18) = puVar43 + uVar32 * 4;
                    puVar60 = puVar60 + -4;
                  } while ((undefined8 *)puVar76[1] < puVar60);
                }
LAB_00311340:
                uVar71 = (long)puVar38 - lVar50 >> 5;
                lVar81 = *(long *)(this + 8);
                uVar80 = (long)puVar85 - lVar81 >> 5;
                local_2f8 = (undefined8 *)uVar71;
                if ((long)uVar71 < (long)uVar80) {
                  lVar33 = *local_198;
                  uVar70 = (int)uVar80 - (int)uVar71;
                  uVar32 = uVar71;
                  if ((uVar70 & 3) != 0) {
                    plVar34 = (long *)(lVar81 + uVar71 * 0x20 + 0x10);
                    lVar51 = 0;
                    do {
                      *plVar34 = *plVar34 + lVar33;
                      lVar51 = lVar51 + -1;
                      plVar34 = plVar34 + 4;
                    } while (-lVar51 != ((ulong)uVar70 & 3));
                    uVar32 = uVar71 - lVar51;
                  }
                  local_2f8 = (undefined8 *)uVar80;
                  if (2 < ~uVar71 + uVar80) {
                    plVar34 = (long *)(lVar81 + uVar32 * 0x20 + 0x70);
                    do {
                      plVar34[-0xc] = plVar34[-0xc] + lVar33;
                      plVar34[-8] = plVar34[-8] + lVar33;
                      plVar34[-4] = plVar34[-4] + lVar33;
                      *plVar34 = *plVar34 + lVar33;
                      uVar32 = uVar32 + 4;
                      plVar34 = plVar34 + 0x10;
                    } while (uVar80 != uVar32);
                  }
                }
                bVar88 = puVar55 < puVar77;
                uVar32 = puVar76[3] + *local_198;
                uVar75 = *local_198 + puVar76[4];
                if ((long)uVar75 <= (long)uVar32) {
                  uVar75 = uVar32;
                }
                lVar81 = (long)plStack_2e0 - (long)local_2e8;
                if ((long)puVar76[3] < (long)puVar76[4]) {
                    /* try { // try from 00311444 to 00311712 has its CatchHandler @ 003146f1 */
                  Ranges::erase((Ranges *)local_f8,uVar32,uVar75,&local_2e8);
                  plVar72 = plStack_2e0;
                  plVar34 = local_2e8;
                  puVar59 = *(ulong **)(this + 0x98);
                  puVar61 = puVar59;
                  if (0 < *(long *)(this + 0xa0) - (long)puVar59) {
                    uVar64 = (ulong)(*(long *)(this + 0xa0) - (long)puVar59) >> 4;
                    do {
                      uVar39 = uVar64 >> 1;
                      uVar73 = uVar39;
                      if ((long)puVar61[uVar39 * 2] < (long)uVar32) {
                        uVar73 = ~uVar39 + uVar64;
                        puVar61 = puVar61 + uVar39 * 2 + 2;
                      }
                      uVar64 = uVar73;
                    } while (0 < (long)uVar73);
                  }
                  lVar33 = (long)puVar61 - (long)puVar59 >> 4;
                  if (plStack_2e0 == local_2d8) {
                    lVar51 = (long)plStack_2e0 - (long)local_2e8;
                    if (lVar51 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
                      std::__throw_length_error("vector::_M_realloc_insert");
                    }
                    lVar67 = lVar51 >> 4;
                    uVar73 = lVar67 * -0x5555555555555555;
                    uVar64 = uVar73;
                    if (lVar51 == 0) {
                      uVar64 = 1;
                    }
                    local_2c8 = (ulong *)(uVar64 + uVar73);
                    if ((ulong *)0x2aaaaaaaaaaaaaa < local_2c8) {
                      local_2c8 = (ulong *)0x2aaaaaaaaaaaaaa;
                    }
                    if (CARRY8(uVar64,uVar73)) {
                      local_2c8 = (ulong *)0x2aaaaaaaaaaaaaa;
                    }
                    plVar37 = operator_new((long)local_2c8 * 0x30);
                    plVar37[lVar67 * 2] = lVar33;
                    *(undefined1 *)(plVar37 + lVar67 * 2 + 5) = 0;
                    plVar68 = plVar37;
                    if (plVar34 != plVar72) {
                      plVar62 = plVar34;
                      do {
                        lVar33 = *plVar62;
                        lVar51 = plVar62[1];
                        lVar67 = plVar62[2];
                        uVar89 = *(undefined4 *)((long)plVar62 + 0x14);
                        lVar84 = plVar62[3];
                        uVar90 = *(undefined4 *)((long)plVar62 + 0x1c);
                        param_3 = SUB168(*(undefined1 (*) [16])(plVar62 + 4),0);
                        *(undefined1 (*) [16])(plVar68 + 4) = *(undefined1 (*) [16])(plVar62 + 4);
                        *(int *)(plVar68 + 2) = (int)lVar67;
                        *(undefined4 *)((long)plVar68 + 0x14) = uVar89;
                        *(int *)(plVar68 + 3) = (int)lVar84;
                        *(undefined4 *)((long)plVar68 + 0x1c) = uVar90;
                        *plVar68 = lVar33;
                        plVar68[1] = lVar51;
                        plVar62 = plVar62 + 6;
                        plVar68 = plVar68 + 6;
                      } while (plVar62 != plVar72);
                    }
                    if (plVar34 != (long *)0x0) {
                      operator_delete(plVar34);
                    }
                    local_2d8 = plVar37 + (long)local_2c8 * 6;
                    local_2e8 = plVar37;
                  }
                  else {
                    *plStack_2e0 = lVar33;
                    *(undefined1 *)(plStack_2e0 + 5) = 0;
                    plVar68 = plStack_2e0;
                  }
                  plStack_2e0 = plVar68 + 6;
                  pvVar41 = *(void **)(this + 0x98);
                  puVar59 = *(ulong **)(this + 0xa0);
                  lVar33 = (long)puVar61 - (long)pvVar41 >> 4;
                  if (puVar59 == *(ulong **)(this + 0xa8)) {
                    lVar51 = (long)puVar59 - (long)pvVar41;
                    if (lVar51 == 0x7ffffffffffffff0) {
                    /* try { // try from 00314563 to 0031457a has its CatchHandler @ 00314741 */
                    /* WARNING: Subroutine does not return */
                      std::__throw_length_error("vector::_M_realloc_insert");
                    }
                    uVar73 = lVar51 >> 4;
                    uVar64 = uVar73;
                    if (lVar51 == 0) {
                      uVar64 = 1;
                    }
                    uVar39 = uVar64 + uVar73;
                    if (0x7ffffffffffffff < uVar39) {
                      uVar39 = 0x7ffffffffffffff;
                    }
                    if (CARRY8(uVar64,uVar73)) {
                      uVar39 = 0x7ffffffffffffff;
                    }
                    local_2c8 = (ulong *)((long)puVar61 - (long)pvVar41);
                    pvVar79 = operator_new(uVar39 * 0x10);
                    lVar33 = lVar33 * 0x10;
                    puVar61 = (ulong *)((long)pvVar41 + lVar33);
                    *(ulong *)((long)pvVar79 + lVar33) = uVar32;
                    *(ulong *)((long)pvVar79 + lVar33 + 8) = uVar75;
                    if (local_2c8 == (ulong *)0x0) {
                      puVar82 = (ulong *)((long)pvVar79 + 0x10);
                    }
                    else {
                      lVar51 = 0;
                      do {
                        lVar67 = lVar51;
                        uVar11 = ((undefined8 *)((long)pvVar41 + lVar67))[1];
                        *(undefined8 *)((long)pvVar79 + lVar67) =
                             *(undefined8 *)((long)pvVar41 + lVar67);
                        ((undefined8 *)((long)pvVar79 + lVar67))[1] = uVar11;
                        lVar51 = lVar67 + 0x10;
                      } while (lVar33 != lVar67 + 0x10);
                      puVar82 = (ulong *)((long)pvVar79 + lVar67 + 0x20);
                    }
                    for (; puVar59 != puVar61; puVar61 = puVar61 + 2) {
                      uVar32 = puVar61[1];
                      *puVar82 = *puVar61;
                      puVar82[1] = uVar32;
                      puVar82 = puVar82 + 2;
                    }
                    if (pvVar41 != (void *)0x0) {
                      operator_delete(pvVar41);
                    }
                    *(void **)(this + 0x98) = pvVar79;
                    *(ulong **)(this + 0xa0) = puVar82;
                    *(void **)(this + 0xa8) = (void *)((long)pvVar79 + uVar39 * 0x10);
                  }
                  else if (puVar59 == puVar61) {
                    *puVar61 = uVar32;
                    puVar61[1] = uVar75;
                    *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 0x10;
                  }
                  else {
                    lVar33 = lVar33 * 0x10;
                    puVar58 = (undefined1 *)((long)pvVar41 + lVar33);
                    *puVar59 = puVar59[-2];
                    puVar59[1] = puVar59[-1];
                    lVar51 = *(long *)(this + 0xa0);
                    *(long *)(this + 0xa0) = lVar51 + 0x10;
                    puVar55 = (undefined8 *)(lVar51 + -0x10);
                    if (0 < (long)puVar55 - (long)puVar58) {
                      uVar64 = ((ulong)((long)puVar55 - (long)puVar58) >> 4) + 1;
                      do {
                        *puVar55 = puVar55[-2];
                        puVar55[1] = puVar55[-1];
                        puVar55 = puVar55 + -2;
                        uVar64 = uVar64 - 1;
                      } while (1 < uVar64);
                    }
                    *puVar58 = (char)uVar32;
                    *(int *)(puVar58 + 1) = (int)(uVar32 >> 8);
                    puVar58[7] = (char)(uVar32 >> 0x38);
                    *(short *)(puVar58 + 5) = (short)(uVar32 >> 0x28);
                    *(ulong *)((long)pvVar41 + lVar33 + 8) = uVar75;
                  }
                }
                if ((long)plStack_2e0 - (long)local_2e8 != 0) {
                  lVar81 = lVar81 >> 4;
                  uVar32 = ((long)plStack_2e0 - (long)local_2e8 >> 4) * -0x5555555555555555;
                  bVar87 = uVar32 < (ulong)(lVar81 * -0x5555555555555555);
                  lVar33 = uVar32 + lVar81 * 0x5555555555555555;
                  if (!bVar87 && lVar33 != 0) {
                    if (bVar87) {
                      lVar33 = 0;
                    }
                    ppuVar47 = (ulong **)(local_2e8 + lVar81 * 2);
                    ppuVar74 = ppuVar47 + lVar33 * 6;
                    plVar34 = uStack_248;
                    do {
                      cVar31 = *(char *)(ppuVar47 + 5);
                      uStack_248 = plVar34;
                      if (cVar31 == '\x02') {
                        puVar59 = *ppuVar47;
                        puVar61 = ppuVar47[1];
                        if (puVar59 != puVar61) {
                          lVar33 = *(long *)(this + 0xb0);
                          lVar81 = lVar33 + (long)puVar61 * 0x18;
                          uVar32 = *(long *)(this + 0xb8) - lVar81;
                          if (uVar32 == 0) {
                            lVar51 = lVar81;
                          }
                          else if ((long)uVar32 < 1) {
                            lVar51 = *(long *)(this + 0xb8);
                          }
                          else {
                            uVar32 = uVar32 / 0x18 + 1;
                            lVar51 = lVar33;
                            do {
                              *(undefined1 *)(lVar51 + 0x10 + (long)puVar59 * 0x18) =
                                   *(undefined1 *)(lVar51 + 0x10 + (long)puVar61 * 0x18);
                              puVar55 = (undefined8 *)(lVar51 + (long)puVar61 * 0x18);
                              uVar11 = puVar55[1];
                              puVar77 = (undefined8 *)(lVar51 + (long)puVar59 * 0x18);
                              *puVar77 = *puVar55;
                              puVar77[1] = uVar11;
                              uVar32 = uVar32 - 1;
                              lVar51 = lVar51 + 0x18;
                            } while (1 < uVar32);
                            lVar51 = *(long *)(this + 0xb8);
                            param_14 = ppuVar47;
                          }
                          lVar81 = (lVar51 - lVar81) + lVar33 + (long)puVar59 * 0x18;
                          if (lVar51 != lVar81) {
                            *(long *)(this + 0xb8) = lVar81;
                          }
                        }
                      }
                      else if (cVar31 == '\x01') {
                        pvVar41 = *(void **)(this + 0xb0);
                        puVar61 = *(ulong **)(this + 0xb8);
                        puVar82 = *ppuVar47;
                        puVar59 = (ulong *)((long)pvVar41 + (long)puVar82 * 0x18);
                        if (puVar61 == *(ulong **)(this + 0xc0)) {
                          lVar81 = (long)puVar61 - (long)pvVar41;
                          if (lVar81 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
                            std::__throw_length_error("vector::_M_realloc_insert");
                          }
                          uVar75 = (lVar81 >> 3) * -0x5555555555555555;
                          uVar32 = uVar75;
                          if (lVar81 == 0) {
                            uVar32 = 1;
                          }
                          puVar40 = (ulong *)(uVar32 + uVar75);
                          if ((ulong *)0x555555555555555 < puVar40) {
                            puVar40 = (ulong *)0x555555555555555;
                          }
                          if (CARRY8(uVar32,uVar75)) {
                            puVar40 = (ulong *)0x555555555555555;
                          }
                          if (puVar40 == (ulong *)0x0) {
                            puVar46 = (ulong *)0x0;
                            puVar49 = puVar82;
                          }
                          else {
                            local_2c8 = puVar82;
                    /* try { // try from 00311bab to 00311c30 has its CatchHandler @ 003146fb */
                            puVar46 = operator_new((long)puVar40 * 0x18);
                            puVar49 = local_2c8;
                            plVar34 = uStack_248;
                          }
                          puVar46[(long)puVar82 * 3 + 2] = puVar59[2];
                          uVar32 = puVar59[1];
                          puVar46[(long)puVar82 * 3] = *puVar59;
                          (puVar46 + (long)puVar82 * 3)[1] = uVar32;
                          puVar82 = puVar46;
                          if (puVar49 != (ulong *)0x0) {
                            lVar81 = 0;
                            do {
                              *(undefined8 *)((long)puVar46 + lVar81 + 0x10) =
                                   *(undefined8 *)((long)pvVar41 + lVar81 + 0x10);
                              uVar11 = ((undefined8 *)((long)pvVar41 + lVar81))[1];
                              *(undefined8 *)((long)puVar46 + lVar81) =
                                   *(undefined8 *)((long)pvVar41 + lVar81);
                              ((undefined8 *)((long)puVar46 + lVar81))[1] = uVar11;
                              lVar81 = lVar81 + 0x18;
                            } while ((long)puVar49 * 0x18 != lVar81);
                            puVar82 = (ulong *)(lVar81 + (long)puVar46);
                          }
                          for (; puVar49 = puVar82 + 3, puVar61 != puVar59; puVar59 = puVar59 + 3) {
                            puVar82[5] = puVar59[2];
                            uVar32 = puVar59[1];
                            *puVar49 = *puVar59;
                            puVar82[4] = uVar32;
                            puVar82 = puVar49;
                          }
                          uStack_248 = plVar34;
                          if (pvVar41 != (void *)0x0) {
                            operator_delete(pvVar41);
                          }
                          *(ulong **)(this + 0xb0) = puVar46;
                          *(ulong **)(this + 0xb8) = puVar49;
                          goto LAB_00311db3;
                        }
                        if (puVar61 == puVar59) {
LAB_00311875:
                          *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + 0x18;
                        }
                        else {
                          uVar32 = *puVar59;
                          uStack_248._0_4_ = (undefined4)(puVar59[2] >> 8);
                          uStack_248._7_1_ = (undefined1)((ulong)plVar34 >> 0x38);
                          uStack_248._4_3_ = (undefined3)(puVar59[2] >> 0x28);
                          plVar34 = (long *)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
                          local_258 = *(long **)((long)puVar59 + 1);
                          uStack_250 = *(long **)((long)puVar59 + 9);
                          puVar61[2] = puVar61[-1];
                          *puVar61 = puVar61[-3];
                          puVar61[1] = puVar61[-2];
                          lVar81 = *(long *)(this + 0xb8);
                          *(long *)(this + 0xb8) = lVar81 + 0x18;
                          puVar55 = (undefined8 *)(lVar81 + -0x18);
                          if (0 < (long)puVar55 - (long)puVar59) {
                            uVar75 = (ulong)((long)puVar55 - (long)puVar59) / 0x18 + 1;
                            do {
                              *(undefined1 *)(puVar55 + 2) = *(undefined1 *)(puVar55 + -1);
                              *puVar55 = puVar55[-3];
                              puVar55[1] = puVar55[-2];
                              puVar55 = puVar55 + -3;
                              uVar75 = uVar75 - 1;
                            } while (1 < uVar75);
                          }
                          *(char *)puVar59 = (char)uVar32;
                          *(long **)((long)puVar59 + 1) = local_258;
                          *(long **)((long)puVar59 + 9) = uStack_250;
                        }
LAB_00311886:
                        uStack_248 = plVar34;
                      }
                      else if (cVar31 == '\0') {
                        pvVar41 = *(void **)(this + 0xb0);
                        puVar61 = *(ulong **)(this + 0xb8);
                        puVar82 = *ppuVar47;
                        puVar59 = (ulong *)((long)pvVar41 + (long)puVar82 * 0x18);
                        if (puVar61 != *(ulong **)(this + 0xc0)) {
                          if (puVar61 == puVar59) {
                            *puVar59 = uVar71;
                            *(undefined8 **)((long)pvVar41 + (long)puVar82 * 0x18 + 8) = local_2f8;
                            *(bool *)((long)pvVar41 + (long)puVar82 * 0x18 + 0x10) = bVar88;
                            *(undefined4 *)((long)pvVar41 + (long)puVar82 * 0x18 + 0x11) = local_18f
                            ;
                            *(uint *)((long)pvVar41 + (long)puVar82 * 0x18 + 0x14) =
                                 CONCAT31(uStack_18b,local_18f._3_1_);
                            goto LAB_00311875;
                          }
                          puVar61[2] = puVar61[-1];
                          *puVar61 = puVar61[-3];
                          puVar61[1] = puVar61[-2];
                          lVar81 = *(long *)(this + 0xb8);
                          *(long *)(this + 0xb8) = lVar81 + 0x18;
                          puVar55 = (undefined8 *)(lVar81 + -0x18);
                          if (0 < (long)puVar55 - (long)puVar59) {
                            uVar32 = (ulong)((long)puVar55 - (long)puVar59) / 0x18 + 1;
                            do {
                              *(undefined1 *)(puVar55 + 2) = *(undefined1 *)(puVar55 + -1);
                              *puVar55 = puVar55[-3];
                              puVar55[1] = puVar55[-2];
                              puVar55 = puVar55 + -3;
                              uVar32 = uVar32 - 1;
                            } while (1 < uVar32);
                          }
                          *puVar59 = uVar71;
                          *(undefined8 **)((long)pvVar41 + (long)puVar82 * 0x18 + 8) = local_2f8;
                          *(bool *)((long)pvVar41 + (long)puVar82 * 0x18 + 0x10) = bVar88;
                          goto LAB_00311886;
                        }
                        lVar81 = (long)puVar61 - (long)pvVar41;
                        if (lVar81 == 0x7ffffffffffffff8) {
                    /* try { // try from 003144e3 to 003144fa has its CatchHandler @ 00314741 */
                    /* WARNING: Subroutine does not return */
                          std::__throw_length_error("vector::_M_realloc_insert");
                        }
                        uVar75 = (lVar81 >> 3) * -0x5555555555555555;
                        uVar32 = uVar75;
                        if (lVar81 == 0) {
                          uVar32 = 1;
                        }
                        local_2c8 = (ulong *)(uVar32 + uVar75);
                        if ((ulong *)0x555555555555555 < local_2c8) {
                          local_2c8 = (ulong *)0x555555555555555;
                        }
                        if (CARRY8(uVar32,uVar75)) {
                          local_2c8 = (ulong *)0x555555555555555;
                        }
                        puVar46 = operator_new((long)local_2c8 * 0x18);
                        puVar46[(long)puVar82 * 3] = uVar71;
                        puVar46[(long)puVar82 * 3 + 1] = (ulong)local_2f8;
                        *(bool *)(puVar46 + (long)puVar82 * 3 + 2) = bVar88;
                        *(undefined4 *)((long)puVar46 + (long)puVar82 * 0x18 + 0x11) = local_18f;
                        *(uint *)((long)puVar46 + (long)puVar82 * 0x18 + 0x14) =
                             CONCAT31(uStack_18b,local_18f._3_1_);
                        puVar40 = puVar46;
                        if (puVar82 != (ulong *)0x0) {
                          lVar81 = 0;
                          do {
                            *(undefined8 *)((long)puVar46 + lVar81 + 0x10) =
                                 *(undefined8 *)((long)pvVar41 + lVar81 + 0x10);
                            uVar11 = ((undefined8 *)((long)pvVar41 + lVar81))[1];
                            *(undefined8 *)((long)puVar46 + lVar81) =
                                 *(undefined8 *)((long)pvVar41 + lVar81);
                            ((undefined8 *)((long)puVar46 + lVar81))[1] = uVar11;
                            lVar81 = lVar81 + 0x18;
                          } while ((long)puVar82 * 0x18 != lVar81);
                          puVar40 = (ulong *)(lVar81 + (long)puVar46);
                        }
                        for (; puVar40 = puVar40 + 3, puVar61 != puVar59; puVar59 = puVar59 + 3) {
                          puVar40[2] = puVar59[2];
                          uVar32 = puVar59[1];
                          *puVar40 = *puVar59;
                          puVar40[1] = uVar32;
                        }
                        if (pvVar41 != (void *)0x0) {
                          operator_delete(pvVar41);
                        }
                        *(ulong **)(this + 0xb0) = puVar46;
                        *(ulong **)(this + 0xb8) = puVar40;
                        puVar40 = local_2c8;
LAB_00311db3:
                        *(ulong **)(this + 0xc0) = puVar46 + (long)puVar40 * 3;
                      }
                      ppuVar47 = ppuVar47 + 6;
                      plVar34 = uStack_248;
                    } while (ppuVar47 != ppuVar74);
                  }
                }
                if (plStack_2e0 != local_2e8) {
                  plStack_2e0 = local_2e8;
                }
                plVar72 = plStack_2e0;
                plVar34 = (long *)puVar76[5];
                local_300 = local_2e8;
                if (plVar34 != (long *)0x0) {
                  LOCK();
                  *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
                  UNLOCK();
                }
                if ((long)uVar71 < (long)uVar80) {
                    /* try { // try from 00311e6c to 0031213b has its CatchHandler @ 003146df */
                  Ranges::erase((Ranges *)local_140,uVar71,(ulong)local_2f8,&local_2e8);
                  plVar37 = plStack_2e0;
                  plVar68 = local_2e8;
                  puVar59 = *(ulong **)(this + 0x68);
                  puVar61 = puVar59;
                  if (0 < *(long *)(this + 0x70) - (long)puVar59) {
                    uVar80 = (ulong)(*(long *)(this + 0x70) - (long)puVar59) >> 4;
                    do {
                      uVar75 = uVar80 >> 1;
                      uVar32 = uVar75;
                      if ((long)puVar61[uVar75 * 2] < (long)uVar71) {
                        uVar32 = ~uVar75 + uVar80;
                        puVar61 = puVar61 + uVar75 * 2 + 2;
                      }
                      uVar80 = uVar32;
                    } while (0 < (long)uVar32);
                  }
                  lVar81 = (long)puVar61 - (long)puVar59 >> 4;
                  if (plStack_2e0 == local_2d8) {
                    lVar33 = (long)plStack_2e0 - (long)local_2e8;
                    if (lVar33 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
                      std::__throw_length_error("vector::_M_realloc_insert");
                    }
                    lVar51 = lVar33 >> 4;
                    uVar32 = lVar51 * -0x5555555555555555;
                    uVar80 = uVar32;
                    if (lVar33 == 0) {
                      uVar80 = 1;
                    }
                    uVar75 = uVar80 + uVar32;
                    if (0x2aaaaaaaaaaaaaa < uVar75) {
                      uVar75 = 0x2aaaaaaaaaaaaaa;
                    }
                    if (CARRY8(uVar80,uVar32)) {
                      uVar75 = 0x2aaaaaaaaaaaaaa;
                    }
                    plVar42 = operator_new(uVar75 * 0x30);
                    plVar42[lVar51 * 2] = lVar81;
                    *(undefined1 *)(plVar42 + lVar51 * 2 + 5) = 0;
                    plVar62 = plVar42;
                    if (plVar68 != plVar37) {
                      plVar45 = plVar68;
                      do {
                        lVar81 = *plVar45;
                        lVar33 = plVar45[1];
                        lVar51 = plVar45[2];
                        uVar89 = *(undefined4 *)((long)plVar45 + 0x14);
                        lVar67 = plVar45[3];
                        uVar90 = *(undefined4 *)((long)plVar45 + 0x1c);
                        param_3 = SUB168(*(undefined1 (*) [16])(plVar45 + 4),0);
                        *(undefined1 (*) [16])(plVar62 + 4) = *(undefined1 (*) [16])(plVar45 + 4);
                        *(int *)(plVar62 + 2) = (int)lVar51;
                        *(undefined4 *)((long)plVar62 + 0x14) = uVar89;
                        *(int *)(plVar62 + 3) = (int)lVar67;
                        *(undefined4 *)((long)plVar62 + 0x1c) = uVar90;
                        *plVar62 = lVar81;
                        plVar62[1] = lVar33;
                        plVar45 = plVar45 + 6;
                        plVar62 = plVar62 + 6;
                      } while (plVar45 != plVar37);
                    }
                    if (plVar68 != (long *)0x0) {
                      operator_delete(plVar68);
                    }
                    local_2d8 = plVar42 + uVar75 * 6;
                    local_2e8 = plVar42;
                  }
                  else {
                    *plStack_2e0 = lVar81;
                    *(undefined1 *)(plStack_2e0 + 5) = 0;
                    plVar62 = plStack_2e0;
                  }
                  plStack_2e0 = plVar62 + 6;
                  pvVar41 = *(void **)(this + 0x68);
                  puVar59 = *(ulong **)(this + 0x70);
                  lVar81 = (long)puVar61 - (long)pvVar41 >> 4;
                  if (puVar59 == *(ulong **)(this + 0x78)) {
                    lVar50 = (long)puVar59 - (long)pvVar41;
                    if (lVar50 == 0x7ffffffffffffff0) {
                    /* try { // try from 00314541 to 00314562 has its CatchHandler @ 003146ae */
                    /* WARNING: Subroutine does not return */
                      std::__throw_length_error("vector::_M_realloc_insert");
                    }
                    uVar32 = lVar50 >> 4;
                    uVar80 = uVar32;
                    if (lVar50 == 0) {
                      uVar80 = 1;
                    }
                    uVar75 = uVar80 + uVar32;
                    if (0x7ffffffffffffff < uVar75) {
                      uVar75 = 0x7ffffffffffffff;
                    }
                    if (CARRY8(uVar80,uVar32)) {
                      uVar75 = 0x7ffffffffffffff;
                    }
                    pvVar79 = operator_new(uVar75 * 0x10);
                    lVar81 = lVar81 * 0x10;
                    puVar82 = (ulong *)((long)pvVar41 + lVar81);
                    *(ulong *)((long)pvVar79 + lVar81) = uVar71;
                    *(undefined8 **)((long)pvVar79 + lVar81 + 8) = local_2f8;
                    if ((long)puVar61 - (long)pvVar41 == 0) {
                      puVar61 = (ulong *)((long)pvVar79 + 0x10);
                    }
                    else {
                      lVar50 = 0;
                      do {
                        lVar33 = lVar50;
                        uVar11 = ((undefined8 *)((long)pvVar41 + lVar33))[1];
                        *(undefined8 *)((long)pvVar79 + lVar33) =
                             *(undefined8 *)((long)pvVar41 + lVar33);
                        ((undefined8 *)((long)pvVar79 + lVar33))[1] = uVar11;
                        lVar50 = lVar33 + 0x10;
                      } while (lVar81 != lVar33 + 0x10);
                      puVar61 = (ulong *)((long)pvVar79 + lVar33 + 0x20);
                    }
                    for (; puVar59 != puVar82; puVar82 = puVar82 + 2) {
                      uVar80 = puVar82[1];
                      *puVar61 = *puVar82;
                      puVar61[1] = uVar80;
                      puVar61 = puVar61 + 2;
                    }
                    if (pvVar41 != (void *)0x0) {
                      operator_delete(pvVar41);
                    }
                    *(void **)(this + 0x68) = pvVar79;
                    *(ulong **)(this + 0x70) = puVar61;
                    *(void **)(this + 0x78) = (void *)((long)pvVar79 + uVar75 * 0x10);
                  }
                  else if (puVar59 == puVar61) {
                    *puVar61 = uVar71;
                    puVar61[1] = (ulong)local_2f8;
                    *(long *)(this + 0x70) = *(long *)(this + 0x70) + 0x10;
                  }
                  else {
                    lVar81 = lVar81 * 0x10;
                    puVar58 = (undefined1 *)((long)pvVar41 + lVar81);
                    *puVar59 = puVar59[-2];
                    puVar59[1] = puVar59[-1];
                    lVar33 = *(long *)(this + 0x70);
                    *(long *)(this + 0x70) = lVar33 + 0x10;
                    puVar55 = (undefined8 *)(lVar33 + -0x10);
                    if (0 < (long)puVar55 - (long)puVar58) {
                      uVar80 = ((ulong)((long)puVar55 - (long)puVar58) >> 4) + 1;
                      do {
                        *puVar55 = puVar55[-2];
                        puVar55[1] = puVar55[-1];
                        puVar55 = puVar55 + -2;
                        uVar80 = uVar80 - 1;
                      } while (1 < uVar80);
                    }
                    *puVar58 = (char)uVar71;
                    *(int *)(puVar58 + 1) = (int)(uVar71 >> 8);
                    puVar58[7] = (char)((long)puVar38 - lVar50 >> 0x3d);
                    *(short *)(puVar58 + 5) = (short)(uVar71 >> 0x28);
                    *(undefined8 **)((long)pvVar41 + lVar81 + 8) = local_2f8;
                  }
                }
                if ((long)plStack_2e0 - (long)local_2e8 != 0) {
                  lVar81 = (long)plVar72 - (long)local_300 >> 4;
                  uVar80 = ((long)plStack_2e0 - (long)local_2e8 >> 4) * -0x5555555555555555;
                  bVar88 = uVar80 < (ulong)(lVar81 * -0x5555555555555555);
                  lVar50 = uVar80 + lVar81 * 0x5555555555555555;
                  if (!bVar88 && lVar50 != 0) {
                    if (bVar88) {
                      lVar50 = 0;
                    }
                    plVar68 = local_2e8 + lVar81 * 2;
                    plVar72 = plVar68 + lVar50 * 6;
                    do {
                      if (plVar34 != (long *)0x0) {
                        LOCK();
                        *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
                        UNLOCK();
                      }
                      cVar31 = (char)plVar68[5];
                      if (cVar31 == '\x02') {
                        lVar50 = *plVar68;
                        lVar81 = plVar68[1];
                        if (lVar50 != lVar81) {
                          lVar33 = *(long *)(this + 0x80);
                          plVar37 = (long *)(lVar33 + lVar81 * 8);
                          uVar80 = (long)*(long **)(this + 0x88) - (long)plVar37;
                          if (uVar80 == 0) {
                            plVar62 = plVar37;
                          }
                          else if ((long)uVar80 < 1) {
                            plVar62 = *(long **)(this + 0x88);
                          }
                          else {
                            lVar67 = (uVar80 >> 3) + 1;
                            lVar51 = lVar33;
                            do {
                              uVar11 = *(undefined8 *)(lVar51 + lVar81 * 8);
                              *(undefined8 *)(lVar51 + lVar81 * 8) = 0;
                              plVar62 = *(long **)(lVar51 + lVar50 * 8);
                              *(undefined8 *)(lVar51 + lVar50 * 8) = uVar11;
                              if (plVar62 != (long *)0x0) {
                                LOCK();
                                plVar42 = plVar62 + 1;
                                *(int *)plVar42 = (int)*plVar42 + -1;
                                UNLOCK();
                                if ((int)*plVar42 == 0) {
                                  (**(code **)(*plVar62 + 8))();
                                }
                              }
                              lVar67 = lVar67 + -1;
                              lVar51 = lVar51 + 8;
                            } while (1 < lVar67);
                            plVar62 = *(long **)(this + 0x88);
                          }
                          plVar37 = (long *)((long)plVar62 + ((lVar33 + lVar50 * 8) - (long)plVar37)
                                            );
                          if (plVar62 != plVar37) {
                            plVar42 = plVar37;
                            do {
                              plVar45 = (long *)*plVar42;
                              if (plVar45 != (long *)0x0) {
                                LOCK();
                                plVar78 = plVar45 + 1;
                                *(int *)plVar78 = (int)*plVar78 + -1;
                                UNLOCK();
                                if ((int)*plVar78 == 0) {
                                  (**(code **)(*plVar45 + 8))();
                                }
                              }
                              plVar42 = plVar42 + 1;
                            } while (plVar42 != plVar62);
                            *(long **)(this + 0x88) = plVar37;
                          }
                        }
LAB_00312bcf:
                        if (plVar34 != (long *)0x0) {
                          LOCK();
                          plVar37 = plVar34 + 1;
                          *(int *)plVar37 = (int)*plVar37 + -1;
                          UNLOCK();
                          if ((int)*plVar37 == 0) {
                            lVar50 = *plVar34;
                            plVar37 = plVar34;
LAB_00312bf3:
                            (**(code **)(lVar50 + 8))(plVar37);
                          }
                        }
                      }
                      else {
                        if (cVar31 == '\x01') {
                          plVar62 = *(long **)(this + 0x80);
                          plVar42 = *(long **)(this + 0x88);
                          lVar50 = *plVar68;
                          plVar37 = plVar62 + lVar50;
                          if (plVar42 != *(long **)(this + 0x90)) {
                            lVar50 = *plVar37;
                            if (plVar42 == plVar37) {
                              if (lVar50 != 0) {
                                LOCK();
                                *(int *)(lVar50 + 8) = *(int *)(lVar50 + 8) + 1;
                                UNLOCK();
                                plVar37 = *(long **)(this + 0x88);
                              }
                              *(long **)(this + 0x88) = plVar37 + 1;
                            }
                            else {
                              if (lVar50 != 0) {
                                LOCK();
                                *(int *)(lVar50 + 8) = *(int *)(lVar50 + 8) + 1;
                                UNLOCK();
                                plVar42 = *(long **)(this + 0x88);
                              }
                              *plVar42 = plVar42[-1];
                              plVar42[-1] = 0;
                              lVar81 = *(long *)(this + 0x88);
                              *(long *)(this + 0x88) = lVar81 + 8;
                              plVar62 = (long *)(lVar81 + -8);
                              if (0 < (long)plVar62 - (long)plVar37) {
                                lVar81 = ((ulong)((long)plVar62 - (long)plVar37) >> 3) + 1;
                                do {
                                  lVar33 = plVar62[-1];
                                  plVar42 = (long *)*plVar62;
                                  plVar62[-1] = 0;
                                  *plVar62 = lVar33;
                                  if (plVar42 != (long *)0x0) {
                                    LOCK();
                                    plVar45 = plVar42 + 1;
                                    *(int *)plVar45 = (int)*plVar45 + -1;
                                    UNLOCK();
                                    if ((int)*plVar45 == 0) {
                                      (**(code **)(*plVar42 + 8))();
                                    }
                                  }
                                  plVar62 = plVar62 + -1;
                                  lVar81 = lVar81 + -1;
                                } while (1 < lVar81);
                              }
                              plVar62 = (long *)*plVar37;
                              *plVar37 = lVar50;
                              if (plVar62 != (long *)0x0) {
                                LOCK();
                                plVar37 = plVar62 + 1;
                                *(int *)plVar37 = (int)*plVar37 + -1;
                                UNLOCK();
                                if ((int)*plVar37 == 0) {
                                  (**(code **)(*plVar62 + 8))();
                                }
                              }
                            }
                            goto LAB_00312bcf;
                          }
                          lVar81 = (long)plVar42 - (long)plVar62;
                          if (lVar81 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
                            std::__throw_length_error("vector::_M_realloc_insert");
                          }
                          uVar32 = lVar81 >> 3;
                          uVar80 = uVar32;
                          if (lVar81 == 0) {
                            uVar80 = 1;
                          }
                          puVar59 = (ulong *)(uVar80 + uVar32);
                          if ((ulong *)0xfffffffffffffff < puVar59) {
                            puVar59 = (ulong *)0xfffffffffffffff;
                          }
                          if (CARRY8(uVar80,uVar32)) {
                            puVar59 = (ulong *)0xfffffffffffffff;
                          }
                    /* try { // try from 003125a4 to 0031277e has its CatchHandler @ 00314702 */
                          plVar45 = operator_new((long)puVar59 * 8);
                          lVar33 = *plVar37;
                          plVar45[lVar50] = lVar33;
                          if (lVar33 != 0) {
                            LOCK();
                            *(int *)(lVar33 + 8) = *(int *)(lVar33 + 8) + 1;
                            UNLOCK();
                          }
                          plVar78 = plVar45;
                          if (lVar50 != 0) {
                            uVar80 = lVar50 + 0x1fffffffffffffffU & 0x1fffffffffffffff;
                            plVar53 = plVar62;
                            if (2 < uVar80) {
                              uVar80 = uVar80 + 1;
                              uVar75 = uVar80 & 0x3ffffffffffffffc;
                              uVar32 = (uVar75 - 4 >> 2) + 1;
                              if (uVar75 - 4 == 0) {
                                lVar33 = 0;
LAB_003129ab:
                                lVar51 = (plVar62 + lVar33)[1];
                                plVar78 = plVar62 + lVar33 + 2;
                                lVar67 = *plVar78;
                                uVar89 = *(undefined4 *)((long)plVar78 + 4);
                                lVar84 = plVar78[1];
                                uVar90 = *(undefined4 *)((long)plVar78 + 0xc);
                                plVar45[lVar33] = plVar62[lVar33];
                                (plVar45 + lVar33)[1] = lVar51;
                                plVar78 = plVar45 + lVar33 + 2;
                                *(int *)plVar78 = (int)lVar67;
                                *(undefined4 *)((long)plVar78 + 4) = uVar89;
                                *(int *)(plVar78 + 1) = (int)lVar84;
                                *(undefined4 *)((long)plVar78 + 0xc) = uVar90;
                                *(undefined1 (*) [16])(plVar62 + lVar33 + 2) = (undefined1  [16])0x0
                                ;
                                *(undefined1 (*) [16])(plVar62 + lVar33) = (undefined1  [16])0x0;
                              }
                              else {
                                uVar64 = (uVar32 & 0x7ffffffffffffffe) - 2;
                                param_14 = (ulong **)((uVar64 >> 1) + 1);
                                if (uVar64 == 0) {
                                  lVar33 = 0;
LAB_00312e4f:
                                  lVar51 = (plVar62 + lVar33)[1];
                                  lVar67 = plVar62[lVar33 + 2];
                                  lVar84 = (plVar62 + lVar33 + 2)[1];
                                  plVar45[lVar33] = plVar62[lVar33];
                                  (plVar45 + lVar33)[1] = lVar51;
                                  plVar45[lVar33 + 2] = lVar67;
                                  (plVar45 + lVar33 + 2)[1] = lVar84;
                                  uVar64 = lVar33 * 8 | 0x20;
                                  plVar62[lVar33 + 2] = 0;
                                  (plVar62 + lVar33 + 2)[1] = 0;
                                  plVar62[lVar33] = 0;
                                  (plVar62 + lVar33)[1] = 0;
                                  uVar11 = ((undefined8 *)((long)plVar62 + uVar64))[1];
                                  puVar2 = (undefined4 *)((long)plVar62 + uVar64 + 0x10);
                                  uVar89 = *puVar2;
                                  uVar90 = puVar2[1];
                                  uVar91 = puVar2[2];
                                  uVar92 = puVar2[3];
                                  *(undefined8 *)((long)plVar45 + uVar64) =
                                       *(undefined8 *)((long)plVar62 + uVar64);
                                  ((undefined8 *)((long)plVar45 + uVar64))[1] = uVar11;
                                  puVar2 = (undefined4 *)((long)plVar45 + uVar64 + 0x10);
                                  *puVar2 = uVar89;
                                  puVar2[1] = uVar90;
                                  puVar2[2] = uVar91;
                                  puVar2[3] = uVar92;
                                  lVar33 = lVar33 + 8;
                                  puVar38 = (undefined8 *)((long)plVar62 + uVar64 + 0x10);
                                  *puVar38 = 0;
                                  puVar38[1] = 0;
                                  *(undefined8 *)((long)plVar62 + uVar64) = 0;
                                  ((undefined8 *)((long)plVar62 + uVar64))[1] = 0;
                                }
                                else {
                                  uVar64 = (ulong)param_14 & 0xfffffffffffffffe;
                                  lVar51 = 0;
                                  do {
                                    lVar33 = (plVar62 + lVar51)[1];
                                    lVar67 = plVar62[lVar51 + 2];
                                    lVar84 = (plVar62 + lVar51 + 2)[1];
                                    plVar45[lVar51] = plVar62[lVar51];
                                    (plVar45 + lVar51)[1] = lVar33;
                                    plVar45[lVar51 + 2] = lVar67;
                                    (plVar45 + lVar51 + 2)[1] = lVar84;
                                    plVar62[lVar51 + 2] = 0;
                                    (plVar62 + lVar51 + 2)[1] = 0;
                                    plVar62[lVar51] = 0;
                                    (plVar62 + lVar51)[1] = 0;
                                    lVar33 = (plVar62 + lVar51 + 4)[1];
                                    lVar67 = plVar62[lVar51 + 6];
                                    lVar84 = (plVar62 + lVar51 + 6)[1];
                                    plVar45[lVar51 + 4] = plVar62[lVar51 + 4];
                                    (plVar45 + lVar51 + 4)[1] = lVar33;
                                    plVar45[lVar51 + 6] = lVar67;
                                    (plVar45 + lVar51 + 6)[1] = lVar84;
                                    plVar62[lVar51 + 6] = 0;
                                    (plVar62 + lVar51 + 6)[1] = 0;
                                    plVar62[lVar51 + 4] = 0;
                                    (plVar62 + lVar51 + 4)[1] = 0;
                                    lVar33 = (plVar62 + lVar51 + 8)[1];
                                    lVar67 = plVar62[lVar51 + 10];
                                    lVar84 = (plVar62 + lVar51 + 10)[1];
                                    plVar45[lVar51 + 8] = plVar62[lVar51 + 8];
                                    (plVar45 + lVar51 + 8)[1] = lVar33;
                                    plVar45[lVar51 + 10] = lVar67;
                                    (plVar45 + lVar51 + 10)[1] = lVar84;
                                    plVar62[lVar51 + 10] = 0;
                                    (plVar62 + lVar51 + 10)[1] = 0;
                                    plVar62[lVar51 + 8] = 0;
                                    (plVar62 + lVar51 + 8)[1] = 0;
                                    lVar33 = (plVar62 + lVar51 + 0xc)[1];
                                    plVar78 = plVar62 + lVar51 + 0xe;
                                    lVar67 = *plVar78;
                                    uVar89 = *(undefined4 *)((long)plVar78 + 4);
                                    lVar84 = plVar78[1];
                                    uVar90 = *(undefined4 *)((long)plVar78 + 0xc);
                                    plVar45[lVar51 + 0xc] = plVar62[lVar51 + 0xc];
                                    (plVar45 + lVar51 + 0xc)[1] = lVar33;
                                    plVar78 = plVar45 + lVar51 + 0xe;
                                    *(int *)plVar78 = (int)lVar67;
                                    *(undefined4 *)((long)plVar78 + 4) = uVar89;
                                    *(int *)(plVar78 + 1) = (int)lVar84;
                                    *(undefined4 *)((long)plVar78 + 0xc) = uVar90;
                                    lVar33 = lVar51 + 0x10;
                                    plVar62[lVar51 + 0xe] = 0;
                                    (plVar62 + lVar51 + 0xe)[1] = 0;
                                    plVar62[lVar51 + 0xc] = 0;
                                    (plVar62 + lVar51 + 0xc)[1] = 0;
                                    uVar64 = uVar64 - 2;
                                    lVar51 = lVar33;
                                  } while (uVar64 != 0);
                                  if (((ulong)param_14 & 1) != 0) goto LAB_00312e4f;
                                }
                                param_3 = (long *)0x0;
                                if ((uVar32 & 1) != 0) goto LAB_003129ab;
                                param_3 = (long *)0x0;
                              }
                              plVar78 = plVar45 + uVar75;
                              if (uVar80 == uVar75) goto LAB_003129fa;
                              plVar53 = plVar62 + uVar75;
                            }
                            do {
                              *plVar78 = *plVar53;
                              *plVar53 = 0;
                              plVar53 = plVar53 + 1;
                              plVar78 = plVar78 + 1;
                            } while (plVar53 != plVar37);
                          }
LAB_003129fa:
                          plVar53 = plVar78 + 1;
                          if (plVar42 != plVar37) {
                            uVar80 = (lVar81 + lVar50 * -8) - 8;
                            if (0x17 < uVar80) {
                              uVar75 = (uVar80 >> 3) + 1;
                              uVar32 = uVar75 & 0x3ffffffffffffffc;
                              uVar80 = (uVar32 - 4 >> 2) + 1;
                              if (uVar32 - 4 == 0) {
                                lVar50 = 0;
LAB_00312b3b:
                                lVar81 = (plVar37 + lVar50)[1];
                                plVar4 = plVar37 + lVar50 + 2;
                                lVar33 = *plVar4;
                                uVar89 = *(undefined4 *)((long)plVar4 + 4);
                                lVar51 = plVar4[1];
                                uVar90 = *(undefined4 *)((long)plVar4 + 0xc);
                                plVar53[lVar50] = plVar37[lVar50];
                                (plVar53 + lVar50)[1] = lVar81;
                                plVar78 = plVar78 + lVar50 + 3;
                                *(int *)plVar78 = (int)lVar33;
                                *(undefined4 *)((long)plVar78 + 4) = uVar89;
                                *(int *)(plVar78 + 1) = (int)lVar51;
                                *(undefined4 *)((long)plVar78 + 0xc) = uVar90;
                                *(undefined1 (*) [16])(plVar37 + lVar50 + 2) = (undefined1  [16])0x0
                                ;
                                *(undefined1 (*) [16])(plVar37 + lVar50) = (undefined1  [16])0x0;
                              }
                              else {
                                uVar64 = (uVar80 & 0x7ffffffffffffffe) - 2;
                                param_14 = (ulong **)((uVar64 >> 1) + 1);
                                if (uVar64 == 0) {
                                  lVar50 = 0;
LAB_00312eb8:
                                  lVar81 = (plVar37 + lVar50)[1];
                                  lVar33 = plVar37[lVar50 + 2];
                                  lVar51 = (plVar37 + lVar50 + 2)[1];
                                  plVar53[lVar50] = plVar37[lVar50];
                                  (plVar53 + lVar50)[1] = lVar81;
                                  plVar78[lVar50 + 3] = lVar33;
                                  (plVar78 + lVar50 + 3)[1] = lVar51;
                                  uVar64 = lVar50 * 8 | 0x20;
                                  plVar37[lVar50 + 2] = 0;
                                  (plVar37 + lVar50 + 2)[1] = 0;
                                  plVar37[lVar50] = 0;
                                  (plVar37 + lVar50)[1] = 0;
                                  uVar11 = ((undefined8 *)((long)plVar37 + uVar64))[1];
                                  puVar2 = (undefined4 *)((long)plVar37 + uVar64 + 0x10);
                                  uVar89 = *puVar2;
                                  uVar90 = puVar2[1];
                                  uVar91 = puVar2[2];
                                  uVar92 = puVar2[3];
                                  *(undefined8 *)((long)plVar53 + uVar64) =
                                       *(undefined8 *)((long)plVar37 + uVar64);
                                  ((undefined8 *)((long)plVar53 + uVar64))[1] = uVar11;
                                  puVar2 = (undefined4 *)((long)plVar78 + uVar64 + 0x18);
                                  *puVar2 = uVar89;
                                  puVar2[1] = uVar90;
                                  puVar2[2] = uVar91;
                                  puVar2[3] = uVar92;
                                  lVar50 = lVar50 + 8;
                                  puVar38 = (undefined8 *)((long)plVar37 + uVar64 + 0x10);
                                  *puVar38 = 0;
                                  puVar38[1] = 0;
                                  *(undefined8 *)((long)plVar37 + uVar64) = 0;
                                  ((undefined8 *)((long)plVar37 + uVar64))[1] = 0;
                                }
                                else {
                                  uVar64 = (ulong)param_14 & 0xfffffffffffffffe;
                                  lVar81 = 0;
                                  do {
                                    lVar50 = (plVar37 + lVar81)[1];
                                    lVar33 = plVar37[lVar81 + 2];
                                    lVar51 = (plVar37 + lVar81 + 2)[1];
                                    plVar78[lVar81 + 1] = plVar37[lVar81];
                                    (plVar78 + lVar81 + 1)[1] = lVar50;
                                    plVar78[lVar81 + 3] = lVar33;
                                    (plVar78 + lVar81 + 3)[1] = lVar51;
                                    plVar37[lVar81 + 2] = 0;
                                    (plVar37 + lVar81 + 2)[1] = 0;
                                    plVar37[lVar81] = 0;
                                    (plVar37 + lVar81)[1] = 0;
                                    lVar50 = (plVar37 + lVar81 + 4)[1];
                                    lVar33 = plVar37[lVar81 + 6];
                                    lVar51 = (plVar37 + lVar81 + 6)[1];
                                    plVar78[lVar81 + 5] = plVar37[lVar81 + 4];
                                    (plVar78 + lVar81 + 5)[1] = lVar50;
                                    plVar78[lVar81 + 7] = lVar33;
                                    (plVar78 + lVar81 + 7)[1] = lVar51;
                                    plVar37[lVar81 + 6] = 0;
                                    (plVar37 + lVar81 + 6)[1] = 0;
                                    plVar37[lVar81 + 4] = 0;
                                    (plVar37 + lVar81 + 4)[1] = 0;
                                    lVar50 = (plVar37 + lVar81 + 8)[1];
                                    lVar33 = plVar37[lVar81 + 10];
                                    lVar51 = (plVar37 + lVar81 + 10)[1];
                                    plVar78[lVar81 + 9] = plVar37[lVar81 + 8];
                                    (plVar78 + lVar81 + 9)[1] = lVar50;
                                    plVar78[lVar81 + 0xb] = lVar33;
                                    (plVar78 + lVar81 + 0xb)[1] = lVar51;
                                    plVar37[lVar81 + 10] = 0;
                                    (plVar37 + lVar81 + 10)[1] = 0;
                                    plVar37[lVar81 + 8] = 0;
                                    (plVar37 + lVar81 + 8)[1] = 0;
                                    lVar50 = (plVar37 + lVar81 + 0xc)[1];
                                    plVar4 = plVar37 + lVar81 + 0xe;
                                    lVar33 = *plVar4;
                                    uVar89 = *(undefined4 *)((long)plVar4 + 4);
                                    lVar51 = plVar4[1];
                                    uVar90 = *(undefined4 *)((long)plVar4 + 0xc);
                                    plVar78[lVar81 + 0xd] = plVar37[lVar81 + 0xc];
                                    (plVar78 + lVar81 + 0xd)[1] = lVar50;
                                    plVar4 = plVar78 + lVar81 + 0xf;
                                    *(int *)plVar4 = (int)lVar33;
                                    *(undefined4 *)((long)plVar4 + 4) = uVar89;
                                    *(int *)(plVar4 + 1) = (int)lVar51;
                                    *(undefined4 *)((long)plVar4 + 0xc) = uVar90;
                                    lVar50 = lVar81 + 0x10;
                                    plVar37[lVar81 + 0xe] = 0;
                                    (plVar37 + lVar81 + 0xe)[1] = 0;
                                    plVar37[lVar81 + 0xc] = 0;
                                    (plVar37 + lVar81 + 0xc)[1] = 0;
                                    uVar64 = uVar64 - 2;
                                    lVar81 = lVar50;
                                  } while (uVar64 != 0);
                                  if (((ulong)param_14 & 1) != 0) goto LAB_00312eb8;
                                }
                                param_3 = (long *)0x0;
                                if ((uVar80 & 1) != 0) goto LAB_00312b3b;
                                param_3 = (long *)0x0;
                              }
                              plVar53 = plVar53 + uVar32;
                              if (uVar75 == uVar32) goto LAB_00312b9b;
                              plVar37 = plVar37 + uVar32;
                            }
                            do {
                              *plVar53 = *plVar37;
                              *plVar37 = 0;
                              plVar37 = plVar37 + 1;
                              plVar53 = plVar53 + 1;
                            } while (plVar37 != plVar42);
                          }
LAB_00312b9b:
                          local_2c8 = puVar59;
                          if (plVar62 != (long *)0x0) {
                            operator_delete(plVar62);
                          }
                          *(long **)(this + 0x80) = plVar45;
                          *(long **)(this + 0x88) = plVar53;
                          *(long **)(this + 0x90) = plVar45 + (long)local_2c8;
                          goto LAB_00312bcf;
                        }
                        if (cVar31 != '\0') goto LAB_00312bcf;
                        puVar61 = *(ulong **)(this + 0x80);
                        puVar82 = *(ulong **)(this + 0x88);
                        lVar50 = *plVar68;
                        puVar59 = puVar61 + lVar50;
                        if (puVar82 != *(ulong **)(this + 0x90)) {
                          if (puVar82 == puVar59) {
                            *puVar59 = (ulong)plVar34;
                            *(ulong **)(this + 0x88) = puVar59 + 1;
                            goto LAB_00312290;
                          }
                          *puVar82 = puVar82[-1];
                          puVar82[-1] = 0;
                          lVar50 = *(long *)(this + 0x88);
                          *(long *)(this + 0x88) = lVar50 + 8;
                          plVar37 = (long *)(lVar50 + -8);
                          if (0 < (long)plVar37 - (long)puVar59) {
                            lVar50 = ((ulong)((long)plVar37 - (long)puVar59) >> 3) + 1;
                            do {
                              lVar81 = plVar37[-1];
                              plVar62 = (long *)*plVar37;
                              plVar37[-1] = 0;
                              *plVar37 = lVar81;
                              if (plVar62 != (long *)0x0) {
                                LOCK();
                                plVar42 = plVar62 + 1;
                                *(int *)plVar42 = (int)*plVar42 + -1;
                                UNLOCK();
                                if ((int)*plVar42 == 0) {
                                  (**(code **)(*plVar62 + 8))();
                                }
                              }
                              plVar37 = plVar37 + -1;
                              lVar50 = lVar50 + -1;
                            } while (1 < lVar50);
                          }
                          plVar37 = (long *)*puVar59;
                          *puVar59 = (ulong)plVar34;
                          if (plVar37 == (long *)0x0) goto LAB_00312290;
                          LOCK();
                          plVar62 = plVar37 + 1;
                          *(int *)plVar62 = (int)*plVar62 + -1;
                          UNLOCK();
                          if ((int)*plVar62 != 0) goto LAB_00312290;
                          lVar50 = *plVar37;
                          goto LAB_00312bf3;
                        }
                        lVar81 = (long)puVar82 - (long)puVar61;
                        if (lVar81 == 0x7ffffffffffffff8) {
                    /* try { // try from 003144fb to 00314512 has its CatchHandler @ 00314700 */
                    /* WARNING: Subroutine does not return */
                          std::__throw_length_error("vector::_M_realloc_insert");
                        }
                        uVar32 = lVar81 >> 3;
                        uVar80 = uVar32;
                        if (lVar81 == 0) {
                          uVar80 = 1;
                        }
                        puVar40 = (ulong *)(uVar80 + uVar32);
                        if ((ulong *)0xfffffffffffffff < puVar40) {
                          puVar40 = (ulong *)0xfffffffffffffff;
                        }
                        if (CARRY8(uVar80,uVar32)) {
                          puVar40 = (ulong *)0xfffffffffffffff;
                        }
                        puVar46 = operator_new((long)puVar40 * 8);
                        puVar46[lVar50] = (ulong)plVar34;
                        puVar49 = puVar46;
                        if (lVar50 != 0) {
                          uVar80 = lVar50 + 0x1fffffffffffffffU & 0x1fffffffffffffff;
                          puVar54 = puVar61;
                          if (2 < uVar80) {
                            uVar80 = uVar80 + 1;
                            uVar75 = uVar80 & 0x3ffffffffffffffc;
                            uVar32 = (uVar75 - 4 >> 2) + 1;
                            if (uVar75 - 4 == 0) {
                              lVar33 = 0;
LAB_00312c06:
                              uVar32 = (puVar61 + lVar33)[1];
                              puVar49 = puVar61 + lVar33 + 2;
                              uVar64 = *puVar49;
                              uVar89 = *(undefined4 *)((long)puVar49 + 4);
                              uVar73 = puVar49[1];
                              uVar90 = *(undefined4 *)((long)puVar49 + 0xc);
                              puVar46[lVar33] = puVar61[lVar33];
                              (puVar46 + lVar33)[1] = uVar32;
                              puVar49 = puVar46 + lVar33 + 2;
                              *(int *)puVar49 = (int)uVar64;
                              *(undefined4 *)((long)puVar49 + 4) = uVar89;
                              *(int *)(puVar49 + 1) = (int)uVar73;
                              *(undefined4 *)((long)puVar49 + 0xc) = uVar90;
                              *(undefined1 (*) [16])(puVar61 + lVar33 + 2) = (undefined1  [16])0x0;
                              *(undefined1 (*) [16])(puVar61 + lVar33) = (undefined1  [16])0x0;
                            }
                            else {
                              uVar64 = (uVar32 & 0x7ffffffffffffffe) - 2;
                              param_14 = (ulong **)((uVar64 >> 1) + 1);
                              if (uVar64 == 0) {
                                lVar33 = 0;
LAB_00312f30:
                                uVar64 = (puVar61 + lVar33)[1];
                                uVar73 = puVar61[lVar33 + 2];
                                uVar39 = (puVar61 + lVar33 + 2)[1];
                                puVar46[lVar33] = puVar61[lVar33];
                                (puVar46 + lVar33)[1] = uVar64;
                                puVar46[lVar33 + 2] = uVar73;
                                (puVar46 + lVar33 + 2)[1] = uVar39;
                                uVar64 = lVar33 * 8 | 0x20;
                                puVar61[lVar33 + 2] = 0;
                                (puVar61 + lVar33 + 2)[1] = 0;
                                puVar61[lVar33] = 0;
                                (puVar61 + lVar33)[1] = 0;
                                uVar11 = ((undefined8 *)((long)puVar61 + uVar64))[1];
                                puVar2 = (undefined4 *)((long)puVar61 + uVar64 + 0x10);
                                uVar89 = *puVar2;
                                uVar90 = puVar2[1];
                                uVar91 = puVar2[2];
                                uVar92 = puVar2[3];
                                *(undefined8 *)((long)puVar46 + uVar64) =
                                     *(undefined8 *)((long)puVar61 + uVar64);
                                ((undefined8 *)((long)puVar46 + uVar64))[1] = uVar11;
                                puVar2 = (undefined4 *)((long)puVar46 + uVar64 + 0x10);
                                *puVar2 = uVar89;
                                puVar2[1] = uVar90;
                                puVar2[2] = uVar91;
                                puVar2[3] = uVar92;
                                lVar33 = lVar33 + 8;
                                puVar38 = (undefined8 *)((long)puVar61 + uVar64 + 0x10);
                                *puVar38 = 0;
                                puVar38[1] = 0;
                                *(undefined8 *)((long)puVar61 + uVar64) = 0;
                                ((undefined8 *)((long)puVar61 + uVar64))[1] = 0;
                              }
                              else {
                                uVar64 = (ulong)param_14 & 0xfffffffffffffffe;
                                lVar51 = 0;
                                do {
                                  uVar73 = (puVar61 + lVar51)[1];
                                  uVar39 = puVar61[lVar51 + 2];
                                  uVar29 = (puVar61 + lVar51 + 2)[1];
                                  puVar46[lVar51] = puVar61[lVar51];
                                  (puVar46 + lVar51)[1] = uVar73;
                                  puVar46[lVar51 + 2] = uVar39;
                                  (puVar46 + lVar51 + 2)[1] = uVar29;
                                  puVar61[lVar51 + 2] = 0;
                                  (puVar61 + lVar51 + 2)[1] = 0;
                                  puVar61[lVar51] = 0;
                                  (puVar61 + lVar51)[1] = 0;
                                  uVar73 = (puVar61 + lVar51 + 4)[1];
                                  uVar39 = puVar61[lVar51 + 6];
                                  uVar29 = (puVar61 + lVar51 + 6)[1];
                                  puVar46[lVar51 + 4] = puVar61[lVar51 + 4];
                                  (puVar46 + lVar51 + 4)[1] = uVar73;
                                  puVar46[lVar51 + 6] = uVar39;
                                  (puVar46 + lVar51 + 6)[1] = uVar29;
                                  puVar61[lVar51 + 6] = 0;
                                  (puVar61 + lVar51 + 6)[1] = 0;
                                  puVar61[lVar51 + 4] = 0;
                                  (puVar61 + lVar51 + 4)[1] = 0;
                                  uVar73 = (puVar61 + lVar51 + 8)[1];
                                  uVar39 = puVar61[lVar51 + 10];
                                  uVar29 = (puVar61 + lVar51 + 10)[1];
                                  puVar46[lVar51 + 8] = puVar61[lVar51 + 8];
                                  (puVar46 + lVar51 + 8)[1] = uVar73;
                                  puVar46[lVar51 + 10] = uVar39;
                                  (puVar46 + lVar51 + 10)[1] = uVar29;
                                  puVar61[lVar51 + 10] = 0;
                                  (puVar61 + lVar51 + 10)[1] = 0;
                                  puVar61[lVar51 + 8] = 0;
                                  (puVar61 + lVar51 + 8)[1] = 0;
                                  uVar73 = (puVar61 + lVar51 + 0xc)[1];
                                  puVar49 = puVar61 + lVar51 + 0xe;
                                  uVar39 = *puVar49;
                                  uVar89 = *(undefined4 *)((long)puVar49 + 4);
                                  uVar29 = puVar49[1];
                                  uVar90 = *(undefined4 *)((long)puVar49 + 0xc);
                                  puVar46[lVar51 + 0xc] = puVar61[lVar51 + 0xc];
                                  (puVar46 + lVar51 + 0xc)[1] = uVar73;
                                  puVar49 = puVar46 + lVar51 + 0xe;
                                  *(int *)puVar49 = (int)uVar39;
                                  *(undefined4 *)((long)puVar49 + 4) = uVar89;
                                  *(int *)(puVar49 + 1) = (int)uVar29;
                                  *(undefined4 *)((long)puVar49 + 0xc) = uVar90;
                                  lVar33 = lVar51 + 0x10;
                                  puVar61[lVar51 + 0xe] = 0;
                                  (puVar61 + lVar51 + 0xe)[1] = 0;
                                  puVar61[lVar51 + 0xc] = 0;
                                  (puVar61 + lVar51 + 0xc)[1] = 0;
                                  uVar64 = uVar64 - 2;
                                  lVar51 = lVar33;
                                } while (uVar64 != 0);
                                if (((ulong)param_14 & 1) != 0) goto LAB_00312f30;
                              }
                              param_3 = (long *)0x0;
                              if ((uVar32 & 1) != 0) goto LAB_00312c06;
                              param_3 = (long *)0x0;
                            }
                            puVar49 = puVar46 + uVar75;
                            if (uVar80 == uVar75) goto LAB_00312c5a;
                            puVar54 = puVar61 + uVar75;
                          }
                          do {
                            *puVar49 = *puVar54;
                            *puVar54 = 0;
                            puVar54 = puVar54 + 1;
                            puVar49 = puVar49 + 1;
                          } while (puVar54 != puVar59);
                        }
LAB_00312c5a:
                        puVar54 = puVar49 + 1;
                        if (puVar82 != puVar59) {
                          uVar80 = (lVar81 + lVar50 * -8) - 8;
                          if (0x17 < uVar80) {
                            uVar75 = (uVar80 >> 3) + 1;
                            uVar32 = uVar75 & 0x3ffffffffffffffc;
                            uVar80 = (uVar32 - 4 >> 2) + 1;
                            if (uVar32 - 4 == 0) {
                              lVar50 = 0;
LAB_00312d9b:
                              uVar80 = (puVar59 + lVar50)[1];
                              puVar5 = puVar59 + lVar50 + 2;
                              uVar64 = *puVar5;
                              uVar89 = *(undefined4 *)((long)puVar5 + 4);
                              uVar73 = puVar5[1];
                              uVar90 = *(undefined4 *)((long)puVar5 + 0xc);
                              puVar54[lVar50] = puVar59[lVar50];
                              (puVar54 + lVar50)[1] = uVar80;
                              puVar49 = puVar49 + lVar50 + 3;
                              *(int *)puVar49 = (int)uVar64;
                              *(undefined4 *)((long)puVar49 + 4) = uVar89;
                              *(int *)(puVar49 + 1) = (int)uVar73;
                              *(undefined4 *)((long)puVar49 + 0xc) = uVar90;
                              *(undefined1 (*) [16])(puVar59 + lVar50 + 2) = (undefined1  [16])0x0;
                              *(undefined1 (*) [16])(puVar59 + lVar50) = (undefined1  [16])0x0;
                            }
                            else {
                              uVar64 = (uVar80 & 0x7ffffffffffffffe) - 2;
                              param_14 = (ulong **)((uVar64 >> 1) + 1);
                              if (uVar64 == 0) {
                                lVar50 = 0;
LAB_00312f99:
                                uVar64 = (puVar59 + lVar50)[1];
                                uVar73 = puVar59[lVar50 + 2];
                                uVar39 = (puVar59 + lVar50 + 2)[1];
                                puVar54[lVar50] = puVar59[lVar50];
                                (puVar54 + lVar50)[1] = uVar64;
                                puVar49[lVar50 + 3] = uVar73;
                                (puVar49 + lVar50 + 3)[1] = uVar39;
                                uVar64 = lVar50 * 8 | 0x20;
                                puVar59[lVar50 + 2] = 0;
                                (puVar59 + lVar50 + 2)[1] = 0;
                                puVar59[lVar50] = 0;
                                (puVar59 + lVar50)[1] = 0;
                                uVar11 = ((undefined8 *)((long)puVar59 + uVar64))[1];
                                puVar2 = (undefined4 *)((long)puVar59 + uVar64 + 0x10);
                                uVar89 = *puVar2;
                                uVar90 = puVar2[1];
                                uVar91 = puVar2[2];
                                uVar92 = puVar2[3];
                                *(undefined8 *)((long)puVar54 + uVar64) =
                                     *(undefined8 *)((long)puVar59 + uVar64);
                                ((undefined8 *)((long)puVar54 + uVar64))[1] = uVar11;
                                puVar2 = (undefined4 *)((long)puVar49 + uVar64 + 0x18);
                                *puVar2 = uVar89;
                                puVar2[1] = uVar90;
                                puVar2[2] = uVar91;
                                puVar2[3] = uVar92;
                                lVar50 = lVar50 + 8;
                                puVar38 = (undefined8 *)((long)puVar59 + uVar64 + 0x10);
                                *puVar38 = 0;
                                puVar38[1] = 0;
                                *(undefined8 *)((long)puVar59 + uVar64) = 0;
                                ((undefined8 *)((long)puVar59 + uVar64))[1] = 0;
                              }
                              else {
                                uVar64 = (ulong)param_14 & 0xfffffffffffffffe;
                                lVar81 = 0;
                                do {
                                  uVar73 = (puVar59 + lVar81)[1];
                                  uVar39 = puVar59[lVar81 + 2];
                                  uVar29 = (puVar59 + lVar81 + 2)[1];
                                  puVar49[lVar81 + 1] = puVar59[lVar81];
                                  (puVar49 + lVar81 + 1)[1] = uVar73;
                                  puVar49[lVar81 + 3] = uVar39;
                                  (puVar49 + lVar81 + 3)[1] = uVar29;
                                  puVar59[lVar81 + 2] = 0;
                                  (puVar59 + lVar81 + 2)[1] = 0;
                                  puVar59[lVar81] = 0;
                                  (puVar59 + lVar81)[1] = 0;
                                  uVar73 = (puVar59 + lVar81 + 4)[1];
                                  uVar39 = puVar59[lVar81 + 6];
                                  uVar29 = (puVar59 + lVar81 + 6)[1];
                                  puVar49[lVar81 + 5] = puVar59[lVar81 + 4];
                                  (puVar49 + lVar81 + 5)[1] = uVar73;
                                  puVar49[lVar81 + 7] = uVar39;
                                  (puVar49 + lVar81 + 7)[1] = uVar29;
                                  puVar59[lVar81 + 6] = 0;
                                  (puVar59 + lVar81 + 6)[1] = 0;
                                  puVar59[lVar81 + 4] = 0;
                                  (puVar59 + lVar81 + 4)[1] = 0;
                                  uVar73 = (puVar59 + lVar81 + 8)[1];
                                  uVar39 = puVar59[lVar81 + 10];
                                  uVar29 = (puVar59 + lVar81 + 10)[1];
                                  puVar49[lVar81 + 9] = puVar59[lVar81 + 8];
                                  (puVar49 + lVar81 + 9)[1] = uVar73;
                                  puVar49[lVar81 + 0xb] = uVar39;
                                  (puVar49 + lVar81 + 0xb)[1] = uVar29;
                                  puVar59[lVar81 + 10] = 0;
                                  (puVar59 + lVar81 + 10)[1] = 0;
                                  puVar59[lVar81 + 8] = 0;
                                  (puVar59 + lVar81 + 8)[1] = 0;
                                  uVar73 = (puVar59 + lVar81 + 0xc)[1];
                                  puVar5 = puVar59 + lVar81 + 0xe;
                                  uVar39 = *puVar5;
                                  uVar89 = *(undefined4 *)((long)puVar5 + 4);
                                  uVar29 = puVar5[1];
                                  uVar90 = *(undefined4 *)((long)puVar5 + 0xc);
                                  puVar49[lVar81 + 0xd] = puVar59[lVar81 + 0xc];
                                  (puVar49 + lVar81 + 0xd)[1] = uVar73;
                                  puVar5 = puVar49 + lVar81 + 0xf;
                                  *(int *)puVar5 = (int)uVar39;
                                  *(undefined4 *)((long)puVar5 + 4) = uVar89;
                                  *(int *)(puVar5 + 1) = (int)uVar29;
                                  *(undefined4 *)((long)puVar5 + 0xc) = uVar90;
                                  lVar50 = lVar81 + 0x10;
                                  puVar59[lVar81 + 0xe] = 0;
                                  (puVar59 + lVar81 + 0xe)[1] = 0;
                                  puVar59[lVar81 + 0xc] = 0;
                                  (puVar59 + lVar81 + 0xc)[1] = 0;
                                  uVar64 = uVar64 - 2;
                                  lVar81 = lVar50;
                                } while (uVar64 != 0);
                                if (((ulong)param_14 & 1) != 0) goto LAB_00312f99;
                              }
                              param_3 = (long *)0x0;
                              if ((uVar80 & 1) != 0) goto LAB_00312d9b;
                              param_3 = (long *)0x0;
                            }
                            puVar54 = puVar54 + uVar32;
                            if (uVar75 == uVar32) goto LAB_00312dfb;
                            puVar59 = puVar59 + uVar32;
                          }
                          do {
                            *puVar54 = *puVar59;
                            *puVar59 = 0;
                            puVar59 = puVar59 + 1;
                            puVar54 = puVar54 + 1;
                          } while (puVar59 != puVar82);
                        }
LAB_00312dfb:
                        local_2c8 = puVar40;
                        if (puVar61 != (ulong *)0x0) {
                          operator_delete(puVar61);
                        }
                        *(ulong **)(this + 0x80) = puVar46;
                        *(ulong **)(this + 0x88) = puVar54;
                        *(ulong **)(this + 0x90) = puVar46 + (long)local_2c8;
                      }
LAB_00312290:
                      plVar68 = plVar68 + 6;
                    } while (plVar68 != plVar72);
                  }
                }
                if (plVar34 != (long *)0x0) {
                  LOCK();
                  plVar72 = plVar34 + 1;
                  *(int *)plVar72 = (int)*plVar72 + -1;
                  UNLOCK();
                  if ((int)*plVar72 == 0) {
                    (**(code **)(*plVar34 + 8))(plVar34);
                  }
                }
                plVar34 = *(long **)(this + 0x68);
                uVar80 = (long)*(long **)(this + 0x70) - (long)plVar34;
                plVar72 = plVar34;
                if (0 < (long)uVar80) {
                  uVar80 = uVar80 >> 4;
                  do {
                    uVar75 = uVar80 >> 1;
                    uVar32 = uVar75;
                    if (plVar72[uVar75 * 2 + 1] <= (long)uVar71) {
                      uVar32 = ~uVar75 + uVar80;
                      plVar72 = plVar72 + uVar75 * 2 + 2;
                    }
                    uVar80 = uVar32;
                  } while (0 < (long)uVar32);
                }
                if (((plVar72 != *(long **)(this + 0x70)) && (*plVar72 <= (long)uVar71)) &&
                   ((long)plVar72 - (long)plVar34 != 0)) {
                  uVar71 = (long)plVar72 - (long)plVar34 >> 4;
                  lVar50 = *(long *)(this + 0x80);
                  plVar34 = *(long **)(lVar50 + -8 + uVar71 * 8);
                  if (plVar34 != (long *)0x0) {
                    LOCK();
                    *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
                    UNLOCK();
                    lVar50 = *(long *)(this + 0x80);
                  }
                  plVar72 = *(long **)(lVar50 + uVar71 * 8);
                  if (plVar72 != (long *)0x0) {
                    LOCK();
                    *(int *)(plVar72 + 1) = (int)plVar72[1] + 1;
                    UNLOCK();
                  }
                  if (plVar34 == plVar72) {
                    cVar31 = '\x01';
                  }
                  else {
                    /* try { // try from 003130cb to 003130cf has its CatchHandler @ 00314683 */
                    uVar80 = FontOptions::operator==((FontOptions *)(plVar34 + 3),plVar72 + 3);
                    cVar31 = (char)uVar80;
                  }
                  if (plVar72 != (long *)0x0) {
                    LOCK();
                    plVar68 = plVar72 + 1;
                    *(int *)plVar68 = (int)*plVar68 + -1;
                    UNLOCK();
                    if ((int)*plVar68 == 0) {
                      (**(code **)(*plVar72 + 8))(plVar72);
                    }
                  }
                  if (plVar34 != (long *)0x0) {
                    LOCK();
                    plVar72 = plVar34 + 1;
                    *(int *)plVar72 = (int)*plVar72 + -1;
                    UNLOCK();
                    if ((int)*plVar72 == 0) {
                      (**(code **)(*plVar34 + 8))(plVar34);
                    }
                  }
                  if (cVar31 != '\0') {
                    lVar50 = (long)plStack_2e0 - (long)local_2e8;
                    /* try { // try from 00313120 to 00313134 has its CatchHandler @ 003146f6 */
                    Ranges::mergeBack((Ranges *)local_140,uVar71,&local_2e8);
                    if ((long)plStack_2e0 - (long)local_2e8 != 0) {
                      lVar50 = lVar50 >> 4;
                      uVar71 = ((long)plStack_2e0 - (long)local_2e8 >> 4) * -0x5555555555555555;
                      bVar88 = uVar71 < (ulong)(lVar50 * -0x5555555555555555);
                      lVar81 = uVar71 + lVar50 * 0x5555555555555555;
                      if (!bVar88 && lVar81 != 0) {
                        if (bVar88) {
                          lVar81 = 0;
                        }
                        plVar72 = local_2e8 + lVar50 * 2;
                        plVar34 = plVar72 + lVar81 * 6;
                        do {
                          if ((char)plVar72[5] == '\x02') {
                            lVar50 = *plVar72;
                            lVar81 = plVar72[1];
                            if (lVar50 != lVar81) {
                              lVar33 = *(long *)(this + 0x80);
                              plVar68 = (long *)(lVar33 + lVar81 * 8);
                              uVar71 = (long)*(long **)(this + 0x88) - (long)plVar68;
                              if (uVar71 == 0) {
                                plVar37 = plVar68;
                              }
                              else if ((long)uVar71 < 1) {
                                plVar37 = *(long **)(this + 0x88);
                              }
                              else {
                                lVar67 = (uVar71 >> 3) + 1;
                                lVar51 = lVar33;
                                do {
                                  uVar11 = *(undefined8 *)(lVar51 + lVar81 * 8);
                                  *(undefined8 *)(lVar51 + lVar81 * 8) = 0;
                                  plVar37 = *(long **)(lVar51 + lVar50 * 8);
                                  *(undefined8 *)(lVar51 + lVar50 * 8) = uVar11;
                                  if (plVar37 != (long *)0x0) {
                                    LOCK();
                                    plVar62 = plVar37 + 1;
                                    *(int *)plVar62 = (int)*plVar62 + -1;
                                    UNLOCK();
                                    if ((int)*plVar62 == 0) {
                                      (**(code **)(*plVar37 + 8))();
                                    }
                                  }
                                  lVar67 = lVar67 + -1;
                                  lVar51 = lVar51 + 8;
                                } while (1 < lVar67);
                                plVar37 = *(long **)(this + 0x88);
                              }
                              plVar68 = (long *)((long)plVar37 +
                                                ((lVar33 + lVar50 * 8) - (long)plVar68));
                              if (plVar37 != plVar68) {
                                plVar62 = plVar68;
                                do {
                                  plVar42 = (long *)*plVar62;
                                  if (plVar42 != (long *)0x0) {
                                    LOCK();
                                    plVar45 = plVar42 + 1;
                                    *(int *)plVar45 = (int)*plVar45 + -1;
                                    UNLOCK();
                                    if ((int)*plVar45 == 0) {
                                      (**(code **)(*plVar42 + 8))();
                                    }
                                  }
                                  plVar62 = plVar62 + 1;
                                } while (plVar62 != plVar37);
                                *(long **)(this + 0x88) = plVar68;
                              }
                            }
                          }
                          else if ((char)plVar72[5] == '\x01') {
                            plVar37 = *(long **)(this + 0x80);
                            plVar62 = *(long **)(this + 0x88);
                            lVar50 = *plVar72;
                            plVar68 = plVar37 + lVar50;
                            if (plVar62 == *(long **)(this + 0x90)) {
                              lVar81 = (long)plVar62 - (long)plVar37;
                              if (lVar81 == 0x7ffffffffffffff8) {
                    /* try { // try from 0031457b to 00314586 has its CatchHandler @ 0031467e */
                    /* WARNING: Subroutine does not return */
                                std::__throw_length_error("vector::_M_realloc_insert");
                              }
                              uVar80 = lVar81 >> 3;
                              uVar71 = uVar80;
                              if (lVar81 == 0) {
                                uVar71 = 1;
                              }
                              uVar32 = uVar71 + uVar80;
                              if (0xfffffffffffffff < uVar32) {
                                uVar32 = 0xfffffffffffffff;
                              }
                              if (CARRY8(uVar71,uVar80)) {
                                uVar32 = 0xfffffffffffffff;
                              }
                    /* try { // try from 003133c2 to 003133c6 has its CatchHandler @ 0031468b */
                              plVar42 = operator_new(uVar32 * 8);
                              lVar33 = *plVar68;
                              plVar42[lVar50] = lVar33;
                              if (lVar33 != 0) {
                                LOCK();
                                *(int *)(lVar33 + 8) = *(int *)(lVar33 + 8) + 1;
                                UNLOCK();
                              }
                              plVar45 = plVar42;
                              if (lVar50 != 0) {
                                uVar71 = lVar50 + 0x1fffffffffffffffU & 0x1fffffffffffffff;
                                plVar78 = plVar37;
                                if (2 < uVar71) {
                                  uVar71 = uVar71 + 1;
                                  uVar75 = uVar71 & 0x3ffffffffffffffc;
                                  uVar80 = (uVar75 - 4 >> 2) + 1;
                                  if (uVar75 - 4 == 0) {
                                    lVar33 = 0;
LAB_003135df:
                                    lVar51 = (plVar37 + lVar33)[1];
                                    plVar45 = plVar37 + lVar33 + 2;
                                    lVar67 = *plVar45;
                                    uVar89 = *(undefined4 *)((long)plVar45 + 4);
                                    lVar84 = plVar45[1];
                                    uVar90 = *(undefined4 *)((long)plVar45 + 0xc);
                                    plVar42[lVar33] = plVar37[lVar33];
                                    (plVar42 + lVar33)[1] = lVar51;
                                    plVar45 = plVar42 + lVar33 + 2;
                                    *(int *)plVar45 = (int)lVar67;
                                    *(undefined4 *)((long)plVar45 + 4) = uVar89;
                                    *(int *)(plVar45 + 1) = (int)lVar84;
                                    *(undefined4 *)((long)plVar45 + 0xc) = uVar90;
                                    *(undefined1 (*) [16])(plVar37 + lVar33 + 2) =
                                         (undefined1  [16])0x0;
                                    *(undefined1 (*) [16])(plVar37 + lVar33) = (undefined1  [16])0x0
                                    ;
                                  }
                                  else {
                                    uVar64 = (uVar80 & 0x7ffffffffffffffe) - 2;
                                    param_14 = (ulong **)((uVar64 >> 1) + 1);
                                    if (uVar64 == 0) {
                                      lVar33 = 0;
LAB_00313821:
                                      lVar51 = (plVar37 + lVar33)[1];
                                      lVar67 = plVar37[lVar33 + 2];
                                      lVar84 = (plVar37 + lVar33 + 2)[1];
                                      plVar42[lVar33] = plVar37[lVar33];
                                      (plVar42 + lVar33)[1] = lVar51;
                                      plVar42[lVar33 + 2] = lVar67;
                                      (plVar42 + lVar33 + 2)[1] = lVar84;
                                      uVar64 = lVar33 * 8 | 0x20;
                                      plVar37[lVar33 + 2] = 0;
                                      (plVar37 + lVar33 + 2)[1] = 0;
                                      plVar37[lVar33] = 0;
                                      (plVar37 + lVar33)[1] = 0;
                                      uVar11 = ((undefined8 *)((long)plVar37 + uVar64))[1];
                                      puVar2 = (undefined4 *)((long)plVar37 + uVar64 + 0x10);
                                      uVar89 = *puVar2;
                                      uVar90 = puVar2[1];
                                      uVar91 = puVar2[2];
                                      uVar92 = puVar2[3];
                                      *(undefined8 *)((long)plVar42 + uVar64) =
                                           *(undefined8 *)((long)plVar37 + uVar64);
                                      ((undefined8 *)((long)plVar42 + uVar64))[1] = uVar11;
                                      puVar2 = (undefined4 *)((long)plVar42 + uVar64 + 0x10);
                                      *puVar2 = uVar89;
                                      puVar2[1] = uVar90;
                                      puVar2[2] = uVar91;
                                      puVar2[3] = uVar92;
                                      lVar33 = lVar33 + 8;
                                      puVar38 = (undefined8 *)((long)plVar37 + uVar64 + 0x10);
                                      *puVar38 = 0;
                                      puVar38[1] = 0;
                                      *(undefined8 *)((long)plVar37 + uVar64) = 0;
                                      ((undefined8 *)((long)plVar37 + uVar64))[1] = 0;
                                    }
                                    else {
                                      uVar64 = (ulong)param_14 & 0xfffffffffffffffe;
                                      lVar51 = 0;
                                      do {
                                        lVar33 = (plVar37 + lVar51)[1];
                                        lVar67 = plVar37[lVar51 + 2];
                                        lVar84 = (plVar37 + lVar51 + 2)[1];
                                        plVar42[lVar51] = plVar37[lVar51];
                                        (plVar42 + lVar51)[1] = lVar33;
                                        plVar42[lVar51 + 2] = lVar67;
                                        (plVar42 + lVar51 + 2)[1] = lVar84;
                                        plVar37[lVar51 + 2] = 0;
                                        (plVar37 + lVar51 + 2)[1] = 0;
                                        plVar37[lVar51] = 0;
                                        (plVar37 + lVar51)[1] = 0;
                                        lVar33 = (plVar37 + lVar51 + 4)[1];
                                        lVar67 = plVar37[lVar51 + 6];
                                        lVar84 = (plVar37 + lVar51 + 6)[1];
                                        plVar42[lVar51 + 4] = plVar37[lVar51 + 4];
                                        (plVar42 + lVar51 + 4)[1] = lVar33;
                                        plVar42[lVar51 + 6] = lVar67;
                                        (plVar42 + lVar51 + 6)[1] = lVar84;
                                        plVar37[lVar51 + 6] = 0;
                                        (plVar37 + lVar51 + 6)[1] = 0;
                                        plVar37[lVar51 + 4] = 0;
                                        (plVar37 + lVar51 + 4)[1] = 0;
                                        lVar33 = (plVar37 + lVar51 + 8)[1];
                                        lVar67 = plVar37[lVar51 + 10];
                                        lVar84 = (plVar37 + lVar51 + 10)[1];
                                        plVar42[lVar51 + 8] = plVar37[lVar51 + 8];
                                        (plVar42 + lVar51 + 8)[1] = lVar33;
                                        plVar42[lVar51 + 10] = lVar67;
                                        (plVar42 + lVar51 + 10)[1] = lVar84;
                                        plVar37[lVar51 + 10] = 0;
                                        (plVar37 + lVar51 + 10)[1] = 0;
                                        plVar37[lVar51 + 8] = 0;
                                        (plVar37 + lVar51 + 8)[1] = 0;
                                        lVar33 = (plVar37 + lVar51 + 0xc)[1];
                                        plVar45 = plVar37 + lVar51 + 0xe;
                                        lVar67 = *plVar45;
                                        uVar89 = *(undefined4 *)((long)plVar45 + 4);
                                        lVar84 = plVar45[1];
                                        uVar90 = *(undefined4 *)((long)plVar45 + 0xc);
                                        plVar42[lVar51 + 0xc] = plVar37[lVar51 + 0xc];
                                        (plVar42 + lVar51 + 0xc)[1] = lVar33;
                                        plVar45 = plVar42 + lVar51 + 0xe;
                                        *(int *)plVar45 = (int)lVar67;
                                        *(undefined4 *)((long)plVar45 + 4) = uVar89;
                                        *(int *)(plVar45 + 1) = (int)lVar84;
                                        *(undefined4 *)((long)plVar45 + 0xc) = uVar90;
                                        lVar33 = lVar51 + 0x10;
                                        plVar37[lVar51 + 0xe] = 0;
                                        (plVar37 + lVar51 + 0xe)[1] = 0;
                                        plVar37[lVar51 + 0xc] = 0;
                                        (plVar37 + lVar51 + 0xc)[1] = 0;
                                        uVar64 = uVar64 - 2;
                                        lVar51 = lVar33;
                                      } while (uVar64 != 0);
                                      if (((ulong)param_14 & 1) != 0) goto LAB_00313821;
                                    }
                                    param_3 = (long *)0x0;
                                    if ((uVar80 & 1) != 0) goto LAB_003135df;
                                    param_3 = (long *)0x0;
                                  }
                                  plVar45 = plVar42 + uVar75;
                                  if (uVar71 == uVar75) goto LAB_0031363a;
                                  plVar78 = plVar37 + uVar75;
                                }
                                do {
                                  *plVar45 = *plVar78;
                                  *plVar78 = 0;
                                  plVar78 = plVar78 + 1;
                                  plVar45 = plVar45 + 1;
                                } while (plVar78 != plVar68);
                              }
LAB_0031363a:
                              plVar78 = plVar45 + 1;
                              if (plVar62 != plVar68) {
                                uVar71 = (lVar81 + lVar50 * -8) - 8;
                                if (0x17 < uVar71) {
                                  uVar75 = (uVar71 >> 3) + 1;
                                  uVar80 = uVar75 & 0x3ffffffffffffffc;
                                  uVar71 = (uVar80 - 4 >> 2) + 1;
                                  if (uVar80 - 4 == 0) {
                                    lVar50 = 0;
LAB_0031377c:
                                    lVar81 = (plVar68 + lVar50)[1];
                                    plVar53 = plVar68 + lVar50 + 2;
                                    lVar33 = *plVar53;
                                    uVar89 = *(undefined4 *)((long)plVar53 + 4);
                                    lVar51 = plVar53[1];
                                    uVar90 = *(undefined4 *)((long)plVar53 + 0xc);
                                    plVar78[lVar50] = plVar68[lVar50];
                                    (plVar78 + lVar50)[1] = lVar81;
                                    plVar45 = plVar45 + lVar50 + 3;
                                    *(int *)plVar45 = (int)lVar33;
                                    *(undefined4 *)((long)plVar45 + 4) = uVar89;
                                    *(int *)(plVar45 + 1) = (int)lVar51;
                                    *(undefined4 *)((long)plVar45 + 0xc) = uVar90;
                                    *(undefined1 (*) [16])(plVar68 + lVar50 + 2) =
                                         (undefined1  [16])0x0;
                                    *(undefined1 (*) [16])(plVar68 + lVar50) = (undefined1  [16])0x0
                                    ;
                                  }
                                  else {
                                    uVar64 = (uVar71 & 0x7ffffffffffffffe) - 2;
                                    param_14 = (ulong **)((uVar64 >> 1) + 1);
                                    if (uVar64 == 0) {
                                      lVar50 = 0;
LAB_0031388a:
                                      lVar81 = (plVar68 + lVar50)[1];
                                      lVar33 = plVar68[lVar50 + 2];
                                      lVar51 = (plVar68 + lVar50 + 2)[1];
                                      plVar78[lVar50] = plVar68[lVar50];
                                      (plVar78 + lVar50)[1] = lVar81;
                                      plVar45[lVar50 + 3] = lVar33;
                                      (plVar45 + lVar50 + 3)[1] = lVar51;
                                      uVar64 = lVar50 * 8 | 0x20;
                                      plVar68[lVar50 + 2] = 0;
                                      (plVar68 + lVar50 + 2)[1] = 0;
                                      plVar68[lVar50] = 0;
                                      (plVar68 + lVar50)[1] = 0;
                                      uVar11 = ((undefined8 *)((long)plVar68 + uVar64))[1];
                                      puVar2 = (undefined4 *)((long)plVar68 + uVar64 + 0x10);
                                      uVar89 = *puVar2;
                                      uVar90 = puVar2[1];
                                      uVar91 = puVar2[2];
                                      uVar92 = puVar2[3];
                                      *(undefined8 *)((long)plVar78 + uVar64) =
                                           *(undefined8 *)((long)plVar68 + uVar64);
                                      ((undefined8 *)((long)plVar78 + uVar64))[1] = uVar11;
                                      puVar2 = (undefined4 *)((long)plVar45 + uVar64 + 0x18);
                                      *puVar2 = uVar89;
                                      puVar2[1] = uVar90;
                                      puVar2[2] = uVar91;
                                      puVar2[3] = uVar92;
                                      lVar50 = lVar50 + 8;
                                      puVar38 = (undefined8 *)((long)plVar68 + uVar64 + 0x10);
                                      *puVar38 = 0;
                                      puVar38[1] = 0;
                                      *(undefined8 *)((long)plVar68 + uVar64) = 0;
                                      ((undefined8 *)((long)plVar68 + uVar64))[1] = 0;
                                    }
                                    else {
                                      uVar64 = (ulong)param_14 & 0xfffffffffffffffe;
                                      lVar81 = 0;
                                      do {
                                        lVar50 = (plVar68 + lVar81)[1];
                                        lVar33 = plVar68[lVar81 + 2];
                                        lVar51 = (plVar68 + lVar81 + 2)[1];
                                        plVar45[lVar81 + 1] = plVar68[lVar81];
                                        (plVar45 + lVar81 + 1)[1] = lVar50;
                                        plVar45[lVar81 + 3] = lVar33;
                                        (plVar45 + lVar81 + 3)[1] = lVar51;
                                        plVar68[lVar81 + 2] = 0;
                                        (plVar68 + lVar81 + 2)[1] = 0;
                                        plVar68[lVar81] = 0;
                                        (plVar68 + lVar81)[1] = 0;
                                        lVar50 = (plVar68 + lVar81 + 4)[1];
                                        lVar33 = plVar68[lVar81 + 6];
                                        lVar51 = (plVar68 + lVar81 + 6)[1];
                                        plVar45[lVar81 + 5] = plVar68[lVar81 + 4];
                                        (plVar45 + lVar81 + 5)[1] = lVar50;
                                        plVar45[lVar81 + 7] = lVar33;
                                        (plVar45 + lVar81 + 7)[1] = lVar51;
                                        plVar68[lVar81 + 6] = 0;
                                        (plVar68 + lVar81 + 6)[1] = 0;
                                        plVar68[lVar81 + 4] = 0;
                                        (plVar68 + lVar81 + 4)[1] = 0;
                                        lVar50 = (plVar68 + lVar81 + 8)[1];
                                        lVar33 = plVar68[lVar81 + 10];
                                        lVar51 = (plVar68 + lVar81 + 10)[1];
                                        plVar45[lVar81 + 9] = plVar68[lVar81 + 8];
                                        (plVar45 + lVar81 + 9)[1] = lVar50;
                                        plVar45[lVar81 + 0xb] = lVar33;
                                        (plVar45 + lVar81 + 0xb)[1] = lVar51;
                                        plVar68[lVar81 + 10] = 0;
                                        (plVar68 + lVar81 + 10)[1] = 0;
                                        plVar68[lVar81 + 8] = 0;
                                        (plVar68 + lVar81 + 8)[1] = 0;
                                        lVar50 = (plVar68 + lVar81 + 0xc)[1];
                                        plVar53 = plVar68 + lVar81 + 0xe;
                                        lVar33 = *plVar53;
                                        uVar89 = *(undefined4 *)((long)plVar53 + 4);
                                        lVar51 = plVar53[1];
                                        uVar90 = *(undefined4 *)((long)plVar53 + 0xc);
                                        plVar45[lVar81 + 0xd] = plVar68[lVar81 + 0xc];
                                        (plVar45 + lVar81 + 0xd)[1] = lVar50;
                                        plVar53 = plVar45 + lVar81 + 0xf;
                                        *(int *)plVar53 = (int)lVar33;
                                        *(undefined4 *)((long)plVar53 + 4) = uVar89;
                                        *(int *)(plVar53 + 1) = (int)lVar51;
                                        *(undefined4 *)((long)plVar53 + 0xc) = uVar90;
                                        lVar50 = lVar81 + 0x10;
                                        plVar68[lVar81 + 0xe] = 0;
                                        (plVar68 + lVar81 + 0xe)[1] = 0;
                                        plVar68[lVar81 + 0xc] = 0;
                                        (plVar68 + lVar81 + 0xc)[1] = 0;
                                        uVar64 = uVar64 - 2;
                                        lVar81 = lVar50;
                                      } while (uVar64 != 0);
                                      if (((ulong)param_14 & 1) != 0) goto LAB_0031388a;
                                    }
                                    param_3 = (long *)0x0;
                                    if ((uVar71 & 1) != 0) goto LAB_0031377c;
                                    param_3 = (long *)0x0;
                                  }
                                  plVar78 = plVar78 + uVar80;
                                  if (uVar75 == uVar80) goto LAB_003137dc;
                                  plVar68 = plVar68 + uVar80;
                                }
                                do {
                                  *plVar78 = *plVar68;
                                  *plVar68 = 0;
                                  plVar68 = plVar68 + 1;
                                  plVar78 = plVar78 + 1;
                                } while (plVar68 != plVar62);
                              }
LAB_003137dc:
                              if (plVar37 != (long *)0x0) {
                                operator_delete(plVar37);
                              }
                              *(long **)(this + 0x80) = plVar42;
                              *(long **)(this + 0x88) = plVar78;
                              *(long **)(this + 0x90) = plVar42 + uVar32;
                            }
                            else {
                              lVar50 = *plVar68;
                              if (plVar62 == plVar68) {
                                if (lVar50 != 0) {
                                  LOCK();
                                  *(int *)(lVar50 + 8) = *(int *)(lVar50 + 8) + 1;
                                  UNLOCK();
                                  plVar68 = *(long **)(this + 0x88);
                                }
                                *(long **)(this + 0x88) = plVar68 + 1;
                              }
                              else {
                                if (lVar50 != 0) {
                                  LOCK();
                                  *(int *)(lVar50 + 8) = *(int *)(lVar50 + 8) + 1;
                                  UNLOCK();
                                  plVar62 = *(long **)(this + 0x88);
                                }
                                *plVar62 = plVar62[-1];
                                plVar62[-1] = 0;
                                lVar81 = *(long *)(this + 0x88);
                                *(long *)(this + 0x88) = lVar81 + 8;
                                plVar37 = (long *)(lVar81 + -8);
                                if (0 < (long)plVar37 - (long)plVar68) {
                                  lVar81 = ((ulong)((long)plVar37 - (long)plVar68) >> 3) + 1;
                                  do {
                                    lVar33 = plVar37[-1];
                                    plVar62 = (long *)*plVar37;
                                    plVar37[-1] = 0;
                                    *plVar37 = lVar33;
                                    if (plVar62 != (long *)0x0) {
                                      LOCK();
                                      plVar42 = plVar62 + 1;
                                      *(int *)plVar42 = (int)*plVar42 + -1;
                                      UNLOCK();
                                      if ((int)*plVar42 == 0) {
                                        (**(code **)(*plVar62 + 8))();
                                      }
                                    }
                                    plVar37 = plVar37 + -1;
                                    lVar81 = lVar81 + -1;
                                  } while (1 < lVar81);
                                }
                                plVar37 = (long *)*plVar68;
                                *plVar68 = lVar50;
                                if (plVar37 != (long *)0x0) {
                                  LOCK();
                                  plVar68 = plVar37 + 1;
                                  *(int *)plVar68 = (int)*plVar68 + -1;
                                  UNLOCK();
                                  if ((int)*plVar68 == 0) {
                                    (**(code **)(*plVar37 + 8))();
                                  }
                                }
                              }
                            }
                          }
                          plVar72 = plVar72 + 6;
                        } while (plVar72 != plVar34);
                      }
                    }
                  }
                }
                    /* try { // try from 00313900 to 00313916 has its CatchHandler @ 003146f6 */
                RangedValues<juce::Font>::mergeEqualItems
                          ((RangedValues<juce::Font> *)local_140,(long)local_2f8,(long *)&local_2e8)
                ;
                if (plStack_2e0 != local_2e8) {
                  plStack_2e0 = local_2e8;
                }
                puVar76 = puVar76 + 6;
                if (puVar76 == local_210) goto LAB_00313980;
                lVar50 = *(long *)(this + 8);
                puVar38 = *(undefined8 **)(this + 0x10);
              } while( true );
            }
          }
          goto LAB_00310201;
        }
        goto joined_r0x003143d6;
      }
      if (local_2a8 != local_2b0) {
        pauVar63 = local_2a8;
        do {
          if (*(void **)*pauVar63 != (void *)0x0) {
            operator_delete(*(void **)*pauVar63);
          }
          pauVar63 = (undefined1 (*) [16])(pauVar63[1] + 8);
        } while (pauVar63 != pauVar66);
      }
      if (pauVar69 != (undefined1 (*) [16])0x0) {
        operator_delete(pauVar69);
      }
      pvVar25 = pvStack_1d0;
      pvVar57 = local_1d8;
      if (local_1d8 != pvStack_1d0) {
        pvVar65 = local_1d8;
        do {
          std::vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>>::
          ~vector(pvVar65);
          pvVar65 = pvVar65 + 0x18;
        } while (pvVar65 != pvVar25);
      }
      if (pvVar57 !=
          (vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *)0x0
         ) {
        operator_delete(pvVar57);
      }
      Shaper::~Shaper((Shaper *)&local_f0);
    }
LAB_0031447b:
    if (local_2b8 != (long *)0x0) {
      operator_delete(local_2b8);
    }
  }
  if (local_2e8 != (long *)0x0) {
    operator_delete(local_2e8);
  }
  return;
LAB_00313980:
  if ((ulong *)local_298._0_8_ != stack0xfffffffffffffd70) {
    lVar50 = local_298._0_8_;
    uVar71 = 0x8000000000000000;
    uVar80 = 0x7fffffffffffffff;
    do {
      uVar75 = *(long *)(lVar50 + 0x18) + *local_198;
      uVar32 = *(long *)(lVar50 + 0x20) + *local_198;
      if ((long)uVar32 <= (long)uVar75) {
        uVar32 = uVar75;
      }
      if ((long)uVar80 <= (long)uVar75) {
        uVar75 = uVar80;
      }
      if ((long)uVar32 <= (long)uVar71) {
        uVar32 = uVar71;
      }
      lVar50 = lVar50 + 0x30;
      uVar71 = uVar32;
      uVar80 = uVar75;
    } while ((ulong *)lVar50 != stack0xfffffffffffffd70);
    if ((long)uVar75 < (long)uVar32) {
                    /* try { // try from 003139ff to 00313a16 has its CatchHandler @ 00314651 */
      Ranges::erase((Ranges *)local_108,uVar75,uVar32,&local_2e8);
      plVar72 = plStack_2e0;
      plVar34 = local_2e8;
      puVar76 = *(ulong **)(this + 0x50);
      puVar59 = puVar76;
      if (0 < *(long *)(this + 0x58) - (long)puVar76) {
        uVar71 = (ulong)(*(long *)(this + 0x58) - (long)puVar76) >> 4;
        do {
          uVar64 = uVar71 >> 1;
          uVar80 = uVar64;
          if ((long)puVar59[uVar64 * 2] < (long)uVar75) {
            uVar80 = ~uVar64 + uVar71;
            puVar59 = puVar59 + uVar64 * 2 + 2;
          }
          uVar71 = uVar80;
        } while (0 < (long)uVar80);
      }
      lVar50 = (long)puVar59 - (long)puVar76 >> 4;
      if (plStack_2e0 == local_2d8) {
        lVar81 = (long)plStack_2e0 - (long)local_2e8;
        if (lVar81 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        lVar33 = lVar81 >> 4;
        uVar80 = lVar33 * -0x5555555555555555;
        uVar71 = uVar80;
        if (lVar81 == 0) {
          uVar71 = 1;
        }
        uVar64 = uVar71 + uVar80;
        if (0x2aaaaaaaaaaaaaa < uVar64) {
          uVar64 = 0x2aaaaaaaaaaaaaa;
        }
        if (CARRY8(uVar71,uVar80)) {
          uVar64 = 0x2aaaaaaaaaaaaaa;
        }
                    /* try { // try from 003140fc to 003142a4 has its CatchHandler @ 00314651 */
        plVar37 = operator_new(uVar64 * 0x30);
        plVar37[lVar33 * 2] = lVar50;
        *(undefined1 *)(plVar37 + lVar33 * 2 + 5) = 0;
        plVar68 = plVar37;
        if (plVar34 != plVar72) {
          plVar62 = plVar34;
          do {
            lVar50 = *plVar62;
            lVar81 = plVar62[1];
            lVar33 = plVar62[2];
            uVar89 = *(undefined4 *)((long)plVar62 + 0x14);
            lVar51 = plVar62[3];
            uVar90 = *(undefined4 *)((long)plVar62 + 0x1c);
            param_3 = SUB168(*(undefined1 (*) [16])(plVar62 + 4),0);
            *(undefined1 (*) [16])(plVar68 + 4) = *(undefined1 (*) [16])(plVar62 + 4);
            *(int *)(plVar68 + 2) = (int)lVar33;
            *(undefined4 *)((long)plVar68 + 0x14) = uVar89;
            *(int *)(plVar68 + 3) = (int)lVar51;
            *(undefined4 *)((long)plVar68 + 0x1c) = uVar90;
            *plVar68 = lVar50;
            plVar68[1] = lVar81;
            plVar62 = plVar62 + 6;
            plVar68 = plVar68 + 6;
          } while (plVar62 != plVar72);
        }
        if (plVar34 != (long *)0x0) {
          operator_delete(plVar34);
        }
        local_2d8 = plVar37 + uVar64 * 6;
        local_2e8 = plVar37;
      }
      else {
        *plStack_2e0 = lVar50;
        *(undefined1 *)(plStack_2e0 + 5) = 0;
        plVar68 = plStack_2e0;
      }
      plStack_2e0 = plVar68 + 6;
      pvVar41 = *(void **)(this + 0x50);
      puVar76 = *(ulong **)(this + 0x58);
      lVar50 = (long)puVar59 - (long)pvVar41 >> 4;
      if (puVar76 == *(ulong **)(this + 0x60)) {
        lVar81 = (long)puVar76 - (long)pvVar41;
        if (lVar81 == 0x7ffffffffffffff0) {
                    /* try { // try from 003145e0 to 003145f7 has its CatchHandler @ 00314622 */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar80 = lVar81 >> 4;
        uVar71 = uVar80;
        if (lVar81 == 0) {
          uVar71 = 1;
        }
        uVar64 = uVar71 + uVar80;
        if (0x7ffffffffffffff < uVar64) {
          uVar64 = 0x7ffffffffffffff;
        }
        if (CARRY8(uVar71,uVar80)) {
          uVar64 = 0x7ffffffffffffff;
        }
        pvVar79 = operator_new(uVar64 * 0x10);
        lVar50 = lVar50 * 0x10;
        puVar61 = (ulong *)((long)pvVar41 + lVar50);
        *(ulong *)((long)pvVar79 + lVar50) = uVar75;
        *(ulong *)((long)pvVar79 + lVar50 + 8) = uVar32;
        if ((long)puVar59 - (long)pvVar41 == 0) {
          puVar59 = (ulong *)((long)pvVar79 + 0x10);
        }
        else {
          lVar81 = 0;
          do {
            lVar33 = lVar81;
            uVar11 = ((undefined8 *)((long)pvVar41 + lVar33))[1];
            *(undefined8 *)((long)pvVar79 + lVar33) = *(undefined8 *)((long)pvVar41 + lVar33);
            ((undefined8 *)((long)pvVar79 + lVar33))[1] = uVar11;
            lVar81 = lVar33 + 0x10;
          } while (lVar50 != lVar33 + 0x10);
          puVar59 = (ulong *)((long)pvVar79 + lVar33 + 0x20);
        }
        for (; puVar76 != puVar61; puVar61 = puVar61 + 2) {
          uVar71 = puVar61[1];
          *puVar59 = *puVar61;
          puVar59[1] = uVar71;
          puVar59 = puVar59 + 2;
        }
        if (pvVar41 != (void *)0x0) {
          operator_delete(pvVar41);
        }
        *(void **)(this + 0x50) = pvVar79;
        *(ulong **)(this + 0x58) = puVar59;
        *(void **)(this + 0x60) = (void *)((long)pvVar79 + uVar64 * 0x10);
      }
      else if (puVar76 == puVar59) {
        *puVar59 = uVar75;
        puVar59[1] = uVar32;
        *(long *)(this + 0x58) = *(long *)(this + 0x58) + 0x10;
      }
      else {
        lVar50 = lVar50 * 0x10;
        puVar58 = (undefined1 *)((long)pvVar41 + lVar50);
        *puVar76 = puVar76[-2];
        puVar76[1] = puVar76[-1];
        lVar81 = *(long *)(this + 0x58);
        *(long *)(this + 0x58) = lVar81 + 0x10;
        puVar38 = (undefined8 *)(lVar81 + -0x10);
        if (0 < (long)puVar38 - (long)puVar58) {
          uVar71 = ((ulong)((long)puVar38 - (long)puVar58) >> 4) + 1;
          do {
            *puVar38 = puVar38[-2];
            puVar38[1] = puVar38[-1];
            puVar38 = puVar38 + -2;
            uVar71 = uVar71 - 1;
          } while (1 < uVar71);
        }
        *puVar58 = (char)uVar75;
        *(int *)(puVar58 + 1) = (int)(uVar75 >> 8);
        puVar58[7] = (char)(uVar75 >> 0x38);
        *(short *)(puVar58 + 5) = (short)(uVar75 >> 0x28);
        *(ulong *)((long)pvVar41 + lVar50 + 8) = uVar32;
      }
    }
  }
LAB_00310201:
  if (plStack_2e0 != local_2e8) {
    plStack_2e0 = local_2e8;
  }
  lVar50 = *(long *)(this + 0x28);
  lVar81 = *(long *)(this + 0x20);
  uVar71 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 5;
  if ((long)local_2c0 < (long)uVar71) {
                    /* try { // try from 00310242 to 00310258 has its CatchHandler @ 00314697 */
    Ranges::erase((Ranges *)local_1a0,local_2c0,uVar71,&local_2e8);
    plVar72 = plStack_2e0;
    plVar34 = local_2e8;
    puVar76 = *(ulong **)(this + 0x20);
    puVar59 = puVar76;
    if (0 < *(long *)(this + 0x28) - (long)puVar76) {
      uVar80 = (ulong)(*(long *)(this + 0x28) - (long)puVar76) >> 4;
      do {
        uVar75 = uVar80 >> 1;
        uVar32 = uVar75;
        if ((long)puVar59[uVar75 * 2] < (long)local_2c0) {
          uVar32 = ~uVar75 + uVar80;
          puVar59 = puVar59 + uVar75 * 2 + 2;
        }
        uVar80 = uVar32;
      } while (0 < (long)uVar32);
    }
    lVar33 = (long)puVar59 - (long)puVar76 >> 4;
    if (plStack_2e0 == local_2d8) {
      lVar51 = (long)plStack_2e0 - (long)local_2e8;
      if (lVar51 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      lVar67 = lVar51 >> 4;
      uVar32 = lVar67 * -0x5555555555555555;
      uVar80 = uVar32;
      if (lVar51 == 0) {
        uVar80 = 1;
      }
      uVar75 = uVar80 + uVar32;
      if (0x2aaaaaaaaaaaaaa < uVar75) {
        uVar75 = 0x2aaaaaaaaaaaaaa;
      }
      if (CARRY8(uVar80,uVar32)) {
        uVar75 = 0x2aaaaaaaaaaaaaa;
      }
                    /* try { // try from 00310363 to 00310512 has its CatchHandler @ 00314697 */
      plVar37 = operator_new(uVar75 * 0x30);
      plVar37[lVar67 * 2] = lVar33;
      *(undefined1 *)(plVar37 + lVar67 * 2 + 5) = 0;
      plVar68 = plVar37;
      if (plVar34 != plVar72) {
        plVar62 = plVar34;
        do {
          lVar33 = *plVar62;
          lVar51 = plVar62[1];
          lVar67 = plVar62[2];
          uVar89 = *(undefined4 *)((long)plVar62 + 0x14);
          lVar84 = plVar62[3];
          uVar90 = *(undefined4 *)((long)plVar62 + 0x1c);
          param_3 = SUB168(*(undefined1 (*) [16])(plVar62 + 4),0);
          *(undefined1 (*) [16])(plVar68 + 4) = *(undefined1 (*) [16])(plVar62 + 4);
          *(int *)(plVar68 + 2) = (int)lVar67;
          *(undefined4 *)((long)plVar68 + 0x14) = uVar89;
          *(int *)(plVar68 + 3) = (int)lVar84;
          *(undefined4 *)((long)plVar68 + 0x1c) = uVar90;
          *plVar68 = lVar33;
          plVar68[1] = lVar51;
          plVar62 = plVar62 + 6;
          plVar68 = plVar68 + 6;
        } while (plVar62 != plVar72);
      }
      if (plVar34 != (long *)0x0) {
        operator_delete(plVar34);
      }
      local_2d8 = plVar37 + uVar75 * 6;
      local_2e8 = plVar37;
    }
    else {
      *plStack_2e0 = lVar33;
      *(undefined1 *)(plStack_2e0 + 5) = 0;
      plVar68 = plStack_2e0;
    }
    plStack_2e0 = plVar68 + 6;
    pvVar41 = *(void **)(this + 0x20);
    puVar76 = *(ulong **)(this + 0x28);
    lVar33 = (long)puVar59 - (long)pvVar41 >> 4;
    if (puVar76 != *(ulong **)(this + 0x30)) {
      plVar34 = local_2e8;
      if (puVar76 == puVar59) {
        *puVar59 = local_2c0;
        puVar59[1] = uVar71;
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 0x10;
        lVar33 = (long)plStack_2e0 - (long)local_2e8;
      }
      else {
        lVar33 = lVar33 * 0x10;
        puVar58 = (undefined1 *)((long)pvVar41 + lVar33);
        *puVar76 = puVar76[-2];
        puVar76[1] = puVar76[-1];
        lVar51 = *(long *)(this + 0x28);
        *(long *)(this + 0x28) = lVar51 + 0x10;
        puVar38 = (undefined8 *)(lVar51 + -0x10);
        if (0 < (long)puVar38 - (long)puVar58) {
          uVar80 = ((ulong)((long)puVar38 - (long)puVar58) >> 4) + 1;
          do {
            *puVar38 = puVar38[-2];
            puVar38[1] = puVar38[-1];
            puVar38 = puVar38 + -2;
            uVar80 = uVar80 - 1;
          } while (1 < uVar80);
        }
        *puVar58 = (char)local_2c0;
        *(int *)(puVar58 + 1) = (int)(local_2c0 >> 8);
        puVar58[7] = (char)(local_2c0 >> 0x38);
        *(short *)(puVar58 + 5) = (short)(local_2c0 >> 0x28);
        *(ulong *)((long)pvVar41 + lVar33 + 8) = uVar71;
        lVar33 = (long)plStack_2e0 - (long)local_2e8;
      }
      goto joined_r0x00313a8e;
    }
    lVar51 = (long)puVar76 - (long)pvVar41;
    if (lVar51 == 0x7ffffffffffffff0) {
                    /* try { // try from 003145bc to 003145d3 has its CatchHandler @ 003146c5 */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar32 = lVar51 >> 4;
    uVar80 = uVar32;
    if (lVar51 == 0) {
      uVar80 = 1;
    }
    uVar75 = uVar80 + uVar32;
    if (0x7ffffffffffffff < uVar75) {
      uVar75 = 0x7ffffffffffffff;
    }
    if (CARRY8(uVar80,uVar32)) {
      uVar75 = 0x7ffffffffffffff;
    }
    pvVar79 = operator_new(uVar75 * 0x10);
    lVar33 = lVar33 * 0x10;
    puVar61 = (ulong *)((long)pvVar41 + lVar33);
    *(ulong *)((long)pvVar79 + lVar33) = local_2c0;
    *(ulong *)((long)pvVar79 + lVar33 + 8) = uVar71;
    if ((long)puVar59 - (long)pvVar41 == 0) {
      puVar59 = (ulong *)((long)pvVar79 + 0x10);
    }
    else {
      lVar51 = 0;
      do {
        lVar67 = lVar51;
        uVar11 = ((undefined8 *)((long)pvVar41 + lVar67))[1];
        *(undefined8 *)((long)pvVar79 + lVar67) = *(undefined8 *)((long)pvVar41 + lVar67);
        ((undefined8 *)((long)pvVar79 + lVar67))[1] = uVar11;
        lVar51 = lVar67 + 0x10;
      } while (lVar33 != lVar67 + 0x10);
      puVar59 = (ulong *)((long)pvVar79 + lVar67 + 0x20);
    }
    for (; puVar76 != puVar61; puVar61 = puVar61 + 2) {
      uVar80 = puVar61[1];
      *puVar59 = *puVar61;
      puVar59[1] = uVar80;
      puVar59 = puVar59 + 2;
    }
    if (pvVar41 != (void *)0x0) {
      operator_delete(pvVar41);
    }
    *(void **)(this + 0x20) = pvVar79;
    *(ulong **)(this + 0x28) = puVar59;
    *(void **)(this + 0x30) = (void *)((long)pvVar79 + uVar75 * 0x10);
  }
  else {
    uVar71 = local_2c0;
  }
  lVar33 = (long)plStack_2e0 - (long)local_2e8;
  plVar34 = local_2e8;
joined_r0x00313a8e:
  local_2e8 = plVar34;
  if (lVar33 != 0) {
    lVar50 = lVar50 - lVar81 >> 4;
    plVar72 = (long *)(lVar33 + (long)plVar34);
    do {
      cVar31 = (char)plVar34[5];
      if (cVar31 == '\x02') {
        lVar81 = *plVar34;
        lVar33 = plVar34[1];
        if (lVar81 == lVar33) goto LAB_00310600;
        lVar51 = *(long *)(this + 0x38);
        uVar80 = lVar51 + lVar81 * 8;
        uVar32 = lVar51 + lVar33 * 8;
        lVar67 = *(long *)(this + 0x40);
        uVar75 = lVar67 - uVar32;
        if ((uVar75 != 0) && (0 < (long)uVar75)) {
          uVar64 = uVar75 >> 3;
          param_14 = (ulong **)(uVar64 + (uVar75 < 8));
          if ((param_14 < (ulong **)0x4) ||
             ((uVar80 < lVar51 + ((lVar33 + uVar64) - (ulong)(7 < uVar75)) * 8 + 8 &&
              (uVar32 < lVar51 + ((uVar64 + lVar81) - (ulong)(7 < uVar75)) * 8 + 8)))) {
            uVar73 = uVar80;
          }
          else {
            ppuVar47 = (ulong **)((ulong)param_14 & 0xfffffffffffffffc);
            uVar73 = ((ulong)((long)ppuVar47 + -4) >> 2) + 1;
            uVar39 = (ulong)((uint)uVar73 & 3);
            if ((undefined1 *)((long)ppuVar47 + -4) < (undefined1 *)0xc) {
              lVar52 = 0;
            }
            else {
              uVar73 = uVar73 & 0x7ffffffffffffffc;
              lVar84 = lVar51 + lVar33 * 8;
              lVar56 = lVar51 + lVar81 * 8;
              lVar52 = 0;
              do {
                puVar38 = (undefined8 *)(lVar84 + lVar52 * 8);
                uVar11 = puVar38[1];
                puVar55 = (undefined8 *)(lVar84 + 0x10 + lVar52 * 8);
                uVar19 = *puVar55;
                uVar20 = puVar55[1];
                puVar55 = (undefined8 *)(lVar56 + lVar52 * 8);
                *puVar55 = *puVar38;
                puVar55[1] = uVar11;
                puVar38 = (undefined8 *)(lVar56 + 0x10 + lVar52 * 8);
                *puVar38 = uVar19;
                puVar38[1] = uVar20;
                puVar38 = (undefined8 *)(lVar84 + 0x20 + lVar52 * 8);
                uVar11 = puVar38[1];
                puVar55 = (undefined8 *)(lVar84 + 0x30 + lVar52 * 8);
                uVar19 = *puVar55;
                uVar20 = puVar55[1];
                puVar55 = (undefined8 *)(lVar56 + 0x20 + lVar52 * 8);
                *puVar55 = *puVar38;
                puVar55[1] = uVar11;
                puVar38 = (undefined8 *)(lVar56 + 0x30 + lVar52 * 8);
                *puVar38 = uVar19;
                puVar38[1] = uVar20;
                puVar38 = (undefined8 *)(lVar84 + 0x40 + lVar52 * 8);
                uVar11 = puVar38[1];
                puVar55 = (undefined8 *)(lVar84 + 0x50 + lVar52 * 8);
                uVar19 = *puVar55;
                uVar20 = puVar55[1];
                puVar55 = (undefined8 *)(lVar56 + 0x40 + lVar52 * 8);
                *puVar55 = *puVar38;
                puVar55[1] = uVar11;
                puVar38 = (undefined8 *)(lVar56 + 0x50 + lVar52 * 8);
                *puVar38 = uVar19;
                puVar38[1] = uVar20;
                puVar38 = (undefined8 *)(lVar84 + 0x60 + lVar52 * 8);
                uVar11 = puVar38[1];
                puVar2 = (undefined4 *)(lVar84 + 0x70 + lVar52 * 8);
                uVar89 = *puVar2;
                uVar90 = puVar2[1];
                uVar91 = puVar2[2];
                uVar92 = puVar2[3];
                puVar55 = (undefined8 *)(lVar56 + 0x60 + lVar52 * 8);
                *puVar55 = *puVar38;
                puVar55[1] = uVar11;
                puVar2 = (undefined4 *)(lVar56 + 0x70 + lVar52 * 8);
                *puVar2 = uVar89;
                puVar2[1] = uVar90;
                puVar2[2] = uVar91;
                puVar2[3] = uVar92;
                lVar52 = lVar52 + 0x10;
                uVar73 = uVar73 - 4;
              } while (uVar73 != 0);
            }
            if (uVar39 != 0) {
              lVar33 = lVar51 + (lVar33 + lVar52) * 8;
              lVar51 = lVar51 + (lVar81 + lVar52) * 8;
              lVar81 = 0;
              do {
                puVar38 = (undefined8 *)(lVar33 + lVar81);
                uVar11 = puVar38[1];
                puVar2 = (undefined4 *)(lVar33 + 0x10 + lVar81);
                uVar89 = *puVar2;
                uVar90 = puVar2[1];
                uVar91 = puVar2[2];
                uVar92 = puVar2[3];
                puVar55 = (undefined8 *)(lVar51 + lVar81);
                *puVar55 = *puVar38;
                puVar55[1] = uVar11;
                puVar2 = (undefined4 *)(lVar51 + 0x10 + lVar81);
                *puVar2 = uVar89;
                puVar2[1] = uVar90;
                puVar2[2] = uVar91;
                puVar2[3] = uVar92;
                lVar81 = lVar81 + 0x20;
              } while (uVar39 * 0x20 != lVar81);
            }
            if (param_14 == ppuVar47) goto LAB_003107d6;
            uVar64 = uVar64 - (long)ppuVar47;
            uVar73 = uVar80 + (long)ppuVar47 * 8;
            uVar32 = uVar32 + (long)ppuVar47 * 8;
          }
          uVar64 = uVar64 + 1;
          lVar81 = 0;
          do {
            *(undefined8 *)(uVar73 + lVar81) = *(undefined8 *)(uVar32 + lVar81);
            uVar64 = uVar64 - 1;
            lVar81 = lVar81 + 8;
          } while (1 < uVar64);
        }
LAB_003107d6:
        if (lVar67 != uVar80 + uVar75) {
          *(ulong *)(this + 0x40) = uVar80 + uVar75;
        }
        goto LAB_00310600;
      }
      if (cVar31 == '\x01') {
        plVar37 = *(long **)(this + 0x38);
        plVar62 = *(long **)(this + 0x40);
        lVar81 = *plVar34;
        plVar68 = plVar37 + lVar81;
        if (plVar62 != *(long **)(this + 0x48)) {
          if (plVar62 == plVar68) {
            *(long **)(this + 0x40) = plVar68 + 1;
          }
          else {
            lVar81 = *plVar68;
            plVar37 = plVar62 + -1;
            *plVar62 = plVar62[-1];
            *(long **)(this + 0x40) = plVar62 + 1;
            if (0 < (long)plVar37 - (long)plVar68) {
              uVar80 = ((ulong)((long)plVar37 - (long)plVar68) >> 3) + 1;
              do {
                *plVar37 = plVar37[-1];
                plVar37 = plVar37 + -1;
                uVar80 = uVar80 - 1;
              } while (1 < uVar80);
            }
            *plVar68 = lVar81;
          }
          goto LAB_00310600;
        }
        param_14 = (ulong **)((long)plVar62 - (long)plVar37);
        if (param_14 == (ulong **)0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar32 = (long)param_14 >> 3;
        uVar80 = uVar32;
        if (param_14 == (ulong **)0x0) {
          uVar80 = 1;
        }
        local_300 = (long *)(uVar80 + uVar32);
        if (0xfffffffffffffff < local_300) {
          local_300 = (long *)0xfffffffffffffff;
        }
        if (CARRY8(uVar80,uVar32)) {
          local_300 = (long *)0xfffffffffffffff;
        }
        if (local_300 == (long *)0x0) {
          plVar42 = (long *)0x0;
          *(long *)(lVar81 * 8) = *plVar68;
          if (0 < lVar81) goto LAB_0031087f;
LAB_003109fd:
          plVar45 = plVar42 + lVar81;
        }
        else {
                    /* try { // try from 0031085d to 00310946 has its CatchHandler @ 0031469c */
          plVar42 = operator_new((long)local_300 * 8);
          plVar42[lVar81] = *plVar68;
          if (lVar81 < 1) goto LAB_003109fd;
LAB_0031087f:
          uVar80 = lVar81 + 0x1fffffffffffffffU & 0x1fffffffffffffff;
          plVar45 = plVar42;
          plVar78 = plVar37;
          if (uVar80 < 3) {
LAB_00310b40:
            do {
              *plVar45 = *plVar78;
              plVar78 = plVar78 + 1;
              plVar45 = plVar45 + 1;
            } while (plVar78 != plVar68);
          }
          else {
            uVar80 = uVar80 + 1;
            uVar64 = uVar80 & 0x3ffffffffffffffc;
            uVar75 = (uVar64 - 4 >> 2) + 1;
            uVar32 = (ulong)((uint)uVar75 & 3);
            if (uVar64 - 4 < 0xc) {
              lVar33 = 0;
            }
            else {
              uVar75 = uVar75 & 0x7ffffffffffffffc;
              lVar33 = 0;
              do {
                lVar51 = (plVar37 + lVar33)[1];
                lVar67 = plVar37[lVar33 + 2];
                lVar84 = (plVar37 + lVar33 + 2)[1];
                plVar42[lVar33] = plVar37[lVar33];
                (plVar42 + lVar33)[1] = lVar51;
                plVar42[lVar33 + 2] = lVar67;
                (plVar42 + lVar33 + 2)[1] = lVar84;
                lVar51 = (plVar37 + lVar33 + 4)[1];
                lVar67 = plVar37[lVar33 + 6];
                lVar84 = (plVar37 + lVar33 + 6)[1];
                plVar42[lVar33 + 4] = plVar37[lVar33 + 4];
                (plVar42 + lVar33 + 4)[1] = lVar51;
                plVar42[lVar33 + 6] = lVar67;
                (plVar42 + lVar33 + 6)[1] = lVar84;
                lVar51 = (plVar37 + lVar33 + 8)[1];
                lVar67 = plVar37[lVar33 + 10];
                lVar84 = (plVar37 + lVar33 + 10)[1];
                plVar42[lVar33 + 8] = plVar37[lVar33 + 8];
                (plVar42 + lVar33 + 8)[1] = lVar51;
                plVar42[lVar33 + 10] = lVar67;
                (plVar42 + lVar33 + 10)[1] = lVar84;
                lVar51 = (plVar37 + lVar33 + 0xc)[1];
                plVar45 = plVar37 + lVar33 + 0xe;
                lVar67 = *plVar45;
                uVar89 = *(undefined4 *)((long)plVar45 + 4);
                lVar84 = plVar45[1];
                uVar90 = *(undefined4 *)((long)plVar45 + 0xc);
                plVar42[lVar33 + 0xc] = plVar37[lVar33 + 0xc];
                (plVar42 + lVar33 + 0xc)[1] = lVar51;
                plVar45 = plVar42 + lVar33 + 0xe;
                *(int *)plVar45 = (int)lVar67;
                *(undefined4 *)((long)plVar45 + 4) = uVar89;
                *(int *)(plVar45 + 1) = (int)lVar84;
                *(undefined4 *)((long)plVar45 + 0xc) = uVar90;
                lVar33 = lVar33 + 0x10;
                uVar75 = uVar75 - 4;
              } while (uVar75 != 0);
            }
            if (uVar32 != 0) {
              lVar51 = 0;
              do {
                puVar38 = (undefined8 *)((long)plVar37 + lVar51 + lVar33 * 8);
                uVar11 = puVar38[1];
                puVar2 = (undefined4 *)((long)plVar37 + lVar51 + lVar33 * 8 + 0x10);
                uVar89 = *puVar2;
                uVar90 = puVar2[1];
                uVar91 = puVar2[2];
                uVar92 = puVar2[3];
                puVar55 = (undefined8 *)((long)plVar42 + lVar51 + lVar33 * 8);
                *puVar55 = *puVar38;
                puVar55[1] = uVar11;
                puVar2 = (undefined4 *)((long)plVar42 + lVar51 + lVar33 * 8 + 0x10);
                *puVar2 = uVar89;
                puVar2[1] = uVar90;
                puVar2[2] = uVar91;
                puVar2[3] = uVar92;
                lVar51 = lVar51 + 0x20;
              } while (uVar32 * 0x20 != lVar51);
            }
            plVar45 = plVar42 + uVar64;
            if (uVar80 != uVar64) {
              plVar78 = plVar37 + uVar64;
              goto LAB_00310b40;
            }
          }
        }
        plVar78 = plVar45 + 1;
        if ((long)plVar62 - (long)plVar68 < 1) {
          plVar78 = (long *)((long)plVar78 + ((long)plVar62 - (long)plVar68));
        }
        else if (plVar62 != plVar68) {
          param_14 = param_14 + (-1 - lVar81);
          if (&DAT_00000017 < param_14) {
            param_14 = (ulong **)(((ulong)param_14 >> 3) + 1);
            ppuVar47 = (ulong **)((ulong)param_14 & 0x3ffffffffffffffc);
            uVar32 = ((ulong)((long)ppuVar47 + -4) >> 2) + 1;
            uVar80 = (ulong)((uint)uVar32 & 3);
            if ((undefined1 *)((long)ppuVar47 + -4) < (undefined1 *)0xc) {
              lVar33 = 0;
            }
            else {
              uVar32 = uVar32 & 0x7ffffffffffffffc;
              lVar33 = 0;
              do {
                lVar51 = (plVar37 + lVar81 + lVar33)[1];
                lVar67 = plVar37[lVar81 + lVar33 + 2];
                lVar84 = (plVar37 + lVar81 + lVar33 + 2)[1];
                plVar45[lVar33 + 1] = plVar37[lVar81 + lVar33];
                (plVar45 + lVar33 + 1)[1] = lVar51;
                plVar45[lVar33 + 3] = lVar67;
                (plVar45 + lVar33 + 3)[1] = lVar84;
                lVar51 = (plVar37 + lVar81 + lVar33 + 4)[1];
                lVar67 = plVar37[lVar81 + lVar33 + 6];
                lVar84 = (plVar37 + lVar81 + lVar33 + 6)[1];
                plVar45[lVar33 + 5] = plVar37[lVar81 + lVar33 + 4];
                (plVar45 + lVar33 + 5)[1] = lVar51;
                plVar45[lVar33 + 7] = lVar67;
                (plVar45 + lVar33 + 7)[1] = lVar84;
                lVar51 = (plVar37 + lVar81 + lVar33 + 8)[1];
                lVar67 = plVar37[lVar81 + lVar33 + 10];
                lVar84 = (plVar37 + lVar81 + lVar33 + 10)[1];
                plVar45[lVar33 + 9] = plVar37[lVar81 + lVar33 + 8];
                (plVar45 + lVar33 + 9)[1] = lVar51;
                plVar45[lVar33 + 0xb] = lVar67;
                (plVar45 + lVar33 + 0xb)[1] = lVar84;
                lVar51 = (plVar37 + lVar81 + lVar33 + 0xc)[1];
                plVar53 = plVar37 + lVar81 + lVar33 + 0xe;
                lVar67 = *plVar53;
                uVar89 = *(undefined4 *)((long)plVar53 + 4);
                lVar84 = plVar53[1];
                uVar90 = *(undefined4 *)((long)plVar53 + 0xc);
                plVar45[lVar33 + 0xd] = plVar37[lVar81 + lVar33 + 0xc];
                (plVar45 + lVar33 + 0xd)[1] = lVar51;
                plVar53 = plVar45 + lVar33 + 0xf;
                *(int *)plVar53 = (int)lVar67;
                *(undefined4 *)((long)plVar53 + 4) = uVar89;
                *(int *)(plVar53 + 1) = (int)lVar84;
                *(undefined4 *)((long)plVar53 + 0xc) = uVar90;
                lVar33 = lVar33 + 0x10;
                uVar32 = uVar32 - 4;
              } while (uVar32 != 0);
            }
            if (uVar80 != 0) {
              lVar51 = 0;
              do {
                puVar38 = (undefined8 *)((long)plVar37 + lVar51 + (lVar81 + lVar33) * 8);
                uVar11 = puVar38[1];
                puVar2 = (undefined4 *)((long)plVar37 + lVar51 + (lVar81 + lVar33) * 8 + 0x10);
                uVar89 = *puVar2;
                uVar90 = puVar2[1];
                uVar91 = puVar2[2];
                uVar92 = puVar2[3];
                puVar55 = (undefined8 *)((long)plVar45 + lVar51 + lVar33 * 8 + 8);
                *puVar55 = *puVar38;
                puVar55[1] = uVar11;
                puVar2 = (undefined4 *)((long)plVar45 + lVar51 + lVar33 * 8 + 0x18);
                *puVar2 = uVar89;
                puVar2[1] = uVar90;
                puVar2[2] = uVar91;
                puVar2[3] = uVar92;
                lVar51 = lVar51 + 0x20;
              } while (uVar80 * 0x20 != lVar51);
            }
            plVar78 = plVar78 + (long)ppuVar47;
            if (param_14 == ppuVar47) goto LAB_00310e25;
            plVar68 = plVar68 + (long)ppuVar47;
          }
          do {
            *plVar78 = *plVar68;
            plVar68 = plVar68 + 1;
            plVar78 = plVar78 + 1;
          } while (plVar68 != plVar62);
        }
LAB_00310e25:
        if (plVar37 != (long *)0x0) {
LAB_003105d6:
          operator_delete(plVar37);
        }
LAB_003105db:
        *(long **)(this + 0x38) = plVar42;
        *(long **)(this + 0x40) = plVar78;
        *(long **)(this + 0x48) = plVar42 + (long)local_300;
      }
      else if (cVar31 == '\0') {
        plVar37 = *(long **)(this + 0x38);
        plVar62 = *(long **)(this + 0x40);
        lVar81 = *plVar34;
        plVar68 = plVar37 + lVar81;
        if (plVar62 == *(long **)(this + 0x48)) {
          param_14 = (ulong **)((long)plVar62 - (long)plVar37);
          if (param_14 == (ulong **)0x7ffffffffffffff8) {
                    /* try { // try from 00314529 to 00314540 has its CatchHandler @ 003146c5 */
                    /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_realloc_insert");
          }
          uVar32 = (long)param_14 >> 3;
          uVar80 = uVar32;
          if (param_14 == (ulong **)0x0) {
            uVar80 = 1;
          }
          local_300 = (long *)(uVar80 + uVar32);
          if (0xfffffffffffffff < local_300) {
            local_300 = (long *)0xfffffffffffffff;
          }
          if (CARRY8(uVar80,uVar32)) {
            local_300 = (long *)0xfffffffffffffff;
          }
          if (local_300 == (long *)0x0) {
            plVar42 = (long *)0x0;
            *(long *)(lVar81 * 8) = lVar50;
            if (0 < lVar81) goto LAB_00310965;
LAB_00310a22:
            plVar45 = plVar42 + lVar81;
          }
          else {
            plVar42 = operator_new((long)local_300 * 8);
            plVar42[lVar81] = lVar50;
            if (lVar81 < 1) goto LAB_00310a22;
LAB_00310965:
            uVar80 = lVar81 + 0x1fffffffffffffffU & 0x1fffffffffffffff;
            plVar45 = plVar42;
            plVar78 = plVar37;
            if (uVar80 < 3) {
LAB_00310cb0:
              do {
                *plVar45 = *plVar78;
                plVar78 = plVar78 + 1;
                plVar45 = plVar45 + 1;
              } while (plVar78 != plVar68);
            }
            else {
              uVar80 = uVar80 + 1;
              uVar64 = uVar80 & 0x3ffffffffffffffc;
              uVar75 = (uVar64 - 4 >> 2) + 1;
              uVar32 = (ulong)((uint)uVar75 & 3);
              if (uVar64 - 4 < 0xc) {
                lVar33 = 0;
              }
              else {
                uVar75 = uVar75 & 0x7ffffffffffffffc;
                lVar33 = 0;
                do {
                  lVar51 = (plVar37 + lVar33)[1];
                  lVar67 = plVar37[lVar33 + 2];
                  lVar84 = (plVar37 + lVar33 + 2)[1];
                  plVar42[lVar33] = plVar37[lVar33];
                  (plVar42 + lVar33)[1] = lVar51;
                  plVar42[lVar33 + 2] = lVar67;
                  (plVar42 + lVar33 + 2)[1] = lVar84;
                  lVar51 = (plVar37 + lVar33 + 4)[1];
                  lVar67 = plVar37[lVar33 + 6];
                  lVar84 = (plVar37 + lVar33 + 6)[1];
                  plVar42[lVar33 + 4] = plVar37[lVar33 + 4];
                  (plVar42 + lVar33 + 4)[1] = lVar51;
                  plVar42[lVar33 + 6] = lVar67;
                  (plVar42 + lVar33 + 6)[1] = lVar84;
                  lVar51 = (plVar37 + lVar33 + 8)[1];
                  lVar67 = plVar37[lVar33 + 10];
                  lVar84 = (plVar37 + lVar33 + 10)[1];
                  plVar42[lVar33 + 8] = plVar37[lVar33 + 8];
                  (plVar42 + lVar33 + 8)[1] = lVar51;
                  plVar42[lVar33 + 10] = lVar67;
                  (plVar42 + lVar33 + 10)[1] = lVar84;
                  lVar51 = (plVar37 + lVar33 + 0xc)[1];
                  plVar45 = plVar37 + lVar33 + 0xe;
                  lVar67 = *plVar45;
                  uVar89 = *(undefined4 *)((long)plVar45 + 4);
                  lVar84 = plVar45[1];
                  uVar90 = *(undefined4 *)((long)plVar45 + 0xc);
                  plVar42[lVar33 + 0xc] = plVar37[lVar33 + 0xc];
                  (plVar42 + lVar33 + 0xc)[1] = lVar51;
                  plVar45 = plVar42 + lVar33 + 0xe;
                  *(int *)plVar45 = (int)lVar67;
                  *(undefined4 *)((long)plVar45 + 4) = uVar89;
                  *(int *)(plVar45 + 1) = (int)lVar84;
                  *(undefined4 *)((long)plVar45 + 0xc) = uVar90;
                  lVar33 = lVar33 + 0x10;
                  uVar75 = uVar75 - 4;
                } while (uVar75 != 0);
              }
              if (uVar32 != 0) {
                lVar51 = 0;
                do {
                  puVar38 = (undefined8 *)((long)plVar37 + lVar51 + lVar33 * 8);
                  uVar11 = puVar38[1];
                  puVar2 = (undefined4 *)((long)plVar37 + lVar51 + lVar33 * 8 + 0x10);
                  uVar89 = *puVar2;
                  uVar90 = puVar2[1];
                  uVar91 = puVar2[2];
                  uVar92 = puVar2[3];
                  puVar55 = (undefined8 *)((long)plVar42 + lVar51 + lVar33 * 8);
                  *puVar55 = *puVar38;
                  puVar55[1] = uVar11;
                  puVar2 = (undefined4 *)((long)plVar42 + lVar51 + lVar33 * 8 + 0x10);
                  *puVar2 = uVar89;
                  puVar2[1] = uVar90;
                  puVar2[2] = uVar91;
                  puVar2[3] = uVar92;
                  lVar51 = lVar51 + 0x20;
                } while (uVar32 * 0x20 != lVar51);
              }
              plVar45 = plVar42 + uVar64;
              if (uVar80 != uVar64) {
                plVar78 = plVar37 + uVar64;
                goto LAB_00310cb0;
              }
            }
          }
          plVar78 = plVar45 + 1;
          if ((long)plVar62 - (long)plVar68 < 1) {
            plVar78 = (long *)((long)plVar78 + ((long)plVar62 - (long)plVar68));
          }
          else if (plVar62 != plVar68) {
            param_14 = param_14 + (-1 - lVar81);
            if (&DAT_00000017 < param_14) {
              param_14 = (ulong **)(((ulong)param_14 >> 3) + 1);
              ppuVar47 = (ulong **)((ulong)param_14 & 0x3ffffffffffffffc);
              uVar32 = ((ulong)((long)ppuVar47 + -4) >> 2) + 1;
              uVar80 = (ulong)((uint)uVar32 & 3);
              if ((undefined1 *)((long)ppuVar47 + -4) < (undefined1 *)0xc) {
                lVar33 = 0;
              }
              else {
                uVar32 = uVar32 & 0x7ffffffffffffffc;
                lVar33 = 0;
                do {
                  lVar51 = (plVar37 + lVar81 + lVar33)[1];
                  lVar67 = plVar37[lVar81 + lVar33 + 2];
                  lVar84 = (plVar37 + lVar81 + lVar33 + 2)[1];
                  plVar45[lVar33 + 1] = plVar37[lVar81 + lVar33];
                  (plVar45 + lVar33 + 1)[1] = lVar51;
                  plVar45[lVar33 + 3] = lVar67;
                  (plVar45 + lVar33 + 3)[1] = lVar84;
                  lVar51 = (plVar37 + lVar81 + lVar33 + 4)[1];
                  lVar67 = plVar37[lVar81 + lVar33 + 6];
                  lVar84 = (plVar37 + lVar81 + lVar33 + 6)[1];
                  plVar45[lVar33 + 5] = plVar37[lVar81 + lVar33 + 4];
                  (plVar45 + lVar33 + 5)[1] = lVar51;
                  plVar45[lVar33 + 7] = lVar67;
                  (plVar45 + lVar33 + 7)[1] = lVar84;
                  lVar51 = (plVar37 + lVar81 + lVar33 + 8)[1];
                  lVar67 = plVar37[lVar81 + lVar33 + 10];
                  lVar84 = (plVar37 + lVar81 + lVar33 + 10)[1];
                  plVar45[lVar33 + 9] = plVar37[lVar81 + lVar33 + 8];
                  (plVar45 + lVar33 + 9)[1] = lVar51;
                  plVar45[lVar33 + 0xb] = lVar67;
                  (plVar45 + lVar33 + 0xb)[1] = lVar84;
                  lVar51 = (plVar37 + lVar81 + lVar33 + 0xc)[1];
                  plVar53 = plVar37 + lVar81 + lVar33 + 0xe;
                  lVar67 = *plVar53;
                  uVar89 = *(undefined4 *)((long)plVar53 + 4);
                  lVar84 = plVar53[1];
                  uVar90 = *(undefined4 *)((long)plVar53 + 0xc);
                  plVar45[lVar33 + 0xd] = plVar37[lVar81 + lVar33 + 0xc];
                  (plVar45 + lVar33 + 0xd)[1] = lVar51;
                  plVar53 = plVar45 + lVar33 + 0xf;
                  *(int *)plVar53 = (int)lVar67;
                  *(undefined4 *)((long)plVar53 + 4) = uVar89;
                  *(int *)(plVar53 + 1) = (int)lVar84;
                  *(undefined4 *)((long)plVar53 + 0xc) = uVar90;
                  lVar33 = lVar33 + 0x10;
                  uVar32 = uVar32 - 4;
                } while (uVar32 != 0);
              }
              if (uVar80 != 0) {
                lVar81 = (lVar81 + lVar33) * 8;
                lVar51 = 0;
                do {
                  puVar38 = (undefined8 *)((long)plVar37 + lVar51 + lVar81);
                  uVar11 = puVar38[1];
                  puVar2 = (undefined4 *)((long)plVar37 + lVar51 + lVar81 + 0x10);
                  uVar89 = *puVar2;
                  uVar90 = puVar2[1];
                  uVar91 = puVar2[2];
                  uVar92 = puVar2[3];
                  puVar55 = (undefined8 *)((long)plVar45 + lVar51 + lVar33 * 8 + 8);
                  *puVar55 = *puVar38;
                  puVar55[1] = uVar11;
                  puVar2 = (undefined4 *)((long)plVar45 + lVar51 + lVar33 * 8 + 0x18);
                  *puVar2 = uVar89;
                  puVar2[1] = uVar90;
                  puVar2[2] = uVar91;
                  puVar2[3] = uVar92;
                  lVar51 = lVar51 + 0x20;
                } while (uVar80 * 0x20 != lVar51);
              }
              plVar78 = plVar78 + (long)ppuVar47;
              if (param_14 == ppuVar47) goto LAB_00310f24;
              plVar68 = plVar68 + (long)ppuVar47;
            }
            do {
              *plVar78 = *plVar68;
              plVar68 = plVar68 + 1;
              plVar78 = plVar78 + 1;
            } while (plVar68 != plVar62);
          }
LAB_00310f24:
          if (plVar37 != (long *)0x0) goto LAB_003105d6;
          goto LAB_003105db;
        }
        if (plVar62 == plVar68) {
          *plVar68 = lVar50;
          *(long **)(this + 0x40) = plVar68 + 1;
        }
        else {
          plVar37 = plVar62 + -1;
          *plVar62 = plVar62[-1];
          *(long **)(this + 0x40) = plVar62 + 1;
          if (0 < (long)plVar37 - (long)plVar68) {
            uVar80 = ((ulong)((long)plVar37 - (long)plVar68) >> 3) + 1;
            do {
              *plVar37 = plVar37[-1];
              plVar37 = plVar37 + -1;
              uVar80 = uVar80 - 1;
            } while (1 < uVar80);
          }
          *plVar68 = lVar50;
        }
      }
LAB_00310600:
      plVar34 = plVar34 + 6;
    } while (plVar34 != plVar72);
  }
  plVar34 = *(long **)(this + 0x20);
  uVar80 = (long)*(long **)(this + 0x28) - (long)plVar34;
  plVar72 = plVar34;
  if (0 < (long)uVar80) {
    uVar80 = uVar80 >> 4;
    do {
      uVar75 = uVar80 >> 1;
      uVar32 = uVar75;
      if (plVar72[uVar75 * 2 + 1] <= (long)local_2c0) {
        uVar32 = ~uVar75 + uVar80;
        plVar72 = plVar72 + uVar75 * 2 + 2;
      }
      uVar80 = uVar32;
    } while (0 < (long)uVar32);
  }
  if ((((plVar72 != *(long **)(this + 0x28)) && (*plVar72 <= (long)local_2c0)) &&
      ((long)plVar72 - (long)plVar34 != 0)) &&
     (uVar80 = (long)plVar72 - (long)plVar34 >> 4,
     *(long *)(*(long *)(this + 0x38) + -8 + uVar80 * 8) ==
     *(long *)(*(long *)(this + 0x38) + uVar80 * 8))) {
    lVar50 = (long)plStack_2e0 - (long)local_2e8;
                    /* try { // try from 00313b40 to 00313b51 has its CatchHandler @ 00314697 */
    Ranges::mergeBack((Ranges *)local_1a0,uVar80,&local_2e8);
    if ((long)plStack_2e0 - (long)local_2e8 != 0) {
      lVar50 = lVar50 >> 4;
      uVar80 = ((long)plStack_2e0 - (long)local_2e8 >> 4) * -0x5555555555555555;
      bVar88 = uVar80 < (ulong)(lVar50 * -0x5555555555555555);
      lVar81 = uVar80 + lVar50 * 0x5555555555555555;
      if (!bVar88 && lVar81 != 0) {
        if (bVar88) {
          lVar81 = 0;
        }
        plVar34 = local_2e8 + lVar50 * 2;
        plVar72 = plVar34 + lVar81 * 6;
        do {
          if ((char)plVar34[5] == '\x02') {
            lVar50 = *plVar34;
            lVar81 = plVar34[1];
            if (lVar50 != lVar81) {
              lVar33 = *(long *)(this + 0x38);
              uVar80 = lVar33 + lVar50 * 8;
              uVar32 = lVar33 + lVar81 * 8;
              lVar51 = *(long *)(this + 0x40);
              uVar75 = lVar51 - uVar32;
              if ((uVar75 != 0) && (0 < (long)uVar75)) {
                uVar64 = uVar75 >> 3;
                param_14 = (ulong **)(uVar64 + (uVar75 < 8));
                if ((param_14 < (ulong **)0x4) ||
                   ((uVar80 < lVar33 + ((lVar81 + uVar64) - (ulong)(7 < uVar75)) * 8 + 8 &&
                    (uVar32 < lVar33 + ((lVar50 + uVar64) - (ulong)(7 < uVar75)) * 8 + 8)))) {
                  uVar73 = uVar80;
                }
                else {
                  ppuVar47 = (ulong **)((ulong)param_14 & 0xfffffffffffffffc);
                  uVar73 = ((ulong)((long)ppuVar47 + -4) >> 2) + 1;
                  uVar39 = (ulong)((uint)uVar73 & 3);
                  if ((undefined1 *)((long)ppuVar47 + -4) < (undefined1 *)0xc) {
                    lVar56 = 0;
                  }
                  else {
                    uVar73 = uVar73 & 0x7ffffffffffffffc;
                    lVar67 = lVar33 + lVar81 * 8;
                    lVar84 = lVar33 + lVar50 * 8;
                    lVar56 = 0;
                    do {
                      puVar38 = (undefined8 *)(lVar67 + lVar56 * 8);
                      uVar11 = puVar38[1];
                      puVar55 = (undefined8 *)(lVar67 + 0x10 + lVar56 * 8);
                      uVar19 = *puVar55;
                      uVar20 = puVar55[1];
                      puVar55 = (undefined8 *)(lVar84 + lVar56 * 8);
                      *puVar55 = *puVar38;
                      puVar55[1] = uVar11;
                      puVar38 = (undefined8 *)(lVar84 + 0x10 + lVar56 * 8);
                      *puVar38 = uVar19;
                      puVar38[1] = uVar20;
                      puVar38 = (undefined8 *)(lVar67 + 0x20 + lVar56 * 8);
                      uVar11 = puVar38[1];
                      puVar55 = (undefined8 *)(lVar67 + 0x30 + lVar56 * 8);
                      uVar19 = *puVar55;
                      uVar20 = puVar55[1];
                      puVar55 = (undefined8 *)(lVar84 + 0x20 + lVar56 * 8);
                      *puVar55 = *puVar38;
                      puVar55[1] = uVar11;
                      puVar38 = (undefined8 *)(lVar84 + 0x30 + lVar56 * 8);
                      *puVar38 = uVar19;
                      puVar38[1] = uVar20;
                      puVar38 = (undefined8 *)(lVar67 + 0x40 + lVar56 * 8);
                      uVar11 = puVar38[1];
                      puVar55 = (undefined8 *)(lVar67 + 0x50 + lVar56 * 8);
                      uVar19 = *puVar55;
                      uVar20 = puVar55[1];
                      puVar55 = (undefined8 *)(lVar84 + 0x40 + lVar56 * 8);
                      *puVar55 = *puVar38;
                      puVar55[1] = uVar11;
                      puVar38 = (undefined8 *)(lVar84 + 0x50 + lVar56 * 8);
                      *puVar38 = uVar19;
                      puVar38[1] = uVar20;
                      puVar38 = (undefined8 *)(lVar67 + 0x60 + lVar56 * 8);
                      uVar11 = puVar38[1];
                      puVar2 = (undefined4 *)(lVar67 + 0x70 + lVar56 * 8);
                      uVar89 = *puVar2;
                      uVar90 = puVar2[1];
                      uVar91 = puVar2[2];
                      uVar92 = puVar2[3];
                      puVar55 = (undefined8 *)(lVar84 + 0x60 + lVar56 * 8);
                      *puVar55 = *puVar38;
                      puVar55[1] = uVar11;
                      puVar2 = (undefined4 *)(lVar84 + 0x70 + lVar56 * 8);
                      *puVar2 = uVar89;
                      puVar2[1] = uVar90;
                      puVar2[2] = uVar91;
                      puVar2[3] = uVar92;
                      lVar56 = lVar56 + 0x10;
                      uVar73 = uVar73 - 4;
                    } while (uVar73 != 0);
                  }
                  if (uVar39 != 0) {
                    lVar81 = lVar33 + (lVar81 + lVar56) * 8;
                    lVar33 = lVar33 + (lVar50 + lVar56) * 8;
                    lVar50 = 0;
                    do {
                      puVar38 = (undefined8 *)(lVar81 + lVar50);
                      uVar11 = puVar38[1];
                      puVar2 = (undefined4 *)(lVar81 + 0x10 + lVar50);
                      uVar89 = *puVar2;
                      uVar90 = puVar2[1];
                      uVar91 = puVar2[2];
                      uVar92 = puVar2[3];
                      puVar55 = (undefined8 *)(lVar33 + lVar50);
                      *puVar55 = *puVar38;
                      puVar55[1] = uVar11;
                      puVar2 = (undefined4 *)(lVar33 + 0x10 + lVar50);
                      *puVar2 = uVar89;
                      puVar2[1] = uVar90;
                      puVar2[2] = uVar91;
                      puVar2[3] = uVar92;
                      lVar50 = lVar50 + 0x20;
                    } while (uVar39 * 0x20 != lVar50);
                  }
                  if (param_14 == ppuVar47) goto LAB_00313cf6;
                  uVar64 = uVar64 - (long)ppuVar47;
                  uVar73 = uVar80 + (long)ppuVar47 * 8;
                  uVar32 = uVar32 + (long)ppuVar47 * 8;
                }
                uVar64 = uVar64 + 1;
                lVar50 = 0;
                do {
                  *(undefined8 *)(uVar73 + lVar50) = *(undefined8 *)(uVar32 + lVar50);
                  uVar64 = uVar64 - 1;
                  lVar50 = lVar50 + 8;
                } while (1 < uVar64);
              }
LAB_00313cf6:
              if (lVar51 != uVar80 + uVar75) {
                *(ulong *)(this + 0x40) = uVar80 + uVar75;
              }
            }
          }
          else if ((char)plVar34[5] == '\x01') {
            puVar55 = (undefined8 *)(*plVar34 * 8 + *(long *)(this + 0x38));
            puVar38 = *(undefined8 **)(this + 0x40);
            if (puVar38 == *(undefined8 **)(this + 0x48)) {
                    /* try { // try from 00313bae to 00313bbd has its CatchHandler @ 0031464c */
              std::vector<long_long,std::allocator<long_long>>::_M_realloc_insert<long_long_const&>
                        ((vector<long_long,std::allocator<long_long>> *)local_100,puVar55,puVar55);
            }
            else if (puVar38 == puVar55) {
              *(undefined8 **)(this + 0x40) = puVar55 + 1;
            }
            else {
              uVar11 = *puVar55;
              puVar77 = puVar38 + -1;
              *puVar38 = puVar38[-1];
              *(undefined8 **)(this + 0x40) = puVar38 + 1;
              if (0 < (long)puVar77 - (long)puVar55) {
                uVar80 = ((ulong)((long)puVar77 - (long)puVar55) >> 3) + 1;
                do {
                  *puVar77 = puVar77[-1];
                  puVar77 = puVar77 + -1;
                  uVar80 = uVar80 - 1;
                } while (1 < uVar80);
              }
              *puVar55 = uVar11;
            }
          }
          plVar34 = plVar34 + 6;
        } while (plVar34 != plVar72);
      }
    }
  }
  plVar34 = *(long **)(this + 0x20);
  uVar80 = (long)*(long **)(this + 0x28) - (long)plVar34;
  plVar72 = plVar34;
  if (0 < (long)uVar80) {
    uVar80 = uVar80 >> 4;
    do {
      uVar75 = uVar80 >> 1;
      uVar32 = uVar75;
      if (plVar72[uVar75 * 2 + 1] <= (long)uVar71) {
        uVar32 = ~uVar75 + uVar80;
        plVar72 = plVar72 + uVar75 * 2 + 2;
      }
      uVar80 = uVar32;
    } while (0 < (long)uVar32);
  }
  param_11 = local_2a0;
  if ((((plVar72 != *(long **)(this + 0x28)) && (*plVar72 <= (long)uVar71)) &&
      ((long)plVar72 - (long)plVar34 != 0)) &&
     (uVar71 = (long)plVar72 - (long)plVar34 >> 4,
     *(long *)(*(long *)(this + 0x38) + -8 + uVar71 * 8) ==
     *(long *)(*(long *)(this + 0x38) + uVar71 * 8))) {
    lVar81 = (long)plStack_2e0 - (long)local_2e8;
    lVar50 = lVar81 >> 0x3f;
                    /* try { // try from 00313f0c to 00313f1d has its CatchHandler @ 00314697 */
    Ranges::mergeBack((Ranges *)local_1a0,uVar71,&local_2e8);
    param_11 = local_2a0;
    if ((long)plStack_2e0 - (long)local_2e8 != 0) {
      uVar80 = (lVar81 / 6 + lVar50 >> 3) - lVar50;
      uVar71 = ((long)plStack_2e0 - (long)local_2e8) / 0x30;
      if (uVar80 < uVar71) {
        plVar34 = local_2e8 + uVar80 * 6;
        uVar32 = uVar71;
        if (uVar80 < uVar71) {
          uVar32 = uVar80;
        }
        lVar50 = uVar71 * 0x30 + uVar32 * -0x30;
        do {
                    /* try { // try from 00313fa0 to 00313faf has its CatchHandler @ 00314690 */
          RangedValues<long_long>::applyOperation((RangedValues<long_long> *)local_1a0,plVar34);
          plVar34 = plVar34 + 6;
          lVar50 = lVar50 + -0x30;
        } while (lVar50 != 0);
      }
    }
  }
  if (plStack_2e0 != local_2e8) {
    plStack_2e0 = local_2e8;
  }
  pvVar41 = stack0xfffffffffffffd70;
  pvVar79 = (void *)local_298._0_8_;
  if ((ulong *)local_298._0_8_ != stack0xfffffffffffffd70) {
    do {
      plVar34 = *(long **)((long)pvVar79 + 0x28);
      if (plVar34 != (long *)0x0) {
        LOCK();
        plVar72 = plVar34 + 1;
        *(int *)plVar72 = (int)*plVar72 + -1;
        UNLOCK();
        if ((int)*plVar72 == 0) {
          (**(code **)(*plVar34 + 8))();
        }
      }
      pvVar79 = (void *)((long)pvVar79 + 0x30);
    } while (pvVar79 != pvVar41);
  }
  if ((void *)local_298._0_8_ != (void *)0x0) {
    operator_delete((void *)local_298._0_8_);
  }
  pauVar63 = local_1b8;
  pauVar66 = pauStack_1c0;
  pauVar69 = (undefined1 (*) [16])(local_2a8[1] + 8);
  if (pauVar69 == local_2b0) goto LAB_00314390;
  goto LAB_0030f7a7;
LAB_00314390:
  if (pauStack_1c0 != local_1b8) {
    pauVar69 = pauStack_1c0;
    do {
      if (*(void **)*pauVar69 != (void *)0x0) {
        operator_delete(*(void **)*pauVar69);
      }
      pauVar69 = (undefined1 (*) [16])(pauVar69[1] + 8);
    } while (pauVar69 != pauVar63);
  }
joined_r0x003143d6:
  pvVar57 = local_1d8;
  pvVar25 = pvStack_1d0;
  if (pauVar66 != (undefined1 (*) [16])0x0) {
    operator_delete(pauVar66);
    pvVar57 = local_1d8;
    pvVar25 = pvStack_1d0;
  }
  for (; pvVar65 = pvStack_1d0, pvVar57 != pvStack_1d0; pvVar57 = pvVar57 + 0x18) {
    pvVar79 = *(void **)pvVar57;
    pvVar41 = *(void **)(pvVar57 + 8);
    pvStack_1d0 = pvVar25;
    param_11 = local_2a0;
    if (pvVar79 != pvVar41) {
      do {
        plVar34 = *(long **)((long)pvVar79 + 0x18);
        if (plVar34 != (long *)0x0) {
          LOCK();
          plVar72 = plVar34 + 1;
          *(int *)plVar72 = (int)*plVar72 + -1;
          UNLOCK();
          if ((int)*plVar72 == 0) {
            (**(code **)(*plVar34 + 8))();
          }
        }
        this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar79 + 8);
        if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (*(long *)(this_00 + 8) == 0x100000001) {
            *(undefined8 *)(this_00 + 8) = 0;
            (**(code **)(*(long *)this_00 + 0x10))(this_00);
            (**(code **)(*(long *)this_00 + 0x18))(this_00);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var1 = this_00 + 8;
              iVar7 = *(int *)p_Var1;
              *(int *)p_Var1 = *(int *)p_Var1 + -1;
              UNLOCK();
            }
            else {
              iVar7 = (int)*(long *)(this_00 + 8);
              *(int *)(this_00 + 8) = iVar7 + -1;
            }
            if (iVar7 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
            }
          }
        }
        pvVar79 = (void *)((long)pvVar79 + 0x48);
      } while (pvVar79 != pvVar41);
      pvVar79 = *(void **)pvVar57;
      param_11 = local_2a0;
    }
    local_2a0 = param_11;
    if (pvVar79 != (void *)0x0) {
      operator_delete(pvVar79);
    }
    pvVar25 = pvStack_1d0;
    pvStack_1d0 = pvVar65;
  }
  pvStack_1d0 = pvVar25;
  if (local_1d8 !=
      (vector<juce::detail::OwnedGlyphsSpan,std::allocator<juce::detail::OwnedGlyphsSpan>> *)0x0) {
    operator_delete(local_1d8);
  }
  Shaper::~Shaper((Shaper *)&local_f0);
  plVar34 = local_198 + 2;
  if (local_198 == local_118) goto LAB_0031447b;
  goto LAB_0030e176;
}


