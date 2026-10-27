// Function : setup_syllables_use
// Namespace: 
// Entry    : 00430b60
// Prototype: undefined8 setup_syllables_use(long param_1, undefined8 param_2, hb_buffer_t * param_3)
// Body     : 00430b60 - 004331b9


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* setup_syllables_use(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl setup_syllables_use(long param_1,undefined8 param_2,hb_buffer_t *param_3)

{
  char *pcVar1;
  hb_buffer_t *phVar2;
  machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
  mVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  uint uVar29;
  int iVar30;
  bool bVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  long local_1c0;
  uint local_1b8 [2];
  undefined8 uStack_1b0;
  long local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 *puStack_190;
  hb_buffer_t **local_188;
  long *plStack_180;
  undefined1 *local_178;
  uint local_170;
  uint local_15c;
  undefined8 local_158;
  ulong uStack_150;
  long local_148;
  ulong uStack_140;
  undefined8 local_138;
  undefined1 *puStack_130;
  hb_buffer_t **local_128;
  long *plStack_120;
  undefined1 *local_118;
  machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
  local_110;
  undefined4 local_104;
  long local_100;
  undefined8 local_f8;
  ulong uStack_f0;
  long local_e8;
  ulong uStack_e0;
  undefined1 *puStack_d0;
  hb_buffer_t **local_c8;
  long *plStack_c0;
  undefined1 *local_b8;
  undefined1 local_b0;
  hb_buffer_t *local_a8;
  long local_a0;
  hb_buffer_t *local_98;
  hb_buffer_t **local_90;
  uint local_88;
  int iStack_84;
  ulong uStack_80;
  long local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined1 *puStack_60;
  hb_buffer_t **local_58;
  long *plStack_50;
  undefined1 *local_48;
  machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
  local_40;
  
  local_a0 = param_1;
  param_3[0xb8] = (hb_buffer_t)((byte)param_3[0xb8] | 8);
  local_98 = param_3;
  local_1c0 = *(long *)(param_3 + 0x70);
  local_a8 = param_3;
  uVar16 = *(uint *)(param_3 + 0x60);
  uVar23 = 0;
  uVar25 = 0;
  local_e8 = local_1c0;
  uVar6 = 0;
  if (uVar16 != 0) {
    uVar25 = 0;
    uVar8 = uVar16;
    do {
      uVar23 = (ulong)uVar8;
      if (*(char *)(local_e8 + 0x12) != '\x06') {
        uVar6 = uVar25;
        if (*(char *)(local_e8 + 0x12) != '\x0e') goto LAB_00430c88;
        goto LAB_00430bf8;
      }
      uVar25 = (ulong)((int)uVar25 + 1);
      local_e8 = local_e8 + 0x14;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar23 = 0;
    uVar25 = (ulong)uVar16;
    uVar6 = (ulong)uVar16;
  }
LAB_00430c88:
  uStack_1b0 = uVar25 | 0x100000000;
  uStack_e0 = uVar23 | uVar6 << 0x20;
  local_1b8[0] = 0;
  local_1b8[1] = 1;
  local_1a8 = local_e8;
  uStack_1a0 = uStack_e0;
  puStack_190 = &hb_second;
  local_c8 = &local_98;
  local_188 = local_c8;
  plStack_c0 = &local_1c0;
  plStack_180 = plStack_c0;
  local_178 = &hb_identity;
  local_170 = local_170 & 0xffffff00;
  if ((int)uVar23 != 0) {
    local_15c = 1;
    uVar6 = uVar25;
    lVar28 = local_e8;
    uVar26 = uVar23;
LAB_00430d15:
    uVar8 = (int)uVar6 + 2;
    lVar5 = lVar28;
    do {
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar28 = lVar5 + 0x14;
      uVar29 = (int)uVar26 - 1;
      uVar26 = (ulong)uVar29;
      if (uVar29 == 0) {
        if (local_15c == 0) goto LAB_00430df7;
        uVar6 = uVar23;
        lVar28 = local_e8;
        uVar8 = local_15c;
        goto LAB_00430d95;
      }
      if (*(char *)(lVar5 + 0x26) != '\x06') {
        if (*(char *)(lVar5 + 0x26) != '\x0e') goto LAB_00430d10;
        uVar29 = uVar8;
        do {
          if (uVar16 <= uVar29) goto LAB_00430d10;
          uVar17 = (ulong)uVar29;
          uVar29 = uVar29 + 1;
        } while (*(char *)(local_1c0 + 0x12 + uVar17 * 0x14) == '\x06');
        if ((0x1c00U >> (*(uint *)(local_1c0 + uVar17 * 0x14 + 0x10) & 0x1f) & 1) == 0)
        goto LAB_00430d10;
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar28;
    } while( true );
  }
  local_b8 = &hb_identity;
  puStack_d0 = &hb_second;
  local_f8 = 0x100000000;
  uStack_f0 = uStack_1b0;
  local_118 = &hb_identity;
  local_128 = local_c8;
  plStack_120 = plStack_c0;
  puStack_130 = &hb_second;
  local_148 = local_e8;
  uStack_140 = uStack_e0;
  local_158 = 0x100000000;
  uStack_150 = uStack_1b0;
  local_15c = 0;
LAB_00430f03:
  local_b0 = 1;
  local_110 = (machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
               )0x1;
  __hb_CrapPool = (undefined1  [16])0x0;
  DAT_0071cd90._0_4_ = 0;
  local_104 = 0x5f4b01;
  uStack_150 = uStack_1b0;
  local_148 = local_e8;
  uStack_140 = uStack_e0;
  local_128 = local_c8;
  plStack_120 = plStack_c0;
LAB_00430f32:
  local_b8 = &hb_identity;
  puStack_d0 = &hb_second;
  local_f8 = 0x100000000;
  local_118 = &hb_identity;
  puStack_130 = &hb_second;
  local_138 = local_198;
  local_158 = 0x100000000;
  local_b0 = 1;
  local_110 = (machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
               )0x1;
  iVar10 = 1;
  uVar16 = 0;
  iVar11 = 1;
  iVar14 = 1;
  mVar3 = (machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
           )0x0;
  uStack_f0 = uStack_1b0;
  if (local_15c != 0) goto LAB_00430fc9;
LAB_0043271f:
  if ((int)uVar23 == 0) {
    __hb_CrapPool = (undefined1  [16])0x0;
    DAT_0071cd90._0_4_ = 0;
  }
  if ((char)local_104 != '\0') {
    __hb_CrapPool = (undefined1  [16])0x0;
    DAT_0071cd90._0_4_ = 0;
  }
  if (iVar11 != 1) {
    uVar16 = (int)*(short *)(_use_syllable_machine_eof_trans + (long)iVar11 * 2) - 1;
    do {
      iVar14 = (int)(char)_use_syllable_machine_trans_targs[uVar16];
      if ((char)_use_syllable_machine_trans_actions[uVar16] == 0) goto switchD_004310a1_caseD_2;
      iVar11 = (int)uVar23;
      cVar4 = (char)iVar10;
      switch((int)(char)_use_syllable_machine_trans_actions[uVar16]) {
      case 1:
        uStack_80 = uStack_150;
        local_78 = local_148;
        uStack_70 = uStack_140;
        uVar23 = uStack_70;
        local_48 = local_118;
        local_58 = local_128;
        plStack_50 = plStack_120;
        local_68 = local_138;
        puStack_60 = puStack_130;
        local_40 = local_110;
        local_88 = (uint)local_158;
        iStack_84 = (int)((ulong)local_158 >> 0x20);
        uVar16 = local_88 - iStack_84;
        _local_88 = CONCAT44(iStack_84,uVar16);
        uStack_70._0_4_ = (int)uStack_140;
        bVar31 = (int)uStack_70 != 0;
        iVar11 = 0;
        uStack_70 = uVar23;
        if (bVar31) {
          hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
          ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                        *)&uStack_80);
          uVar16 = local_88;
          iVar11 = (int)uStack_70;
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)local_1b8,uVar16,iVar11,local_40);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_004311e0;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 5;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_004311e0:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      default:
        goto switchD_004310a1_caseD_2;
      case 4:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_00431f98;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_00431f98;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_00431f98:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00432030;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 8;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00432030:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 5:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_0043203a;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_0043203a;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_0043203a:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_004320d0;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 7;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_004320d0:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_004320d5;
          }
        }
        goto LAB_004320d5;
      case 6:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_004320fd;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_004320fd;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_004320fd:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        goto switchD_004310a1_caseD_2;
      case 7:
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0],iVar11,local_170._0_1_);
        local_1b8[0] = local_1b8[0] - local_1b8[1];
        hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
        ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                      *)&uStack_1b0);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_004314d0;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 5;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_004314d0:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 8:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_00432119;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_00432119;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_00432119:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_004321b0;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 5;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_004321b0:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 9:
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0],iVar11,local_170._0_1_);
        local_1b8[0] = local_1b8[0] - local_1b8[1];
        hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
        ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                      *)&uStack_1b0);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00431640;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 2;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00431640:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 10:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_004321ba;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_004321ba;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_004321ba:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00432250;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 2;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00432250:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0xb:
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0],iVar11,local_170._0_1_);
        local_1b8[0] = local_1b8[0] - local_1b8[1];
        hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
        ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                      *)&uStack_1b0);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_004317b0;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 1;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_004317b0:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0xc:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_0043225a;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_0043225a;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_0043225a:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_004322f0;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 1;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_004322f0:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0xd:
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0],iVar11,local_170._0_1_);
        local_1b8[0] = local_1b8[0] - local_1b8[1];
        hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
        ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                      *)&uStack_1b0);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00431920;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(char *)(local_1c0 + lVar28) = cVar4 << 4;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00431920:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0xe:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_004322fa;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_004322fa;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_004322fa:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00432390;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(char *)(local_1c0 + lVar28) = cVar4 << 4;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00432390:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0xf:
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0],iVar11,local_170._0_1_);
        local_1b8[0] = local_1b8[0] - local_1b8[1];
        hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
        ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                      *)&uStack_1b0);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00431a90;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 4;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00431a90:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0x10:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_0043239a;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_0043239a;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_0043239a:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00432430;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 4;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00432430:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0x11:
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0],iVar11,local_170._0_1_);
        local_1b8[0] = local_1b8[0] - local_1b8[1];
        hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
        ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                      *)&uStack_1b0);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00431c00;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 3;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00431c00:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0x12:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_0043243a;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_0043243a;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_0043243a:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_004324d0;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 3;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_004324d0:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0x13:
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0],iVar11,local_170._0_1_);
        local_1b8[0] = local_1b8[0] - local_1b8[1];
        hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
        ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                      *)&uStack_1b0);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00431d70;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 7;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00431d70:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_004320d5;
          }
        }
