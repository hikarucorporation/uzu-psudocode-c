// Function : getChunksUpToNextSafeBreak
// Namespace: juce:detail:Shaper
// Entry    : 00320080
// Prototype: undefined getChunksUpToNextSafeBreak(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, long * param_10, ulong param_11)
// Body     : 00320080 - 00322cb4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::detail::Shaper::getChunksUpToNextSafeBreak(long long) */

void __cdecl
juce::detail::Shaper::getChunksUpToNextSafeBreak
          (undefined8 param_1_00,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9,
          long *param_10,ulong param_11)

{
  hb_font_t *phVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  long *plVar16;
  bool bVar17;
  undefined1 uVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  hb_buffer_t *phVar24;
  int *piVar25;
  long *plVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  hb_font_t *phVar29;
  _Rb_tree_node_base *p_Var30;
  long *plVar31;
  undefined8 *puVar32;
  ulong *puVar33;
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  undefined1 *puVar36;
  undefined4 *puVar37;
  long *plVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  long *plVar41;
  ulong uVar42;
  undefined1 (*pauVar43) [16];
  undefined8 *puVar44;
  hb_buffer_t *this;
  undefined1 (*pauVar45) [16];
  long lVar46;
  long lVar47;
  uint uVar48;
  ulong uVar49;
  undefined8 *puVar50;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined1 *puVar51;
  ulong uVar52;
  undefined8 *puVar53;
  long *plVar54;
  uint uVar55;
  ulong uVar56;
  long lVar57;
  long *plVar58;
  uint uVar59;
  ulong uVar60;
  undefined1 *puVar61;
  SharedFontInternal *this_00;
  undefined1 *puVar62;
  undefined1 (*pauVar63) [16];
  ulong uVar64;
  char cVar65;
  long lVar66;
  uint *puVar67;
  undefined1 (*pauVar68) [16];
  undefined1 (*pauVar69) [16];
  long lVar70;
  long lVar71;
  bool bVar72;
  float fVar73;
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  float fVar79;
  undefined4 uVar80;
  float fVar81;
  undefined4 uVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 (*local_278) [16];
  undefined1 local_238 [4];
  undefined1 auStack_234 [12];
  ulong local_210;
  float local_204;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_1e8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_1e0;
  byte local_1d8;
  long *local_1d0;
  undefined1 local_1c8 [16];
  long *local_1b8;
  ulong local_1b0;
  hb_font_t *local_1a8;
  long lStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  long *local_188;
  ulong uStack_180;
  ulong local_178;
  ulong uStack_170;
  undefined8 local_168;
  undefined1 local_158 [16];
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  hb_font_t *local_130;
  long local_128;
  vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>> *local_120;
  ulong local_118;
  long local_110;
  ulong local_108;
  int local_100;
  int local_fc;
  long *local_f8;
  long *plStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  byte local_c8;
  long *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_90;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_88;
  byte local_80;
  long *local_78;
  Ranges *local_70;
  ulong *local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar33 = (ulong *)param_10[0xf];
  uVar49 = param_10[0x10] - (long)puVar33;
  if (0 < (long)uVar49) {
    uVar49 = uVar49 >> 3;
    do {
      uVar56 = uVar49 >> 1;
      if ((long)param_11 < (long)puVar33[uVar56]) {
        uVar49 = uVar56;
      }
      else {
        uVar49 = ~uVar56 + uVar49;
        puVar33 = puVar33 + uVar56 + 1;
      }
    } while (0 < (long)uVar49);
  }
  if (puVar33 == (ulong *)param_10[0x10]) {
    uVar49 = param_10[7] - param_10[6] >> 3;
  }
  else {
    uVar49 = *puVar33;
  }
  plStack_f0 = (long *)0x0;
  local_e8 = 0;
  uVar56 = param_11;
  if ((long)param_11 < (long)uVar49) {
    uVar56 = uVar49;
  }
  pauVar63 = (undefined1 (*) [16])param_10[0x12];
  pauVar34 = (undefined1 (*) [16])param_10[0x13];
  uVar64 = (long)pauVar34 - (long)pauVar63;
  pauVar27 = pauVar63;
  if (0 < (long)uVar64) {
    uVar60 = uVar64 >> 4;
    do {
      uVar22 = uVar60 >> 1;
      uVar23 = uVar22;
      if (*(long *)(pauVar27[uVar22] + 8) <= (long)param_11) {
        uVar23 = ~uVar22 + uVar60;
        pauVar27 = pauVar27 + uVar22 + 1;
      }
      uVar60 = uVar23;
    } while (0 < (long)uVar23);
  }
  local_118 = param_11;
  local_f8 = plStack_f0;
  if ((pauVar27 != pauVar34) && (*(long *)*pauVar27 <= (long)param_11)) {
    pauVar43 = pauVar27;
    do {
      if ((pauVar43 != pauVar27) && (*(long *)(*pauVar27 + 8) != *(long *)*pauVar43)) break;
      if ((long)uVar56 <= *(long *)(*pauVar43 + 8)) goto joined_r0x00322727;
      pauVar28 = pauVar43 + 1;
      pauVar27 = pauVar43;
      pauVar43 = pauVar28;
    } while (pauVar28 != pauVar34);
  }
  local_1b8 = (long *)param_10[9];
  uVar56 = param_10[10] - (long)local_1b8;
  plVar26 = local_1b8;
  if (0 < (long)uVar56) {
    uVar60 = uVar56 >> 4;
    do {
      uVar22 = uVar60 >> 1;
      uVar23 = uVar22;
      if (plVar26[uVar22 * 2 + 1] <= (long)param_11) {
        uVar23 = ~uVar22 + uVar60;
        plVar26 = plVar26 + uVar22 * 2 + 2;
      }
      uVar60 = uVar23;
    } while (0 < (long)uVar23);
  }
  uVar60 = uVar56;
  if ((plVar26 != (long *)param_10[10]) && (*plVar26 <= (long)param_11)) {
    uVar60 = (long)plVar26 - (long)local_1b8;
  }
  lVar57 = (long)uVar60 >> 4;
  if ((lVar57 != (long)uVar56 >> 4) && (uVar56 = local_1b8[lVar57 * 2], (long)uVar56 < (long)uVar49)
     ) {
    local_70 = (Ranges *)(param_10 + 0x12);
    local_128 = param_10[0xc];
    puVar33 = (ulong *)(local_1b8 + lVar57 * 2);
    local_120 = (vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>> *)
                (param_10 + 0x15);
    do {
      local_b8 = (long)puVar33 - (long)local_1b8;
      if ((long)uVar56 <= (long)param_11) {
        uVar56 = param_11;
      }
      uVar64 = puVar33[1];
      uVar60 = uVar56;
      if ((long)uVar56 < (long)uVar64) {
        uVar60 = uVar64;
      }
      iVar20 = *(int *)(local_128 + local_b8);
      bVar5 = *(byte *)(local_128 + 4 + local_b8);
      local_f8 = plStack_f0;
      local_68 = puVar33;
      if ((lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
           ::language == '\0') &&
         (iVar21 = __cxa_guard_acquire(&lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
                                        ::language), iVar21 != 0)) {
                    /* try { // try from 0032268d to 00322691 has its CatchHandler @ 00322cb5 */
        SystemStats::getDisplayLanguage();
        __cxa_atexit(juce::String::~String,
                     &lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
                      ::language,&__dso_handle);
        __cxa_guard_release(&lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
                             ::language);
      }
      phVar24 = calloc(1,0xf0);
      this = (hb_buffer_t *)&_hb_Null_hb_buffer_t;
      if (phVar24 != (hb_buffer_t *)0x0) {
        *(undefined4 *)phVar24 = 1;
        *(undefined4 *)(phVar24 + 4) = 1;
        *(undefined8 *)(phVar24 + 8) = 0;
        *(undefined8 *)(phVar24 + 0xc4) = 0x1fffffff3fffffff;
                    /* try { // try from 00320360 to 00320366 has its CatchHandler @ 00322d5a */
        hb_unicode_funcs_destroy((int *)0x0);
        while (piVar25 = static_ucd_funcs, static_ucd_funcs == (int *)0x0) {
                    /* try { // try from 00320373 to 003203a2 has its CatchHandler @ 00322cda */
          piVar25 = hb_ucd_unicode_funcs_lazy_loader_t::create();
          piVar15 = static_ucd_funcs;
          if (piVar25 == (int *)0x0) {
            piVar25 = &_hb_Null_hb_unicode_funcs_t;
            LOCK();
            if (static_ucd_funcs == (int *)0x0) {
              static_ucd_funcs = &_hb_Null_hb_unicode_funcs_t;
            }
            UNLOCK();
          }
          else {
            LOCK();
            if (static_ucd_funcs == (int *)0x0) {
              static_ucd_funcs = piVar25;
            }
            UNLOCK();
          }
          if (piVar15 == (int *)0x0) break;
          if ((piVar25 != (int *)0x0) && (piVar25 != &_hb_Null_hb_unicode_funcs_t)) {
            hb_unicode_funcs_destroy(piVar25);
          }
        }
        if ((piVar25 != (int *)0x0) && (*piVar25 != 0)) {
          LOCK();
          *piVar25 = *piVar25 + 1;
          UNLOCK();
        }
        *(int **)(phVar24 + 0x10) = piVar25;
        uVar74 = _UNK_005dd358;
        *(undefined8 *)(phVar24 + 0x18) = _DAT_005dd350;
        *(undefined8 *)(phVar24 + 0x20) = uVar74;
        *(undefined8 *)(phVar24 + 0x28) = 0xffffffff00000000;
        *(undefined4 *)(phVar24 + 0x30) = 0;
        *(undefined8 *)(phVar24 + 0x38) = 0;
        *(undefined8 *)(phVar24 + 0x40) = 0;
        *(undefined8 *)(phVar24 + 0x48) = 0;
        *(undefined8 *)(phVar24 + 0x50) = 0;
        phVar24[0x58] = (hb_buffer_t)0x1;
        *(undefined8 *)(phVar24 + 0x59) = 0;
        *(undefined8 *)(phVar24 + 0x60) = 0;
        *(undefined8 *)(phVar24 + 0x78) = *(undefined8 *)(phVar24 + 0x70);
        *(undefined8 *)(phVar24 + 0x88) = 0;
        *(undefined8 *)(phVar24 + 0x90) = 0;
        *(undefined8 *)(phVar24 + 0x98) = 0;
        *(undefined8 *)(phVar24 + 0xa0) = 0;
        *(undefined8 *)(phVar24 + 0xa8) = 0;
        *(undefined8 *)(phVar24 + 0xb0) = 0;
        *(undefined2 *)(phVar24 + 0xb8) = 0;
        *(undefined8 *)(phVar24 + 0xbc) = 1;
        this = phVar24;
      }
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x50) = 0;
        this[0x58] = (hb_buffer_t)0x1;
        *(undefined8 *)(this + 0x59) = 0;
        *(undefined8 *)(this + 0x60) = 0;
        *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
        *(undefined8 *)(this + 0x88) = 0;
        *(undefined8 *)(this + 0x90) = 0;
        *(undefined8 *)(this + 0x98) = 0;
        *(undefined8 *)(this + 0xa0) = 0;
        *(undefined8 *)(this + 0xa8) = 0;
        *(undefined8 *)(this + 0xb0) = 0;
        *(undefined2 *)(this + 0xb8) = 0;
        *(undefined8 *)(this + 0xbc) = 1;
      }
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x1c) = 0;
      }
      uVar55 = iVar20 - 1;
      uVar82 = 0x5a797979;
      if (uVar55 < 0x3f) {
        uVar82 = *(undefined4 *)
                  (
                  "barAnmrAgneBopoBlryCaveDihtEroeGkerGrjuGuruGgnaHinaHrbeHariHanaKadnKrmhKooaLntaLmylMyyyZayrOhniSlmaTuleTaahTiahTtbiTmldAilaBumaBktaBmkaCsnaCmahCrehCpnmHavaJilaKanaLcpeLbmiLusiLdnaMietMaweNookNkclOegsOdrlPghoRruaSdnuSolyScrySelaTulaTyyyZgnfTiiaVohcWiiiY"
                  + (long)(int)uVar55 * 4);
      }
      if (*(int *)(this + 4) != 0) {
        *(undefined4 *)(this + 0x3c) = uVar82;
      }
      if (((lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
            ::language == (byte *)0x0) ||
          (*lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
            ::language == 0)) ||
         (plVar26 = lang_find_or_insert(lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
                                        ::language), plVar26 == (long *)0x0)) {
        lVar57 = 0;
        iVar20 = *(int *)(this + 4);
      }
      else {
        lVar57 = plVar26[1];
        iVar20 = *(int *)(this + 4);
      }
      if (iVar20 != 0) {
        *(long *)(this + 0x40) = lVar57;
      }
      if (*(int *)(this + 4) != 0) {
        *(uint *)(this + 0x38) = bVar5 & 1 | 4;
      }
      puVar67 = (uint *)*param_10;
      uVar55 = *(uint *)(this + 0x20);
      if (*(int *)(this + 4) != 0) {
        uVar23 = uVar56 & 0xffffffff;
        if ((int)uVar56 == -1) {
          if (*puVar67 != 0) {
            uVar23 = 0;
            do {
              lVar57 = uVar23 + 1;
              uVar23 = uVar23 + 1;
            } while (puVar67[lVar57] != 0);
            goto LAB_0032057c;
          }
          iVar20 = 0;
          uVar59 = *(uint *)(this + 0x60);
        }
        else {
LAB_0032057c:
          iVar20 = (int)uVar23;
          uVar59 = *(uint *)(this + 0x60);
        }
        if (((uVar59 == 0) || (uVar59 < *(uint *)(this + 0x68))) ||
           (uVar74 = hb_buffer_t::enlarge(this,uVar59), (char)uVar74 != '\0')) {
          *(undefined4 *)(this + 0xb4) = 0;
          if (0 < iVar20) {
            puVar4 = puVar67 + iVar20;
            uVar59 = 0;
            do {
              uVar48 = *puVar67;
              if ((0xd7ff < uVar48) && (uVar48 - 0x110000 < 0xffefe000)) {
                uVar48 = uVar55;
              }
              puVar67 = puVar67 + 1;
              *(uint *)(this + 0xb4) = uVar59 + 1;
              *(uint *)(this + (ulong)uVar59 * 4 + 0x9c) = uVar48;
            } while ((puVar67 < puVar4) && (uVar59 = *(uint *)(this + 0xb4), uVar59 < 5));
          }
          *(undefined4 *)(this + 0x30) = 1;
        }
      }
      lVar57 = *param_10;
      lVar46 = lVar57;
      if ((long)uVar56 < (long)uVar64) {
        lVar46 = uVar60 * 4 + uVar56 * -4;
        lVar47 = 0;
        do {
          uVar82 = *(undefined4 *)(lVar57 + uVar56 * 4 + lVar47 * 4);
          uVar55 = *(uint *)(this + 0x60);
          uVar59 = uVar55 + 1;
          if ((uVar59 == 0) || (uVar59 < *(uint *)(this + 0x68))) {
LAB_00320674:
            lVar66 = *(long *)(this + 0x70);
            uVar64 = (ulong)uVar55;
            *(undefined8 *)(lVar66 + 8 + uVar64 * 0x14) = 0;
            *(undefined4 *)(lVar66 + 0x10 + uVar64 * 0x14) = 0;
            *(undefined4 *)(lVar66 + uVar64 * 0x14) = uVar82;
            *(undefined4 *)(lVar66 + 4 + uVar64 * 0x14) = 0;
            *(int *)(lVar66 + 8 + uVar64 * 0x14) = (int)lVar47;
            *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
          }
          else {
            uVar74 = hb_buffer_t::enlarge(this,uVar59);
            if ((char)uVar74 != '\0') {
              uVar55 = *(uint *)(this + 0x60);
              goto LAB_00320674;
            }
          }
          *(undefined4 *)(this + 0xb4) = 0;
          lVar47 = lVar47 + 1;
          lVar46 = lVar46 + -4;
        } while (lVar46 != 0);
        lVar46 = *param_10;
      }
      uVar55 = *(uint *)(this + 0x20);
      if (*(int *)(this + 4) != 0) {
        puVar67 = (uint *)(lVar57 + uVar60 * 4);
        uVar59 = (int)((ulong)(param_10[1] - lVar46) >> 2) - (int)uVar60;
        uVar64 = (ulong)uVar59;
        if (uVar59 == 0xffffffff) {
          if (*puVar67 != 0) {
            uVar64 = 0;
            do {
              lVar46 = uVar64 * 4;
              uVar64 = uVar64 + 1;
            } while (*(int *)(lVar57 + uVar60 * 4 + 4 + lVar46) != 0);
            goto LAB_0032073a;
          }
          iVar20 = 0;
          uVar59 = *(uint *)(this + 0x60);
        }
        else {
LAB_0032073a:
          iVar20 = (int)uVar64;
          uVar59 = *(uint *)(this + 0x60);
        }
        if (((uVar59 == 0) || (uVar59 < *(uint *)(this + 0x68))) ||
           (uVar74 = hb_buffer_t::enlarge(this,uVar59), (char)uVar74 != '\0')) {
          *(undefined4 *)(this + 0xb4) = 0;
          if (0 < iVar20) {
            puVar4 = puVar67 + iVar20;
            uVar59 = 0;
            do {
              uVar48 = *puVar67;
              if ((0xd7ff < uVar48) && (uVar48 - 0x110000 < 0xffefe000)) {
                uVar48 = uVar55;
              }
              puVar67 = puVar67 + 1;
              *(uint *)(this + 0xb4) = uVar59 + 1;
              *(uint *)(this + (ulong)uVar59 * 4 + 0x9c) = uVar48;
            } while ((puVar67 < puVar4) && (uVar59 = *(uint *)(this + 0xb4), uVar59 < 5));
          }
          *(undefined4 *)(this + 0x30) = 1;
        }
      }
      if ((*(int *)(this + 0x3c) == 0) && (*(int *)(this + 0x60) != 0)) {
        lVar57 = 0;
        uVar64 = 0;
        do {
          lVar46 = *(long *)(this + 0x10);
                    /* try { // try from 00320825 to 00320827 has its CatchHandler @ 00322e11 */
          iVar20 = (**(code **)(lVar46 + 0x38))
                             (lVar46,*(undefined4 *)(*(long *)(this + 0x70) + lVar57),
                              *(undefined8 *)(lVar46 + 0x78));
          if (((iVar20 != 0x5a696e68) && (iVar20 != 0x5a797979)) && (iVar20 != 0x5a7a7a7a)) {
            *(int *)(this + 0x3c) = iVar20;
            break;
          }
          uVar64 = uVar64 + 1;
          lVar57 = lVar57 + 0x14;
        } while (uVar64 < *(uint *)(this + 0x60));
      }
      if (*(int *)(this + 0x38) == 0) {
        uVar74 = hb_script_get_horizontal_direction(*(int *)(this + 0x3c));
        iVar20 = (int)uVar74;
        if (iVar20 == 0) {
          iVar20 = 4;
        }
        *(int *)(this + 0x38) = iVar20;
        lVar57 = *(long *)(this + 0x40);
        lVar46 = hb_language_get_default::default_language;
      }
      else {
        lVar57 = *(long *)(this + 0x40);
        lVar46 = hb_language_get_default::default_language;
      }
      hb_language_get_default::default_language = lVar46;
      if (lVar57 == 0) {
        if (lVar46 == 0) {
          plVar26 = lang_find_or_insert(&DAT_0065e4ac);
          if (plVar26 == (long *)0x0) {
            lVar46 = 0;
          }
          else {
            lVar46 = plVar26[1];
          }
          LOCK();
          if (hb_language_get_default::default_language == 0) {
            hb_language_get_default::default_language = lVar46;
          }
          UNLOCK();
        }
        *(long *)(this + 0x40) = lVar46;
      }
      plVar26 = (long *)(local_128 + local_b8 + 8);
                    /* try { // try from 003208a5 to 003208b9 has its CatchHandler @ 00322dba */
      Font::SharedFontInternal::getFontPtr
                (&local_1a8,*plVar26,plVar26,local_b8,(uint *)pauVar34,(ulong)pauVar63);
      local_130 = local_1a8;
      if (local_1a8 == (hb_font_t *)0x0) {
        pauVar27 = (undefined1 (*) [16])0x0;
        pauVar43 = (undefined1 (*) [16])0x0;
        pauVar28 = (undefined1 (*) [16])0x0;
      }
      else {
        lVar57 = *plVar26;
        fVar79 = *(float *)(lVar57 + 0x6c);
        uVar82 = 0;
        fVar73 = (float)((uint)fVar79 & _DAT_005d91c0);
        auVar75 = ZEXT416((uint)fVar73);
        if (fVar73 == DAT_005d94c8) {
          auVar75 = ZEXT416(-(uint)(fVar79 == DAT_005d9058));
          bVar72 = (bool)((byte)-(uint)(fVar79 == DAT_005d9058) & 1);
        }
        else {
          bVar72 = true;
          param_2 = (ulong)(uint)DAT_005d908c;
          if (DAT_005d908c < fVar73) {
            param_2 = (ulong)(uint)(fVar73 * DAT_005d9058);
            bVar72 = fVar73 <= fVar73 * DAT_005d9058;
          }
        }
        puVar32 = *(undefined8 **)(lVar57 + 0x48);
        uVar64 = *(long *)(lVar57 + 0x50) - (long)puVar32;
        if (0x3ffffffffffffff8 < uVar64) {
                    /* try { // try from 00322c9d to 00322ca8 has its CatchHandler @ 00322d4d */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::reserve");
        }
        auVar10 = ZEXT416((uint)fVar79);
        fVar73 = fVar79;
        if (uVar64 == 0) {
          local_278 = (undefined1 (*) [16])0x0;
          pauVar27 = (undefined1 (*) [16])0x0;
          pauVar34 = (undefined1 (*) [16])0x0;
        }
        else {
                    /* try { // try from 00320977 to 0032097b has its CatchHandler @ 00322cfb */
          pauVar27 = operator_new(uVar64 * 2);
          puVar50 = puVar32 + ((long)uVar64 >> 3);
          pauVar34 = pauVar27 + ((long)uVar64 >> 3);
          auVar75 = extraout_XMM0;
          local_278 = pauVar27;
          do {
            uVar74 = *puVar32;
            if (pauVar27 == pauVar34) {
              lVar57 = (long)pauVar27 - (long)local_278;
              if (lVar57 == 0x7ffffffffffffff0) {
                    /* try { // try from 00322c61 to 00322c6c has its CatchHandler @ 00322df6 */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar23 = lVar57 >> 4;
              uVar64 = uVar23;
              if (lVar57 == 0) {
                uVar64 = 1;
              }
              uVar22 = uVar64 + uVar23;
              if (0x7ffffffffffffff < uVar22) {
                uVar22 = 0x7ffffffffffffff;
              }
              if (CARRY8(uVar64,uVar23)) {
                uVar22 = 0x7ffffffffffffff;
              }
                    /* try { // try from 00320a3c to 00320a43 has its CatchHandler @ 00322df4 */
              pauVar28 = operator_new(uVar22 * 0x10);
              *(undefined8 *)pauVar28[uVar23] = uVar74;
              *(undefined8 *)(pauVar28[uVar23] + 8) = 0xffffffff00000000;
              pauVar34 = pauVar28;
              auVar75 = extraout_XMM0_00;
              pauVar43 = local_278;
              if (lVar57 < 1) {
                pauVar27 = pauVar28 + uVar23;
              }
              else {
                for (; pauVar43 != pauVar27; pauVar43 = pauVar43 + 1) {
                  auVar75 = *pauVar43;
                  *pauVar34 = auVar75;
                  pauVar34 = pauVar34 + 1;
                }
                pauVar27 = pauVar34;
              }
              if (local_278 != (undefined1 (*) [16])0x0) {
                operator_delete(local_278);
                auVar75 = extraout_XMM0_01;
              }
              pauVar34 = pauVar28 + uVar22;
              local_278 = pauVar28;
            }
            else {
              *(undefined8 *)*pauVar27 = uVar74;
              *(undefined8 *)(*pauVar27 + 8) = 0xffffffff00000000;
            }
            pauVar27 = pauVar27 + 1;
            puVar32 = puVar32 + 1;
          } while (puVar32 != puVar50);
        }
        uVar74 = auVar75._0_8_;
        if (bVar72 == false) {
          puVar67 = &getHarfbuzzFeatures(juce::Span<juce::FontFeatureSetting_const,18446744073709551615ul>,juce::detail::LigatureEnabledState)
                     ::tagsAffectedByTracking;
          do {
            uVar55 = *puVar67;
            uVar23 = (ulong)uVar55;
            uVar64 = (long)pauVar27 - (long)local_278;
            pauVar43 = local_278;
            if (0 < (long)uVar64) {
              uVar22 = uVar64 >> 4;
              do {
                uVar52 = uVar22 >> 1;
                if (*(uint *)pauVar43[uVar52] < uVar55) {
                  uVar22 = ~uVar52 + uVar22;
                  pauVar43 = pauVar43 + uVar52 + 1;
                }
                else {
                  uVar22 = uVar52;
                }
              } while (0 < (long)uVar22);
            }
            uVar22 = (long)uVar64 >> 4;
            if (pauVar43 == pauVar27) {
              uVar52 = uVar22;
              if (pauVar27 != pauVar34) {
                *(ulong *)*pauVar27 = uVar23;
                *(undefined8 *)(*pauVar27 + 8) = 0xffffffff00000000;
                pauVar27 = pauVar27 + 1;
                goto LAB_003221e1;
              }
joined_r0x0032231a:
              if (uVar64 == 0x7ffffffffffffff0) {
                    /* try { // try from 00322c79 to 00322c84 has its CatchHandler @ 00322dce */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar42 = uVar22;
              if (uVar64 == 0) {
                uVar42 = 1;
              }
              uVar64 = uVar42 + uVar22;
              if (0x7ffffffffffffff < uVar64) {
                uVar64 = 0x7ffffffffffffff;
              }
              if (CARRY8(uVar42,uVar22)) {
                uVar64 = 0x7ffffffffffffff;
              }
                    /* try { // try from 0032236e to 00322375 has its CatchHandler @ 00322dd0 */
              pauVar43 = operator_new(uVar64 * 0x10);
              pauVar34 = local_278 + uVar52;
              *(ulong *)pauVar43[uVar52] = uVar23;
              *(undefined8 *)(pauVar43[uVar52] + 8) = 0xffffffff00000000;
              auVar75 = extraout_XMM0_02;
              if ((long)uVar52 < 1) {
                pauVar28 = pauVar43 + uVar52;
              }
              else {
                uVar23 = uVar52 & 3;
                pauVar28 = pauVar43;
                pauVar45 = local_278;
                if (uVar23 != 0) {
                  do {
                    auVar75 = *pauVar45;
                    *pauVar28 = auVar75;
                    pauVar45 = pauVar45 + 1;
                    pauVar28 = pauVar28 + 1;
                    uVar23 = uVar23 - 1;
                  } while (uVar23 != 0);
                }
                if (2 < (uVar52 + 0xfffffffffffffff & 0xfffffffffffffff)) {
                  do {
                    uVar74 = *(undefined8 *)(*pauVar45 + 8);
                    *(undefined8 *)*pauVar28 = *(undefined8 *)*pauVar45;
                    *(undefined8 *)(*pauVar28 + 8) = uVar74;
                    uVar74 = *(undefined8 *)(pauVar45[1] + 8);
                    *(undefined8 *)pauVar28[1] = *(undefined8 *)pauVar45[1];
                    *(undefined8 *)(pauVar28[1] + 8) = uVar74;
                    uVar74 = *(undefined8 *)(pauVar45[2] + 8);
                    *(undefined8 *)pauVar28[2] = *(undefined8 *)pauVar45[2];
                    *(undefined8 *)(pauVar28[2] + 8) = uVar74;
                    auVar75 = pauVar45[3];
                    pauVar28[3] = auVar75;
                    pauVar28 = pauVar28 + 4;
                    pauVar45 = pauVar45 + 4;
                  } while (pauVar45 != pauVar34);
                }
              }
              pauVar28 = pauVar28 + 1;
              if ((long)pauVar27 - (long)pauVar34 < 1) {
                pauVar28 = (undefined1 (*) [16])((long)pauVar28 + ((long)pauVar27 - (long)pauVar34))
                ;
              }
              else {
                for (; pauVar27 != pauVar34; pauVar34 = pauVar34 + 1) {
                  auVar75 = *pauVar34;
                  *pauVar28 = auVar75;
                  pauVar28 = pauVar28 + 1;
                }
              }
              pauVar27 = pauVar28;
              if (local_278 != (undefined1 (*) [16])0x0) {
                operator_delete(local_278);
                auVar75 = extraout_XMM0_03;
              }
              pauVar34 = pauVar43 + uVar64;
              local_278 = pauVar43;
            }
            else {
              if (uVar55 == *(uint *)*pauVar43) {
                *(ulong *)*pauVar43 = uVar23;
                *(undefined8 *)(*pauVar43 + 8) = 0xffffffff00000000;
              }
              else {
                uVar52 = (long)pauVar43 - (long)local_278 >> 4;
                if (pauVar27 == pauVar34) goto joined_r0x0032231a;
                pauVar28 = local_278 + uVar52;
                pauVar43 = pauVar27 + -1;
                auVar75 = pauVar27[-1];
                *pauVar27 = auVar75;
                if (0 < (long)pauVar43 - (long)pauVar28) {
                  uVar64 = ((ulong)((long)pauVar43 - (long)pauVar28) >> 4) + 1;
                  do {
                    auVar75 = pauVar43[-1];
                    *pauVar43 = auVar75;
                    pauVar43 = pauVar43 + -1;
                    uVar64 = uVar64 - 1;
                  } while (1 < uVar64);
                }
                pauVar27 = pauVar27 + 1;
                (*pauVar28)[0] = (char)uVar55;
                *(uint *)(*pauVar28 + 1) = uVar55 >> 8;
                (*pauVar28)[7] = 0;
                *(undefined2 *)(*pauVar28 + 5) = 0;
                *(undefined8 *)(local_278[uVar52] + 8) = 0xffffffff00000000;
              }
LAB_003221e1:
            }
            uVar74 = auVar75._0_8_;
            puVar67 = puVar67 + 1;
          } while (puVar67 !=
                   (uint *)
                   "St23_Sp_counted_ptr_inplaceISt6vectorIN4juce6detail11ShapedGlyphESaIS3_EESaIvELN9__gnu_cxx12_Lock_policyE2EE"
                  );
        }
        uVar23 = (ulong)((long)pauVar27 - (long)local_278) >> 4;
                    /* try { // try from 00320af7 to 00320b0d has its CatchHandler @ 00322d40 */
        uVar64 = uVar23 & 0xffffffff;
        hb_shape_full(uVar74,param_2,CONCAT44(uVar82,fVar73),param_4,param_5,param_6,param_7,param_8
                      ,local_130,this,local_278,(uint)uVar23);
        local_1b0 = (ulong)*(uint *)(this + 0x60);
        lVar57 = *(long *)(this + 0x70);
        auStack_234._0_4_ = 0.0;
        uVar74 = extraout_RDX;
        if (this[0x5b] == (hb_buffer_t)0x0) {
          if (*(int *)(this + 0xe8) == 0) {
            *(undefined2 *)(this + 0x5a) = 0x100;
            *(undefined4 *)(this + 100) = 0;
            *(long *)(this + 0x78) = lVar57;
            uVar55 = *(uint *)(this + 0x60) * 0x14;
            if (uVar55 != 0) {
              memset(*(void **)(this + 0x80),0,(ulong)uVar55);
              uVar74 = extraout_RDX_00;
            }
            goto LAB_00320b86;
          }
          local_110 = 0;
        }
        else {
LAB_00320b86:
          local_110 = *(long *)(this + 0x80);
        }
        local_204 = 0.0;
        if (bVar72 == false) {
          this_00 = (SharedFontInternal *)*plVar26;
          fVar73 = *(float *)(this_00 + 100);
          if (fVar73 <= DAT_005d9058) {
            fVar73 = *(float *)(this_00 + 0x68);
                    /* try { // try from 00320bd1 to 00320bd8 has its CatchHandler @ 00322cf3 */
            uVar74 = Font::SharedFontInternal::getAscentDescent
                               (this_00,plVar26,uVar74,uVar64,(uint *)pauVar34,(ulong)pauVar63);
            fVar73 = fVar73 * ((float)((ulong)uVar74 >> 0x20) + (float)uVar74);
            this_00 = (SharedFontInternal *)*plVar26;
          }
          fVar79 = fVar79 * fVar73 * *(float *)(this_00 + 0x70);
          local_204 = fVar79;
        }
        if (local_1b0 == 0) {
          pauVar28 = (undefined1 (*) [16])0x0;
          pauVar43 = (undefined1 (*) [16])0x0;
          pauVar27 = (undefined1 (*) [16])0x0;
          fVar73 = (float)auStack_234._0_4_;
        }
        else {
          bVar72 = (bVar5 & 1) != 0;
          local_60 = uVar60;
          if (bVar72) {
            local_60 = uVar56;
          }
          local_50 = (ulong)((byte)~bVar5 & 1) * 2 + -1;
          local_58 = uVar56;
          if (bVar72) {
            local_58 = uVar60;
          }
          bVar72 = true;
          uVar64 = 0;
          pauVar28 = (undefined1 (*) [16])0x0;
          pauVar43 = (undefined1 (*) [16])0x0;
          pauVar27 = (undefined1 (*) [16])0x0;
          _local_238 = auVar10;
          do {
            local_148 = (undefined1 *)(uVar64 * 0x14);
            uVar55 = *(uint *)(local_148 + lVar57);
            local_1c8 = ZEXT416((uint)((float)*(int *)(local_148 + local_110) * DAT_005de560));
            local_158 = ZEXT416((uint)((float)*(int *)(local_148 + local_110 + 4) * _DAT_005de564));
            lVar46 = *plVar26;
            lVar47 = local_110;
            local_108 = uVar64;
            pthread_mutex_lock((pthread_mutex_t *)(lVar46 + 0x80));
            plVar31 = *(long **)(lVar46 + 0x10);
            if (plVar31 == (long *)0x0) {
              plVar31 = *(long **)(lVar46 + 0x28);
              if (plVar31 == (long *)0x0) {
                    /* try { // try from 00320d46 to 00320d62 has its CatchHandler @ 00322dd2 */
                lVar66 = SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get();
                TypefaceCache::findTypefaceFor
                          ((long *)&local_1a8,lVar66,plVar26,lVar47,(uint *)pauVar34,(ulong)pauVar63
                          );
              }
              else {
                LOCK();
                *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
                UNLOCK();
                local_1a8 = *(hb_font_t **)(lVar46 + 0x28);
                if (local_1a8 != (hb_font_t *)0x0) {
                  LOCK();
                  *(int *)(local_1a8 + 8) = *(int *)(local_1a8 + 8) + 1;
                  UNLOCK();
                }
              }
              phVar29 = *(hb_font_t **)(lVar46 + 0x10);
              *(hb_font_t **)(lVar46 + 0x10) = local_1a8;
              local_1a8 = phVar29;
              if (phVar29 != (hb_font_t *)0x0) {
                LOCK();
                phVar1 = phVar29 + 8;
                *(int *)phVar1 = *(int *)phVar1 + -1;
                UNLOCK();
                if (*(int *)phVar1 == 0) {
                  (**(code **)(*(long *)phVar29 + 8))();
                }
              }
              if (plVar31 != (long *)0x0) {
                LOCK();
                plVar58 = plVar31 + 1;
                *(int *)plVar58 = (int)*plVar58 + -1;
                UNLOCK();
                if ((int)*plVar58 == 0) {
                  (**(code **)(*plVar31 + 8))(plVar31);
                }
              }
              plVar31 = *(long **)(lVar46 + 0x10);
              if (plVar31 != (long *)0x0) goto LAB_00320db0;
              plVar31 = (long *)0x0;
            }
            else {
LAB_00320db0:
              LOCK();
              *(int *)(plVar31 + 1) = (int)plVar31[1] + 1;
              UNLOCK();
            }
            pthread_mutex_unlock((pthread_mutex_t *)(lVar46 + 0x80));
                    /* try { // try from 00320dc1 to 00320dc6 has its CatchHandler @ 00322e65 */
            phVar29 = (hb_font_t *)(**(code **)(*plVar31 + 0x18))(plVar31);
            LOCK();
            plVar58 = plVar31 + 1;
            *(int *)plVar58 = (int)*plVar58 + -1;
            UNLOCK();
            if ((int)*plVar58 == 0) {
              (**(code **)(*plVar31 + 8))(plVar31);
            }
                    /* try { // try from 00320dea to 00320dfa has its CatchHandler @ 00322e60 */
            local_1a8 = phVar29;
            p_Var30 = LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::
                      get<juce::Typeface::Native::getGlyphExtents(unsigned_int)const::_lambda(auto:1)_1_>
                                ((LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul> *)
                                 (phVar29 + 0x78),uVar55,&local_1a8);
            if (p_Var30[0x10] == (_Rb_tree_node_base)0x0) {
              bVar17 = false;
            }
            else {
              _local_238 = pauVar27;
                    /* try { // try from 00320e23 to 00320e32 has its CatchHandler @ 00322e5e */
              Font::SharedFontInternal::getTypefacePtr
                        ((SharedFontInternal *)&local_1e8,*plVar26,plVar26,lVar47,(uint *)pauVar34,
                         (ulong)pauVar63);
              p_Var3 = local_1e8;
              iVar20 = *(int *)(*plVar26 + 0x60);
                    /* try { // try from 00320e46 to 00320ea5 has its CatchHandler @ 00322e85 */
              local_1a8 = (hb_font_t *)(**(code **)(*(long *)local_1e8 + 0x18))(local_1e8);
              p_Var30 = LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::
                        get<juce::Typeface::Native::getGlyphExtents(unsigned_int)const::_lambda(auto:1)_1_>
                                  ((LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul> *
                                   )(local_1a8 + 0x78),uVar55,&local_1a8);
              if (p_Var30[0x10] == (_Rb_tree_node_base)0x0) {
                fVar79 = 0.0;
                fVar73 = 0.0;
              }
              else {
                iVar21 = *(int *)p_Var30;
                local_fc = *(int *)(p_Var30 + 4);
                local_100 = *(int *)(p_Var30 + 8);
                iVar7 = *(int *)(p_Var30 + 0xc);
                plVar31 = (long *)(**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
                lVar46 = *plVar31;
                lVar47 = (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
                if (iVar20 == 1) {
                  puVar32 = (undefined8 *)(lVar47 + 0x10);
LAB_00320ef7:
                  uVar74 = *puVar32;
                }
                else {
                  uVar74 = 0;
                  if (iVar20 == 0) {
                    puVar32 = (undefined8 *)(lVar47 + 8);
                    goto LAB_00320ef7;
                  }
                }
                lVar46 = *(long *)(lVar46 + 0x20);
                uVar59 = *(uint *)(lVar46 + 0x14);
                if (uVar59 == 0) {
                  uStack_40 = 0;
                  local_48 = uVar74;
                    /* try { // try from 00321598 to 0032159c has its CatchHandler @ 00322e85 */
                  puVar37 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                            ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                                   *)(lVar46 + 0x70));
                  uVar19 = *(ushort *)((long)puVar37 + 0x12) << 8 |
                           *(ushort *)((long)puVar37 + 0x12) >> 8;
                  uVar59 = (uint)uVar19;
                  if (0x3ff0 < uVar19 - 0x10) {
                    uVar59 = 1000;
                  }
                  *(uint *)(lVar46 + 0x14) = uVar59;
                  uVar74 = local_48;
                }
                fVar79 = (DAT_005d9038 / ((float)((ulong)uVar74 >> 0x20) + (float)uVar74)) /
                         (float)uVar59;
                fVar83 = (float)iVar21;
                fVar85 = (float)local_fc;
                fVar87 = (float)((uint)fVar79 ^ _DAT_006524b0) * fVar85;
                fVar88 = (float)((uint)fVar79 ^ _UNK_006524b4) * ((float)iVar7 + fVar85);
                fVar89 = ((float)iVar7 + fVar85) * 0.0;
                fVar86 = fVar79 * fVar83 + fVar85 * 0.0 + 0.0;
                fVar81 = fVar88 + fVar83 * DAT_00652e14;
                fVar84 = fVar83 * DAT_00652e14 + fVar87;
                fVar73 = fVar89 + fVar79 * fVar83 + 0.0;
                fVar79 = fVar79 * ((float)local_100 + fVar83);
                fVar85 = fVar79 + fVar85 * 0.0 + 0.0;
                fVar79 = fVar79 + fVar89 + 0.0;
                fVar83 = ((float)local_100 + fVar83) * DAT_00652e14;
                fVar87 = fVar83 + fVar87;
                auVar75._4_4_ = fVar83 + fVar88;
                fVar83 = fVar73;
                if (fVar85 <= fVar73) {
                  fVar83 = fVar85;
                }
                param_7 = CONCAT44(fVar89,fVar83);
                if (fVar73 <= fVar85) {
                  fVar73 = fVar85;
                }
                fVar85 = fVar79;
                if (fVar83 <= fVar79) {
                  fVar85 = fVar83;
                }
                if (fVar86 <= fVar85) {
                  fVar85 = fVar86;
                }
                param_8 = CONCAT44(fVar79,fVar85);
                if (fVar79 <= fVar73) {
                  fVar79 = fVar73;
                }
                if (fVar79 <= fVar86) {
                  fVar79 = fVar86;
                }
                fVar83 = fVar81;
                if (fVar87 <= fVar81) {
                  fVar83 = fVar87;
                }
                if (fVar81 <= fVar87) {
                  fVar81 = fVar87;
                }
                auVar75._0_4_ = auVar75._4_4_;
                auVar75._8_4_ = auVar75._4_4_;
                auVar75._12_4_ = auVar75._4_4_;
                fVar73 = auVar75._4_4_;
                if (fVar83 <= auVar75._4_4_) {
                  fVar73 = fVar83;
                }
                if (fVar84 <= fVar73) {
                  fVar73 = fVar84;
                }
                param_6 = CONCAT44(auVar75._4_4_,fVar73);
                if (auVar75._4_4_ <= fVar81) {
                  auVar75._0_4_ = fVar81;
                }
                if (auVar75._0_4_ <= fVar84) {
                  auVar75._0_4_ = fVar84;
                }
                fVar79 = fVar79 - fVar85;
                fVar73 = auVar75._0_4_ - fVar73;
              }
              bVar17 = 0.0 < (float)local_1c8._0_4_;
              LOCK();
              p_Var2 = p_Var3 + 8;
              *(int *)p_Var2 = *(int *)p_Var2 + -1;
              UNLOCK();
              if (*(int *)p_Var2 == 0) {
                (**(code **)(*(long *)p_Var3 + 8))(p_Var3);
              }
              bVar17 = (fVar73 <= 0.0 || fVar79 <= 0.0) && bVar17;
            }
            fVar81 = DAT_005d9038;
            uVar23 = *(uint *)(lVar57 + 8 + local_108 * 0x14) + uVar56;
            puVar33 = (ulong *)param_10[3];
            uVar64 = param_10[4] - (long)puVar33;
            if (0 < (long)uVar64) {
              uVar64 = uVar64 >> 3;
              do {
                uVar22 = uVar64 >> 1;
                if (puVar33[uVar22] < uVar23) {
                  uVar64 = ~uVar22 + uVar64;
                  puVar33 = puVar33 + uVar22 + 1;
                }
                else {
                  uVar64 = uVar22;
                }
              } while (0 < (long)uVar64);
            }
            if (puVar33 == (ulong *)param_10[4]) {
              auVar10._12_4_ = 0;
              auVar10._0_12_ = auStack_234;
              _local_238 = auVar10 << 0x20;
            }
            else {
              local_238._1_3_ = 0;
              local_238[0] = *puVar33 <= uVar23;
            }
            lVar46 = local_108 + local_50;
            uVar64 = local_58;
            if ((-1 < lVar46) && (uVar64 = local_60, lVar46 < (long)local_1b0)) {
              uVar64 = *(uint *)(lVar57 + 8 + lVar46 * 0x14) + uVar56;
            }
            pauVar63 = (undefined1 (*) [16])-(long)(uVar64 - uVar23);
            if ((long)pauVar63 < 0) {
              pauVar63 = (undefined1 (*) [16])(uVar64 - uVar23);
            }
            if (pauVar63 == (undefined1 (*) [16])0x0) {
              pauVar63 = (undefined1 (*) [16])0x1;
            }
            fVar79 = local_204;
            if (local_210 == uVar23) {
              fVar79 = 0.0;
            }
            fVar73 = local_204;
            if (!bVar72) {
              fVar73 = fVar79;
            }
            uVar82 = 0;
            puVar62 = pauVar63[-1] + 0xf;
            fVar79 = DAT_005d9038;
            if (puVar62 != (undefined1 *)0x0) {
              fVar79 = DAT_005d9038 / (float)(long)pauVar63;
            }
            puVar51 = (undefined1 *)0x0;
            if ((bVar5 & 1) != 0) {
              puVar51 = puVar62;
            }
            puVar51 = puVar51 + uVar23;
            param_5 = CONCAT44((float)local_158._0_4_ * fVar79,
                               (float)local_1c8._0_4_ * fVar79 + fVar73);
            bVar6 = local_148[lVar57 + 4];
            cVar65 = -(char)puVar62;
            if (puVar62 == (undefined1 *)0x0) {
              cVar65 = '\0';
            }
            fVar79 = (float)(int)*(undefined8 *)(local_148 + local_110 + 8) * _DAT_005dd360;
            fVar73 = (float)(int)((ulong)*(undefined8 *)(local_148 + local_110 + 8) >> 0x20) *
                     _UNK_005dd364;
            local_1c8._8_4_ = local_1c8._4_4_;
            local_1c8._0_8_ = param_5;
            local_1c8._12_4_ = local_158._4_4_;
            local_158._0_8_ = puVar62;
            uVar18 = local_238[0];
            if (pauVar43 == pauVar27) {
              local_148 = (undefined1 *)CONCAT44(fVar73,fVar79);
              lVar46 = (long)pauVar43 - (long)pauVar28;
              fStack_140 = _UNK_005dd368 * 0.0;
              fStack_13c = _UNK_005dd36c * 0.0;
              if (lVar46 == 0x7fffffffffffffe0) {
                    /* try { // try from 00322c6d to 00322c78 has its CatchHandler @ 00322de4 */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar22 = lVar46 >> 5;
              uVar64 = uVar22;
              if (lVar46 == 0) {
                uVar64 = 1;
              }
              uVar52 = uVar64 + uVar22;
              if (0x3ffffffffffffff < uVar52) {
                uVar52 = 0x3ffffffffffffff;
              }
              if (CARRY8(uVar64,uVar22)) {
                uVar52 = 0x3ffffffffffffff;
              }
                    /* try { // try from 003212e1 to 003212eb has its CatchHandler @ 00322dec */
              pauVar34 = operator_new(uVar52 * 0x20);
              auVar77._8_8_ = local_148;
              auVar77._0_8_ = local_1c8._0_8_;
              pauVar34[uVar22 * 2] = auVar77;
              *(undefined1 **)pauVar34[uVar22 * 2 + 1] = puVar51;
              *(uint *)(pauVar34[uVar22 * 2 + 1] + 8) = uVar55;
              pauVar34[uVar22 * 2 + 1][0xc] = bVar6 & 1;
              pauVar34[uVar22 * 2 + 1][0xd] = bVar17;
              pauVar34[uVar22 * 2 + 1][0xe] = uVar18;
              pauVar34[uVar22 * 2 + 1][0xf] = cVar65;
              pauVar45 = pauVar34;
              if (pauVar28 != pauVar43) {
                pauVar35 = pauVar28;
                do {
                  auVar75 = *pauVar35;
                  fVar79 = *(float *)pauVar35[1];
                  fVar73 = *(float *)(pauVar35[1] + 4);
                  uVar80 = *(undefined4 *)(pauVar35[1] + 8);
                  uVar11 = *(undefined4 *)(pauVar35[1] + 0xc);
                  *(float *)pauVar45[1] = fVar79;
                  *(float *)(pauVar45[1] + 4) = fVar73;
                  *(undefined4 *)(pauVar45[1] + 8) = uVar80;
                  *(undefined4 *)(pauVar45[1] + 0xc) = uVar11;
                  *pauVar45 = auVar75;
                  pauVar35 = pauVar35 + 2;
                  pauVar45 = pauVar45 + 2;
                } while (pauVar35 != pauVar43);
              }
              if (pauVar28 != (undefined1 (*) [16])0x0) {
                operator_delete(pauVar28);
              }
              pauVar35 = pauVar34 + uVar52 * 2;
              pauVar28 = pauVar34;
              puVar62 = (undefined1 *)local_158._0_8_;
              pauVar34 = pauVar27;
              param_5 = local_1c8._0_8_;
            }
            else {
              auVar76._12_4_ = fVar73;
              auVar76._8_4_ = fVar79;
              auVar76._0_8_ = param_5;
              *pauVar43 = auVar76;
              *(undefined1 **)pauVar43[1] = puVar51;
              *(uint *)(pauVar43[1] + 8) = uVar55;
              pauVar43[1][0xc] = bVar6 & 1;
              pauVar43[1][0xd] = bVar17;
              pauVar43[1][0xe] = uVar18;
              pauVar43[1][0xf] = cVar65;
              pauVar35 = pauVar27;
              pauVar45 = pauVar43;
              pauVar34 = pauVar27;
            }
            pauVar27 = pauVar35;
            pauVar43 = pauVar45 + 2;
            if (1 < (long)pauVar63) {
              puVar36 = (undefined1 *)0x0;
              pauVar35 = pauVar28;
              pauVar68 = pauVar43;
              do {
                while( true ) {
                  puVar61 = puVar36 + 1;
                  puVar36 = (undefined1 *)(ulong)~(uint)puVar36;
                  if ((bVar5 & 1) == 0) {
                    puVar36 = puVar61;
                  }
                  if (pauVar68 != pauVar27) break;
                  lVar46 = (long)pauVar68 - (long)pauVar35;
                  if (lVar46 == 0x7fffffffffffffe0) {
                    /* try { // try from 00322c4b to 00322c60 has its CatchHandler @ 00322eab */
                    /* WARNING: Subroutine does not return */
                    std::__throw_length_error("vector::_M_realloc_insert");
                  }
                  uVar22 = lVar46 >> 5;
                  uVar64 = uVar22;
                  if (lVar46 == 0) {
                    uVar64 = 1;
                  }
                  uVar52 = uVar64 + uVar22;
                  if (0x3ffffffffffffff < uVar52) {
                    uVar52 = 0x3ffffffffffffff;
                  }
                  if (CARRY8(uVar64,uVar22)) {
                    uVar52 = 0x3ffffffffffffff;
                  }
                  local_148 = puVar61;
                    /* try { // try from 0032148a to 00321491 has its CatchHandler @ 00322e9c */
                  pauVar28 = operator_new(uVar52 * 0x20);
                  auVar78._8_8_ = 0;
                  auVar78._0_8_ = local_1c8._0_8_;
                  pauVar28[uVar22 * 2] = auVar78;
                  *(undefined1 **)pauVar28[uVar22 * 2 + 1] = puVar51 + (int)puVar36;
                  *(uint *)(pauVar28[uVar22 * 2 + 1] + 8) = uVar55;
                  pauVar28[uVar22 * 2 + 1][0xc] = 1;
                  pauVar28[uVar22 * 2 + 1][0xd] = bVar17;
                  pauVar28[uVar22 * 2 + 1][0xe] = uVar18;
                  pauVar28[uVar22 * 2 + 1][0xf] = (char)local_148;
                  pauVar69 = pauVar28;
                  if (pauVar35 != pauVar68) {
                    pauVar27 = pauVar35 + -2;
                    do {
                      auVar75 = pauVar27[2];
                      fVar79 = *(float *)pauVar27[3];
                      fVar73 = *(float *)(pauVar27[3] + 4);
                      uVar80 = *(undefined4 *)(pauVar27[3] + 8);
                      uVar11 = *(undefined4 *)(pauVar27[3] + 0xc);
                      pauVar27 = pauVar27 + 2;
                      *(float *)pauVar69[1] = fVar79;
                      *(float *)(pauVar69[1] + 4) = fVar73;
                      *(undefined4 *)(pauVar69[1] + 8) = uVar80;
                      *(undefined4 *)(pauVar69[1] + 0xc) = uVar11;
                      *pauVar69 = auVar75;
                      pauVar69 = pauVar69 + 2;
                    } while (pauVar27 != pauVar45);
                  }
                  param_5 = local_1c8._0_8_;
                  if (pauVar35 != (undefined1 (*) [16])0x0) {
                    operator_delete(pauVar35);
                    param_5 = local_1c8._0_8_;
                  }
                  pauVar27 = pauVar28 + uVar52 * 2;
                  pauVar43 = pauVar69 + 2;
                  pauVar45 = pauVar69;
                  puVar36 = local_148;
                  puVar62 = (undefined1 *)local_158._0_8_;
                  pauVar35 = pauVar28;
                  pauVar68 = pauVar43;
                  if (local_148 == (undefined1 *)local_158._0_8_) goto LAB_00320c70;
                }
                *(ulong *)*pauVar68 = param_5;
                *(undefined8 *)(pauVar45[2] + 8) = 0;
                *(undefined1 **)pauVar45[3] = puVar51 + (int)puVar36;
                *(uint *)(pauVar45[3] + 8) = uVar55;
                pauVar45[3][0xc] = 1;
                pauVar45[3][0xd] = bVar17;
                pauVar45[3][0xe] = uVar18;
                pauVar45[3][0xf] = (char)puVar61;
                pauVar43 = pauVar68 + 2;
                pauVar45 = pauVar68;
                puVar36 = puVar61;
                pauVar28 = pauVar35;
                pauVar68 = pauVar43;
              } while (puVar61 != puVar62);
            }
LAB_00320c70:
            param_4 = CONCAT44(uVar82,fVar81);
            uVar74 = CONCAT44(uVar82,fVar81);
            uVar64 = local_108 + 1;
            bVar72 = false;
            local_210 = uVar23;
          } while (uVar64 != local_1b0);
          if ((bVar5 & 1) != 0) {
            param_4 = uVar74;
            if (pauVar28 != pauVar43) {
              pauVar45 = pauVar43 + -2;
              pauVar35 = pauVar28;
              if (pauVar28 < pauVar45) {
                do {
                  pauVar68 = pauVar35 + 2;
                  local_1a8 = *(hb_font_t **)*pauVar35;
                  lStack_1a0 = *(long *)(*pauVar35 + 8);
                  p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)pauVar35[1];
                  uVar74 = *(undefined8 *)(pauVar35[1] + 8);
                  uVar12 = *(undefined8 *)*pauVar45;
                  uVar13 = *(undefined8 *)(*pauVar45 + 8);
                  uVar14 = *(undefined8 *)(pauVar45[1] + 8);
                  *(undefined8 *)pauVar35[1] = *(undefined8 *)pauVar45[1];
                  *(undefined8 *)(pauVar35[1] + 8) = uVar14;
                  *(undefined8 *)*pauVar35 = uVar12;
                  *(undefined8 *)(*pauVar35 + 8) = uVar13;
                  local_198._0_4_ = SUB84(p_Var3,0);
                  local_198._4_4_ = (float)((ulong)p_Var3 >> 0x20);
                  uStack_190._0_4_ = (undefined4)uVar74;
                  uStack_190._4_4_ = (undefined4)((ulong)uVar74 >> 0x20);
                  *(float *)pauVar45[1] = (float)local_198;
                  *(float *)(pauVar45[1] + 4) = local_198._4_4_;
                  *(undefined4 *)(pauVar45[1] + 8) = (undefined4)uStack_190;
                  *(undefined4 *)(pauVar45[1] + 0xc) = uStack_190._4_4_;
                  *(hb_font_t **)*pauVar45 = local_1a8;
                  *(long *)(*pauVar45 + 8) = lStack_1a0;
                  pauVar45 = pauVar45 + -2;
                  pauVar35 = pauVar68;
                  fVar79 = (float)local_198;
                  fVar73 = local_198._4_4_;
                  local_198 = p_Var3;
                  uStack_190 = (undefined1 *)uVar74;
                } while (pauVar68 < pauVar45);
              }
            }
          }
        }
        if (local_278 != (undefined1 (*) [16])0x0) {
          operator_delete(local_278);
        }
                    /* try { // try from 0032164f to 0032165b has its CatchHandler @ 00322d38 */
        hb_font_destroy((int *)local_130);
        param_2 = CONCAT44(fVar73,fVar79);
      }
                    /* try { // try from 0032165c to 00321665 has its CatchHandler @ 00322db2 */
      hb_buffer_destroy((int *)this);
                    /* try { // try from 00321666 to 0032166f has its CatchHandler @ 00322d6f */
      local_d8._8_8_ = operator_new(0x28);
      *(undefined8 *)(local_d8._8_8_ + 8) = 0x100000001;
      *(undefined ***)local_d8._8_8_ = &PTR___Sp_counted_base_00712090;
      local_d8._0_8_ = local_d8._8_8_ + 0x10;
      *(undefined1 (**) [16])(local_d8._8_8_ + 0x10) = pauVar28;
      *(undefined1 (**) [16])(local_d8._8_8_ + 0x18) = pauVar43;
      *(undefined1 (**) [16])(local_d8._8_8_ + 0x20) = pauVar27;
      local_c8 = ~*(byte *)(local_128 + local_b8 + 4) & 1;
      local_c0 = (long *)*plVar26;
      if (local_c0 != (long *)0x0) {
        LOCK();
        *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
        UNLOCK();
      }
      lVar57 = (long)plStack_f0 - (long)local_f8;
                    /* try { // try from 003216fc to 0032171b has its CatchHandler @ 00322daa */
      Ranges::set(local_70,uVar56,uVar60,&local_f8);
      if ((long)plStack_f0 - (long)local_f8 == 0) {
        lVar57 = 0;
        plVar26 = local_f8;
      }
      else {
        lVar57 = lVar57 >> 4;
        uVar56 = ((long)plStack_f0 - (long)local_f8 >> 4) * -0x5555555555555555;
        plVar26 = local_f8 + lVar57 * 2;
        bVar72 = uVar56 < (ulong)(lVar57 * -0x5555555555555555);
        lVar57 = uVar56 + lVar57 * 0x5555555555555555;
        bVar17 = lVar57 == 0;
        if (bVar72 || bVar17) {
          plVar26 = (long *)0x0;
        }
        if (bVar72) {
          lVar57 = 0;
        }
        if (bVar72 || bVar17) {
          lVar57 = 0;
        }
      }
      local_90 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._0_8_;
      local_88 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_;
      local_d8 = (undefined1  [16])0x0;
      local_80 = local_c8;
      local_78 = local_c0;
      local_c0 = (long *)0x0;
      param_11 = local_118;
      if (lVar57 != 0) {
        plVar31 = plVar26 + lVar57 * 6;
        do {
          if (local_88 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
              UNLOCK();
            }
            else {
              *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
            }
          }
          local_1d8 = local_80;
          local_1d0 = local_78;
          if (local_78 != (long *)0x0) {
            LOCK();
            *(int *)(local_78 + 1) = (int)local_78[1] + 1;
            UNLOCK();
          }
          cVar65 = (char)plVar26[5];
          local_1e8 = local_90;
          local_1e0 = local_88;
          if (cVar65 == '\x02') {
            if (*plVar26 != plVar26[1]) {
              lVar46 = param_10[0x15];
              lVar66 = *plVar26 * 0x20;
              lVar47 = plVar26[1] * 0x20;
              lVar57 = lVar46 + lVar47;
              uVar56 = param_10[0x16] - lVar57;
              if (uVar56 == 0) {
                lVar47 = lVar57;
              }
              else if ((long)uVar56 < 1) {
                lVar47 = param_10[0x16];
              }
              else {
                lVar71 = (uVar56 >> 5) + 1;
                lVar70 = lVar46 + 0x18;
                do {
                  puVar32 = (undefined8 *)(lVar70 + -0x18 + lVar47);
                  uVar74 = *puVar32;
                  uVar12 = puVar32[1];
                  uVar82 = 0;
                  uVar80 = 0;
                  puVar32 = (undefined8 *)(lVar70 + -0x18 + lVar47);
                  *puVar32 = 0;
                  puVar32[1] = 0;
                  p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)
                            (lVar70 + -0x10 + lVar66);
                  puVar32 = (undefined8 *)(lVar70 + -0x18 + lVar66);
                  *puVar32 = uVar74;
                  puVar32[1] = uVar12;
                  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                    if (*(long *)(p_Var3 + 8) == 0x100000001) {
                      *(undefined8 *)(p_Var3 + 8) = 0;
                      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
                      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
                    }
                    else {
                      if (*PTR___libc_single_threaded_00715c50 == '\0') {
                        LOCK();
                        p_Var2 = p_Var3 + 8;
                        iVar20 = *(int *)p_Var2;
                        *(int *)p_Var2 = *(int *)p_Var2 + -1;
                        UNLOCK();
                      }
                      else {
                        iVar20 = (int)*(long *)(p_Var3 + 8);
                        *(int *)(p_Var3 + 8) = iVar20 + -1;
                      }
                      if (iVar20 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                                  (p_Var3);
                      }
                    }
                  }
                  *(undefined1 *)(lVar70 + -8 + lVar66) = *(undefined1 *)(lVar70 + -8 + lVar47);
                  uVar74 = *(undefined8 *)(lVar70 + lVar47);
                  *(undefined8 *)(lVar70 + lVar47) = 0;
                  plVar58 = *(long **)(lVar70 + lVar66);
                  *(undefined8 *)(lVar70 + lVar66) = uVar74;
                  if (plVar58 != (long *)0x0) {
                    LOCK();
                    plVar8 = plVar58 + 1;
                    *(int *)plVar8 = (int)*plVar8 + -1;
                    UNLOCK();
                    if ((int)*plVar8 == 0) {
                      (**(code **)(*plVar58 + 8))();
                    }
                  }
                  param_2 = CONCAT44(uVar80,uVar82);
                  lVar71 = lVar71 + -1;
                  lVar70 = lVar70 + 0x20;
                } while (1 < lVar71);
                lVar47 = param_10[0x16];
              }
              lVar57 = lVar46 + lVar66 + (lVar47 - lVar57);
              if (lVar47 != lVar57) {
                lVar46 = lVar57;
                do {
                  plVar58 = *(long **)(lVar46 + 0x18);
                  if (plVar58 != (long *)0x0) {
                    LOCK();
                    plVar8 = plVar58 + 1;
                    *(int *)plVar8 = (int)*plVar8 + -1;
                    UNLOCK();
                    if ((int)*plVar8 == 0) {
                      (**(code **)(*plVar58 + 8))();
                    }
                  }
                  p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar46 + 8);
                  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                    if (*(long *)(p_Var3 + 8) == 0x100000001) {
                      *(undefined8 *)(p_Var3 + 8) = 0;
                      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
                      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
                    }
                    else {
                      if (*PTR___libc_single_threaded_00715c50 == '\0') {
                        LOCK();
                        p_Var2 = p_Var3 + 8;
                        iVar20 = *(int *)p_Var2;
                        *(int *)p_Var2 = *(int *)p_Var2 + -1;
                        UNLOCK();
                      }
                      else {
                        iVar20 = (int)*(long *)(p_Var3 + 8);
                        *(int *)(p_Var3 + 8) = iVar20 + -1;
                      }
                      if (iVar20 == 1) {
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                                  (p_Var3);
                      }
                    }
                  }
                  lVar46 = lVar46 + 0x20;
                } while (lVar46 != lVar47);
                param_10[0x16] = lVar57;
              }
            }
            goto LAB_00322000;
          }
          if (cVar65 == '\x01') {
            plVar8 = (long *)param_10[0x15];
            plVar9 = (long *)param_10[0x16];
            lVar57 = *plVar26;
            plVar58 = plVar8 + lVar57 * 4;
            if (plVar9 == (long *)param_10[0x17]) {
              lVar46 = (long)plVar9 - (long)plVar8;
              if (lVar46 == 0x7fffffffffffffe0) {
                    /* try { // try from 00322c85 to 00322c9c has its CatchHandler @ 00322de2 */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar64 = lVar46 >> 5;
              uVar56 = uVar64;
              if (lVar46 == 0) {
                uVar56 = 1;
              }
              uVar60 = uVar56 + uVar64;
              if (0x3ffffffffffffff < uVar60) {
                uVar60 = 0x3ffffffffffffff;
              }
              if (CARRY8(uVar56,uVar64)) {
                uVar60 = 0x3ffffffffffffff;
              }
                    /* try { // try from 00321afb to 00321b95 has its CatchHandler @ 00322e1e */
              plVar38 = operator_new(uVar60 * 0x20);
              plVar38[lVar57 * 4] = *plVar58;
              lVar46 = plVar8[lVar57 * 4 + 1];
              plVar38[lVar57 * 4 + 1] = lVar46;
              if (lVar46 != 0) {
                if (*PTR___libc_single_threaded_00715c50 == '\0') {
                  LOCK();
                  *(int *)(lVar46 + 8) = *(int *)(lVar46 + 8) + 1;
                  UNLOCK();
                }
                else {
                  *(int *)(lVar46 + 8) = *(int *)(lVar46 + 8) + 1;
                }
              }
              *(char *)(plVar38 + lVar57 * 4 + 2) = (char)plVar8[lVar57 * 4 + 2];
              lVar46 = plVar8[lVar57 * 4 + 3];
              plVar38[lVar57 * 4 + 3] = lVar46;
              if (lVar46 != 0) {
                LOCK();
                *(int *)(lVar46 + 8) = *(int *)(lVar46 + 8) + 1;
                UNLOCK();
              }
              plVar54 = plVar38;
              if (lVar57 == 0) goto joined_r0x003220f2;
              plVar41 = plVar8;
              plVar16 = plVar38;
              do {
                plVar54 = plVar16;
                *plVar54 = *plVar41;
                lVar57 = plVar41[1];
                plVar41[1] = 0;
                plVar54[1] = lVar57;
                *plVar41 = 0;
                *(char *)(plVar54 + 2) = (char)plVar41[2];
                plVar54[3] = plVar41[3];
                plVar41[3] = 0;
                plVar41 = plVar41 + 4;
                plVar16 = plVar54 + 4;
              } while (plVar41 != plVar58);
              plVar54 = plVar54 + 8;
              while (plVar9 != plVar58) {
                *plVar54 = *plVar58;
                lVar57 = plVar58[1];
                plVar58[1] = 0;
                plVar54[1] = lVar57;
                *plVar58 = 0;
                *(char *)(plVar54 + 2) = (char)plVar58[2];
                plVar54[3] = plVar58[3];
                plVar58[3] = 0;
                plVar58 = plVar58 + 4;
joined_r0x003220f2:
                plVar54 = plVar54 + 4;
              }
              if (plVar8 != (long *)0x0) {
                operator_delete(plVar8);
              }
              param_10[0x15] = (long)plVar38;
              param_10[0x16] = (long)plVar54;
              param_10[0x17] = (long)(plVar38 + uVar60 * 4);
            }
            else if (plVar9 == plVar58) {
              lVar46 = plVar8[lVar57 * 4 + 1];
              if (lVar46 == 0) {
LAB_00321cd8:
                lVar57 = plVar8[lVar57 * 4 + 3];
              }
              else {
                if (*PTR___libc_single_threaded_00715c50 != '\0') {
                  *(int *)(lVar46 + 8) = *(int *)(lVar46 + 8) + 1;
                  goto LAB_00321cd8;
                }
                LOCK();
                *(int *)(lVar46 + 8) = *(int *)(lVar46 + 8) + 1;
                UNLOCK();
                lVar57 = plVar8[lVar57 * 4 + 3];
              }
              if (lVar57 != 0) {
                LOCK();
                *(int *)(lVar57 + 8) = *(int *)(lVar57 + 8) + 1;
                UNLOCK();
              }
              param_10[0x16] = param_10[0x16] + 0x20;
            }
            else {
              local_1a8 = (hb_font_t *)local_120;
              lStack_1a0 = *plVar58;
              local_198 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)plVar8[lVar57 * 4 + 1];
              if (local_198 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                if (*PTR___libc_single_threaded_00715c50 == '\0') {
                  LOCK();
                  *(int *)(local_198 + 8) = *(int *)(local_198 + 8) + 1;
                  UNLOCK();
                }
                else {
                  *(int *)(local_198 + 8) = *(int *)(local_198 + 8) + 1;
                }
              }
              uStack_190 = (undefined1 *)CONCAT71(uStack_190._1_7_,(char)plVar8[lVar57 * 4 + 2]);
              local_188 = (long *)plVar8[lVar57 * 4 + 3];
              if (local_188 != (long *)0x0) {
                LOCK();
                *(int *)(local_188 + 1) = (int)local_188[1] + 1;
                UNLOCK();
              }
                    /* try { // try from 00321e6b to 00321e82 has its CatchHandler @ 00322dbc */
              std::vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>>::
              _M_insert_aux<juce::detail::GlyphsStorage>
                        (local_120,(undefined4 *)plVar58,&lStack_1a0);
              if (local_188 != (long *)0x0) {
                LOCK();
                plVar58 = local_188 + 1;
                *(int *)plVar58 = (int)*plVar58 + -1;
                UNLOCK();
                if ((int)*plVar58 == 0) {
                  (**(code **)(*local_188 + 8))();
                }
              }
              p_Var3 = local_198;
              if (local_198 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                if (*(long *)(local_198 + 8) == 0x100000001) {
                  *(undefined8 *)(local_198 + 8) = 0;
                  (**(code **)(*(long *)local_198 + 0x10))(local_198);
                  (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
                }
                else {
                  if (*PTR___libc_single_threaded_00715c50 == '\0') {
                    LOCK();
                    p_Var3 = local_198 + 8;
                    iVar20 = *(int *)p_Var3;
                    *(int *)p_Var3 = *(int *)p_Var3 + -1;
                    UNLOCK();
                  }
                  else {
                    iVar20 = (int)*(long *)(local_198 + 8);
                    *(int *)(local_198 + 8) = iVar20 + -1;
                  }
                  if (iVar20 == 1) {
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                              (local_198);
                  }
                }
              }
            }
LAB_00322000:
            if (local_1d0 != (long *)0x0) {
              LOCK();
              plVar58 = local_1d0 + 1;
              *(int *)plVar58 = (int)*plVar58 + -1;
              UNLOCK();
              if ((int)*plVar58 == 0) {
                (**(code **)(*local_1d0 + 8))();
              }
            }
          }
          else {
            if (cVar65 != '\0') goto LAB_00322000;
            puVar50 = (undefined8 *)param_10[0x15];
            puVar44 = (undefined8 *)param_10[0x16];
            lVar57 = *plVar26;
            puVar32 = puVar50 + lVar57 * 4;
            if (puVar44 == (undefined8 *)param_10[0x17]) {
              lVar46 = (long)puVar44 - (long)puVar50;
              if (lVar46 == 0x7fffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar64 = lVar46 >> 5;
              uVar56 = uVar64;
              if (lVar46 == 0) {
                uVar56 = 1;
              }
              uVar60 = uVar56 + uVar64;
              if (0x3ffffffffffffff < uVar60) {
                uVar60 = 0x3ffffffffffffff;
              }
              if (CARRY8(uVar56,uVar64)) {
                uVar60 = 0x3ffffffffffffff;
              }
              puVar39 = operator_new(uVar60 * 0x20);
              p_Var3 = local_1e0;
              puVar39[lVar57 * 4] = local_1e8;
              local_1e0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
              puVar39[lVar57 * 4 + 1] = p_Var3;
              local_1e8 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
              *(byte *)(puVar39 + lVar57 * 4 + 2) = local_1d8;
              puVar39[lVar57 * 4 + 3] = local_1d0;
              local_1d0 = (long *)0x0;
              puVar53 = puVar39;
              if (lVar57 != 0) {
                puVar40 = puVar50;
                do {
                  *puVar53 = *puVar40;
                  uVar74 = puVar40[1];
                  puVar40[1] = 0;
                  puVar53[1] = uVar74;
                  *puVar40 = 0;
                  *(undefined1 *)(puVar53 + 2) = *(undefined1 *)(puVar40 + 2);
                  puVar53[3] = puVar40[3];
                  puVar40[3] = 0;
                  puVar53 = puVar53 + 4;
                  puVar40 = puVar40 + 4;
                } while (puVar40 != puVar32);
              }
              for (; puVar40 = puVar53 + 4, puVar44 != puVar32; puVar32 = puVar32 + 4) {
                *puVar40 = *puVar32;
                uVar74 = puVar32[1];
                puVar32[1] = 0;
                puVar53[5] = uVar74;
                *puVar32 = 0;
                *(undefined1 *)(puVar53 + 6) = *(undefined1 *)(puVar32 + 2);
                puVar53[7] = puVar32[3];
                puVar32[3] = 0;
                puVar53 = puVar40;
              }
              if (puVar50 != (undefined8 *)0x0) {
                operator_delete(puVar50);
              }
              param_10[0x15] = (long)puVar39;
              param_10[0x16] = (long)puVar40;
              param_10[0x17] = (long)(puVar39 + uVar60 * 4);
              goto LAB_00322000;
            }
            if (puVar44 != puVar32) {
                    /* try { // try from 003218b6 to 003218cd has its CatchHandler @ 00322e1e */
              std::vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>>::
              _M_insert_aux<juce::detail::GlyphsStorage>(local_120,(undefined4 *)puVar32,&local_1e8)
              ;
              goto LAB_00322000;
            }
            *puVar32 = local_90;
            local_1e0 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
            puVar50[lVar57 * 4 + 1] = local_88;
            local_1e8 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
            *(byte *)(puVar50 + lVar57 * 4 + 2) = local_80;
            puVar50[lVar57 * 4 + 3] = local_78;
            local_1d0 = (long *)0x0;
            param_10[0x16] = (long)(puVar32 + 4);
          }
          param_11 = local_118;
          p_Var3 = local_1e0;
          if (local_1e0 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (*(long *)(local_1e0 + 8) == 0x100000001) {
              *(undefined8 *)(local_1e0 + 8) = 0;
              (**(code **)(*(long *)local_1e0 + 0x10))(local_1e0);
              (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
            }
            else {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                p_Var3 = local_1e0 + 8;
                iVar20 = *(int *)p_Var3;
                *(int *)p_Var3 = *(int *)p_Var3 + -1;
                UNLOCK();
              }
              else {
                iVar20 = (int)*(long *)(local_1e0 + 8);
                *(int *)(local_1e0 + 8) = iVar20 + -1;
              }
              if (iVar20 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                          (local_1e0);
              }
            }
          }
          if (plVar26 + 6 == plVar31) break;
          plVar26 = plVar26 + 6;
        } while( true );
      }
      if (local_78 != (long *)0x0) {
        LOCK();
        plVar26 = local_78 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)(*local_78 + 8))();
        }
      }
      p_Var3 = local_88;
      if (local_88 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(local_88 + 8) == 0x100000001) {
          *(undefined8 *)(local_88 + 8) = 0;
          (**(code **)(*(long *)local_88 + 0x10))(local_88);
          (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var3 = local_88 + 8;
            iVar20 = *(int *)p_Var3;
            *(int *)p_Var3 = *(int *)p_Var3 + -1;
            UNLOCK();
          }
          else {
            iVar20 = (int)*(long *)(local_88 + 8);
            *(int *)(local_88 + 8) = iVar20 + -1;
          }
          if (iVar20 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_88);
          }
        }
      }
      if (local_c0 != (long *)0x0) {
        LOCK();
        plVar26 = local_c0 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)(*local_c0 + 8))();
        }
      }
      uVar74 = local_d8._8_8_;
      if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_ !=
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(local_d8._8_8_ + 8) == 0x100000001) {
          *(undefined8 *)(local_d8._8_8_ + 8) = 0;
          (**(code **)(*(long *)local_d8._8_8_ + 0x10))(local_d8._8_8_);
          (**(code **)(*(long *)uVar74 + 0x18))(uVar74);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_d8._8_8_ + 8);
            iVar20 = *(int *)p_Var3;
            *(int *)p_Var3 = *(int *)p_Var3 + -1;
            UNLOCK();
          }
          else {
            iVar20 = (int)*(long *)(local_d8._8_8_ + 8);
            *(int *)(local_d8._8_8_ + 8) = iVar20 + -1;
          }
          if (iVar20 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                      ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_d8._8_8_);
          }
        }
      }
      plStack_f0 = local_f8;
      puVar33 = local_68 + 2;
    } while ((puVar33 != (ulong *)param_10[10]) && (uVar56 = *puVar33, (long)uVar56 < (long)uVar49))
    ;
    pauVar63 = (undefined1 (*) [16])param_10[0x12];
    pauVar34 = (undefined1 (*) [16])param_10[0x13];
    uVar64 = (long)pauVar34 - (long)pauVar63;
  }
