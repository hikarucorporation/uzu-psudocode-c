// Function : hb_ot_layout_kern
// Namespace: 
// Entry    : 003fff30
// Prototype: undefined hb_ot_layout_kern(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long param_10, hb_buffer_t * param_11, undefined4 * param_12, undefined8 param_13, ulong param_14)
// Body     : 003fff30 - 00405171


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl */
/* hb_ot_layout_kern(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

void __cdecl
hb_ot_layout_kern(undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,
                 undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,
                 undefined8 param_8,undefined8 param_9,long param_10,hb_buffer_t *param_11,
                 undefined4 *param_12,undefined8 param_13,ulong param_14)

{
  long lVar1;
  int *piVar2;
  hb_aat_apply_context_t hVar3;
  hb_aat_apply_context_t hVar4;
  hb_buffer_t hVar5;
  hb_aat_apply_context_t hVar6;
  ushort uVar7;
  ushort uVar8;
  hb_aat_apply_context_t *phVar9;
  hb_face_t *phVar10;
  ulong uVar11;
  byte bVar12;
  bool bVar13;
  char cVar14;
  bool bVar15;
  ushort uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  hb_aat_apply_context_t *phVar19;
  hb_buffer_t *phVar20;
  accelerator_t *paVar21;
  byte bVar22;
  hb_buffer_t *phVar23;
  hb_aat_apply_context_t *phVar24;
  ulong uVar25;
  ushort uVar26;
  ushort uVar27;
  uint uVar28;
  uint *puVar29;
  undefined8 extraout_RDX;
  ulong *puVar30;
  long lVar31;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar32;
  undefined8 extraout_RDX_00;
  hb_buffer_t *phVar33;
  undefined8 extraout_RDX_01;
  uint uVar34;
  byte *pbVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  ushort uVar41;
  int iVar42;
  ulong uVar43;
  void *pvVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined1 *puVar49;
  ulong *puVar50;
  hb_aat_apply_context_t *phVar51;
  uint *puVar52;
  void *pvVar53;
  long lVar54;
  uint uVar55;
  GDEFVersion1_2<OT::Layout::SmallTypes> *pGVar56;
  hb_aat_apply_context_t *phVar57;
  int iVar58;
  ulong uVar59;
  ushort *puVar60;
  uint *puVar61;
  hb_aat_apply_context_t *phVar62;
  undefined8 uVar63;
  hb_aat_apply_context_t *extraout_XMM0_Qa;
  hb_aat_apply_context_t *extraout_XMM0_Qa_00;
  hb_aat_apply_context_t *extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  hb_aat_apply_context_t *extraout_XMM0_Qa_04;
  hb_aat_apply_context_t *extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  hb_aat_apply_context_t *extraout_XMM0_Qa_10;
  hb_aat_apply_context_t *extraout_XMM0_Qa_11;
  hb_aat_apply_context_t *extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  hb_aat_apply_context_t *extraout_XMM0_Qa_15;
  hb_aat_apply_context_t *extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 in_stack_fffffffffffffce8;
  hb_aat_apply_context_t *local_298;
  hb_aat_apply_context_t *phStack_290;
  hb_aat_apply_context_t *local_288;
  uint local_280 [2];
  char local_278;
  char local_277;
  char local_276;
  char local_275;
  byte local_274;
  undefined1 local_270 [16];
  undefined8 local_260;
  uint local_258;
  hb_aat_apply_context_t *local_248;
  undefined8 local_240;
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236;
  char local_235;
  undefined1 local_234;
  undefined1 local_230 [16];
  undefined8 local_220;
  uint local_218;
  int local_210;
  long local_1f8;
  hb_sanitize_context_t local_1f0 [96];
  void *local_190;
  uint local_16c;
  undefined4 local_164;
  char local_15b;
  char local_15a;
  char local_159;
  undefined8 local_150;
  undefined8 local_148;
  hb_aat_apply_context_t local_140 [8];
  long local_138;
  long local_130;
  hb_buffer_t *local_120;
  undefined1 local_110 [16];
  uint local_100;
  long local_e8;
  long local_c8;
  undefined1 local_c0 [16];
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  hb_aat_apply_context_t *local_78;
  hb_aat_apply_context_t *phStack_70;
  hb_aat_apply_context_t *local_68;
  uint local_60;
  uint local_5c;
  ulong local_58;
  ulong local_50;
  hb_buffer_t *local_48;
  ushort *local_40 [2];
  uint switchD_00400728::switchdataD_005e0c8c;
  
  lVar38 = *(long *)(param_10 + 0x20);
  paVar21 = *(accelerator_t **)(lVar38 + 0x120);
  local_48 = param_11;
  while (paVar21 == (accelerator_t *)0x0) {
    phVar10 = *(hb_face_t **)(lVar38 + 0x68);
    if (phVar10 == (hb_face_t *)0x0) {
      paVar21 = (accelerator_t *)&_hb_NullPool;
      break;
    }
    paVar21 = calloc(1,0x18);
    if (paVar21 == (accelerator_t *)0x0) {
      LOCK();
      bVar13 = *(long *)(lVar38 + 0x120) == 0;
      if (bVar13) {
        *(long *)(lVar38 + 0x120) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar13) {
        paVar21 = (accelerator_t *)&_hb_NullPool;
        break;
      }
    }
    else {
      OT::kern::accelerator_t::accelerator_t(paVar21,phVar10,extraout_RDX_00,param_12,param_13);
      LOCK();
      bVar13 = *(long *)(lVar38 + 0x120) == 0;
      if (bVar13) {
        *(long *)(lVar38 + 0x120) = (long)paVar21;
      }
      UNLOCK();
      if (bVar13) break;
      OT::kern::accelerator_t::~accelerator_t(paVar21);
      free(paVar21);
    }
    paVar21 = *(accelerator_t **)(lVar38 + 0x120);
  }
  pGVar56 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)paVar21;
  lVar38 = *(long *)(param_10 + 0x20);
  paVar21 = *(accelerator_t **)(lVar38 + 0x120);
  while (paVar21 == (accelerator_t *)0x0) {
    phVar10 = *(hb_face_t **)(lVar38 + 0x68);
    if (phVar10 == (hb_face_t *)0x0) {
      paVar21 = (accelerator_t *)&_hb_NullPool;
      break;
    }
    paVar21 = calloc(1,0x18);
    if (paVar21 == (accelerator_t *)0x0) {
      param_12 = &_hb_NullPool;
      LOCK();
      bVar13 = *(long *)(lVar38 + 0x120) == 0;
      if (bVar13) {
        *(long *)(lVar38 + 0x120) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar13) {
        paVar21 = (accelerator_t *)&_hb_NullPool;
        break;
      }
    }
    else {
      OT::kern::accelerator_t::accelerator_t(paVar21,phVar10,extraout_RDX_01,param_12,param_13);
      LOCK();
      bVar13 = *(long *)(lVar38 + 0x120) == 0;
      if (bVar13) {
        *(long *)(lVar38 + 0x120) = (long)paVar21;
      }
      UNLOCK();
      if (bVar13) break;
      OT::kern::accelerator_t::~accelerator_t(paVar21);
      free(paVar21);
    }
    paVar21 = *(accelerator_t **)(lVar38 + 0x120);
  }
  phVar20 = local_48;
  phVar23 = local_48;
  uVar63 = AAT::hb_aat_apply_context_t::hb_aat_apply_context_t
                     (local_140,param_9,param_10,(undefined4 *)local_48,pGVar56);
                    /* try { // try from 003fffa1 to 003fffb4 has its CatchHandler @ 004051d9 */
  bVar13 = hb_buffer_t::message
                     (uVar63,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,phVar20,
                      param_10,"start table kern",phVar23,pGVar56,param_14,in_stack_fffffffffffffce8
                     );
  uVar63 = extraout_XMM0._0_8_;
  if (!bVar13) goto LAB_00404eec;
  puVar17 = *(undefined4 **)paVar21;
  puVar60 = (ushort *)&_hb_NullPool;
  if (puVar17 == (undefined4 *)0x0) {
    puVar17 = &_hb_NullPool;
  }
  if (3 < (uint)puVar17[6]) {
    puVar60 = *(ushort **)(puVar17 + 4);
  }
  uVar16 = *puVar60 << 8 | *puVar60 >> 8;
  if (uVar16 == 1) {
    uVar34 = *(uint *)(local_120 + 0x60);
    param_14 = (ulong)uVar34;
    if (((byte)local_120[0x18] & 0x40) == 0) {
LAB_0040004c:
      if (uVar34 < 0x20) {
        if (param_14 == 0) {
          local_b0 = 0;
          local_c0._8_8_ = 0;
          local_c0._0_8_ = (hb_buffer_t *)0x0;
        }
        else {
          puVar61 = *(uint **)(local_120 + 0x70);
          uVar55 = uVar34 - 1;
          pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar55;
          puVar29 = puVar61;
          if (uVar55 < 3) {
            local_c0._0_8_ = (hb_buffer_t *)0x0;
          }
          else {
            uVar36 = uVar34 & 0xfffffffc;
            local_c0._0_8_ = (hb_buffer_t *)0x0;
            do {
              local_c0._0_8_ =
                   local_c0._0_8_ | 1L << ((ulong)(*puVar29 >> 4) & 0x3f) |
                   1L << ((ulong)(puVar29[5] >> 4) & 0x3f) |
                   1L << ((ulong)(puVar29[10] >> 4) & 0x3f) |
                   1L << ((ulong)(puVar29[0xf] >> 4) & 0x3f);
              puVar29 = puVar29 + 0x14;
              uVar36 = uVar36 - 4;
            } while (uVar36 != 0);
          }
          if ((uVar34 & 3) != 0) {
            lVar38 = 0;
            do {
              local_c0._0_8_ =
                   local_c0._0_8_ | 1L << ((ulong)(*(uint *)((long)puVar29 + lVar38) >> 4) & 0x3f);
              lVar38 = lVar38 + 0x14;
            } while ((uVar34 & 3) * 0x14 != (int)lVar38);
          }
          puVar29 = puVar61;
          if (uVar55 < 3) {
            local_c0._8_8_ = 0;
          }
          else {
            uVar36 = uVar34 & 0xfffffffc;
            local_c0._8_8_ = 0;
            do {
              local_c0._8_8_ =
                   local_c0._8_8_ | 1L << ((ulong)(byte)*puVar29 & 0x3f) |
                   1L << ((ulong)(byte)puVar29[5] & 0x3f) | 1L << ((ulong)(byte)puVar29[10] & 0x3f)
                   | 1L << ((ulong)(byte)puVar29[0xf] & 0x3f);
              puVar29 = puVar29 + 0x14;
              uVar36 = uVar36 - 4;
            } while (uVar36 != 0);
          }
          if ((uVar34 & 3) != 0) {
            lVar38 = 0;
            do {
              local_c0._8_8_ =
                   local_c0._8_8_ | 1L << ((ulong)*(byte *)((long)puVar29 + lVar38) & 0x3f);
              lVar38 = lVar38 + 0x14;
            } while ((uVar34 & 3) * 0x14 != (int)lVar38);
          }
          if (uVar55 < 3) {
            local_b0 = 0;
          }
          else {
            uVar55 = uVar34 & 0xfffffffc;
            local_b0 = 0;
            do {
              local_b0 = local_b0 | 1L << ((ulong)(*puVar61 >> 9) & 0x3f) |
                         1L << ((ulong)(puVar61[5] >> 9) & 0x3f) |
                         1L << ((ulong)(puVar61[10] >> 9) & 0x3f) |
                         1L << ((ulong)(puVar61[0xf] >> 9) & 0x3f);
              puVar61 = puVar61 + 0x14;
              uVar55 = uVar55 - 4;
            } while (uVar55 != 0);
          }
          if ((uVar34 & 3) != 0) {
            param_14 = (ulong)(uVar34 & 3) * 4;
            lVar38 = 0;
            do {
              local_b0 = local_b0 | 1L << ((ulong)(*(uint *)((long)puVar61 + lVar38) >> 9) & 0x3f);
              lVar38 = lVar38 + 0x14;
            } while ((uVar34 & 3) * 0x14 != (int)lVar38);
          }
        }
        goto LAB_00402944;
      }
      auVar65._8_4_ = 0xffffffff;
      auVar65._0_8_ = 0xffffffffffffffff;
      auVar65._12_4_ = 0xffffffff;
      uVar63 = 0xffffffffffffffff;
      local_b0 = 0xffffffffffffffff;
      uVar34 = *(uint *)(puVar60 + 2);
      phVar23 = local_120;
      local_c0 = auVar65;
    }
    else {
      local_120[0xc0] = (hb_buffer_t)((byte)local_120[0xc0] | 0x20);
      if (param_14 != 0) {
        lVar38 = *(long *)(local_120 + 0x70);
        if (param_14 - 1 < 3) {
          uVar59 = 0;
        }
        else {
          pbVar35 = (byte *)(lVar38 + 0x40);
          uVar59 = 0;
          do {
            pbVar35[-0x3c] = pbVar35[-0x3c] | 2;
            pbVar35[-0x28] = pbVar35[-0x28] | 2;
            pbVar35[-0x14] = pbVar35[-0x14] | 2;
            *pbVar35 = *pbVar35 | 2;
            uVar59 = uVar59 + 4;
            pbVar35 = pbVar35 + 0x50;
          } while ((uVar34 & 0xfffffffc) != uVar59);
        }
        if ((ulong)(uVar34 & 3) != 0) {
          lVar54 = 0;
          do {
            pbVar35 = (byte *)(lVar38 + uVar59 * 0x14 + 4 + lVar54);
            *pbVar35 = *pbVar35 | 2;
            lVar54 = lVar54 + 0x14;
          } while ((ulong)(uVar34 & 3) * 0x14 != lVar54);
        }
        goto LAB_0040004c;
      }
      local_b0 = 0;
      local_c0._8_8_ = 0;
      local_c0._0_8_ = (hb_buffer_t *)0x0;
LAB_00402944:
      uVar34 = *(uint *)(puVar60 + 2);
      phVar23 = (hb_buffer_t *)local_c0._0_8_;
      auVar65 = extraout_XMM0;
    }
    local_5c = 0;
    if (uVar34 != 0) {
      local_5c = 0;
      uVar34 = uVar34 >> 0x18 | (uVar34 & 0xff0000) >> 8 | (uVar34 & 0xff00) << 8 | uVar34 << 0x18;
      phVar62 = (hb_aat_apply_context_t *)(puVar60 + 4);
      local_58 = (ulong)(uVar34 - 1);
      uVar59 = (ulong)uVar34;
      if (uVar34 < 2) {
        uVar59 = 1;
      }
      phVar23 = (hb_buffer_t *)0x0;
      uVar40 = 0;
      bVar13 = false;
      local_50 = uVar59;
      do {
        if (((byte)phVar62[4] & 0x20) == 0) {
          uVar34 = *(uint *)(local_120 + 0x38);
          if (((uVar34 & 0xfffffffe) != 4) != -1 < (char)phVar62[4]) {
            bVar15 = hb_buffer_t::message
                               (auVar65._0_8_,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                                param_8,local_120,local_130,"start subtable %u",phVar23,pGVar56,
                                param_14,in_stack_fffffffffffffce8);
            phVar23 = local_120;
            lVar38 = local_130;
            auVar65 = extraout_XMM0_03;
            if (bVar15) {
              if ((!bVar13) && (((byte)phVar62[4] & 0x40) != 0)) {
                uVar55 = *(uint *)(local_120 + 0x60);
                bVar13 = true;
                if (uVar55 != 0) {
                  lVar54 = *(long *)(local_120 + 0x80);
                  if (uVar55 == 1) {
                    uVar59 = 0;
                  }
                  else {
                    puVar49 = (undefined1 *)(lVar54 + 0x26);
                    uVar59 = 0;
                    do {
                      puVar49[-0x14] = 2;
                      *(ushort *)(puVar49 + -0x16) =
                           (ushort)((*(uint *)(local_120 + 0x38) & 0xfffffffd) != 4) * 2 + -1;
                      *puVar49 = 2;
                      *(ushort *)(puVar49 + -2) =
                           (ushort)((*(uint *)(local_120 + 0x38) & 0xfffffffd) != 4) * 2 + -1;
                      uVar59 = uVar59 + 2;
                      puVar49 = puVar49 + 0x28;
                    } while ((uVar55 & 0xfffffffe) != uVar59);
                  }
                  if ((uVar55 & 1) != 0) {
                    *(undefined1 *)(lVar54 + 0x12 + uVar59 * 0x14) = 2;
                    *(ushort *)(lVar54 + 0x10 + uVar59 * 0x14) =
                         (ushort)((*(uint *)(local_120 + 0x38) & 0xfffffffd) != 4) * 2 + -1;
                  }
                }
              }
              if ((uVar34 & 0xfffffffd) == 5) {
                uVar55 = *(uint *)(local_120 + 0x60);
                if (1 < uVar55) {
                  puVar30 = *(ulong **)(local_120 + 0x70);
                  uVar59 = (ulong)(uVar55 - 1);
                  puVar50 = (ulong *)((long)puVar30 + uVar59 * 0x14);
                  uVar43 = 0;
                  do {
                    uVar59 = uVar59 - 1;
                    uVar25 = puVar50[2];
                    local_288 = (hb_aat_apply_context_t *)CONCAT44(local_288._4_4_,(int)uVar25);
                    local_298 = (hb_aat_apply_context_t *)*puVar50;
                    phStack_290 = (hb_aat_apply_context_t *)puVar50[1];
                    *(int *)(puVar50 + 2) = (int)puVar30[2];
                    uVar39 = puVar30[1];
                    *puVar50 = *puVar30;
                    puVar50[1] = uVar39;
                    *(int *)(puVar30 + 2) = (int)uVar25;
                    *puVar30 = (ulong)local_298;
                    puVar30[1] = (ulong)phStack_290;
                    uVar43 = uVar43 + 1;
                    puVar30 = (ulong *)((long)puVar30 + 0x14);
                    puVar50 = (ulong *)((long)puVar50 + -0x14);
                  } while (uVar43 < (uVar59 & 0xffffffff));
                }
                if (local_120[0x5b] != (hb_buffer_t)0x0) {
                  if (*(uint *)(local_120 + 0x60) < uVar55) {
                    uVar55 = *(uint *)(local_120 + 0x60);
                  }
                  if (1 < uVar55) {
                    puVar30 = *(ulong **)(local_120 + 0x80);
                    uVar59 = (ulong)(uVar55 - 1);
                    puVar50 = (ulong *)((long)puVar30 + uVar59 * 0x14);
                    uVar43 = 0;
                    do {
                      uVar59 = uVar59 - 1;
                      uVar25 = puVar50[2];
                      local_288 = (hb_aat_apply_context_t *)CONCAT44(local_288._4_4_,(int)uVar25);
                      local_298 = (hb_aat_apply_context_t *)*puVar50;
                      phStack_290 = (hb_aat_apply_context_t *)puVar50[1];
                      *(int *)(puVar50 + 2) = (int)puVar30[2];
                      uVar39 = puVar30[1];
                      *puVar50 = *puVar30;
                      puVar50[1] = uVar39;
                      *(int *)(puVar30 + 2) = (int)uVar25;
                      *puVar30 = (ulong)local_298;
                      puVar30[1] = (ulong)phStack_290;
                      uVar43 = uVar43 + 1;
                      puVar30 = (ulong *)((long)puVar30 + 0x14);
                      puVar50 = (ulong *)((long)puVar50 + -0x14);
                    } while (uVar43 < (uVar59 & 0xffffffff));
                  }
                }
              }
              if (uVar40 < *(uint *)(paVar21 + 0xc)) {
                puVar50 = (ulong *)(*(long *)(paVar21 + 0x10) + uVar40 * 0x30);
              }
              else {
                puVar50 = (ulong *)&_hb_NullPool;
              }
              local_80 = puVar50[2];
              local_90 = *puVar50;
              uStack_88 = puVar50[1];
              if (uVar40 < *(uint *)(paVar21 + 0xc)) {
                puVar17 = (undefined4 *)(uVar40 * 0x30 + *(long *)(paVar21 + 0x10));
              }
              else {
                puVar17 = &_hb_NullPool;
              }
              local_68 = *(hb_aat_apply_context_t **)(puVar17 + 10);
              local_78 = *(hb_aat_apply_context_t **)(puVar17 + 6);
              phStack_70 = *(hb_aat_apply_context_t **)(puVar17 + 8);
              local_110._0_8_ = *(undefined8 *)(local_e8 + 0x10);
              local_100 = *(uint *)(local_e8 + 0x18);
              local_110._8_8_ = local_110._0_8_ + (ulong)local_100;
              if ((uVar40 < local_58) && (phVar62 != (hb_aat_apply_context_t *)0x0)) {
                uVar59 = local_110._8_8_ - (long)phVar62;
                if (((ulong)local_110._0_8_ <= phVar62) &&
                   (phVar62 <= (ulong)local_110._8_8_ && uVar59 != 0)) {
                  uVar55 = *(uint *)phVar62;
                  uVar43 = (ulong)(uVar55 >> 0x18 | (uVar55 & 0xff0000) >> 8 |
                                   (uVar55 & 0xff00) << 8 | uVar55 << 0x18);
                  if (uVar43 < uVar59) {
                    uVar59 = uVar43;
                  }
                  local_110._8_8_ = phVar62 + uVar59;
                  local_110._0_8_ = phVar62;
                  local_100 = (uint)uVar59;
                  goto LAB_00402d2e;
                }
                phVar24 = (hb_aat_apply_context_t *)0x0;
                local_110 = (undefined1  [16])0x0;
                local_100 = 0;
                hVar3 = phVar62[5];
              }
              else {
LAB_00402d2e:
                hVar3 = phVar62[5];
                phVar24 = local_78;
              }
              local_148 = uVar40;
              if ((byte)hVar3 < 4) {
                switch(hVar3) {
                case (hb_aat_apply_context_t)0x0:
                  if (((((((*(byte *)(local_138 + 0xa8) & 1) != 0) &&
                         ((local_90 & local_c0._0_8_) != 0)) && ((uStack_88 & local_c0._8_8_) != 0))
                       && (((local_80 & local_b0) != 0 && (((ulong)local_78 & local_c0._0_8_) != 0))
                          )) && (((ulong)phStack_70 & local_c0._8_8_) != 0)) &&
                     ((local_b0 & (ulong)local_68) != 0)) {
                    hVar3 = phVar62[4];
                    uVar55 = *(uint *)(local_138 + 0xa0);
                    /* try { // try from 00402df9 to 004033a9 has its CatchHandler @ 00405186 */
                    bVar15 = hb_buffer_t::message
                                       (phVar24,param_2_00,param_3_00,param_4,param_5,param_6,
                                        param_7,param_8,local_120,local_130,"start kern",
                                        local_c0._0_8_,pGVar56,param_14,in_stack_fffffffffffffce8);
                    phVar24 = extraout_XMM0_Qa_10;
                    if (bVar15) {
                      if (((byte)phVar23[0x18] & 0x40) != 0) {
                        uVar36 = *(uint *)(phVar23 + 0x60);
                        phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 0x20);
                        if ((ulong)uVar36 != 0) {
                          lVar54 = *(long *)(phVar23 + 0x70);
                          if ((ulong)uVar36 - 1 < 3) {
                            uVar59 = 0;
                          }
                          else {
                            pbVar35 = (byte *)(lVar54 + 0x40);
                            uVar59 = 0;
                            do {
                              pbVar35[-0x3c] = pbVar35[-0x3c] | 2;
                              pbVar35[-0x28] = pbVar35[-0x28] | 2;
                              pbVar35[-0x14] = pbVar35[-0x14] | 2;
                              *pbVar35 = *pbVar35 | 2;
                              uVar59 = uVar59 + 4;
                              pbVar35 = pbVar35 + 0x50;
                            } while ((uVar36 & 0xfffffffc) != uVar59);
                          }
                          if ((ulong)(uVar36 & 3) != 0) {
                            lVar31 = 0;
                            do {
                              pbVar35 = (byte *)(lVar54 + uVar59 * 0x14 + 4 + lVar31);
                              *pbVar35 = *pbVar35 | 2;
                              lVar31 = lVar31 + 0x14;
                            } while ((ulong)(uVar36 & 3) * 0x14 != lVar31);
                          }
                        }
                      }
                      puVar17 = &_hb_NullPool;
                      OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                                ((hb_ot_apply_context_t *)&local_298,1,lVar38,(undefined4 *)phVar23,
                                 (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
                      local_150 = 0xffffffff;
                      local_275 = local_159;
                      if (local_210 != 0) {
                        local_275 = '\0';
                      }
                      uVar63 = 0;
                      pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                                CONCAT71((int7)((ulong)puVar17 >> 8),local_15b != '\0');
                      local_278 = local_210 == 1;
                      local_164 = 8;
                      local_288 = (hb_aat_apply_context_t *)&local_298;
                      local_258 = *(uint *)(local_1f8 + 0x60);
                      local_270 = (undefined1  [16])0x0;
                      local_260 = (hb_aat_apply_context_t *)0x0;
                      local_280[0] = 8;
                      local_277 = local_15a;
                      local_274 = 0;
                      local_230 = (undefined1  [16])0x0;
                      local_220 = 0;
                      local_238 = (bool)local_278 || local_15b != '\0';
                      phVar24 = (hb_aat_apply_context_t *)0xffffffff00000008;
                      local_240 = 0xffffffff00000008;
                      local_237 = 1;
                      local_234 = 0;
                      uVar36 = *(uint *)(phVar23 + 0x60);
                      local_280[1] = uVar55;
                      local_276 = local_278;
                      local_248 = local_288;
                      local_236 = local_278;
                      local_235 = local_275;
                      local_218 = local_258;
                      local_16c = uVar55;
                      if (uVar36 != 0) {
                        uVar47 = *(uint *)(phVar23 + 0x38);
                        phVar9 = *(hb_aat_apply_context_t **)(phVar23 + 0x70);
                        lVar54 = *(long *)(phVar23 + 0x80);
                        uVar59 = 0;
                        uVar63 = 0;
LAB_00404158:
                        uVar28 = (uint)uVar59;
                        if ((*(uint *)(phVar9 + (uVar59 * 5 + 1) * 4) & uVar55) != 0) {
                          phStack_290 = (hb_aat_apply_context_t *)CONCAT44(phStack_290._4_4_,uVar28)
                          ;
                          phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                          local_258 = *(uint *)(phVar24 + 0x60);
                          if (*(uint *)(phVar24 + 0x5c) == uVar28) {
                            local_274 = *(byte *)(*(long *)(phVar24 + 0x70) + 0xf + uVar59 * 0x14);
                          }
                          else {
                            local_274 = 0;
                          }
                          if (local_275 == '\0') {
                            local_274 = 0;
                          }
                          iVar58 = local_258 - 1;
                          if ((int)uVar28 < iVar58) {
                            uVar40 = uVar59;
                            do {
                              uVar37 = (int)uVar40 + 1;
                              uVar40 = (ulong)uVar37;
                              phStack_290 = (hb_aat_apply_context_t *)
                                            CONCAT44(phStack_290._4_4_,uVar37);
                              lVar31 = *(long *)(phVar24 + 0x70);
                              uVar16 = *(ushort *)(lVar31 + 0xc + uVar40 * 0x14);
                              phVar24 = (hb_aat_apply_context_t *)(ulong)uVar16;
                              if ((local_280[0] & uVar16 & 0xe) != 0) goto LAB_00404305;
                              puVar61 = (uint *)(lVar31 + uVar40 * 0x14);
                              if ((uVar16 & 8) == 0) {
LAB_00404219:
                                lVar1 = lVar31 + uVar40 * 0x14;
                                uVar16 = *(ushort *)(lVar31 + 0x10 + uVar40 * 0x14);
                                uVar26 = 0;
                                bVar15 = false;
                                if (((((uVar16 & 0x20) != 0) &&
                                     (bVar15 = false, (*(byte *)(lVar1 + 0xc) & 0x10) == 0)) &&
                                    ((local_278 != '\0' ||
                                     (bVar15 = false, (uVar16 & 0x21f) != 0x201)))) &&
                                   ((local_277 != '\0' ||
                                    (bVar15 = false, (uVar16 & 0x11f) != 0x101)))) {
                                  bVar15 = (uVar16 & 0x40) == 0 || local_276 != '\0';
                                }
                                if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                  uVar26 = *(ushort *)local_260 << 8 | *(ushort *)local_260 >> 8;
                                }
                                phVar24 = local_260;
                                if (((*(uint *)(lVar31 + 4 + uVar40 * 0x14) & local_280[1]) != 0) &&
                                   ((local_274 == 0 || (local_274 == *(byte *)(lVar1 + 0xf))))) {
                                  if ((code *)local_270._0_8_ == (code *)0x0) {
                                    if (bVar15) goto LAB_00404305;
                                  }
                                  else {
                    /* try { // try from 004042ea to 0040436c has its CatchHandler @ 0040517e */
                                    cVar14 = (*(code *)local_270._0_8_)
                                                       (puVar61,uVar26,local_270._8_8_);
                                    uVar63 = extraout_XMM0_Qa_17;
                                    if (cVar14 == '\0') goto LAB_004042fb;
                                  }
                                  if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                    local_260 = local_260 + 2;
                                  }
                                  uVar40 = (ulong)phStack_290 & 0xffffffff;
                                  uVar37 = *(uint *)(phVar9 + uVar59 * 0x14);
                                  phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37;
                                  if ((((local_90 >> ((ulong)(uVar37 >> 4) & 0x3f) & 1) == 0) ||
                                      ((uStack_88 >> ((ulong)phVar24 & 0x3f) & 1) == 0)) ||
                                     ((local_80 >> ((ulong)(uVar37 >> 9) & 0x3f) & 1) == 0))
                                  goto LAB_0040414c;
                                  pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(uVar40 * 5);
                                  uVar46 = *(uint *)(phVar9 + uVar40 * 0x14);
                                  param_14 = (ulong)uVar46;
                                  if (((((ulong)local_78 >> ((ulong)(uVar46 >> 4) & 0x3f) & 1) == 0)
                                      || (((ulong)phStack_70 >> (param_14 & 0x3f) & 1) == 0)) ||
                                     (((ulong)local_68 >> ((ulong)(uVar46 >> 9) & 0x3f) & 1) == 0))
                                  goto LAB_0040414c;
                                  uVar16 = *(ushort *)(phVar62 + 8);
                                  phVar51 = (hb_aat_apply_context_t *)&_hb_NullPool;
                                  if (uVar16 == 0) goto LAB_004044f1;
                                  iVar58 = (ushort)(uVar16 << 8 | uVar16 >> 8) - 1;
                                  iVar42 = 0;
                                  goto LAB_00404498;
                                }
LAB_004042fb:
                                if (!bVar15) break;
                              }
                              else if ((local_280[0] & 0x10) == 0) {
                                if (((local_280[0] & 0xff00) == 0) ||
                                   (uVar37 = uVar16 & 0xff00,
                                   phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37,
                                   (local_280[0] & 0xff00) == uVar37)) goto LAB_00404219;
                              }
                              else {
                                uVar18 = OT::GDEF::accelerator_t::mark_set_covers
                                                   (*(accelerator_t **)(local_288 + 0xf8),
                                                    local_280[0] >> 0x10,*puVar61);
                                uVar63 = extraout_XMM0_Qa_18;
                                if ((char)uVar18 != '\0') goto LAB_00404219;
                              }
LAB_00404305:
                              uVar40 = (ulong)phStack_290 & 0xffffffff;
                              if (iVar58 <= (int)(uint)phStack_290) break;
                              phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                            } while( true );
                          }
                          uVar40 = (ulong)(uVar28 + 1);
                          goto LAB_0040438f;
                        }
                        uVar40 = (ulong)(uVar28 + 1);
                        phVar24 = phVar9;
                        goto LAB_0040414c;
                      }
LAB_00404c84:
                    /* try { // try from 00404c84 to 00404c99 has its CatchHandler @ 00405174 */
                      hb_buffer_t::message
                                (uVar63,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                                 param_8,phVar23,lVar38,"end kern",phVar24,pGVar56,param_14,
                                 in_stack_fffffffffffffce8);
LAB_00404128:
                      free(local_190);
                      phVar24 = (hb_aat_apply_context_t *)
                                hb_sanitize_context_t::~hb_sanitize_context_t(local_1f0);
                    }
                  }
                  break;
                case (hb_aat_apply_context_t)0x1:
                  if (((*(byte *)(local_138 + 0xa8) & 1) != 0) || (((byte)phVar62[4] & 0x40) != 0))
                  {
                    local_298 = local_140;
                    local_288 = phVar62 + (ulong)(ushort)(*(ushort *)(phVar62 + 0x10) << 8 |
                                                         *(ushort *)(phVar62 + 0x10) >> 8) + 8;
                    local_260 = (hb_aat_apply_context_t *)
                                (((ulong)CONCAT31((int3)((ulong)local_260 >> 0x28),
                                                  (byte)phVar62[4] >> 6) & 0xffffff01) << 0x20);
                    phStack_290 = phVar62;
                    phVar24 = (hb_aat_apply_context_t *)
                              AAT::StateTableDriver<AAT::ObsoleteTypes,void>::StateTableDriver
                                        ((StateTableDriver<AAT::ObsoleteTypes,void> *)local_40,
                                         phVar62 + 8,*(long *)(local_130 + 0x20));
                    puVar60 = local_40[0];
                    phVar23 = local_120;
                    uVar16 = local_40[0][2] << 8 | local_40[0][2] >> 8;
                    uVar55 = *(uint *)((long)local_40[0] +
                                      (ulong)*(byte *)((long)local_40[0] + (ulong)uVar16 + 1) * 4 +
                                      (ulong)(ushort)(local_40[0][3] << 8 | local_40[0][3] >> 8));
                    if ((((uVar55 & 0xff3f0000) != 0) ||
                        (uVar26 = (ushort)uVar55,
                        (int)((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) - (uint)uVar16) /
                        (int)(uint)(ushort)(*local_40[0] << 8 | *local_40[0] >> 8) != 0)) ||
                       ((((((local_90 & local_c0._0_8_) != 0 && ((uStack_88 & local_c0._8_8_) != 0))
                          && ((local_80 & local_b0) != 0)) &&
                         ((((ulong)local_78 & local_c0._0_8_) != 0 &&
                          (((ulong)phStack_70 & local_c0._8_8_) != 0)))) &&
                        ((local_b0 & (ulong)local_68) != 0)))) {
                      if ((local_c8 == 0) || (*(uint *)(local_c8 + 4) < 2)) {
                        puVar61 = (uint *)0x0;
                      }
                      else {
                        puVar61 = *(uint **)(local_c8 + 8);
                      }
                      *(undefined4 *)(local_120 + 0x5c) = 0;
                      if (local_120[0x58] != (hb_buffer_t)0x0) {
                        uVar55 = 0;
                        pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                        param_14 = (ulong)*(uint *)(local_120 + 0x60);
                        uVar59 = 0;
                        if (puVar61 == (uint *)0x0) goto LAB_00403af2;
LAB_004039e0:
                        if (uVar55 < (uint)param_14) {
                          uVar36 = *(uint *)(*(long *)(phVar23 + 0x70) + 8 + uVar59 * 0x14);
                          puVar52 = puVar61 + 3;
                          puVar29 = puVar61;
                          do {
                            puVar29 = puVar29 + -3;
                            puVar61 = puVar52 + -2;
                            puVar52 = puVar52 + -3;
                          } while (uVar36 < *puVar61);
                          do {
                            puVar61 = puVar29 + 3;
                            puVar52 = puVar29 + 5;
                            puVar29 = puVar61;
                          } while (*puVar52 < uVar36);
                        }
                        if ((*puVar61 & local_60) != 0) goto LAB_00403af5;
                        if (uVar55 != (uint)param_14) {
                          if (phVar23[0x5a] == (hb_buffer_t)0x0) {
                            pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                            goto LAB_0040408e;
                          }
                          pvVar53 = *(void **)(phVar23 + 0x78);
                          pvVar44 = *(void **)(phVar23 + 0x70);
                          if ((pvVar53 == pvVar44) &&
                             (pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0,
                             *(uint *)(phVar23 + 100) == uVar55)) goto LAB_00403aeb;
                          uVar55 = *(uint *)(phVar23 + 100) + 1;
                          if ((uVar55 == 0) || (uVar55 < *(uint *)(phVar23 + 0x68))) {
                            pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                            if (pvVar53 != pvVar44) goto LAB_0040405b;
                          }
                          else {
                            uVar63 = hb_buffer_t::enlarge(phVar23,uVar55);
                            if ((char)uVar63 == '\0') {
                              pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                              hVar5 = phVar23[0x58];
                              phVar24 = extraout_XMM0_Qa_15;
                              goto joined_r0x00403ae0;
                            }
                            pvVar44 = *(void **)(phVar23 + 0x70);
                            pvVar53 = *(void **)(phVar23 + 0x78);
                            pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                            if (pvVar53 != pvVar44) goto LAB_0040405b;
                          }
                          pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                          uVar55 = *(uint *)(phVar23 + 100);
                          if (uVar55 + 1 <= *(int *)(phVar23 + 0x5c) + 1U) goto LAB_00404058;
                          pvVar53 = *(void **)(phVar23 + 0x80);
                          *(void **)(phVar23 + 0x78) = pvVar53;
                          pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
LAB_0040403b:
                          if (uVar55 != 0) {
                            memcpy(pvVar53,pvVar44,(ulong)uVar55 * 0x14);
                            pvVar44 = *(void **)(phVar23 + 0x70);
                            pvVar53 = *(void **)(phVar23 + 0x78);
                          }
LAB_0040405b:
                          uVar55 = *(uint *)(phVar23 + 0x5c);
                          uVar36 = *(uint *)(phVar23 + 100);
                          *(undefined4 *)((long)pvVar53 + (ulong)uVar36 * 0x14 + 0x10) =
                               *(undefined4 *)((long)pvVar44 + (ulong)uVar55 * 0x14 + 0x10);
                          puVar50 = (ulong *)((long)pvVar44 + (ulong)uVar55 * 0x14);
                          phVar24 = (hb_aat_apply_context_t *)*puVar50;
                          uVar59 = puVar50[1];
                          puVar50 = (ulong *)((long)pvVar53 + (ulong)uVar36 * 0x14);
                          *puVar50 = (ulong)phVar24;
                          puVar50[1] = uVar59;
                          uVar55 = *(uint *)(phVar23 + 0x5c);
                          uVar36 = *(uint *)(phVar23 + 100);
LAB_00404085:
                          *(uint *)(phVar23 + 100) = uVar36 + 1;
LAB_0040408e:
                          *(uint *)(phVar23 + 0x5c) = uVar55 + 1;
                          hVar5 = phVar23[0x58];
joined_r0x00403ae0:
                          if (hVar5 != (hb_buffer_t)0x0) {
                            do {
                              uVar55 = *(uint *)(phVar23 + 0x5c);
                              param_14 = (ulong)*(uint *)(phVar23 + 0x60);
                              uVar59 = (ulong)uVar55;
                              if (puVar61 != (uint *)0x0) goto LAB_004039e0;
LAB_00403af2:
                              puVar61 = (uint *)0x0;
LAB_00403af5:
                              iVar58 = (int)pGVar56;
                              if (uVar55 < (uint)param_14) {
                                uVar36 = *(uint *)(*(long *)(phVar23 + 0x70) + uVar59 * 0x14);
                                if ((ulong)uVar36 == 0xffff) {
                                  uVar59 = 2;
                                }
                                else {
                                  uVar59 = 1;
                                  if ((((local_a8 >> ((ulong)(uVar36 >> 4) & 0x3f) & 1) != 0) &&
                                      ((local_a0 >> ((ulong)uVar36 & 0x3f) & 1) != 0)) &&
                                     ((local_98 >> ((ulong)(uVar36 >> 9) & 0x3f) & 1) != 0)) {
                                    uVar40 = (ulong)(ushort)(puVar60[1] << 8 | puVar60[1] >> 8);
                                    uVar16 = *(ushort *)((long)puVar60 + uVar40 + 2);
                                    uVar36 = uVar36 - (ushort)(*(ushort *)((long)puVar60 + uVar40)
                                                               << 8 | *(ushort *)
                                                                       ((long)puVar60 + uVar40) >> 8
                                                              );
                                    if (uVar36 < (ushort)(uVar16 << 8 | uVar16 >> 8)) {
                                      uVar59 = (ulong)*(byte *)((long)puVar60 +
                                                               (ulong)uVar36 + uVar40 + 4);
                                    }
                                  }
                                }
                              }
                              else {
                                uVar59 = 0;
                              }
                              uVar16 = *puVar60;
                              uVar26 = uVar16 << 8 | uVar16 >> 8;
                              uVar47 = (uint)uVar59;
                              uVar36 = uVar47;
                              if (uVar26 <= uVar47) {
                                uVar36 = 1;
                              }
                              uVar27 = puVar60[2] << 8 | puVar60[2] >> 8;
                              pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar27;
                              pGVar32 = pGVar56 + (long)puVar60;
                              uVar41 = puVar60[3] << 8 | puVar60[3] >> 8;
                              iVar42 = iVar58 * (uint)uVar26;
                              uVar40 = (ulong)(byte)pGVar32[uVar36 + iVar42];
                              uVar7 = *(ushort *)((long)puVar60 + uVar40 * 4 + (ulong)uVar41);
                              uVar28 = (uint)uVar26;
                              uVar36 = (int)((uint)(ushort)(uVar7 << 8 | uVar7 >> 8) - (uint)uVar27)
                                       / (int)uVar28;
                              uVar26 = *(ushort *)((long)puVar60 + uVar40 * 4 + (ulong)uVar41 + 2);
                              if ((uVar26 & 0xff3f) == 0) {
                                if ((iVar58 != 0) && (((uVar26 & 0x40) == 0 || (uVar36 != 0)))) {
                                  if (uVar28 <= uVar47) {
                                    uVar59 = 1;
                                  }
                                  uVar7 = *(ushort *)
                                           ((long)puVar60 +
                                           (ulong)(byte)pGVar32[uVar59] * 4 + (ulong)uVar41 + 2);
                                  if ((((uVar7 & 0xff3f) != 0) ||
                                      (uVar8 = *(ushort *)
                                                ((long)puVar60 +
                                                (ulong)(byte)pGVar32[uVar59] * 4 + (ulong)uVar41),
                                      uVar36 != (int)((uint)(ushort)(uVar8 << 8 | uVar8 >> 8) -
                                                     (uint)uVar27) / (int)uVar28)) ||
                                     (((uVar7 ^ uVar26) & 0x40) != 0)) goto LAB_00403c70;
                                }
                                if ((*(ushort *)
                                      ((long)puVar60 +
                                      (ulong)(byte)pGVar32[(uint)(uVar16 == 0) + iVar42] * 4 +
                                      (ulong)uVar41 + 2) & 0xff3f) != 0) goto LAB_00403c70;
                              }
                              else {
LAB_00403c70:
                                uVar47 = uVar55;
                                if (phVar23[0x5a] != (hb_buffer_t)0x0) {
                                  uVar47 = *(uint *)(phVar23 + 100);
                                }
                                if ((uVar47 != 0) && (uVar55 < (uint)param_14)) {
                                  pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x1;
                                  phVar24 = (hb_aat_apply_context_t *)
                                            hb_buffer_t::_set_glyph_flags
                                                      (phVar23,3,uVar47 - 1,uVar55 + 1,'\x01');
                                  uVar26 = *(ushort *)
                                            ((long)puVar60 + uVar40 * 4 + (ulong)uVar41 + 2);
                                }
                              }
                              phVar9 = local_260;
                              if ((uVar26 & 0x80) != 0) {
                                uVar59 = (ulong)local_260 & 0xffffffff;
                                if (uVar59 < 8) {
                                  local_260 = (hb_aat_apply_context_t *)
                                              CONCAT44(local_260._4_4_,(uint)local_260 + 1);
                                  local_280[uVar59] = *(uint *)(phVar23 + 0x5c);
                                  phVar9 = local_260;
                                }
                                else {
                                  local_260 = (hb_aat_apply_context_t *)
                                              ((ulong)local_260._4_4_ << 0x20);
                                  phVar9 = local_260;
                                }
                              }
                              phVar51 = phVar9;
                              if ((uVar26 & 0xff3f) != 0) {
                                local_260._0_4_ = (uint)phVar9;
                                if (((ulong)phVar9 & 0xffffffff) != 0) {
                                  uVar47 = ((int)local_288 - (uint)phStack_290) - 8;
                                  uVar55 = (uint)(ushort)((uVar26 & 0xff3f) << 8 | uVar26 >> 8);
                                  if (uVar55 < uVar47) {
                                    uVar55 = 0x3fffffff;
                                  }
                                  else {
                                    uVar55 = uVar55 - uVar47 >> 1;
                                  }
                                  if (!CARRY4((uint)local_260,(uint)local_260)) {
                                    phVar57 = local_288 + (ulong)uVar55 * 2;
                                    if ((((ulong)((long)phVar57 - *(long *)(local_298 + 0x30)) <=
                                          (ulong)*(uint *)(local_298 + 0x40)) &&
                                        ((uint)local_260 * 2 <=
                                         (uint)(*(int *)(local_298 + 0x38) - (int)phVar57))) &&
                                       (iVar58 = *(int *)(local_298 + 0x44) + (uint)local_260 * -2,
                                       *(int *)(local_298 + 0x44) = iVar58, 0 < iVar58)) {
                                      uVar55 = *(uint *)(*(long *)(local_298 + 8) + 0xa0);
                                      local_260._4_1_ = (byte)((ulong)phVar9 >> 0x20);
                                      bVar12 = local_260._4_1_;
                                      param_14 = CONCAT71((int7)(param_14 >> 8),local_260._4_1_);
                                      lVar38 = 0;
                                      bVar22 = 0;
                                      uVar47 = (uint)local_260;
                                      local_260 = phVar9;
                                      do {
                                        uVar47 = uVar47 - 1;
                                        phVar51 = local_260;
                                        if (((ulong)phVar9 & 0xffffffff) * 2 == lVar38) break;
                                        local_260 = (hb_aat_apply_context_t *)
                                                    CONCAT44(local_260._4_4_,uVar47);
                                        uVar59 = (ulong)local_280[uVar47];
                                        if (local_280[uVar47] < *(uint *)(phVar23 + 0x60)) {
                                          uVar16 = *(ushort *)(phVar57 + lVar38);
                                          bVar22 = (byte)(uVar16 >> 8) & 1;
                                          uVar16 = uVar16 << 8 | uVar16 >> 8 & 0xfffe;
                                          pGVar56 = *(GDEFVersion1_2<OT::Layout::SmallTypes> **)
                                                     (phVar23 + 0x80);
                                          if ((*(uint *)(phVar23 + 0x38) & 0xfffffffe) == 4) {
                                            if ((char)param_14 == '\0') {
                                              if ((*(uint *)(*(long *)(phVar23 + 0x70) + 4 +
                                                            uVar59 * 0x14) & uVar55) != 0) {
                                                iVar58 = (int)((ulong)((long)(short)uVar16 *
                                                                       *(long *)(*(long *)(local_298
                                                                                          + 0x10) +
                                                                                0x58) + 0x8000) >>
                                                              0x10);
                                                *(int *)(pGVar56 + uVar59 * 0x14) =
                                                     *(int *)(pGVar56 + uVar59 * 0x14) + iVar58;
                                                *(int *)(pGVar56 + uVar59 * 0x14 + 8) =
                                                     *(int *)(pGVar56 + uVar59 * 0x14 + 8) + iVar58;
                                              }
                                              goto LAB_00403d8d;
                                            }
                                            if (uVar16 == 0x8000) {
                                              pGVar56[uVar59 * 0x14 + 0x12] =
                                                   (GDEFVersion1_2<OT::Layout::SmallTypes>)0x0;
                                              *(undefined2 *)(pGVar56 + uVar59 * 0x14 + 0x10) = 0;
                                              *(undefined4 *)(pGVar56 + uVar59 * 0x14 + 0xc) = 0;
                                            }
                                            else if (pGVar56[uVar59 * 0x14 + 0x12] !=
                                                     (GDEFVersion1_2<OT::Layout::SmallTypes>)0x0) {
                                              *(int *)(pGVar56 + uVar59 * 0x14 + 0xc) =
                                                   *(int *)(pGVar56 + uVar59 * 0x14 + 0xc) +
                                                   (int)((ulong)((long)(short)uVar16 *
                                                                 *(long *)(*(long *)(local_298 +
                                                                                    0x10) + 0x60) +
                                                                0x8000) >> 0x10);
                                              phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8)
                                              ;
                                            }
                                          }
                                          else if ((char)param_14 == '\0') {
                                            if ((*(uint *)(*(long *)(phVar23 + 0x70) + 4 +
                                                          uVar59 * 0x14) & uVar55) != 0) {
                                              iVar58 = (int)((ulong)((long)(short)uVar16 *
                                                                     *(long *)(*(long *)(local_298 +
                                                                                        0x10) + 0x60
                                                                              ) + 0x8000) >> 0x10);
                                              *(int *)(pGVar56 + uVar59 * 0x14 + 4) =
                                                   *(int *)(pGVar56 + uVar59 * 0x14 + 4) + iVar58;
                                              *(int *)(pGVar56 + uVar59 * 0x14 + 0xc) =
                                                   *(int *)(pGVar56 + uVar59 * 0x14 + 0xc) + iVar58;
                                            }
LAB_00403d8d:
                                            param_14 = (ulong)bVar12;
                                          }
                                          else if (uVar16 == 0x8000) {
                                            pGVar56[uVar59 * 0x14 + 0x12] =
                                                 (GDEFVersion1_2<OT::Layout::SmallTypes>)0x0;
                                            *(undefined2 *)(pGVar56 + uVar59 * 0x14 + 0x10) = 0;
                                            *(undefined4 *)(pGVar56 + uVar59 * 0x14 + 8) = 0;
                                          }
                                          else if (pGVar56[uVar59 * 0x14 + 0x12] !=
                                                   (GDEFVersion1_2<OT::Layout::SmallTypes>)0x0) {
                                            *(int *)(pGVar56 + uVar59 * 0x14 + 8) =
                                                 *(int *)(pGVar56 + uVar59 * 0x14 + 8) +
                                                 (int)((ulong)((long)(short)uVar16 *
                                                               *(long *)(*(long *)(local_298 + 0x10)
                                                                        + 0x58) + 0x8000) >> 0x10);
                                            phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8);
                                          }
                                        }
                                        lVar38 = lVar38 + 2;
                                        phVar51 = local_260;
                                      } while (bVar22 == 0);
                                      goto LAB_00403f8e;
                                    }
                                  }
                                  local_260 = (hb_aat_apply_context_t *)
                                              ((ulong)phVar9 & 0xffffffff00000000);
                                  phVar51 = local_260;
                                }
                              }
LAB_00403f8e:
                              local_260 = phVar51;
                              uVar55 = *(uint *)(phVar23 + 0x5c);
                              if ((uVar55 == *(uint *)(phVar23 + 0x60)) ||
                                 (phVar23[0x58] == (hb_buffer_t)0x0)) break;
                              if (((*(byte *)((long)puVar60 + uVar40 * 4 + (ulong)uVar41 + 2) & 0x40
                                   ) == 0) ||
                                 (iVar58 = *(int *)(phVar23 + 200),
                                 *(int *)(phVar23 + 200) = iVar58 + -1, iVar58 < 1)) {
                                pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar36;
                                if (phVar23[0x5a] != (hb_buffer_t)0x0) {
                                  pvVar53 = *(void **)(phVar23 + 0x78);
                                  pvVar44 = *(void **)(phVar23 + 0x70);
                                  if ((pvVar53 == pvVar44) && (*(uint *)(phVar23 + 100) == uVar55))
                                  goto LAB_00403aeb;
                                  uVar55 = *(uint *)(phVar23 + 100) + 1;
                                  if ((uVar55 == 0) || (uVar55 < *(uint *)(phVar23 + 0x68))) {
                                    if (pvVar53 != pvVar44) goto LAB_0040405b;
                                  }
                                  else {
                                    uVar63 = hb_buffer_t::enlarge(phVar23,uVar55);
                                    if ((char)uVar63 == '\0') {
                                      hVar5 = phVar23[0x58];
                                      phVar24 = extraout_XMM0_Qa_16;
                                      goto joined_r0x0040410b;
                                    }
                                    pvVar44 = *(void **)(phVar23 + 0x70);
                                    pvVar53 = *(void **)(phVar23 + 0x78);
                                    pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                                              (ulong)uVar36;
                                    if (pvVar53 != pvVar44) goto LAB_0040405b;
                                  }
                                  pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar36;
                                  uVar55 = *(uint *)(phVar23 + 100);
                                  if (uVar55 + 1 <= *(int *)(phVar23 + 0x5c) + 1U)
                                  goto LAB_00404058;
                                  pvVar53 = *(void **)(phVar23 + 0x80);
                                  *(void **)(phVar23 + 0x78) = pvVar53;
                                  goto LAB_0040403b;
                                }
                                goto LAB_0040408e;
                              }
                              hVar5 = phVar23[0x58];
joined_r0x0040410b:
                              pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar36;
                              if (hVar5 == (hb_buffer_t)0x0) break;
                            } while( true );
                          }
                        }
                      }
                    }
                  }
                  break;
                case (hb_aat_apply_context_t)0x2:
                  if (((((*(byte *)(local_138 + 0xa8) & 1) != 0) &&
                       ((local_90 & local_c0._0_8_) != 0)) && ((uStack_88 & local_c0._8_8_) != 0))
                     && ((((local_80 & local_b0) != 0 && (((ulong)local_78 & local_c0._0_8_) != 0))
                         && ((((ulong)phStack_70 & local_c0._8_8_) != 0 &&
                             ((local_b0 & (ulong)local_68) != 0)))))) {
                    hVar3 = phVar62[4];
                    uVar55 = *(uint *)(local_138 + 0xa0);
                    bVar15 = hb_buffer_t::message
                                       (phVar24,param_2_00,param_3_00,param_4,param_5,param_6,
                                        param_7,param_8,local_120,local_130,"start kern",
                                        local_c0._0_8_,pGVar56,param_14,in_stack_fffffffffffffce8);
                    phVar24 = extraout_XMM0_Qa_11;
                    if (bVar15) {
                      if (((byte)phVar23[0x18] & 0x40) != 0) {
                        uVar36 = *(uint *)(phVar23 + 0x60);
                        phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 0x20);
                        if ((ulong)uVar36 != 0) {
                          lVar54 = *(long *)(phVar23 + 0x70);
                          if ((ulong)uVar36 - 1 < 3) {
                            uVar59 = 0;
                          }
                          else {
                            pbVar35 = (byte *)(lVar54 + 0x40);
                            uVar59 = 0;
                            do {
                              pbVar35[-0x3c] = pbVar35[-0x3c] | 2;
                              pbVar35[-0x28] = pbVar35[-0x28] | 2;
                              pbVar35[-0x14] = pbVar35[-0x14] | 2;
                              *pbVar35 = *pbVar35 | 2;
                              uVar59 = uVar59 + 4;
                              pbVar35 = pbVar35 + 0x50;
                            } while ((uVar36 & 0xfffffffc) != uVar59);
                          }
                          if ((ulong)(uVar36 & 3) != 0) {
                            lVar31 = 0;
                            do {
                              pbVar35 = (byte *)(lVar54 + uVar59 * 0x14 + 4 + lVar31);
                              *pbVar35 = *pbVar35 | 2;
                              lVar31 = lVar31 + 0x14;
                            } while ((ulong)(uVar36 & 3) * 0x14 != lVar31);
                          }
                        }
                      }
                      puVar17 = &_hb_NullPool;
                      OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                                ((hb_ot_apply_context_t *)&local_298,1,lVar38,(undefined4 *)phVar23,
                                 (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
                      local_150 = 0xffffffff;
                      local_275 = local_159;
                      if (local_210 != 0) {
                        local_275 = '\0';
                      }
                      uVar63 = 0;
                      pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                                CONCAT71((int7)((ulong)puVar17 >> 8),local_15b != '\0');
                      local_278 = local_210 == 1;
                      local_164 = 8;
                      local_288 = (hb_aat_apply_context_t *)&local_298;
                      local_258 = *(uint *)(local_1f8 + 0x60);
                      local_270 = (undefined1  [16])0x0;
                      local_260 = (hb_aat_apply_context_t *)0x0;
                      local_280[0] = 8;
                      local_277 = local_15a;
                      local_274 = 0;
                      local_230 = (undefined1  [16])0x0;
                      local_220 = 0;
                      local_238 = (bool)local_278 || local_15b != '\0';
                      local_240 = 0xffffffff00000008;
                      local_237 = 1;
                      local_234 = 0;
                      uVar36 = *(uint *)(phVar23 + 0x60);
                      phVar24 = (hb_aat_apply_context_t *)0xffffffff00000008;
                      local_280[1] = uVar55;
                      local_276 = local_278;
                      local_248 = local_288;
                      local_236 = local_278;
                      local_235 = local_275;
                      local_218 = local_258;
                      local_16c = uVar55;
                      if (uVar36 != 0) {
                        uVar47 = *(uint *)(phVar23 + 0x38);
                        phVar9 = *(hb_aat_apply_context_t **)(phVar23 + 0x70);
                        lVar54 = *(long *)(phVar23 + 0x80);
                        pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                        uVar63 = 0;
                        do {
                          while (uVar28 = (uint)pGVar56,
                                (*(uint *)(phVar9 + ((long)pGVar56 * 5 + 1) * 4) & uVar55) == 0) {
                            pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uVar28 + 1);
                            phVar24 = phVar9;
                            if (uVar36 <= uVar28 + 1) goto LAB_00404c9f;
                          }
                          phStack_290 = (hb_aat_apply_context_t *)CONCAT44(phStack_290._4_4_,uVar28)
                          ;
                          phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                          local_258 = *(uint *)(phVar24 + 0x60);
                          if (*(uint *)(phVar24 + 0x5c) == uVar28) {
                            local_274 = *(byte *)(*(long *)(phVar24 + 0x70) + 0xf +
                                                 (long)pGVar56 * 0x14);
                          }
                          else {
                            local_274 = 0;
                          }
                          if (local_275 == '\0') {
                            local_274 = 0;
                          }
                          iVar58 = local_258 - 1;
                          if ((int)uVar28 < iVar58) {
                            pGVar32 = pGVar56;
                            do {
                              uVar37 = (int)pGVar32 + 1;
                              uVar59 = (ulong)uVar37;
                              phStack_290 = (hb_aat_apply_context_t *)
                                            CONCAT44(phStack_290._4_4_,uVar37);
                              lVar31 = *(long *)(phVar24 + 0x70);
                              uVar16 = *(ushort *)(lVar31 + 0xc + uVar59 * 0x14);
                              phVar24 = (hb_aat_apply_context_t *)(ulong)uVar16;
                              if ((local_280[0] & uVar16 & 0xe) != 0) goto LAB_004047c4;
                              puVar61 = (uint *)(uVar59 * 0x14 + lVar31);
                              if ((uVar16 & 8) == 0) {
LAB_004046d0:
                                pbVar35 = (byte *)(uVar59 * 0x14 + 0xc + lVar31);
                                uVar16 = *(ushort *)(lVar31 + 0x10 + uVar59 * 0x14);
                                uVar26 = 0;
                                bVar15 = false;
                                if (((((uVar16 & 0x20) != 0) &&
                                     (bVar15 = false, (*pbVar35 & 0x10) == 0)) &&
                                    ((local_278 != '\0' ||
                                     (bVar15 = false, (uVar16 & 0x21f) != 0x201)))) &&
                                   ((local_277 != '\0' ||
                                    (bVar15 = false, (uVar16 & 0x11f) != 0x101)))) {
                                  bVar15 = (uVar16 & 0x40) == 0 || local_276 != '\0';
                                }
                                if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                  uVar26 = *(ushort *)local_260 << 8 | *(ushort *)local_260 >> 8;
                                }
                                phVar24 = local_260;
                                if (((*(uint *)(lVar31 + 4 + uVar59 * 0x14) & local_280[1]) != 0) &&
                                   ((local_274 == 0 || (local_274 == pbVar35[3])))) {
                                  if ((code *)local_270._0_8_ == (code *)0x0) {
                                    if (bVar15) goto LAB_004047c4;
                                  }
                                  else {
                    /* try { // try from 004047a4 to 0040482f has its CatchHandler @ 0040517c */
                                    cVar14 = (*(code *)local_270._0_8_)
                                                       (puVar61,uVar26,local_270._8_8_);
                                    uVar63 = extraout_XMM0_Qa_19;
                                    if (cVar14 == '\0') goto LAB_004047b6;
                                  }
                                  if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                    local_260 = local_260 + 2;
                                  }
                                  uVar37 = *(uint *)(phVar9 + (long)pGVar56 * 0x14);
                                  phVar24 = (hb_aat_apply_context_t *)(ulong)(uVar37 >> 4);
                                  if ((((local_90 >> ((ulong)phVar24 & 0x3f) & 1) != 0) &&
                                      ((uStack_88 >> ((ulong)uVar37 & 0x3f) & 1) != 0)) &&
                                     (phVar24 = (hb_aat_apply_context_t *)(ulong)(uVar37 >> 9),
                                     (local_80 >> ((ulong)(uVar37 >> 9) & 0x3f) & 1) != 0)) {
                                    uVar59 = (ulong)phStack_290 & 0xffffffff;
                                    uVar46 = *(uint *)(phVar9 + uVar59 * 0x14);
                                    phVar24 = (hb_aat_apply_context_t *)(ulong)(uVar46 >> 4);
                                    if (((((ulong)local_78 >> ((ulong)(uVar46 >> 4) & 0x3f) & 1) !=
                                          0) && (phVar24 = phStack_70,
                                                ((ulong)phStack_70 >> ((ulong)uVar46 & 0x3f) & 1) !=
                                                0)) &&
                                       (phVar24 = local_68,
                                       ((ulong)local_68 >> ((ulong)(uVar46 >> 9) & 0x3f) & 1) != 0))
                                    {
                                      uVar40 = (ulong)(ushort)(*(ushort *)(phVar62 + 10) << 8 |
                                                              *(ushort *)(phVar62 + 10) >> 8);
                                      uVar37 = uVar37 - (ushort)(*(ushort *)(phVar62 + uVar40) << 8
                                                                | *(ushort *)(phVar62 + uVar40) >> 8
                                                                );
                                      uVar45 = 0;
                                      uVar48 = 0;
                                      if (uVar37 < (ushort)(*(ushort *)(phVar62 + uVar40 + 2) << 8 |
                                                           *(ushort *)(phVar62 + uVar40 + 2) >> 8))
                                      {
                                        uVar48 = (uint)(ushort)(*(ushort *)
                                                                 (phVar62 +
                                                                 (ulong)uVar37 * 2 + uVar40 + 4) <<
                                                                8 | *(ushort *)
                                                                     (phVar62 +
                                                                     (ulong)uVar37 * 2 + uVar40 + 4)
                                                                    >> 8);
                                      }
                                      uVar40 = (ulong)(ushort)(*(ushort *)(phVar62 + 0xc) << 8 |
                                                              *(ushort *)(phVar62 + 0xc) >> 8);
                                      uVar46 = uVar46 - (ushort)(*(ushort *)(phVar62 + uVar40) << 8
                                                                | *(ushort *)(phVar62 + uVar40) >> 8
                                                                );
                                      if (uVar46 < (ushort)(*(ushort *)(phVar62 + uVar40 + 2) << 8 |
                                                           *(ushort *)(phVar62 + uVar40 + 2) >> 8))
                                      {
                                        uVar45 = (uint)(ushort)(*(ushort *)
                                                                 (phVar62 +
                                                                 (ulong)uVar46 * 2 + uVar40 + 4) <<
                                                                8 | *(ushort *)
                                                                     (phVar62 +
                                                                     (ulong)uVar46 * 2 + uVar40 + 4)
                                                                    >> 8);
                                      }
                                      uVar16 = *(ushort *)(phVar62 + 0xe) << 8 |
                                               *(ushort *)(phVar62 + 0xe) >> 8;
                                      phVar24 = phVar62 + uVar16;
                                      if (uVar45 + uVar48 < (uint)uVar16) {
                                        uVar37 = 0x3fffffff;
                                      }
                                      else {
                                        uVar37 = (uVar45 + uVar48) - (uint)uVar16 >> 1;
                                      }
                                      if (phVar24 + ((ulong)uVar37 * 2 - local_110._0_8_) + 2 <=
                                          (hb_aat_apply_context_t *)(ulong)local_100) {
                                        uVar16 = *(ushort *)(phVar24 + (ulong)uVar37 * 2);
                                        phVar24 = (hb_aat_apply_context_t *)(ulong)uVar16;
                                        if (uVar16 != 0) {
                                          lVar31 = (long)(short)(uVar16 << 8 | uVar16 >> 8);
                                          if ((uVar47 & 0xfffffffe) == 4) {
                                            uVar40 = lVar31 * *(long *)(lVar38 + 0x58) + 0x8000;
                                            iVar58 = (int)(uVar40 >> 0x10);
                                            if (((byte)hVar3 & 0x40) != 0) {
                                              *(int *)(lVar54 + 0xc + uVar59 * 0x14) = iVar58;
                                              goto LAB_00404aa0;
                                            }
                                            piVar2 = (int *)(lVar54 + (long)pGVar56 * 0x14);
                                            *piVar2 = *piVar2 + (iVar58 >> 1);
                                            uVar37 = iVar58 - (iVar58 >> 1);
                                            phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37;
                                            piVar2 = (int *)(lVar54 + uVar59 * 0x14);
                                            *piVar2 = *piVar2 + uVar37;
                                            piVar2 = (int *)(lVar54 + 8 + uVar59 * 0x14);
                                            *piVar2 = *piVar2 + uVar37;
                                          }
                                          else {
                                            uVar40 = lVar31 * *(long *)(lVar38 + 0x60) + 0x8000;
                                            iVar58 = (int)(uVar40 >> 0x10);
                                            if (((byte)hVar3 & 0x40) == 0) {
                                              piVar2 = (int *)(lVar54 + 4 + (long)pGVar56 * 0x14);
                                              *piVar2 = *piVar2 + (iVar58 >> 1);
                                              uVar37 = iVar58 - (iVar58 >> 1);
                                              phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37;
                                              piVar2 = (int *)(lVar54 + 4 + uVar59 * 0x14);
                                              *piVar2 = *piVar2 + uVar37;
                                              piVar2 = (int *)(lVar54 + 0xc + uVar59 * 0x14);
                                              *piVar2 = *piVar2 + uVar37;
                                            }
                                            else {
                                              *(int *)(lVar54 + 8 + uVar59 * 0x14) = iVar58;
LAB_00404aa0:
                                              phVar24 = (hb_aat_apply_context_t *)(uVar40 >> 0x10);
                                              phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8)
                                              ;
                                            }
                                          }
                                          uVar63 = hb_buffer_t::unsafe_to_break
                                                             (phVar23,uVar28,(uint)phStack_290 + 1);
                                        }
                                      }
                                    }
                                  }
                                  pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                                            ((ulong)phStack_290 & 0xffffffff);
                                  uVar28 = (uint)phStack_290;
                                  goto joined_r0x004049f9;
                                }
LAB_004047b6:
                                if (!bVar15) break;
                              }
                              else if ((local_280[0] & 0x10) == 0) {
                                if (((local_280[0] & 0xff00) == 0) ||
                                   (uVar37 = uVar16 & 0xff00,
                                   phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37,
                                   (local_280[0] & 0xff00) == uVar37)) goto LAB_004046d0;
                              }
                              else {
                                uVar18 = OT::GDEF::accelerator_t::mark_set_covers
                                                   (*(accelerator_t **)(local_288 + 0xf8),
                                                    local_280[0] >> 0x10,*puVar61);
                                uVar63 = extraout_XMM0_Qa_20;
                                if ((char)uVar18 != '\0') goto LAB_004046d0;
                              }
LAB_004047c4:
                              pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                                        ((ulong)phStack_290 & 0xffffffff);
                              if (iVar58 <= (int)(uint)phStack_290) break;
                              phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                            } while( true );
                          }
                          uVar28 = uVar28 + 1;
                          pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar28;
joined_r0x004049f9:
                        } while (uVar28 < uVar36);
                      }
LAB_00404c9f:
                    /* try { // try from 00404c9f to 00404cb1 has its CatchHandler @ 00405172 */
                      hb_buffer_t::message
                                (uVar63,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                                 param_8,phVar23,lVar38,"end kern",phVar24,pGVar56,param_14,
                                 in_stack_fffffffffffffce8);
                      goto LAB_00404128;
                    }
                  }
                  break;
                case (hb_aat_apply_context_t)0x3:
                  if ((*(byte *)(local_138 + 0xa8) & 1) != 0) {
                    hVar3 = phVar62[4];
                    uVar55 = *(uint *)(local_138 + 0xa0);
                    bVar15 = hb_buffer_t::message
                                       (phVar24,param_2_00,param_3_00,param_4,param_5,param_6,
                                        param_7,param_8,local_120,local_130,"start kern",
                                        CONCAT71(0x5e0c,hVar3),pGVar56,param_14,
                                        in_stack_fffffffffffffce8);
                    phVar24 = extraout_XMM0_Qa_12;
                    if (bVar15) {
                      if (((byte)phVar23[0x18] & 0x40) != 0) {
                        uVar36 = *(uint *)(phVar23 + 0x60);
                        phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 0x20);
                        if ((ulong)uVar36 != 0) {
                          lVar54 = *(long *)(phVar23 + 0x70);
                          if ((ulong)uVar36 - 1 < 3) {
                            uVar59 = 0;
                          }
                          else {
                            pbVar35 = (byte *)(lVar54 + 0x40);
                            uVar59 = 0;
                            do {
                              pbVar35[-0x3c] = pbVar35[-0x3c] | 2;
                              pbVar35[-0x28] = pbVar35[-0x28] | 2;
                              pbVar35[-0x14] = pbVar35[-0x14] | 2;
                              *pbVar35 = *pbVar35 | 2;
                              uVar59 = uVar59 + 4;
                              pbVar35 = pbVar35 + 0x50;
                            } while ((uVar36 & 0xfffffffc) != uVar59);
                          }
                          if ((ulong)(uVar36 & 3) != 0) {
                            lVar31 = 0;
                            do {
                              pbVar35 = (byte *)(lVar54 + uVar59 * 0x14 + 4 + lVar31);
                              *pbVar35 = *pbVar35 | 2;
                              lVar31 = lVar31 + 0x14;
                            } while ((ulong)(uVar36 & 3) * 0x14 != lVar31);
                          }
                        }
                      }
                      puVar17 = &_hb_NullPool;
                      OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                                ((hb_ot_apply_context_t *)&local_298,1,lVar38,(undefined4 *)phVar23,
                                 (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
                      local_150 = 0xffffffff;
                      local_275 = local_159;
                      if (local_210 != 0) {
                        local_275 = '\0';
                      }
                      uVar63 = 0;
                      pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                                CONCAT71((int7)((ulong)puVar17 >> 8),local_15b != '\0');
                      local_278 = local_210 == 1;
                      local_164 = 8;
                      local_288 = (hb_aat_apply_context_t *)&local_298;
                      local_258 = *(uint *)(local_1f8 + 0x60);
                      local_270 = (undefined1  [16])0x0;
                      local_260 = (hb_aat_apply_context_t *)0x0;
                      local_280[0] = 8;
                      local_277 = local_15a;
                      local_274 = 0;
                      local_230 = (undefined1  [16])0x0;
                      local_220 = 0;
                      local_238 = (bool)local_278 || local_15b != '\0';
                      phVar24 = (hb_aat_apply_context_t *)0xffffffff00000008;
                      local_240 = 0xffffffff00000008;
                      local_237 = 1;
                      local_234 = 0;
                      uVar36 = *(uint *)(phVar23 + 0x60);
                      local_280[1] = uVar55;
                      local_276 = local_278;
                      local_248 = local_288;
                      local_236 = local_278;
                      local_235 = local_275;
                      local_218 = local_258;
                      local_16c = uVar55;
                      if (uVar36 != 0) {
                        uVar47 = *(uint *)(phVar23 + 0x38);
                        phVar9 = *(hb_aat_apply_context_t **)(phVar23 + 0x70);
                        phVar51 = *(hb_aat_apply_context_t **)(phVar23 + 0x80);
                        uVar59 = 0;
                        uVar63 = 0;
                        do {
                          uVar28 = (uint)uVar59;
                          if ((*(uint *)(phVar9 + (uVar59 * 5 + 1) * 4) & uVar55) == 0) {
                            uVar40 = (ulong)(uVar28 + 1);
                            phVar24 = phVar9;
                          }
                          else {
                            phStack_290 = (hb_aat_apply_context_t *)
                                          CONCAT44(phStack_290._4_4_,uVar28);
                            phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                            local_258 = *(uint *)(phVar24 + 0x60);
                            if (*(uint *)(phVar24 + 0x5c) == uVar28) {
                              local_274 = *(byte *)(*(long *)(phVar24 + 0x70) + 0xf + uVar59 * 0x14)
                              ;
                            }
                            else {
                              local_274 = 0;
                            }
                            if (local_275 == '\0') {
                              local_274 = 0;
                            }
                            iVar58 = local_258 - 1;
                            if ((int)uVar28 < iVar58) {
                              uVar40 = uVar59;
                              do {
                                uVar37 = (int)uVar40 + 1;
                                uVar40 = (ulong)uVar37;
                                phStack_290 = (hb_aat_apply_context_t *)
                                              CONCAT44(phStack_290._4_4_,uVar37);
                                lVar54 = *(long *)(phVar24 + 0x70);
                                uVar16 = *(ushort *)(lVar54 + 0xc + uVar40 * 0x14);
                                phVar24 = (hb_aat_apply_context_t *)(ulong)uVar16;
                                if ((local_280[0] & uVar16 & 0xe) != 0) goto LAB_004036e2;
                                puVar61 = (uint *)(uVar40 * 0x14 + lVar54);
                                if ((uVar16 & 8) == 0) {
LAB_004035f0:
                                  pbVar35 = (byte *)(uVar40 * 0x14 + 0xc + lVar54);
                                  uVar16 = *(ushort *)(lVar54 + 0x10 + uVar40 * 0x14);
                                  uVar26 = 0;
                                  bVar15 = false;
                                  if (((((uVar16 & 0x20) != 0) &&
                                       (bVar15 = false, (*pbVar35 & 0x10) == 0)) &&
                                      ((local_278 != '\0' ||
                                       (bVar15 = false, (uVar16 & 0x21f) != 0x201)))) &&
                                     ((local_277 != '\0' ||
                                      (bVar15 = false, (uVar16 & 0x11f) != 0x101)))) {
                                    bVar15 = (uVar16 & 0x40) == 0 || local_276 != '\0';
                                  }
                                  if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                    uVar26 = *(ushort *)local_260 << 8 | *(ushort *)local_260 >> 8;
                                  }
                                  phVar24 = local_260;
                                  if (((*(uint *)(lVar54 + 4 + uVar40 * 0x14) & local_280[1]) != 0)
                                     && ((local_274 == 0 || (local_274 == pbVar35[3])))) {
                                    if ((code *)local_270._0_8_ == (code *)0x0) {
                                      if (bVar15) goto LAB_004036e2;
                                    }
                                    else {
                    /* try { // try from 004036cb to 00403741 has its CatchHandler @ 0040518d */
                                      cVar14 = (*(code *)local_270._0_8_)
                                                         (puVar61,uVar26,local_270._8_8_);
                                      uVar63 = extraout_XMM0_Qa_13;
                                      if (cVar14 == '\0') goto LAB_004036d8;
                                    }
                                    if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                      local_260 = local_260 + 2;
                                    }
                                    uVar40 = (ulong)phStack_290 & 0xffffffff;
                                    pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(uVar40 * 5)
                                    ;
                                    param_14 = (ulong)(byte)phVar62[10];
                                    uVar16 = *(ushort *)(phVar62 + 8) << 8 |
                                             *(ushort *)(phVar62 + 8) >> 8;
                                    hVar4 = phVar62[0xc];
                                    if (*(uint *)(phVar9 + uVar59 * 0x14) < (uint)uVar16) {
                                      phVar57 = phVar62 + (ulong)*(uint *)(phVar9 + uVar59 * 0x14) +
                                                          param_14 * 2 + 0xe;
                                    }
                                    else {
                                      phVar57 = (hb_aat_apply_context_t *)&_hb_NullPool;
                                    }
                                    lVar54 = (ulong)uVar16 + param_14 * 2 + 0xe;
                                    if (*(uint *)(phVar9 + uVar40 * 0x14) < (uint)uVar16) {
                                      phVar24 = phVar62 + (ulong)*(uint *)(phVar9 + uVar40 * 0x14) +
                                                          lVar54;
                                    }
                                    else {
                                      phVar24 = (hb_aat_apply_context_t *)&_hb_NullPool;
                                    }
                                    if ((byte)phVar62[0xb] <= (byte)*phVar57) goto LAB_00403774;
                                    hVar6 = *phVar24;
                                    phVar24 = (hb_aat_apply_context_t *)
                                              CONCAT71((int7)((ulong)phVar24 >> 8),hVar6);
                                    if ((byte)hVar4 <= (byte)hVar6) goto LAB_00403774;
                                    uVar37 = (uint)(byte)hVar4;
                                    lVar31 = (ulong)(byte)*phVar57 * (long)(ulong)uVar37 +
                                             (ulong)(byte)hVar6;
                                    if ((uint)lVar31 < (byte)phVar62[0xb] * uVar37) {
                                      hVar4 = phVar62[lVar31 + (ulong)uVar16 + lVar54];
                                    }
                                    else {
                                      hVar4 = _hb_NullPool._0_1_;
                                    }
                                    uVar16 = (ushort)_hb_NullPool;
                                    if ((byte)hVar4 < (byte)phVar62[10]) {
                                      uVar16 = *(ushort *)(phVar62 + (ulong)(byte)hVar4 * 2 + 0xe);
                                    }
                                    phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37;
                                    if (uVar16 != 0) {
                                      lVar54 = (long)(short)(uVar16 << 8 | uVar16 >> 8);
                                      if ((uVar47 & 0xfffffffe) == 4) {
                                        iVar58 = (int)((ulong)(lVar54 * *(long *)(lVar38 + 0x58) +
                                                              0x8000) >> 0x10);
                                        if (((byte)hVar3 & 0x40) != 0) {
                                          *(int *)(phVar51 + (uVar40 * 5 + 3) * 4) = iVar58;
                                          goto LAB_0040395d;
                                        }
                                        uVar37 = iVar58 >> 1;
                                        *(uint *)(phVar51 + uVar59 * 0x14) =
                                             *(int *)(phVar51 + uVar59 * 0x14) + uVar37;
                                        *(uint *)(phVar51 + uVar40 * 0x14) =
                                             *(int *)(phVar51 + uVar40 * 0x14) + (iVar58 - uVar37);
                                        *(uint *)(phVar51 + (uVar40 * 5 + 2) * 4) =
                                             *(int *)(phVar51 + (uVar40 * 5 + 2) * 4) +
                                             (iVar58 - uVar37);
                                        phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37;
                                      }
                                      else {
                                        iVar58 = (int)((ulong)(lVar54 * *(long *)(lVar38 + 0x60) +
                                                              0x8000) >> 0x10);
                                        if (((byte)hVar3 & 0x40) == 0) {
                                          uVar37 = iVar58 >> 1;
                                          phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37;
                                          *(uint *)(phVar51 + (uVar59 * 5 + 1) * 4) =
                                               *(int *)(phVar51 + (uVar59 * 5 + 1) * 4) + uVar37;
                                          *(uint *)(phVar51 + (uVar40 * 5 + 1) * 4) =
                                               *(int *)(phVar51 + (uVar40 * 5 + 1) * 4) +
                                               (iVar58 - uVar37);
                                          *(uint *)(phVar51 + (uVar40 * 5 + 3) * 4) =
                                               *(int *)(phVar51 + (uVar40 * 5 + 3) * 4) +
                                               (iVar58 - uVar37);
                                        }
                                        else {
                                          *(int *)(phVar51 + (uVar40 * 5 + 2) * 4) = iVar58;
LAB_0040395d:
                                          phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8);
                                          phVar24 = phVar51;
                                        }
                                      }
                                      uVar63 = hb_buffer_t::unsafe_to_break
                                                         (phVar23,uVar28,(uint)phStack_290 + 1);
                                      uVar40 = (ulong)phStack_290 & 0xffffffff;
                                    }
                                    goto LAB_00403526;
                                  }
LAB_004036d8:
                                  if (!bVar15) break;
                                }
                                else if ((local_280[0] & 0x10) == 0) {
                                  if (((local_280[0] & 0xff00) == 0) ||
                                     (uVar37 = uVar16 & 0xff00,
                                     phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37,
                                     (local_280[0] & 0xff00) == uVar37)) goto LAB_004035f0;
                                }
                                else {
                                  uVar18 = OT::GDEF::accelerator_t::mark_set_covers
                                                     (*(accelerator_t **)(local_288 + 0xf8),
                                                      local_280[0] >> 0x10,*puVar61);
                                  uVar63 = extraout_XMM0_Qa_14;
                                  if ((char)uVar18 != '\0') goto LAB_004035f0;
                                }
LAB_004036e2:
                                uVar40 = (ulong)phStack_290 & 0xffffffff;
                                if (iVar58 <= (int)(uint)phStack_290) break;
                                phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                              } while( true );
                            }
                            uVar40 = (ulong)(uVar28 + 1);
LAB_00403774:
                          }
LAB_00403526:
                          uVar59 = uVar40;
                        } while ((uint)uVar40 < uVar36);
                      }
                    /* try { // try from 00404112 to 00404127 has its CatchHandler @ 0040517a */
                      hb_buffer_t::message
                                (uVar63,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                                 param_8,phVar23,lVar38,"end kern",phVar24,pGVar56,param_14,
                                 in_stack_fffffffffffffce8);
                      goto LAB_00404128;
                    }
                  }
                }
              }
              local_100 = *(uint *)(local_e8 + 0x18);
              local_110._8_8_ = *(long *)(local_e8 + 0x10) + (ulong)local_100;
              local_110._0_8_ = *(long *)(local_e8 + 0x10);
              if ((uVar34 & 0xfffffffd) == 5) {
                uVar34 = *(uint *)(local_120 + 0x60);
                if (1 < uVar34) {
                  puVar30 = *(ulong **)(local_120 + 0x70);
                  uVar59 = (ulong)(uVar34 - 1);
                  puVar50 = (ulong *)((long)puVar30 + uVar59 * 0x14);
                  uVar40 = 0;
                  do {
                    uVar59 = uVar59 - 1;
                    uVar39 = puVar50[2];
                    local_288 = (hb_aat_apply_context_t *)CONCAT44(local_288._4_4_,(int)uVar39);
                    phVar24 = (hb_aat_apply_context_t *)*puVar50;
                    phStack_290 = (hb_aat_apply_context_t *)puVar50[1];
                    *(int *)(puVar50 + 2) = (int)puVar30[2];
                    uVar43 = puVar30[1];
                    *puVar50 = *puVar30;
                    puVar50[1] = uVar43;
                    *(int *)(puVar30 + 2) = (int)uVar39;
                    *puVar30 = (ulong)phVar24;
                    puVar30[1] = (ulong)phStack_290;
                    uVar40 = uVar40 + 1;
                    puVar30 = (ulong *)((long)puVar30 + 0x14);
                    puVar50 = (ulong *)((long)puVar50 + -0x14);
                    local_298 = phVar24;
                  } while (uVar40 < (uVar59 & 0xffffffff));
                }
                if (local_120[0x5b] != (hb_buffer_t)0x0) {
                  if (*(uint *)(local_120 + 0x60) < uVar34) {
                    uVar34 = *(uint *)(local_120 + 0x60);
                  }
                  if (1 < uVar34) {
                    puVar30 = *(ulong **)(local_120 + 0x80);
                    uVar59 = (ulong)(uVar34 - 1);
                    puVar50 = (ulong *)((long)puVar30 + uVar59 * 0x14);
                    uVar40 = 0;
                    do {
                      uVar59 = uVar59 - 1;
                      uVar39 = puVar50[2];
                      local_288 = (hb_aat_apply_context_t *)CONCAT44(local_288._4_4_,(int)uVar39);
                      phVar24 = (hb_aat_apply_context_t *)*puVar50;
                      phStack_290 = (hb_aat_apply_context_t *)puVar50[1];
                      *(int *)(puVar50 + 2) = (int)puVar30[2];
                      uVar43 = puVar30[1];
                      *puVar50 = *puVar30;
                      puVar50[1] = uVar43;
                      *(int *)(puVar30 + 2) = (int)uVar39;
                      *puVar30 = (ulong)phVar24;
                      puVar30[1] = (ulong)phStack_290;
                      uVar40 = uVar40 + 1;
                      puVar30 = (ulong *)((long)puVar30 + 0x14);
                      puVar50 = (ulong *)((long)puVar50 + -0x14);
                      local_298 = phVar24;
                    } while (uVar40 < (uVar59 & 0xffffffff));
                  }
                }
              }
                    /* try { // try from 004029bb to 00402a44 has its CatchHandler @ 004051d7 */
              hb_buffer_t::message
                        (phVar24,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                         local_120,local_130,"end subtable %u",(ulong)local_5c,pGVar56,param_14,
                         in_stack_fffffffffffffce8);
              uVar59 = local_50;
              uVar40 = local_148;
              auVar65 = extraout_XMM0_02;
            }
          }
        }
        uVar63 = auVar65._0_8_;
        uVar34 = *(uint *)phVar62;
        phVar62 = phVar62 + (uVar34 >> 0x18 | (uVar34 & 0xff0000) >> 8 | (uVar34 & 0xff00) << 8 |
                            uVar34 << 0x18);
        local_5c = local_5c + 1;
        phVar23 = (hb_buffer_t *)(ulong)local_5c;
        uVar40 = uVar40 + 1;
      } while (uVar40 != uVar59);
    }
  }
  else if (uVar16 == 0) {
    uVar34 = *(uint *)(local_120 + 0x60);
    param_14 = (ulong)uVar34;
    if (((byte)local_120[0x18] & 0x40) == 0) {
LAB_0040000b:
      if (uVar34 < 0x20) {
        if (param_14 == 0) {
          local_b0 = 0;
          local_c0._8_8_ = 0;
          phVar23 = (hb_buffer_t *)0x0;
        }
        else {
          puVar61 = *(uint **)(local_120 + 0x70);
          uVar55 = uVar34 - 1;
          pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar55;
          puVar29 = puVar61;
          if (uVar55 < 3) {
            phVar23 = (hb_buffer_t *)0x0;
          }
          else {
            uVar36 = uVar34 & 0xfffffffc;
            phVar23 = (hb_buffer_t *)0x0;
            do {
              phVar23 = (hb_buffer_t *)
                        ((ulong)phVar23 | 1L << ((ulong)(*puVar29 >> 4) & 0x3f) |
                         1L << ((ulong)(puVar29[5] >> 4) & 0x3f) |
                         1L << ((ulong)(puVar29[10] >> 4) & 0x3f) |
                        1L << ((ulong)(puVar29[0xf] >> 4) & 0x3f));
              puVar29 = puVar29 + 0x14;
              uVar36 = uVar36 - 4;
            } while (uVar36 != 0);
          }
          if ((uVar34 & 3) != 0) {
            lVar38 = 0;
            do {
              phVar23 = (hb_buffer_t *)
                        ((ulong)phVar23 |
                        1L << ((ulong)(*(uint *)((long)puVar29 + lVar38) >> 4) & 0x3f));
              lVar38 = lVar38 + 0x14;
            } while ((uVar34 & 3) * 0x14 != (int)lVar38);
          }
          puVar29 = puVar61;
          if (uVar55 < 3) {
            local_c0._8_8_ = 0;
          }
          else {
            uVar36 = uVar34 & 0xfffffffc;
            local_c0._8_8_ = 0;
            do {
              local_c0._8_8_ =
                   local_c0._8_8_ | 1L << ((ulong)(byte)*puVar29 & 0x3f) |
                   1L << ((ulong)(byte)puVar29[5] & 0x3f) | 1L << ((ulong)(byte)puVar29[10] & 0x3f)
                   | 1L << ((ulong)(byte)puVar29[0xf] & 0x3f);
              puVar29 = puVar29 + 0x14;
              uVar36 = uVar36 - 4;
            } while (uVar36 != 0);
          }
          if ((uVar34 & 3) != 0) {
            lVar38 = 0;
            do {
              local_c0._8_8_ =
                   local_c0._8_8_ | 1L << ((ulong)*(byte *)((long)puVar29 + lVar38) & 0x3f);
              lVar38 = lVar38 + 0x14;
            } while ((uVar34 & 3) * 0x14 != (int)lVar38);
          }
          if (uVar55 < 3) {
            local_b0 = 0;
          }
          else {
            uVar55 = uVar34 & 0xfffffffc;
            local_b0 = 0;
            do {
              local_b0 = local_b0 | 1L << ((ulong)(*puVar61 >> 9) & 0x3f) |
                         1L << ((ulong)(puVar61[5] >> 9) & 0x3f) |
                         1L << ((ulong)(puVar61[10] >> 9) & 0x3f) |
                         1L << ((ulong)(puVar61[0xf] >> 9) & 0x3f);
              puVar61 = puVar61 + 0x14;
              uVar55 = uVar55 - 4;
            } while (uVar55 != 0);
          }
          if ((uVar34 & 3) != 0) {
            param_14 = (ulong)(uVar34 & 3) * 4;
            lVar38 = 0;
            do {
              local_b0 = local_b0 | 1L << ((ulong)(*(uint *)((long)puVar61 + lVar38) >> 9) & 0x3f);
              lVar38 = lVar38 + 0x14;
            } while ((uVar34 & 3) * 0x14 != (int)lVar38);
          }
        }
        goto LAB_00400364;
      }
      auVar64._8_4_ = 0xffffffff;
      auVar64._0_8_ = 0xffffffffffffffff;
      auVar64._12_4_ = 0xffffffff;
      uVar63 = 0xffffffffffffffff;
      local_b0 = 0xffffffffffffffff;
      uVar16 = puVar60[1];
      local_c0 = auVar64;
    }
    else {
      local_120[0xc0] = (hb_buffer_t)((byte)local_120[0xc0] | 0x20);
      if (param_14 != 0) {
        phVar23 = *(hb_buffer_t **)(local_120 + 0x70);
        if (param_14 - 1 < 3) {
          uVar59 = 0;
        }
        else {
          phVar20 = phVar23 + 0x40;
          uVar59 = 0;
          do {
            phVar20[-0x3c] = (hb_buffer_t)((byte)phVar20[-0x3c] | 2);
            phVar20[-0x28] = (hb_buffer_t)((byte)phVar20[-0x28] | 2);
            phVar20[-0x14] = (hb_buffer_t)((byte)phVar20[-0x14] | 2);
            *phVar20 = (hb_buffer_t)((byte)*phVar20 | 2);
            uVar59 = uVar59 + 4;
            phVar20 = phVar20 + 0x50;
          } while ((uVar34 & 0xfffffffc) != uVar59);
        }
        if ((ulong)(uVar34 & 3) != 0) {
          phVar20 = phVar23 + uVar59 * 0x14 + 4;
          phVar23 = (hb_buffer_t *)((ulong)(uVar34 & 3) * 0x14);
          phVar33 = (hb_buffer_t *)0x0;
          do {
            phVar20[(long)phVar33] = (hb_buffer_t)((byte)phVar20[(long)phVar33] | 2);
            phVar33 = phVar33 + 0x14;
          } while (phVar23 != phVar33);
        }
        goto LAB_0040000b;
      }
      local_b0 = 0;
      local_c0._8_8_ = 0;
      phVar23 = (hb_buffer_t *)0x0;
LAB_00400364:
      local_c0._0_8_ = phVar23;
      uVar16 = puVar60[1];
      auVar64 = extraout_XMM0;
    }
    local_5c = 0;
    if (uVar16 != 0) {
      local_5c = 0;
      uVar16 = uVar16 << 8 | uVar16 >> 8;
      phVar62 = (hb_aat_apply_context_t *)(puVar60 + 2);
      local_50 = (ulong)(uVar16 - 1);
      uVar59 = (ulong)(uint)uVar16;
      if (uVar16 < 2) {
        uVar59 = 1;
      }
      phVar23 = (hb_buffer_t *)0x0;
      uVar40 = 0;
      local_58 = 0;
      do {
        uVar34 = *(uint *)(local_120 + 0x38);
        if (((uVar34 & 0xfffffffe) != 4) != (bool)((byte)phVar62[5] & 1)) {
                    /* try { // try from 004003f5 to 00400402 has its CatchHandler @ 004051db */
          bVar13 = hb_buffer_t::message
                             (auVar64._0_8_,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                              param_8,local_120,local_130,"start subtable %u",phVar23,pGVar56,
                              param_14,in_stack_fffffffffffffce8);
          phVar23 = local_120;
          lVar38 = local_130;
          auVar64 = extraout_XMM0_00;
          if (bVar13) {
            if (((local_58 & 1) == 0) && (((byte)phVar62[5] & 4) != 0)) {
              pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uVar34 & 0xfffffffd);
              uVar55 = *(uint *)(local_120 + 0x60);
              local_58 = CONCAT71((int7)((ulong)extraout_RDX >> 8),1);
              if (uVar55 != 0) {
                lVar54 = *(long *)(local_120 + 0x80);
                if (uVar55 == 1) {
                  uVar43 = 0;
                }
                else {
                  puVar49 = (undefined1 *)(lVar54 + 0x26);
                  uVar43 = 0;
                  do {
                    puVar49[-0x14] = 2;
                    *(ushort *)(puVar49 + -0x16) =
                         (ushort)((*(uint *)(local_120 + 0x38) & 0xfffffffd) != 4) * 2 + -1;
                    *puVar49 = 2;
                    *(ushort *)(puVar49 + -2) =
                         (ushort)((*(uint *)(local_120 + 0x38) & 0xfffffffd) != 4) * 2 + -1;
                    uVar43 = uVar43 + 2;
                    puVar49 = puVar49 + 0x28;
                  } while ((uVar55 & 0xfffffffe) != uVar43);
                }
                if ((uVar55 & 1) != 0) {
                  *(undefined1 *)(lVar54 + 0x12 + uVar43 * 0x14) = 2;
                  *(ushort *)(lVar54 + 0x10 + uVar43 * 0x14) =
                       (ushort)((*(uint *)(local_120 + 0x38) & 0xfffffffd) != 4) * 2 + -1;
                }
              }
            }
            local_148 = CONCAT44(local_148._4_4_,uVar34) & 0xfffffffffffffffd;
            if ((uVar34 & 0xfffffffd) == 5) {
              uVar34 = *(uint *)(local_120 + 0x60);
              if (1 < uVar34) {
                puVar30 = *(ulong **)(local_120 + 0x70);
                uVar43 = (ulong)(uVar34 - 1);
                puVar50 = (ulong *)((long)puVar30 + uVar43 * 0x14);
                uVar39 = 0;
                do {
                  uVar43 = uVar43 - 1;
                  uVar11 = puVar50[2];
                  local_288 = (hb_aat_apply_context_t *)CONCAT44(local_288._4_4_,(int)uVar11);
                  local_298 = (hb_aat_apply_context_t *)*puVar50;
                  phStack_290 = (hb_aat_apply_context_t *)puVar50[1];
                  *(int *)(puVar50 + 2) = (int)puVar30[2];
                  uVar25 = puVar30[1];
                  *puVar50 = *puVar30;
                  puVar50[1] = uVar25;
                  *(int *)(puVar30 + 2) = (int)uVar11;
                  *puVar30 = (ulong)local_298;
                  puVar30[1] = (ulong)phStack_290;
                  uVar39 = uVar39 + 1;
                  puVar30 = (ulong *)((long)puVar30 + 0x14);
                  puVar50 = (ulong *)((long)puVar50 + -0x14);
                } while (uVar39 < (uVar43 & 0xffffffff));
              }
              if (local_120[0x5b] != (hb_buffer_t)0x0) {
                if (*(uint *)(local_120 + 0x60) < uVar34) {
                  uVar34 = *(uint *)(local_120 + 0x60);
                }
                if (1 < uVar34) {
                  puVar30 = *(ulong **)(local_120 + 0x80);
                  uVar43 = (ulong)(uVar34 - 1);
                  puVar50 = (ulong *)((long)puVar30 + uVar43 * 0x14);
                  uVar39 = 0;
                  do {
                    uVar43 = uVar43 - 1;
                    uVar11 = puVar50[2];
                    local_288 = (hb_aat_apply_context_t *)CONCAT44(local_288._4_4_,(int)uVar11);
                    local_298 = (hb_aat_apply_context_t *)*puVar50;
                    phStack_290 = (hb_aat_apply_context_t *)puVar50[1];
                    *(int *)(puVar50 + 2) = (int)puVar30[2];
                    uVar25 = puVar30[1];
                    *puVar50 = *puVar30;
                    puVar50[1] = uVar25;
                    *(int *)(puVar30 + 2) = (int)uVar11;
                    *puVar30 = (ulong)local_298;
                    puVar30[1] = (ulong)phStack_290;
                    uVar39 = uVar39 + 1;
                    puVar30 = (ulong *)((long)puVar30 + 0x14);
                    puVar50 = (ulong *)((long)puVar50 + -0x14);
                  } while (uVar39 < (uVar43 & 0xffffffff));
                }
              }
            }
            if (uVar40 < *(uint *)(paVar21 + 0xc)) {
              puVar50 = (ulong *)(*(long *)(paVar21 + 0x10) + uVar40 * 0x30);
            }
            else {
              puVar50 = (ulong *)&_hb_NullPool;
            }
            local_80 = puVar50[2];
            local_90 = *puVar50;
            uStack_88 = puVar50[1];
            if (uVar40 < *(uint *)(paVar21 + 0xc)) {
              puVar17 = (undefined4 *)(uVar40 * 0x30 + *(long *)(paVar21 + 0x10));
            }
            else {
              puVar17 = &_hb_NullPool;
            }
            local_68 = *(hb_aat_apply_context_t **)(puVar17 + 10);
            local_78 = *(hb_aat_apply_context_t **)(puVar17 + 6);
            phStack_70 = *(hb_aat_apply_context_t **)(puVar17 + 8);
            local_110._0_8_ = *(undefined8 *)(local_e8 + 0x10);
            local_100 = *(uint *)(local_e8 + 0x18);
            local_110._8_8_ = local_110._0_8_ + (ulong)local_100;
            if ((uVar40 < local_50) && (phVar62 != (hb_aat_apply_context_t *)0x0)) {
              uVar43 = local_110._8_8_ - (long)phVar62;
              if (((ulong)local_110._0_8_ <= phVar62) &&
                 (phVar62 <= (ulong)local_110._8_8_ && uVar43 != 0)) {
                uVar39 = (ulong)(ushort)(*(ushort *)(phVar62 + 2) << 8 |
                                        *(ushort *)(phVar62 + 2) >> 8);
                if (uVar39 < uVar43) {
                  uVar43 = uVar39;
                }
                local_110._8_8_ = phVar62 + uVar43;
                local_110._0_8_ = phVar62;
                local_100 = (uint)uVar43;
                goto LAB_00400706;
              }
              phVar24 = (hb_aat_apply_context_t *)0x0;
              local_110 = (undefined1  [16])0x0;
              local_100 = 0;
              hVar3 = phVar62[4];
            }
            else {
LAB_00400706:
              hVar3 = phVar62[4];
              phVar24 = local_78;
            }
            if ((byte)hVar3 < 4) {
              switch(hVar3) {
              case (hb_aat_apply_context_t)0x0:
                if ((((((*(byte *)(local_138 + 0xa8) & 1) != 0) &&
                      ((local_90 & local_c0._0_8_) != 0)) && ((uStack_88 & local_c0._8_8_) != 0)) &&
                    (((local_80 & local_b0) != 0 && (((ulong)local_78 & local_c0._0_8_) != 0)))) &&
                   ((((ulong)phStack_70 & local_c0._8_8_) != 0 &&
                    ((local_b0 & (ulong)local_68) != 0)))) {
                  hVar3 = phVar62[5];
                  uVar34 = *(uint *)(local_138 + 0xa0);
                    /* try { // try from 004007cc to 00400c83 has its CatchHandler @ 00405188 */
                  bVar13 = hb_buffer_t::message
                                     (phVar24,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                                      param_8,local_120,local_130,"start kern",local_c0._0_8_,
                                      pGVar56,param_14,in_stack_fffffffffffffce8);
                  phVar24 = extraout_XMM0_Qa;
                  if (bVar13) {
                    if (((byte)phVar23[0x18] & 0x40) != 0) {
                      uVar55 = *(uint *)(phVar23 + 0x60);
                      phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 0x20);
                      if ((ulong)uVar55 != 0) {
                        lVar54 = *(long *)(phVar23 + 0x70);
                        if ((ulong)uVar55 - 1 < 3) {
                          uVar43 = 0;
                        }
                        else {
                          pbVar35 = (byte *)(lVar54 + 0x40);
                          uVar43 = 0;
                          do {
                            pbVar35[-0x3c] = pbVar35[-0x3c] | 2;
                            pbVar35[-0x28] = pbVar35[-0x28] | 2;
                            pbVar35[-0x14] = pbVar35[-0x14] | 2;
                            *pbVar35 = *pbVar35 | 2;
                            uVar43 = uVar43 + 4;
                            pbVar35 = pbVar35 + 0x50;
                          } while ((uVar55 & 0xfffffffc) != uVar43);
                        }
                        if ((ulong)(uVar55 & 3) != 0) {
                          lVar31 = 0;
                          do {
                            pbVar35 = (byte *)(lVar54 + uVar43 * 0x14 + 4 + lVar31);
                            *pbVar35 = *pbVar35 | 2;
                            lVar31 = lVar31 + 0x14;
                          } while ((ulong)(uVar55 & 3) * 0x14 != lVar31);
                        }
                      }
                    }
                    puVar17 = &_hb_NullPool;
                    OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                              ((hb_ot_apply_context_t *)&local_298,1,lVar38,(undefined4 *)phVar23,
                               (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
                    local_150 = 0xffffffff;
                    local_275 = local_159;
                    if (local_210 != 0) {
                      local_275 = '\0';
                    }
                    uVar63 = 0;
                    pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                              CONCAT71((int7)((ulong)puVar17 >> 8),local_15b != '\0');
                    local_278 = local_210 == 1;
                    local_164 = 8;
                    local_288 = (hb_aat_apply_context_t *)&local_298;
                    local_258 = *(uint *)(local_1f8 + 0x60);
                    local_270 = (undefined1  [16])0x0;
                    local_260 = (hb_aat_apply_context_t *)0x0;
                    local_280[0] = 8;
                    local_277 = local_15a;
                    local_274 = 0;
                    local_230 = (undefined1  [16])0x0;
                    local_220 = 0;
                    local_238 = (bool)local_278 || local_15b != '\0';
                    phVar24 = (hb_aat_apply_context_t *)0xffffffff00000008;
                    local_240 = 0xffffffff00000008;
                    local_237 = 1;
                    local_234 = 0;
                    uVar55 = *(uint *)(phVar23 + 0x60);
                    local_280[1] = uVar34;
                    local_276 = local_278;
                    local_248 = local_288;
                    local_236 = local_278;
                    local_235 = local_275;
                    local_218 = local_258;
                    local_16c = uVar34;
                    if (uVar55 != 0) {
                      uVar36 = *(uint *)(phVar23 + 0x38);
                      phVar9 = *(hb_aat_apply_context_t **)(phVar23 + 0x70);
                      lVar54 = *(long *)(phVar23 + 0x80);
                      uVar43 = 0;
                      uVar63 = 0;
LAB_00401b11:
                      uVar47 = (uint)uVar43;
                      if ((*(uint *)(phVar9 + (uVar43 * 5 + 1) * 4) & uVar34) == 0) {
                        uVar39 = (ulong)(uVar47 + 1);
                        phVar24 = phVar9;
                      }
                      else {
                        phStack_290 = (hb_aat_apply_context_t *)CONCAT44(phStack_290._4_4_,uVar47);
                        phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                        local_258 = *(uint *)(phVar24 + 0x60);
                        if (*(uint *)(phVar24 + 0x5c) == uVar47) {
                          local_274 = *(byte *)(*(long *)(phVar24 + 0x70) + 0xf + uVar43 * 0x14);
                        }
                        else {
                          local_274 = 0;
                        }
                        if (local_275 == '\0') {
                          local_274 = 0;
                        }
                        iVar58 = local_258 - 1;
                        if ((int)uVar47 < iVar58) {
                          uVar39 = uVar43;
                          do {
                            uVar28 = (int)uVar39 + 1;
                            uVar39 = (ulong)uVar28;
                            phStack_290 = (hb_aat_apply_context_t *)
                                          CONCAT44(phStack_290._4_4_,uVar28);
                            lVar31 = *(long *)(phVar24 + 0x70);
                            uVar16 = *(ushort *)(lVar31 + 0xc + uVar39 * 0x14);
                            phVar24 = (hb_aat_apply_context_t *)(ulong)uVar16;
                            if ((local_280[0] & uVar16 & 0xe) != 0) goto LAB_00401cb6;
                            puVar61 = (uint *)(lVar31 + uVar39 * 0x14);
                            if ((uVar16 & 8) == 0) {
LAB_00401bc9:
                              lVar1 = lVar31 + uVar39 * 0x14;
                              uVar16 = *(ushort *)(lVar31 + 0x10 + uVar39 * 0x14);
                              uVar26 = 0;
                              bVar13 = false;
                              if (((((uVar16 & 0x20) != 0) &&
                                   (bVar13 = false, (*(byte *)(lVar1 + 0xc) & 0x10) == 0)) &&
                                  ((local_278 != '\0' || (bVar13 = false, (uVar16 & 0x21f) != 0x201)
                                   ))) && ((local_277 != '\0' ||
                                           (bVar13 = false, (uVar16 & 0x11f) != 0x101)))) {
                                bVar13 = (uVar16 & 0x40) == 0 || local_276 != '\0';
                              }
                              if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                uVar26 = *(ushort *)local_260 << 8 | *(ushort *)local_260 >> 8;
                              }
                              phVar24 = local_260;
                              if (((*(uint *)(lVar31 + 4 + uVar39 * 0x14) & local_280[1]) != 0) &&
                                 ((local_274 == 0 || (local_274 == *(byte *)(lVar1 + 0xf))))) {
                                if ((code *)local_270._0_8_ == (code *)0x0) {
                                  if (bVar13) goto LAB_00401cb6;
                                }
                                else {
                    /* try { // try from 00401c9b to 00401d18 has its CatchHandler @ 00405184 */
                                  cVar14 = (*(code *)local_270._0_8_)
                                                     (puVar61,uVar26,local_270._8_8_);
                                  uVar63 = extraout_XMM0_Qa_06;
                                  if (cVar14 == '\0') goto LAB_00401ca8;
                                }
                                if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                  local_260 = local_260 + 2;
                                }
                                uVar39 = (ulong)phStack_290 & 0xffffffff;
                                uVar28 = *(uint *)(phVar9 + uVar43 * 0x14);
                                phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28;
                                if ((((local_90 >> ((ulong)(uVar28 >> 4) & 0x3f) & 1) == 0) ||
                                    ((uStack_88 >> ((ulong)phVar24 & 0x3f) & 1) == 0)) ||
                                   ((local_80 >> ((ulong)(uVar28 >> 9) & 0x3f) & 1) == 0))
                                goto LAB_00401b05;
                                pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(uVar39 * 5);
                                uVar37 = *(uint *)(phVar9 + uVar39 * 0x14);
                                param_14 = (ulong)uVar37;
                                if (((((ulong)local_78 >> ((ulong)(uVar37 >> 4) & 0x3f) & 1) == 0)
                                    || (((ulong)phStack_70 >> (param_14 & 0x3f) & 1) == 0)) ||
                                   (((ulong)local_68 >> ((ulong)(uVar37 >> 9) & 0x3f) & 1) == 0))
                                goto LAB_00401b05;
                                uVar16 = *(ushort *)(phVar62 + 6);
                                phVar51 = (hb_aat_apply_context_t *)&_hb_NullPool;
                                if (uVar16 == 0) goto LAB_00401e81;
                                iVar42 = (ushort)(uVar16 << 8 | uVar16 >> 8) - 1;
                                iVar58 = 0;
                                goto LAB_00401e26;
                              }
LAB_00401ca8:
                              if (!bVar13) break;
                            }
                            else if ((local_280[0] & 0x10) == 0) {
                              if (((local_280[0] & 0xff00) == 0) ||
                                 (uVar28 = uVar16 & 0xff00,
                                 phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28,
                                 (local_280[0] & 0xff00) == uVar28)) goto LAB_00401bc9;
                            }
                            else {
                              uVar18 = OT::GDEF::accelerator_t::mark_set_covers
                                                 (*(accelerator_t **)(local_288 + 0xf8),
                                                  local_280[0] >> 0x10,*puVar61);
                              uVar63 = extraout_XMM0_Qa_07;
                              if ((char)uVar18 != '\0') goto LAB_00401bc9;
                            }
LAB_00401cb6:
                            uVar39 = (ulong)phStack_290 & 0xffffffff;
                            if (iVar58 <= (int)(uint)phStack_290) break;
                            phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                          } while( true );
                        }
                        uVar39 = (ulong)(uVar47 + 1);
                      }
                      goto LAB_00401b05;
                    }
LAB_00402654:
                    /* try { // try from 00402654 to 0040266b has its CatchHandler @ 00405178 */
                    hb_buffer_t::message
                              (uVar63,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                               phVar23,lVar38,"end kern",phVar24,pGVar56,param_14,
                               in_stack_fffffffffffffce8);
LAB_00402690:
                    free(local_190);
                    phVar24 = (hb_aat_apply_context_t *)
                              hb_sanitize_context_t::~hb_sanitize_context_t(local_1f0);
                  }
                }
                break;
              case (hb_aat_apply_context_t)0x1:
                if (((*(byte *)(local_138 + 0xa8) & 1) != 0) || (((byte)phVar62[5] & 4) != 0)) {
                  local_298 = local_140;
                  local_288 = phVar62 + (ulong)(ushort)(*(ushort *)(phVar62 + 0xe) << 8 |
                                                       *(ushort *)(phVar62 + 0xe) >> 8) + 6;
                  local_260 = (hb_aat_apply_context_t *)
                              (((ulong)CONCAT31((int3)((ulong)local_260 >> 0x28),
                                                (byte)phVar62[5] >> 2) & 0xffffff01) << 0x20);
                    /* try { // try from 004012b6 to 004012c2 has its CatchHandler @ 00405188 */
                  phStack_290 = phVar62;
                  phVar24 = (hb_aat_apply_context_t *)
                            AAT::StateTableDriver<AAT::ObsoleteTypes,void>::StateTableDriver
                                      ((StateTableDriver<AAT::ObsoleteTypes,void> *)local_40,
                                       phVar62 + 6,*(long *)(local_130 + 0x20));
                  puVar60 = local_40[0];
                  phVar23 = local_120;
                  uVar16 = local_40[0][2] << 8 | local_40[0][2] >> 8;
                  uVar34 = *(uint *)((long)local_40[0] +
                                    (ulong)*(byte *)((long)local_40[0] + (ulong)uVar16 + 1) * 4 +
                                    (ulong)(ushort)(local_40[0][3] << 8 | local_40[0][3] >> 8));
                  if ((((uVar34 & 0xff3f0000) != 0) ||
                      (uVar26 = (ushort)uVar34,
                      (int)((uint)(ushort)(uVar26 << 8 | uVar26 >> 8) - (uint)uVar16) /
                      (int)(uint)(ushort)(*local_40[0] << 8 | *local_40[0] >> 8) != 0)) ||
                     ((((((local_90 & local_c0._0_8_) != 0 && ((uStack_88 & local_c0._8_8_) != 0))
                        && ((local_80 & local_b0) != 0)) &&
                       ((((ulong)local_78 & local_c0._0_8_) != 0 &&
                        (((ulong)phStack_70 & local_c0._8_8_) != 0)))) &&
                      ((local_b0 & (ulong)local_68) != 0)))) {
                    if ((local_c8 == 0) || (*(uint *)(local_c8 + 4) < 2)) {
                      puVar61 = (uint *)0x0;
                    }
                    else {
                      puVar61 = *(uint **)(local_c8 + 8);
                    }
                    *(undefined4 *)(local_120 + 0x5c) = 0;
                    if (local_120[0x58] != (hb_buffer_t)0x0) {
                      uVar34 = 0;
                      pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                      iVar58 = 0;
                      param_14 = (ulong)*(uint *)(local_120 + 0x60);
                      uVar43 = 0;
                      if (puVar61 == (uint *)0x0) goto LAB_00401480;
LAB_00401370:
                      iVar58 = (int)pGVar32;
                      if (uVar34 < (uint)param_14) {
                        uVar55 = *(uint *)(*(long *)(phVar23 + 0x70) + 8 + uVar43 * 0x14);
                        puVar52 = puVar61 + 3;
                        puVar29 = puVar61;
                        do {
                          puVar29 = puVar29 + -3;
                          puVar61 = puVar52 + -2;
                          puVar52 = puVar52 + -3;
                        } while (uVar55 < *puVar61);
                        do {
                          puVar61 = puVar29 + 3;
                          puVar52 = puVar29 + 5;
                          puVar29 = puVar61;
                          pGVar56 = pGVar32;
                        } while (*puVar52 < uVar55);
                      }
                      if ((*puVar61 & local_60) != 0) goto LAB_00401482;
                      if (uVar34 != (uint)param_14) {
                        if (phVar23[0x5a] == (hb_buffer_t)0x0) {
                          pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                          goto LAB_00401a6b;
                        }
                        pvVar53 = *(void **)(phVar23 + 0x78);
                        pvVar44 = *(void **)(phVar23 + 0x70);
                        if ((pvVar53 == pvVar44) &&
                           (pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0,
                           *(uint *)(phVar23 + 100) == uVar34)) goto LAB_0040146a;
                        uVar34 = *(uint *)(phVar23 + 100) + 1;
                        if ((uVar34 == 0) || (uVar34 < *(uint *)(phVar23 + 0x68))) {
                          pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                          if (pvVar53 != pvVar44) goto LAB_00401a38;
                        }
                        else {
                          uVar63 = hb_buffer_t::enlarge(phVar23,uVar34);
                          if ((char)uVar63 == '\0') {
                            pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                            phVar24 = extraout_XMM0_Qa_04;
                            goto LAB_00401ae0;
                          }
                          pvVar44 = *(void **)(phVar23 + 0x70);
                          pvVar53 = *(void **)(phVar23 + 0x78);
                          pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                          if (pvVar53 != pvVar44) goto LAB_00401a38;
                        }
                        pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                        uVar34 = *(uint *)(phVar23 + 100);
                        if (uVar34 + 1 <= *(int *)(phVar23 + 0x5c) + 1U) goto LAB_00401a35;
                        pvVar53 = *(void **)(phVar23 + 0x80);
                        *(void **)(phVar23 + 0x78) = pvVar53;
                        pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
LAB_00401a18:
                        if (uVar34 != 0) {
                          memcpy(pvVar53,pvVar44,(ulong)uVar34 * 0x14);
                          pvVar44 = *(void **)(phVar23 + 0x70);
                          pvVar53 = *(void **)(phVar23 + 0x78);
                        }
LAB_00401a38:
                        uVar34 = *(uint *)(phVar23 + 0x5c);
                        uVar55 = *(uint *)(phVar23 + 100);
                        *(undefined4 *)((long)pvVar53 + (ulong)uVar55 * 0x14 + 0x10) =
                             *(undefined4 *)((long)pvVar44 + (ulong)uVar34 * 0x14 + 0x10);
                        puVar50 = (ulong *)((long)pvVar44 + (ulong)uVar34 * 0x14);
                        phVar24 = (hb_aat_apply_context_t *)*puVar50;
                        uVar43 = puVar50[1];
                        puVar50 = (ulong *)((long)pvVar53 + (ulong)uVar55 * 0x14);
                        *puVar50 = (ulong)phVar24;
                        puVar50[1] = uVar43;
                        uVar34 = *(uint *)(phVar23 + 0x5c);
                        uVar55 = *(uint *)(phVar23 + 100);
LAB_00401a62:
                        *(uint *)(phVar23 + 100) = uVar55 + 1;
LAB_00401a6b:
                        *(uint *)(phVar23 + 0x5c) = uVar34 + 1;
                        if (phVar23[0x58] != (hb_buffer_t)0x0) {
                          do {
                            iVar58 = (int)pGVar32;
                            uVar34 = *(uint *)(phVar23 + 0x5c);
                            param_14 = (ulong)*(uint *)(phVar23 + 0x60);
                            uVar43 = (ulong)uVar34;
                            if (puVar61 != (uint *)0x0) goto LAB_00401370;
LAB_00401480:
                            puVar61 = (uint *)0x0;
LAB_00401482:
                            if (uVar34 < (uint)param_14) {
                              uVar36 = *(uint *)(*(long *)(phVar23 + 0x70) + uVar43 * 0x14);
                              if ((ulong)uVar36 == 0xffff) {
                                uVar55 = 2;
                              }
                              else {
                                uVar55 = 1;
                                if ((((local_a8 >> ((ulong)(uVar36 >> 4) & 0x3f) & 1) != 0) &&
                                    ((local_a0 >> ((ulong)uVar36 & 0x3f) & 1) != 0)) &&
                                   ((local_98 >> ((ulong)(uVar36 >> 9) & 0x3f) & 1) != 0)) {
                                  uVar43 = (ulong)(ushort)(puVar60[1] << 8 | puVar60[1] >> 8);
                                  uVar16 = *(ushort *)((long)puVar60 + uVar43 + 2);
                                  uVar36 = uVar36 - (ushort)(*(ushort *)((long)puVar60 + uVar43) <<
                                                             8 | *(ushort *)((long)puVar60 + uVar43)
                                                                 >> 8);
                                  if (uVar36 < (ushort)(uVar16 << 8 | uVar16 >> 8)) {
                                    uVar55 = (uint)*(byte *)((long)puVar60 +
                                                            (ulong)uVar36 + uVar43 + 4);
                                  }
                                }
                              }
                            }
                            else {
                              uVar55 = 0;
                            }
                            uVar16 = *puVar60;
                            uVar26 = uVar16 << 8 | uVar16 >> 8;
                            uVar36 = uVar55;
                            if (uVar26 <= uVar55) {
                              uVar36 = 1;
                            }
                            uVar27 = puVar60[2] << 8 | puVar60[2] >> 8;
                            pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar27;
                            pGVar32 = pGVar56 + (long)puVar60;
                            uVar41 = puVar60[3] << 8 | puVar60[3] >> 8;
                            iVar42 = iVar58 * (uint)uVar26;
                            uVar43 = (ulong)(byte)pGVar32[uVar36 + iVar42];
                            uVar7 = *(ushort *)((long)puVar60 + uVar43 * 4 + (ulong)uVar41);
                            uVar47 = (uint)uVar26;
                            uVar36 = (int)((uint)(ushort)(uVar7 << 8 | uVar7 >> 8) - (uint)uVar27) /
                                     (int)uVar47;
                            uVar26 = *(ushort *)((long)puVar60 + uVar43 * 4 + (ulong)uVar41 + 2);
                            if ((uVar26 & 0xff3f) == 0) {
                              if ((iVar58 != 0) && (((uVar26 & 0x40) == 0 || (uVar36 != 0)))) {
                                if (uVar47 <= uVar55) {
                                  uVar55 = 1;
                                }
                                uVar7 = *(ushort *)
                                         ((long)puVar60 +
                                         (ulong)(byte)pGVar32[uVar55] * 4 + (ulong)uVar41 + 2);
                                if ((((uVar7 & 0xff3f) != 0) ||
                                    (uVar8 = *(ushort *)
                                              ((long)puVar60 +
                                              (ulong)(byte)pGVar32[uVar55] * 4 + (ulong)uVar41),
                                    uVar36 != (int)((uint)(ushort)(uVar8 << 8 | uVar8 >> 8) -
                                                   (uint)uVar27) / (int)uVar47)) ||
                                   (((uVar7 ^ uVar26) & 0x40) != 0)) goto LAB_00401620;
                              }
                              if ((*(ushort *)
                                    ((long)puVar60 +
                                    (ulong)(byte)pGVar32[(uint)(uVar16 == 0) + iVar42] * 4 +
                                    (ulong)uVar41 + 2) & 0xff3f) != 0) goto LAB_00401620;
                            }
                            else {
LAB_00401620:
                              uVar55 = uVar34;
                              if (phVar23[0x5a] != (hb_buffer_t)0x0) {
                                uVar55 = *(uint *)(phVar23 + 100);
                              }
                              if ((uVar55 != 0) && (uVar34 < (uint)param_14)) {
                                pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x1;
                                phVar24 = (hb_aat_apply_context_t *)
                                          hb_buffer_t::_set_glyph_flags
                                                    (phVar23,3,uVar55 - 1,uVar34 + 1,'\x01');
                                uVar26 = *(ushort *)((long)puVar60 + uVar43 * 4 + (ulong)uVar41 + 2)
                                ;
                              }
                            }
                            phVar9 = local_260;
                            if ((uVar26 & 0x80) != 0) {
                              uVar39 = (ulong)local_260 & 0xffffffff;
                              if (uVar39 < 8) {
                                local_260 = (hb_aat_apply_context_t *)
                                            CONCAT44(local_260._4_4_,(uint)local_260 + 1);
                                local_280[uVar39] = *(uint *)(phVar23 + 0x5c);
                                phVar9 = local_260;
                              }
                              else {
                                local_260 = (hb_aat_apply_context_t *)
                                            ((ulong)local_260._4_4_ << 0x20);
                                phVar9 = local_260;
                              }
                            }
                            phVar51 = phVar9;
                            if ((uVar26 & 0xff3f) != 0) {
                              local_260._0_4_ = (uint)phVar9;
                              if (((ulong)phVar9 & 0xffffffff) != 0) {
                                uVar55 = ((int)local_288 - (uint)phStack_290) - 6;
                                uVar34 = (uint)(ushort)((uVar26 & 0xff3f) << 8 | uVar26 >> 8);
                                if (uVar34 < uVar55) {
                                  uVar34 = 0x3fffffff;
                                }
                                else {
                                  uVar34 = uVar34 - uVar55 >> 1;
                                }
                                if (!CARRY4((uint)local_260,(uint)local_260)) {
                                  phVar57 = local_288 + (ulong)uVar34 * 2;
                                  if ((((ulong)((long)phVar57 - *(long *)(local_298 + 0x30)) <=
                                        (ulong)*(uint *)(local_298 + 0x40)) &&
                                      ((uint)local_260 * 2 <=
                                       (uint)(*(int *)(local_298 + 0x38) - (int)phVar57))) &&
                                     (iVar58 = *(int *)(local_298 + 0x44) + (uint)local_260 * -2,
                                     *(int *)(local_298 + 0x44) = iVar58, 0 < iVar58)) {
                                    uVar34 = *(uint *)(*(long *)(local_298 + 8) + 0xa0);
                                    local_260._4_1_ = (byte)((ulong)phVar9 >> 0x20);
                                    bVar12 = local_260._4_1_;
                                    param_14 = CONCAT71((int7)(param_14 >> 8),local_260._4_1_);
                                    lVar38 = 0;
                                    pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                                    uVar55 = (uint)local_260;
                                    local_260 = phVar9;
                                    do {
                                      uVar55 = uVar55 - 1;
                                      phVar51 = local_260;
                                      if (((ulong)phVar9 & 0xffffffff) * 2 == lVar38) break;
                                      local_260 = (hb_aat_apply_context_t *)
                                                  CONCAT44(local_260._4_4_,uVar55);
                                      uVar39 = (ulong)local_280[uVar55];
                                      if (local_280[uVar55] < *(uint *)(phVar23 + 0x60)) {
                                        uVar16 = *(ushort *)(phVar57 + lVar38) << 8;
                                        uVar26 = *(ushort *)(phVar57 + lVar38) >> 8;
                                        pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                                                  ((ulong)(uVar16 | uVar26) & 0xffffffffffffff01);
                                        uVar16 = uVar16 | uVar26 & 0xfffe;
                                        lVar54 = *(long *)(phVar23 + 0x80);
                                        if ((*(uint *)(phVar23 + 0x38) & 0xfffffffe) == 4) {
                                          if ((char)param_14 == '\0') {
                                            if ((*(uint *)(*(long *)(phVar23 + 0x70) + 4 +
                                                          uVar39 * 0x14) & uVar34) != 0) {
                                              piVar2 = (int *)(lVar54 + uVar39 * 0x14);
                                              iVar58 = (int)((ulong)((long)(short)uVar16 *
                                                                     *(long *)(*(long *)(local_298 +
                                                                                        0x10) + 0x58
                                                                              ) + 0x8000) >> 0x10);
                                              *piVar2 = *piVar2 + iVar58;
                                              piVar2 = (int *)(lVar54 + 8 + uVar39 * 0x14);
                                              *piVar2 = *piVar2 + iVar58;
                                            }
                                            goto LAB_004018cf;
                                          }
                                          lVar31 = lVar54 + uVar39 * 0x14;
                                          if (uVar16 == 0x8000) {
                                            *(undefined1 *)(lVar31 + 0x12) = 0;
                                            *(undefined2 *)(lVar31 + 0x10) = 0;
                                            *(undefined4 *)(lVar54 + 0xc + uVar39 * 0x14) = 0;
                                          }
                                          else if (*(char *)(lVar31 + 0x12) != '\0') {
                                            piVar2 = (int *)(lVar54 + 0xc + uVar39 * 0x14);
                                            *piVar2 = *piVar2 + (int)((ulong)((long)(short)uVar16 *
                                                                              *(long *)(*(long *)(
                                                  local_298 + 0x10) + 0x60) + 0x8000) >> 0x10);
                                            phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8);
                                          }
                                        }
                                        else if ((char)param_14 == '\0') {
                                          if ((*(uint *)(*(long *)(phVar23 + 0x70) + 4 +
                                                        uVar39 * 0x14) & uVar34) != 0) {
                                            piVar2 = (int *)(lVar54 + 4 + uVar39 * 0x14);
                                            iVar58 = (int)((ulong)((long)(short)uVar16 *
                                                                   *(long *)(*(long *)(local_298 +
                                                                                      0x10) + 0x60)
                                                                  + 0x8000) >> 0x10);
                                            *piVar2 = *piVar2 + iVar58;
                                            piVar2 = (int *)(lVar54 + 0xc + uVar39 * 0x14);
                                            *piVar2 = *piVar2 + iVar58;
                                          }
LAB_004018cf:
                                          param_14 = (ulong)bVar12;
                                        }
                                        else {
                                          lVar31 = lVar54 + uVar39 * 0x14;
                                          if (uVar16 == 0x8000) {
                                            *(undefined1 *)(lVar31 + 0x12) = 0;
                                            *(undefined2 *)(lVar31 + 0x10) = 0;
                                            *(undefined4 *)(lVar54 + 8 + uVar39 * 0x14) = 0;
                                          }
                                          else if (*(char *)(lVar31 + 0x12) != '\0') {
                                            piVar2 = (int *)(lVar54 + 8 + uVar39 * 0x14);
                                            *piVar2 = *piVar2 + (int)((ulong)((long)(short)uVar16 *
                                                                              *(long *)(*(long *)(
                                                  local_298 + 0x10) + 0x58) + 0x8000) >> 0x10);
                                            phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8);
                                          }
                                        }
                                      }
                                      lVar38 = lVar38 + 2;
                                      phVar51 = local_260;
                                    } while (((ulong)pGVar56 & 1) == 0);
                                    goto LAB_0040196b;
                                  }
                                }
                                local_260 = (hb_aat_apply_context_t *)
                                            ((ulong)phVar9 & 0xffffffff00000000);
                                phVar51 = local_260;
                              }
                            }
LAB_0040196b:
                            local_260 = phVar51;
                            uVar34 = *(uint *)(phVar23 + 0x5c);
                            if ((uVar34 == *(uint *)(phVar23 + 0x60)) ||
                               (phVar23[0x58] == (hb_buffer_t)0x0)) break;
                            if (((*(byte *)((long)puVar60 + uVar43 * 4 + (ulong)uVar41 + 2) & 0x40)
                                 == 0) ||
                               (iVar58 = *(int *)(phVar23 + 200),
                               *(int *)(phVar23 + 200) = iVar58 + -1, iVar58 < 1)) {
                              pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar36;
                              if (phVar23[0x5a] != (hb_buffer_t)0x0) {
                                pvVar53 = *(void **)(phVar23 + 0x78);
                                pvVar44 = *(void **)(phVar23 + 0x70);
                                if ((pvVar53 == pvVar44) && (*(uint *)(phVar23 + 100) == uVar34))
                                goto LAB_0040146a;
                                uVar34 = *(uint *)(phVar23 + 100) + 1;
                                if ((uVar34 == 0) || (uVar34 < *(uint *)(phVar23 + 0x68))) {
                                  if (pvVar53 != pvVar44) goto LAB_00401a38;
                                }
                                else {
                                  uVar63 = hb_buffer_t::enlarge(phVar23,uVar34);
                                  if ((char)uVar63 == '\0') {
                                    pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                                              (ulong)uVar36;
                                    phVar24 = extraout_XMM0_Qa_05;
LAB_00401ae0:
                                    hVar5 = phVar23[0x58];
                                    goto joined_r0x00401aef;
                                  }
                                  pvVar44 = *(void **)(phVar23 + 0x70);
                                  pvVar53 = *(void **)(phVar23 + 0x78);
                                  pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar36;
                                  if (pvVar53 != pvVar44) goto LAB_00401a38;
                                }
                                pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar36;
                                uVar34 = *(uint *)(phVar23 + 100);
                                if (uVar34 + 1 <= *(int *)(phVar23 + 0x5c) + 1U) goto LAB_00401a35;
                                pvVar53 = *(void **)(phVar23 + 0x80);
                                *(void **)(phVar23 + 0x78) = pvVar53;
                                goto LAB_00401a18;
                              }
                              goto LAB_00401a6b;
                            }
                            pGVar32 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(ulong)uVar36;
                            hVar5 = phVar23[0x58];
joined_r0x00401aef:
                            if (hVar5 == (hb_buffer_t)0x0) break;
                          } while( true );
                        }
                        break;
                      }
                    }
                  }
                }
                break;
              case (hb_aat_apply_context_t)0x2:
                if (((((*(byte *)(local_138 + 0xa8) & 1) != 0) && ((local_90 & local_c0._0_8_) != 0)
                     ) && ((uStack_88 & local_c0._8_8_) != 0)) &&
                   ((((local_80 & local_b0) != 0 && (((ulong)local_78 & local_c0._0_8_) != 0)) &&
                    ((((ulong)phStack_70 & local_c0._8_8_) != 0 &&
                     ((local_b0 & (ulong)local_68) != 0)))))) {
                  hVar3 = phVar62[5];
                  uVar34 = *(uint *)(local_138 + 0xa0);
                  bVar13 = hb_buffer_t::message
                                     (phVar24,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                                      param_8,local_120,local_130,"start kern",local_c0._0_8_,
                                      pGVar56,param_14,in_stack_fffffffffffffce8);
                  phVar24 = extraout_XMM0_Qa_00;
                  if (bVar13) {
                    if (((byte)phVar23[0x18] & 0x40) != 0) {
                      uVar55 = *(uint *)(phVar23 + 0x60);
                      phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 0x20);
                      if ((ulong)uVar55 != 0) {
                        lVar54 = *(long *)(phVar23 + 0x70);
                        if ((ulong)uVar55 - 1 < 3) {
                          uVar43 = 0;
                        }
                        else {
                          pbVar35 = (byte *)(lVar54 + 0x40);
                          uVar43 = 0;
                          do {
                            pbVar35[-0x3c] = pbVar35[-0x3c] | 2;
                            pbVar35[-0x28] = pbVar35[-0x28] | 2;
                            pbVar35[-0x14] = pbVar35[-0x14] | 2;
                            *pbVar35 = *pbVar35 | 2;
                            uVar43 = uVar43 + 4;
                            pbVar35 = pbVar35 + 0x50;
                          } while ((uVar55 & 0xfffffffc) != uVar43);
                        }
                        if ((ulong)(uVar55 & 3) != 0) {
                          lVar31 = 0;
                          do {
                            pbVar35 = (byte *)(lVar54 + uVar43 * 0x14 + 4 + lVar31);
                            *pbVar35 = *pbVar35 | 2;
                            lVar31 = lVar31 + 0x14;
                          } while ((ulong)(uVar55 & 3) * 0x14 != lVar31);
                        }
                      }
                    }
                    puVar17 = &_hb_NullPool;
                    OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                              ((hb_ot_apply_context_t *)&local_298,1,lVar38,(undefined4 *)phVar23,
                               (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
                    local_150 = 0xffffffff;
                    local_275 = local_159;
                    if (local_210 != 0) {
                      local_275 = '\0';
                    }
                    uVar63 = 0;
                    pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                              CONCAT71((int7)((ulong)puVar17 >> 8),local_15b != '\0');
                    local_278 = local_210 == 1;
                    local_164 = 8;
                    local_288 = (hb_aat_apply_context_t *)&local_298;
                    local_258 = *(uint *)(local_1f8 + 0x60);
                    local_270 = (undefined1  [16])0x0;
                    local_260 = (hb_aat_apply_context_t *)0x0;
                    local_280[0] = 8;
                    local_277 = local_15a;
                    local_274 = 0;
                    local_230 = (undefined1  [16])0x0;
                    local_220 = 0;
                    local_238 = (bool)local_278 || local_15b != '\0';
                    phVar24 = (hb_aat_apply_context_t *)0xffffffff00000008;
                    local_240 = 0xffffffff00000008;
                    local_237 = 1;
                    local_234 = 0;
                    uVar55 = *(uint *)(phVar23 + 0x60);
                    local_280[1] = uVar34;
                    local_276 = local_278;
                    local_248 = local_288;
                    local_236 = local_278;
                    local_235 = local_275;
                    local_218 = local_258;
                    local_16c = uVar34;
                    if (uVar55 != 0) {
                      uVar36 = *(uint *)(phVar23 + 0x38);
                      phVar9 = *(hb_aat_apply_context_t **)(phVar23 + 0x70);
                      lVar54 = *(long *)(phVar23 + 0x80);
                      param_14 = 0;
                      uVar63 = 0;
                      do {
                        uVar47 = (uint)param_14;
                        if ((*(uint *)(phVar9 + (param_14 * 5 + 1) * 4) & uVar34) == 0) {
                          param_14 = (ulong)(uVar47 + 1);
                          phVar24 = phVar9;
                        }
                        else {
                          phStack_290 = (hb_aat_apply_context_t *)CONCAT44(phStack_290._4_4_,uVar47)
                          ;
                          phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                          local_258 = *(uint *)(phVar24 + 0x60);
                          if (*(uint *)(phVar24 + 0x5c) == uVar47) {
                            local_274 = *(byte *)(*(long *)(phVar24 + 0x70) + 0xf + param_14 * 0x14)
                            ;
                          }
                          else {
                            local_274 = 0;
                          }
                          if (local_275 == '\0') {
                            local_274 = 0;
                          }
                          iVar58 = local_258 - 1;
                          if ((int)uVar47 < iVar58) {
                            uVar43 = param_14;
                            do {
                              uVar28 = (int)uVar43 + 1;
                              uVar43 = (ulong)uVar28;
                              phStack_290 = (hb_aat_apply_context_t *)
                                            CONCAT44(phStack_290._4_4_,uVar28);
                              lVar31 = *(long *)(phVar24 + 0x70);
                              uVar16 = *(ushort *)(lVar31 + 0xc + uVar43 * 0x14);
                              phVar24 = (hb_aat_apply_context_t *)(ulong)uVar16;
                              if ((local_280[0] & uVar16 & 0xe) != 0) goto LAB_0040212c;
                              puVar61 = (uint *)(uVar43 * 0x14 + lVar31);
                              if ((uVar16 & 8) == 0) {
LAB_00402030:
                                pbVar35 = (byte *)(uVar43 * 0x14 + 0xc + lVar31);
                                uVar16 = *(ushort *)(lVar31 + 0x10 + uVar43 * 0x14);
                                uVar26 = 0;
                                bVar13 = false;
                                if (((((uVar16 & 0x20) != 0) &&
                                     (bVar13 = false, (*pbVar35 & 0x10) == 0)) &&
                                    ((local_278 != '\0' ||
                                     (bVar13 = false, (uVar16 & 0x21f) != 0x201)))) &&
                                   ((local_277 != '\0' ||
                                    (bVar13 = false, (uVar16 & 0x11f) != 0x101)))) {
                                  bVar13 = (uVar16 & 0x40) == 0 || local_276 != '\0';
                                }
                                if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                  uVar26 = *(ushort *)local_260 << 8 | *(ushort *)local_260 >> 8;
                                }
                                phVar24 = local_260;
                                if (((*(uint *)(lVar31 + 4 + uVar43 * 0x14) & local_280[1]) != 0) &&
                                   ((local_274 == 0 || (local_274 == pbVar35[3])))) {
                                  if ((code *)local_270._0_8_ == (code *)0x0) {
                                    if (bVar13) goto LAB_0040212c;
                                  }
                                  else {
                    /* try { // try from 0040210e to 00402192 has its CatchHandler @ 00405182 */
                                    cVar14 = (*(code *)local_270._0_8_)
                                                       (puVar61,uVar26,local_270._8_8_);
                                    uVar63 = extraout_XMM0_Qa_08;
                                    if (cVar14 == '\0') goto LAB_0040211e;
                                  }
                                  if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                    local_260 = local_260 + 2;
                                  }
                                  uVar28 = *(uint *)(phVar9 + param_14 * 0x14);
                                  phVar24 = (hb_aat_apply_context_t *)(ulong)(uVar28 >> 4);
                                  if ((((local_90 >> ((ulong)phVar24 & 0x3f) & 1) != 0) &&
                                      ((uStack_88 >> ((ulong)uVar28 & 0x3f) & 1) != 0)) &&
                                     (phVar24 = (hb_aat_apply_context_t *)(ulong)(uVar28 >> 9),
                                     (local_80 >> ((ulong)(uVar28 >> 9) & 0x3f) & 1) != 0)) {
                                    uVar43 = (ulong)phStack_290 & 0xffffffff;
                                    uVar37 = *(uint *)(phVar9 + uVar43 * 0x14);
                                    phVar24 = (hb_aat_apply_context_t *)(ulong)(uVar37 >> 4);
                                    if (((((ulong)local_78 >> ((ulong)(uVar37 >> 4) & 0x3f) & 1) !=
                                          0) && (phVar24 = phStack_70,
                                                ((ulong)phStack_70 >> ((ulong)uVar37 & 0x3f) & 1) !=
                                                0)) &&
                                       (phVar24 = local_68,
                                       ((ulong)local_68 >> ((ulong)(uVar37 >> 9) & 0x3f) & 1) != 0))
                                    {
                                      uVar39 = (ulong)(ushort)(*(ushort *)(phVar62 + 8) << 8 |
                                                              *(ushort *)(phVar62 + 8) >> 8);
                                      uVar28 = uVar28 - (ushort)(*(ushort *)(phVar62 + uVar39) << 8
                                                                | *(ushort *)(phVar62 + uVar39) >> 8
                                                                );
                                      uVar46 = 0;
                                      pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)0x0;
                                      if (uVar28 < (ushort)(*(ushort *)(phVar62 + uVar39 + 2) << 8 |
                                                           *(ushort *)(phVar62 + uVar39 + 2) >> 8))
                                      {
                                        pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                                                  (ulong)(ushort)(*(ushort *)
                                                                   (phVar62 +
                                                                   (ulong)uVar28 * 2 + uVar39 + 4)
                                                                  << 8 | *(ushort *)
                                                                          (phVar62 +
                                                                          (ulong)uVar28 * 2 +
                                                                          uVar39 + 4) >> 8);
                                      }
                                      uVar39 = (ulong)(ushort)(*(ushort *)(phVar62 + 10) << 8 |
                                                              *(ushort *)(phVar62 + 10) >> 8);
                                      uVar37 = uVar37 - (ushort)(*(ushort *)(phVar62 + uVar39) << 8
                                                                | *(ushort *)(phVar62 + uVar39) >> 8
                                                                );
                                      if (uVar37 < (ushort)(*(ushort *)(phVar62 + uVar39 + 2) << 8 |
                                                           *(ushort *)(phVar62 + uVar39 + 2) >> 8))
                                      {
                                        uVar46 = (uint)(ushort)(*(ushort *)
                                                                 (phVar62 +
                                                                 (ulong)uVar37 * 2 + uVar39 + 4) <<
                                                                8 | *(ushort *)
                                                                     (phVar62 +
                                                                     (ulong)uVar37 * 2 + uVar39 + 4)
                                                                    >> 8);
                                      }
                                      uVar16 = *(ushort *)(phVar62 + 0xc) << 8 |
                                               *(ushort *)(phVar62 + 0xc) >> 8;
                                      uVar46 = uVar46 + (int)pGVar56;
                                      phVar24 = phVar62 + uVar16;
                                      if (uVar46 < uVar16) {
                                        uVar28 = 0x3fffffff;
                                      }
                                      else {
                                        uVar28 = uVar46 - uVar16 >> 1;
                                      }
                                      if (phVar24 + ((ulong)uVar28 * 2 - local_110._0_8_) + 2 <=
                                          (hb_aat_apply_context_t *)(ulong)local_100) {
                                        uVar16 = *(ushort *)(phVar24 + (ulong)uVar28 * 2);
                                        phVar24 = (hb_aat_apply_context_t *)(ulong)uVar16;
                                        if (uVar16 != 0) {
                                          lVar31 = (long)(short)(uVar16 << 8 | uVar16 >> 8);
                                          if ((uVar36 & 0xfffffffe) == 4) {
                                            uVar39 = lVar31 * *(long *)(lVar38 + 0x58) + 0x8000;
                                            iVar58 = (int)(uVar39 >> 0x10);
                                            if (((byte)hVar3 & 4) != 0) {
                                              *(int *)(lVar54 + 0xc + uVar43 * 0x14) = iVar58;
                                              goto LAB_004023e2;
                                            }
                                            piVar2 = (int *)(lVar54 + param_14 * 0x14);
                                            *piVar2 = *piVar2 + (iVar58 >> 1);
                                            uVar28 = iVar58 - (iVar58 >> 1);
                                            phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28;
                                            piVar2 = (int *)(lVar54 + uVar43 * 0x14);
                                            *piVar2 = *piVar2 + uVar28;
                                            piVar2 = (int *)(lVar54 + 8 + uVar43 * 0x14);
                                            *piVar2 = *piVar2 + uVar28;
                                          }
                                          else {
                                            uVar39 = lVar31 * *(long *)(lVar38 + 0x60) + 0x8000;
                                            iVar58 = (int)(uVar39 >> 0x10);
                                            if (((byte)hVar3 & 4) == 0) {
                                              piVar2 = (int *)(lVar54 + 4 + param_14 * 0x14);
                                              *piVar2 = *piVar2 + (iVar58 >> 1);
                                              uVar28 = iVar58 - (iVar58 >> 1);
                                              phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28;
                                              piVar2 = (int *)(lVar54 + 4 + uVar43 * 0x14);
                                              *piVar2 = *piVar2 + uVar28;
                                              piVar2 = (int *)(lVar54 + 0xc + uVar43 * 0x14);
                                              *piVar2 = *piVar2 + uVar28;
                                            }
                                            else {
                                              *(int *)(lVar54 + 8 + uVar43 * 0x14) = iVar58;
LAB_004023e2:
                                              phVar24 = (hb_aat_apply_context_t *)(uVar39 >> 0x10);
                                              phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8)
                                              ;
                                            }
                                          }
                                          uVar63 = hb_buffer_t::unsafe_to_break
                                                             (phVar23,uVar47,(uint)phStack_290 + 1);
                                        }
                                      }
                                    }
                                  }
                                  param_14 = (ulong)phStack_290 & 0xffffffff;
                                  goto LAB_00401f65;
                                }
LAB_0040211e:
                                if (!bVar13) break;
                              }
                              else if ((local_280[0] & 0x10) == 0) {
                                if (((local_280[0] & 0xff00) == 0) ||
                                   (uVar28 = uVar16 & 0xff00,
                                   phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28,
                                   (local_280[0] & 0xff00) == uVar28)) goto LAB_00402030;
                              }
                              else {
                                uVar18 = OT::GDEF::accelerator_t::mark_set_covers
                                                   (*(accelerator_t **)(local_288 + 0xf8),
                                                    local_280[0] >> 0x10,*puVar61);
                                uVar63 = extraout_XMM0_Qa_09;
                                if ((char)uVar18 != '\0') goto LAB_00402030;
                              }
LAB_0040212c:
                              uVar43 = (ulong)phStack_290 & 0xffffffff;
                              if (iVar58 <= (int)(uint)phStack_290) break;
                              phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                            } while( true );
                          }
                          param_14 = (ulong)(uVar47 + 1);
                        }
LAB_00401f65:
                      } while ((uint)param_14 < uVar55);
                    }
                    /* try { // try from 00402673 to 0040268a has its CatchHandler @ 00405176 */
                    hb_buffer_t::message
                              (uVar63,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                               phVar23,lVar38,"end kern",phVar24,pGVar56,param_14,
                               in_stack_fffffffffffffce8);
                    goto LAB_00402690;
                  }
                }
                break;
              case (hb_aat_apply_context_t)0x3:
                if ((*(byte *)(local_138 + 0xa8) & 1) != 0) {
                  hVar3 = phVar62[5];
                  uVar34 = *(uint *)(local_138 + 0xa0);
                  bVar13 = hb_buffer_t::message
                                     (phVar24,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                                      param_8,local_120,local_130,"start kern",
                                      &switchD_00400728::switchdataD_005e0c8c,pGVar56,param_14,
                                      in_stack_fffffffffffffce8);
                  phVar24 = extraout_XMM0_Qa_01;
                  if (bVar13) {
                    if (((byte)phVar23[0x18] & 0x40) != 0) {
                      uVar55 = *(uint *)(phVar23 + 0x60);
                      phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 0x20);
                      if ((ulong)uVar55 != 0) {
                        lVar54 = *(long *)(phVar23 + 0x70);
                        if ((ulong)uVar55 - 1 < 3) {
                          uVar43 = 0;
                        }
                        else {
                          pbVar35 = (byte *)(lVar54 + 0x40);
                          uVar43 = 0;
                          do {
                            pbVar35[-0x3c] = pbVar35[-0x3c] | 2;
                            pbVar35[-0x28] = pbVar35[-0x28] | 2;
                            pbVar35[-0x14] = pbVar35[-0x14] | 2;
                            *pbVar35 = *pbVar35 | 2;
                            uVar43 = uVar43 + 4;
                            pbVar35 = pbVar35 + 0x50;
                          } while ((uVar55 & 0xfffffffc) != uVar43);
                        }
                        if ((ulong)(uVar55 & 3) != 0) {
                          lVar31 = 0;
                          do {
                            pbVar35 = (byte *)(lVar54 + uVar43 * 0x14 + 4 + lVar31);
                            *pbVar35 = *pbVar35 | 2;
                            lVar31 = lVar31 + 0x14;
                          } while ((ulong)(uVar55 & 3) * 0x14 != lVar31);
                        }
                      }
                    }
                    puVar17 = &_hb_NullPool;
                    OT::hb_ot_apply_context_t::hb_ot_apply_context_t
                              ((hb_ot_apply_context_t *)&local_298,1,lVar38,(undefined4 *)phVar23,
                               (GDEFVersion1_2<OT::Layout::SmallTypes> *)&_hb_NullPool);
                    local_150 = 0xffffffff;
                    local_275 = local_159;
                    if (local_210 != 0) {
                      local_275 = '\0';
                    }
                    uVar63 = 0;
                    pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)
                              CONCAT71((int7)((ulong)puVar17 >> 8),local_15b != '\0');
                    local_278 = local_210 == 1;
                    local_164 = 8;
                    local_288 = (hb_aat_apply_context_t *)&local_298;
                    local_258 = *(uint *)(local_1f8 + 0x60);
                    local_270 = (undefined1  [16])0x0;
                    local_260 = (hb_aat_apply_context_t *)0x0;
                    local_280[0] = 8;
                    local_277 = local_15a;
                    local_274 = 0;
                    local_230 = (undefined1  [16])0x0;
                    local_220 = 0;
                    local_238 = (bool)local_278 || local_15b != '\0';
                    phVar24 = (hb_aat_apply_context_t *)0xffffffff00000008;
                    local_240 = 0xffffffff00000008;
                    local_237 = 1;
                    local_234 = 0;
                    uVar55 = *(uint *)(phVar23 + 0x60);
                    local_280[1] = uVar34;
                    local_276 = local_278;
                    local_248 = local_288;
                    local_236 = local_278;
                    local_235 = local_275;
                    local_218 = local_258;
                    local_16c = uVar34;
                    if (uVar55 != 0) {
                      uVar36 = *(uint *)(phVar23 + 0x38);
                      phVar9 = *(hb_aat_apply_context_t **)(phVar23 + 0x70);
                      phVar51 = *(hb_aat_apply_context_t **)(phVar23 + 0x80);
                      uVar43 = 0;
                      uVar63 = 0;
                      do {
                        uVar47 = (uint)uVar43;
                        if ((*(uint *)(phVar9 + (uVar43 * 5 + 1) * 4) & uVar34) == 0) {
                          uVar39 = (ulong)(uVar47 + 1);
                          phVar24 = phVar9;
                        }
                        else {
                          phStack_290 = (hb_aat_apply_context_t *)CONCAT44(phStack_290._4_4_,uVar47)
                          ;
                          phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                          local_258 = *(uint *)(phVar24 + 0x60);
                          if (*(uint *)(phVar24 + 0x5c) == uVar47) {
                            local_274 = *(byte *)(*(long *)(phVar24 + 0x70) + 0xf + uVar43 * 0x14);
                          }
                          else {
                            local_274 = 0;
                          }
                          if (local_275 == '\0') {
                            local_274 = 0;
                          }
                          iVar58 = local_258 - 1;
                          if ((int)uVar47 < iVar58) {
                            uVar39 = uVar43;
                            do {
                              uVar28 = (int)uVar39 + 1;
                              uVar39 = (ulong)uVar28;
                              phStack_290 = (hb_aat_apply_context_t *)
                                            CONCAT44(phStack_290._4_4_,uVar28);
                              lVar54 = *(long *)(phVar24 + 0x70);
                              uVar16 = *(ushort *)(lVar54 + 0xc + uVar39 * 0x14);
                              phVar24 = (hb_aat_apply_context_t *)(ulong)uVar16;
                              if ((local_280[0] & uVar16 & 0xe) != 0) goto LAB_00400fbd;
                              puVar61 = (uint *)(lVar54 + uVar39 * 0x14);
                              if ((uVar16 & 8) == 0) {
LAB_00400ed9:
                                lVar31 = lVar54 + uVar39 * 0x14;
                                uVar16 = *(ushort *)(lVar54 + 0x10 + uVar39 * 0x14);
                                uVar26 = 0;
                                bVar13 = false;
                                if (((((uVar16 & 0x20) != 0) &&
                                     (bVar13 = false, (*(byte *)(lVar31 + 0xc) & 0x10) == 0)) &&
                                    ((local_278 != '\0' ||
                                     (bVar13 = false, (uVar16 & 0x21f) != 0x201)))) &&
                                   ((local_277 != '\0' ||
                                    (bVar13 = false, (uVar16 & 0x11f) != 0x101)))) {
                                  bVar13 = (uVar16 & 0x40) == 0 || local_276 != '\0';
                                }
                                if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                  uVar26 = *(ushort *)local_260 << 8 | *(ushort *)local_260 >> 8;
                                }
                                phVar24 = local_260;
                                if (((*(uint *)(lVar54 + 4 + uVar39 * 0x14) & local_280[1]) != 0) &&
                                   ((local_274 == 0 || (local_274 == *(byte *)(lVar31 + 0xf))))) {
                                  if ((code *)local_270._0_8_ == (code *)0x0) {
                                    if (bVar13) goto LAB_00400fbd;
                                  }
                                  else {
                    /* try { // try from 00400fab to 00401016 has its CatchHandler @ 0040518f */
                                    cVar14 = (*(code *)local_270._0_8_)
                                                       (puVar61,uVar26,local_270._8_8_);
                                    uVar63 = extraout_XMM0_Qa_02;
                                    if (cVar14 == '\0') goto LAB_00400fb8;
                                  }
                                  if (local_260 != (hb_aat_apply_context_t *)0x0) {
                                    local_260 = local_260 + 2;
                                  }
                                  uVar39 = (ulong)phStack_290 & 0xffffffff;
                                  pGVar56 = (GDEFVersion1_2<OT::Layout::SmallTypes> *)(uVar39 * 5);
                                  param_14 = (ulong)(byte)phVar62[8];
                                  uVar16 = *(ushort *)(phVar62 + 6) << 8 |
                                           *(ushort *)(phVar62 + 6) >> 8;
                                  hVar4 = phVar62[10];
                                  if (*(uint *)(phVar9 + uVar43 * 0x14) < (uint)uVar16) {
                                    phVar57 = phVar62 + (ulong)*(uint *)(phVar9 + uVar43 * 0x14) +
                                                        param_14 * 2 + 0xc;
                                  }
                                  else {
                                    phVar57 = (hb_aat_apply_context_t *)&_hb_NullPool;
                                  }
                                  lVar54 = (ulong)uVar16 + param_14 * 2 + 0xc;
                                  phVar24 = (hb_aat_apply_context_t *)(ulong)(byte)*phVar57;
                                  if (*(uint *)(phVar9 + uVar39 * 0x14) < (uint)uVar16) {
                                    phVar19 = phVar62 + (ulong)*(uint *)(phVar9 + uVar39 * 0x14) +
                                                        lVar54;
                                  }
                                  else {
                                    phVar19 = (hb_aat_apply_context_t *)&_hb_NullPool;
                                  }
                                  if ((byte)phVar62[9] <= (byte)*phVar57) goto LAB_00400e07;
                                  if ((byte)hVar4 <= (byte)*phVar19) goto LAB_00400e07;
                                  phVar24 = (hb_aat_apply_context_t *)
                                            ((long)phVar24 * (ulong)(uint)(byte)hVar4 +
                                            (ulong)(byte)*phVar19);
                                  if ((uint)phVar24 < (uint)(byte)phVar62[9] * (uint)(byte)hVar4) {
                                    hVar4 = (phVar62 + (ulong)uVar16 + lVar54)[(long)phVar24];
                                  }
                                  else {
                                    hVar4 = _hb_NullPool._0_1_;
                                  }
                                  uVar16 = (ushort)_hb_NullPool;
                                  if ((byte)hVar4 < (byte)phVar62[8]) {
                                    phVar24 = phVar62;
                                    uVar16 = *(ushort *)(phVar62 + (ulong)(byte)hVar4 * 2 + 0xc);
                                  }
                                  if (uVar16 == 0) goto LAB_00400e07;
                                  lVar54 = (long)(short)(uVar16 << 8 | uVar16 >> 8);
                                  if ((uVar36 & 0xfffffffe) == 4) {
                                    iVar58 = (int)((ulong)(lVar54 * *(long *)(lVar38 + 0x58) +
                                                          0x8000) >> 0x10);
                                    if (((byte)hVar3 & 4) != 0) {
                                      *(int *)(phVar51 + (uVar39 * 5 + 3) * 4) = iVar58;
                                      goto LAB_00401214;
                                    }
                                    uVar28 = iVar58 >> 1;
                                    *(uint *)(phVar51 + uVar43 * 0x14) =
                                         *(int *)(phVar51 + uVar43 * 0x14) + uVar28;
                                    *(uint *)(phVar51 + uVar39 * 0x14) =
                                         *(int *)(phVar51 + uVar39 * 0x14) + (iVar58 - uVar28);
                                    *(uint *)(phVar51 + (uVar39 * 5 + 2) * 4) =
                                         *(int *)(phVar51 + (uVar39 * 5 + 2) * 4) +
                                         (iVar58 - uVar28);
                                    phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28;
                                  }
                                  else {
                                    iVar58 = (int)((ulong)(lVar54 * *(long *)(lVar38 + 0x60) +
                                                          0x8000) >> 0x10);
                                    if (((byte)hVar3 & 4) == 0) {
                                      uVar28 = iVar58 >> 1;
                                      phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28;
                                      *(uint *)(phVar51 + (uVar43 * 5 + 1) * 4) =
                                           *(int *)(phVar51 + (uVar43 * 5 + 1) * 4) + uVar28;
                                      *(uint *)(phVar51 + (uVar39 * 5 + 1) * 4) =
                                           *(int *)(phVar51 + (uVar39 * 5 + 1) * 4) +
                                           (iVar58 - uVar28);
                                      *(uint *)(phVar51 + (uVar39 * 5 + 3) * 4) =
                                           *(int *)(phVar51 + (uVar39 * 5 + 3) * 4) +
                                           (iVar58 - uVar28);
                                    }
                                    else {
                                      *(int *)(phVar51 + (uVar39 * 5 + 2) * 4) = iVar58;
LAB_00401214:
                                      phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8);
                                      phVar24 = phVar51;
                                    }
                                  }
                                  uVar63 = hb_buffer_t::unsafe_to_break
                                                     (phVar23,uVar47,(uint)phStack_290 + 1);
                                  uVar47 = (uint)phStack_290;
                                  goto LAB_00401037;
                                }
LAB_00400fb8:
                                if (!bVar13) break;
                              }
                              else if ((local_280[0] & 0x10) == 0) {
                                if (((local_280[0] & 0xff00) == 0) ||
                                   (uVar28 = uVar16 & 0xff00,
                                   phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28,
                                   (local_280[0] & 0xff00) == uVar28)) goto LAB_00400ed9;
                              }
                              else {
                                uVar18 = OT::GDEF::accelerator_t::mark_set_covers
                                                   (*(accelerator_t **)(local_288 + 0xf8),
                                                    local_280[0] >> 0x10,*puVar61);
                                uVar63 = extraout_XMM0_Qa_03;
                                if ((char)uVar18 != '\0') goto LAB_00400ed9;
                              }
LAB_00400fbd:
                              uVar39 = (ulong)phStack_290 & 0xffffffff;
                              if (iVar58 <= (int)(uint)phStack_290) break;
                              phVar24 = *(hb_aat_apply_context_t **)(local_288 + 0xa0);
                            } while( true );
                          }
                          uVar47 = uVar47 + 1;
LAB_00401037:
                          uVar39 = (ulong)uVar47;
                        }
