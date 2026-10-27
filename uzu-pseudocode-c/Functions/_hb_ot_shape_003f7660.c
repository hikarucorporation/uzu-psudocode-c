// Function : _hb_ot_shape
// Namespace: 
// Entry    : 003f7660
// Prototype: undefined8 _hb_ot_shape(undefined8 param_1, undefined8 param_2, long param_3, hb_font_t * param_4, hb_buffer_t * param_5, long param_6, hb_buffer_t * param_7, undefined8 param_8)
// Body     : 003f7660 - 003fe7f2


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
_hb_ot_shape(undefined8 param_1,undefined8 param_2,long param_3,hb_font_t *param_4,
            hb_buffer_t *param_5,long param_6,hb_buffer_t *param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  hb_buffer_t *phVar3;
  hb_buffer_t hVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  pthread_mutex_t *ppVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar24;
  byte bVar25;
  ushort uVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  ushort *puVar32;
  ulong *puVar33;
  hb_buffer_t *phVar34;
  hb_ot_apply_context_t *phVar35;
  undefined8 uVar36;
  int *piVar37;
  accelerator_t *this;
  accelerator_t *this_00;
  void *pvVar38;
  accelerator_t<OT::Layout::GPOS> *this_01;
  uint uVar39;
  uint uVar40;
  ushort *puVar41;
  undefined8 *puVar42;
  hb_buffer_t *phVar43;
  code *pcVar44;
  uint *puVar45;
  short *psVar46;
  uint *puVar47;
  ulong uVar48;
  hb_buffer_t *phVar49;
  undefined1 uVar50;
  ushort uVar51;
  uint uVar52;
  undefined8 *puVar53;
  ulong uVar54;
  hb_buffer_t *phVar55;
  undefined8 extraout_RDX;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint *puVar59;
  hb_font_t *phVar60;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar61;
  uint uVar62;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar63;
  undefined2 uVar64;
  long lVar65;
  hb_buffer_t *phVar66;
  ushort uVar67;
  hb_buffer_t *phVar68;
  GDEF *this_02;
  ushort *puVar69;
  void *pvVar70;
  undefined4 *puVar71;
  hb_buffer_t *phVar72;
  long lVar73;
  ulong uVar74;
  ulong uVar75;
  byte *pbVar76;
  uint uVar77;
  undefined1 *puVar78;
  short *psVar79;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar80;
  hb_buffer_t *phVar81;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar82;
  long lVar83;
  uint uVar84;
  ulong uVar85;
  long lVar86;
  hb_buffer_t *phVar87;
  ulong uVar88;
  TrackData *pTVar89;
  bool bVar90;
  bool bVar91;
  float fVar92;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_23;
  float fVar93;
  undefined8 extraout_XMM0_Qa_36;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_40;
  undefined8 extraout_XMM0_Qa_41;
  undefined8 extraout_XMM0_Qa_42;
  undefined8 extraout_XMM0_Qa_43;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  undefined8 extraout_XMM0_Qa_27;
  undefined8 extraout_XMM0_Qa_28;
  undefined8 extraout_XMM0_Qa_29;
  undefined8 extraout_XMM0_Qa_30;
  uint *extraout_XMM0_Qa_31;
  undefined8 extraout_XMM0_Qa_32;
  undefined8 extraout_XMM0_Qa_33;
  undefined8 extraout_XMM0_Qa_34;
  undefined8 extraout_XMM0_Qa_35;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 extraout_XMM0_Qa_37;
  undefined8 extraout_XMM0_Qa_38;
  undefined8 extraout_XMM0_Qa_39;
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 extraout_var [12];
  undefined1 auVar100 [16];
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  undefined8 extraout_XMM1_Qa_11;
  undefined8 extraout_XMM1_Qa_12;
  undefined8 extraout_XMM1_Qa_13;
  undefined8 extraout_XMM1_Qa_14;
  undefined8 extraout_XMM1_Qa_15;
  undefined8 extraout_XMM1_Qa_16;
  undefined8 extraout_XMM1_Qa_17;
  undefined8 extraout_XMM1_Qa_18;
  undefined8 extraout_XMM1_Qa_19;
  undefined8 extraout_XMM1_Qa_20;
  undefined8 extraout_XMM1_Qa_21;
  undefined8 extraout_XMM1_Qa_22;
  ulong extraout_XMM1_Qa_23;
  undefined8 extraout_XMM1_Qa_24;
  undefined8 extraout_XMM1_Qa_25;
  undefined8 extraout_XMM1_Qa_26;
  undefined8 extraout_XMM1_Qa_27;
  undefined8 extraout_XMM1_Qa_28;
  undefined8 extraout_XMM1_Qa_29;
  undefined8 extraout_XMM1_Qa_31;
  undefined8 extraout_XMM1_Qa_32;
  undefined8 extraout_XMM1_Qa_33;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined8 extraout_XMM1_Qa_30;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar124 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined8 in_XMM7_Qa;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 in_stack_fffffffffffffd48;
  hb_buffer_t *local_2a0;
  accelerator_t<OT::Layout::GSUB> *local_298;
  ulong local_230;
  undefined4 local_228 [2];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  char local_200;
  uint local_1fc;
  hb_buffer_t *local_1f8;
  uint local_1f0;
  undefined2 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  GDEFVersion1_2<OT::Layout::SmallTypes> *local_1b0;
  uint local_1a8;
  hb_ot_apply_context_t *local_198;
  uint local_190;
  undefined4 local_18c;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  byte local_185;
  undefined1 local_184;
  undefined1 local_180 [16];
  undefined8 local_170;
  uint local_168;
  int local_160;
  GDEFVersion1_2<OT::Layout::SmallTypes> *local_148;
  hb_sanitize_context_t local_140 [64];
  code *local_100;
  void *local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  byte local_ab;
  byte local_aa;
  byte local_a9;
  byte local_a8;
  undefined8 local_a0;
  uint local_8c;
  undefined8 local_88;
  uint local_7c;
  ulong local_78;
  undefined1 auStack_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50;
  undefined1 local_4c [16];
  undefined1 local_3c;
  undefined1 local_3b;
  long local_38;
  uint switchD_003f8054::switchdataD_005e046c;
  uint switchD_003f8027::switchdataD_005e02f8;
  
  uVar6 = *(uint *)(param_5 + 0x38);
  uVar57 = *(uint *)(param_5 + 0x60);
  param_5[0xb8] = (hb_buffer_t)((byte)param_5[0xb8] | 0x30);
  puVar78 = param_7;
  if ((ulong)uVar57 != 0) {
    uVar29 = *(undefined4 *)(param_3 + 0x94);
    lVar83 = *(long *)(param_5 + 0x70);
    if ((ulong)uVar57 - 1 < 3) {
      uVar54 = 0;
    }
    else {
      puVar31 = (undefined4 *)(lVar83 + 0x40);
      uVar54 = 0;
      do {
        puVar31[-0xf] = uVar29;
        puVar31[-10] = uVar29;
        puVar31[-5] = uVar29;
        *puVar31 = uVar29;
        uVar54 = uVar54 + 4;
        puVar31 = puVar31 + 0x14;
      } while ((uVar57 & 0xfffffffc) != uVar54);
    }
    if ((ulong)(uVar57 & 3) != 0) {
      lVar65 = 0;
      do {
        *(undefined4 *)(uVar54 * 0x14 + 4 + lVar83 + lVar65) = uVar29;
        lVar65 = lVar65 + 0x14;
      } while ((ulong)(uVar57 & 3) * 0x14 != lVar65);
    }
    uVar84 = 0;
    do {
      uVar54 = (ulong)uVar84;
      puVar59 = (uint *)(uVar54 * 0x14 + lVar83);
      _hb_glyph_info_set_unicode_props(puVar59,(long)param_5);
      uVar26 = *(ushort *)(lVar83 + 0x10 + uVar54 * 0x14);
      uVar52 = uVar26 & 0x1f;
      param_2 = extraout_XMM1_Qa;
      if ((0x200003a0U >> uVar52 & 1) == 0) {
        puVar41 = (ushort *)(uVar54 * 0x14 + 0x10 + lVar83);
        if (((short)uVar52 == 0x18) && (*puVar59 - 0x1f3fb < 5)) {
LAB_003f7737:
          *puVar41 = uVar26 | 0x80;
        }
        else if ((uVar84 == 0) || (0x19 < *puVar59 - 0x1f1e6)) {
          if ((uVar26 & 0x11f) == 0x101) {
            *puVar41 = uVar26 | 0x80;
            uVar52 = uVar84 + 1;
            if (uVar52 < uVar57) {
              uVar54 = (ulong)uVar52;
              uVar58 = *(uint *)(lVar83 + uVar54 * 0x14);
              if ((uVar58 < 0x1fffe) &&
                 (puVar78 = _hb_emoji_u8,
                 ((byte)_hb_emoji_u8
                        [(((ulong)(uVar58 & 0x18) |
                          (ulong)(byte)_hb_emoji_u8
                                       [(ulong)(uVar58 >> 5 & 3) +
                                        (ulong)(byte)_hb_emoji_u8
                                                     [(ulong)(uVar58 >> 7 & 7) +
                                                      (ulong)((byte)_hb_emoji_u8[uVar58 >> 0xb] >>
                                                              ((byte)(uVar58 >> 8) & 4) & 0xf) * 8 +
                                                      0x40] * 4 + 0x90] << 5) >> 3) + 0x108] >>
                  ((byte)uVar58 & 7) & 1) != 0)) {
                _hb_glyph_info_set_unicode_props((uint *)(uVar54 * 0x14 + lVar83),(long)param_5);
                puVar41 = (ushort *)(uVar54 * 0x14 + 0x10 + lVar83);
                uVar26 = *(ushort *)(lVar83 + 0x10 + uVar54 * 0x14);
                uVar84 = uVar52;
                param_2 = extraout_XMM1_Qa_00;
                goto LAB_003f7737;
              }
            }
          }
          else if (((*puVar59 & 0xfffffffe) == 0xff9e) || (*puVar59 - 0xe0020 < 0x60))
          goto LAB_003f7737;
        }
        else if ((*(int *)(lVar83 + (ulong)(uVar84 - 1) * 0x14) - 0x1f1e6U < 0x1a) &&
                ((*(byte *)(lVar83 + 0x10 + (ulong)(uVar84 - 1) * 0x14) & 0x80) == 0))
        goto LAB_003f7737;
      }
      uVar84 = uVar84 + 1;
    } while (uVar84 < uVar57);
  }
  if ((((*(uint *)(param_5 + 0x18) & 0x11) == 1) && (*(int *)(param_5 + 0xb0) == 0)) &&
     ((0x1c00U >> (*(uint *)(*(long *)(param_5 + 0x70) + 0x10) & 0x1f) & 1) != 0)) {
    local_1e8._0_4_ = 0;
    lVar83 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
    if (lVar83 == 0) {
      puVar78 = (hb_buffer_t *)0x0;
    }
    else {
      puVar78 = *(undefined1 **)(lVar83 + 0x10);
    }
    iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                       (param_4,*(undefined8 *)(param_4 + 0x98),0x25cc);
    param_2 = extraout_XMM1_Qa_28;
    if (iVar28 != 0) {
      local_1e8._4_4_ = 0;
      uStack_1e0._0_4_ = 0;
      uStack_1e0._4_4_ = 0;
      uStack_1d8._0_4_ = 0;
      local_1e8._0_4_ = 0x25cc;
      _hb_glyph_info_set_unicode_props((uint *)&local_1e8,(long)param_5);
      uVar57 = (uint)local_1e8;
      *(undefined2 *)(param_5 + 0x5a) = 1;
      *(undefined4 *)(param_5 + 100) = 0;
      lVar83 = *(long *)(param_5 + 0x70);
      *(long *)(param_5 + 0x78) = lVar83;
      *(undefined4 *)(param_5 + 0x5c) = 0;
      uVar30 = CONCAT44((uint)uStack_1d8,uStack_1e0._4_4_);
      uVar29 = *(undefined4 *)(lVar83 + 4);
      uVar8 = *(undefined4 *)(lVar83 + 8);
      param_2 = extraout_XMM1_Qa_29;
      if (*(uint *)(param_5 + 0x68) < 2) {
        uVar36 = hb_buffer_t::enlarge(param_5,1);
        if ((char)uVar36 != '\0') {
          pvVar38 = *(void **)(param_5 + 0x78);
          if ((pvVar38 == *(void **)(param_5 + 0x70)) &&
             (uVar84 = *(uint *)(param_5 + 100), *(uint *)(param_5 + 0x5c) < uVar84 + 1)) {
            pvVar70 = *(void **)(param_5 + 0x80);
            *(void **)(param_5 + 0x78) = pvVar70;
            if ((ulong)uVar84 == 0) {
              pvVar38 = pvVar70;
            }
            else {
              memcpy(pvVar70,pvVar38,(ulong)uVar84 * 0x14);
              pvVar38 = *(void **)(param_5 + 0x78);
            }
          }
          goto LAB_003fd1d6;
        }
      }
      else {
        *(void **)(param_5 + 0x78) = *(void **)(param_5 + 0x80);
        pvVar38 = *(void **)(param_5 + 0x80);
LAB_003fd1d6:
        uVar54 = (ulong)*(uint *)(param_5 + 100);
        *(uint *)((long)pvVar38 + uVar54 * 0x14) = uVar57;
        *(undefined4 *)((long)pvVar38 + uVar54 * 0x14 + 4) = uVar29;
        *(undefined4 *)((long)pvVar38 + uVar54 * 0x14 + 8) = uVar8;
        *(undefined8 *)((long)pvVar38 + uVar54 * 0x14 + 0xc) = uVar30;
        *(int *)(param_5 + 100) = *(int *)(param_5 + 100) + 1;
      }
      hb_buffer_t::sync(param_5);
    }
  }
  if (((byte)param_5[0xc0] & 1) != 0) {
    uVar57 = *(uint *)(param_5 + 0x60);
    if (*(int *)(param_5 + 0x1c) == 0) {
      if (uVar57 != 0) {
        lVar83 = 0x24;
        uVar54 = 0;
        do {
          if (uVar57 - 1 == uVar54) {
            uVar54 = (ulong)uVar57;
            break;
          }
          uVar54 = uVar54 + 1;
          pbVar76 = (byte *)(*(long *)(param_5 + 0x70) + lVar83);
          lVar83 = lVar83 + 0x14;
        } while ((*pbVar76 & 0x80) != 0);
        uVar85 = 0;
        uVar84 = uVar57;
        do {
          uVar52 = (uint)uVar54;
          if (1 < uVar52 - (uint)uVar85) {
            hb_buffer_t::merge_clusters_impl(param_5,(uint)uVar85,uVar52);
            uVar84 = *(uint *)(param_5 + 0x60);
            param_2 = extraout_XMM1_Qa_27;
          }
          uVar58 = uVar52 + 1;
          if (uVar52 + 1 < uVar84) {
            uVar58 = uVar84;
          }
          uVar85 = uVar54 & 0xffffffff;
          do {
            uVar62 = uVar58;
            if (uVar58 - 1 == (int)uVar85) break;
            uVar62 = (int)uVar85 + 1;
            uVar85 = (ulong)uVar62;
          } while ((*(byte *)(*(long *)(param_5 + 0x70) + 0x10 + (ulong)uVar62 * 0x14) & 0x80) != 0)
          ;
          uVar85 = uVar54 & 0xffffffff;
          uVar54 = (ulong)uVar62;
        } while (uVar52 < uVar57);
      }
    }
    else if (uVar57 != 0) {
      lVar83 = 0x24;
      uVar54 = 0;
      do {
        if (uVar57 - 1 == uVar54) {
          uVar54 = (ulong)uVar57;
          break;
        }
        uVar54 = uVar54 + 1;
        pbVar76 = (byte *)(*(long *)(param_5 + 0x70) + lVar83);
        lVar83 = lVar83 + 0x14;
      } while ((*pbVar76 & 0x80) != 0);
      uVar88 = (ulong)uVar57;
      uVar85 = 0;
      do {
        uVar84 = (uint)uVar54;
        uVar48 = uVar54 & 0xffffffff;
        uVar54 = uVar54 & 0xffffffff;
        if ((uint)uVar88 < uVar84) {
          uVar54 = uVar88;
        }
        uVar52 = (uint)uVar54;
        uVar58 = (uint)uVar85;
        if (1 < uVar52 - uVar58) {
          param_5[0xc0] = (hb_buffer_t)((byte)param_5[0xc0] | 0x20);
          lVar83 = *(long *)(param_5 + 0x70);
          puVar78 = (hb_buffer_t *)0xffffffff;
          if (uVar52 != uVar58) {
            if (*(int *)(param_5 + 0x1c) == 2) {
              if (uVar58 < uVar52) {
                uVar88 = uVar54 - uVar85;
                puVar78 = (hb_buffer_t *)0xffffffff;
                if (8 < uVar88) {
                  uVar75 = (ulong)((uint)uVar88 & 7);
                  if (uVar75 == 0) {
                    uVar75 = 8;
                  }
                  lVar65 = (uVar75 + uVar85) - uVar54;
                  puVar31 = (undefined4 *)(lVar83 + uVar85 * 0x14 + 0x94);
                  auVar131._8_4_ = 0xffffffff;
                  auVar131._0_8_ = 0xffffffffffffffff;
                  auVar131._12_4_ = 0xffffffff;
                  auVar104._8_4_ = 0xffffffff;
                  auVar104._0_8_ = 0xffffffffffffffff;
                  auVar104._12_4_ = 0xffffffff;
                  do {
                    in_XMM4._12_4_ = puVar31[-0x14];
                    in_XMM4._8_4_ = puVar31[-0x19];
                    in_XMM4._4_4_ = puVar31[-0x1e];
                    in_XMM4._0_4_ = puVar31[-0x23];
                    in_XMM5._12_4_ = *puVar31;
                    in_XMM5._8_4_ = puVar31[-5];
                    in_XMM5._4_4_ = puVar31[-10];
                    in_XMM5._0_4_ = puVar31[-0xf];
                    auVar115 = in_XMM4 ^ _DAT_006524b0;
                    auVar110 = auVar131 ^ _DAT_006524b0;
                    auVar116._0_4_ = -(uint)(auVar110._0_4_ < auVar115._0_4_);
                    auVar116._4_4_ = -(uint)(auVar110._4_4_ < auVar115._4_4_);
                    auVar116._8_4_ = -(uint)(auVar110._8_4_ < auVar115._8_4_);
                    auVar116._12_4_ = -(uint)(auVar110._12_4_ < auVar115._12_4_);
                    auVar131 = ~auVar116 & in_XMM4 | auVar131 & auVar116;
                    auVar115 = in_XMM5 ^ _DAT_006524b0;
                    auVar110 = auVar104 ^ _DAT_006524b0;
                    auVar117._0_4_ = -(uint)(auVar110._0_4_ < auVar115._0_4_);
                    auVar117._4_4_ = -(uint)(auVar110._4_4_ < auVar115._4_4_);
                    auVar117._8_4_ = -(uint)(auVar110._8_4_ < auVar115._8_4_);
                    auVar117._12_4_ = -(uint)(auVar110._12_4_ < auVar115._12_4_);
                    auVar104 = ~auVar117 & in_XMM5 | auVar104 & auVar117;
                    puVar31 = puVar31 + 0x28;
                    lVar65 = lVar65 + 8;
                  } while (lVar65 != 0);
                  uVar85 = uVar85 + (uVar88 - uVar75);
                  auVar110 = auVar131 ^ _DAT_006524b0;
                  auVar115 = auVar104 ^ _DAT_006524b0;
                  auVar118._0_4_ = -(uint)(auVar110._0_4_ < auVar115._0_4_);
                  auVar118._4_4_ = -(uint)(auVar110._4_4_ < auVar115._4_4_);
                  auVar118._8_4_ = -(uint)(auVar110._8_4_ < auVar115._8_4_);
                  auVar118._12_4_ = -(uint)(auVar110._12_4_ < auVar115._12_4_);
                  auVar115 = ~auVar118 & auVar104 | auVar131 & auVar118;
                  auVar110._0_8_ = auVar115._8_8_;
                  auVar110._8_4_ = auVar115._8_4_;
                  auVar110._12_4_ = auVar115._12_4_;
                  auVar131 = auVar115 ^ _DAT_006524b0;
                  auVar104 = auVar110 ^ _DAT_006524b0;
                  auVar108._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                  auVar108._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                  auVar108._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                  auVar108._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                  in_XMM2 = ~auVar108 & auVar110 | auVar115 & auVar108;
                  uVar29 = in_XMM2._4_4_;
                  auVar115._4_4_ = uVar29;
                  auVar115._0_4_ = uVar29;
                  auVar115._8_4_ = uVar29;
                  auVar115._12_4_ = uVar29;
                  auVar131 = in_XMM2 ^ _DAT_006524b0;
                  auVar104 = auVar115 ^ _DAT_006524b0;
                  auVar119._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                  auVar119._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                  auVar119._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                  auVar119._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                  in_XMM2 = in_XMM2 & auVar119;
                  in_XMM3 = ~auVar119 & auVar115 | in_XMM2;
                  puVar78 = (undefined1 *)(ulong)in_XMM3._0_4_;
                  in_XMM6 = _DAT_006524b0;
                }
                lVar65 = uVar54 - uVar85;
                puVar59 = (uint *)(lVar83 + uVar85 * 0x14 + 8);
                do {
                  if (*puVar59 < (uint)puVar78) {
                    puVar78 = (undefined1 *)(ulong)*puVar59;
                  }
                  puVar59 = puVar59 + 5;
                  lVar65 = lVar65 + -1;
                } while (lVar65 != 0);
              }
            }
            else {
              uVar62 = *(uint *)(lVar83 + 8 + uVar85 * 0x14);
              uVar56 = *(uint *)(lVar83 + 8 + (ulong)(uVar52 - 1) * 0x14);
              puVar78 = (undefined1 *)(ulong)uVar62;
              if (uVar56 < uVar62) {
                puVar78 = (undefined1 *)(ulong)uVar56;
              }
            }
          }
          param_8 = 3;
          hb_buffer_t::_infos_set_glyph_flags(param_5,lVar83,uVar58,uVar52,(uint)puVar78,3);
          uVar88 = (ulong)*(uint *)(param_5 + 0x60);
          param_2 = extraout_XMM1_Qa_21;
        }
        uVar85 = (ulong)(uVar84 + 1);
        if (uVar84 + 1 < (uint)uVar88) {
          uVar85 = uVar88;
        }
        uVar54 = uVar48;
        do {
          if ((int)uVar85 + -1 == (int)uVar54) {
            uVar54 = uVar85;
            break;
          }
          uVar52 = (int)uVar54 + 1;
          uVar54 = (ulong)uVar52;
        } while ((*(byte *)(*(long *)(param_5 + 0x70) + 0x10 + (ulong)uVar52 * 0x14) & 0x80) != 0);
        uVar85 = uVar48;
      } while (uVar84 < uVar57);
    }
  }
  uVar57 = *(uint *)(param_5 + 0x38);
  uVar30 = hb_script_get_horizontal_direction(*(int *)(param_5 + 0x3c));
  uVar84 = (uint)uVar30;
  if ((uVar84 == 5) && (uVar57 == 4)) {
    uVar54 = (ulong)*(uint *)(param_5 + 0x60);
    if (uVar54 == 0) {
      bVar25 = 0;
      puVar78 = (hb_buffer_t *)0x0;
      bVar90 = false;
    }
    else {
      puVar41 = (ushort *)(*(long *)(param_5 + 0x70) + 0x10);
      bVar90 = true;
      puVar78 = (hb_buffer_t *)0x0;
      param_8 = 0x3e0;
      bVar25 = 0;
      uVar85 = 1;
      do {
        if ((*puVar41 & 0x1f) == 0xd) {
          puVar78 = (hb_buffer_t *)0x1;
        }
        else {
          if ((0x3e0U >> (*puVar41 & 0x1f) & 1) != 0) break;
          if (*(int *)(puVar41 + -8) - 0x1f1e6U < 0x1a) {
            bVar25 = 1;
          }
        }
        bVar90 = uVar85 < uVar54;
        puVar41 = puVar41 + 10;
        bVar91 = uVar85 != uVar54;
        uVar85 = uVar85 + 1;
      } while (bVar91);
    }
    uVar84 = (byte)(~bVar90 & (bVar25 | (byte)puVar78)) ^ 5;
  }
  phVar3 = param_5 + 0x60;
  uVar52 = uVar57 & 0xfffffffe;
  phVar43 = (hb_buffer_t *)(ulong)uVar52;
  uVar30 = extraout_XMM0_Qa;
  if (uVar52 == 4) {
    if ((uVar57 != uVar84) && (uVar84 != 0)) goto LAB_003f79fd;
  }
  else if ((uVar57 != 6) && (uVar52 == 6)) {
LAB_003f79fd:
    uVar57 = *(uint *)(param_5 + 0x1c);
    phVar43 = (hb_buffer_t *)(ulong)uVar57;
    uVar84 = *(uint *)(param_5 + 0x60);
    uVar54 = (ulong)uVar84;
    if (uVar84 == 1) {
      uVar52 = 0;
      uVar84 = 1;
      uVar85 = 1;
LAB_003f7bc7:
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = uVar30;
      auVar130._8_8_ = param_2;
      auVar130._0_8_ = uVar30;
      uVar58 = (uint)uVar85;
      if ((uVar57 == 1) && (auVar130 = auVar15, 1 < uVar58 - uVar52)) {
        auVar130 = hb_buffer_t::merge_clusters_impl(param_5,uVar52,uVar58);
        uVar84 = *(uint *)(param_5 + 0x60);
      }
      param_2 = auVar130._8_8_;
      uVar30 = auVar130._0_8_;
      uVar57 = uVar52;
      if (uVar84 < uVar52) {
        uVar57 = uVar84;
      }
      phVar68 = (hb_buffer_t *)(ulong)uVar57;
      if (uVar58 <= uVar84) {
        uVar84 = uVar58;
      }
      phVar43 = phVar68;
      if ((uVar57 + 2 <= uVar84) && (uVar57 < uVar84 - 1)) {
        uVar54 = (ulong)(uVar84 - 1);
        phVar43 = (hb_buffer_t *)(*(long *)(param_5 + 0x70) + (long)phVar68 * 0x14);
        puVar53 = (undefined8 *)(*(long *)(param_5 + 0x70) + uVar54 * 0x14);
        do {
          uVar54 = uVar54 - 1;
          uStack_1d8._0_4_ = *(uint *)(puVar53 + 2);
          uVar30 = *puVar53;
          uVar36 = puVar53[1];
          local_1e8._0_4_ = (uint)uVar30;
          local_1e8._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
          uStack_1e0._0_4_ = (uint)uVar36;
          uStack_1e0._4_4_ = (undefined4)((ulong)uVar36 >> 0x20);
          *(uint *)(puVar53 + 2) = *(uint *)(phVar43 + 0x10);
          uVar10 = *(undefined8 *)(phVar43 + 8);
          *puVar53 = *(undefined8 *)phVar43;
          puVar53[1] = uVar10;
          *(uint *)(phVar43 + 0x10) = (uint)uStack_1d8;
          *(undefined8 *)phVar43 = uVar30;
          *(undefined8 *)(phVar43 + 8) = uVar36;
          phVar68 = phVar68 + 1;
          phVar43 = phVar43 + 0x14;
          puVar53 = (undefined8 *)((long)puVar53 + -0x14);
        } while (phVar68 < (hb_buffer_t *)(uVar54 & 0xffffffff));
      }
      if (param_5[0x5b] != (hb_buffer_t)0x0) {
        uVar57 = *(uint *)(param_5 + 0x60);
        if (uVar57 < uVar52) {
          uVar52 = uVar57;
        }
        if (uVar57 < uVar58) {
          uVar58 = uVar57;
        }
        if ((uVar52 + 2 <= uVar58) && (uVar52 < uVar58 - 1)) {
          uVar54 = (ulong)(uVar58 - 1);
          uVar85 = (ulong)uVar52;
          phVar43 = (hb_buffer_t *)(*(long *)(param_5 + 0x80) + uVar85 * 0x14);
          puVar53 = (undefined8 *)(*(long *)(param_5 + 0x80) + uVar54 * 0x14);
          do {
            uVar54 = uVar54 - 1;
            uStack_1d8._0_4_ = *(uint *)(puVar53 + 2);
            uVar30 = *puVar53;
            uVar36 = puVar53[1];
            local_1e8._0_4_ = (uint)uVar30;
            local_1e8._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
            uStack_1e0._0_4_ = (uint)uVar36;
            uStack_1e0._4_4_ = (undefined4)((ulong)uVar36 >> 0x20);
            *(uint *)(puVar53 + 2) = *(uint *)(phVar43 + 0x10);
            uVar10 = *(undefined8 *)(phVar43 + 8);
            *puVar53 = *(undefined8 *)phVar43;
            puVar53[1] = uVar10;
            *(uint *)(phVar43 + 0x10) = (uint)uStack_1d8;
            *(undefined8 *)phVar43 = uVar30;
            *(undefined8 *)(phVar43 + 8) = uVar36;
            uVar85 = uVar85 + 1;
            phVar43 = phVar43 + 0x14;
            puVar53 = (undefined8 *)((long)puVar53 + -0x14);
          } while (uVar85 < (uVar54 & 0xffffffff));
        }
      }
      uVar57 = *(uint *)(param_5 + 0x60);
      if (1 < uVar57) {
        phVar43 = *(hb_buffer_t **)(param_5 + 0x70);
        uVar54 = (ulong)(uVar57 - 1);
        phVar68 = phVar43 + uVar54 * 0x14;
        uVar85 = 0;
        do {
          uVar54 = uVar54 - 1;
          uStack_1d8._0_4_ = *(uint *)(phVar68 + 0x10);
          uVar30 = *(undefined8 *)phVar68;
          uVar36 = *(undefined8 *)(phVar68 + 8);
          local_1e8._0_4_ = (uint)uVar30;
          local_1e8._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
          uStack_1e0._0_4_ = (uint)uVar36;
          uStack_1e0._4_4_ = (undefined4)((ulong)uVar36 >> 0x20);
          *(uint *)(phVar68 + 0x10) = *(uint *)(phVar43 + 0x10);
          uVar10 = *(undefined8 *)(phVar43 + 8);
          *(undefined8 *)phVar68 = *(undefined8 *)phVar43;
          *(undefined8 *)(phVar68 + 8) = uVar10;
          *(uint *)(phVar43 + 0x10) = (uint)uStack_1d8;
          *(undefined8 *)phVar43 = uVar30;
          *(undefined8 *)(phVar43 + 8) = uVar36;
          uVar85 = uVar85 + 1;
          phVar43 = phVar43 + 0x14;
          phVar68 = phVar68 + -0x14;
        } while (uVar85 < (uVar54 & 0xffffffff));
      }
      if (param_5[0x5b] != (hb_buffer_t)0x0) {
        uVar84 = *(uint *)(param_5 + 0x60);
        phVar43 = (hb_buffer_t *)(ulong)uVar84;
        if (uVar84 < uVar57) {
          uVar57 = uVar84;
        }
        if (1 < uVar57) {
          phVar43 = *(hb_buffer_t **)(param_5 + 0x80);
          uVar54 = (ulong)(uVar57 - 1);
          phVar68 = phVar43 + uVar54 * 0x14;
          uVar85 = 0;
          do {
            uVar54 = uVar54 - 1;
            uStack_1d8._0_4_ = *(uint *)(phVar68 + 0x10);
            uVar30 = *(undefined8 *)phVar68;
            uVar36 = *(undefined8 *)(phVar68 + 8);
            local_1e8._0_4_ = (uint)uVar30;
            local_1e8._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
            uStack_1e0._0_4_ = (uint)uVar36;
            uStack_1e0._4_4_ = (undefined4)((ulong)uVar36 >> 0x20);
            *(uint *)(phVar68 + 0x10) = *(uint *)(phVar43 + 0x10);
            uVar10 = *(undefined8 *)(phVar43 + 8);
            *(undefined8 *)phVar68 = *(undefined8 *)phVar43;
            *(undefined8 *)(phVar68 + 8) = uVar10;
            *(uint *)(phVar43 + 0x10) = (uint)uStack_1d8;
            *(undefined8 *)phVar43 = uVar30;
            *(undefined8 *)(phVar43 + 8) = uVar36;
            uVar85 = uVar85 + 1;
            phVar43 = phVar43 + 0x14;
            phVar68 = phVar68 + -0x14;
          } while (uVar85 < (uVar54 & 0xffffffff));
        }
      }
    }
    else if (uVar84 != 0) {
      uVar88 = 0;
      uVar85 = 1;
      do {
        auVar129._8_8_ = param_2;
        auVar129._0_8_ = uVar30;
        uVar52 = (uint)uVar88;
        uVar84 = (uint)uVar54;
        lVar83 = *(long *)(param_5 + 0x70);
        if ((*(byte *)(lVar83 + 0x10 + uVar85 * 0x14) & 0x80) == 0) {
          uVar58 = (uint)uVar85;
          if (1 < uVar58 - uVar52 && uVar57 == 1) {
            auVar129 = hb_buffer_t::merge_clusters_impl(param_5,uVar52,uVar58);
            lVar83 = *(long *)(param_5 + 0x70);
            uVar84 = *(uint *)(param_5 + 0x60);
          }
          param_2 = auVar129._8_8_;
          uVar30 = auVar129._0_8_;
          uVar62 = uVar52;
          if (uVar84 < uVar52) {
            uVar62 = uVar84;
          }
          if (uVar85 <= uVar84) {
            uVar84 = uVar58;
          }
          if ((uVar62 + 2 <= uVar84) && (uVar62 < uVar84 - 1)) {
            uVar54 = (ulong)(uVar84 - 1);
            uVar88 = (ulong)uVar62;
            puVar53 = (undefined8 *)(lVar83 + uVar88 * 0x14);
            puVar42 = (undefined8 *)(lVar83 + uVar54 * 0x14);
            do {
              uVar54 = uVar54 - 1;
              uStack_1d8._0_4_ = *(uint *)(puVar42 + 2);
              uVar30 = *puVar42;
              uVar36 = puVar42[1];
              local_1e8._0_4_ = (uint)uVar30;
              local_1e8._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
              uStack_1e0._0_4_ = (uint)uVar36;
              uStack_1e0._4_4_ = (undefined4)((ulong)uVar36 >> 0x20);
              *(undefined4 *)(puVar42 + 2) = *(undefined4 *)(puVar53 + 2);
              uVar10 = puVar53[1];
              *puVar42 = *puVar53;
              puVar42[1] = uVar10;
              *(uint *)(puVar53 + 2) = (uint)uStack_1d8;
              *puVar53 = uVar30;
              puVar53[1] = uVar36;
              uVar88 = uVar88 + 1;
              puVar53 = (undefined8 *)((long)puVar53 + 0x14);
              puVar42 = (undefined8 *)((long)puVar42 + -0x14);
            } while (uVar88 < (uVar54 & 0xffffffff));
          }
          if (param_5[0x5b] != (hb_buffer_t)0x0) {
            uVar84 = *(uint *)(param_5 + 0x60);
            if (uVar84 < uVar52) {
              uVar52 = uVar84;
            }
            if (uVar84 < uVar85) {
              uVar58 = uVar84;
            }
            if ((uVar52 + 2 <= uVar58) && (uVar52 < uVar58 - 1)) {
              uVar54 = (ulong)(uVar58 - 1);
              uVar88 = (ulong)uVar52;
              puVar53 = (undefined8 *)(*(long *)(param_5 + 0x80) + uVar88 * 0x14);
              puVar42 = (undefined8 *)(*(long *)(param_5 + 0x80) + uVar54 * 0x14);
              do {
                uVar54 = uVar54 - 1;
                uStack_1d8._0_4_ = *(uint *)(puVar42 + 2);
                uVar30 = *puVar42;
                uVar36 = puVar42[1];
                local_1e8._0_4_ = (uint)uVar30;
                local_1e8._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
                uStack_1e0._0_4_ = (uint)uVar36;
                uStack_1e0._4_4_ = (undefined4)((ulong)uVar36 >> 0x20);
                *(undefined4 *)(puVar42 + 2) = *(undefined4 *)(puVar53 + 2);
                uVar10 = puVar53[1];
                *puVar42 = *puVar53;
                puVar42[1] = uVar10;
                *(uint *)(puVar53 + 2) = (uint)uStack_1d8;
                *puVar53 = uVar30;
                puVar53[1] = uVar36;
                uVar88 = uVar88 + 1;
                puVar53 = (undefined8 *)((long)puVar53 + 0x14);
                puVar42 = (undefined8 *)((long)puVar42 + -0x14);
              } while (uVar88 < (uVar54 & 0xffffffff));
            }
          }
          uVar88 = uVar85 & 0xffffffff;
        }
        uVar52 = (uint)uVar88;
        uVar85 = uVar85 + 1;
        uVar84 = *(uint *)phVar3;
        uVar54 = (ulong)uVar84;
      } while (uVar85 < uVar54);
      goto LAB_003f7bc7;
    }
    param_5[0x38] = (hb_buffer_t)((byte)param_5[0x38] ^ 1);
  }
  puVar59 = (uint *)(param_3 + 0x60);
  if (*(long *)(*(long *)(param_3 + 0x80) + 0x20) != 0) {
    bVar90 = hb_buffer_t::message
                       (uVar30,param_2,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                        in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"start preprocess-text",phVar43,
                        puVar78,param_8,in_stack_fffffffffffffd48);
    uVar30 = extraout_XMM0_Qa_00;
    if (bVar90) {
      auVar131 = (**(code **)(*(long *)(param_3 + 0x80) + 0x20))(puVar59,param_5,param_4);
      param_2 = auVar131._8_8_;
      hb_buffer_t::message
                (auVar131._0_8_,param_2,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                 in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"end preprocess-text",phVar43,puVar78,
                 param_8,in_stack_fffffffffffffd48);
      uVar30 = extraout_XMM0_Qa_01;
    }
  }
  uVar57 = *(uint *)(param_5 + 0x60);
  uVar54 = (ulong)uVar57;
  lVar83 = *(long *)(param_5 + 0x70);
  if (((uVar6 & 0xfffffffd) == 5) && (uVar54 != 0)) {
    lVar65 = *(long *)(param_5 + 0x10);
    uVar84 = *(uint *)(param_3 + 0xfc);
    lVar86 = 0;
LAB_003f7eeb:
    do {
      iVar28 = (**(code **)(lVar65 + 0x30))
                         (lVar65,*(undefined4 *)(lVar83 + lVar86),*(undefined8 *)(lVar65 + 0x70));
      uVar30 = extraout_XMM0_Qa_03;
      param_2 = extraout_XMM1_Qa_02;
      if (iVar28 != *(int *)(lVar83 + lVar86)) {
        local_1e8._0_4_ = 0;
        lVar73 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
        if (lVar73 == 0) {
          puVar78 = (hb_buffer_t *)0x0;
        }
        else {
          puVar78 = *(undefined1 **)(lVar73 + 0x10);
        }
        phVar43 = (hb_buffer_t *)&local_1e8;
        iVar27 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                           (param_4,*(undefined8 *)(param_4 + 0x98),iVar28);
        uVar30 = extraout_XMM0_Qa_02;
        param_2 = extraout_XMM1_Qa_01;
        if (iVar27 != 0) {
          *(int *)(lVar83 + lVar86) = iVar28;
          lVar86 = lVar86 + 0x14;
          if (uVar54 * 0x14 == lVar86) break;
          goto LAB_003f7eeb;
        }
      }
      puVar45 = (uint *)(lVar83 + 4 + lVar86);
      *puVar45 = *puVar45 | uVar84;
      lVar86 = lVar86 + 0x14;
    } while (uVar54 * 0x14 != lVar86);
  }
  if ((((uVar6 & 0xfffffffe) == 6) && ((*(byte *)(param_3 + 0x108) & 8) == 0)) && (uVar57 != 0)) {
    lVar65 = 0;
    do {
      uVar57 = *(uint *)(lVar83 + lVar65);
      uVar84 = uVar57 >> 8;
      phVar43 = (hb_buffer_t *)(ulong)uVar84;
      if (uVar84 < 0xfe) {
        if (uVar84 == 0x20) {
          phVar68 = (hb_buffer_t *)(ulong)(uVar57 - 0x2013);
          phVar43 = phVar68;
          if (uVar57 - 0x2013 < 0x14) {
            uVar84 = 0xfe32;
            phVar43 = (hb_buffer_t *)
                      ((long)&switchD_003f8054::switchdataD_005e046c +
                      (long)(int)(&switchD_003f8054::switchdataD_005e046c)[(long)phVar68]);
            switch(phVar68) {
            case (hb_buffer_t *)0x0:
              goto switchD_003f8054_caseD_2013;
            case (hb_buffer_t *)0x1:
              uVar84 = 0xfe31;
              if (uVar57 != 0xfe31) {
LAB_003f807d:
                local_1e8._0_4_ = 0;
                lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
                if (lVar86 == 0) {
                  puVar78 = (hb_buffer_t *)0x0;
                }
                else {
                  puVar78 = *(undefined1 **)(lVar86 + 0x10);
                }
                phVar43 = (hb_buffer_t *)&local_1e8;
                iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                                   (param_4,*(undefined8 *)(param_4 + 0x98),uVar84);
                uVar30 = extraout_XMM0_Qa_04;
                param_2 = extraout_XMM1_Qa_03;
                if (iVar28 != 0) {
                  *(uint *)(lVar83 + lVar65) = uVar84;
                }
              }
              break;
            case (hb_buffer_t *)0x12:
              uVar84 = 0xfe30;
              if (uVar57 != 0xfe30) goto LAB_003f807d;
              break;
            case (hb_buffer_t *)0x13:
              uVar84 = 0xfe19;
              if (uVar57 != 0xfe19) goto LAB_003f807d;
            }
          }
        }
        else if (uVar84 == 0x30) {
          uVar84 = uVar57 - 0x3001;
          phVar43 = (hb_buffer_t *)(ulong)uVar84;
          if ((uVar84 < 0x17) && ((0x79ff83U >> (uVar84 & 0x1f) & 1) != 0)) {
            phVar43 = (hb_buffer_t *)(long)(int)uVar84;
            uVar84 = *(uint *)(&DAT_0060894c + (long)phVar43 * 4);
            goto joined_r0x003f8077;
          }
        }
      }
      else if (uVar84 == 0xfe) {
        uVar84 = 0xfe34;
        if (uVar57 == 0xfe4f) {
switchD_003f8054_caseD_2013:
joined_r0x003f8077:
          if (uVar84 != uVar57) goto LAB_003f807d;
        }
      }
      else if (uVar84 == 0xff) {
        phVar68 = (hb_buffer_t *)(ulong)(uVar57 - 0xff01);
        phVar43 = phVar68;
        if (uVar57 - 0xff01 < 0x5d) {
          uVar84 = 0xfe15;
          phVar43 = (hb_buffer_t *)
                    ((long)&switchD_003f8027::switchdataD_005e02f8 +
                    (long)(int)(&switchD_003f8027::switchdataD_005e02f8)[(long)phVar68]);
          switch(phVar68) {
          case (hb_buffer_t *)0x0:
            goto switchD_003f8054_caseD_2013;
          case (hb_buffer_t *)0x7:
            uVar84 = 0xfe35;
            if (uVar57 != 0xfe35) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0x8:
            uVar84 = 0xfe36;
            if (uVar57 != 0xfe36) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0xb:
            uVar84 = 0xfe10;
            if (uVar57 != 0xfe10) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0x19:
            uVar84 = 0xfe13;
            if (uVar57 != 0xfe13) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0x1a:
            uVar84 = 0xfe14;
            if (uVar57 != 0xfe14) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0x1e:
            uVar84 = 0xfe16;
            if (uVar57 != 0xfe16) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0x3a:
            uVar84 = 0xfe47;
            if (uVar57 != 0xfe47) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0x3c:
            uVar84 = 0xfe48;
            if (uVar57 != 0xfe48) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0x3e:
            uVar84 = 0xfe33;
            if (uVar57 != 0xfe33) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0x5a:
            uVar84 = 0xfe37;
            if (uVar57 != 0xfe37) goto LAB_003f807d;
            break;
          case (hb_buffer_t *)0x5c:
            uVar84 = 0xfe38;
            if (uVar57 != 0xfe38) goto LAB_003f807d;
          }
        }
      }
      lVar65 = lVar65 + 0x14;
    } while (uVar54 * 0x14 != lVar65);
  }
  param_5[0xb8] = (hb_buffer_t)((byte)param_5[0xb8] | 0xf);
  pGVar82 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(param_5 + 0x70);
  uVar57 = *(uint *)(param_5 + 0x60);
  if (uVar57 != 0) {
    lVar83 = *(long *)(param_3 + 0x80);
    uVar84 = *(uint *)(lVar83 + 0x54);
    if (uVar84 == 4) {
      uVar84 = 2;
    }
    local_1d0 = *(ulong *)(param_5 + 0x10);
    local_1c8 = hb_ot_shape_normalize_context_t::decompose_unicode;
    if (*(code **)(lVar83 + 0x30) != (code *)0x0) {
      local_1c8 = *(code **)(lVar83 + 0x30);
    }
    pcVar44 = hb_ot_shape_normalize_context_t::compose_unicode;
    if (*(code **)(lVar83 + 0x38) != (code *)0x0) {
      pcVar44 = *(code **)(lVar83 + 0x38);
    }
    local_1c0._0_8_ = pcVar44;
    *(undefined2 *)(param_5 + 0x5a) = 1;
    *(undefined4 *)(param_5 + 100) = 0;
    *(undefined8 *)(param_5 + 0x78) = *(undefined8 *)(param_5 + 0x70);
    *(undefined4 *)(param_5 + 0x5c) = 0;
    uVar54 = 0;
    bVar90 = false;
    local_1e8 = puVar59;
    uStack_1e0 = param_5;
    uStack_1d8 = (hb_ot_apply_context_t *)param_4;
LAB_003f8250:
    uVar52 = (uint)uVar54;
    uVar58 = uVar52 + 1;
    if (uVar52 + 1 < uVar57) {
      uVar58 = uVar57;
    }
    uVar62 = uVar52 - 1;
    do {
      uVar56 = uVar62 + 2;
      uVar39 = uVar58;
      if (uVar57 <= uVar56) break;
      uVar56 = *(uint *)(*(long *)pGVar82 + 0x10 + (ulong)uVar56 * 0x14);
      uVar62 = uVar62 + 1;
      uVar39 = uVar62;
    } while ((0x1c00U >> (uVar56 & 0x1f) & 1) == 0);
    if ((uVar84 & 0xfffffffd) == 1) {
      phVar43 = (hb_buffer_t *)(ulong)uVar56;
      pGVar80 = pGVar82;
      phVar68 = uStack_1e0;
      phVar35 = uStack_1d8;
joined_r0x003f853f:
      while( true ) {
        uStack_1d8 = phVar35;
        uStack_1e0 = phVar68;
        if ((uVar39 <= uVar52) || (param_5[0x58] == (hb_buffer_t)0x0)) break;
        decompose_current_character((long)&local_1e8,(uint)((uVar84 & 0xfffffffd) != 1));
        uVar52 = *(uint *)(param_5 + 0x5c);
        uVar54 = (ulong)uVar52;
        param_2 = extraout_XMM1_Qa_04;
        phVar68 = uStack_1e0;
        phVar35 = uStack_1d8;
      }
      if (((uint)uVar54 == uVar57) || (param_5[0x58] == (hb_buffer_t)0x0)) goto LAB_003f8c32;
      uVar52 = (uint)uVar54 + 1;
      if (uVar52 < uVar57) {
        uVar52 = uVar57;
      }
      uVar58 = uVar52 - 1;
      do {
        uVar62 = (uint)uVar54;
        uVar56 = uVar62 + 1;
        uVar54 = (ulong)uVar56;
        if (uVar57 <= uVar56) {
          uVar54 = (ulong)uVar52;
          uVar39 = *(uint *)(phVar68 + 0x5c);
          if (uVar39 < uVar52) goto LAB_003f8391;
          goto LAB_003f8410;
        }
        uVar39 = *(uint *)(*(long *)pGVar82 + 0x10 + (ulong)uVar56 * 0x14);
        phVar43 = (hb_buffer_t *)(ulong)uVar39;
      } while ((0x1c00U >> (uVar39 & 0x1f) & 1) != 0);
      uVar39 = *(uint *)(phVar68 + 0x5c);
      uVar58 = uVar62;
      if (uVar39 < uVar56) {
LAB_003f8391:
        uVar85 = (ulong)uVar39;
        if (phVar68[0x58] != (hb_buffer_t)0x0) {
          puVar78 = *(undefined1 **)(phVar68 + 0x70);
          phVar43 = (hb_buffer_t *)(puVar78 + uVar85 * 0x14);
          uVar52 = (uint)uVar54;
          do {
            if (((*(uint *)phVar43 & 0xfffffff0) == 0xfe00) ||
               (0xffffff0f < *(uint *)phVar43 - 0xe01f0)) {
              if (uVar39 < uVar58) goto LAB_003f8560;
              goto LAB_003f8afe;
            }
            uVar62 = (int)uVar54 - 1;
            uVar54 = (ulong)uVar62;
            phVar43 = phVar43 + 0x14;
          } while (uVar39 != uVar62);
          do {
            decompose_current_character((long)&local_1e8,(uint)(uVar84 == 0));
            param_2 = extraout_XMM1_Qa_05;
            if (uVar52 <= *(uint *)(phVar68 + 0x5c)) break;
          } while (phVar68[0x58] != (hb_buffer_t)0x0);
        }
      }
      goto LAB_003f8410;
    }
    phVar43 = (hb_buffer_t *)(*(long *)pGVar82 + uVar54 * 0x14);
    pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(*(long *)pGVar82 + uVar54 * 0x14 + 0xc);
    puVar78 = (hb_buffer_t *)0x14;
    uVar52 = (**(code **)(*(long *)(param_4 + 0x90) + 0x38))
                       (param_4,*(undefined8 *)(param_4 + 0x98),uVar39 - uVar52);
    param_2 = extraout_XMM1_Qa_06;
    if (param_5[0x5a] == (hb_buffer_t)0x0) {
LAB_003f852d:
      uVar52 = *(int *)(param_5 + 0x5c) + uVar52;
      uVar54 = (ulong)uVar52;
      *(uint *)(param_5 + 0x5c) = uVar52;
      phVar68 = uStack_1e0;
      phVar35 = uStack_1d8;
      goto joined_r0x003f853f;
    }
    pvVar70 = *(void **)(param_5 + 0x78);
    pvVar38 = *(void **)(param_5 + 0x70);
    iVar28 = *(int *)(param_5 + 100);
    if ((pvVar70 == pvVar38) && (iVar28 == *(int *)(param_5 + 0x5c))) {
LAB_003f8526:
      *(uint *)(param_5 + 100) = iVar28 + uVar52;
      goto LAB_003f852d;
    }
    uVar58 = iVar28 + uVar52;
    if ((uVar58 == 0) || (uVar58 < *(uint *)(param_5 + 0x68))) {
      if (pvVar70 == pvVar38) {
LAB_003f84b5:
        uVar58 = *(uint *)(param_5 + 100);
        if (*(int *)(param_5 + 0x5c) + uVar52 < uVar58 + uVar52) {
          pvVar70 = *(void **)(param_5 + 0x80);
          *(void **)(param_5 + 0x78) = pvVar70;
          if ((ulong)uVar58 != 0) {
            memcpy(pvVar70,pvVar38,(ulong)uVar58 * 0x14);
            pvVar38 = *(void **)(param_5 + 0x70);
            pvVar70 = *(void **)(param_5 + 0x78);
          }
        }
        else {
          pvVar70 = pvVar38;
        }
      }
LAB_003f84f5:
      phVar43 = (hb_buffer_t *)((ulong)*(uint *)(param_5 + 100) * 5);
      memmove((void *)((long)pvVar70 + (ulong)*(uint *)(param_5 + 100) * 0x14),
              (void *)((long)pvVar38 + (ulong)*(uint *)(param_5 + 0x5c) * 0x14),(ulong)uVar52 * 0x14
             );
      iVar28 = *(int *)(param_5 + 100);
      goto LAB_003f8526;
    }
    phVar43 = param_5;
    uVar30 = hb_buffer_t::enlarge(param_5,uVar58);
    if ((char)uVar30 != '\0') {
      pvVar38 = *(void **)(param_5 + 0x70);
      pvVar70 = *(void **)(param_5 + 0x78);
      if (pvVar70 == pvVar38) goto LAB_003f84b5;
      goto LAB_003f84f5;
    }
LAB_003f8c32:
    hb_buffer_t::sync(param_5);
    uVar30 = extraout_XMM0_Qa_05;
    if (bVar90) goto LAB_003f8c6e;
    bVar90 = false;
    hVar4 = param_5[0xc0];
    goto joined_r0x003f8f2a;
  }
  goto LAB_003f9369;
LAB_003f8560:
  uVar62 = *(uint *)(puVar78 + (ulong)((int)uVar85 + 1) * 0x14);
  uVar29 = *(undefined4 *)(puVar78 + uVar85 * 0x14);
  *(undefined4 *)(puVar78 + uVar85 * 0x14 + 0xc) = 0;
  phVar43 = (hb_buffer_t *)(puVar78 + uVar85 * 0x14 + 0xc);
  lVar83 = *(long *)(phVar35 + 0x90);
  if (((uVar62 & 0xfffffff0) == 0xfe00) || (0xffffff0f < uVar62 - 0xe01f0)) {
    if (*(long *)(lVar83 + 0x10) == 0) {
      uVar30 = 0;
    }
    else {
      uVar30 = *(undefined8 *)(*(long *)(lVar83 + 0x10) + 0x20);
    }
    iVar28 = (**(code **)(lVar83 + 0x40))
                       (phVar35,*(undefined8 *)(phVar35 + 0x98),uVar29,uVar62,phVar43,uVar30);
    if (iVar28 != 0) {
      phVar87 = (hb_buffer_t *)((ulong)*(uint *)(phVar68 + 0x5c) * 5);
      local_78 = CONCAT44(local_78._4_4_,
                          *(undefined4 *)
                           (*(long *)(phVar68 + 0x70) + (ulong)*(uint *)(phVar68 + 0x5c) * 0x14));
      param_2 = extraout_XMM1_Qa_08;
      hb_buffer_t::replace_glyphs<unsigned_int>(phVar68,2,(undefined4 *)&local_78);
      goto LAB_003f8920;
    }
    lVar83 = *(long *)(phVar68 + 0x70);
    uVar54 = (ulong)*(uint *)(phVar68 + 0x5c);
    *(undefined4 *)(lVar83 + 0xc + uVar54 * 0x14) = 0;
    (**(code **)(*(long *)(phVar35 + 0x90) + 0x30))
              (phVar35,*(undefined8 *)(phVar35 + 0x98),*(undefined4 *)(lVar83 + uVar54 * 0x14),
               lVar83 + uVar54 * 0x14 + 0xc);
    if (phVar68[0x5a] == (hb_buffer_t)0x0) {
LAB_003f87eb:
      uVar62 = *(int *)(phVar68 + 0x5c) + 1;
      *(uint *)(phVar68 + 0x5c) = uVar62;
    }
    else {
      pvVar70 = *(void **)(phVar68 + 0x78);
      pvVar38 = *(void **)(phVar68 + 0x70);
      iVar28 = *(int *)(phVar68 + 100);
      if ((pvVar70 == pvVar38) && (iVar28 == *(int *)(phVar68 + 0x5c))) {
LAB_003f87e5:
        *(int *)(phVar68 + 100) = iVar28 + 1;
        goto LAB_003f87eb;
      }
      uVar62 = iVar28 + 1;
      if ((uVar62 == 0) || (uVar62 < *(uint *)(phVar68 + 0x68))) {
        if (pvVar70 == pvVar38) {
LAB_003f8788:
          uVar62 = *(uint *)(phVar68 + 100);
          if (*(int *)(phVar68 + 0x5c) + 1U < uVar62 + 1) {
            pvVar70 = *(void **)(phVar68 + 0x80);
            *(void **)(phVar68 + 0x78) = pvVar70;
            if ((ulong)uVar62 != 0) {
              memcpy(pvVar70,pvVar38,(ulong)uVar62 * 0x14);
              pvVar38 = *(void **)(phVar68 + 0x70);
              pvVar70 = *(void **)(phVar68 + 0x78);
            }
          }
          else {
            pvVar70 = pvVar38;
          }
        }
LAB_003f87c2:
        uVar62 = *(uint *)(phVar68 + 0x5c);
        uVar56 = *(uint *)(phVar68 + 100);
        *(undefined4 *)((long)pvVar70 + (ulong)uVar56 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar38 + (ulong)uVar62 * 0x14 + 0x10);
        puVar53 = (undefined8 *)((long)pvVar38 + (ulong)uVar62 * 0x14);
        uVar30 = puVar53[1];
        puVar42 = (undefined8 *)((long)pvVar70 + (ulong)uVar56 * 0x14);
        *puVar42 = *puVar53;
        puVar42[1] = uVar30;
        iVar28 = *(int *)(phVar68 + 100);
        goto LAB_003f87e5;
      }
      uVar30 = hb_buffer_t::enlarge(phVar68,uVar62);
      if ((char)uVar30 != '\0') {
        pvVar38 = *(void **)(phVar68 + 0x70);
        pvVar70 = *(void **)(phVar68 + 0x78);
        if (pvVar70 == pvVar38) goto LAB_003f8788;
        goto LAB_003f87c2;
      }
      uVar62 = *(uint *)(phVar68 + 0x5c);
    }
    phVar68[0xc0] = (hb_buffer_t)((byte)phVar68[0xc0] | 0x80);
    *(ushort *)(*(long *)(phVar68 + 0x70) + 0x10 + (ulong)uVar62 * 0x14) =
         *(ushort *)(*(long *)(phVar68 + 0x70) + 0x10 + (ulong)uVar62 * 0x14) & 0xe0 | 0x401;
    if (*(int *)(phVar68 + 0x2c) != -1) {
      puVar41 = (ushort *)
                (*(long *)(phVar68 + 0x70) + 0x10 + (ulong)*(uint *)(phVar68 + 0x5c) * 0x14);
      *puVar41 = *puVar41 & 0xffdf;
    }
    lVar83 = *(long *)(phVar68 + 0x70);
    uVar54 = (ulong)*(uint *)(phVar68 + 0x5c);
    *(undefined4 *)(lVar83 + 0xc + uVar54 * 0x14) = 0;
    lVar65 = *(long *)(*(long *)(phVar35 + 0x90) + 0x10);
    if (lVar65 == 0) {
      phVar43 = (hb_buffer_t *)0x0;
    }
    else {
      phVar43 = *(hb_buffer_t **)(lVar65 + 0x10);
    }
    phVar87 = (hb_buffer_t *)(lVar83 + uVar54 * 0x14 + 0xc);
    (**(code **)(*(long *)(phVar35 + 0x90) + 0x30))
              (phVar35,*(undefined8 *)(phVar35 + 0x98),*(undefined4 *)(lVar83 + uVar54 * 0x14));
    param_2 = extraout_XMM1_Qa_09;
    if (phVar68[0x5a] != (hb_buffer_t)0x0) {
      pvVar70 = *(void **)(phVar68 + 0x78);
      pvVar38 = *(void **)(phVar68 + 0x70);
      iVar28 = *(int *)(phVar68 + 100);
      if ((pvVar70 != pvVar38) || (iVar28 != *(int *)(phVar68 + 0x5c))) {
        uVar62 = iVar28 + 1;
        if ((uVar62 == 0) || (uVar62 < *(uint *)(phVar68 + 0x68))) {
          if (pvVar70 == pvVar38) {
LAB_003f88b4:
            uVar62 = *(uint *)(phVar68 + 100);
            if (*(int *)(phVar68 + 0x5c) + 1U < uVar62 + 1) {
              pvVar70 = *(void **)(phVar68 + 0x80);
              *(void **)(phVar68 + 0x78) = pvVar70;
              if ((ulong)uVar62 != 0) {
                memcpy(pvVar70,pvVar38,(ulong)uVar62 * 0x14);
                pvVar38 = *(void **)(phVar68 + 0x70);
                pvVar70 = *(void **)(phVar68 + 0x78);
              }
            }
            else {
              pvVar70 = pvVar38;
            }
          }
        }
        else {
          uVar30 = hb_buffer_t::enlarge(phVar68,uVar62);
          if ((char)uVar30 == '\0') goto LAB_003f8920;
          pvVar38 = *(void **)(phVar68 + 0x70);
          pvVar70 = *(void **)(phVar68 + 0x78);
          if (pvVar70 == pvVar38) goto LAB_003f88b4;
        }
        uVar62 = *(uint *)(phVar68 + 0x5c);
        uVar54 = (ulong)*(uint *)(phVar68 + 100);
        phVar87 = (hb_buffer_t *)(uVar54 * 5);
        *(undefined4 *)((long)pvVar70 + uVar54 * 0x14 + 0x10) =
             *(undefined4 *)((long)pvVar38 + (ulong)uVar62 * 0x14 + 0x10);
        puVar53 = (undefined8 *)((long)pvVar38 + (ulong)uVar62 * 0x14);
        uVar30 = puVar53[1];
        puVar42 = (undefined8 *)((long)pvVar70 + uVar54 * 0x14);
        *puVar42 = *puVar53;
        puVar42[1] = uVar30;
        iVar28 = *(int *)(phVar68 + 100);
      }
      *(int *)(phVar68 + 100) = iVar28 + 1;
    }
    *(int *)(phVar68 + 0x5c) = *(int *)(phVar68 + 0x5c) + 1;
LAB_003f8920:
    uVar62 = *(uint *)(phVar68 + 0x5c);
    puVar78 = phVar43;
joined_r0x003f892a:
    phVar43 = phVar87;
    uVar85 = (ulong)uVar62;
    if (uVar62 < uVar52) {
      do {
        if (phVar68[0x58] == (hb_buffer_t)0x0) break;
        lVar83 = *(long *)(phVar68 + 0x70);
        uVar62 = *(uint *)(lVar83 + uVar85 * 0x14);
        if (((uVar62 & 0xfffffff0) != 0xfe00) &&
           (uVar62 = uVar62 - 0xe01f0, phVar43 = (hb_buffer_t *)(ulong)uVar62, uVar62 < 0xffffff10))
        break;
        *(undefined4 *)(lVar83 + 0xc + uVar85 * 0x14) = 0;
        lVar65 = *(long *)(*(long *)(phVar35 + 0x90) + 0x10);
        if (lVar65 == 0) {
          puVar78 = (hb_buffer_t *)0x0;
        }
        else {
          puVar78 = *(undefined1 **)(lVar65 + 0x10);
        }
        phVar43 = (hb_buffer_t *)(lVar83 + uVar85 * 0x14 + 0xc);
        (**(code **)(*(long *)(phVar35 + 0x90) + 0x30))();
        param_2 = extraout_XMM1_Qa_10;
        if (phVar68[0x5a] != (hb_buffer_t)0x0) {
          pvVar70 = *(void **)(phVar68 + 0x78);
          pvVar38 = *(void **)(phVar68 + 0x70);
          iVar28 = *(int *)(phVar68 + 100);
          if ((pvVar70 != pvVar38) || (iVar28 != *(int *)(phVar68 + 0x5c))) {
            uVar62 = iVar28 + 1;
            if ((uVar62 == 0) || (uVar62 < *(uint *)(phVar68 + 0x68))) {
              if (pvVar70 == pvVar38) goto LAB_003f8a15;
            }
            else {
              uVar30 = hb_buffer_t::enlarge(phVar68,uVar62);
              if ((char)uVar30 == '\0') goto LAB_003f8a7e;
              pvVar38 = *(void **)(phVar68 + 0x70);
              pvVar70 = *(void **)(phVar68 + 0x78);
              if (pvVar70 == pvVar38) {
LAB_003f8a15:
                uVar62 = *(uint *)(phVar68 + 100);
                if (*(int *)(phVar68 + 0x5c) + 1U < uVar62 + 1) {
                  pvVar70 = *(void **)(phVar68 + 0x80);
                  *(void **)(phVar68 + 0x78) = pvVar70;
                  if ((ulong)uVar62 != 0) {
                    memcpy(pvVar70,pvVar38,(ulong)uVar62 * 0x14);
                    pvVar38 = *(void **)(phVar68 + 0x70);
                    pvVar70 = *(void **)(phVar68 + 0x78);
                  }
                }
                else {
                  pvVar70 = pvVar38;
                }
              }
            }
            uVar62 = *(uint *)(phVar68 + 0x5c);
            uVar54 = (ulong)*(uint *)(phVar68 + 100);
            phVar43 = (hb_buffer_t *)(uVar54 * 5);
            *(undefined4 *)((long)pvVar70 + uVar54 * 0x14 + 0x10) =
                 *(undefined4 *)((long)pvVar38 + (ulong)uVar62 * 0x14 + 0x10);
            puVar53 = (undefined8 *)((long)pvVar38 + (ulong)uVar62 * 0x14);
            uVar30 = puVar53[1];
            puVar42 = (undefined8 *)((long)pvVar70 + uVar54 * 0x14);
            *puVar42 = *puVar53;
            puVar42[1] = uVar30;
            iVar28 = *(int *)(phVar68 + 100);
          }
          *(int *)(phVar68 + 100) = iVar28 + 1;
        }
        uVar62 = *(int *)(phVar68 + 0x5c) + 1;
        uVar85 = (ulong)uVar62;
        *(uint *)(phVar68 + 0x5c) = uVar62;
        if (uVar52 <= uVar62) break;
      } while( true );
    }
    goto LAB_003f8671;
  }
  if (*(long *)(lVar83 + 0x10) == 0) {
    puVar78 = (hb_buffer_t *)0x0;
  }
  else {
    puVar78 = *(undefined1 **)(*(long *)(lVar83 + 0x10) + 0x10);
  }
  (**(code **)(lVar83 + 0x30))();
  param_2 = extraout_XMM1_Qa_07;
  if (phVar68[0x5a] == (hb_buffer_t)0x0) {
LAB_003f8663:
    uVar62 = *(int *)(phVar68 + 0x5c) + 1;
    *(uint *)(phVar68 + 0x5c) = uVar62;
  }
  else {
    pvVar70 = *(void **)(phVar68 + 0x78);
    pvVar38 = *(void **)(phVar68 + 0x70);
    iVar28 = *(int *)(phVar68 + 100);
    if ((pvVar70 == pvVar38) && (iVar28 == *(int *)(phVar68 + 0x5c))) {
LAB_003f865d:
      *(int *)(phVar68 + 100) = iVar28 + 1;
      goto LAB_003f8663;
    }
    uVar62 = iVar28 + 1;
    if ((uVar62 == 0) || (uVar62 < *(uint *)(phVar68 + 0x68))) {
      if (pvVar70 == pvVar38) {
LAB_003f8600:
        uVar62 = *(uint *)(phVar68 + 100);
        if (*(int *)(phVar68 + 0x5c) + 1U < uVar62 + 1) {
          pvVar70 = *(void **)(phVar68 + 0x80);
          *(void **)(phVar68 + 0x78) = pvVar70;
          if ((ulong)uVar62 != 0) {
            memcpy(pvVar70,pvVar38,(ulong)uVar62 * 0x14);
            pvVar38 = *(void **)(phVar68 + 0x70);
            pvVar70 = *(void **)(phVar68 + 0x78);
          }
        }
        else {
          pvVar70 = pvVar38;
        }
      }
LAB_003f863a:
      uVar62 = *(uint *)(phVar68 + 0x5c);
      uVar54 = (ulong)*(uint *)(phVar68 + 100);
      phVar43 = (hb_buffer_t *)(uVar54 * 5);
      *(undefined4 *)((long)pvVar70 + uVar54 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar38 + (ulong)uVar62 * 0x14 + 0x10);
      puVar53 = (undefined8 *)((long)pvVar38 + (ulong)uVar62 * 0x14);
      uVar30 = puVar53[1];
      puVar42 = (undefined8 *)((long)pvVar70 + uVar54 * 0x14);
      *puVar42 = *puVar53;
      puVar42[1] = uVar30;
      iVar28 = *(int *)(phVar68 + 100);
      goto LAB_003f865d;
    }
    uVar30 = hb_buffer_t::enlarge(phVar68,uVar62);
    if ((char)uVar30 != '\0') {
      pvVar38 = *(void **)(phVar68 + 0x70);
      pvVar70 = *(void **)(phVar68 + 0x78);
      if (pvVar70 == pvVar38) goto LAB_003f8600;
      goto LAB_003f863a;
    }
    uVar62 = *(uint *)(phVar68 + 0x5c);
  }
  uVar85 = (ulong)uVar62;
LAB_003f8671:
  if ((uVar58 <= (uint)uVar85) || (phVar68[0x58] == (hb_buffer_t)0x0)) goto LAB_003f8afe;
  puVar78 = *(undefined1 **)(phVar68 + 0x70);
  goto LAB_003f8560;
LAB_003f8a7e:
  uVar62 = *(uint *)(phVar68 + 0x5c);
  phVar87 = phVar43;
  goto joined_r0x003f892a;
LAB_003f8afe:
  if (uVar52 <= (uint)uVar85) goto LAB_003f8410;
  lVar83 = *(long *)(phVar68 + 0x70);
  *(undefined4 *)(lVar83 + 0xc + uVar85 * 0x14) = 0;
  lVar65 = *(long *)(*(long *)(phVar35 + 0x90) + 0x10);
  if (lVar65 == 0) {
    puVar78 = (hb_buffer_t *)0x0;
  }
  else {
    puVar78 = *(undefined1 **)(lVar65 + 0x10);
  }
  phVar43 = (hb_buffer_t *)(lVar83 + uVar85 * 0x14 + 0xc);
  (**(code **)(*(long *)(phVar35 + 0x90) + 0x30))
            (phVar35,*(undefined8 *)(phVar35 + 0x98),*(undefined4 *)(lVar83 + uVar85 * 0x14));
  param_2 = extraout_XMM1_Qa_11;
  if (phVar68[0x5a] != (hb_buffer_t)0x0) {
    pvVar70 = *(void **)(phVar68 + 0x78);
    pvVar38 = *(void **)(phVar68 + 0x70);
    iVar28 = *(int *)(phVar68 + 100);
    if ((pvVar70 != pvVar38) || (iVar28 != *(int *)(phVar68 + 0x5c))) {
      uVar52 = iVar28 + 1;
      if ((uVar52 == 0) || (uVar52 < *(uint *)(phVar68 + 0x68))) {
        if (pvVar70 == pvVar38) {
LAB_003f8b77:
          uVar52 = *(uint *)(phVar68 + 100);
          if (*(int *)(phVar68 + 0x5c) + 1U < uVar52 + 1) {
            pvVar70 = *(void **)(phVar68 + 0x80);
            *(void **)(phVar68 + 0x78) = pvVar70;
            if ((ulong)uVar52 != 0) {
              memcpy(pvVar70,pvVar38,(ulong)uVar52 * 0x14);
              pvVar38 = *(void **)(phVar68 + 0x70);
              pvVar70 = *(void **)(phVar68 + 0x78);
            }
          }
          else {
            pvVar70 = pvVar38;
          }
        }
      }
      else {
        uVar30 = hb_buffer_t::enlarge(phVar68,uVar52);
        if ((char)uVar30 == '\0') goto LAB_003f8410;
        pvVar38 = *(void **)(phVar68 + 0x70);
        pvVar70 = *(void **)(phVar68 + 0x78);
        if (pvVar70 == pvVar38) goto LAB_003f8b77;
      }
      uVar52 = *(uint *)(phVar68 + 0x5c);
      uVar54 = (ulong)*(uint *)(phVar68 + 100);
      phVar43 = (hb_buffer_t *)(uVar54 * 5);
      *(undefined4 *)((long)pvVar70 + uVar54 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar38 + (ulong)uVar52 * 0x14 + 0x10);
      puVar53 = (undefined8 *)((long)pvVar38 + (ulong)uVar52 * 0x14);
      uVar30 = puVar53[1];
      puVar42 = (undefined8 *)((long)pvVar70 + uVar54 * 0x14);
      *puVar42 = *puVar53;
      puVar42[1] = uVar30;
      iVar28 = *(int *)(phVar68 + 100);
    }
    *(int *)(phVar68 + 100) = iVar28 + 1;
  }
  *(int *)(phVar68 + 0x5c) = *(int *)(phVar68 + 0x5c) + 1;
LAB_003f8410:
  uVar54 = (ulong)*(uint *)(param_5 + 0x5c);
  if ((uVar57 <= *(uint *)(param_5 + 0x5c)) || (bVar90 = true, param_5[0x58] == (hb_buffer_t)0x0))
  goto LAB_003f8c66;
  goto LAB_003f8250;
LAB_003fc117:
  bVar91 = hb_buffer_t::message
                     (auVar135._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                      in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"start fallback kern",pGVar63,pGVar80
                      ,phVar81,in_stack_fffffffffffffd48);
  if (bVar91) {
    local_88 = (hb_buffer_t *)
               (CONCAT44(local_88._4_4_,*(uint *)(param_5 + 0x38)) & 0xfffffffffffffffd);
    puVar45 = extraout_XMM0_Qa_31;
    if ((*(uint *)(param_5 + 0x38) & 0xfffffffd) == 5) {
      uVar84 = *(uint *)phVar3;
      pGVar63 = pGVar82;
      if (1 < uVar84) {
        pGVar63 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)pGVar82;
        uVar54 = (ulong)(uVar84 - 1);
        pGVar61 = pGVar63 + uVar54 * 0x14;
        uVar85 = 0;
        do {
          uVar54 = uVar54 - 1;
          uStack_1d8._0_4_ = *(uint *)(pGVar61 + 0x10);
          puVar45 = *(uint **)pGVar61;
          uStack_1e0 = *(hb_buffer_t **)(pGVar61 + 8);
          *(undefined4 *)(pGVar61 + 0x10) = *(undefined4 *)(pGVar63 + 0x10);
          uVar36 = *(undefined8 *)(pGVar63 + 8);
          *(undefined8 *)pGVar61 = *(undefined8 *)pGVar63;
          *(undefined8 *)(pGVar61 + 8) = uVar36;
          *(uint *)(pGVar63 + 0x10) = (uint)uStack_1d8;
          *(uint **)pGVar63 = puVar45;
          *(hb_buffer_t **)(pGVar63 + 8) = uStack_1e0;
          uVar85 = uVar85 + 1;
          pGVar63 = pGVar63 + 0x14;
          pGVar61 = pGVar61 + -0x14;
          local_1e8 = puVar45;
        } while (uVar85 < (uVar54 & 0xffffffff));
      }
      if (param_5[0x5b] != (hb_buffer_t)0x0) {
        uVar52 = *(uint *)phVar3;
        pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar52;
        if (uVar52 < uVar84) {
          uVar84 = uVar52;
        }
        if (1 < uVar84) {
          pGVar63 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)phVar43;
          uVar54 = (ulong)(uVar84 - 1);
          pGVar61 = pGVar63 + uVar54 * 0x14;
          uVar85 = 0;
          do {
            uVar54 = uVar54 - 1;
            uStack_1d8._0_4_ = *(uint *)(pGVar61 + 0x10);
            puVar45 = *(uint **)pGVar61;
            uStack_1e0 = *(hb_buffer_t **)(pGVar61 + 8);
            *(undefined4 *)(pGVar61 + 0x10) = *(undefined4 *)(pGVar63 + 0x10);
            uVar36 = *(undefined8 *)(pGVar63 + 8);
            *(undefined8 *)pGVar61 = *(undefined8 *)pGVar63;
            *(undefined8 *)(pGVar61 + 8) = uVar36;
            *(uint *)(pGVar63 + 0x10) = (uint)uStack_1d8;
            *(uint **)pGVar63 = puVar45;
            *(hb_buffer_t **)(pGVar63 + 8) = uStack_1e0;
            uVar85 = uVar85 + 1;
            pGVar63 = pGVar63 + 0x14;
            pGVar61 = pGVar61 + -0x14;
            local_1e8 = puVar45;
          } while (uVar85 < (uVar54 & 0xffffffff));
        }
      }
    }
    local_8c = *(uint *)(param_5 + 0x38);
    uVar84 = *(uint *)(param_3 + 0x100);
    bVar91 = hb_buffer_t::message
                       (puVar45,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                        in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"start kern",pGVar63,pGVar80,
                        phVar81,in_stack_fffffffffffffd48);
    auVar138._8_8_ = uVar30;
    auVar138._0_8_ = extraout_XMM0_Qa_32;
    phVar35 = (hb_ot_apply_context_t *)CONCAT44(uStack_1d8._4_4_,(uint)uStack_1d8);
    if (bVar91) {
      if (((byte)param_5[0x18] & 0x40) != 0) {
        uVar52 = *(uint *)(param_5 + 0x60);
        param_5[0xc0] = (hb_buffer_t)((byte)param_5[0xc0] | 0x20);
        if ((ulong)uVar52 != 0) {
          lVar65 = *(long *)pGVar82;
          if ((ulong)uVar52 - 1 < 3) {
            uVar54 = 0;
          }
          else {
            pbVar76 = (byte *)(lVar65 + 0x40);
            uVar54 = 0;
            do {
              pbVar76[-0x3c] = pbVar76[-0x3c] | 2;
              pbVar76[-0x28] = pbVar76[-0x28] | 2;
              pbVar76[-0x14] = pbVar76[-0x14] | 2;
              *pbVar76 = *pbVar76 | 2;
              uVar54 = uVar54 + 4;
              pbVar76 = pbVar76 + 0x50;
            } while ((uVar52 & 0xfffffffc) != uVar54);
          }
          if ((ulong)(uVar52 & 3) != 0) {
            lVar86 = 0;
            do {
              pbVar76 = (byte *)(lVar65 + uVar54 * 0x14 + 4 + lVar86);
              *pbVar76 = *pbVar76 | 2;
              lVar86 = lVar86 + 0x14;
            } while ((ulong)(uVar52 & 3) * 0x14 != lVar86);
          }
        }
      }
      pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
      phVar35 = (hb_ot_apply_context_t *)&local_1e8;
      OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                (phVar35,1,(long)param_4,(undefined4 *)param_5,
                 (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
      pcVar44 = local_1c8;
      local_a0 = 0xffffffff;
      local_185 = local_a9;
      if (local_160 != 0) {
        local_185 = 0;
      }
      local_186 = local_160 == 1;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = extraout_XMM1_Qa_23;
      auVar137 = auVar22 << 0x40;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = extraout_XMM1_Qa_23;
      local_b4 = 8;
      local_1a8 = *(uint *)(local_148 + 0x60);
      pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)local_1a8;
      local_1c0 = (undefined1  [16])0x0;
      local_1b0 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
      local_1c8._0_2_ = CONCAT11(local_aa,local_186);
      local_1c8._0_3_ = CONCAT12(local_186,(undefined2)local_1c8);
      local_188 = (bool)local_186 || local_ab != 0;
      local_1d0 = CONCAT44(uVar84,8);
      local_1c8._0_4_ = CONCAT13(local_185,(undefined3)local_1c8);
      local_1c8._5_3_ = SUB83(pcVar44,5);
      local_1c8._0_5_ = (uint5)(uint)local_1c8;
      local_180 = (undefined1  [16])0x0;
      local_170 = 0;
      local_190 = 8;
      local_187 = 1;
      local_18c = 0xffffffff;
      local_184 = 0;
      uVar52 = *(uint *)(param_5 + 0x60);
      local_198 = phVar35;
      local_168 = local_1a8;
      local_bc = uVar84;
      auVar131 = auVar23 << 0x40;
      if (uVar52 != 0) {
        local_7c = *(uint *)(param_5 + 0x38) & 0xfffffffe;
        pGVar61 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(param_5 + 0x70);
        local_38 = *(long *)(param_5 + 0x80);
        local_8c = local_8c & 0xfffffffe;
        uVar58 = 0;
        phVar66 = uStack_1e0;
        do {
          while( true ) {
            uStack_1e0._4_4_ = (undefined4)((ulong)phVar66 >> 0x20);
            local_230 = (ulong)uVar58;
            if ((*(uint *)(pGVar61 + local_230 * 0x14 + 4) & uVar84) != 0) break;
            uVar58 = uVar58 + 1;
            pGVar63 = pGVar61;
            uStack_1e0 = phVar66;
joined_r0x003fc71c:
            phVar66 = uStack_1e0;
            auVar131 = auVar137;
            if (uVar52 <= uVar58) goto LAB_003fd203;
          }
          pGVar63 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(phVar35 + 0xa0);
          local_1a8 = *(uint *)(pGVar63 + 0x60);
          if (*(uint *)(pGVar63 + 0x5c) == uVar58) {
            uVar50 = *(undefined1 *)(*(long *)(pGVar63 + 0x70) + 0xf + local_230 * 0x14);
          }
          else {
            uVar50 = 0;
          }
          if (local_1c8._3_1_ == '\0') {
            uVar50 = 0;
          }
          local_1c8._0_5_ = CONCAT14(uVar50,(uint)local_1c8);
          iVar28 = local_1a8 - 1;
          uStack_1e0._0_4_ = uVar58;
          if ((int)uVar58 < iVar28) {
LAB_003fc4f0:
            uVar30 = auVar137._8_8_;
            uStack_1e0._0_4_ = (uint)uStack_1e0 + 1;
            uVar54 = (ulong)(uint)uStack_1e0;
            lVar65 = *(long *)(pGVar63 + 0x70);
            uVar26 = *(ushort *)(lVar65 + 0xc + uVar54 * 0x14);
            pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar26;
            if (((uint)local_1d0 & uVar26 & 0xe) == 0) {
              puVar45 = (uint *)(lVar65 + uVar54 * 0x14);
              if ((uVar26 & 8) != 0) {
                if ((local_1d0 & 0x10) == 0) {
                  if ((local_1d0 & 0xff00) != 0) {
                    uVar62 = uVar26 & 0xff00;
                    pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar62;
                    if (((uint)local_1d0 & 0xff00) != uVar62) goto LAB_003fc61a;
                  }
                }
                else {
                  uStack_1d8 = phVar35;
                  uVar36 = OT::GDEF::accelerator_t::mark_set_covers
                                     (*(accelerator_t **)(phVar35 + 0xf8),(uint)local_1d0 >> 0x10,
                                      *puVar45);
                  auVar137._8_8_ = uVar30;
                  auVar137._0_8_ = extraout_XMM0_Qa_34;
                  phVar35 = uStack_1d8;
                  if ((char)uVar36 == '\0') goto LAB_003fc61a;
                }
              }
              lVar86 = lVar65 + uVar54 * 0x14;
              uVar26 = *(ushort *)(lVar65 + 0x10 + uVar54 * 0x14);
              uVar51 = 0;
              bVar91 = false;
              if (((((uVar26 & 0x20) != 0) &&
                   (bVar91 = false, (*(byte *)(lVar86 + 0xc) & 0x10) == 0)) &&
                  (((char)local_1c8 != '\0' || (bVar91 = false, (uVar26 & 0x21f) != 0x201)))) &&
                 ((local_1c8._1_1_ != '\0' || (bVar91 = false, (uVar26 & 0x11f) != 0x101)))) {
                bVar91 = (uVar26 & 0x40) == 0 || local_1c8._2_1_ != '\0';
              }
              if (local_1b0 != (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) {
                uVar51 = *(ushort *)local_1b0 << 8 | *(ushort *)local_1b0 >> 8;
              }
              pGVar63 = local_1b0;
              if (((*(uint *)(lVar65 + 4 + uVar54 * 0x14) & local_1d0._4_4_) != 0) &&
                 ((local_1c8._4_1_ == '\0' || (local_1c8._4_1_ == *(char *)(lVar86 + 0xf))))) {
                uStack_1d8 = phVar35;
                if ((code *)local_1c0._0_8_ == (code *)0x0) {
                  if (bVar91) goto LAB_003fc61a;
                }
                else {
                    /* try { // try from 003fc5fd to 003fc67e has its CatchHandler @ 003fe855 */
                  cVar24 = (*(code *)local_1c0._0_8_)(puVar45,uVar51,local_1c0._8_8_);
                  auVar137._8_8_ = extraout_XMM1_Qa_24;
                  auVar137._0_8_ = extraout_XMM0_Qa_33;
                  phVar35 = uStack_1d8;
                  if (cVar24 == '\0') goto LAB_003fc60c;
                }
                uVar62 = (uint)uStack_1e0;
                if (local_1b0 != (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) {
                  local_1b0 = local_1b0 + 2;
                }
                uVar54 = (ulong)(uint)uStack_1e0;
                lVar65 = *(long *)(param_4 + 0x90);
                if (local_8c == 4) {
                  if (*(long *)(lVar65 + 0x10) == 0) {
                    pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                  }
                  else {
                    pGVar80 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)
                               (*(long *)(lVar65 + 0x10) + 0x58);
                  }
                    /* try { // try from 003fc702 to 003fc9a8 has its CatchHandler @ 003fe84d */
                  uVar56 = (**(code **)(lVar65 + 0x78))(param_4,*(undefined8 *)(param_4 + 0x98));
                  uVar30 = extraout_XMM0_Qa_35;
                  uVar36 = extraout_XMM1_Qa_25;
                }
                else {
                  if (*(long *)(lVar65 + 0x10) == 0) {
                    pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                  }
                  else {
                    pGVar80 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)
                               (*(long *)(lVar65 + 0x10) + 0x60);
                  }
                  uVar56 = (**(code **)(lVar65 + 0x80))
                                     (param_4,*(undefined8 *)(param_4 + 0x98),
                                      *(undefined4 *)(pGVar61 + local_230 * 0x14),
                                      *(undefined4 *)(pGVar61 + uVar54 * 0x14));
                  uVar30 = extraout_XMM0_Qa_36;
                  uVar36 = extraout_XMM1_Qa_26;
                }
                auVar19._8_8_ = uVar36;
                auVar19._0_8_ = uVar30;
                auVar137._8_8_ = uVar36;
                auVar137._0_8_ = uVar30;
                pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar56;
                if (uVar56 != 0) {
                  iVar28 = (int)uVar56 >> 1;
                  uVar56 = uVar56 - iVar28;
                  pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar56;
                  if (local_7c == 4) {
                    piVar37 = (int *)(local_38 + local_230 * 0x14);
                    *piVar37 = *piVar37 + iVar28;
                    piVar37 = (int *)(local_38 + uVar54 * 0x14);
                    *piVar37 = *piVar37 + uVar56;
                    piVar37 = (int *)(local_38 + uVar54 * 0x14 + 8);
                  }
                  else {
                    piVar37 = (int *)(local_38 + 4 + local_230 * 0x14);
                    *piVar37 = *piVar37 + iVar28;
                    piVar37 = (int *)(local_38 + 4 + uVar54 * 0x14);
                    *piVar37 = *piVar37 + uVar56;
                    piVar37 = (int *)(local_38 + uVar54 * 0x14 + 0xc);
                  }
                  *piVar37 = *piVar37 + uVar56;
                  uVar56 = uVar62 + 1;
                  if (*(uint *)phVar3 < uVar62 + 1) {
                    uVar56 = *(uint *)phVar3;
                  }
                  auVar137 = auVar19;
                  if (1 < uVar56 - uVar58) {
                    param_5[0xc0] = (hb_buffer_t)((byte)param_5[0xc0] | 0x20);
                    lVar65 = *(long *)(param_5 + 0x70);
                    pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0xffffffff;
                    if (uVar56 != uVar58) {
                      if (*(int *)(param_5 + 0x1c) == 2) {
                        if (uVar58 < uVar56) {
                          uVar54 = (ulong)uVar56;
                          uVar85 = uVar54 - local_230;
                          pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0xffffffff;
                          if (8 < uVar85) {
                            uVar88 = (ulong)((uint)uVar85 & 7);
                            if (uVar88 == 0) {
                              uVar88 = 8;
                            }
                            lVar86 = (uVar88 + local_230) - uVar54;
                            puVar31 = (undefined4 *)(lVar65 + local_230 * 0x14 + 0x94);
                            auVar97._8_4_ = 0xffffffff;
                            auVar97._0_8_ = 0xffffffffffffffff;
                            auVar97._12_4_ = 0xffffffff;
                            auVar102._8_4_ = 0xffffffff;
                            auVar102._0_8_ = 0xffffffffffffffff;
                            auVar102._12_4_ = 0xffffffff;
                            do {
                              auVar124._12_4_ = puVar31[-0x14];
                              auVar124._8_4_ = puVar31[-0x19];
                              auVar124._4_4_ = puVar31[-0x1e];
                              auVar124._0_4_ = puVar31[-0x23];
                              in_XMM5._12_4_ = *puVar31;
                              in_XMM5._8_4_ = puVar31[-5];
                              in_XMM5._4_4_ = puVar31[-10];
                              in_XMM5._0_4_ = puVar31[-0xf];
                              auVar104 = auVar124 ^ _DAT_006524b0;
                              auVar131 = auVar97 ^ _DAT_006524b0;
                              auVar120._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                              auVar120._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                              auVar120._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                              auVar120._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                              auVar97 = ~auVar120 & auVar124 | auVar97 & auVar120;
                              auVar104 = in_XMM5 ^ _DAT_006524b0;
                              auVar131 = auVar102 ^ _DAT_006524b0;
                              auVar121._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                              auVar121._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                              auVar121._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                              auVar121._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                              auVar102 = ~auVar121 & in_XMM5 | auVar102 & auVar121;
                              puVar31 = puVar31 + 0x28;
                              lVar86 = lVar86 + 8;
                            } while (lVar86 != 0);
                            local_230 = local_230 + (uVar85 - uVar88);
                            auVar131 = auVar97 ^ _DAT_006524b0;
                            auVar104 = auVar102 ^ _DAT_006524b0;
                            auVar122._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                            auVar122._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                            auVar122._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                            auVar122._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                            auVar110 = ~auVar122 & auVar102 | auVar97 & auVar122;
                            auVar98._0_8_ = auVar110._8_8_;
                            auVar98._8_4_ = auVar110._8_4_;
                            auVar98._12_4_ = auVar110._12_4_;
                            auVar131 = auVar110 ^ _DAT_006524b0;
                            auVar104 = auVar98 ^ _DAT_006524b0;
                            auVar109._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                            auVar109._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                            auVar109._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                            auVar109._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                            in_XMM2 = ~auVar109 & auVar98 | auVar110 & auVar109;
                            uVar29 = in_XMM2._4_4_;
                            auVar99._4_4_ = uVar29;
                            auVar99._0_4_ = uVar29;
                            auVar99._8_4_ = uVar29;
                            auVar99._12_4_ = uVar29;
                            auVar131 = in_XMM2 ^ _DAT_006524b0;
                            auVar104 = auVar99 ^ _DAT_006524b0;
                            auVar123._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                            auVar123._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                            auVar123._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                            auVar123._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                            in_XMM2 = in_XMM2 & auVar123;
                            in_XMM3 = ~auVar123 & auVar99 | in_XMM2;
                            pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)in_XMM3._0_4_
                            ;
                            in_XMM4 = _DAT_006524b0;
                            in_XMM6 = _DAT_006524b0;
                          }
                          lVar86 = uVar54 - local_230;
                          puVar45 = (uint *)(lVar65 + local_230 * 0x14 + 8);
                          do {
                            if (*puVar45 < (uint)pGVar80) {
                              pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)*puVar45;
                            }
                            puVar45 = puVar45 + 5;
                            lVar86 = lVar86 + -1;
                          } while (lVar86 != 0);
                        }
                      }
                      else {
                        uVar62 = *(uint *)(lVar65 + 8 + local_230 * 0x14);
                        uVar39 = *(uint *)(lVar65 + 8 + (ulong)(uVar56 - 1) * 0x14);
                        pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar62;
                        if (uVar39 < uVar62) {
                          pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar39;
                        }
                      }
                    }
                    pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar56;
                    phVar81 = (hb_buffer_t *)0x3;
                    auVar137 = hb_buffer_t::_infos_set_glyph_flags
                                         (param_5,lVar65,uVar58,uVar56,(uint)pGVar80,3);
                  }
                }
                uVar58 = (uint)uStack_1e0;
                uStack_1e0 = (hb_buffer_t *)CONCAT44(uStack_1e0._4_4_,(uint)uStack_1e0);
                phVar35 = uStack_1d8;
                goto joined_r0x003fc71c;
              }
LAB_003fc60c:
              if (bVar91) goto LAB_003fc61a;
            }
            else {
LAB_003fc61a:
              if ((int)(uint)uStack_1e0 < iVar28) goto code_r0x003fc62a;
            }
          }
          uVar58 = uVar58 + 1;
          phVar66 = uStack_1e0;
          auVar131 = auVar137;
        } while (uVar58 < uVar52);
      }