LAB_004320d5:
        iVar10 = iVar10 + 1;
        if (iVar10 == 0x10) {
          iVar10 = 1;
        }
        *(uint *)(local_98 + 0xc0) = *(uint *)(local_98 + 0xc0) | 0x40;
        goto switchD_004310a1_caseD_2;
      case 0x14:
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0],iVar11,local_170._0_1_);
        local_1b8[0] = local_1b8[0] - local_1b8[1];
        hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
        ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                      *)&uStack_1b0);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00431e20;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 8;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00431e20:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0x15:
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0],iVar11,local_170._0_1_);
        local_1b8[0] = local_1b8[0] - local_1b8[1];
        hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
        ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                      *)&uStack_1b0);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00431ed0;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 6;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00431ed0:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
        break;
      case 0x16:
        iVar24 = 0;
        if (iVar11 != 0) {
          uVar16 = (int)uStack_1b0 + uStack_1b0._4_4_ + 1;
          lVar28 = local_1a8;
          while( true ) {
            iVar11 = iVar11 + -1;
            iVar24 = 0;
            if (iVar11 == 0) break;
            if (*(char *)(lVar28 + 0x26) == '\x0e') {
              uVar8 = uVar16;
              do {
                if (*(uint *)(*local_188 + 0x60) <= uVar8) goto LAB_004324da;
                uVar23 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
              } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
              if ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) == 0)
              goto LAB_004324da;
            }
            else if (*(char *)(lVar28 + 0x26) != '\x06') {
LAB_004324da:
              iVar24 = iVar11;
              break;
            }
            uVar16 = uVar16 + uStack_1b0._4_4_;
            lVar28 = lVar28 + 0x14;
          }
        }
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_158,local_1b8[0] + local_1b8[1],iVar24,local_170._0_1_);
        uVar23 = uStack_f0 & 0xffffffff;
        if ((int)uStack_e0 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        lVar28 = uVar23 * 0x14 + 0xf;
        if ((int)uStack_140 != 0) goto LAB_00432570;
        while( true ) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
          if ((uStack_150 & 0xffffffff) <= uVar23) break;
          while( true ) {
            *(byte *)(local_1c0 + lVar28) = cVar4 << 4 | 6;
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 0x14;
            if ((int)uStack_140 == 0) break;
LAB_00432570:
            if ((uStack_150 & 0xffffffff) <= uVar23) goto LAB_00432575;
          }
        }
      }