LAB_00400e07:
                        uVar43 = uVar39;
                      } while ((uint)uVar39 < uVar55);
                    }
                    /* try { // try from 00402411 to 00402428 has its CatchHandler @ 00405180 */
                    hb_buffer_t::message
                              (uVar63,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                               phVar23,lVar38,"end kern",phVar24,pGVar56,param_14,
                               in_stack_fffffffffffffce8);
                    free(local_190);
                    phVar24 = (hb_aat_apply_context_t *)
                              hb_sanitize_context_t::~hb_sanitize_context_t(local_1f0);
                  }
                }
              }
            }
            local_100 = *(uint *)(local_e8 + 0x18);
            local_110._8_8_ = *(long *)(local_e8 + 0x10) + (ulong)local_100;
            local_110._0_8_ = *(long *)(local_e8 + 0x10);
            if ((int)local_148 == 5) {
              uVar34 = *(uint *)(local_120 + 0x60);
              if (1 < uVar34) {
                puVar30 = *(ulong **)(local_120 + 0x70);
                uVar43 = (ulong)(uVar34 - 1);
                puVar50 = (ulong *)((long)puVar30 + uVar43 * 0x14);
                uVar39 = 0;
                do {
                  uVar43 = uVar43 - 1;
                  uVar11 = puVar50[2];
                  local_288 = (hb_aat_apply_context_t *)CONCAT44(local_288._4_4_,(int)uVar11);
                  phVar24 = (hb_aat_apply_context_t *)*puVar50;
                  phStack_290 = (hb_aat_apply_context_t *)puVar50[1];
                  *(int *)(puVar50 + 2) = (int)puVar30[2];
                  uVar25 = puVar30[1];
                  *puVar50 = *puVar30;
                  puVar50[1] = uVar25;
                  *(int *)(puVar30 + 2) = (int)uVar11;
                  *puVar30 = (ulong)phVar24;
                  puVar30[1] = (ulong)phStack_290;
                  uVar39 = uVar39 + 1;
                  puVar30 = (ulong *)((long)puVar30 + 0x14);
                  puVar50 = (ulong *)((long)puVar50 + -0x14);
                  local_298 = phVar24;
                } while (uVar39 < (uVar43 & 0xffffffff));
              }
              if (local_120[0x5b] != (hb_buffer_t)0x0) {
                if (*(uint *)(local_120 + 0x60) < uVar34) {
                  uVar34 = *(uint *)(local_120 + 0x60);
                }
                if (1 < uVar34) {
                  puVar30 = *(ulong **)(local_120 + 0x80);
                  uVar43 = (ulong)(uVar34 - 1);
                  puVar50 = (ulong *)((long)puVar30 + uVar43 * 0x14);
                  uVar39 = 0;
                  do {
                    uVar43 = uVar43 - 1;
                    uVar11 = puVar50[2];
                    local_288 = (hb_aat_apply_context_t *)CONCAT44(local_288._4_4_,(int)uVar11);
                    phVar24 = (hb_aat_apply_context_t *)*puVar50;
                    phStack_290 = (hb_aat_apply_context_t *)puVar50[1];
                    *(int *)(puVar50 + 2) = (int)puVar30[2];
                    uVar25 = puVar30[1];
                    *puVar50 = *puVar30;
                    puVar50[1] = uVar25;
                    *(int *)(puVar30 + 2) = (int)uVar11;
                    *puVar30 = (ulong)phVar24;
                    puVar30[1] = (ulong)phStack_290;
                    uVar39 = uVar39 + 1;
                    puVar30 = (ulong *)((long)puVar30 + 0x14);
                    puVar50 = (ulong *)((long)puVar50 + -0x14);
                    local_298 = phVar24;
                  } while (uVar39 < (uVar43 & 0xffffffff));
                }
              }
            }
                    /* try { // try from 00402607 to 00402614 has its CatchHandler @ 004051db */
            hb_buffer_t::message
                      (phVar24,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                       local_120,local_130,"end subtable %u",(ulong)local_5c,pGVar56,param_14,
                       in_stack_fffffffffffffce8);
            auVar64 = extraout_XMM0_01;
          }
        }
        uVar63 = auVar64._0_8_;
        local_5c = local_5c + 1;
        phVar23 = (hb_buffer_t *)(ulong)local_5c;
        uVar40 = uVar40 + 1;
        if (uVar40 == uVar59) break;
        phVar62 = phVar62 + (ushort)(*(ushort *)(phVar62 + 2) << 8 | *(ushort *)(phVar62 + 2) >> 8);
      } while( true );
    }
  }
                    /* try { // try from 00404ed3 to 00404eeb has its CatchHandler @ 004051d9 */
  hb_buffer_t::message
            (uVar63,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,local_48,param_10,
             "end table kern",phVar23,pGVar56,param_14,in_stack_fffffffffffffce8);