LAB_003fd203:
                    /* try { // try from 003fd203 to 003fd216 has its CatchHandler @ 003fe84f */
      uStack_1d8 = phVar35;
      hb_buffer_t::message
                (auVar131._0_8_,auVar131._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"end kern",pGVar63,pGVar80,
                 phVar81,in_stack_fffffffffffffd48);
      free(local_e0);
      auVar138 = hb_sanitize_context_t::~hb_sanitize_context_t(local_140);
      phVar35 = uStack_1d8;
    }
    puVar45 = auVar138._0_8_;
    uStack_1d8._4_4_ = (undefined4)((ulong)phVar35 >> 0x20);
    uStack_1d8._0_4_ = (uint)phVar35;
    if ((int)local_88 == 5) {
      uVar84 = *(uint *)phVar3;
      pGVar63 = pGVar82;
      if (1 < uVar84) {
        pGVar63 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)pGVar82;
        uVar54 = (ulong)(uVar84 - 1);
        pGVar61 = pGVar63 + uVar54 * 0x14;
        uVar85 = 0;
        do {
          uVar54 = uVar54 - 1;
          uStack_1d8._0_4_ = *(uint *)(pGVar61 + 0x10);
          puVar45 = *(uint **)pGVar61;
          uStack_1e0 = *(hb_buffer_t **)(pGVar61 + 8);
          *(undefined4 *)(pGVar61 + 0x10) = *(undefined4 *)(pGVar63 + 0x10);
          uVar30 = *(undefined8 *)(pGVar63 + 8);
          *(undefined8 *)pGVar61 = *(undefined8 *)pGVar63;
          *(undefined8 *)(pGVar61 + 8) = uVar30;
          *(uint *)(pGVar63 + 0x10) = (uint)uStack_1d8;
          *(uint **)pGVar63 = puVar45;
          *(hb_buffer_t **)(pGVar63 + 8) = uStack_1e0;
          uVar85 = uVar85 + 1;
          pGVar63 = pGVar63 + 0x14;
          pGVar61 = pGVar61 + -0x14;
          local_1e8 = puVar45;
        } while (uVar85 < (uVar54 & 0xffffffff));
      }
      if (param_5[0x5b] != (hb_buffer_t)0x0) {
        uVar52 = *(uint *)phVar3;
        pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar52;
        if (uVar52 < uVar84) {
          uVar84 = uVar52;
        }
        if (1 < uVar84) {
          pGVar63 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)phVar43;
          uVar54 = (ulong)(uVar84 - 1);
          pGVar61 = pGVar63 + uVar54 * 0x14;
          uVar85 = 0;
          do {
            uVar54 = uVar54 - 1;
            uStack_1d8._0_4_ = *(uint *)(pGVar61 + 0x10);
            puVar45 = *(uint **)pGVar61;
            uStack_1e0 = *(hb_buffer_t **)(pGVar61 + 8);
            *(undefined4 *)(pGVar61 + 0x10) = *(undefined4 *)(pGVar63 + 0x10);
            uVar30 = *(undefined8 *)(pGVar63 + 8);
            *(undefined8 *)pGVar61 = *(undefined8 *)pGVar63;
            *(undefined8 *)(pGVar61 + 8) = uVar30;
            *(uint *)(pGVar63 + 0x10) = (uint)uStack_1d8;
            *(uint **)pGVar63 = puVar45;
            *(hb_buffer_t **)(pGVar63 + 8) = uStack_1e0;
            uVar85 = uVar85 + 1;
            pGVar63 = pGVar63 + 0x14;
            pGVar61 = pGVar61 + -0x14;
            local_1e8 = puVar45;
          } while (uVar85 < (uVar54 & 0xffffffff));
        }
      }
    }
    hb_buffer_t::message
              (puVar45,auVar138._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"end fallback kern",pGVar63,pGVar80,phVar81,
               in_stack_fffffffffffffd48);
  }
  goto LAB_003fbed1;