LAB_00432575:
      iVar10 = iVar10 + 1;
      if (iVar10 == 0x10) {
        iVar10 = 1;
      }
switchD_004310a1_caseD_2:
      local_100 = CONCAT44(local_100._4_4_,iVar14);
      if (_use_syllable_machine_to_state_actions[iVar14] == '\x02') {
        local_b0 = 1;
      }
      uVar16 = local_1b8[0] + local_1b8[1];
      local_1b8[0] = uVar16;
      iVar24 = uStack_1b0._4_4_;
      local_90 = local_188;
      iVar11 = uStack_1b0._4_4_ + 1;
      iVar30 = (int)uStack_1a0;
      iVar19 = (int)uStack_1b0;
      iVar22 = uStack_1a0._4_4_;
      do {
        iVar27 = iVar30;
        iVar9 = 0;
        iVar30 = -1;
        iVar20 = iVar19;
        uVar8 = iVar11 + iVar19;
        do {
          uVar29 = uVar8;
          lVar28 = local_1a8;
          iVar20 = iVar20 + iVar24;
          if (iVar27 == iVar9) {
            iVar20 = (iVar27 + 1) * iVar24 + iVar19;
            uVar23 = 0;
            goto joined_r0x004326d7;
          }
          uStack_1a0 = CONCAT44(iVar22 + iVar9 + 1,iVar27 + iVar30);
          local_1a8 = local_1a8 + 0x14;
          if (iVar27 + -1 == iVar9) {
            iVar20 = iVar19 + iVar27 * iVar24;
            uVar23 = 0;
            goto joined_r0x004326d7;
          }
          iVar9 = iVar9 + 1;
          iVar30 = iVar30 + -1;
          uVar8 = iVar24 + uVar29;
        } while (*(char *)(lVar28 + 0x26) == '\x06');
        if (*(char *)(lVar28 + 0x26) != '\x0e') break;
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,iVar20);
        iVar22 = iVar22 + iVar9;
        do {
          if (*(uint *)(*local_188 + 0x60) <= uVar29) goto LAB_004326e6;
          uVar23 = (ulong)uVar29;
          uVar29 = uVar29 + 1;
        } while (*(char *)(*plStack_180 + 0x12 + uVar23 * 0x14) == '\x06');
        iVar30 = iVar27 - iVar9;
        iVar19 = iVar20;
      } while ((0x1c00U >> (*(uint *)(*plStack_180 + uVar23 * 0x14 + 0x10) & 0x1f) & 1) != 0);