joined_r0x00322727:
  pauVar27 = pauVar63;
  if (0 < (long)uVar64) {
    uVar56 = uVar64 >> 4;
    do {
      uVar23 = uVar56 >> 1;
      uVar60 = uVar23;
      if (*(long *)(pauVar27[uVar23] + 8) <= (long)param_11) {
        uVar60 = ~uVar23 + uVar56;
        pauVar27 = pauVar27 + uVar23 + 1;
      }
      uVar56 = uVar60;
    } while (0 < (long)uVar60);
  }
  uVar56 = uVar64;
  if ((pauVar27 != pauVar34) && (*(long *)*pauVar27 <= (long)param_11)) {
    uVar56 = (long)pauVar27 - (long)pauVar63;
  }
  lVar57 = param_10[0x15];
  *param_9 = 0;
  param_9[1] = 0;
  param_9[2] = 0;
  plStack_f0 = local_f8;
  if ((long)uVar56 >> 4 != (long)uVar64 >> 4) {
    pauVar34 = pauVar63 + ((long)uVar56 >> 4);
    puVar32 = (undefined8 *)0x0;
    local_158._0_8_ = lVar57;
    while( true ) {
      lVar46 = (long)pauVar34 - (long)pauVar63;
      puVar33 = *(ulong **)(lVar57 + lVar46 * 2);
      uVar56 = *puVar33;
      uVar64 = puVar33[1];
      if (uVar56 == uVar64) break;
      if (0 < (long)(uVar64 - uVar56)) {
        do {
          if ((long)param_11 <= *(long *)(uVar56 + 0x10)) break;
          uVar56 = uVar56 + 0x20;
        } while (uVar56 < uVar64);
      }
      uVar60 = uVar56;
      if (uVar56 < uVar64) {
        do {
          if ((long)uVar49 <= *(long *)(uVar60 + 0x10)) break;
          uVar60 = uVar60 + 0x20;
        } while (uVar60 < uVar64);
      }
      uVar23 = *(ulong *)(uVar56 + 0x10);
      uVar22 = param_11;
      if ((long)param_11 < (long)uVar23) {
        uVar22 = uVar23;
      }
      if ((undefined8 *)*param_9 != puVar32) {
        uVar23 = puVar32[-3];
        if ((long)uVar22 < (long)puVar32[-3]) {
          uVar23 = uVar22;
        }
        puVar32[-3] = uVar23;
        puVar32[-2] = uVar22;
        uVar23 = *(ulong *)(uVar56 + 0x10);
      }
      if (param_10[7] - param_10[6] >> 3 <= (long)uVar23) break;
      phVar29 = *(hb_font_t **)(lVar57 + lVar46 * 2);
      lVar47 = (lVar46 >> 4) * 0x20;
      lVar46 = *(long *)(lVar57 + 8 + lVar47);
      if (lVar46 != 0) {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          *(int *)(lVar46 + 8) = *(int *)(lVar46 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(lVar46 + 8) = *(int *)(lVar46 + 8) + 1;
        }
      }
      uVar18 = *(undefined1 *)(lVar57 + 0x10 + lVar47);
      uStack_190 = *(undefined1 **)(lVar57 + 0x18 + lVar47);
      if (uStack_190 == (undefined1 *)0x0) {
        uStack_190 = (undefined1 *)0x0;
      }
      else {
        LOCK();
        *(int *)(uStack_190 + 8) = *(int *)(uStack_190 + 8) + 1;
        UNLOCK();
      }
      local_188 = (long *)((long)(uVar60 - uVar56) >> 5);
      uStack_170 = uVar22;
      if ((long)uVar22 < (long)uVar49) {
        uStack_170 = uVar49;
      }
      local_168 = *(undefined8 *)(param_10[6] + *(long *)(uVar56 + 0x10) * 8);
      local_a8 = 0;
      local_b0 = 0;
      local_198 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)CONCAT71(local_198._1_7_,uVar18);
      local_98 = 0;
      puVar32 = (undefined8 *)param_9[1];
      uStack_180 = uVar56;
      local_178 = uVar22;
      local_a0 = uVar18;
      if (puVar32 == (undefined8 *)param_9[2]) {
        local_1c8._0_8_ = lVar46;
        puVar50 = (undefined8 *)*param_9;
        lVar57 = (long)puVar32 - (long)puVar50;
        local_1a8 = phVar29;
        lStack_1a0 = lVar46;
        local_148 = uStack_190;
        if (lVar57 == 0x7ffffffffffffff8) {
                    /* try { // try from 00322ca9 to 00322cb4 has its CatchHandler @ 00322cfd */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        lVar46 = lVar57 >> 3;
        uVar23 = lVar46 * -0x71c71c71c71c71c7;
        uVar56 = uVar23;
        if (lVar57 == 0) {
          uVar56 = 1;
        }
        uVar22 = uVar56 + uVar23;
        if (0x1c71c71c71c71c7 < uVar22) {
          uVar22 = 0x1c71c71c71c71c7;
        }
        if (CARRY8(uVar56,uVar23)) {
          uVar22 = 0x1c71c71c71c71c7;
        }
                    /* try { // try from 00322ab8 to 00322abc has its CatchHandler @ 00322cff */
        puVar44 = operator_new(uVar22 * 0x48);
        puVar44[lVar46] = phVar29;
        lStack_1a0 = 0;
        puVar44[lVar46 + 1] = local_1c8._0_8_;
        local_1a8 = (hb_font_t *)0x0;
        *(undefined1 *)(puVar44 + lVar46 + 2) = uVar18;
        puVar44[lVar46 + 3] = local_148;
        uStack_190 = (undefined1 *)0x0;
        puVar44[lVar46 + 8] = local_168;
        puVar44[lVar46 + 6] = local_178;
        (puVar44 + lVar46 + 6)[1] = uStack_170;
        puVar44[lVar46 + 4] = local_188;
        (puVar44 + lVar46 + 4)[1] = uStack_180;
        if (puVar50 == puVar32) {
          puVar32 = puVar44 + 9;
        }
        else {
          puVar53 = puVar44;
          puVar39 = puVar50;
          do {
            puVar40 = puVar53;
            *puVar40 = *puVar39;
            uVar74 = puVar39[1];
            puVar39[1] = 0;
            puVar40[1] = uVar74;
            *puVar39 = 0;
            *(undefined1 *)(puVar40 + 2) = *(undefined1 *)(puVar39 + 2);
            puVar40[3] = puVar39[3];
            puVar39[3] = 0;
            puVar40[8] = puVar39[8];
            uVar74 = puVar39[4];
            uVar12 = puVar39[5];
            uVar13 = puVar39[7];
            puVar40[6] = puVar39[6];
            puVar40[7] = uVar13;
            puVar40[4] = uVar74;
            puVar40[5] = uVar12;
            puVar39 = puVar39 + 9;
            puVar53 = puVar40 + 9;
          } while (puVar39 != puVar32);
          puVar32 = puVar40 + 0x12;
        }
        if (puVar50 != (undefined8 *)0x0) {
          operator_delete(puVar50);
        }
        *param_9 = puVar44;
        param_9[1] = puVar32;
        param_9[2] = puVar44 + uVar22 * 9;
        lVar57 = local_158._0_8_;
        param_11 = local_118;
      }
      else {
        *puVar32 = phVar29;
        lStack_1a0 = 0;
        puVar32[1] = lVar46;
        local_1a8 = (hb_font_t *)0x0;
        *(undefined1 *)(puVar32 + 2) = uVar18;
        puVar32[3] = uStack_190;
        uStack_190 = (undefined1 *)0x0;
        puVar32[8] = local_168;
        puVar32[6] = uVar22;
        puVar32[7] = uStack_170;
        puVar32[4] = local_188;
        puVar32[5] = uVar56;
        puVar32 = puVar32 + 9;
        param_9[1] = puVar32;
      }
      if (((uVar60 != uVar64) && ((long)uVar49 <= *(long *)(uVar60 + 0x10))) ||
         (pauVar34 = pauVar34 + 1, pauVar34 == (undefined1 (*) [16])param_10[0x13])) break;
    }
  }
  if (local_f8 == (long *)0x0) {
    return;
  }
  operator_delete(local_f8);
  return;
}