LAB_00404eec:
  AAT::hb_aat_apply_context_t::~hb_aat_apply_context_t(local_140);
  return;
LAB_00403aeb:
  uVar36 = uVar55;
  goto LAB_00404085;
LAB_00404058:
  pvVar53 = pvVar44;
  goto LAB_0040405b;
LAB_00404498:
  do {
    uVar48 = (uint)(iVar58 + iVar42) >> 1;
    lVar31 = (ulong)uVar48 * 6;
    uVar45 = (uint)(ushort)(*(ushort *)(phVar62 + lVar31 + 0x10) << 8 |
                           *(ushort *)(phVar62 + lVar31 + 0x10) >> 8);
    if (uVar37 != uVar45) {
      if (uVar45 <= uVar37) goto LAB_004044d3;
LAB_0040448f:
      iVar58 = uVar48 - 1;
      if (iVar58 < iVar42) break;
      goto LAB_00404498;
    }
    uVar45 = (uint)(ushort)(*(ushort *)(phVar62 + lVar31 + 0x12) << 8 |
                           *(ushort *)(phVar62 + lVar31 + 0x12) >> 8);
    if (uVar46 < uVar45) goto LAB_0040448f;
    if (uVar46 == uVar45) {
      phVar51 = phVar62 + (ulong)uVar48 * 6 + 0x10;
      goto LAB_004044f1;
    }
LAB_004044d3:
    iVar42 = uVar48 + 1;
  } while (iVar42 <= iVar58);
  phVar51 = (hb_aat_apply_context_t *)&_hb_NullPool;