code_r0x003fc62a:
  pGVar63 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(phVar35 + 0xa0);
  goto LAB_003fc4f0;
LAB_003f8c66:
  pGVar80 = pGVar82;
  hb_buffer_t::sync(param_5);
  uVar30 = extraout_XMM0_Qa_06;
LAB_003f8c6e:
  bVar90 = hb_buffer_t::message
                     (uVar30,param_2,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                      in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"start reorder",phVar43,puVar78,
                      pGVar80,in_stack_fffffffffffffd48);
  auVar132._8_8_ = param_2;
  auVar132._0_8_ = extraout_XMM0_Qa_07;
  if (bVar90) {
    uVar57 = *(uint *)phVar3;
    if (uVar57 != 0) {
      lVar83 = *(long *)pGVar82;
      phVar68 = (hb_buffer_t *)0x0;
      do {
        while( true ) {
          uVar58 = (uint)phVar68;
          uVar52 = *(uint *)(lVar83 + 0x10 + (long)phVar68 * 0x14);
          if (((0x1c00U >> (uVar52 & 0x1f) & 1) != 0) && (0xff < (uVar52 & 0xffff))) break;
          phVar87 = phVar68;
LAB_003f8cc3:
          uVar52 = (int)phVar87 + 1;
          phVar68 = (hb_buffer_t *)(ulong)uVar52;
          if (uVar57 <= uVar52) goto LAB_003f8ee7;
        }
        uVar62 = uVar58 + 1;
        uVar52 = uVar62;
        if (uVar62 < uVar57) {
          uVar52 = uVar57;
        }
        phVar87 = phVar68;
        do {
          uVar56 = (int)phVar87 + 1;
          phVar87 = (hb_buffer_t *)(ulong)uVar56;
          if (uVar57 <= uVar56) {
            phVar87 = (hb_buffer_t *)(ulong)uVar52;
            uVar39 = uVar52 - uVar58;
            uVar56 = uVar52;
            goto joined_r0x003f8d3a;
          }
          uVar39 = *(uint *)(lVar83 + 0x10 + (ulong)uVar56 * 0x14);
        } while (((0x1c00U >> (uVar39 & 0x1f) & 1) != 0) && (0xff < (uVar39 & 0xffff)));
        uVar39 = uVar56 - uVar58;
joined_r0x003f8d3a:
        phVar43 = (hb_buffer_t *)(ulong)uVar39;
        if (0x20 < uVar39) goto LAB_003f8cc3;
        if (uVar62 < uVar56) {
          phVar87 = (hb_buffer_t *)(ulong)uVar62;
          uVar52 = uVar58 + 2;
          local_2a0 = phVar68;
          do {
            uVar30 = auVar132._8_8_;
            iVar28 = (int)local_2a0;
            local_2a0 = (hb_buffer_t *)((ulong)phVar87 & 0xffffffff);
            phVar66 = phVar87;
            if (uVar58 < (uint)phVar87) {
              phVar66 = phVar68;
            }
            puVar78 = (undefined1 *)((ulong)phVar66 & 0xffffffff);
            phVar66 = phVar87;
            uVar62 = uVar52;
            do {
              phVar81 = (hb_buffer_t *)puVar78;
              if (phVar66 <= phVar68) goto joined_r0x003f8e68;
              phVar66 = phVar66 + -1;
              uVar26 = *(ushort *)(*(long *)pGVar82 + 0x10 + ((ulong)phVar66 & 0xffffffff) * 0x14);
              uVar51 = uVar26 >> 8;
              if ((0x1c00U >> (uVar26 & 0x1f) & 1) == 0) {
                uVar51 = 0;
              }
              uVar26 = *(ushort *)(*(long *)pGVar82 + 0x10 + (long)phVar87 * 0x14);
              phVar43 = (hb_buffer_t *)(ulong)uVar26;
              uVar67 = uVar26 >> 8;
              if ((0x1c00U >> (uVar26 & 0x1f) & 1) == 0) {
                uVar67 = 0;
              }
              uVar62 = uVar62 - 1;
            } while (uVar67 < uVar51);
            phVar81 = (hb_buffer_t *)(ulong)uVar62;
joined_r0x003f8e68:
            if (phVar87 != phVar81) {
              uVar62 = (uint)phVar81;
              if (1 < (iVar28 + 2U) - uVar62) {
                hb_buffer_t::merge_clusters_impl(param_5,uVar62,iVar28 + 2U);
                uVar30 = extraout_XMM1_Qa_12;
              }
              lVar65 = *(long *)pGVar82;
              auStack_70._8_4_ = *(undefined4 *)(lVar65 + 0x10 + (long)phVar87 * 0x14);
              puVar33 = (ulong *)(lVar65 + (long)phVar87 * 0x14);
              local_78 = *puVar33;
              auStack_70._0_8_ = puVar33[1];
              lVar86 = (long)phVar81 * 0x14;
              memmove((void *)(lVar65 + (ulong)(uVar62 + 1) * 0x14),(void *)(lVar65 + lVar86),
                      (ulong)((uint)phVar87 - uVar62) * 0x14);
              auVar132._8_8_ = uVar30;
              auVar132._0_8_ = local_78;
              lVar65 = *(long *)pGVar82;
              puVar33 = (ulong *)(lVar65 + lVar86);
              *puVar33 = local_78;
              puVar33[1] = auStack_70._0_8_;
              phVar43 = (hb_buffer_t *)(ulong)(uint)auStack_70._8_4_;
              *(undefined4 *)(lVar65 + 0x10 + lVar86) = auStack_70._8_4_;
            }
            phVar87 = phVar87 + 1;
            uVar52 = uVar52 + 1;
          } while ((uint)phVar87 < uVar56);
        }
        pcVar44 = *(code **)(*(long *)(param_3 + 0x80) + 0x48);
        if (pcVar44 != (code *)0x0) {
          phVar43 = (hb_buffer_t *)(ulong)uVar56;
          auVar132 = (*pcVar44)(puVar59,param_5,phVar68);
        }
        phVar68 = (hb_buffer_t *)(ulong)(uVar56 + 1);
      } while (uVar56 + 1 < uVar57);
    }
LAB_003f8ee7:
    param_2 = auVar132._8_8_;
    hb_buffer_t::message
              (auVar132._0_8_,param_2,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
               in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"end reorder",phVar43,puVar78,pGVar82,
               in_stack_fffffffffffffd48);
    hVar4 = param_5[0xc0];
    uVar30 = extraout_XMM0_Qa_08;
  }
  else {
    hVar4 = param_5[0xc0];
    uVar30 = extraout_XMM0_Qa_07;
  }
  bVar90 = true;