LAB_004326e6:
      uVar23 = (ulong)(uint)(iVar27 - iVar9);
joined_r0x004326d7:
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,iVar20);
      mVar3 = local_170._0_1_;
      if (local_170._0_1_ ==
          (machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
           )0x0) {
        if ((int)uVar23 == 0) {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        if ((char)local_104 != '\0') {
          __hb_CrapPool = (undefined1  [16])0x0;
          DAT_0071cd90._0_4_ = 0;
        }
        mVar3 = (machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                 )0x0;
        iVar11 = iVar14;
        if (uVar16 == local_15c) goto LAB_0043271f;
      }
LAB_00430fc9:
      lVar28 = (long)iVar14;
      if (_use_syllable_machine_from_state_actions[lVar28] == '\x03') {
        machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
        ::operator=((machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
                     *)&local_f8,uVar16,(int)uVar23,mVar3);
        uVar23 = uStack_1a0 & 0xffffffff;
      }
      lVar5 = (long)(char)_use_syllable_machine_key_spans[lVar28];
      if ((int)uVar23 == 0) {
        __hb_CrapPool = (undefined1  [16])0x0;
        DAT_0071cd90._0_4_ = 0;
        bVar12 = 0;
        if ((iVar14 == 1) || (iVar14 == 0x7f)) goto LAB_0043102a;
      }
      else {
        bVar12 = *(byte *)(local_1a8 + 0x12);
        if (((byte)_use_syllable_machine_trans_keys[lVar28 * 2] <= bVar12) &&
           (bVar12 <= (byte)_use_syllable_machine_trans_keys[lVar28 * 2 + 1])) {
LAB_0043102a:
          lVar5 = (ulong)bVar12 - (ulong)(byte)_use_syllable_machine_trans_keys[lVar28 * 2];
        }
      }
      uVar16 = (uint)(byte)_use_syllable_machine_indicies
                           [*(short *)(_use_syllable_machine_index_offsets + lVar28 * 2) + lVar5];
    } while( true );
  }
  uVar16 = *(uint *)(local_a8 + 0x60);
  if (uVar16 == 0) {
    puVar21 = *(uint **)(local_a0 + 0x88);
LAB_00432aea:
    uVar29 = 0;
  }
  else {
    lVar28 = *(long *)(local_a8 + 0x70);
    uVar23 = 0;
    do {
      uVar6 = uVar23 + 1;
      if (uVar16 - 1 == uVar23) {
        uVar6 = (ulong)uVar16;
        break;
      }
      uVar23 = uVar6;
    } while (*(char *)(lVar28 + 0xf) == *(char *)(lVar28 + 0xf + (uVar6 & 0xffffffff) * 0x14));
    uVar25 = (ulong)uVar16;
    uVar23 = 0;
    do {
      phVar2 = local_a8;
      uVar8 = (uint)uVar6;
      uVar17 = uVar6 & 0xffffffff;
      uVar26 = uVar6 & 0xffffffff;
      if ((uint)uVar25 < uVar8) {
        uVar26 = uVar25;
      }
      uVar29 = (uint)uVar26;
      uVar13 = (uint)uVar23;
      if (1 < uVar29 - uVar13) {
        local_a8[0xc0] = (hb_buffer_t)((byte)local_a8[0xc0] | 0x20);
        uVar35 = 0xffffffff;
        if (uVar29 != uVar13) {
          if (*(int *)(local_a8 + 0x1c) == 2) {
            if (uVar13 < uVar29) {
              uVar25 = uVar26 - uVar23;
              uVar35 = 0xffffffff;
              if (8 < uVar25) {
                uVar15 = (ulong)((uint)uVar25 & 7);
                if (uVar15 == 0) {
                  uVar15 = 8;
                }
                lVar5 = (uVar15 + uVar23) - uVar26;
                puVar21 = (uint *)(lVar28 + uVar23 * 0x14 + 0x94);
                uVar39 = 0xffffffff;
                uVar35 = 0xffffffff;
                uVar36 = 0xffffffff;
                uVar32 = 0xffffffff;
                uVar33 = 0xffffffff;
                uVar38 = 0xffffffff;
                uVar41 = 0xffffffff;
                uVar34 = 0xffffffff;
                do {
                  uVar37 = -(uint)((int)(uVar35 ^ _DAT_006524b0) <
                                  (int)(puVar21[-0x23] ^ _DAT_006524b0));
                  uVar40 = -(uint)((int)(uVar36 ^ _UNK_006524b4) <
                                  (int)(puVar21[-0x1e] ^ _UNK_006524b4));
                  uVar42 = -(uint)((int)(uVar39 ^ _UNK_006524b8) <
                                  (int)(puVar21[-0x19] ^ _UNK_006524b8));
                  uVar43 = -(uint)((int)(uVar32 ^ _UNK_006524bc) <
                                  (int)(puVar21[-0x14] ^ _UNK_006524bc));
                  uVar35 = ~uVar37 & puVar21[-0x23] | uVar35 & uVar37;
                  uVar36 = ~uVar40 & puVar21[-0x1e] | uVar36 & uVar40;
                  uVar39 = ~uVar42 & puVar21[-0x19] | uVar39 & uVar42;
                  uVar32 = ~uVar43 & puVar21[-0x14] | uVar32 & uVar43;
                  uVar37 = -(uint)((int)(uVar38 ^ _DAT_006524b0) <
                                  (int)(puVar21[-0xf] ^ _DAT_006524b0));
                  uVar40 = -(uint)((int)(uVar41 ^ _UNK_006524b4) <
                                  (int)(puVar21[-10] ^ _UNK_006524b4));
                  uVar42 = -(uint)((int)(uVar33 ^ _UNK_006524b8) <
                                  (int)(puVar21[-5] ^ _UNK_006524b8));
                  uVar43 = -(uint)((int)(uVar34 ^ _UNK_006524bc) < (int)(*puVar21 ^ _UNK_006524bc));
                  uVar38 = ~uVar37 & puVar21[-0xf] | uVar38 & uVar37;
                  uVar41 = ~uVar40 & puVar21[-10] | uVar41 & uVar40;
                  uVar33 = ~uVar42 & puVar21[-5] | uVar33 & uVar42;
                  uVar34 = ~uVar43 & *puVar21 | uVar34 & uVar43;
                  puVar21 = puVar21 + 0x28;
                  lVar5 = lVar5 + 8;
                } while (lVar5 != 0);
                uVar23 = uVar23 + (uVar25 - uVar15);
                uVar37 = -(uint)((int)(uVar35 ^ _DAT_006524b0) < (int)(uVar38 ^ _DAT_006524b0));
                uVar40 = -(uint)((int)(uVar36 ^ _UNK_006524b4) < (int)(uVar41 ^ _UNK_006524b4));
                uVar42 = -(uint)((int)(uVar39 ^ _UNK_006524b8) < (int)(uVar33 ^ _UNK_006524b8));
                uVar43 = -(uint)((int)(uVar32 ^ _UNK_006524bc) < (int)(uVar34 ^ _UNK_006524bc));
                uVar38 = ~uVar37 & uVar38 | uVar35 & uVar37;
                uVar41 = ~uVar40 & uVar41 | uVar36 & uVar40;
                uVar39 = ~uVar42 & uVar33 | uVar39 & uVar42;
                uVar32 = ~uVar43 & uVar34 | uVar32 & uVar43;
                uVar35 = -(uint)((int)(uVar38 ^ _DAT_006524b0) < (int)(uVar39 ^ _DAT_006524b0));
                uVar36 = -(uint)((int)(uVar41 ^ _UNK_006524b4) < (int)(uVar32 ^ _UNK_006524b4));
                uVar35 = ~uVar35 & uVar39 | uVar38 & uVar35;
                uVar36 = ~uVar36 & uVar32 | uVar41 & uVar36;
                uVar39 = -(uint)((int)(uVar35 ^ _DAT_006524b0) < (int)(uVar36 ^ _DAT_006524b0));
                uVar35 = ~uVar39 & uVar36 | uVar35 & uVar39;
              }
              lVar5 = uVar26 - uVar23;
              puVar21 = (uint *)(lVar28 + uVar23 * 0x14 + 8);
              do {
                if (*puVar21 < uVar35) {
                  uVar35 = *puVar21;
                }
                puVar21 = puVar21 + 5;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
          }
          else {
            uVar35 = *(uint *)(lVar28 + 8 + uVar23 * 0x14);
            uVar36 = *(uint *)(lVar28 + 8 + (ulong)(uVar29 - 1) * 0x14);
            if (uVar36 < uVar35) {
              uVar35 = uVar36;
            }
          }
        }
        hb_buffer_t::_infos_set_glyph_flags(local_a8,lVar28,uVar13,uVar29,uVar35,3);
        uVar25 = (ulong)*(uint *)(phVar2 + 0x60);
        lVar28 = *(long *)(phVar2 + 0x70);
      }
      uVar26 = uVar6 & 0xffffffff;
      uVar29 = (uint)uVar25;
      uVar23 = (ulong)(uVar8 + 1);
      if (uVar8 + 1 < uVar29) {
        uVar23 = uVar25;
      }
      uVar6 = uVar6 & 0xffffffff;
      do {
        uVar13 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar13;
        if (uVar29 <= uVar13) {
          uVar6 = uVar23;
          break;
        }
      } while (*(char *)(lVar28 + 0xf + uVar26 * 0x14) ==
               *(char *)(lVar28 + 0xf + (ulong)uVar13 * 0x14));
      uVar23 = uVar17;
    } while (uVar8 < uVar16);
    puVar21 = *(uint **)(local_a0 + 0x88);
    uVar16 = *puVar21;
    if (uVar16 != 0) {
      if (uVar29 != 0) {
        uVar23 = 0;
        do {
          uVar6 = uVar23 + 1;
          if (uVar29 - 1 == uVar23) {
            uVar6 = uVar25;
            break;
          }
          uVar23 = uVar6;
        } while (*(char *)(lVar28 + 0xf) == *(char *)(lVar28 + 0xf + (uVar6 & 0xffffffff) * 0x14));
        uVar8 = 0;
        do {
          uVar13 = (uint)uVar6;
          uVar23 = (ulong)uVar8;
          uVar35 = uVar13 - uVar8;
          if (2 < uVar35) {
            uVar35 = 3;
          }
          if (*(char *)(lVar28 + 0x12 + uVar23 * 0x14) == '\x12') {
            uVar35 = 1;
          }
          uVar35 = uVar35 + uVar8;
          if (uVar8 < uVar35) {
            uVar26 = ~uVar23;
            if ((uVar35 - uVar8 & 3) != 0) {
              puVar7 = (uint *)(lVar28 + 4 + uVar23 * 0x14);
              lVar5 = 0;
              do {
                *puVar7 = *puVar7 | uVar16;
                lVar5 = lVar5 + -1;
                puVar7 = puVar7 + 5;
              } while (-lVar5 != ((ulong)(uVar35 - uVar8) & 3));
              uVar23 = uVar23 - lVar5;
            }
            if (2 < uVar26 + uVar35) {
              lVar5 = uVar35 - uVar23;
              puVar7 = (uint *)(lVar28 + 0x40 + uVar23 * 0x14);
              do {
                puVar7[-0xf] = puVar7[-0xf] | uVar16;
                puVar7[-10] = puVar7[-10] | uVar16;
                puVar7[-5] = puVar7[-5] | uVar16;
                *puVar7 = *puVar7 | uVar16;
                puVar7 = puVar7 + 0x14;
                lVar5 = lVar5 + -4;
              } while (lVar5 != 0);
            }
          }
          uVar26 = uVar6 & 0xffffffff;
          uVar23 = (ulong)(uVar13 + 1);
          if (uVar13 + 1 < uVar29) {
            uVar23 = uVar25;
          }
          uVar6 = uVar6 & 0xffffffff;
          do {
            iVar10 = (int)uVar6;
            uVar8 = iVar10 + 1;
            uVar6 = (ulong)uVar8;
            if ((int)uVar23 + -1 == iVar10) {
              uVar6 = uVar23;
              break;
            }
          } while (*(char *)(lVar28 + 0xf + uVar26 * 0x14) ==
                   *(char *)(lVar28 + 0xf + (ulong)uVar8 * 0x14));
          uVar8 = uVar13;
        } while (uVar13 < uVar29);
        lVar28 = *(long *)(puVar21 + 2);
        goto joined_r0x00432af2;
      }
      goto LAB_00432aea;
    }
  }
  lVar28 = *(long *)(puVar21 + 2);
joined_r0x00432af2:
  if (lVar28 == 0) {
    lVar28 = *(long *)(local_a0 + 0x40);
    uVar16 = *(uint *)(local_a0 + 0x34);
    iVar10 = *(int *)(local_a0 + 0x3c) + -1;
    if (0 < *(int *)(local_a0 + 0x3c)) {
      iVar14 = 0;
      iVar11 = iVar10;
      do {
        while( true ) {
          uVar13 = (uint)(iVar11 + iVar14) >> 1;
          uVar8 = *(uint *)(lVar28 + (ulong)uVar13 * 0x24);
          if (0x69736f6c < uVar8) break;
          if (uVar8 == 0x69736f6c) {
            local_1b8[0] = *(uint *)(lVar28 + 0x1c + (ulong)uVar13 * 0x24);
            goto LAB_00432c88;
          }
          iVar14 = uVar13 + 1;
          local_1b8[0] = 0;
          if (iVar11 < iVar14) goto LAB_00432c88;
        }
        iVar11 = uVar13 - 1;
        local_1b8[0] = 0;
      } while (iVar14 <= iVar11);
LAB_00432c88:
      uVar8 = 0;
      if (local_1b8[0] == uVar16) {
        local_1b8[0] = uVar8;
      }
      iVar11 = iVar10;
      do {
        while( true ) {
          uVar35 = iVar11 + uVar8 >> 1;
          uVar13 = *(uint *)(lVar28 + (ulong)uVar35 * 0x24);
          if (0x696e6974 < uVar13) break;
          if (uVar13 == 0x696e6974) {
            local_1b8[1] = *(uint *)(lVar28 + 0x1c + (ulong)uVar35 * 0x24);
            goto LAB_00432cd0;
          }
          uVar8 = uVar35 + 1;
          local_1b8[1] = 0;
          if (iVar11 < (int)uVar8) goto LAB_00432cd0;
        }
        iVar11 = uVar35 - 1;
        local_1b8[1] = 0;
      } while ((int)uVar8 <= iVar11);
LAB_00432cd0:
      uVar8 = 0;
      if (local_1b8[1] == uVar16) {
        local_1b8[1] = uVar8;
      }
      iVar11 = iVar10;
      do {
        while( true ) {
          uVar35 = iVar11 + uVar8 >> 1;
          uVar13 = *(uint *)(lVar28 + (ulong)uVar35 * 0x24);
          if (0x6d656469 < uVar13) break;
          if (uVar13 == 0x6d656469) {
            uVar13 = *(uint *)(lVar28 + 0x1c + (ulong)uVar35 * 0x24);
            goto LAB_00432d20;
          }
          uVar8 = uVar35 + 1;
          uVar13 = 0;
          if (iVar11 < (int)uVar8) goto LAB_00432d20;
        }
        iVar11 = uVar35 - 1;
        uVar13 = 0;
      } while ((int)uVar8 <= iVar11);
LAB_00432d20:
      iVar11 = 0;
      if (uVar13 == uVar16) {
        uVar13 = 0;
      }
      do {
        while( true ) {
          uVar35 = (uint)(iVar10 + iVar11) >> 1;
          uVar8 = *(uint *)(lVar28 + (ulong)uVar35 * 0x24);
          if (0x66696e61 < uVar8) break;
          if (uVar8 == 0x66696e61) {
            uVar8 = *(uint *)(lVar28 + 0x1c + (ulong)uVar35 * 0x24);
            goto LAB_00432d64;
          }
          iVar11 = uVar35 + 1;
          uVar8 = 0;
          if (iVar10 < iVar11) goto LAB_00432d64;
        }
        iVar10 = uVar35 - 1;
        uVar8 = 0;
      } while (iVar11 <= iVar10);
LAB_00432d64:
      uVar35 = 0;
      if (uVar8 != uVar16) {
        uVar35 = uVar8;
      }
      uStack_1b0 = CONCAT44(uVar35,uVar13);
      uVar35 = local_1b8[1] | local_1b8[0] | uVar13 | uVar35;
      if (uVar35 != 0) {
        uVar35 = ~uVar35;
        lVar28 = *(long *)(local_a8 + 0x70);
        if (uVar29 != 0) {
          bVar12 = *(byte *)(lVar28 + 0xf);
          uVar23 = 0;
          do {
            uVar6 = uVar23 + 1;
            if (uVar29 - 1 == uVar23) {
              uVar6 = (ulong)uVar29;
              break;
            }
            uVar23 = uVar6;
          } while (bVar12 == *(byte *)(lVar28 + 0xf + (uVar6 & 0xffffffff) * 0x14));
          local_100 = lVar28 + 0x18;
          iVar10 = 4;
          uVar16 = 0;
          uVar8 = 0;
          do {
            uVar13 = (uint)uVar6;
            uVar25 = (ulong)uVar8;
            uVar23 = uVar6 & 0xffffffff;
            if ((bVar12 & 0xf) < 9) {
              if ((0xbfU >> (bVar12 & 0xf) & 1) == 0) {
                iVar10 = 4;
              }
              else {
                lVar5 = 0;
                if (((iVar10 == 3) || (iVar10 == 0)) && (lVar5 = 3, uVar16 < uVar8)) {
                  uVar36 = local_1b8[(ulong)(iVar10 == 3) + 1];
                  uVar26 = (ulong)uVar16;
                  uVar17 = ~uVar26;
                  if ((uVar8 - uVar16 & 1) != 0) {
                    *(uint *)(lVar28 + 4 + uVar26 * 0x14) =
                         *(uint *)(lVar28 + 4 + uVar26 * 0x14) & uVar35 | uVar36;
                    uVar26 = uVar26 + 1;
                  }
                  if (uVar17 + uVar25 != 0) {
                    lVar18 = uVar25 - uVar26;
                    puVar21 = (uint *)(local_100 + uVar26 * 0x14);
                    do {
                      puVar21[-5] = puVar21[-5] & uVar35 | uVar36;
                      *puVar21 = *puVar21 & uVar35 | uVar36;
                      puVar21 = puVar21 + 10;
                      lVar18 = lVar18 + -2;
                    } while (lVar18 != 0);
                  }
                }
                iVar10 = (int)lVar5;
                if (uVar8 < uVar13) {
                  uVar16 = local_1b8[lVar5];
                  uVar26 = ~uVar25;
                  if ((uVar13 - uVar8 & 1) != 0) {
                    *(uint *)(lVar28 + 4 + uVar25 * 0x14) =
                         *(uint *)(lVar28 + 4 + uVar25 * 0x14) & uVar35 | uVar16;
                    uVar25 = uVar25 + 1;
                  }
                  if (uVar26 + uVar23 != 0) {
                    lVar5 = uVar23 - uVar25;
                    puVar21 = (uint *)(local_100 + uVar25 * 0x14);
                    do {
                      puVar21[-5] = puVar21[-5] & uVar35 | uVar16;
                      *puVar21 = *puVar21 & uVar35 | uVar16;
                      puVar21 = puVar21 + 10;
                      lVar5 = lVar5 + -2;
                    } while (lVar5 != 0);
                  }
                }
              }
            }
            bVar12 = *(byte *)(lVar28 + 0xf + uVar23 * 0x14);
            uVar16 = uVar13 + 1;
            if (uVar13 + 1 < uVar29) {
              uVar16 = uVar29;
            }
            uVar6 = uVar6 & 0xffffffff;
            do {
              iVar11 = (int)uVar6;
              uVar6 = (ulong)(iVar11 + 1);
              if (uVar16 - 1 == iVar11) {
                uVar6 = (ulong)uVar16;
                break;
              }
            } while (bVar12 == *(byte *)(lVar28 + 0xf + uVar6 * 0x14));
            uVar16 = uVar8;
            uVar8 = uVar13;
          } while (uVar13 < uVar29);
        }
      }
    }
  }
  return 0;
LAB_00430bf8:
  uVar8 = (uint)uVar25;
  uVar29 = uVar8;
  do {
    uVar29 = uVar29 + 1;
    if (uVar16 <= uVar29) goto LAB_00430c76;
  } while (*(char *)(local_1c0 + 0x12 + (ulong)uVar29 * 0x14) == '\x06');
  if ((0x1c00U >> (*(uint *)(local_1c0 + (ulong)uVar29 * 0x14 + 0x10) & 0x1f) & 1) == 0) {
LAB_00430c76:
    goto LAB_00430c88;
  }
  iVar10 = (int)uVar23;
  iVar11 = 0;
  lVar28 = local_e8;
  do {
    local_e8 = lVar28 + 0x14;
    if (iVar10 + -1 == iVar11) {
      uVar25 = (ulong)(uVar8 + iVar10);
      uVar23 = 0;
      uVar6 = (ulong)(uint)((int)uVar6 + iVar10);
      goto LAB_00430c88;
    }
    pcVar1 = (char *)(lVar28 + 0x26);
    iVar11 = iVar11 + 1;
    lVar28 = local_e8;
  } while (*pcVar1 == '\x06');
  uVar6 = (ulong)(uint)((int)uVar6 + iVar11);
  uVar23 = (ulong)(uint)(iVar10 - iVar11);
  if (*pcVar1 != '\x0e') goto LAB_00430c85;
  uVar25 = (ulong)(uVar8 + iVar11);
  goto LAB_00430bf8;
LAB_00430c85:
  uVar25 = (ulong)(uVar8 + iVar11);
  goto LAB_00430c88;
LAB_00430d95:
  uVar8 = uVar8 - 1;
  uVar29 = (int)uVar25 + 2;
  lVar5 = lVar28;
  do {
    uVar25 = (ulong)((int)uVar25 + 1);
    lVar28 = lVar5 + 0x14;
    uVar13 = (int)uVar6 - 1;
    uVar6 = (ulong)uVar13;
    if (uVar13 == 0) {
      local_b8 = &hb_identity;
      puStack_d0 = &hb_second;
      local_f8 = 0x100000000;
      uStack_f0 = uStack_1b0;
      local_118 = &hb_identity;
      local_128 = local_c8;
      plStack_120 = plStack_c0;
      puStack_130 = &hb_second;
      local_148 = local_e8;
      uStack_140 = uStack_e0;
      local_158 = 0x100000000;
      uStack_150 = uStack_1b0;
      goto LAB_00430f03;
    }
    if (*(char *)(lVar5 + 0x26) != '\x06') {
      uVar13 = uVar29;
      if (*(char *)(lVar5 + 0x26) != '\x0e') break;
      do {
        uVar26 = (ulong)uVar13;
        if (uVar16 <= uVar13) goto LAB_00430d90;
        uVar13 = uVar13 + 1;
      } while (*(char *)(local_1c0 + 0x12 + uVar26 * 0x14) == '\x06');
      if ((0x1c00U >> (*(uint *)(local_1c0 + uVar26 * 0x14 + 0x10) & 0x1f) & 1) == 0) break;
    }
    uVar29 = uVar29 + 1;
    lVar5 = lVar28;
  } while( true );
LAB_00430d90:
  if (uVar8 == 0) goto LAB_00430df7;
  goto LAB_00430d95;
LAB_00430df7:
  local_b8 = &hb_identity;
  puStack_d0 = &hb_second;
  local_f8 = 0x100000000;
  uStack_f0 = uStack_1b0;
  local_118 = &hb_identity;
  local_128 = local_c8;
  plStack_120 = plStack_c0;
  puStack_130 = &hb_second;
  local_148 = local_e8;
  uStack_140 = uStack_e0;
  local_158 = 0x100000000;
  uStack_150 = uStack_1b0;
  local_b0 = 1;
  local_110 = (machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
               )0x1;
  local_104 = 0;
  goto LAB_00430f32;
LAB_00430d10:
  local_15c = local_15c + 1;
  goto LAB_00430d15;
}