LAB_004044f1:
  uVar16 = *(ushort *)(phVar51 + 4);
  if (uVar16 == 0) {
LAB_0040438f:
    goto LAB_0040414c;
  }
  lVar31 = (long)(short)(uVar16 << 8 | uVar16 >> 8);
  if ((uVar47 & 0xfffffffe) == 4) {
    uVar43 = lVar31 * *(long *)(lVar38 + 0x58) + 0x8000;
    iVar58 = (int)(uVar43 >> 0x10);
    if (((byte)hVar3 & 0x40) != 0) {
      *(int *)(lVar54 + 0xc + uVar40 * 0x14) = iVar58;
      goto LAB_004045a1;
    }
    piVar2 = (int *)(lVar54 + uVar59 * 0x14);
    *piVar2 = *piVar2 + (iVar58 >> 1);
    uVar37 = iVar58 - (iVar58 >> 1);
    phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37;
    piVar2 = (int *)(lVar54 + uVar40 * 0x14);
    *piVar2 = *piVar2 + uVar37;
    piVar2 = (int *)(lVar54 + 8 + uVar40 * 0x14);
    *piVar2 = *piVar2 + uVar37;
  }
  else {
    uVar43 = lVar31 * *(long *)(lVar38 + 0x60) + 0x8000;
    iVar58 = (int)(uVar43 >> 0x10);
    if (((byte)hVar3 & 0x40) == 0) {
      piVar2 = (int *)(lVar54 + 4 + uVar59 * 0x14);
      *piVar2 = *piVar2 + (iVar58 >> 1);
      uVar37 = iVar58 - (iVar58 >> 1);
      phVar24 = (hb_aat_apply_context_t *)(ulong)uVar37;
      piVar2 = (int *)(lVar54 + 4 + uVar40 * 0x14);
      *piVar2 = *piVar2 + uVar37;
      piVar2 = (int *)(lVar54 + 0xc + uVar40 * 0x14);
      *piVar2 = *piVar2 + uVar37;
    }
    else {
      *(int *)(lVar54 + 8 + uVar40 * 0x14) = iVar58;
LAB_004045a1:
      phVar24 = (hb_aat_apply_context_t *)(uVar43 >> 0x10);
      phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8);
    }
  }
  uVar63 = hb_buffer_t::unsafe_to_break(phVar23,uVar28,(uint)phStack_290 + 1);
  uVar40 = (ulong)phStack_290 & 0xffffffff;