joined_r0x003f8f2a:
  if (((byte)hVar4 & 0x10) != 0) {
    uVar57 = *(uint *)phVar3;
    phVar43 = (hb_buffer_t *)(ulong)uVar57;
    if (2 < uVar57) {
      lVar83 = *(long *)pGVar82;
      phVar43 = (hb_buffer_t *)((ulong)(uVar57 - 1) * 0x14 + -0x14);
      phVar68 = (hb_buffer_t *)0x0;
      do {
        if (*(int *)(phVar68 + lVar83 + 0x14) == 0x34f) {
          uVar26 = *(ushort *)(phVar68 + lVar83 + 0x38);
          if (((0x1c00U >> (uVar26 & 0x1f) & 1) != 0) && (0xff < uVar26)) {
            uVar51 = *(ushort *)(phVar68 + lVar83 + 0x10) >> 8;
            if ((0x1c00U >> (*(ushort *)(phVar68 + lVar83 + 0x10) & 0x1f) & 1) == 0) {
              uVar51 = 0;
            }
            if (uVar26 >> 8 < uVar51) goto LAB_003f8f65;
          }
          phVar68[lVar83 + 0x24] = (hb_buffer_t)((byte)phVar68[lVar83 + 0x24] & 0xbf);
        }
LAB_003f8f65:
        phVar68 = phVar68 + 0x14;
      } while (phVar43 != phVar68);
    }
  }
  if (((bVar90) && (param_5[0x58] != (hb_buffer_t)0x0)) && ((uVar84 & 0xfffffffe) == 2)) {
    *(undefined2 *)(param_5 + 0x5a) = 1;
    lVar83 = *(long *)(param_5 + 0x70);
    *(long *)(param_5 + 0x78) = lVar83;
    uVar57 = *(uint *)(param_5 + 0x60);
    *(undefined4 *)(param_5 + 100) = 1;
    *(undefined4 *)(param_5 + 0x5c) = 1;
    if (1 < uVar57) {
      phVar43 = (hb_buffer_t *)0x1;
      uVar84 = 0;
      do {
        uVar26 = *(ushort *)(lVar83 + 0x10 + (long)phVar43 * 0x14);
        if ((0x1c00U >> (uVar26 & 0x1f) & 1) == 0) {
LAB_003f91e0:
          if (param_5[0x5a] == (hb_buffer_t)0x0) {
            iVar28 = *(int *)(param_5 + 100);
          }
          else {
            pvVar70 = *(void **)(param_5 + 0x78);
            pvVar38 = *(void **)(param_5 + 0x70);
            iVar28 = *(int *)(param_5 + 100);
            if ((pvVar70 != pvVar38) || (iVar28 != *(int *)(param_5 + 0x5c))) {
              uVar52 = iVar28 + 1;
              if ((uVar52 == 0) || (uVar52 < *(uint *)(param_5 + 0x68))) {
                if (pvVar70 == pvVar38) goto LAB_003f9223;
              }
              else {
                phVar43 = param_5;
                uVar30 = hb_buffer_t::enlarge(param_5,uVar52);
                if ((char)uVar30 == '\0') break;
                pvVar38 = *(void **)(param_5 + 0x70);
                pvVar70 = *(void **)(param_5 + 0x78);
                if (pvVar70 == pvVar38) {
LAB_003f9223:
                  uVar52 = *(uint *)(param_5 + 100);
                  if (*(int *)(param_5 + 0x5c) + 1U < uVar52 + 1) {
                    pvVar70 = *(void **)(param_5 + 0x80);
                    *(void **)(param_5 + 0x78) = pvVar70;
                    if ((ulong)uVar52 != 0) {
                      memcpy(pvVar70,pvVar38,(ulong)uVar52 * 0x14);
                      pvVar38 = *(void **)(param_5 + 0x70);
                      pvVar70 = *(void **)(param_5 + 0x78);
                    }
                  }
                  else {
                    pvVar70 = pvVar38;
                  }
                }
              }
              uVar52 = *(uint *)(param_5 + 0x5c);
              uVar58 = *(uint *)(param_5 + 100);
              *(undefined4 *)((long)pvVar70 + (ulong)uVar58 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar38 + (ulong)uVar52 * 0x14 + 0x10);
              puVar53 = (undefined8 *)((long)pvVar38 + (ulong)uVar52 * 0x14);
              uVar30 = puVar53[1];
              puVar42 = (undefined8 *)((long)pvVar70 + (ulong)uVar58 * 0x14);
              *puVar42 = *puVar53;
              puVar42[1] = uVar30;
              iVar28 = *(int *)(param_5 + 100);
            }
            iVar28 = iVar28 + 1;
            *(int *)(param_5 + 100) = iVar28;
          }
          uVar52 = *(int *)(param_5 + 0x5c) + 1;
          *(uint *)(param_5 + 0x5c) = uVar52;
          uVar58 = iVar28 - 1;
          uVar54 = (ulong)uVar58;
          if (iVar28 == 0) {
            uVar54 = 0;
          }
          uVar62 = (uint)*(ushort *)(*(long *)(param_5 + 0x78) + 0x10 + uVar54 * 0x14);
          if (uVar62 < 0x100) {
            uVar84 = uVar58;
          }
          if ((0x1c00U >> (uVar62 & 0x1f) & 1) == 0) {
            uVar84 = uVar58;
          }
        }
        else {
          uVar52 = *(int *)(param_5 + 100) - 1;
          if (uVar84 != uVar52) {
            if (*(int *)(param_5 + 100) == 0) {
              uVar52 = 0;
            }
            uVar51 = *(ushort *)(*(long *)(param_5 + 0x78) + 0x10 + (ulong)uVar52 * 0x14);
            uVar67 = uVar51 >> 8;
            if ((0x1c00U >> (uVar51 & 0x1f) & 1) == 0) {
              uVar67 = 0;
            }
            if (uVar26 >> 8 <= uVar67) goto LAB_003f91e0;
          }
          cVar24 = (*(code *)local_1c0._0_8_)
                             (&local_1e8,
                              *(undefined4 *)(*(long *)(param_5 + 0x78) + (ulong)uVar84 * 0x14),
                              *(undefined4 *)(lVar83 + (long)phVar43 * 0x14),&local_78);
          param_2 = extraout_XMM1_Qa_13;
          if (cVar24 == '\0') goto LAB_003f91e0;
          local_228[0] = 0;
          lVar83 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
          if (lVar83 == 0) {
            uVar30 = 0;
          }
          else {
            uVar30 = *(undefined8 *)(lVar83 + 0x10);
          }
          phVar43 = (hb_buffer_t *)local_228;
          iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                             (param_4,*(undefined8 *)(param_4 + 0x98),local_78 & 0xffffffff,phVar43,
                              uVar30);
          param_2 = extraout_XMM1_Qa_14;
          if (iVar28 == 0) goto LAB_003f91e0;
          if (param_5[0x5a] == (hb_buffer_t)0x0) {
            uVar52 = *(uint *)(param_5 + 100);
          }
          else {
            pvVar70 = *(void **)(param_5 + 0x78);
            pvVar38 = *(void **)(param_5 + 0x70);
            iVar28 = *(int *)(param_5 + 100);
            if ((pvVar70 != pvVar38) || (iVar28 != *(int *)(param_5 + 0x5c))) {
              uVar52 = iVar28 + 1;
              if ((uVar52 == 0) || (uVar52 < *(uint *)(param_5 + 0x68))) {
                if (pvVar70 == pvVar38) goto LAB_003f918f;
              }
              else {
                uVar30 = hb_buffer_t::enlarge(param_5,uVar52);
                if ((char)uVar30 == '\0') break;
                pvVar38 = *(void **)(param_5 + 0x70);
                pvVar70 = *(void **)(param_5 + 0x78);
                if (pvVar70 == pvVar38) {
LAB_003f918f:
                  uVar52 = *(uint *)(param_5 + 100);
                  if (*(int *)(param_5 + 0x5c) + 1U < uVar52 + 1) {
                    pvVar70 = *(void **)(param_5 + 0x80);
                    *(void **)(param_5 + 0x78) = pvVar70;
                    if ((ulong)uVar52 != 0) {
                      memcpy(pvVar70,pvVar38,(ulong)uVar52 * 0x14);
                      pvVar38 = *(void **)(param_5 + 0x70);
                      pvVar70 = *(void **)(param_5 + 0x78);
                    }
                  }
                  else {
                    pvVar70 = pvVar38;
                  }
                }
              }
              uVar52 = *(uint *)(param_5 + 0x5c);
              uVar58 = *(uint *)(param_5 + 100);
              *(undefined4 *)((long)pvVar70 + (ulong)uVar58 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar38 + (ulong)uVar52 * 0x14 + 0x10);
              puVar53 = (undefined8 *)((long)pvVar38 + (ulong)uVar52 * 0x14);
              uVar30 = puVar53[1];
              puVar42 = (undefined8 *)((long)pvVar70 + (ulong)uVar58 * 0x14);
              *puVar42 = *puVar53;
              puVar42[1] = uVar30;
              iVar28 = *(int *)(param_5 + 100);
            }
            uVar52 = iVar28 + 1;
            *(uint *)(param_5 + 100) = uVar52;
          }
          *(int *)(param_5 + 0x5c) = *(int *)(param_5 + 0x5c) + 1;
          hb_buffer_t::merge_out_clusters(param_5,uVar84,uVar52);
          *(int *)(param_5 + 100) = *(int *)(param_5 + 100) + -1;
          lVar83 = *(long *)(param_5 + 0x78);
          lVar65 = (ulong)uVar84 * 0x14;
          *(int *)(lVar83 + lVar65) = (int)local_78;
          *(undefined4 *)(lVar83 + 0xc + lVar65) = local_228[0];
          _hb_glyph_info_set_unicode_props
                    ((uint *)(lVar65 + *(long *)(param_5 + 0x78)),(long)param_5);
          uVar52 = *(uint *)(param_5 + 0x5c);
          param_2 = extraout_XMM1_Qa_15;
        }
        phVar43 = (hb_buffer_t *)(ulong)uVar52;
        if (uVar57 <= uVar52) break;
        lVar83 = *(long *)pGVar82;
      } while( true );
    }
    hb_buffer_t::sync(param_5);
    uVar30 = extraout_XMM0_Qa_09;
  }