LAB_0040414c:
  uVar59 = uVar40;
  if (uVar36 <= (uint)uVar40) goto LAB_00404c84;
  goto LAB_00404158;
LAB_0040146a:
  uVar55 = uVar34;
  goto LAB_00401a62;
LAB_00401a35:
  pvVar53 = pvVar44;
  goto LAB_00401a38;
LAB_00401e26:
  do {
    uVar45 = (uint)(iVar42 + iVar58) >> 1;
    lVar31 = (ulong)uVar45 * 6;
    uVar46 = (uint)(ushort)(*(ushort *)(phVar62 + lVar31 + 0xe) << 8 |
                           *(ushort *)(phVar62 + lVar31 + 0xe) >> 8);
    if (uVar28 != uVar46) {
      if (uVar46 <= uVar28) goto LAB_00401e62;
LAB_00401e1b:
      iVar42 = uVar45 - 1;
      if (iVar42 < iVar58) break;
      goto LAB_00401e26;
    }
    uVar46 = (uint)(ushort)(*(ushort *)(phVar62 + lVar31 + 0x10) << 8 |
                           *(ushort *)(phVar62 + lVar31 + 0x10) >> 8);
    if (uVar37 < uVar46) goto LAB_00401e1b;
    if (uVar37 == uVar46) {
      phVar51 = phVar62 + (ulong)uVar45 * 6 + 0xe;
      goto LAB_00401e81;
    }
LAB_00401e62:
    iVar58 = uVar45 + 1;
  } while (iVar58 <= iVar42);
  phVar51 = (hb_aat_apply_context_t *)&_hb_NullPool;