LAB_003f9369:
  auVar133._8_8_ = param_2;
  auVar133._0_8_ = uVar30;
  if ((((byte)param_5[0xc0] & 1) != 0) && ((*(byte *)(param_3 + 0x108) & 4) != 0)) {
    if ((*(uint *)(param_5 + 0x38) & 0xfffffffd) == 4) {
      uVar84 = *(uint *)(param_3 + 0xf4) | *(uint *)(param_3 + 0xf0);
      uVar52 = *(uint *)(param_3 + 0xf0) | *(uint *)(param_3 + 0xf8);
      uVar57 = *(uint *)phVar3;
    }
    else {
      uVar84 = *(uint *)(param_3 + 0xf8) | *(uint *)(param_3 + 0xf0);
      uVar52 = *(uint *)(param_3 + 0xf0) | *(uint *)(param_3 + 0xf4);
      uVar57 = *(uint *)phVar3;
    }
    uVar54 = (ulong)uVar57;
    if (uVar54 != 0) {
      lVar83 = *(long *)pGVar82;
      local_88 = (hb_buffer_t *)(lVar83 + 0x40);
      uVar58 = 0;
      do {
        uVar85 = (ulong)uVar58;
        if (*(int *)(lVar83 + uVar85 * 0x14) == 0x2044) {
          uVar62 = uVar58 + 1;
          uVar48 = (ulong)uVar62;
          uVar88 = uVar85 - 1;
          do {
            if (uVar88 == 0xffffffffffffffff) {
              uVar56 = 0;
              goto joined_r0x003fad75;
            }
            uVar75 = uVar88 & 0xffffffff;
            uVar88 = uVar88 - 1;
          } while ((*(ushort *)(lVar83 + 0x10 + uVar75 * 0x14) & 0x1f) == 0xd);
          uVar56 = (int)uVar88 + 2;
joined_r0x003fad75:
          if (uVar62 < uVar57) {
            puVar41 = (ushort *)(lVar83 + 0x10 + uVar48 * 0x14);
            uVar88 = uVar48;
            do {
              phVar43 = (hb_buffer_t *)(ulong)(*puVar41 & 0x1f);
              if ((short)(*puVar41 & 0x1f) != 0xd) goto LAB_003fadac;
              uVar88 = uVar88 + 1;
              puVar41 = puVar41 + 10;
            } while (uVar54 != uVar88);
            uVar88 = uVar54;
LAB_003fadac:
            uVar39 = (uint)uVar88;
            bVar90 = uVar39 == uVar62;
            if ((uVar56 == uVar58) || (uVar39 == uVar62)) {
              if (uVar56 == uVar58) goto LAB_003fafc2;
LAB_003fafcd:
              if (bVar90) goto LAB_003fafd5;
            }
            else {
              phVar43 = (hb_buffer_t *)(ulong)*(uint *)phVar3;
              if (uVar39 <= *(uint *)phVar3) {
                phVar43 = (hb_buffer_t *)(uVar88 & 0xffffffff);
              }
              uVar40 = (uint)phVar43;
              if (1 < uVar40 - uVar56) {
                param_5[0xc0] = (hb_buffer_t)((byte)param_5[0xc0] | 0x20);
                lVar65 = *(long *)(param_5 + 0x70);
                uVar77 = 0xffffffff;
                if (uVar40 != uVar56) {
                  if (*(int *)(param_5 + 0x1c) == 2) {
                    if (uVar56 < uVar40) {
                      uVar88 = (ulong)uVar56;
                      uVar75 = (long)phVar43 - uVar88;
                      uVar77 = 0xffffffff;
                      if (8 < uVar75) {
                        uVar74 = (ulong)((uint)uVar75 & 7);
                        if (uVar74 == 0) {
                          uVar74 = 8;
                        }
                        lVar86 = (uVar74 + uVar88) - (long)phVar43;
                        puVar31 = (undefined4 *)(lVar65 + uVar88 * 0x14 + 0x94);
                        auVar94._8_4_ = 0xffffffff;
                        auVar94._0_8_ = 0xffffffffffffffff;
                        auVar94._12_4_ = 0xffffffff;
                        auVar101._8_4_ = 0xffffffff;
                        auVar101._0_8_ = 0xffffffffffffffff;
                        auVar101._12_4_ = 0xffffffff;
                        do {
                          in_XMM4._12_4_ = puVar31[-0x14];
                          in_XMM4._8_4_ = puVar31[-0x19];
                          in_XMM4._4_4_ = puVar31[-0x1e];
                          in_XMM4._0_4_ = puVar31[-0x23];
                          in_XMM5._12_4_ = *puVar31;
                          in_XMM5._8_4_ = puVar31[-5];
                          in_XMM5._4_4_ = puVar31[-10];
                          in_XMM5._0_4_ = puVar31[-0xf];
                          auVar104 = in_XMM4 ^ _DAT_006524b0;
                          auVar131 = auVar94 ^ _DAT_006524b0;
                          auVar111._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                          auVar111._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                          auVar111._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                          auVar111._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                          auVar94 = ~auVar111 & in_XMM4 | auVar94 & auVar111;
                          auVar104 = in_XMM5 ^ _DAT_006524b0;
                          auVar131 = auVar101 ^ _DAT_006524b0;
                          auVar112._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                          auVar112._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                          auVar112._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                          auVar112._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                          auVar101 = ~auVar112 & in_XMM5 | auVar101 & auVar112;
                          puVar31 = puVar31 + 0x28;
                          lVar86 = lVar86 + 8;
                        } while (lVar86 != 0);
                        uVar88 = uVar88 + (uVar75 - uVar74);
                        auVar131 = auVar94 ^ _DAT_006524b0;
                        auVar104 = auVar101 ^ _DAT_006524b0;
                        auVar113._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                        auVar113._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                        auVar113._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                        auVar113._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                        auVar110 = ~auVar113 & auVar101 | auVar94 & auVar113;
                        auVar95._0_8_ = auVar110._8_8_;
                        auVar95._8_4_ = auVar110._8_4_;
                        auVar95._12_4_ = auVar110._12_4_;
                        auVar131 = auVar110 ^ _DAT_006524b0;
                        auVar104 = auVar95 ^ _DAT_006524b0;
                        auVar107._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                        auVar107._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                        auVar107._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                        auVar107._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                        in_XMM2 = ~auVar107 & auVar95 | auVar110 & auVar107;
                        uVar29 = in_XMM2._4_4_;
                        auVar96._4_4_ = uVar29;
                        auVar96._0_4_ = uVar29;
                        auVar96._8_4_ = uVar29;
                        auVar96._12_4_ = uVar29;
                        auVar131 = in_XMM2 ^ _DAT_006524b0;
                        auVar104 = auVar96 ^ _DAT_006524b0;
                        auVar114._0_4_ = -(uint)(auVar131._0_4_ < auVar104._0_4_);
                        auVar114._4_4_ = -(uint)(auVar131._4_4_ < auVar104._4_4_);
                        auVar114._8_4_ = -(uint)(auVar131._8_4_ < auVar104._8_4_);
                        auVar114._12_4_ = -(uint)(auVar131._12_4_ < auVar104._12_4_);
                        in_XMM2 = in_XMM2 & auVar114;
                        in_XMM3 = ~auVar114 & auVar96 | in_XMM2;
                        uVar77 = in_XMM3._0_4_;
                        in_XMM6 = _DAT_006524b0;
                      }
                      lVar86 = (long)phVar43 - uVar88;
                      puVar45 = (uint *)(lVar65 + uVar88 * 0x14 + 8);
                      do {
                        if (*puVar45 < uVar77) {
                          uVar77 = *puVar45;
                        }
                        puVar45 = puVar45 + 5;
                        lVar86 = lVar86 + -1;
                      } while (lVar86 != 0);
                    }
                  }
                  else {
                    uVar77 = *(uint *)(lVar65 + 8 + (ulong)uVar56 * 0x14);
                    uVar7 = *(uint *)(lVar65 + 8 + (ulong)(uVar40 - 1) * 0x14);
                    if (uVar7 < uVar77) {
                      uVar77 = uVar7;
                    }
                  }
                }
                auVar133 = hb_buffer_t::_infos_set_glyph_flags
                                     (param_5,lVar65,uVar56,uVar40,uVar77,3);
              }
              if (uVar56 < uVar58) {
                uVar88 = (ulong)uVar56;
                uVar75 = ~uVar88;
                if ((uVar58 - uVar56 & 3) != 0) {
                  puVar45 = (uint *)(lVar83 + 4 + uVar88 * 0x14);
                  lVar65 = 0;
                  do {
                    *puVar45 = *puVar45 | uVar84;
                    lVar65 = lVar65 + -1;
                    puVar45 = puVar45 + 5;
                  } while (-lVar65 != ((ulong)(uVar58 - uVar56) & 3));
                  uVar88 = uVar88 - lVar65;
                }
                phVar43 = (hb_buffer_t *)(uVar75 + uVar85);
                if ((hb_buffer_t *)0x2 < (hb_buffer_t *)(uVar75 + uVar85)) {
                  lVar65 = uVar85 - uVar88;
                  phVar68 = local_88 + uVar88 * 0x14;
                  do {
                    *(uint *)(phVar68 + -0x3c) = *(uint *)(phVar68 + -0x3c) | uVar84;
                    *(uint *)(phVar68 + -0x28) = *(uint *)(phVar68 + -0x28) | uVar84;
                    *(uint *)(phVar68 + -0x14) = *(uint *)(phVar68 + -0x14) | uVar84;
                    *(uint *)phVar68 = *(uint *)phVar68 | uVar84;
                    phVar68 = phVar68 + 0x50;
                    lVar65 = lVar65 + -4;
                    phVar43 = local_88;
                  } while (lVar65 != 0);
                }
              }
              puVar45 = (uint *)(lVar83 + 4 + uVar85 * 0x14);
              *puVar45 = *puVar45 | *(uint *)(param_3 + 0xf0);
              if (uVar62 < uVar39) {
                uVar62 = ~uVar58 + uVar39 & 3;
                if (uVar62 != 0) {
                  phVar43 = (hb_buffer_t *)(lVar83 + 4 + uVar48 * 0x14);
                  lVar65 = 0;
                  do {
                    *(uint *)phVar43 = *(uint *)phVar43 | uVar52;
                    lVar65 = lVar65 + -1;
                    phVar43 = phVar43 + 0x14;
                  } while (-uVar62 != (int)lVar65);
                  uVar48 = uVar48 - lVar65;
                }
                if (2 < (uVar39 - uVar58) - 2) {
                  iVar28 = uVar39 - (int)uVar48;
                  phVar43 = local_88 + uVar48 * 0x14;
                  do {
                    *(uint *)(phVar43 + -0x3c) = *(uint *)(phVar43 + -0x3c) | uVar52;
                    *(uint *)(phVar43 + -0x28) = *(uint *)(phVar43 + -0x28) | uVar52;
                    *(uint *)(phVar43 + -0x14) = *(uint *)(phVar43 + -0x14) | uVar52;
                    *(uint *)phVar43 = *(uint *)phVar43 | uVar52;
                    phVar43 = phVar43 + 0x50;
                    iVar28 = iVar28 + -4;
                  } while (iVar28 != 0);
                }
              }
              uVar58 = uVar39 - 1;
            }
          }
          else {
            bVar90 = true;
            if (uVar56 == uVar58) {
LAB_003fafc2:
              if (((byte)param_5[0x18] & 0x40) == 0) goto LAB_003fafcd;
              uVar56 = *(uint *)(param_5 + 0x60);
              if (uVar62 <= *(uint *)(param_5 + 0x60)) {
                uVar56 = uVar62;
              }
              param_5[0xc0] = (hb_buffer_t)((byte)param_5[0xc0] | 0x20);
              if (uVar58 < uVar56) {
                lVar65 = *(long *)pGVar82;
                phVar43 = (hb_buffer_t *)(ulong)uVar56;
                uVar88 = uVar85;
                if ((uVar56 - uVar58 & 3) != 0) {
                  pbVar76 = (byte *)(lVar65 + uVar85 * 0x14 + 4);
                  lVar86 = 0;
                  do {
                    *pbVar76 = *pbVar76 | 2;
                    lVar86 = lVar86 + -1;
                    pbVar76 = pbVar76 + 0x14;
                  } while (-lVar86 != ((ulong)(uVar56 - uVar58) & 3));
                  uVar88 = uVar85 - lVar86;
                }
                if ((hb_buffer_t *)0x2 < phVar43 + ~uVar85) {
                  lVar86 = (long)phVar43 - uVar88;
                  pbVar76 = (byte *)(lVar65 + uVar88 * 0x14 + 0x40);
                  do {
                    pbVar76[-0x3c] = pbVar76[-0x3c] | 2;
                    pbVar76[-0x28] = pbVar76[-0x28] | 2;
                    pbVar76[-0x14] = pbVar76[-0x14] | 2;
                    *pbVar76 = *pbVar76 | 2;
                    pbVar76 = pbVar76 + 0x50;
                    lVar86 = lVar86 + -4;
                    phVar43 = (hb_buffer_t *)0x0;
                  } while (lVar86 != 0);
                }
              }
              if (!bVar90) goto LAB_003fad00;
            }
LAB_003fafd5:
            if (((byte)param_5[0x18] & 0x40) != 0) {
              if (*(uint *)(param_5 + 0x60) < uVar62) {
                uVar62 = *(uint *)(param_5 + 0x60);
              }
              param_5[0xc0] = (hb_buffer_t)((byte)param_5[0xc0] | 0x20);
              if (uVar58 < uVar62) {
                phVar43 = *(hb_buffer_t **)pGVar82;
                uVar88 = ~uVar85;
                if ((uVar62 - uVar58 & 3) != 0) {
                  phVar68 = phVar43 + uVar85 * 0x14 + 4;
                  lVar65 = 0;
                  do {
                    *phVar68 = (hb_buffer_t)((byte)*phVar68 | 2);
                    lVar65 = lVar65 + -1;
                    phVar68 = phVar68 + 0x14;
                  } while (-lVar65 != ((ulong)(uVar62 - uVar58) & 3));
                  uVar85 = uVar85 - lVar65;
                }
                if (2 < uVar88 + uVar62) {
                  lVar65 = uVar62 - uVar85;
                  phVar43 = phVar43 + uVar85 * 0x14 + 0x40;
                  do {
                    phVar43[-0x3c] = (hb_buffer_t)((byte)phVar43[-0x3c] | 2);
                    phVar43[-0x28] = (hb_buffer_t)((byte)phVar43[-0x28] | 2);
                    phVar43[-0x14] = (hb_buffer_t)((byte)phVar43[-0x14] | 2);
                    *phVar43 = (hb_buffer_t)((byte)*phVar43 | 2);
                    phVar43 = phVar43 + 0x50;
                    lVar65 = lVar65 + -4;
                  } while (lVar65 != 0);
                }
              }
            }
          }
        }
LAB_003fad00:
        uVar58 = uVar58 + 1;
      } while (uVar58 < uVar57);
    }
  }
  pcVar44 = *(code **)(*(long *)(param_3 + 0x80) + 0x40);
  if (pcVar44 != (code *)0x0) {
    auVar133 = (*pcVar44)(puVar59,param_5,param_4);
  }
  if ((int)param_7 != 0) {
    uVar54 = 0;
    do {
      lVar83 = uVar54 * 0x10;
      uVar57 = *(uint *)(param_6 + 8 + lVar83);
      if (((uVar57 != 0) || (*(int *)(param_6 + 0xc + lVar83) != -1)) &&
         (0 < *(int *)(param_3 + 0x9c))) {
        phVar43 = *(hb_buffer_t **)(param_3 + 0xa0);
        iVar27 = *(int *)(param_3 + 0x9c) + -1;
        iVar28 = 0;
        do {
          while( true ) {
            uVar84 = (uint)(iVar27 + iVar28) >> 1;
            uVar85 = (ulong)uVar84;
            if (*(uint *)(param_6 + lVar83) < *(uint *)(phVar43 + uVar85 * 0x24)) break;
            if (*(uint *)(param_6 + lVar83) <= *(uint *)(phVar43 + uVar85 * 0x24)) {
              uVar84 = *(uint *)(phVar43 + uVar85 * 0x24 + 0x18);
              if (uVar84 != 0) {
                iVar28 = *(int *)(param_6 + 4 + lVar83);
                hVar4 = phVar43[uVar85 * 0x24 + 0x14];
                phVar43 = (hb_buffer_t *)CONCAT71((int7)((ulong)phVar43 >> 8),hVar4);
                uVar52 = *(uint *)phVar3;
                if ((ulong)uVar52 != 0) {
                  uVar58 = *(uint *)(param_6 + 0xc + lVar83);
                  phVar43 = (hb_buffer_t *)(ulong)uVar58;
                  lVar83 = *(long *)pGVar82;
                  lVar65 = 0;
                  do {
                    uVar62 = *(uint *)(lVar83 + 8 + lVar65);
                    if ((uVar57 <= uVar62) && (uVar62 < uVar58)) {
                      *(uint *)(lVar83 + 4 + lVar65) =
                           *(uint *)(lVar83 + 4 + lVar65) & ~uVar84 |
                           iVar28 << ((byte)hVar4 & 0x1f) & uVar84;
                    }
                    lVar65 = lVar65 + 0x14;
                  } while ((ulong)uVar52 * 0x14 != lVar65);
                }
              }
              goto LAB_003f93d0;
            }
            iVar28 = uVar84 + 1;
            if (iVar27 < iVar28) goto LAB_003f93d0;
          }
          iVar27 = uVar84 - 1;
        } while (iVar28 <= iVar27);
      }
LAB_003f93d0:
      uVar54 = uVar54 + 1;
    } while (uVar54 != ((ulong)param_7 & 0xffffffff));
  }
  if ((*(byte *)(param_3 + 0x108) & 0x80) == 0) {
LAB_003f94d3:
    uVar57 = *(uint *)phVar3;
    if ((ulong)uVar57 != 0) {
      lVar83 = *(long *)pGVar82;
      if ((ulong)uVar57 - 1 < 3) {
        uVar54 = 0;
      }
      else {
        puVar31 = (undefined4 *)(lVar83 + 0x48);
        uVar54 = 0;
        do {
          puVar31[-0x12] = puVar31[-0xf];
          puVar31[-0xd] = puVar31[-10];
          puVar31[-8] = puVar31[-5];
          puVar31[-3] = *puVar31;
          uVar54 = uVar54 + 4;
          puVar31 = puVar31 + 0x14;
        } while ((uVar57 & 0xfffffffc) != uVar54);
      }
      phVar43 = (hb_buffer_t *)0x0;
      if ((ulong)(uVar57 & 3) != 0) {
        lVar83 = lVar83 + uVar54 * 0x14;
        phVar43 = (hb_buffer_t *)((ulong)(uVar57 & 3) * 0x14);
        phVar68 = (hb_buffer_t *)0x0;
        do {
          *(undefined4 *)(phVar68 + lVar83) = *(undefined4 *)(phVar68 + lVar83 + 0xc);
          phVar68 = phVar68 + 0x14;
        } while (phVar43 != phVar68);
      }
    }
  }
  else {
    uVar54 = (ulong)*(uint *)phVar3;
    phVar43 = (hb_buffer_t *)0x0;
    if (uVar54 != 0) {
      lVar83 = *(long *)pGVar82;
      phVar43 = (hb_buffer_t *)(uVar54 * 4);
      lVar65 = 0;
      do {
        uVar26 = *(ushort *)(lVar83 + 0x10 + lVar65);
        if ((uVar26 & 0x1f) == 0xc) {
          uVar51 = uVar26 >> 8;
          if (0xc7ff < uVar26) goto switchD_003fd3df_caseD_0;
          uVar57 = *(uint *)(lVar83 + lVar65);
          if ((uVar57 & 0xffffff00) == 0xe00) {
            if (uVar26 < 0x100) {
              uVar67 = 0;
              switch(uVar57) {
              case 0xe31:
              case 0xe34:
              case 0xe35:
              case 0xe36:
              case 0xe37:
              case 0xe47:
              case 0xe4c:
              case 0xe4d:
              case 0xe4e:
                uVar67 = 0xe8;
                break;
              case 0xeb1:
              case 0xeb4:
              case 0xeb5:
              case 0xeb6:
              case 0xeb7:
              case 0xebb:
              case 0xecc:
              case 0xecd:
                uVar67 = 0xe6;
                break;
              case 0xebc:
                uVar67 = 0xdc;
              }
            }
            else {
              uVar67 = 0xde;
              if (uVar57 != 0xe3a) goto LAB_003fd3c5;
            }
switchD_003fd3df_caseD_1:
            uVar51 = uVar67;
          }
          else {
LAB_003fd3c5:
            uVar51 = 0xdc;
            uVar67 = uVar26 >> 8;
            switch((uVar26 >> 8) + 0x7f & 0xff) {
            case 0:
            case 2:
            case 0x8e:
            case 0x8f:
            case 0x90:
            case 0x91:
            case 0x92:
            case 0x93:
            case 0x94:
            case 0x95:
            case 0x96:
            case 0x97:
            case 0x98:
            case 0x9d:
            case 0xa0:
            case 0xf5:
              break;
            default:
              goto switchD_003fd3df_caseD_1;
            case 3:
            case 0x99:
            case 0x9a:
            case 0x9b:
            case 0x9c:
            case 0x9e:
            case 0x9f:
            case 0xa1:
            case 0xa2:
            case 0xa3:
            case 0xf9:
              uVar51 = 0xe6;
              break;
            case 0x82:
              uVar51 = 0xde;
              break;
            case 0x89:
            case 0xea:
              uVar51 = 0xe8;
              break;
            case 0x8a:
            case 0x8d:
              uVar51 = 0xe4;
              break;
            case 0x8c:
              uVar51 = 0xd6;
            }
          }
switchD_003fd3df_caseD_0:
          phVar43 = (hb_buffer_t *)((ulong)uVar26 & 0xff);
          *(ushort *)(lVar83 + 0x10 + lVar65) = uVar51 << 8 | (ushort)phVar43;
        }
        lVar65 = lVar65 + 0x14;
      } while (uVar54 * 0x14 != lVar65);
      goto LAB_003f94d3;
    }
  }
  *(undefined4 *)(param_5 + 0x30) = 2;
  param_5[0xb8] = (hb_buffer_t)((byte)param_5[0xb8] & 0xf0 | 7);
  lVar83 = *(long *)(param_4 + 0x20);
  this = *(accelerator_t **)(lVar83 + 0x128);
  while (this == (accelerator_t *)0x0) {
    uVar30 = auVar133._8_8_;
    lVar65 = *(long *)(lVar83 + 0x68);
    if (lVar65 == 0) {
LAB_003fdb8d:
      this = (accelerator_t *)&_hb_NullPool;
      break;
    }
    pGVar80 = pGVar82;
    this = calloc(1,0x218);
    auVar133._8_8_ = uVar30;
    auVar133._0_8_ = extraout_XMM0_Qa_38;
    if (this == (accelerator_t *)0x0) {
      LOCK();
      bVar90 = *(long *)(lVar83 + 0x128) == 0;
      if (bVar90) {
        *(long *)(lVar83 + 0x128) = (long)&_hb_NullPool;
      }
      UNLOCK();
      uVar36 = extraout_XMM0_Qa_38;
      if (bVar90) goto LAB_003fdb8d;
    }
    else {
      auVar133 = OT::GDEF::accelerator_t::accelerator_t(this,lVar65,extraout_RDX,phVar43,pGVar80);
      LOCK();
      bVar90 = *(long *)(lVar83 + 0x128) == 0;
      if (bVar90) {
        *(long *)(lVar83 + 0x128) = (long)this;
      }
      UNLOCK();
      if (bVar90) break;
      OT::GDEF::accelerator_t::~accelerator_t(this);
      uVar30 = extraout_XMM1_Qa_31;
      free(this);
      uVar36 = extraout_XMM0_Qa_39;
    }
    auVar133._8_8_ = uVar30;
    auVar133._0_8_ = uVar36;
    this = *(accelerator_t **)(lVar83 + 0x128);
  }
  uVar57 = *(uint *)phVar3;
  if ((ulong)uVar57 != 0) {
    lVar83 = *(long *)pGVar82;
    lVar65 = 0;
    do {
      uVar30 = auVar133._8_8_;
      uVar84 = *(uint *)(lVar83 + lVar65);
      sVar5 = *(short *)(this + (ulong)(uVar84 & 0xff) * 2 + 0x18);
      if ((sVar5 == -1) || ((uint)(int)sVar5 >> 3 != uVar84 >> 8)) {
        puVar31 = *(undefined4 **)this;
        this_02 = (GDEF *)&_hb_NullPool;
        if (puVar31 == (undefined4 *)0x0) {
          puVar31 = &_hb_NullPool;
        }
        if (3 < (uint)puVar31[6]) {
          this_02 = *(GDEF **)(puVar31 + 4);
        }
        uVar52 = OT::GDEF::get_glyph_props(this_02,uVar84);
        auVar133._8_8_ = uVar30;
        auVar133._0_8_ = extraout_XMM0_Qa_10;
        auVar18._8_8_ = uVar30;
        auVar18._0_8_ = extraout_XMM0_Qa_10;
        auVar17._8_8_ = uVar30;
        auVar17._0_8_ = extraout_XMM0_Qa_10;
        auVar16._8_8_ = uVar30;
        auVar16._0_8_ = extraout_XMM0_Qa_10;
        if (((*(long *)this != 0) && (auVar133 = auVar16, uVar84 < 0x200000)) &&
           (auVar133 = auVar17, uVar52 < 8)) {
          *(ushort *)(this + (ulong)(uVar84 & 0xff) * 2 + 0x18) =
               (ushort)uVar52 | (ushort)(uVar84 >> 5) & 0xfff8;
          auVar133 = auVar18;
        }
      }
      else {
        uVar52 = (int)sVar5 & 7;
      }
      *(short *)(lVar83 + 0xc + lVar65) = (short)uVar52;
      *(undefined1 *)(lVar83 + 0xe + lVar65) = 0;
      lVar65 = lVar65 + 0x14;
    } while ((ulong)uVar57 * 0x14 != lVar65);
  }
  uVar26 = *(ushort *)(param_3 + 0x108);
  if (((uVar26 & 0x40) != 0) && (uVar57 = *(uint *)phVar3, (ulong)uVar57 != 0)) {
    lVar83 = *(long *)pGVar82;
    lVar65 = 0;
    do {
      uVar26 = *(ushort *)(lVar83 + 0x10 + lVar65);
      if (((uVar26 & 0x1f) != 0xc) ||
         ((uVar64 = 8, (uVar26 & 0x20) != 0 && ((*(byte *)(lVar83 + 0xc + lVar65) & 0x10) == 0)))) {
        uVar64 = 2;
      }
      *(undefined2 *)(lVar83 + 0xc + lVar65) = uVar64;
      lVar65 = lVar65 + 0x14;
    } while ((ulong)uVar57 * 0x14 != lVar65);
    uVar26 = *(ushort *)(param_3 + 0x108);
  }
  if ((uVar26 & 0x2000) == 0) {
    lVar83 = *(long *)(param_4 + 0x20);
    local_298 = *(accelerator_t<OT::Layout::GSUB> **)(lVar83 + 0x130);
    while (local_298 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
      uVar30 = auVar133._8_8_;
      lVar65 = *(long *)(lVar83 + 0x68);
      if (lVar65 == 0) {
LAB_003fe723:
        local_298 = (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool;
        break;
      }
      local_298 = calloc(1,0x18);
      auVar133._8_8_ = uVar30;
      auVar133._0_8_ = extraout_XMM0_Qa_40;
      if (local_298 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
        LOCK();
        bVar90 = *(long *)(lVar83 + 0x130) == 0;
        if (bVar90) {
          *(long *)(lVar83 + 0x130) = (long)&_hb_NullPool;
        }
        UNLOCK();
        uVar36 = extraout_XMM0_Qa_40;
        if (bVar90) goto LAB_003fe723;
      }
      else {
        auVar133 = OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(local_298,lVar65);
        LOCK();
        bVar90 = *(long *)(lVar83 + 0x130) == 0;
        if (bVar90) {
          *(long *)(lVar83 + 0x130) = (long)local_298;
        }
        UNLOCK();
        if (bVar90) break;
        OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(local_298);
        uVar30 = extraout_XMM1_Qa_32;
        free(local_298);
        uVar36 = extraout_XMM0_Qa_41;
      }
      auVar133._8_8_ = uVar30;
      auVar133._0_8_ = uVar36;
      local_298 = *(accelerator_t<OT::Layout::GSUB> **)(lVar83 + 0x130);
    }
    if (*(long *)(param_5 + 0xd0) == 0) {
LAB_003f976d:
      auVar134 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                           ((hb_ot_apply_context_t *)&local_1e8,0,(long)param_4,
                            (undefined4 *)param_5,
                            *(GDEFVersion1_2<OT::Layout::SmallTypes> **)local_298);
      local_100 = OT::Layout::GSUB_impl::SubstLookup::
                  dispatch_recurse_func<OT::hb_ot_apply_context_t>;
      uVar54 = (ulong)*(uint *)(param_3 + 0xcc);
      if (*(uint *)(param_3 + 0xcc) != 0) {
        uVar88 = 0;
        uVar85 = 0;
        do {
          if (uVar88 < uVar54) {
            puVar45 = (uint *)(uVar88 * 0x10 + *(long *)(param_3 + 0xd0));
            uVar57 = *puVar45;
          }
          else {
            puVar45 = &_hb_NullPool;
            uVar57 = _hb_NullPool;
          }
          if ((uint)uVar85 < uVar57) {
            uVar85 = uVar85 & 0xffffffff;
            do {
              if (uVar85 < *(uint *)(param_3 + 0xac)) {
                puVar41 = (ushort *)(uVar85 * 0xc + *(long *)(param_3 + 0xb0));
              }
              else {
                puVar41 = (ushort *)&_hb_NullPool;
              }
              uVar26 = *puVar41;
              uVar54 = (ulong)uVar26;
              if ((uint)uVar26 < *(uint *)(local_298 + 8)) {
                while( true ) {
                  uVar30 = auVar134._8_8_;
                  puVar33 = *(ulong **)(*(long *)(local_298 + 0x10) + uVar54 * 8);
                  if (puVar33 != (ulong *)0x0) break;
                  puVar31 = *(undefined4 **)local_298;
                  if (puVar31 == (undefined4 *)0x0) {
                    puVar31 = &_hb_NullPool;
                  }
                  psVar46 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar31[6]) {
                    psVar46 = *(short **)(puVar31 + 4);
                  }
                  puVar69 = (ushort *)&_hb_NullPool;
                  if (*psVar46 == 0x100) {
                    uVar51 = psVar46[4];
                    puVar32 = (ushort *)&_hb_NullPool;
                    if (uVar51 != 0) {
                      puVar32 = (ushort *)
                                ((long)psVar46 + (ulong)(ushort)(uVar51 << 8 | uVar51 >> 8));
                    }
                    puVar69 = (ushort *)&_hb_NullPool;
                    if (uVar26 < (ushort)(*puVar32 << 8 | *puVar32 >> 8)) {
                      uVar51 = puVar32[uVar54 + 1];
                      puVar69 = (ushort *)&_hb_NullPool;
                      if (uVar51 != 0) {
                        puVar69 = (ushort *)
                                  ((long)puVar32 + (ulong)(ushort)(uVar51 << 8 | uVar51 >> 8));
                      }
                    }
                  }
                    /* try { // try from 003f98f9 to 003f98fd has its CatchHandler @ 003fe853 */
                  puVar33 = OT::hb_ot_layout_lookup_accelerator_t::
                            create<OT::Layout::GSUB_impl::SubstLookup>(puVar69);
                  auVar134._8_8_ = uVar30;
                  auVar134._0_8_ = extraout_XMM0_Qa_11;
                  if (puVar33 == (ulong *)0x0) goto LAB_003f9820;
                  plVar2 = (long *)(*(long *)(local_298 + 0x10) + uVar54 * 8);
                  LOCK();
                  bVar90 = *plVar2 == 0;
                  if (bVar90) {
                    *plVar2 = (long)puVar33;
                  }
                  UNLOCK();
                  if (bVar90) break;
                  free(puVar33);
                  auVar134._8_8_ = uVar30;
                  auVar134._0_8_ = extraout_XMM0_Qa_12;
                }
                uVar30 = auVar134._8_8_;
                if (*(long *)(param_5 + 0xd0) != 0) {
                  uVar57 = *(uint *)(puVar41 + 4);
                    /* try { // try from 003f9955 to 003f9c1d has its CatchHandler @ 003fe875 */
                  bVar90 = hb_buffer_t::message
                                     (auVar134._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,
                                      in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,
                                      param_4,"start lookup %u feature \'%c%c%c%c\'",uVar54,
                                      (ulong)(uVar57 >> 0x18),(ulong)(uVar57 >> 0x10 & 0xff),
                                      (char)(uVar57 >> 8),(ulong)(uVar57 & 0xff));
                  auVar134._8_8_ = uVar30;
                  auVar134._0_8_ = extraout_XMM0_Qa_13;
                  if (!bVar90) goto LAB_003f9820;
                }
                pGVar80 = local_148;
                uVar30 = auVar134._8_8_;
                if ((((*puVar33 & local_d8) == 0) || ((puVar33[1] & local_d0) == 0)) ||
                   ((local_c8 & puVar33[2]) == 0)) {
                  if (*(long *)(param_5 + 0xd0) != 0) {
                    uVar57 = *(uint *)(puVar41 + 4);
                    /* try { // try from 003f9ce9 to 003f9d13 has its CatchHandler @ 003fe875 */
                    hb_buffer_t::message
                              (auVar134._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                               in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,
                               "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                               uVar54,(ulong)(uVar57 >> 0x18),(ulong)(uVar57 >> 0x10 & 0xff),
                               (char)(uVar57 >> 8),(ulong)(uVar57 & 0xff));
                    auVar134._8_8_ = uVar30;
                    auVar134._0_8_ = extraout_XMM0_Qa_14;
                    goto LAB_003f9d14;
                  }
                }
                else {
                  local_b8 = (uint)uVar26;
                  local_bc = *(uint *)(puVar41 + 2);
                  local_a0 = 0xffffffff;
                  bVar25 = (byte)puVar41[1] >> 1;
                  local_aa = bVar25 & 1;
                  local_ab = (byte)puVar41[1] & 1;
                  local_a8 = (byte)puVar41[1] >> 2 & 1;
                  local_a9 = (byte)puVar41[1] >> 3 & 1;
                  puVar31 = *(undefined4 **)local_298;
                  if (puVar31 == (undefined4 *)0x0) {
                    puVar31 = &_hb_NullPool;
                  }
                  psVar46 = (short *)&_hb_NullPool;
                  if (3 < (uint)puVar31[6]) {
                    psVar46 = *(short **)(puVar31 + 4);
                  }
                  psVar79 = (short *)&_hb_NullPool;
                  if (*psVar46 == 0x100) {
                    uVar51 = psVar46[4];
                    puVar69 = (ushort *)&_hb_NullPool;
                    if (uVar51 != 0) {
                      puVar69 = (ushort *)
                                ((long)psVar46 + (ulong)(ushort)(uVar51 << 8 | uVar51 >> 8));
                    }
                    psVar79 = (short *)&_hb_NullPool;
                    if (uVar26 < (ushort)(*puVar69 << 8 | *puVar69 >> 8)) {
                      uVar26 = puVar69[uVar54 + 1];
                      psVar79 = (short *)&_hb_NullPool;
                      if (uVar26 != 0) {
                        psVar79 = (short *)((long)puVar69 +
                                           (ulong)(ushort)(uVar26 << 8 | uVar26 >> 8));
                      }
                    }
                  }
                  uVar57 = *(uint *)(local_148 + 0x60);
                  if ((uVar57 == 0) || (local_bc == 0)) {
LAB_003f9d14:
                    lVar83 = *(long *)(param_5 + 0xd0);
                  }
                  else {
                    uVar51 = psVar79[2] << 8 | (ushort)psVar79[2] >> 8;
                    uVar26 = (ushort)psVar79[1] >> 8;
                    uVar67 = psVar79[1] << 8 | uVar26;
                    local_190 = (uint)uVar67;
                    if ((uVar26 & 0x10) != 0) {
                      local_190 = CONCAT22(psVar79[(ulong)uVar51 + 3] << 8 |
                                           (ushort)psVar79[(ulong)uVar51 + 3] >> 8,uVar67);
                    }
                    local_198 = (hb_ot_apply_context_t *)&local_1e8;
                    local_1c0 = (undefined1  [16])0x0;
                    local_1b0 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                    local_185 = local_a9;
                    if (local_160 != 0) {
                      local_185 = 0;
                    }
                    local_186 = local_160 == 1;
                    local_1c8 = (code *)(CONCAT62(local_1c8._2_6_,CONCAT11(bVar25,local_186)) &
                                        0xffffffffffff01ff);
                    uVar48 = (ulong)local_1c8;
                    local_1c8._0_3_ = CONCAT12(local_186,(undefined2)local_1c8);
                    local_1d0 = CONCAT44(local_bc,local_190);
                    local_1c8._0_4_ = CONCAT13(local_185,(undefined3)local_1c8);
                    local_1c8._5_3_ = SUB83(uVar48,5);
                    local_1c8._0_5_ = (uint5)(uint)local_1c8;
                    local_180 = (undefined1  [16])0x0;
                    local_170 = 0;
                    local_188 = local_ab != 0 || (bool)local_186;
                    local_187 = 1;
                    local_18c = 0xffffffff;
                    local_184 = 0;
                    sVar5 = *psVar79;
                    local_1a8 = uVar57;
                    local_168 = uVar57;
                    local_b4 = local_190;
                    uStack_1d8 = local_198;
                    if (sVar5 == 0x700) {
                      puVar69 = (ushort *)&_hb_NullPool;
                      if (psVar79[2] != 0) {
                        puVar69 = (ushort *)(psVar79 + 3);
                      }
                      uVar26 = *puVar69;
                      psVar46 = (short *)&_hb_NullPool;
                      if (uVar26 != 0) {
                        psVar46 = (short *)((long)psVar79 +
                                           (ulong)(ushort)(uVar26 << 8 | uVar26 >> 8));
                      }
                      if (*psVar46 == 0x100) {
                        sVar5 = psVar46[1];
                        goto joined_r0x003f9e77;
                      }
                    }
                    else {
joined_r0x003f9e77:
                      if (sVar5 == 0x800) {
                        *(int *)(local_148 + 0x5c) = *(int *)(local_148 + 0x60) + -1;
                        auVar134 = apply_backward(local_198,puVar33,(uint)uVar51);
                        goto LAB_003f9d14;
                      }
                    }
                    *(undefined2 *)(local_148 + 0x5a) = 1;
                    *(undefined4 *)(local_148 + 100) = 0;
                    *(undefined8 *)(local_148 + 0x78) = *(undefined8 *)(local_148 + 0x70);
                    *(undefined4 *)(local_148 + 0x5c) = 0;
                    auVar134 = apply_forward(local_198,puVar33,(uint)uVar51);
                    uVar30 = auVar134._8_8_;
                    if (*(hb_buffer_t *)(pGVar80 + 0x58) != (hb_buffer_t)0x0) {
                      if (*(hb_buffer_t *)(pGVar80 + 0x5a) != (hb_buffer_t)0x0) {
                        iVar28 = *(int *)(pGVar80 + 0x5c);
                        uVar57 = *(int *)(pGVar80 + 0x60) - iVar28;
                        pvVar70 = *(void **)(pGVar80 + 0x78);
                        pvVar38 = *(void **)(pGVar80 + 0x70);
                        if ((pvVar70 != pvVar38) || (*(int *)(pGVar80 + 100) != iVar28)) {
                          uVar84 = *(int *)(pGVar80 + 100) + uVar57;
                          if ((uVar84 == 0) || (uVar84 < *(uint *)(pGVar80 + 0x68))) {
                            if (pvVar70 == pvVar38) {
LAB_003f9c76:
                              uVar84 = *(uint *)(pGVar80 + 100);
                              if (*(int *)(pGVar80 + 0x5c) + uVar57 < uVar84 + uVar57) {
                                pvVar70 = *(void **)(pGVar80 + 0x80);
                                *(void **)(pGVar80 + 0x78) = pvVar70;
                                if ((ulong)uVar84 != 0) {
                                  memcpy(pvVar70,pvVar38,(ulong)uVar84 * 0x14);
                                  pvVar38 = *(void **)(pGVar80 + 0x70);
                                  pvVar70 = *(void **)(pGVar80 + 0x78);
                                }
                              }
                              else {
                                pvVar70 = pvVar38;
                              }
                            }
                          }
                          else {
                            uVar36 = hb_buffer_t::enlarge((hb_buffer_t *)pGVar80,uVar84);
                            auVar134._8_8_ = uVar30;
                            auVar134._0_8_ = extraout_XMM0_Qa_17;
                            if ((char)uVar36 == '\0') goto LAB_003f9d8a;
                            pvVar38 = *(void **)(pGVar80 + 0x70);
                            pvVar70 = *(void **)(pGVar80 + 0x78);
                            if (pvVar70 == pvVar38) goto LAB_003f9c76;
                          }
                          memmove((void *)((long)pvVar70 + (ulong)*(uint *)(pGVar80 + 100) * 0x14),
                                  (void *)((long)pvVar38 + (ulong)*(uint *)(pGVar80 + 0x5c) * 0x14),
                                  (ulong)uVar57 * 0x14);
                          auVar134._8_8_ = uVar30;
                          auVar134._0_8_ = extraout_XMM0_Qa_15;
                          iVar28 = *(int *)(pGVar80 + 100);
                        }
                        *(uint *)(pGVar80 + 100) = iVar28 + uVar57;
                      }
                      if (*(long *)(pGVar80 + 0x78) != *(long *)(pGVar80 + 0x70)) {
                        *(long *)(pGVar80 + 0x80) = *(long *)(pGVar80 + 0x70);
                        *(long *)(pGVar80 + 0x70) = *(long *)(pGVar80 + 0x78);
                      }
                      *(undefined4 *)(pGVar80 + 0x60) = *(undefined4 *)(pGVar80 + 100);
                    }
LAB_003f9d8a:
                    *(hb_buffer_t *)(pGVar80 + 0x5a) = (hb_buffer_t)0x0;
                    *(undefined4 *)(pGVar80 + 100) = 0;
                    *(undefined8 *)(pGVar80 + 0x78) = *(undefined8 *)(pGVar80 + 0x70);
                    *(undefined4 *)(pGVar80 + 0x5c) = 0;
                    lVar83 = *(long *)(param_5 + 0xd0);
                  }
                  if (lVar83 != 0) {
                    uVar30 = auVar134._8_8_;
                    uVar57 = *(uint *)(puVar41 + 4);
                    /* try { // try from 003f9dda to 003f9e91 has its CatchHandler @ 003fe875 */
                    hb_buffer_t::message
                              (auVar134._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                               in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,
                               "end lookup %u feature \'%c%c%c%c\'",uVar54,(ulong)(uVar57 >> 0x18),
                               (ulong)(uVar57 >> 0x10 & 0xff),(char)(uVar57 >> 8),
                               (ulong)(uVar57 & 0xff));
                    auVar134._8_8_ = uVar30;
                    auVar134._0_8_ = extraout_XMM0_Qa_16;
                  }
                }
              }
LAB_003f9820:
              uVar85 = uVar85 + 1;
            } while (uVar85 < *puVar45);
          }
          if (*(code **)(puVar45 + 2) != (code *)0x0) {
                    /* try { // try from 003f9ee7 to 003f9ef5 has its CatchHandler @ 003fe871 */
            cVar24 = (**(code **)(puVar45 + 2))(puVar59,param_4,param_5);
            auVar20._8_8_ = extraout_XMM1_Qa_16;
            auVar20._0_8_ = extraout_XMM0_Qa_18;
            auVar134._8_8_ = extraout_XMM1_Qa_16;
            auVar134._0_8_ = extraout_XMM0_Qa_18;
            if (cVar24 != '\0') {
              uVar57 = *(uint *)phVar3;
              if (uVar57 == 0) {
                local_d8 = 0;
                local_d0 = 0;
                local_c8 = 0;
              }
              else {
                puVar45 = *(uint **)pGVar82;
                uVar84 = uVar57 - 1;
                puVar47 = puVar45;
                if (uVar84 < 3) {
                  local_d8 = 0;
                }
                else {
                  uVar52 = uVar57 & 0xfffffffc;
                  local_d8 = 0;
                  do {
                    local_d8 = local_d8 | 1L << ((ulong)(*puVar47 >> 4) & 0x3f) |
                               1L << ((ulong)(puVar47[5] >> 4) & 0x3f) |
                               1L << ((ulong)(puVar47[10] >> 4) & 0x3f) |
                               1L << ((ulong)(puVar47[0xf] >> 4) & 0x3f);
                    puVar47 = puVar47 + 0x14;
                    uVar52 = uVar52 - 4;
                  } while (uVar52 != 0);
                }
                if ((uVar57 & 3) != 0) {
                  lVar83 = 0;
                  do {
                    local_d8 = local_d8 |
                               1L << ((ulong)(*(uint *)((long)puVar47 + lVar83) >> 4) & 0x3f);
                    lVar83 = lVar83 + 0x14;
                  } while ((uVar57 & 3) * 0x14 != (int)lVar83);
                }
                puVar47 = puVar45;
                if (uVar84 < 3) {
                  local_d0 = 0;
                }
                else {
                  uVar52 = uVar57 & 0xfffffffc;
                  local_d0 = 0;
                  do {
                    local_d0 = local_d0 | 1L << ((ulong)(byte)*puVar47 & 0x3f) |
                               1L << ((ulong)(byte)puVar47[5] & 0x3f) |
                               1L << ((ulong)(byte)puVar47[10] & 0x3f) |
                               1L << ((ulong)(byte)puVar47[0xf] & 0x3f);
                    puVar47 = puVar47 + 0x14;
                    uVar52 = uVar52 - 4;
                  } while (uVar52 != 0);
                }
                if ((uVar57 & 3) != 0) {
                  lVar83 = 0;
                  do {
                    local_d0 = local_d0 | 1L << ((ulong)*(byte *)((long)puVar47 + lVar83) & 0x3f);
                    lVar83 = lVar83 + 0x14;
                  } while ((uVar57 & 3) * 0x14 != (int)lVar83);
                }
                if (uVar84 < 3) {
                  local_c8 = 0;
                }
                else {
                  uVar84 = uVar57 & 0xfffffffc;
                  local_c8 = 0;
                  do {
                    local_c8 = local_c8 | 1L << ((ulong)(*puVar45 >> 9) & 0x3f) |
                               1L << ((ulong)(puVar45[5] >> 9) & 0x3f) |
                               1L << ((ulong)(puVar45[10] >> 9) & 0x3f) |
                               1L << ((ulong)(puVar45[0xf] >> 9) & 0x3f);
                    puVar45 = puVar45 + 0x14;
                    uVar84 = uVar84 - 4;
                  } while (uVar84 != 0);
                }
                if ((uVar57 & 3) != 0) {
                  lVar83 = 0;
                  do {
                    local_c8 = local_c8 |
                               1L << ((ulong)(*(uint *)((long)puVar45 + lVar83) >> 9) & 0x3f);
                    lVar83 = lVar83 + 0x14;
                  } while ((uVar57 & 3) * 0x14 != (int)lVar83);
                }
              }
              auVar134 = auVar20;
            }
          }
          uVar88 = uVar88 + 1;
          uVar54 = (ulong)*(uint *)(param_3 + 0xcc);
        } while (uVar88 < uVar54);
      }
      free(local_e0);
      auVar131 = hb_sanitize_context_t::~hb_sanitize_context_t(local_140);
      if (*(long *)(param_5 + 0xd0) != 0) {
        uVar57 = *(uint *)(param_3 + 0x88);
        hb_buffer_t::message
                  (auVar131._0_8_,auVar131._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,
                   "end table GSUB script tag \'%c%c%c%c\'",(ulong)(uVar57 >> 0x18),
                   (ulong)(uVar57 >> 0x10 & 0xff),(ulong)(uVar57 >> 8 & 0xff),(char)uVar57);
      }
    }
    else {
      uVar57 = *(uint *)(param_3 + 0x88);
      bVar90 = hb_buffer_t::message
                         (auVar133._0_8_,auVar133._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                          in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,
                          "start table GSUB script tag \'%c%c%c%c\'",(ulong)(uVar57 >> 0x18),
                          (ulong)(uVar57 >> 0x10 & 0xff),(ulong)(uVar57 >> 8 & 0xff),(char)uVar57);
      if (bVar90) goto LAB_003f976d;
    }
    uVar57 = *(uint *)(param_3 + 0x108);
  }
  else {
    hb_aat_layout_substitute(puVar59,param_4,param_5,param_6,(ulong)param_7 & 0xffffffff);
    uVar57 = *(uint *)(param_3 + 0x108);
  }
  if ((~uVar57 & 0x2200) == 0) {
    hb_aat_layout_remove_deleted_glyphs(param_5);
  }
  *(undefined2 *)(param_5 + 0x5a) = 0x100;
  *(undefined4 *)(param_5 + 100) = 0;
  local_2a0 = *(hb_buffer_t **)(param_5 + 0x70);
  *(hb_buffer_t **)(param_5 + 0x78) = local_2a0;
  uVar57 = *(uint *)(param_5 + 0x60);
  if (uVar57 * 0x14 != 0) {
    memset(*(void **)(param_5 + 0x80),0,(ulong)(uVar57 * 0x14));
    uVar57 = *(uint *)(param_5 + 0x60);
    local_2a0 = *(hb_buffer_t **)(param_5 + 0x70);
  }
  lVar83 = *(long *)(param_5 + 0x80);
  if ((*(uint *)(param_5 + 0x38) & 0xfffffffe) == 4) {
    lVar65 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
    if (lVar65 == 0) {
      uVar30 = 0;
    }
    else {
      uVar30 = *(undefined8 *)(lVar65 + 0x38);
    }
    auVar135 = (**(code **)(*(long *)(param_4 + 0x90) + 0x58))
                         (param_4,*(undefined8 *)(param_4 + 0x98),uVar57,local_2a0,0x14,lVar83,0x14,
                          uVar30);
    phVar60 = param_4;
    while (*(undefined **)(*(long *)(phVar60 + 0x90) + 0x68) ==
           PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
      phVar60 = *(hb_font_t **)(phVar60 + 0x18);
      if ((phVar60 == (hb_font_t *)0x0) || (phVar60 == (hb_font_t *)&_hb_Null_hb_font_t))
      goto LAB_003fa3a9;
    }
    if (uVar57 != 0) {
      lVar65 = 0;
      do {
        auVar135 = hb_font_t::get_glyph_h_origin_with_fallback
                             (param_4,*(undefined4 *)((long)local_2a0 + lVar65),(int *)&local_1e8,
                              (int *)&local_78);
        piVar37 = (int *)(lVar83 + 8 + lVar65);
        *piVar37 = *piVar37 - (uint)local_1e8;
        piVar37 = (int *)(lVar83 + 0xc + lVar65);
        *piVar37 = *piVar37 - (int)local_78;
        lVar65 = lVar65 + 0x14;
      } while ((ulong)uVar57 * 0x14 != lVar65);
    }
  }
  else {
    lVar65 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
    if (lVar65 == 0) {
      uVar30 = 0;
    }
    else {
      uVar30 = *(undefined8 *)(lVar65 + 0x40);
    }
    auVar135 = (**(code **)(*(long *)(param_4 + 0x90) + 0x60))
                         (param_4,*(undefined8 *)(param_4 + 0x98),uVar57,local_2a0,0x14,lVar83 + 4,
                          0x14,uVar30);
    if (uVar57 != 0) {
      lVar65 = 0;
      do {
        auVar135 = hb_font_t::get_glyph_v_origin_with_fallback
                             (param_4,*(undefined4 *)((long)local_2a0 + lVar65),(int *)&local_1e8,
                              (int *)&local_78);
        piVar37 = (int *)(lVar83 + 8 + lVar65);
        *piVar37 = *piVar37 - (uint)local_1e8;
        piVar37 = (int *)(lVar83 + 0xc + lVar65);
        *piVar37 = *piVar37 - (int)local_78;
        lVar65 = lVar65 + 0x14;
      } while ((ulong)uVar57 * 0x14 != lVar65);
    }
  }