LAB_00401e81:
  uVar16 = *(ushort *)(phVar51 + 4);
  if (uVar16 == 0) goto LAB_00401b05;
  lVar31 = (long)(short)(uVar16 << 8 | uVar16 >> 8);
  if ((uVar36 & 0xfffffffe) == 4) {
    uVar25 = lVar31 * *(long *)(lVar38 + 0x58) + 0x8000;
    iVar58 = (int)(uVar25 >> 0x10);
    if (((byte)hVar3 & 4) != 0) {
      *(int *)(lVar54 + 0xc + uVar39 * 0x14) = iVar58;
      goto LAB_00401f23;
    }
    piVar2 = (int *)(lVar54 + uVar43 * 0x14);
    *piVar2 = *piVar2 + (iVar58 >> 1);
    uVar28 = iVar58 - (iVar58 >> 1);
    phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28;
    piVar2 = (int *)(lVar54 + uVar39 * 0x14);
    *piVar2 = *piVar2 + uVar28;
    piVar2 = (int *)(lVar54 + 8 + uVar39 * 0x14);
    *piVar2 = *piVar2 + uVar28;
  }
  else {
    uVar25 = lVar31 * *(long *)(lVar38 + 0x60) + 0x8000;
    iVar58 = (int)(uVar25 >> 0x10);
    if (((byte)hVar3 & 4) == 0) {
      piVar2 = (int *)(lVar54 + 4 + uVar43 * 0x14);
      *piVar2 = *piVar2 + (iVar58 >> 1);
      uVar28 = iVar58 - (iVar58 >> 1);
      phVar24 = (hb_aat_apply_context_t *)(ulong)uVar28;
      piVar2 = (int *)(lVar54 + 4 + uVar39 * 0x14);
      *piVar2 = *piVar2 + uVar28;
      piVar2 = (int *)(lVar54 + 0xc + uVar39 * 0x14);
      *piVar2 = *piVar2 + uVar28;
    }
    else {
      *(int *)(lVar54 + 8 + uVar39 * 0x14) = iVar58;
LAB_00401f23:
      phVar24 = (hb_aat_apply_context_t *)(uVar25 >> 0x10);
      phVar23[0xc0] = (hb_buffer_t)((byte)phVar23[0xc0] | 8);
    }
  }
  uVar63 = hb_buffer_t::unsafe_to_break(phVar23,uVar47,(uint)phStack_290 + 1);
  uVar39 = (ulong)phStack_290 & 0xffffffff;
LAB_00401b05:
  uVar43 = uVar39;
  if (uVar55 <= (uint)uVar39) goto LAB_00402654;
  goto LAB_00401b11;
}