LAB_003fa3a9:
  phVar43 = param_5 + 0x80;
  if (((byte)param_5[0xc0] & 4) == 0) {
LAB_003fa3c8:
    phVar87 = (hb_buffer_t *)(ulong)*(uint *)phVar3;
    lVar83 = *(long *)pGVar82;
    phVar68 = *(hb_buffer_t **)phVar43;
    bVar25 = *(byte *)(param_3 + 0x109);
  }
  else {
    lVar83 = *(long *)(param_5 + 0x70);
    phVar68 = *(hb_buffer_t **)(param_5 + 0x80);
    uVar57 = *(uint *)(param_5 + 0x60);
    if ((ulong)uVar57 != 0) {
      uVar84 = *(uint *)(param_5 + 0x38) & 0xfffffffe;
      lVar65 = 0;
      puVar45 = local_1e8;
      do {
        local_1e8._4_4_ = (undefined4)((ulong)puVar45 >> 0x20);
        if (((*(ushort *)(lVar83 + 0x10 + lVar65) & 0x1f) != 0x1d) ||
           ((*(byte *)(lVar83 + 0xc + lVar65) & 0x20) != 0)) goto switchD_003fa4fb_caseD_7;
        if ((*(int *)(param_5 + 0x24) != 0) &&
           (*(int *)(lVar83 + lVar65) == *(int *)(param_5 + 0x24))) {
          if (uVar84 == 4) {
            iVar28 = *(int *)(param_4 + 0x28);
            iVar27 = iVar28 + 3;
            if (-1 < iVar28) {
              iVar27 = iVar28;
            }
            *(int *)(phVar68 + lVar65) = iVar27 >> 2;
          }
          else {
            iVar28 = *(int *)(param_4 + 0x2c);
            iVar27 = iVar28 + 3;
            if (-1 < iVar28) {
              iVar27 = iVar28;
            }
            *(int *)(phVar68 + lVar65 + 4) = -(iVar27 >> 2);
          }
        }
        uVar26 = *(ushort *)(lVar83 + 0x10 + lVar65);
        uVar52 = (uint)(uVar26 >> 8);
        if ((uVar26 & 0x1f) != 0x1d) {
          uVar52 = 0;
        }
        switch((char)uVar52) {
        case '\x01':
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\x06':
        case '\x10':
          if (uVar84 == 4) {
            *(int *)(phVar68 + lVar65) =
                 (int)((uVar52 >> 1) + *(int *)(param_4 + 0x28)) / (int)uVar52;
          }
          else {
            *(int *)(phVar68 + lVar65 + 4) =
                 -((int)((uVar52 >> 1) + *(int *)(param_4 + 0x2c)) / (int)uVar52);
          }
          break;
        case '\x11':
          if (uVar84 == 4) {
            lVar86 = (long)*(int *)(param_4 + 0x28) << 2;
            *(uint *)(phVar68 + lVar65) =
                 ((*(int *)(param_4 + 0x28) >> 0x1f & 0x3fffffffU) >> 0x1d) +
                 (int)(lVar86 / 0x12) + (int)(lVar86 >> 0x3f);
          }
          else {
            *(int *)(phVar68 + lVar65 + 4) = (int)(((long)*(int *)(param_4 + 0x2c) * -4) / 0x12);
          }
          break;
        case '\x13':
          local_1e8._0_4_ = 0;
          lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
          if (lVar86 == 0) {
            uVar30 = 0;
          }
          else {
            uVar30 = *(undefined8 *)(lVar86 + 0x10);
          }
          iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                             (param_4,*(undefined8 *)(param_4 + 0x98),0x30,&local_1e8,uVar30);
          if (iVar28 == 0) {
            local_1e8._0_4_ = 0;
            lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
            if (lVar86 == 0) {
              uVar30 = 0;
            }
            else {
              uVar30 = *(undefined8 *)(lVar86 + 0x10);
            }
            iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                               (param_4,*(undefined8 *)(param_4 + 0x98),0x31,&local_1e8,uVar30);
            if (iVar28 == 0) {
              local_1e8._0_4_ = 0;
              lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
              if (lVar86 == 0) {
                uVar30 = 0;
              }
              else {
                uVar30 = *(undefined8 *)(lVar86 + 0x10);
              }
              iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                                 (param_4,*(undefined8 *)(param_4 + 0x98),0x32,&local_1e8,uVar30);
              if (iVar28 == 0) {
                local_1e8._0_4_ = 0;
                lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
                if (lVar86 == 0) {
                  uVar30 = 0;
                }
                else {
                  uVar30 = *(undefined8 *)(lVar86 + 0x10);
                }
                iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                                   (param_4,*(undefined8 *)(param_4 + 0x98),0x33,&local_1e8,uVar30);
                if (iVar28 == 0) {
                  local_1e8._0_4_ = 0;
                  lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
                  if (lVar86 == 0) {
                    uVar30 = 0;
                  }
                  else {
                    uVar30 = *(undefined8 *)(lVar86 + 0x10);
                  }
                  iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                                     (param_4,*(undefined8 *)(param_4 + 0x98),0x34,&local_1e8,uVar30
                                     );
                  if (iVar28 == 0) {
                    local_1e8._0_4_ = 0;
                    lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
                    if (lVar86 == 0) {
                      uVar30 = 0;
                    }
                    else {
                      uVar30 = *(undefined8 *)(lVar86 + 0x10);
                    }
                    iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                                       (param_4,*(undefined8 *)(param_4 + 0x98),0x35,&local_1e8,
                                        uVar30);
                    if (iVar28 == 0) {
                      local_1e8._0_4_ = 0;
                      lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
                      if (lVar86 == 0) {
                        uVar30 = 0;
                      }
                      else {
                        uVar30 = *(undefined8 *)(lVar86 + 0x10);
                      }
                      iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                                         (param_4,*(undefined8 *)(param_4 + 0x98),0x36,&local_1e8,
                                          uVar30);
                      if (iVar28 == 0) {
                        local_1e8._0_4_ = 0;
                        lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
                        if (lVar86 == 0) {
                          uVar30 = 0;
                        }
                        else {
                          uVar30 = *(undefined8 *)(lVar86 + 0x10);
                        }
                        iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                                           (param_4,*(undefined8 *)(param_4 + 0x98),0x37,&local_1e8,
                                            uVar30);
                        if (iVar28 == 0) {
                          local_1e8._0_4_ = 0;
                          lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
                          if (lVar86 == 0) {
                            uVar30 = 0;
                          }
                          else {
                            uVar30 = *(undefined8 *)(lVar86 + 0x10);
                          }
                          iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                                             (param_4,*(undefined8 *)(param_4 + 0x98),0x38,
                                              &local_1e8,uVar30);
                          if (iVar28 == 0) {
                            local_1e8._0_4_ = 0;
                            lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
                            if (lVar86 == 0) {
                              uVar30 = 0;
                            }
                            else {
                              uVar30 = *(undefined8 *)(lVar86 + 0x10);
                            }
                            iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                                               (param_4,*(undefined8 *)(param_4 + 0x98),0x39,
                                                &local_1e8,uVar30);
                            auVar135._8_8_ = extraout_XMM1_Qa_18;
                            auVar135._0_8_ = extraout_XMM0_Qa_20;
                            puVar45 = (uint *)CONCAT44(local_1e8._4_4_,(uint)local_1e8);
                            if (iVar28 == 0) break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          lVar86 = *(long *)(param_4 + 0x90);
          if (uVar84 == 4) {
            lVar73 = *(long *)(lVar86 + 0x10);
            if (lVar73 != 0) goto LAB_003fa9dd;
LAB_003fa711:
            uVar30 = 0;
            goto LAB_003fa9e1;
          }
LAB_003fa9fb:
          if (*(long *)(lVar86 + 0x10) == 0) {
            uVar30 = 0;
          }
          else {
            uVar30 = *(undefined8 *)(*(long *)(lVar86 + 0x10) + 0x30);
          }
          uVar29 = (**(code **)(lVar86 + 0x50))
                             (param_4,*(undefined8 *)(param_4 + 0x98),(uint)local_1e8,uVar30);
          *(undefined4 *)(phVar68 + lVar65 + 4) = uVar29;
          uVar30 = extraout_XMM0_Qa_22;
          uVar36 = extraout_XMM1_Qa_20;
          goto LAB_003faa25;
        case '\x14':
          local_1e8._0_4_ = 0;
          lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
          if (lVar86 == 0) {
            uVar30 = 0;
          }
          else {
            uVar30 = *(undefined8 *)(lVar86 + 0x10);
          }
          iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                             (param_4,*(undefined8 *)(param_4 + 0x98),0x2e,&local_1e8,uVar30);
          if (iVar28 == 0) {
            local_1e8._0_4_ = 0;
            lVar86 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
            if (lVar86 == 0) {
              uVar30 = 0;
            }
            else {
              uVar30 = *(undefined8 *)(lVar86 + 0x10);
            }
            iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                               (param_4,*(undefined8 *)(param_4 + 0x98),0x2c,&local_1e8,uVar30);
            auVar135._8_8_ = extraout_XMM1_Qa_17;
            auVar135._0_8_ = extraout_XMM0_Qa_19;
            puVar45 = (uint *)CONCAT44(local_1e8._4_4_,(uint)local_1e8);
            if (iVar28 == 0) break;
          }
          lVar86 = *(long *)(param_4 + 0x90);
          if (uVar84 != 4) goto LAB_003fa9fb;
          lVar73 = *(long *)(lVar86 + 0x10);
          if (lVar73 == 0) goto LAB_003fa711;
LAB_003fa9dd:
          uVar30 = *(undefined8 *)(lVar73 + 0x28);
LAB_003fa9e1:
          uVar29 = (**(code **)(lVar86 + 0x48))
                             (param_4,*(undefined8 *)(param_4 + 0x98),(uint)local_1e8,uVar30);
          *(undefined4 *)(phVar68 + lVar65) = uVar29;
          uVar30 = extraout_XMM0_Qa_21;
          uVar36 = extraout_XMM1_Qa_19;
LAB_003faa25:
          auVar135._8_8_ = uVar36;
          auVar135._0_8_ = uVar30;
          puVar45 = (uint *)CONCAT44(local_1e8._4_4_,(uint)local_1e8);
          break;
        case '\x15':
          if (uVar84 == 4) {
            *(int *)(phVar68 + lVar65) = *(int *)(phVar68 + lVar65) / 2;
          }
          else {
            *(int *)(phVar68 + lVar65 + 4) = *(int *)(phVar68 + lVar65 + 4) / 2;
          }
        }
switchD_003fa4fb_caseD_7:
        local_1e8 = puVar45;
        lVar65 = lVar65 + 0x14;
        puVar45 = local_1e8;
      } while ((ulong)uVar57 * 0x14 != lVar65);
      goto LAB_003fa3c8;
    }
    phVar87 = (hb_buffer_t *)0x0;
    bVar25 = *(byte *)(param_3 + 0x109);
  }
  if ((bVar25 & 1) == 0) {
    bVar90 = false;
  }
  else {
    bVar90 = (*(uint *)(param_5 + 0x38) & 0xfffffffd) == 4;
  }
  uVar57 = (uint)phVar87;
  phVar66 = (hb_buffer_t *)param_4;
  while (phVar81 = phVar68,
        *(undefined **)(*(long *)(phVar66 + 0x90) + 0x68) ==
        PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
    phVar66 = *(hb_buffer_t **)(phVar66 + 0x18);
    phVar55 = phVar87;
    uVar84 = uVar57;
    if ((phVar66 == (hb_buffer_t *)0x0) || (phVar66 == (hb_buffer_t *)&_hb_Null_hb_font_t))
    goto joined_r0x003faaaf;
  }
  if (uVar57 == 0) goto LAB_003fabaf;
  lVar65 = 0;
  do {
    auVar135 = hb_font_t::get_glyph_h_origin_with_fallback
                         (param_4,*(undefined4 *)(lVar83 + lVar65),(int *)&local_1e8,
                          (int *)&local_78);
    *(uint *)(phVar68 + lVar65 + 8) = *(int *)(phVar68 + lVar65 + 8) + (uint)local_1e8;
    *(int *)(phVar68 + lVar65 + 0xc) = *(int *)(phVar68 + lVar65 + 0xc) + (int)local_78;
    lVar65 = lVar65 + 0x14;
  } while ((long)phVar87 * 0x14 != lVar65);
  phVar55 = (hb_buffer_t *)(ulong)*(uint *)phVar3;
  uVar84 = *(uint *)phVar3;
joined_r0x003faaaf:
  phVar66 = phVar55;
  if (uVar84 != 0) {
    if ((uint)phVar66 == 1) {
      phVar55 = (hb_buffer_t *)0x0;
    }
    else {
      lVar65 = 0;
      phVar55 = (hb_buffer_t *)0x0;
      do {
        *(undefined1 *)(*(long *)phVar43 + 0x12 + lVar65) = 0;
        *(undefined2 *)(*(long *)phVar43 + 0x10 + lVar65) = 0;
        *(undefined1 *)(*(long *)phVar43 + 0x26 + lVar65) = 0;
        *(undefined2 *)(*(long *)phVar43 + 0x24 + lVar65) = 0;
        phVar55 = phVar55 + 2;
        lVar65 = lVar65 + 0x28;
      } while ((hb_buffer_t *)(ulong)((uint)phVar66 & 0xfffffffe) != phVar55);
    }
    uVar54 = (ulong)phVar66 & 1;
    phVar66 = phVar55;
    if (uVar54 != 0) {
      phVar66 = (hb_buffer_t *)((long)phVar55 * 0x14);
      phVar66[*(long *)phVar43 + 0x12] = (hb_buffer_t)0x0;
      *(undefined2 *)(phVar66 + *(long *)phVar43 + 0x10) = 0;
    }
  }
LAB_003fabaf:
  if (((*(byte *)(param_3 + 0x108) & 0x20) != 0) &&
     (*(int *)(*(long *)(param_3 + 0x80) + 0x58) == 1)) {
    uVar54 = (ulong)*(uint *)phVar3;
    phVar66 = (hb_buffer_t *)0x0;
    if (uVar54 != 0) {
      lVar65 = *(long *)pGVar82;
      if (bVar90 == false) {
        phVar66 = (hb_buffer_t *)(uVar54 * 0x14);
        phVar55 = (hb_buffer_t *)0x0;
        do {
          if (((byte)phVar55[lVar65 + 0xc] & 8) != 0) {
            *(undefined8 *)(phVar55 + *(long *)phVar43) = 0;
          }
          phVar55 = phVar55 + 0x14;
        } while (phVar66 != phVar55);
      }
      else {
        phVar66 = (hb_buffer_t *)(uVar54 * 0x14);
        phVar55 = (hb_buffer_t *)0x0;
        do {
          if (((byte)phVar55[lVar65 + 0xc] & 8) != 0) {
            lVar86 = *(long *)phVar43;
            *(int *)(phVar55 + lVar86 + 8) =
                 *(int *)(phVar55 + lVar86 + 8) - *(int *)(phVar55 + lVar86);
            *(int *)(phVar55 + lVar86 + 0xc) =
                 *(int *)(phVar55 + lVar86 + 0xc) - *(int *)(phVar55 + lVar86 + 4);
            *(undefined4 *)(phVar55 + lVar86) = 0;
            *(undefined4 *)(phVar55 + lVar86 + 4) = 0;
          }
          phVar55 = phVar55 + 0x14;
        } while (phVar66 != phVar55);
      }
    }
  }
  if ((*(ushort *)(param_3 + 0x108) & 0x200) == 0) {
    pGVar80 = pGVar82;
    if ((*(ushort *)(param_3 + 0x108) & 0x1000) != 0) {
      lVar65 = *(long *)(param_4 + 0x20);
      this_00 = *(accelerator_t **)(lVar65 + 0x158);
      while (this_00 == (accelerator_t *)0x0) {
        lVar86 = *(long *)(lVar65 + 0x68);
        if (lVar86 == 0) {
          this_00 = (accelerator_t *)&_hb_NullPool;
          break;
        }
        this_00 = calloc(1,0x18);
        if (this_00 == (accelerator_t *)0x0) {
          LOCK();
          bVar91 = *(long *)(lVar65 + 0x158) == 0;
          if (bVar91) {
            *(long *)(lVar65 + 0x158) = (long)&_hb_NullPool;
          }
          UNLOCK();
          if (!bVar91) goto LAB_003fdd9f;
          this_00 = (accelerator_t *)&_hb_NullPool;
          break;
        }
        AAT::KerxTable<AAT::kerx>::accelerator_t::accelerator_t(this_00,lVar86);
        LOCK();
        bVar91 = *(long *)(lVar65 + 0x158) == 0;
        if (bVar91) {
          *(long *)(lVar65 + 0x158) = (long)this_00;
        }
        UNLOCK();
        if (bVar91) break;
        AAT::KerxTable<AAT::kerx>::accelerator_t::~accelerator_t(this_00);
        free(this_00);
LAB_003fdd9f:
        this_00 = *(accelerator_t **)(lVar65 + 0x158);
      }
      pGVar80 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)this_00;
      phVar66 = param_5;
      auVar131 = AAT::hb_aat_apply_context_t::hb_aat_apply_context_t
                           ((hb_aat_apply_context_t *)&local_1e8,puVar59,(long)param_4,
                            (undefined4 *)param_5,pGVar80);
                    /* try { // try from 003fb58b to 003fb61d has its CatchHandler @ 003fe857 */
      bVar91 = hb_buffer_t::message
                         (auVar131._0_8_,auVar131._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                          in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"start table kerx",
                          phVar66,pGVar80,phVar81,in_stack_fffffffffffffd48);
      if (bVar91) {
        lVar65 = *(long *)(param_4 + 0x20);
        phVar55 = *(hb_buffer_t **)(lVar65 + 0x160);
        if (phVar55 == (hb_buffer_t *)0x0) {
          do {
            lVar86 = *(long *)(lVar65 + 0x68);
            phVar55 = (hb_buffer_t *)&_hb_NullPool;
            if (lVar86 == 0) break;
            local_228[0] = 0;
            local_1fc = 0;
            local_1f8 = (hb_buffer_t *)0x0;
            local_210 = (undefined1  [16])0x0;
            local_220 = (undefined1  [16])0x0;
            local_200 = 0;
            local_1f0 = 0x10000;
            local_1ec = 0;
            uVar84 = *(uint *)(lVar86 + 0x18);
            if (uVar84 == 0xffffffff) {
              while (piVar37 = *(int **)(lVar86 + 0x78), piVar37 == (int *)0x0) {
                lVar73 = *(long *)(lVar86 + 0x68);
                if (lVar73 == 0) {
                  piVar37 = (int *)&_hb_NullPool;
                  break;
                }
                local_78 = local_78 & 0xffffffff00000000;
                local_60 = (undefined1  [16])0x0;
                auStack_70 = (undefined1  [16])0x0;
                local_50 = 0;
                local_3b = 0;
                local_4c = (undefined1  [16])0x0;
                local_3c = 1;
                piVar37 = (int *)&_hb_NullPool;
                if (*(code **)(lVar73 + 0x20) != (code *)0x0) {
                    /* try { // try from 003fe505 to 003fe524 has its CatchHandler @ 003fe7fd */
                  piVar37 = (int *)(**(code **)(lVar73 + 0x20))
                                             (lVar73,0x6d617870,*(undefined8 *)(lVar73 + 0x28));
                  if (piVar37 == (int *)0x0) {
                    piVar37 = (int *)&_hb_NullPool;
                  }
                }
                piVar37 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                                    ((hb_sanitize_context_t *)&local_78,piVar37);
                hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&local_78);
                if (piVar37 == (int *)0x0) {
                  piVar37 = (int *)&_hb_NullPool;
                  LOCK();
                  bVar91 = *(long *)(lVar86 + 0x78) == 0;
                  if (bVar91) {
                    *(long *)(lVar86 + 0x78) = (long)&_hb_NullPool;
                  }
                  UNLOCK();
                }
                else {
                  LOCK();
                  bVar91 = *(long *)(lVar86 + 0x78) == 0;
                  if (bVar91) {
                    *(long *)(lVar86 + 0x78) = (long)piVar37;
                  }
                  UNLOCK();
                }
                if (bVar91) break;
                if (((piVar37 != (int *)0x0) && ((uint *)piVar37 != &_hb_NullPool)) &&
                   (*piVar37 != 0)) {
                  LOCK();
                  *piVar37 = *piVar37 + -1;
                  UNLOCK();
                  if (*piVar37 == 0) {
                    *piVar37 = -0xdead;
                    ppVar9 = *(pthread_mutex_t **)(piVar37 + 2);
                    if (ppVar9 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003fe58b to 003fe592 has its CatchHandler @ 003fe7fb */
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar9[1].__data,ppVar9);
                      free(ppVar9);
                      piVar37[2] = 0;
                      piVar37[3] = 0;
                    }
                    if (*(code **)(piVar37 + 10) != (code *)0x0) {
                    /* try { // try from 003fe5b4 to 003fe5b5 has its CatchHandler @ 003fe7f3 */
                      (**(code **)(piVar37 + 10))(*(undefined8 *)(piVar37 + 8));
                    }
                    free(piVar37);
                  }
                }
              }
              puVar31 = &_hb_NullPool;
              if (5 < (uint)piVar37[6]) {
                puVar31 = *(undefined4 **)(piVar37 + 4);
              }
              uVar26 = *(ushort *)(puVar31 + 1);
              uVar51 = uVar26 << 8 | uVar26 >> 8;
              if (uVar26 == 0) {
                uVar51 = 0;
              }
              uVar84 = (uint)uVar51;
              *(uint *)(lVar86 + 0x18) = uVar84;
            }
            local_1ec = CONCAT11(local_1ec._1_1_,1);
            phVar49 = (hb_buffer_t *)&_hb_NullPool;
            local_1f0 = uVar84;
            if (*(code **)(lVar86 + 0x20) == (code *)0x0) {
LAB_003fde9b:
              uVar84 = *(uint *)phVar49;
            }
            else {
                    /* try { // try from 003fde85 to 003fde8e has its CatchHandler @ 003fe839 */
              phVar49 = (hb_buffer_t *)
                        (**(code **)(lVar86 + 0x20))
                                  (lVar86,0x616e6b72,*(undefined8 *)(lVar86 + 0x28));
              if (phVar49 != (hb_buffer_t *)0x0) goto LAB_003fde9b;
              phVar49 = (hb_buffer_t *)&_hb_NullPool;
              uVar84 = _hb_NullPool;
            }
            if (uVar84 != 0) {
              LOCK();
              *(uint *)phVar49 = *(uint *)phVar49 + 1;
              UNLOCK();
            }
            local_200 = '\0';
            local_1f8 = phVar49;
            while( true ) {
              phVar72 = local_1f8;
              auVar131 = local_210;
              psVar46 = *(short **)(local_1f8 + 0x10);
              uVar84 = *(uint *)(local_1f8 + 0x18);
              phVar66 = (hb_buffer_t *)(ulong)uVar84;
              uVar52 = (uint)((long)phVar66 * 0x40);
              if (uVar52 < 0x4001) {
                uVar52 = 0x4000;
              }
              if (0x3ffffffe < uVar52) {
                uVar52 = 0x3fffffff;
              }
              local_220._8_8_ = phVar66 + (long)psVar46;
              local_220._0_8_ = psVar46;
              uVar58 = 0x3fffffff;
              if ((int)((ulong)((long)phVar66 * 0x40) >> 0x20) == 0) {
                uVar58 = uVar52;
              }
              local_210._4_4_ = uVar58;
              local_210._0_4_ = uVar84;
              local_1fc = 0;
              local_228[0] = 0;
              local_210._12_4_ = 0;
              phVar55 = phVar49;
              if (psVar46 == (short *)0x0) {
                if (*(uint *)local_1f8 != 0) {
                  LOCK();
                  *(uint *)local_1f8 = *(uint *)local_1f8 - 1;
                  UNLOCK();
                  if (*(uint *)local_1f8 == 0) {
                    *(uint *)local_1f8 = 0xffff2153;
                    ppVar9 = *(pthread_mutex_t **)(local_1f8 + 8);
                    if (ppVar9 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003fe42a to 003fe431 has its CatchHandler @ 003fe839 */
                      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                  *)&ppVar9[1].__data,ppVar9);
                      free(ppVar9);
                      *(undefined8 *)(phVar72 + 8) = 0;
                    }
                    if (*(code **)(phVar72 + 0x28) != (code *)0x0) {
                    /* try { // try from 003fe44f to 003fe450 has its CatchHandler @ 003fe819 */
                      (**(code **)(phVar72 + 0x28))(*(undefined8 *)(phVar72 + 0x20));
                    }
                    free(phVar72);
                  }
                }
                local_1f8 = (hb_buffer_t *)0x0;
                local_220 = (undefined1  [16])0x0;
                auVar14._12_4_ = 0;
                auVar14._0_12_ = local_210._4_12_;
                local_210 = auVar14 << 0x20;
                goto LAB_003fe360;
              }
              if ((uVar84 < 0xc) || (*psVar46 != 0)) goto LAB_003fe0cc;
              uVar52 = *(uint *)(psVar46 + 4);
              uVar52 = uVar52 >> 0x18 | (uVar52 & 0xff0000) >> 8 | (uVar52 & 0xff00) << 8 |
                       uVar52 << 0x18;
              if (uVar84 < uVar52) goto LAB_003fe0cc;
              local_210._4_4_ = uVar58 - uVar52;
              local_210._8_4_ = auVar131._8_4_;
              local_210._12_4_ = 0;
              if ((int)(uVar58 - uVar52) < 1) goto LAB_003fe0cc;
              uVar84 = *(uint *)(psVar46 + 2);
              bVar91 = true;
              if (uVar84 == 0) goto LAB_003fe0cf;
                    /* try { // try from 003fdfc4 to 003fdfd0 has its CatchHandler @ 003fe83b */
              uVar54 = AAT::
                       Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                       ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                   *)((ulong)(uVar84 >> 0x18 | (uVar84 & 0xff0000) >> 8 |
                                              (uVar84 & 0xff00) << 8 | uVar84 << 0x18) +
                                     (long)psVar46),(long)local_228,(ulong)uVar52 + (long)psVar46);
              phVar66 = (hb_buffer_t *)(ulong)local_1fc;
              if ((char)uVar54 != '\0') break;
              if (local_1fc < 0x20) {
                local_1fc = local_1fc + 1;
                phVar66 = (hb_buffer_t *)(ulong)local_1fc;
                if (local_200 != '\0') {
                  psVar46[2] = 0;
                  psVar46[3] = 0;
                  goto LAB_003fe190;
                }
              }
              else if (local_200 != '\0') goto LAB_003fe0cc;
              uVar84 = *(uint *)(phVar49 + 0x18);
              uVar54 = (ulong)uVar84;
              if (*(uint *)(phVar49 + 4) == 0) {
LAB_003fe0b8:
                local_220 = ZEXT416(uVar84) << 0x40;
                goto LAB_003fe0cc;
              }
              if (uVar54 == 0) {
                *(uint *)(phVar49 + 0x1c) = 2;
LAB_003fdec3:
                local_220._0_8_ = *(undefined8 *)(phVar49 + 0x10);
                local_220._8_8_ = uVar54 + local_220._0_8_;
                if (local_220._0_8_ == 0) goto LAB_003fe0cc;
              }
              else {
                if (*(uint *)(phVar49 + 0x1c) == 2) goto LAB_003fdec3;
                if (*(uint *)(phVar49 + 0x1c) == 3) {
                  *(uint *)(phVar49 + 0x1c) = 1;
                }
                pvVar38 = malloc(uVar54);
                if (pvVar38 == (void *)0x0) goto LAB_003fe0b8;
                memcpy(pvVar38,*(void **)(phVar49 + 0x10),uVar54);
                if (*(code **)(phVar49 + 0x28) != (code *)0x0) {
                    /* try { // try from 003fe070 to 003fe071 has its CatchHandler @ 003fe83b */
                  (**(code **)(phVar49 + 0x28))(*(undefined8 *)(phVar49 + 0x20));
                }
                *(uint *)(phVar49 + 0x1c) = 2;
                *(void **)(phVar49 + 0x10) = pvVar38;
                *(void **)(phVar49 + 0x20) = pvVar38;
                *(undefined **)(phVar49 + 0x28) = PTR_free_00715540;
              }
              local_200 = '\x01';
            }
            if (local_1fc == 0) goto LAB_003fe0cf;
LAB_003fe190:
            local_1fc = 0;
            phVar66 = (hb_buffer_t *)(ulong)(uint)local_210._0_4_;
            if ((((hb_buffer_t *)((long)psVar46 - local_220._0_8_) + 0xc <= phVar66) &&
                (*psVar46 == 0)) && ((hb_buffer_t *)((long)psVar46 - local_220._0_8_) <= phVar66)) {
              uVar84 = *(uint *)(psVar46 + 4);
              uVar84 = uVar84 >> 0x18 | (uVar84 & 0xff0000) >> 8 | (uVar84 & 0xff00) << 8 |
                       uVar84 << 0x18;
              if (uVar84 <= (uint)(local_220._8_4_ - (int)psVar46)) {
                iVar28 = local_210._4_4_ - uVar84;
                local_210._4_4_ = iVar28;
                if ((0 < iVar28) &&
                   ((hb_buffer_t *)((long)psVar46 + (8 - local_220._0_8_)) <= phVar66)) {
                  uVar52 = *(uint *)(psVar46 + 2);
                  if (uVar52 == 0) goto LAB_003fe0cf;
                    /* try { // try from 003fe227 to 003fe2a6 has its CatchHandler @ 003fe839 */
                  uVar54 = AAT::
                           Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                           ::sanitize((Lookup<OT::OffsetTo<OT::ArrayOf<AAT::Anchor,OT::IntType<unsigned_int,4u>>,OT::IntType<unsigned_short,2u>,void,false>>
                                       *)((ulong)(uVar52 >> 0x18 | (uVar52 & 0xff0000) >> 8 |
                                                  (uVar52 & 0xff00) << 8 | uVar52 << 0x18) +
                                         (long)psVar46),(long)local_228,
                                      (ulong)uVar84 + (long)psVar46);
                  phVar66 = local_1f8;
                  if ((char)uVar54 == '\0') {
                    if ((local_1fc < 0x20) && (local_1fc = local_1fc + 1, local_200 != '\0')) {
                      psVar46[2] = 0;
                      psVar46[3] = 0;
                    }
                  }
                  else if (local_1fc == 0) {
                    phVar66 = (hb_buffer_t *)0x0;
                    goto LAB_003fe0cf;
                  }
                  if ((local_1f8 != (hb_buffer_t *)0x0) && (*(uint *)local_1f8 != 0)) {
                    LOCK();
                    *(uint *)local_1f8 = *(uint *)local_1f8 - 1;
                    UNLOCK();
                    if (*(uint *)local_1f8 == 0) {
                      *(uint *)local_1f8 = 0xffff2153;
                      ppVar9 = *(pthread_mutex_t **)(local_1f8 + 8);
                      if (ppVar9 != (pthread_mutex_t *)0x0) {
                        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::
                        fini((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar9[1].__data,ppVar9);
                        free(ppVar9);
                        *(undefined8 *)(phVar66 + 8) = 0;
                      }
                      if (*(code **)(phVar66 + 0x28) != (code *)0x0) {
                    /* try { // try from 003fe2c4 to 003fe2c5 has its CatchHandler @ 003fe821 */
                        (**(code **)(phVar66 + 0x28))(*(undefined8 *)(phVar66 + 0x20));
                      }
                      free(phVar66);
                    }
                  }
                  auVar13._12_4_ = 0;
                  auVar13._0_12_ = local_210._4_12_;
                  local_210 = auVar13 << 0x20;
                  goto LAB_003fe2f1;
                }
              }
            }
LAB_003fe0cc:
            bVar91 = false;
LAB_003fe0cf:
            phVar72 = local_1f8;
            if ((local_1f8 != (hb_buffer_t *)0x0) && (*(uint *)local_1f8 != 0)) {
              LOCK();
              *(uint *)local_1f8 = *(uint *)local_1f8 - 1;
              UNLOCK();
              if (*(uint *)local_1f8 == 0) {
                *(uint *)local_1f8 = 0xffff2153;
                ppVar9 = *(pthread_mutex_t **)(local_1f8 + 8);
                if (ppVar9 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003fe105 to 003fe10c has its CatchHandler @ 003fe839 */
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar9[1].__data,ppVar9);
                  free(ppVar9);
                  *(undefined8 *)(phVar72 + 8) = 0;
                }
                if (*(code **)(phVar72 + 0x28) != (code *)0x0) {
                    /* try { // try from 003fe12a to 003fe12b has its CatchHandler @ 003fe829 */
                  (**(code **)(phVar72 + 0x28))(*(undefined8 *)(phVar72 + 0x20));
                }
                free(phVar72);
              }
            }
            local_1f8 = (hb_buffer_t *)0x0;
            local_220 = (undefined1  [16])0x0;
            auVar12._12_4_ = 0;
            auVar12._0_12_ = local_210._4_12_;
            local_210 = auVar12 << 0x20;
            if (bVar91) {
              if (*(uint *)(phVar49 + 4) == 0) {
              }
              else {
                *(uint *)(phVar49 + 4) = 0;
              }
            }
            else {
LAB_003fe2f1:
              local_1f8 = (hb_buffer_t *)0x0;
              local_220 = (undefined1  [16])0x0;
              phVar66 = phVar49;
              phVar55 = (hb_buffer_t *)&_hb_NullPool;
              if (*(uint *)phVar49 != 0) {
                LOCK();
                *(uint *)phVar49 = *(uint *)phVar49 - 1;
                UNLOCK();
                phVar55 = (hb_buffer_t *)&_hb_NullPool;
                if (*(uint *)phVar49 == 0) {
                  *(uint *)phVar49 = 0xffff2153;
                  ppVar9 = *(pthread_mutex_t **)(phVar49 + 8);
                  if (ppVar9 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003fe31d to 003fe324 has its CatchHandler @ 003fe839 */
                    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                                *)&ppVar9[1].__data,ppVar9);
                    free(ppVar9);
                    *(undefined8 *)(phVar49 + 8) = 0;
                  }
                  if (*(code **)(phVar49 + 0x28) != (code *)0x0) {
                    phVar66 = phVar49;
                    /* try { // try from 003fe351 to 003fe352 has its CatchHandler @ 003fe831 */
                    (**(code **)(phVar49 + 0x28))(*(undefined8 *)(phVar49 + 0x20));
                  }
                  free(phVar49);
                  phVar55 = (hb_buffer_t *)&_hb_NullPool;
                }
              }
            }
LAB_003fe360:
            hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_228);
            LOCK();
            bVar91 = *(long *)(lVar65 + 0x160) == 0;
            if (bVar91) {
              *(long *)(lVar65 + 0x160) = (long)phVar55;
            }
            UNLOCK();
            if (bVar91) break;
            if (((phVar55 != (hb_buffer_t *)0x0) && (phVar55 != (hb_buffer_t *)&_hb_NullPool)) &&
               (*(uint *)phVar55 != 0)) {
              LOCK();
              *(uint *)phVar55 = *(uint *)phVar55 - 1;
              UNLOCK();
              if (*(uint *)phVar55 == 0) {
                *(uint *)phVar55 = 0xffff2153;
                ppVar9 = *(pthread_mutex_t **)(phVar55 + 8);
                if (ppVar9 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003fe3b2 to 003fe3b9 has its CatchHandler @ 003fe817 */
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar9[1].__data,ppVar9);
                  free(ppVar9);
                  *(undefined8 *)(phVar55 + 8) = 0;
                }
                if (*(code **)(phVar55 + 0x28) != (code *)0x0) {
                    /* try { // try from 003fe3d7 to 003fe3d8 has its CatchHandler @ 003fe80f */
                  (**(code **)(phVar55 + 0x28))(*(undefined8 *)(phVar55 + 0x20));
                }
                free(phVar55);
              }
            }
            phVar55 = *(hb_buffer_t **)(lVar65 + 0x160);
          } while (phVar55 == (hb_buffer_t *)0x0);
        }
        puVar71 = &_hb_NullPool;
        puVar31 = &_hb_NullPool;
        if (0xb < *(uint *)(phVar55 + 0x18)) {
          puVar31 = *(undefined4 **)(phVar55 + 0x10);
        }
        local_180._0_8_ = puVar31;
        puVar31 = *(undefined4 **)this_00;
        if (puVar31 == (undefined4 *)0x0) {
          puVar31 = &_hb_NullPool;
        }
        if (7 < (uint)puVar31[6]) {
          puVar71 = *(undefined4 **)(puVar31 + 4);
        }
        auVar131 = AAT::KerxTable<AAT::kerx>::apply(puVar71,&local_1e8,this_00 + 8);
        hb_buffer_t::message
                  (auVar131._0_8_,auVar131._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"end table kerx",phVar66,
                   pGVar80,phVar81,in_stack_fffffffffffffd48);
      }
      auVar135 = AAT::hb_aat_apply_context_t::~hb_aat_apply_context_t
                           ((hb_aat_apply_context_t *)&local_1e8);
    }
  }
  else {
    lVar65 = *(long *)(param_4 + 0x20);
    this_01 = *(accelerator_t<OT::Layout::GPOS> **)(lVar65 + 0x138);
    while (this_01 == (accelerator_t<OT::Layout::GPOS> *)0x0) {
      uVar30 = auVar135._8_8_;
      lVar86 = *(long *)(lVar65 + 0x68);
      if (lVar86 == 0) {
        this_01 = (accelerator_t<OT::Layout::GPOS> *)&_hb_NullPool;
        break;
      }
      this_01 = calloc(1,0x18);
      auVar135._8_8_ = uVar30;
      auVar135._0_8_ = extraout_XMM0_Qa_43;
      if (this_01 == (accelerator_t<OT::Layout::GPOS> *)0x0) {
        LOCK();
        bVar91 = *(long *)(lVar65 + 0x138) == 0;
        if (bVar91) {
          *(long *)(lVar65 + 0x138) = (long)&_hb_NullPool;
        }
        UNLOCK();
        uVar36 = extraout_XMM0_Qa_43;
        if (!bVar91) goto LAB_003fe73d;
        this_01 = (accelerator_t<OT::Layout::GPOS> *)&_hb_NullPool;
        break;
      }
      auVar135 = OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t(this_01,lVar86);
      LOCK();
      bVar91 = *(long *)(lVar65 + 0x138) == 0;
      if (bVar91) {
        *(long *)(lVar65 + 0x138) = (long)this_01;
      }
      UNLOCK();
      if (bVar91) break;
      OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::~accelerator_t(this_01);
      uVar30 = extraout_XMM1_Qa_33;
      free(this_01);
      uVar36 = extraout_XMM0_Qa_42;
LAB_003fe73d:
      auVar135._8_8_ = uVar30;
      auVar135._0_8_ = uVar36;
      this_01 = *(accelerator_t<OT::Layout::GPOS> **)(lVar65 + 0x138);
    }
    uVar30 = auVar135._8_8_;
    if (*(long *)(param_5 + 0xd0) != 0) {
      uVar84 = *(uint *)(param_3 + 0x8c);
      phVar66 = (hb_buffer_t *)(ulong)(uVar84 >> 0x18);
      pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uVar84 >> 0x10 & 0xff);
      phVar81 = (hb_buffer_t *)(ulong)(uVar84 >> 8 & 0xff);
      bVar91 = hb_buffer_t::message
                         (auVar135._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                          in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,
                          "start table GPOS script tag \'%c%c%c%c\'",phVar66,pGVar80,phVar81,
                          (char)uVar84);
      auVar135._8_8_ = uVar30;
      auVar135._0_8_ = extraout_XMM0_Qa_23;
      if (!bVar91) goto LAB_003fbe61;
    }
    pGVar80 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)this_01;
    phVar66 = param_5;
    auVar136 = OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                         ((hb_ot_apply_context_t *)&local_1e8,1,(long)param_4,(undefined4 *)param_5,
                          pGVar80);
    local_100 = OT::Layout::GPOS_impl::PosLookup::dispatch_recurse_func<OT::hb_ot_apply_context_t>;
    uVar54 = (ulong)*(uint *)(param_3 + 0xdc);
    if (*(uint *)(param_3 + 0xdc) != 0) {
      uVar88 = 0;
      uVar85 = 0;
      do {
        if (uVar88 < uVar54) {
          phVar55 = (hb_buffer_t *)(uVar88 * 0x10 + *(long *)(param_3 + 0xe0));
          uVar84 = *(uint *)phVar55;
        }
        else {
          phVar55 = (hb_buffer_t *)&_hb_NullPool;
          uVar84 = _hb_NullPool;
        }
        phVar66 = phVar55;
        if ((uint)uVar85 < uVar84) {
          uVar85 = uVar85 & 0xffffffff;
          do {
            uVar30 = auVar136._8_8_;
            if (uVar85 < *(uint *)(param_3 + 0xbc)) {
              puVar41 = (ushort *)(uVar85 * 0xc + *(long *)(param_3 + 0xc0));
              uVar26 = *puVar41;
              if ((uint)*puVar41 < *(uint *)(this_01 + 8)) goto LAB_003fb79e;
            }
            else {
              puVar41 = (ushort *)&_hb_NullPool;
              uVar26 = (ushort)_hb_NullPool;
              if ((_hb_NullPool & 0xffff) < *(uint *)(this_01 + 8)) {
LAB_003fb79e:
                phVar49 = (hb_buffer_t *)(ulong)uVar26;
                puVar33 = *(ulong **)(*(long *)(this_01 + 0x10) + (long)phVar49 * 8);
                while (puVar33 == (ulong *)0x0) {
                  puVar31 = *(undefined4 **)this_01;
                  phVar66 = (hb_buffer_t *)&_hb_NullPool;
                  if (puVar31 == (undefined4 *)0x0) {
                    puVar31 = &_hb_NullPool;
                  }
                  if (3 < (uint)puVar31[6]) {
                    phVar66 = *(hb_buffer_t **)(puVar31 + 4);
                  }
                  phVar72 = (hb_buffer_t *)&_hb_NullPool;
                  if (*(ushort *)phVar66 == 0x100) {
                    uVar51 = *(ushort *)(phVar66 + 8);
                    phVar34 = (hb_buffer_t *)&_hb_NullPool;
                    if (uVar51 != 0) {
                      phVar34 = phVar66 + (ushort)(uVar51 << 8 | uVar51 >> 8);
                    }
                    uVar51 = *(ushort *)phVar34 << 8 | *(ushort *)phVar34 >> 8;
                    phVar66 = (hb_buffer_t *)(ulong)uVar51;
                    phVar72 = (hb_buffer_t *)&_hb_NullPool;
                    if (uVar26 < uVar51) {
                      uVar51 = *(ushort *)(phVar34 + (long)phVar49 * 2 + 2);
                      phVar66 = (hb_buffer_t *)(ulong)uVar51;
                      phVar72 = (hb_buffer_t *)&_hb_NullPool;
                      if (uVar51 != 0) {
                        phVar66 = (hb_buffer_t *)(ulong)(ushort)(uVar51 << 8 | uVar51 >> 8);
                        phVar72 = phVar34 + (long)phVar66;
                      }
                    }
                  }
                    /* try { // try from 003fb82d to 003fb831 has its CatchHandler @ 003fe851 */
                  puVar33 = OT::hb_ot_layout_lookup_accelerator_t::
                            create<OT::Layout::GPOS_impl::PosLookup>((ushort *)phVar72);
                  auVar136._8_8_ = uVar30;
                  auVar136._0_8_ = extraout_XMM0_Qa_24;
                  if (puVar33 == (ulong *)0x0) goto LAB_003fb750;
                  phVar66 = *(hb_buffer_t **)(this_01 + 0x10);
                  LOCK();
                  bVar91 = *(long *)(phVar66 + (long)phVar49 * 8) == 0;
                  if (bVar91) {
                    *(ulong **)(phVar66 + (long)phVar49 * 8) = puVar33;
                  }
                  UNLOCK();
                  if (bVar91) break;
                  free(puVar33);
                  auVar136._8_8_ = uVar30;
                  auVar136._0_8_ = extraout_XMM0_Qa_25;
                  puVar33 = *(ulong **)(*(long *)(this_01 + 0x10) + (long)phVar49 * 8);
                }
                uVar30 = auVar136._8_8_;
                uVar84 = (uint)uVar26;
                if (*(long *)(param_5 + 0xd0) != 0) {
                  uVar52 = *(uint *)(puVar41 + 4);
                  phVar81 = (hb_buffer_t *)(ulong)(uVar52 >> 0x10 & 0xff);
                    /* try { // try from 003fb895 to 003fbbd3 has its CatchHandler @ 003fe873 */
                  pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uVar52 >> 0x18);
                  phVar66 = phVar49;
                  bVar91 = hb_buffer_t::message
                                     (auVar136._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,
                                      in_XMM4._0_8_,in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,
                                      param_4,"start lookup %u feature \'%c%c%c%c\'",phVar49,pGVar80
                                      ,phVar81,(char)(uVar52 >> 8),(ulong)(uVar52 & 0xff));
                  auVar136._8_8_ = uVar30;
                  auVar136._0_8_ = extraout_XMM0_Qa_26;
                  if (!bVar91) goto LAB_003fb750;
                }
                uVar30 = auVar136._8_8_;
                if ((((*puVar33 & local_d8) == 0) || ((puVar33[1] & local_d0) == 0)) ||
                   ((local_c8 & puVar33[2]) == 0)) {
                  if (*(long *)(param_5 + 0xd0) == 0) goto LAB_003fb750;
                  uVar84 = *(uint *)(puVar41 + 4);
                  phVar81 = (hb_buffer_t *)(ulong)(uVar84 >> 0x10 & 0xff);
                  pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uVar84 >> 0x18);
                  phVar66 = phVar49;
                  hb_buffer_t::message
                            (auVar136._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                             in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,
                             "skipped lookup %u feature \'%c%c%c%c\' because no glyph matches",
                             phVar49,pGVar80,phVar81,(char)(uVar84 >> 8),(ulong)(uVar84 & 0xff));
                  auVar136._8_8_ = uVar30;
                  auVar136._0_8_ = extraout_XMM0_Qa_27;
                }
                else {
                  local_bc = *(uint *)(puVar41 + 2);
                  local_a0 = 0xffffffff;
                  bVar25 = (byte)puVar41[1] >> 1;
                  local_aa = bVar25 & 1;
                  local_ab = (byte)puVar41[1] & 1;
                  local_a8 = (byte)puVar41[1] >> 2 & 1;
                  local_a9 = (byte)puVar41[1] >> 3 & 1;
                  puVar31 = *(undefined4 **)this_01;
                  puVar69 = (ushort *)&_hb_NullPool;
                  if (puVar31 == (undefined4 *)0x0) {
                    puVar31 = &_hb_NullPool;
                  }
                  if (3 < (uint)puVar31[6]) {
                    puVar69 = *(ushort **)(puVar31 + 4);
                  }
                  phVar72 = (hb_buffer_t *)&_hb_NullPool;
                  phVar66 = (hb_buffer_t *)(ulong)*puVar69;
                  if (*puVar69 == 0x100) {
                    uVar51 = puVar69[4];
                    phVar66 = (hb_buffer_t *)&_hb_NullPool;
                    if (uVar51 != 0) {
                      phVar66 = (hb_buffer_t *)
                                ((long)puVar69 + (ulong)(ushort)(uVar51 << 8 | uVar51 >> 8));
                    }
                    phVar72 = (hb_buffer_t *)&_hb_NullPool;
                    if (uVar26 < (ushort)(*(ushort *)phVar66 << 8 | *(ushort *)phVar66 >> 8)) {
                      uVar26 = *(ushort *)(phVar66 + (long)phVar49 * 2 + 2);
                      phVar72 = (hb_buffer_t *)&_hb_NullPool;
                      if (uVar26 != 0) {
                        phVar72 = phVar66 + (ushort)(uVar26 << 8 | uVar26 >> 8);
                        phVar66 = phVar72;
                      }
                    }
                  }
                  uVar52 = *(uint *)(local_148 + 0x60);
                  pGVar80 = local_148;
                  local_b8 = uVar84;
                  if ((uVar52 != 0) && (phVar81 = (hb_buffer_t *)(ulong)local_bc, local_bc != 0)) {
                    uVar51 = *(ushort *)(phVar72 + 4) << 8 | *(ushort *)(phVar72 + 4) >> 8;
                    uVar26 = *(ushort *)(phVar72 + 2) >> 8;
                    uVar67 = *(ushort *)(phVar72 + 2) << 8 | uVar26;
                    local_190 = (uint)uVar67;
                    if ((uVar26 & 0x10) != 0) {
                      local_190 = CONCAT22(*(ushort *)(phVar72 + (ulong)uVar51 * 2 + 6) << 8 |
                                           *(ushort *)(phVar72 + (ulong)uVar51 * 2 + 6) >> 8,uVar67)
                      ;
                    }
                    local_198 = (hb_ot_apply_context_t *)&local_1e8;
                    local_1c0 = (undefined1  [16])0x0;
                    local_1b0 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                    local_185 = local_a9;
                    if (local_160 != 0) {
                      local_185 = 0;
                    }
                    local_186 = local_160 == 1;
                    local_1c8 = (code *)(CONCAT62(local_1c8._2_6_,CONCAT11(bVar25,local_186)) &
                                        0xffffffffffff01ff);
                    uVar54 = (ulong)local_1c8;
                    local_1c8._0_3_ = CONCAT12(local_186,(undefined2)local_1c8);
                    local_1d0 = CONCAT44(local_bc,local_190);
                    local_1c8._0_4_ = CONCAT13(local_185,(undefined3)local_1c8);
                    local_1c8._5_3_ = SUB83(uVar54,5);
                    local_1c8._0_5_ = (uint5)(uint)local_1c8;
                    local_180 = (undefined1  [16])0x0;
                    local_170 = 0;
                    local_188 = local_ab != 0 || (bool)local_186;
                    phVar66 = (hb_buffer_t *)CONCAT71((int7)((ulong)local_1c0 >> 8),local_188);
                    local_187 = 1;
                    local_18c = 0xffffffff;
                    local_184 = 0;
                    *(undefined4 *)(local_148 + 0x5c) = 0;
                    local_1a8 = uVar52;
                    local_168 = uVar52;
                    local_b4 = local_190;
                    uStack_1d8 = local_198;
                    auVar136 = apply_forward(local_198,puVar33,(uint)uVar51);
                  }
                }
                uVar30 = auVar136._8_8_;
                if (*(long *)(param_5 + 0xd0) != 0) {
                  uVar84 = *(uint *)(puVar41 + 4);
                  phVar81 = (hb_buffer_t *)(ulong)(uVar84 >> 0x10 & 0xff);
                  pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uVar84 >> 0x18);
                  hb_buffer_t::message
                            (auVar136._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                             in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,
                             "end lookup %u feature \'%c%c%c%c\'",phVar49,pGVar80,phVar81,
                             (char)(uVar84 >> 8),(ulong)(uVar84 & 0xff));
                  auVar136._8_8_ = uVar30;
                  auVar136._0_8_ = extraout_XMM0_Qa_28;
                  phVar66 = phVar49;
                }
              }
            }
LAB_003fb750:
            uVar85 = uVar85 + 1;
          } while (uVar85 < *(uint *)phVar55);
        }
        if (*(code **)(phVar55 + 8) != (code *)0x0) {
                    /* try { // try from 003fbc27 to 003fbc37 has its CatchHandler @ 003fe86f */
          cVar24 = (**(code **)(phVar55 + 8))(puVar59,param_4,param_5);
          auVar21._8_8_ = extraout_XMM1_Qa_22;
          auVar21._0_8_ = extraout_XMM0_Qa_29;
          auVar136._8_8_ = extraout_XMM1_Qa_22;
          auVar136._0_8_ = extraout_XMM0_Qa_29;
          if (cVar24 != '\0') {
            uVar84 = *(uint *)phVar3;
            phVar81 = (hb_buffer_t *)(ulong)uVar84;
            if (uVar84 == 0) {
              local_d8 = 0;
              local_d0 = 0;
              local_c8 = 0;
            }
            else {
              phVar55 = *(hb_buffer_t **)pGVar82;
              uVar52 = uVar84 - 1;
              pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar52;
              phVar66 = phVar55;
              if (uVar52 < 3) {
                local_d8 = 0;
              }
              else {
                uVar58 = uVar84 & 0xfffffffc;
                local_d8 = 0;
                do {
                  local_d8 = local_d8 | 1L << ((ulong)(*(uint *)phVar66 >> 4) & 0x3f) |
                             1L << ((ulong)(*(uint *)(phVar66 + 0x14) >> 4) & 0x3f) |
                             1L << ((ulong)(*(uint *)(phVar66 + 0x28) >> 4) & 0x3f) |
                             1L << ((ulong)(*(uint *)(phVar66 + 0x3c) >> 4) & 0x3f);
                  phVar66 = phVar66 + 0x50;
                  uVar58 = uVar58 - 4;
                } while (uVar58 != 0);
              }
              if ((uVar84 & 3) != 0) {
                lVar65 = 0;
                do {
                  local_d8 = local_d8 | 1L << ((ulong)(*(uint *)(phVar66 + lVar65) >> 4) & 0x3f);
                  lVar65 = lVar65 + 0x14;
                } while ((uVar84 & 3) * 0x14 != (int)lVar65);
              }
              phVar66 = phVar55;
              if (uVar52 < 3) {
                local_d0 = 0;
              }
              else {
                uVar58 = uVar84 & 0xfffffffc;
                local_d0 = 0;
                do {
                  local_d0 = local_d0 | 1L << ((ulong)(byte)*phVar66 & 0x3f) |
                             1L << ((ulong)(byte)phVar66[0x14] & 0x3f) |
                             1L << ((ulong)(byte)phVar66[0x28] & 0x3f) |
                             1L << ((ulong)(byte)phVar66[0x3c] & 0x3f);
                  phVar66 = phVar66 + 0x50;
                  uVar58 = uVar58 - 4;
                } while (uVar58 != 0);
              }
              if ((uVar84 & 3) != 0) {
                lVar65 = 0;
                do {
                  local_d0 = local_d0 | 1L << ((ulong)(byte)phVar66[lVar65] & 0x3f);
                  lVar65 = lVar65 + 0x14;
                } while ((uVar84 & 3) * 0x14 != (int)lVar65);
              }
              if (uVar52 < 3) {
                local_c8 = 0;
              }
              else {
                phVar66 = (hb_buffer_t *)(ulong)(uVar84 & 0xfffffffc);
                local_c8 = 0;
                do {
                  local_c8 = local_c8 | 1L << ((ulong)(*(uint *)phVar55 >> 9) & 0x3f) |
                             1L << ((ulong)(*(uint *)(phVar55 + 0x14) >> 9) & 0x3f) |
                             1L << ((ulong)(*(uint *)(phVar55 + 0x28) >> 9) & 0x3f) |
                             1L << ((ulong)(*(uint *)(phVar55 + 0x3c) >> 9) & 0x3f);
                  phVar55 = phVar55 + 0x50;
                  uVar52 = (int)phVar66 - 4;
                  phVar66 = (hb_buffer_t *)(ulong)uVar52;
                } while (uVar52 != 0);
              }
              if ((uVar84 & 3) != 0) {
                phVar81 = (hb_buffer_t *)((ulong)(uVar84 & 3) * 4);
                phVar66 = (hb_buffer_t *)((ulong)(uVar84 & 3) * 0x14);
                lVar65 = 0;
                do {
                  local_c8 = local_c8 | 1L << ((ulong)(*(uint *)(phVar55 + lVar65) >> 9) & 0x3f);
                  lVar65 = lVar65 + 0x14;
                } while ((int)phVar66 != (int)lVar65);
              }
            }
            auVar136 = auVar21;
          }
        }
        uVar88 = uVar88 + 1;
        uVar54 = (ulong)*(uint *)(param_3 + 0xdc);
      } while (uVar88 < uVar54);
    }
    free(local_e0);
    auVar135 = hb_sanitize_context_t::~hb_sanitize_context_t(local_140);
    uVar30 = auVar135._8_8_;
    if (*(long *)(param_5 + 0xd0) != 0) {
      uVar84 = *(uint *)(param_3 + 0x8c);
      phVar66 = (hb_buffer_t *)(ulong)(uVar84 >> 0x18);
      pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uVar84 >> 0x10 & 0xff);
      phVar81 = (hb_buffer_t *)(ulong)(uVar84 >> 8 & 0xff);
      hb_buffer_t::message
                (auVar135._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                 in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"end table GPOS script tag \'%c%c%c%c\'",
                 phVar66,pGVar80,phVar81,(char)uVar84);
      auVar135._8_8_ = uVar30;
      auVar135._0_8_ = extraout_XMM0_Qa_30;
    }
  }
LAB_003fbe61:
  uVar30 = auVar135._8_8_;
  if ((*(ushort *)(param_3 + 0x108) & 0x400) == 0) {
    if ((*(ushort *)(param_3 + 0x108) & 0x800) != 0) {
      pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)param_4;
      if ((*(uint *)(param_5 + 0x38) & 0xfffffffe) == 4) {
        do {
          if (*(undefined **)(*(long *)(pGVar63 + 0x90) + 0x78) !=
              PTR_hb_font_get_glyph_h_kerning_default_00718ae8) goto LAB_003fc117;
          pGVar63 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(pGVar63 + 0x18);
        } while ((pGVar63 != (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) &&
                (pGVar63 != (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_Null_hb_font_t));
      }
      else {
        do {
          if (*(undefined **)(*(long *)(pGVar63 + 0x90) + 0x80) !=
              PTR_hb_font_get_glyph_v_kerning_default_00718af0) goto LAB_003fc117;
          pGVar63 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(pGVar63 + 0x18);
        } while ((pGVar63 != (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0) &&
                (pGVar63 != (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_Null_hb_font_t));
      }
    }
  }
  else {
    hb_ot_layout_kern(auVar135._0_8_,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                      in_XMM6._0_8_,in_XMM7_Qa,puVar59,(long)param_4,param_5,(undefined4 *)phVar66,
                      pGVar80,(ulong)phVar81);
  }
LAB_003fbed1:
  uVar26 = *(ushort *)(param_3 + 0x108);
  if ((uVar26 & 0x4000) != 0) {
    puVar31 = hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
              ::get((hb_lazy_loader_t<AAT::trak,hb_table_lazy_loader_t<AAT::trak,32u,false>,hb_face_t,32u,hb_blob_t>
                     *)(*(long *)(param_4 + 0x20) + 0x168));
    pTVar89 = (TrackData *)&_hb_NullPool;
    AAT::hb_aat_apply_context_t::hb_aat_apply_context_t
              ((hb_aat_apply_context_t *)&local_1e8,puVar59,(long)param_4,(undefined4 *)param_5,
               (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
    pcVar44 = local_1c8;
    phVar35 = uStack_1d8;
    fVar93 = *(float *)(uStack_1d8 + 0x70);
    if (0.0 < fVar93) {
      uVar84 = *(uint *)(uStack_1e0 + 0xa4);
      if ((*(uint *)(local_1c8 + 0x38) & 0xfffffffe) == 4) {
        uVar26 = *(ushort *)((long)puVar31 + 6);
        if (uVar26 == 0) {
          pTVar89 = (TrackData *)&_hb_NullPool;
        }
        else {
          pTVar89 = (TrackData *)((long)puVar31 + (ulong)(ushort)(uVar26 << 8 | uVar26 >> 8));
        }
        iVar28 = AAT::TrackData::get_tracking(fVar93,pTVar89,(long)puVar31);
        fVar93 = *(float *)(phVar35 + 0x4c);
        fVar92 = floorf((float)(iVar28 / 2) * fVar93 + DAT_005d9044);
        fVar93 = floorf((float)iVar28 * fVar93 + DAT_005d9044);
        uVar52 = *(uint *)(pcVar44 + 0x60);
        if (uVar52 != 0) {
          phVar81 = (hb_buffer_t *)(ulong)(uint)(int)fVar93;
          lVar65 = 0x24;
          uVar54 = 0;
          do {
            lVar86 = *(long *)(pcVar44 + 0x70);
            if (uVar52 - 1 == uVar54) {
              uVar54 = (ulong)uVar52;
              break;
            }
            uVar54 = uVar54 + 1;
            pbVar76 = (byte *)(lVar86 + lVar65);
            lVar65 = lVar65 + 0x14;
          } while ((*pbVar76 & 0x80) != 0);
          uVar85 = 0;
          do {
            if ((*(uint *)(lVar86 + 4 + uVar85 * 0x14) & uVar84) != 0) {
              lVar65 = *(long *)(pcVar44 + 0x80);
              piVar37 = (int *)(lVar65 + uVar85 * 0x14);
              *piVar37 = *piVar37 + (int)fVar93;
              piVar37 = (int *)(lVar65 + 8 + uVar85 * 0x14);
              *piVar37 = *piVar37 + (int)fVar92;
            }
            uVar58 = (uint)uVar54;
            uVar62 = uVar58 + 1;
            if (uVar58 + 1 < uVar52) {
              uVar62 = uVar52;
            }
            uVar56 = uVar58;
            do {
              uVar56 = uVar56 + 1;
              uVar39 = uVar62;
              if (uVar52 <= uVar56) break;
              uVar39 = uVar56;
            } while ((*(byte *)(lVar86 + 0x10 + (ulong)uVar56 * 0x14) & 0x80) != 0);
            uVar85 = uVar54 & 0xffffffff;
            uVar54 = (ulong)uVar39;
          } while (uVar58 < uVar52);
        }
      }
      else {
        uVar26 = *(ushort *)(puVar31 + 2);
        if (uVar26 != 0) {
          pTVar89 = (TrackData *)((long)puVar31 + (ulong)(ushort)(uVar26 << 8 | uVar26 >> 8));
        }
        iVar28 = AAT::TrackData::get_tracking(fVar93,pTVar89,(long)puVar31);
        fVar93 = *(float *)(phVar35 + 0x50);
        fVar92 = floorf((float)(iVar28 / 2) * fVar93 + DAT_005d9044);
        fVar93 = floorf((float)iVar28 * fVar93 + DAT_005d9044);
        uVar52 = *(uint *)(pcVar44 + 0x60);
        if (uVar52 != 0) {
          phVar81 = (hb_buffer_t *)(ulong)(uint)(int)fVar93;
          lVar65 = 0x24;
          uVar54 = 0;
          do {
            lVar86 = *(long *)(pcVar44 + 0x70);
            if (uVar52 - 1 == uVar54) {
              uVar54 = (ulong)uVar52;
              break;
            }
            uVar54 = uVar54 + 1;
            pbVar76 = (byte *)(lVar86 + lVar65);
            lVar65 = lVar65 + 0x14;
          } while ((*pbVar76 & 0x80) != 0);
          uVar58 = 0;
          do {
            uVar85 = (ulong)uVar58;
            uVar58 = (uint)uVar54;
            if ((*(uint *)(lVar86 + 4 + uVar85 * 0x14) & uVar84) != 0) {
              lVar65 = *(long *)(pcVar44 + 0x80);
              piVar37 = (int *)(lVar65 + 4 + uVar85 * 0x14);
              *piVar37 = *piVar37 + (int)fVar93;
              piVar37 = (int *)(lVar65 + 0xc + uVar85 * 0x14);
              *piVar37 = *piVar37 + (int)fVar92;
            }
            uVar62 = uVar58 + 1;
            if (uVar58 + 1 < uVar52) {
              uVar62 = uVar52;
            }
            uVar54 = uVar54 & 0xffffffff;
            do {
              uVar56 = (int)uVar54 + 1;
              uVar54 = (ulong)uVar56;
              if (uVar52 <= uVar56) {
                uVar54 = (ulong)uVar62;
                break;
              }
            } while ((*(byte *)(lVar86 + 0x10 + (ulong)uVar56 * 0x14) & 0x80) != 0);
          } while (uVar58 < uVar52);
        }
      }
    }
    AAT::hb_aat_apply_context_t::~hb_aat_apply_context_t((hb_aat_apply_context_t *)&local_1e8);
    uVar26 = *(ushort *)(param_3 + 0x108);
  }
  if ((((uVar26 & 0x20) != 0) && (*(int *)(*(long *)(param_3 + 0x80) + 0x58) == 2)) &&
     (uVar54 = (ulong)*(uint *)phVar3, uVar54 != 0)) {
    lVar65 = *(long *)pGVar82;
    if (bVar90 == false) {
      lVar86 = 0;
      do {
        if ((*(byte *)(lVar65 + 0xc + lVar86) & 8) != 0) {
          *(undefined8 *)(*(long *)phVar43 + lVar86) = 0;
        }
        lVar86 = lVar86 + 0x14;
      } while (uVar54 * 0x14 != lVar86);
    }
    else {
      lVar86 = 0;
      do {
        if ((*(byte *)(lVar65 + 0xc + lVar86) & 8) != 0) {
          lVar73 = *(long *)phVar43;
          piVar37 = (int *)(lVar73 + 8 + lVar86);
          *piVar37 = *piVar37 - *(int *)(lVar73 + lVar86);
          piVar37 = (int *)(lVar73 + 0xc + lVar86);
          *piVar37 = *piVar37 - *(int *)(lVar73 + 4 + lVar86);
          *(undefined4 *)(lVar73 + lVar86) = 0;
          *(undefined4 *)(lVar73 + 4 + lVar86) = 0;
        }
        lVar86 = lVar86 + 0x14;
      } while (uVar54 * 0x14 != lVar86);
    }
  }
  if (((((byte)param_5[0xc0] & 2) != 0) && (((byte)param_5[0x18] & 0xc) == 0)) &&
     (uVar84 = *(uint *)phVar3, (ulong)uVar84 != 0)) {
    lVar65 = *(long *)pGVar82;
    lVar86 = *(long *)phVar43;
    lVar73 = 0;
    do {
      if (((*(byte *)(lVar65 + 0x10 + lVar73) & 0x20) != 0) &&
         ((*(byte *)(lVar65 + 0xc + lVar73) & 0x10) == 0)) {
        *(undefined1 (*) [16])(lVar86 + lVar73) = (undefined1  [16])0x0;
      }
      lVar73 = lVar73 + 0x14;
    } while ((ulong)uVar84 * 0x14 != lVar73);
  }
  if ((*(byte *)(param_3 + 0x109) & 0x20) == 0) {
LAB_003fcbd2:
    uVar52 = *(uint *)phVar3;
  }
  else {
    uVar84 = *(uint *)phVar3;
    uVar52 = 0;
    if (uVar84 != 0) {
      lVar65 = *(long *)pGVar82;
      lVar86 = *(long *)phVar43;
      if (uVar84 == 1) {
        uVar54 = 0;
      }
      else {
        lVar73 = 0;
        uVar54 = 0;
        do {
          while (*(int *)(lVar65 + lVar73) == 0xffff) {
            *(undefined1 (*) [16])(lVar86 + lVar73) = (undefined1  [16])0x0;
            if (*(int *)(lVar65 + 0x14 + lVar73) == 0xffff) goto LAB_003fd0b4;
LAB_003fd093:
            uVar54 = uVar54 + 2;
            lVar73 = lVar73 + 0x28;
            if ((uVar84 & 0xfffffffe) == uVar54) goto LAB_003fcbbb;
          }
          if (*(int *)(lVar65 + 0x14 + lVar73) != 0xffff) goto LAB_003fd093;
LAB_003fd0b4:
          *(undefined1 (*) [16])(lVar86 + 0x14 + lVar73) = (undefined1  [16])0x0;
          uVar54 = uVar54 + 2;
          lVar73 = lVar73 + 0x28;
        } while ((uVar84 & 0xfffffffe) != uVar54);
      }
LAB_003fcbbb:
      if (((uVar84 & 1) != 0) && (*(int *)(lVar65 + uVar54 * 0x14) == 0xffff)) {
        *(undefined1 (*) [16])(lVar86 + uVar54 * 0x14) = (undefined1  [16])0x0;
      }
      goto LAB_003fcbd2;
    }
  }
  pGVar80 = pGVar82;
  if (param_5[0x5b] == (hb_buffer_t)0x0) {
    if (*(int *)(param_5 + 0xe8) == 0) {
      *(undefined2 *)(param_5 + 0x5a) = 0x100;
      *(undefined4 *)(param_5 + 100) = 0;
      *(undefined8 *)(param_5 + 0x78) = *(undefined8 *)(param_5 + 0x70);
      if (uVar52 * 0x14 != 0) {
        memset(*(void **)phVar43,0,(ulong)(uVar52 * 0x14));
      }
      goto LAB_003fcc26;
    }
    lVar65 = 0;
    hVar4 = param_5[0xc0];
  }
  else {
LAB_003fcc26:
    lVar65 = *(long *)phVar43;
    hVar4 = param_5[0xc0];
  }
  if ((((byte)hVar4 & 8) != 0) && (uVar52 != 0)) {
    uVar84 = *(uint *)(param_5 + 0x38);
    uVar58 = 0;
    do {
      pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x40;
      OT::Layout::propagate_attachment_offsets(lVar65,(ulong)uVar52,uVar58,uVar84,0x40);
      uVar58 = uVar58 + 1;
    } while (uVar52 != uVar58);
  }
  fVar93 = *(float *)(param_4 + 0x44);
  auVar100 = ZEXT416((uint)fVar93);
  auVar103 = (undefined1  [16])0x0;
  if (((fVar93 != 0.0) || (NAN(fVar93))) && (uVar52 != 0)) {
    lVar86 = 0;
    auVar103 = ZEXT416((uint)DAT_005d9044);
    do {
      while (iVar28 = *(int *)(lVar65 + 0xc + lVar86), iVar28 == 0) {
        lVar86 = lVar86 + 0x14;
        if ((ulong)uVar52 * 0x14 == lVar86) goto LAB_003fcc95;
      }
      auVar100._0_4_ = floorf((float)iVar28 * *(float *)(param_4 + 0x48) + auVar103._0_4_);
      auVar100._4_12_ = extraout_var;
      auVar103 = ZEXT416((uint)DAT_005d9044);
      *(int *)(lVar65 + 8 + lVar86) = (int)((float)*(int *)(lVar65 + 8 + lVar86) + auVar100._0_4_);
      lVar86 = lVar86 + 0x14;
    } while ((ulong)uVar52 * 0x14 != lVar86);
  }
LAB_003fcc95:
  phVar66 = (hb_buffer_t *)param_4;
  while (*(undefined **)(*(long *)(phVar66 + 0x90) + 0x68) ==
         PTR_hb_font_get_glyph_h_origin_default_00718ad8) {
    phVar66 = *(hb_buffer_t **)(phVar66 + 0x18);
    if ((phVar66 == (hb_buffer_t *)0x0) || (phVar66 == (hb_buffer_t *)&_hb_Null_hb_font_t))
    goto LAB_003fcd2a;
  }
  if (uVar57 != 0) {
    lVar65 = 0;
    do {
      auVar131 = hb_font_t::get_glyph_h_origin_with_fallback
                           (param_4,*(undefined4 *)(lVar83 + lVar65),(int *)&local_1e8,
                            (int *)&local_78);
      auVar103._0_8_ = auVar131._8_8_;
      auVar100._0_8_ = auVar131._0_8_;
      auVar103._8_8_ = extraout_XMM1_Qb;
      auVar100._8_8_ = extraout_XMM0_Qb;
      *(uint *)(phVar68 + lVar65 + 8) = *(int *)(phVar68 + lVar65 + 8) - (uint)local_1e8;
      *(int *)(phVar68 + lVar65 + 0xc) = *(int *)(phVar68 + lVar65 + 0xc) - (int)local_78;
      lVar65 = lVar65 + 0x14;
      phVar66 = phVar68;
    } while ((long)phVar87 * 0x14 != lVar65);
  }
LAB_003fcd2a:
  phVar35 = uStack_1d8;
  if ((*(byte *)(param_3 + 0x108) & 0x80) != 0) {
    uVar57 = 0;
    bVar91 = hb_buffer_t::message
                       (auVar100._0_8_,auVar103._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                        in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"start fallback mark"
                        ,phVar66,pGVar80,phVar81,in_stack_fffffffffffffd48);
    auVar100 = extraout_XMM0;
    phVar35 = uStack_1d8;
    if (bVar91) {
      uVar84 = *(uint *)phVar3;
      pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar84;
      uVar54 = (ulong)bVar90;
      if ((GDEFVersion1_2<OT::Layout::SmallTypes> *)0x1 < pGVar80) {
        puVar45 = (uint *)(*(long *)pGVar82 + 0x24);
        uVar57 = 0;
        pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x1;
        do {
          if ((0x1c00U >> (*puVar45 & 0x1f) & 1) == 0) {
            position_cluster(puVar59,(long)param_4,param_5,uVar57,(uint)pGVar63,(uint)bVar90);
            uVar57 = (uint)pGVar63;
          }
          pGVar63 = pGVar63 + 1;
          puVar45 = puVar45 + 5;
        } while (pGVar80 != pGVar63);
      }
      phVar66 = (hb_buffer_t *)(ulong)uVar57;
      auVar131 = position_cluster(puVar59,(long)param_4,param_5,uVar57,uVar84,(uint)bVar90);
      auVar103._0_8_ = auVar131._8_8_;
      auVar103._8_8_ = extraout_XMM1_Qb_00;
      hb_buffer_t::message
                (auVar131._0_8_,auVar103._0_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"end fallback mark",phVar66,
                 pGVar80,uVar54,in_stack_fffffffffffffd48);
      auVar100 = extraout_XMM0_00;
      phVar35 = uStack_1d8;
    }
  }
  uStack_1d8._4_4_ = (undefined4)((ulong)phVar35 >> 0x20);
  uStack_1d8._0_4_ = (uint)phVar35;
  phVar68 = uStack_1e0;
  if ((*(uint *)(param_5 + 0x38) & 0xfffffffd) == 5) {
    uVar57 = *(uint *)phVar3;
    if (1 < uVar57) {
      phVar66 = *(hb_buffer_t **)pGVar82;
      uVar54 = (ulong)(uVar57 - 1);
      phVar87 = phVar66 + uVar54 * 0x14;
      uVar85 = 0;
      do {
        uVar54 = uVar54 - 1;
        uStack_1d8._0_4_ = *(uint *)(phVar87 + 0x10);
        local_1e8 = *(uint **)phVar87;
        phVar68 = *(hb_buffer_t **)(phVar87 + 8);
        auVar11 = *(undefined1 (*) [12])phVar87;
        uStack_1e0._4_4_ = (undefined4)((ulong)phVar68 >> 0x20);
        *(uint *)(phVar87 + 0x10) = *(uint *)(phVar66 + 0x10);
        uVar30 = *(undefined8 *)(phVar66 + 8);
        *(undefined8 *)phVar87 = *(undefined8 *)phVar66;
        *(undefined8 *)(phVar87 + 8) = uVar30;
        *(uint *)(phVar66 + 0x10) = (uint)uStack_1d8;
        auVar100._12_4_ = uStack_1e0._4_4_;
        auVar100._0_12_ = auVar11;
        *(undefined1 (*) [16])phVar66 = auVar100;
        uVar85 = uVar85 + 1;
        phVar66 = phVar66 + 0x14;
        phVar87 = phVar87 + -0x14;
      } while (uVar85 < (uVar54 & 0xffffffff));
    }
    if (param_5[0x5b] != (hb_buffer_t)0x0) {
      uVar84 = *(uint *)phVar3;
      phVar66 = (hb_buffer_t *)(ulong)uVar84;
      if (uVar84 < uVar57) {
        uVar57 = uVar84;
      }
      if (1 < uVar57) {
        phVar66 = *(hb_buffer_t **)phVar43;
        uVar54 = (ulong)(uVar57 - 1);
        phVar87 = phVar66 + uVar54 * 0x14;
        uVar85 = 0;
        do {
          uVar54 = uVar54 - 1;
          uStack_1d8._0_4_ = *(uint *)(phVar87 + 0x10);
          local_1e8 = *(uint **)phVar87;
          phVar68 = *(hb_buffer_t **)(phVar87 + 8);
          auVar11 = *(undefined1 (*) [12])phVar87;
          uStack_1e0._4_4_ = (undefined4)((ulong)phVar68 >> 0x20);
          *(uint *)(phVar87 + 0x10) = *(uint *)(phVar66 + 0x10);
          uVar30 = *(undefined8 *)(phVar66 + 8);
          *(undefined8 *)phVar87 = *(undefined8 *)phVar66;
          *(undefined8 *)(phVar87 + 8) = uVar30;
          *(uint *)(phVar66 + 0x10) = (uint)uStack_1d8;
          auVar100._12_4_ = uStack_1e0._4_4_;
          auVar100._0_12_ = auVar11;
          *(undefined1 (*) [16])phVar66 = auVar100;
          uVar85 = uVar85 + 1;
          phVar66 = phVar66 + 0x14;
          phVar87 = phVar87 + -0x14;
        } while (uVar85 < (uVar54 & 0xffffffff));
      }
    }
  }
  param_5[0xb8] = (hb_buffer_t)((byte)param_5[0xb8] & 0xf8);
  puVar45 = local_1e8;
  uStack_1e0 = phVar68;
  if ((*(ushort *)(param_3 + 0x108) & 0x2200) == 0x2000) {
    auVar131 = hb_aat_layout_remove_deleted_glyphs(param_5);
    auVar103._0_8_ = auVar131._8_8_;
    auVar100._0_8_ = auVar131._0_8_;
    auVar103._8_8_ = extraout_XMM1_Qb_01;
    auVar100._8_8_ = extraout_XMM0_Qb_00;
    puVar45 = local_1e8;
  }
  local_1e8._4_4_ = (undefined4)((ulong)puVar45 >> 0x20);
  uVar30 = auVar103._0_8_;
  uVar57 = *(uint *)(param_5 + 0xc0);
  if (((uVar57 & 0x80) != 0) && (*(int *)(param_5 + 0x2c) != -1)) {
    uVar84 = *(uint *)phVar3;
    phVar66 = phVar3;
    if ((ulong)uVar84 != 0) {
      lVar83 = *(long *)pGVar82;
      phVar66 = *(hb_buffer_t **)phVar43;
      lVar65 = 0;
      auVar100 = ZEXT816(0);
      do {
        if ((*(ushort *)(lVar83 + 0x10 + lVar65) & 0x41f) == 0x401) {
          *(undefined4 *)(lVar83 + lVar65) = *(undefined4 *)(param_5 + 0x2c);
          *(undefined1 (*) [16])(phVar66 + lVar65) = auVar100;
          *(ushort *)(lVar83 + 0x10 + lVar65) = *(ushort *)(lVar83 + 0x10 + lVar65) & 0xe0 | 0xc;
        }
        lVar65 = lVar65 + 0x14;
      } while ((ulong)uVar84 * 0x14 != lVar65);
      uVar57 = *(uint *)(param_5 + 0xc0);
    }
  }
  uVar36 = auVar100._0_8_;
  if ((uVar57 & 2) != 0) {
    if ((*(uint *)(param_5 + 0x18) & 4) == 0) {
      uVar57 = *(uint *)(param_5 + 0x60);
      lVar83 = *(long *)(param_5 + 0x70);
      local_1e8._0_4_ = *(uint *)(param_5 + 0x24);
      phVar66 = (hb_buffer_t *)(ulong)(uint)local_1e8;
      if ((*(uint *)(param_5 + 0x18) & 8) == 0) {
        if ((uint)local_1e8 == 0) {
          local_1e8._0_4_ = 0;
          lVar65 = *(long *)(*(long *)(param_4 + 0x90) + 0x10);
          if (lVar65 == 0) {
            pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
          }
          else {
            pGVar80 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)(lVar65 + 0x10);
          }
          phVar66 = (hb_buffer_t *)&local_1e8;
          iVar28 = (**(code **)(*(long *)(param_4 + 0x90) + 0x30))
                             (param_4,*(undefined8 *)(param_4 + 0x98),0x20);
          auVar103._8_8_ = extraout_XMM1_Qb_02;
          auVar103._0_8_ = extraout_XMM1_Qa_30;
          auVar100._8_8_ = extraout_XMM0_Qb_01;
          auVar100._0_8_ = extraout_XMM0_Qa_37;
          uVar36 = extraout_XMM0_Qa_37;
          uVar30 = extraout_XMM1_Qa_30;
          if (iVar28 == 0) {
            uVar57 = *(uint *)phVar3;
            goto LAB_003fd4be;
          }
        }
        puVar45 = (uint *)CONCAT44(local_1e8._4_4_,(uint)local_1e8);
        if (uVar57 != 0) {
          phVar66 = (hb_buffer_t *)0x0;
          do {
            if ((((byte)phVar66[lVar83 + 0x10] & 0x20) != 0) &&
               (((byte)phVar66[lVar83 + 0xc] & 0x10) == 0)) {
              *(uint *)(phVar66 + lVar83) = (uint)local_1e8;
            }
            phVar66 = phVar66 + 0x14;
            puVar45 = (uint *)CONCAT44(local_1e8._4_4_,(uint)local_1e8);
          } while ((hb_buffer_t *)((ulong)uVar57 * 0x14) != phVar66);
        }
      }
      else {
LAB_003fd4be:
        uVar30 = auVar103._0_8_;
        uVar36 = auVar100._0_8_;
        if (uVar57 == 0) {
          pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
        }
        else {
          pGVar63 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
          pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
          do {
            phVar66 = *(hb_buffer_t **)pGVar82;
            iVar28 = (int)pGVar80;
            if ((((byte)phVar66[(long)pGVar63 * 0x14 + 0x10] & 0x20) == 0) ||
               (((byte)phVar66[(long)pGVar63 * 0x14 + 0xc] & 0x10) != 0)) {
              if (pGVar63 != pGVar80) {
                phVar68 = phVar66 + (long)pGVar63 * 0x14;
                lVar65 = (long)pGVar80 * 0x14;
                *(undefined4 *)(phVar66 + lVar65 + 0x10) = *(undefined4 *)(phVar68 + 0x10);
                uVar30 = *(undefined8 *)(phVar68 + 8);
                *(undefined8 *)(phVar66 + lVar65) = *(undefined8 *)phVar68;
                *(undefined8 *)(phVar66 + lVar65 + 8) = uVar30;
                lVar83 = *(long *)phVar43;
                uVar84 = *(uint *)(lVar83 + 0x10 + (long)pGVar63 * 0x14);
                phVar66 = (hb_buffer_t *)(ulong)uVar84;
                *(uint *)(lVar83 + 0x10 + lVar65) = uVar84;
                auVar100 = *(undefined1 (*) [16])(lVar83 + (long)pGVar63 * 0x14);
                *(undefined1 (*) [16])(lVar83 + lVar65) = auVar100;
              }
              pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(iVar28 + 1);
            }
            else {
              uVar84 = *(uint *)(phVar66 + (long)pGVar63 * 0x14 + 8);
              if (pGVar63 + 1 < (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar57) {
                if (uVar84 != *(uint *)(phVar66 + (long)(pGVar63 + 1) * 0x14 + 8)) {
                  if (iVar28 != 0) goto LAB_003fd57f;
                  auVar131 = hb_buffer_t::merge_clusters_impl
                                       (param_5,(uint)pGVar63,(uint)pGVar63 + 2);
                  auVar103._0_8_ = auVar131._8_8_;
                  auVar100._0_8_ = auVar131._0_8_;
                  auVar103._8_8_ = extraout_XMM1_Qb_03;
                  auVar100._8_8_ = extraout_XMM0_Qb_02;
                  pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                }
              }
              else if (iVar28 == 0) {
                pGVar80 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
              }
              else {
LAB_003fd57f:
                uVar52 = *(uint *)(phVar66 + (ulong)(iVar28 - 1) * 0x14 + 8);
                if (uVar84 < uVar52) {
                  uVar58 = *(uint *)(phVar66 + (long)pGVar63 * 0x14 + 4);
                  phVar66 = phVar66 + (long)pGVar80 * 0x14 + -0xc;
                  pGVar61 = pGVar80;
                  do {
                    if (*(uint *)phVar66 != uVar52) break;
                    pGVar61 = pGVar61 + -1;
                    *(uint *)(phVar66 + -4) = *(uint *)(phVar66 + -4) & 0xfffffff8 | uVar58 & 7;
                    *(uint *)phVar66 = uVar84;
                    phVar66 = phVar66 + -0x14;
                  } while (pGVar61 != (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0);
                }
              }
            }
            uVar30 = auVar103._0_8_;
            uVar36 = auVar100._0_8_;
            pGVar63 = pGVar63 + 1;
          } while (pGVar63 != (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar57);
        }
        puVar45 = (uint *)CONCAT44(local_1e8._4_4_,(uint)local_1e8);
        *(uint *)phVar3 = (uint)pGVar80;
      }
    }
  }
  if (*(long *)(*(long *)(param_3 + 0x80) + 0x28) != 0) {
    local_1e8 = puVar45;
    bVar90 = hb_buffer_t::message
                       (uVar36,uVar30,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                        in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"start postprocess-glyphs",phVar66,
                        pGVar80,pGVar82,in_stack_fffffffffffffd48);
    if (bVar90) {
      auVar131 = (**(code **)(*(long *)(param_3 + 0x80) + 0x28))(puVar59,param_5,param_4);
      hb_buffer_t::message
                (auVar131._0_8_,auVar131._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                 in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,param_5,param_4,"end postprocess-glyphs",
                 phVar66,pGVar80,pGVar82,in_stack_fffffffffffffd48);
    }
  }
  auVar131 = _DAT_005de080;
  if ((((byte)param_5[0xc0] & 0x20) != 0) && (uVar57 = *(uint *)(param_5 + 0x60), uVar57 != 0)) {
    uVar84 = *(uint *)(param_5 + 0x18);
    lVar83 = *(long *)(param_5 + 0x70);
    uVar54 = 0;
    piVar37 = (int *)(lVar83 + 8);
    do {
      if (uVar57 - 1 == uVar54) {
        uVar54 = (ulong)uVar57;
        break;
      }
      iVar28 = *piVar37;
      uVar54 = uVar54 + 1;
      piVar1 = piVar37 + 5;
      piVar37 = piVar37 + 5;
    } while (iVar28 == *piVar1);
    lVar65 = lVar83 + 4;
    if ((uVar84 & 0x80) == 0) {
      uVar85 = 0;
      do {
        uVar52 = (uint)uVar54;
        uVar88 = uVar54 & 0xffffffff;
        if ((uint)uVar85 < uVar52) {
          uVar75 = uVar54 & 0xffffffff;
          uVar74 = uVar75 - uVar85;
          uVar58 = 0;
          uVar48 = uVar85;
          if (8 < uVar74) {
            uVar48 = (ulong)((uint)uVar74 & 7);
            if (uVar48 == 0) {
              uVar48 = 8;
            }
            lVar86 = (uVar48 + uVar85) - uVar75;
            puVar31 = (undefined4 *)(lVar83 + 0x90 + uVar85 * 0x14);
            auVar104 = (undefined1  [16])0x0;
            auVar110 = (undefined1  [16])0x0;
            do {
              auVar125._12_4_ = puVar31[-0x14];
              auVar125._8_4_ = puVar31[-0x19];
              auVar125._4_4_ = puVar31[-0x1e];
              auVar125._0_4_ = puVar31[-0x23];
              auVar127._12_4_ = *puVar31;
              auVar127._8_4_ = puVar31[-5];
              auVar127._4_4_ = puVar31[-10];
              auVar127._0_4_ = puVar31[-0xf];
              auVar104 = auVar104 | auVar125 & auVar131;
              auVar110 = auVar110 | auVar127 & auVar131;
              puVar31 = puVar31 + 0x28;
              lVar86 = lVar86 + 8;
            } while (lVar86 != 0);
            uVar48 = (uVar74 - uVar48) + uVar85;
            auVar110 = auVar110 | auVar104;
            auVar105._0_8_ = auVar110._8_8_;
            auVar105._8_4_ = auVar110._8_4_;
            auVar105._12_4_ = auVar110._12_4_;
            uVar58 = SUB164(auVar105 | auVar110,4) | SUB164(auVar105 | auVar110,0);
          }
          lVar86 = uVar75 - uVar48;
          puVar59 = (uint *)(lVar65 + uVar48 * 0x14);
          do {
            uVar58 = uVar58 | *puVar59 & 7;
            puVar59 = puVar59 + 5;
            lVar86 = lVar86 + -1;
          } while (lVar86 != 0);
          uVar62 = uVar58 & 0xfffffffd;
          if ((uVar84 & 0x40) != 0) {
            uVar62 = uVar58;
          }
          uVar48 = ~uVar85;
          if ((uVar74 & 3) != 0) {
            puVar59 = (uint *)(lVar65 + uVar85 * 0x14);
            lVar86 = 0;
            do {
              *puVar59 = uVar62;
              lVar86 = lVar86 + -1;
              puVar59 = puVar59 + 5;
            } while (-lVar86 != (uVar74 & 3));
            uVar85 = uVar85 - lVar86;
          }
          if (2 < uVar48 + uVar75) {
            lVar86 = uVar75 - uVar85;
            puVar59 = (uint *)(lVar83 + 0x40 + uVar85 * 0x14);
            do {
              puVar59[-0xf] = uVar62;
              puVar59[-10] = uVar62;
              puVar59[-5] = uVar62;
              *puVar59 = uVar62;
              puVar59 = puVar59 + 0x14;
              lVar86 = lVar86 + -4;
            } while (lVar86 != 0);
          }
        }
        uVar58 = uVar52 + 1;
        if (uVar52 + 1 < uVar57) {
          uVar58 = uVar57;
        }
        uVar85 = uVar54 & 0xffffffff;
        do {
          uVar62 = (int)uVar85 + 1;
          uVar54 = (ulong)uVar62;
          if (uVar57 <= uVar62) {
            uVar54 = (ulong)uVar58;
            break;
          }
          lVar86 = uVar85 * 0x14;
          uVar85 = uVar54;
        } while (*(int *)(lVar83 + 8 + lVar86) == *(int *)(lVar83 + 8 + (ulong)uVar62 * 0x14));
        uVar85 = uVar88;
      } while (uVar52 < uVar57);
    }
    else {
      uVar85 = 0;
      do {
        uVar62 = (uint)uVar54;
        uVar48 = uVar54 & 0xffffffff;
        uVar52 = (uint)uVar85;
        uVar88 = uVar54 & 0xffffffff;
        uVar58 = 0;
        if (uVar52 < uVar62) {
          uVar75 = uVar88 - uVar85;
          uVar58 = 0;
          if (uVar75 < 9) {
            uVar75 = uVar85;
          }
          else {
            uVar74 = (ulong)((uint)uVar75 & 7);
            if (uVar74 == 0) {
              uVar74 = 8;
            }
            lVar86 = (uVar74 + uVar85) - uVar88;
            puVar31 = (undefined4 *)(lVar83 + 0x90 + uVar85 * 0x14);
            auVar104 = (undefined1  [16])0x0;
            auVar110 = (undefined1  [16])0x0;
            do {
              auVar126._12_4_ = puVar31[-0x14];
              auVar126._8_4_ = puVar31[-0x19];
              auVar126._4_4_ = puVar31[-0x1e];
              auVar126._0_4_ = puVar31[-0x23];
              auVar128._12_4_ = *puVar31;
              auVar128._8_4_ = puVar31[-5];
              auVar128._4_4_ = puVar31[-10];
              auVar128._0_4_ = puVar31[-0xf];
              auVar104 = auVar104 | auVar126 & auVar131;
              auVar110 = auVar110 | auVar128 & auVar131;
              puVar31 = puVar31 + 0x28;
              lVar86 = lVar86 + 8;
            } while (lVar86 != 0);
            uVar75 = (uVar75 - uVar74) + uVar85;
            auVar110 = auVar110 | auVar104;
            auVar106._0_8_ = auVar110._8_8_;
            auVar106._8_4_ = auVar110._8_4_;
            auVar106._12_4_ = auVar110._12_4_;
            uVar58 = SUB164(auVar106 | auVar110,4) | SUB164(auVar106 | auVar110,0);
          }
          lVar86 = uVar88 - uVar75;
          puVar59 = (uint *)(lVar65 + uVar75 * 0x14);
          do {
            uVar58 = uVar58 | *puVar59 & 7;
            puVar59 = puVar59 + 5;
            lVar86 = lVar86 + -1;
          } while (lVar86 != 0);
        }
        uVar56 = uVar58 & 0xfffffffb;
        if ((uVar58 & 1) == 0) {
          uVar56 = uVar58;
        }
        uVar58 = uVar56 | 3;
        if ((uVar56 & 4) == 0) {
          uVar58 = uVar56;
        }
        uVar56 = uVar58 & 0xfffffffd;
        if ((uVar84 & 0x40) != 0) {
          uVar56 = uVar58;
        }
        if (uVar52 < uVar62) {
          uVar75 = ~uVar85;
          if ((uVar62 - uVar52 & 3) != 0) {
            puVar59 = (uint *)(lVar65 + uVar85 * 0x14);
            lVar86 = 0;
            do {
              *puVar59 = uVar56;
              lVar86 = lVar86 + -1;
              puVar59 = puVar59 + 5;
            } while (-lVar86 != ((ulong)(uVar62 - uVar52) & 3));
            uVar85 = uVar85 - lVar86;
          }
          if (2 < uVar75 + uVar88) {
            lVar86 = uVar88 - uVar85;
            puVar59 = (uint *)(lVar83 + 0x40 + uVar85 * 0x14);
            do {
              puVar59[-0xf] = uVar56;
              puVar59[-10] = uVar56;
              puVar59[-5] = uVar56;
              *puVar59 = uVar56;
              puVar59 = puVar59 + 0x14;
              lVar86 = lVar86 + -4;
            } while (lVar86 != 0);
          }
        }
        uVar52 = uVar62 + 1;
        if (uVar62 + 1 < uVar57) {
          uVar52 = uVar57;
        }
        uVar85 = uVar54 & 0xffffffff;
        do {
          if (uVar52 - 1 == (int)uVar85) {
            uVar54 = (ulong)uVar52;
            break;
          }
          uVar54 = (ulong)((int)uVar85 + 1);
          lVar86 = uVar85 * 0x14;
          uVar85 = uVar54;
        } while (*(int *)(lVar83 + 8 + lVar86) == *(int *)(lVar83 + 8 + uVar54 * 0x14));
        uVar85 = uVar48;
      } while (uVar62 < uVar57);
    }
  }
  *(uint *)(param_5 + 0x38) = uVar6;
  *(undefined8 *)(param_5 + 0xc4) = 0x1fffffff3fffffff;
  *(undefined2 *)(param_5 + 0xb8) = 0;
  return 1;
}


