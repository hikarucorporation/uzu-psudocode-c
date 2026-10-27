// Function : hb_ot_draw_glyph
// Namespace: 
// Entry    : 00444aa0
// Prototype: undefined hb_ot_draw_glyph(void * param_1, undefined8 param_2, uint param_3, hb_draw_funcs_t * param_4, undefined8 * param_5)
// Body     : 00444aa0 - 0044758a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_draw_glyph(hb_font_t*, void*, unsigned int, hb_draw_funcs_t*, void*, void*) */

void __cdecl
hb_ot_draw_glyph(void *param_1,undefined8 param_2,uint param_3,hb_draw_funcs_t *param_4,
                undefined8 *param_5)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  hb_face_t *phVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 in_RAX;
  ulong uVar13;
  undefined6 extraout_var;
  accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
  *paVar14;
  glyf_accelerator_t *this;
  hb_draw_funcs_t *phVar15;
  accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
  *paVar16;
  uint uVar17;
  ushort *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  float *pfVar21;
  hb_draw_funcs_t *phVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  float *pfVar26;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar27;
  uint uVar28;
  float *pfVar29;
  uint *puVar30;
  accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
  *paVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  int iVar35;
  float *pfVar36;
  ulong uVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  double *pdVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  float fVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  uint in_XMM11_Db;
  float in_XMM11_Dc;
  float in_XMM11_Dd;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 local_1328 [8];
  undefined8 uStack_1320;
  undefined1 local_1318 [16];
  undefined1 local_1308 [8];
  float fStack_1300;
  float fStack_12fc;
  float local_12e8;
  char local_12e4;
  hb_draw_funcs_t *local_12e0;
  undefined8 *local_12d8;
  undefined8 local_12d0;
  float fStack_12c8;
  float fStack_12c4;
  float local_12c0;
  undefined4 uStack_12bc;
  undefined8 uStack_12b8;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  float local_129c;
  undefined8 local_1298;
  undefined8 uStack_1290;
  long local_1280;
  undefined1 local_1278 [8];
  float fStack_1270;
  float fStack_126c;
  undefined8 *local_1268;
  uint local_1260;
  float local_125c;
  float local_1258;
  float fStack_1254;
  float fStack_1250;
  float fStack_124c;
  undefined8 local_1248;
  void *pvStack_1240;
  ulong local_1238;
  uint *puStack_1230;
  undefined8 local_1228;
  void *pvStack_1220;
  float local_120c;
  undefined1 local_1208 [16];
  undefined8 local_11f8;
  float fStack_11f0;
  float fStack_11ec;
  float local_11e8;
  uint uStack_11e4;
  float fStack_11e0;
  float fStack_11dc;
  undefined8 local_11d8;
  float fStack_11d0;
  float fStack_11cc;
  float fStack_11c8;
  uint uStack_11c4;
  undefined8 uStack_11c0;
  double local_11b8 [512];
  undefined8 local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  char local_1a0;
  undefined2 local_19f;
  undefined8 local_19c;
  undefined4 local_194;
  char local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined4 local_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_98;
  uint *local_90;
  undefined4 local_88;
  uint *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  int local_60;
  short *local_58;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  void *pvStack_40;
  char local_38;
  undefined2 local_37;
  
  phVar22 = param_4;
  puVar25 = param_5;
  local_1268 = param_5;
  if (*(int *)((long)param_1 + 0x3c) == 0) {
    local_1238 = 0;
    puStack_1230 = (uint *)0x0;
    local_1248 = 0;
    pvStack_1240 = (void *)0x0;
    if (*(int *)((long)param_1 + 0x40) != 0) goto LAB_00444afe;
    auVar64._12_4_ = 0;
    auVar64._0_12_ = local_1208._4_12_;
    local_1208 = auVar64 << 0x20;
    local_12e0 = param_4;
  }
  else {
LAB_00444afe:
    puStack_1230 = (uint *)0x0;
    local_1238 = 0;
    pvStack_1240 = (void *)0x0;
    local_1248 = 0;
    if (static_outline_recording_pen_funcs == (hb_draw_funcs_t *)0x0) {
      do {
                    /* try { // try from 004474a8 to 004474dd has its CatchHandler @ 0044758d */
        local_12e0 = (hb_draw_funcs_t *)hb_outline_recording_pen_funcs_lazy_loader_t::create();
        if (local_12e0 == (hb_draw_funcs_t *)0x0) {
          local_12e0 = (hb_draw_funcs_t *)&_hb_Null_hb_draw_funcs_t;
        }
        phVar15 = (hb_draw_funcs_t *)0x0;
        LOCK();
        bVar42 = static_outline_recording_pen_funcs == (hb_draw_funcs_t *)0x0;
        if (bVar42) {
          static_outline_recording_pen_funcs = local_12e0;
        }
        else {
          phVar15 = static_outline_recording_pen_funcs;
        }
        UNLOCK();
        in_RAX = CONCAT71((int7)((ulong)phVar15 >> 8),1);
        local_1208._0_4_ = (int)in_RAX;
        param_5 = &local_1248;
        if (bVar42) goto LAB_00444b1f;
        if ((local_12e0 != (hb_draw_funcs_t *)0x0) &&
           (local_12e0 != (hb_draw_funcs_t *)&_hb_Null_hb_draw_funcs_t)) {
          in_RAX = hb_draw_funcs_destroy((int *)local_12e0);
        }
      } while (static_outline_recording_pen_funcs == (hb_draw_funcs_t *)0x0);
    }
    local_1208._0_4_ = (int)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    param_5 = &local_1248;
    local_12e0 = static_outline_recording_pen_funcs;
  }
LAB_00444b1f:
  local_12e8 = *(float *)((long)param_1 + 0x48);
  local_12e4 = local_12e8 == 0.0;
  pfVar21 = (float *)CONCAT71((int7)((ulong)phVar22 >> 8),local_12e4);
  local_12d0 = 0;
  fStack_12c8 = 0.0;
  fStack_12c4 = 0.0;
  local_12c0 = 0.0;
  uStack_12bc = 0;
  uStack_12b8 = 0;
  local_12b0 = 0;
  uStack_12a8 = 0;
  lVar40 = *(long *)((long)param_1 + 0x20);
  this = *(glyf_accelerator_t **)(lVar40 + 0xe0);
  local_12d8 = param_5;
  while (this == (glyf_accelerator_t *)0x0) {
    phVar4 = *(hb_face_t **)(lVar40 + 0x68);
    if (phVar4 == (hb_face_t *)0x0) {
LAB_00447472:
      this = (glyf_accelerator_t *)&_hb_NullPool;
      break;
    }
    this = calloc(1,0x30);
    if (this == (glyf_accelerator_t *)0x0) {
      LOCK();
      bVar42 = *(long *)(lVar40 + 0xe0) == 0;
      if (bVar42) {
        *(long *)(lVar40 + 0xe0) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar42) goto LAB_00447472;
    }
    else {
                    /* try { // try from 00447427 to 00447431 has its CatchHandler @ 0044758f */
      OT::glyf_accelerator_t::glyf_accelerator_t(this,phVar4,extraout_RDX,pfVar21,puVar25);
      LOCK();
      bVar42 = *(long *)(lVar40 + 0xe0) == 0;
      if (bVar42) {
        *(long *)(lVar40 + 0xe0) = (long)this;
      }
      UNLOCK();
      if (bVar42) break;
      OT::glyf_accelerator_t::~glyf_accelerator_t(this);
      free(this);
    }
    this = *(glyf_accelerator_t **)(lVar40 + 0xe0);
  }
  local_1260 = local_1260 & 0xffffff00;
  if (*(uint *)(this + 0x1c) <= param_3) {
LAB_00445cf5:
    lVar40 = *(long *)((long)param_1 + 0x20);
    paVar16 = *(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                **)(lVar40 + 0xf0);
    if (paVar16 ==
        (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
         *)0x0) {
      paVar31 = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                 *)&_hb_NullPool;
      do {
        lVar5 = *(long *)(lVar40 + 0x68);
        if (lVar5 == 0) goto LAB_00445d0c;
        paVar16 = calloc(1,200);
        if (paVar16 ==
            (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
             *)0x0) {
          LOCK();
          bVar42 = *(long *)(lVar40 + 0xf0) == 0;
          if (bVar42) {
            *(long *)(lVar40 + 0xf0) = (long)&_hb_NullPool;
          }
          UNLOCK();
          if (bVar42) goto LAB_00445d0c;
        }
        else {
                    /* try { // try from 00447520 to 0044752a has its CatchHandler @ 0044758b */
          OT::cff2::
          accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
          ::accelerator_templ_t(paVar16,lVar5,extraout_RDX_00,pfVar21,puVar25);
          LOCK();
          bVar42 = *(long *)(lVar40 + 0xf0) == 0;
          if (bVar42) {
            *(long *)(lVar40 + 0xf0) = (long)paVar16;
          }
          UNLOCK();
          if (bVar42) {
            paVar31 = paVar16;
            goto LAB_00445d0c;
          }
          OT::cff2::
          accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
          ::~accelerator_templ_t(paVar16);
          free(paVar16);
        }
        paVar16 = *(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                    **)(lVar40 + 0xf0);
      } while (paVar16 ==
               (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                *)0x0);
    }
    paVar31 = paVar16;
LAB_00445d0c:
    if ((*(long *)(paVar31 + 0x40) != 0) && (param_3 < *(uint *)(paVar31 + 0xc0))) {
      local_1298 = *(ulong *)((long)param_1 + 0x80);
      iVar35 = *(int *)((long)param_1 + 0x78);
                    /* try { // try from 00445d4a to 00445d65 has its CatchHandler @ 004475bd */
      uVar9 = CFF::CFF2FDSelect::get_fd(*(CFF2FDSelect **)(paVar31 + 0x90),param_3);
      auVar64 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[]
                          (*(CFFIndex<OT::IntType<unsigned_int,4u>> **)(paVar31 + 0x80),param_3);
      uVar13 = auVar64._8_8_;
      puVar24 = &_hb_NullPool;
      if ((uint)CONCAT62(extraout_var,uVar9) < *(uint *)(paVar31 + 0xb4)) {
        puVar24 = (undefined4 *)
                  ((CONCAT62(extraout_var,uVar9) & 0xffffffff) * 0x30 + *(long *)(paVar31 + 0xb8));
      }
      puVar30 = *(uint **)(paVar31 + 0x70);
      puVar3 = *(uint **)(puVar24 + 8);
      memset(&uStack_11c4,0,0x100c);
      fStack_11c8 = (float)((uint)fStack_11c8 & 0xffffff00);
      local_11d8._0_4_ = auVar64._0_4_;
      local_11d8._4_4_ = auVar64._4_4_;
      fStack_11d0 = auVar64._8_4_;
      fStack_11cc = 0.0;
      local_190 = '\0';
      local_170 = 0;
      uStack_168 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_18c = 0;
      uStack_184 = 0;
      local_17c = 0;
      local_1b8 = auVar64._0_8_;
      local_1b0 = uVar13 & 0xffffffff;
      local_1a8 = 0;
      local_19f = 1;
      local_19c = 0;
      local_194 = 0;
      local_78 = 0;
      uStack_70 = 0;
      if (puVar30 == (uint *)0x0) {
LAB_00445e9b:
        local_98 = 0x6b;
joined_r0x00445eb9:
        if (puVar3 == (uint *)0x0) goto LAB_00445f2b;
LAB_00445f1f:
        uVar10 = *puVar3;
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        if (uVar10 < 0x4d8) goto LAB_00445f2b;
        if (uVar10 < 0x846c) {
          local_88 = 0x46b;
        }
        else {
          local_88 = 0x8000;
        }
      }
      else {
        uVar10 = *puVar30;
        uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
        ;
        if (uVar10 < 0x4d8) goto LAB_00445e9b;
        if (uVar10 < 0x846c) {
          local_98 = 0x46b;
          goto joined_r0x00445eb9;
        }
        local_98 = 0x8000;
        if (puVar3 != (uint *)0x0) goto LAB_00445f1f;
LAB_00445f2b:
        local_88 = 0x6b;
      }
      dVar45 = 0.0;
      local_48 = 0;
      pvStack_40 = (void *)0x0;
      local_37 = 0;
      local_68 = local_1298;
      local_58 = *(short **)(paVar31 + 0x78);
      if (local_1298 == 0) {
        local_38 = false;
      }
      else {
        local_38 = false;
        if (iVar35 != 0) {
          local_38 = *local_58 != 0;
        }
      }
      local_4c = puVar24[10];
      local_1228 = &local_12e8;
      local_1a0 = '\0';
      iVar27 = 200000;
      pvStack_1220 = param_1;
      local_90 = puVar30;
      local_80 = puVar3;
      local_60 = iVar35;
      do {
        fVar44 = (float)((int)fStack_11cc + 1);
        uVar10 = (uint)uVar13;
        if ((uint)fVar44 <= uVar10) {
          uVar34 = (uint)*(byte *)(CONCAT44(local_11d8._4_4_,(int)local_11d8) +
                                  (ulong)(uint)fStack_11cc);
          if (uVar34 == 0xc) {
            if (uVar10 < (int)fStack_11cc + 2U) {
              uVar34 = 0xffff;
              fStack_11cc = fVar44;
              goto switchD_004460ad_caseD_b;
            }
            uVar34 = *(byte *)(CONCAT44(local_11d8._4_4_,(int)local_11d8) + (ulong)(uint)fVar44) |
                     0x100;
            fVar44 = (float)((int)fStack_11cc + 2U);
          }
          fStack_11cc = fVar44;
          switch(uVar34) {
          case 10:
          case 0x1d:
            uVar10 = CFF::
                     cs_opset_t<CFF::number_t,cff2_cs_opset_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t,cff2_path_procs_path_t>
                     ::process_op(SUB84(dVar45,0),uVar34,(long *)&local_11d8,&local_1228);
            goto LAB_00446013;
          default:
            goto switchD_004460ad_caseD_b;
          case 0xf:
            if (uStack_11c4 == 0) {
              _hb_CrapPool = 0;
LAB_00446644:
              fStack_11c8 = (float)CONCAT31(fStack_11c8._1_3_,1);
              iVar35 = 0;
              if ((char)local_37 != '\0') goto LAB_00446669;
LAB_004461c3:
              if (local_37._1_1_ != '\0') goto LAB_00446669;
              local_4c = iVar35;
            }
            else {
              iVar35 = (int)local_11b8[(ulong)(uStack_11c4 - 1) - 1];
              if (iVar35 < 0) goto LAB_00446644;
              if ((char)local_37 == '\0') goto LAB_004461c3;
LAB_00446669:
              fStack_11cc = (float)(uVar10 + 1);
            }
            local_37 = CONCAT11(local_37._1_1_,1);
            uStack_11c4 = 0;
            goto joined_r0x004461ed;
          case 0x10:
            goto switchD_004460ad_caseD_10;
          }
        }
        uVar34 = (uint)((int)local_18c == 0) * 3 + 0xb;
switchD_004460ad_caseD_b:
                    /* try { // try from 00446008 to 004460c6 has its CatchHandler @ 00447593 */
        uVar10 = CFF::
                 cs_opset_t<CFF::number_t,cff2_cs_opset_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t,cff2_path_procs_path_t>
                 ::process_op(SUB84(dVar45,0),uVar34,(long *)&local_11d8,&local_1228);
LAB_00446013:
        dVar45 = (double)(ulong)uVar10;
joined_r0x004461ed:
        if (local_190 != '\0') goto LAB_004466d0;
LAB_00446021:
        uVar13 = (ulong)(uint)fStack_11d0;
        if ((((uint)fStack_11d0 < (uint)fStack_11cc) || (fStack_11c8._0_1_ != '\0')) ||
           (iVar27 = iVar27 + -1, iVar27 == 0)) goto LAB_004466d0;
      } while (local_1a0 == '\0');
      bVar6 = true;
      bVar42 = true;
      goto joined_r0x004466e6;
    }
    goto LAB_00446704;
  }
  local_1228 = (float *)0x0;
  pvStack_1220 = (void *)0x0;
  puVar24 = *(undefined4 **)(this + 0x20);
  if (puVar24 == (undefined4 *)0x0) {
    puVar24 = &_hb_NullPool;
  }
  uVar13 = (ulong)param_3;
  if (this[0x18] == (glyf_accelerator_t)0x0) {
    uVar10 = *(uint *)(*(long *)(puVar24 + 4) + uVar13 * 4);
    uVar34 = *(uint *)(*(long *)(puVar24 + 4) + 4 + uVar13 * 4);
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    uVar34 = uVar34 >> 0x18 | (uVar34 & 0xff0000) >> 8 | (uVar34 & 0xff00) << 8 | uVar34 << 0x18;
    fStack_11d0 = (float)(uVar34 - uVar10);
    if (uVar10 <= uVar34) goto LAB_00444bf5;
LAB_0044747a:
    local_11d8 = (ushort *)0x0;
    fStack_11d0 = 0.0;
    fStack_11c8 = 8.749932e-39;
    uStack_11c4 = 0;
    iVar35 = 0;
    uVar10 = 0xffffffff;
  }
  else {
    uVar9 = *(ushort *)(*(long *)(puVar24 + 4) + uVar13 * 2);
    uVar2 = *(ushort *)(*(long *)(puVar24 + 4) + 2 + uVar13 * 2);
    uVar12 = (uint)(ushort)(uVar9 << 8 | uVar9 >> 8);
    uVar10 = uVar12 * 2;
    uVar34 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8) * 2;
    fStack_11d0 = (float)(uVar34 + uVar12 * -2);
    if (uVar34 < uVar10) goto LAB_0044747a;
LAB_00444bf5:
    puVar24 = *(undefined4 **)(this + 0x28);
    if (puVar24 == (undefined4 *)0x0) {
      puVar24 = &_hb_NullPool;
    }
    if ((uint)puVar24[6] < uVar34) goto LAB_0044747a;
    local_11d8 = (ushort *)((ulong)uVar10 + *(long *)(puVar24 + 4));
    puVar18 = (ushort *)&_hb_NullPool;
    if (9 < (uint)fStack_11d0) {
      puVar18 = local_11d8;
    }
    uVar9 = *puVar18;
    if (uVar9 == 0) {
      iVar35 = 0;
    }
    else {
      iVar35 = 2 - (uint)(0 < (short)(uVar9 << 8 | uVar9 >> 8));
    }
    fStack_11c8 = SUB84(puVar18,0);
    uStack_11c4 = (uint)((ulong)puVar18 >> 0x20);
    uVar10 = param_3;
  }
  fStack_11cc = 0.0;
  uStack_11c0 = CONCAT44(iVar35,uVar10);
                    /* try { // try from 00444c63 to 00444c95 has its CatchHandler @ 00447591 */
  pfVar21 = (float *)&local_1228;
  puVar25 = (undefined8 *)0x0;
  uVar13 = OT::glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>
                     ((ushort *)&local_11d8,(long)param_1,(ushort *)this,pfVar21,0,
                      *(long *)((long)param_1 + 0x80),*(uint *)((long)param_1 + 0x78),0,
                      (hb_hashmap_t<unsigned_int,unsigned_int,true> *)0x0,0,(uint *)0x0);
  pvVar8 = pvStack_1220;
  local_11e8 = (float)CONCAT31(local_11e8._1_3_,(char)uVar13);
  if ((char)uVar13 != '\0') {
    pfVar21 = (float *)(ulong)local_1228._4_4_;
    uVar10 = local_1228._4_4_ - 4;
    if (local_1228._4_4_ < 4) {
      uVar10 = local_1228._4_4_;
    }
    if (uVar10 != 0) {
      local_1280 = (ulong)uVar10 * 0xc;
      lVar40 = 0;
      local_129c = 0.0;
      bVar6 = false;
      bVar42 = false;
      do {
        puVar7 = local_12d8;
        phVar22 = local_12e0;
        bVar1 = *(byte *)((long)pvVar8 + lVar40 + 8);
        fVar44 = (float)*(undefined8 *)((long)param_1 + 0x4c) *
                 (float)*(undefined8 *)((long)pvVar8 + lVar40);
        fVar48 = (float)((ulong)*(undefined8 *)((long)param_1 + 0x4c) >> 0x20) *
                 (float)((ulong)*(undefined8 *)((long)pvVar8 + lVar40) >> 0x20);
        local_1328 = (undefined1  [8])CONCAT44(fVar48,fVar44);
        uStack_1320 = 0;
        if (bVar42) {
          if (bVar6) {
            if ((bVar1 & 1) != 0) {
              local_1308._4_4_ = fVar48;
              local_1308._0_4_ = fVar48;
              fStack_1300 = fVar48;
              fStack_12fc = fVar48;
              if (local_12e4 == '\0') {
                local_1278._0_4_ = local_12e8;
                if ((int)local_12d0 == 0) {
                  hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
                }
                if (*(long *)(phVar22 + 0x38) == 0) {
                  pfVar21 = (float *)0x0;
                }
                else {
                  pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
                }
                local_1328._4_4_ = fVar48;
                local_1328._0_4_ = fVar44 + (float)local_1278._0_4_ * fVar48;
                uStack_1320 = 0;
                (**(code **)(phVar22 + 0x20))
                          (local_1298._4_4_ * (float)local_1278._0_4_ + (float)local_1298,phVar22,
                           puVar7,&local_12d0);
              }
              else {
                if ((int)local_12d0 == 0) {
                  hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
                }
                if (*(long *)(phVar22 + 0x38) == 0) {
                  pfVar21 = (float *)0x0;
                }
                else {
                  pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
                }
                (**(code **)(phVar22 + 0x20))(phVar22,puVar7,&local_12d0);
              }
              fStack_12c4 = (float)local_1328._0_4_;
              goto LAB_00444eea;
            }
            local_1308._4_4_ = fVar48 + local_1298._4_4_;
            fStack_1300 = (float)uStack_1290 + 0.0;
            fStack_12fc = uStack_1290._4_4_ + 0.0;
            fVar44 = (fVar44 + (float)local_1298) * DAT_005d9044;
            local_11f8 = (uint *)CONCAT44(local_1298._4_4_,local_1298._4_4_);
            fStack_11f0 = local_1298._4_4_;
            fStack_11ec = local_1298._4_4_;
            local_1278._4_4_ = local_1308._4_4_;
            local_1278._0_4_ = (float)local_1308._4_4_ * DAT_005d9044;
            fStack_1270 = (float)local_1308._4_4_;
            fStack_126c = (float)local_1308._4_4_;
            if (local_12e4 == '\0') {
              local_120c = local_12e8;
              if ((int)local_12d0 == 0) {
                hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
              }
              if (*(long *)(phVar22 + 0x38) == 0) {
                pfVar21 = (float *)0x0;
              }
              else {
                pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
              }
              fVar48 = local_120c * (float)local_1278._0_4_;
              (**(code **)(phVar22 + 0x20))
                        ((float)local_11f8 * local_120c + (float)local_1298,phVar22,puVar7,
                         &local_12d0);
              fStack_12c4 = fVar44 + fVar48;
            }
            else {
              if ((int)local_12d0 == 0) {
                hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
              }
              if (*(long *)(phVar22 + 0x38) == 0) {
                pfVar21 = (float *)0x0;
              }
              else {
                pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
              }
                    /* try { // try from 00444e2f to 00445cc7 has its CatchHandler @ 004475c2 */
              (**(code **)(phVar22 + 0x20))((float)local_1298,phVar22,puVar7,&local_12d0);
              fStack_12c4 = fVar44;
            }
            local_1308._0_4_ = fStack_12c4;
            local_12c0 = (float)local_1278._0_4_;
LAB_00444e76:
            bVar6 = true;
            uStack_1290 = 0;
            local_1298 = (ulong)local_1328;
          }
          else {
            if ((bVar1 & 1) == 0) goto LAB_00444e76;
            if (local_12e4 == '\0') {
              local_1278._4_4_ = fVar48;
              local_1278._0_4_ = fVar48;
              fStack_1270 = fVar48;
              fStack_126c = fVar48;
              fVar49 = local_12e8 * fVar48;
              if ((int)local_12d0 == 0) {
                hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
              }
              if (*(long *)(phVar22 + 0x38) == 0) {
                pfVar21 = (float *)0x0;
              }
              else {
                pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 8);
              }
              fVar44 = fVar49 + fVar44;
              local_1308._0_4_ = fVar44;
              (**(code **)(phVar22 + 0x18))(phVar22,puVar7,&local_12d0);
            }
            else {
              if ((int)local_12d0 == 0) {
                hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
              }
              if (*(long *)(phVar22 + 0x38) == 0) {
                pfVar21 = (float *)0x0;
              }
              else {
                pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 8);
              }
              (**(code **)(phVar22 + 0x18))(phVar22,puVar7,&local_12d0);
            }
            fStack_12c4 = fVar44;
LAB_00444eea:
            bVar6 = false;
            local_12c0 = fVar48;
          }
          _local_1328 = local_1318;
          auVar46 = _local_1328;
LAB_00444efb:
          _local_1328 = auVar46;
          puVar7 = local_12d8;
          phVar22 = local_12e0;
          fVar44 = local_12e8;
          if (*(char *)((long)pvVar8 + lVar40 + 9) != '\0') {
            if (local_129c._0_1_ == '\0') {
              local_1318._0_4_ = local_1328._4_4_;
              if (bVar6) {
                if (local_12e4 != '\0') {
                  if ((int)local_12d0 == 0) {
                    hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
                  }
                  if (*(long *)(phVar22 + 0x38) == 0) {
                    pfVar21 = (float *)0x0;
                  }
                  else {
                    pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
                  }
                  (**(code **)(phVar22 + 0x20))(phVar22,puVar7,&local_12d0);
                  goto LAB_004454d8;
                }
                if ((int)local_12d0 == 0) {
                  hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
                }
                if (*(long *)(phVar22 + 0x38) == 0) {
                  pfVar21 = (float *)0x0;
                }
                else {
                  pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
                }
                local_1308._4_4_ = local_1328._4_4_;
                local_1308._0_4_ = (float)local_1328._4_4_ * fVar44 + (float)local_1328._0_4_;
                fStack_1300 = (float)local_1328._4_4_;
                fStack_12fc = (float)local_1328._4_4_;
                (**(code **)(phVar22 + 0x20))
                          (local_1298._4_4_ * fVar44 + (float)local_1298,phVar22,puVar7,&local_12d0)
                ;
              }
              else {
                if (local_12e4 != '\0') {
                  if ((int)local_12d0 == 0) {
                    hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
                  }
                  if (*(long *)(phVar22 + 0x38) == 0) {
                    pfVar21 = (float *)0x0;
                  }
                  else {
                    pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 8);
                  }
                  (**(code **)(phVar22 + 0x18))(phVar22,puVar7,&local_12d0);
                  goto LAB_004454d8;
                }
                fVar44 = local_12e8 * (float)local_1328._4_4_;
                if ((int)local_12d0 == 0) {
                  hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
                }
                if (*(long *)(phVar22 + 0x38) == 0) {
                  pfVar21 = (float *)0x0;
                }
                else {
                  pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 8);
                }
                _local_1308 = ZEXT416((uint)(fVar44 + (float)local_1328._0_4_));
                (**(code **)(phVar22 + 0x18))(phVar22,puVar7,&local_12d0);
              }
            }
            else {
              fVar48 = local_125c;
              if (bVar6) {
                bVar42 = false;
LAB_00444fc2:
                puVar7 = local_12d8;
                phVar22 = local_12e0;
                fVar44 = (local_125c + (float)local_1298) * DAT_005d9044;
                local_1278._4_4_ = local_1298._4_4_;
                local_1278._0_4_ = local_1298._4_4_;
                fStack_1270 = local_1298._4_4_;
                fStack_126c = local_1298._4_4_;
                fVar49 = (local_1298._4_4_ + local_1258) * DAT_005d9044;
                if (local_12e4 == '\0') {
                  local_11f8 = (uint *)CONCAT44(local_11f8._4_4_,local_12e8);
                  if ((int)local_12d0 == 0) {
                    hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
                  }
                  fVar48 = (float)local_11f8 * fVar49;
                  (**(code **)(phVar22 + 0x20))
                            ((float)local_1278._0_4_ * (float)local_11f8 + (float)local_1298,phVar22
                             ,puVar7,&local_12d0);
                  fStack_12c4 = fVar44 + fVar48;
                }
                else {
                  if ((int)local_12d0 == 0) {
                    hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
                  }
                  (**(code **)(phVar22 + 0x20))((float)local_1298,phVar22,puVar7,&local_12d0);
                  fStack_12c4 = fVar44;
                }
                _local_1308 = ZEXT416((uint)local_125c);
                fVar44 = local_12e8;
                phVar22 = local_12e0;
                puVar7 = local_12d8;
                fVar48 = local_125c;
                local_12c0 = fVar49;
                if (bVar42) {
                  if (local_12e4 == '\0') goto LAB_004459c3;
LAB_004452d1:
                  puVar7 = local_12d8;
                  phVar22 = local_12e0;
                  local_1318._4_4_ = local_1328._4_4_;
                  local_1318._0_4_ = local_1328._0_4_;
                  local_1318._8_4_ = (undefined4)uStack_1320;
                  local_1318._12_4_ = uStack_1320._4_4_;
                  if ((int)local_12d0 == 0) {
                    fStack_12c4 = (float)local_1308._0_4_;
                  }
                  else {
                    if ((local_12d0._4_4_ != fStack_12c4) ||
                       (NAN(local_12d0._4_4_) || NAN(fStack_12c4))) {
LAB_00445af8:
                      (**(code **)(local_12e0 + 0x18))(local_12e0,local_12d8,&local_12d0);
                    }
                    else if ((fStack_12c8 != local_12c0) || (NAN(fStack_12c8) || NAN(local_12c0)))
                    goto LAB_00445af8;
                    (**(code **)(phVar22 + 0x30))(phVar22,puVar7,&local_12d0);
                    local_1278._0_4_ = local_1308._0_4_;
LAB_00445b33:
                    local_12d0 = 0;
                    fStack_12c8 = 0.0;
                    fStack_12c4 = (float)local_1278._0_4_;
                    if (local_12e4 == '\0') {
                      local_1308._4_4_ = 0;
                      local_1308._0_4_ = (float)local_1308._0_4_ + local_12e8 * local_1258;
                      _local_1328 = local_1318;
                      goto LAB_00445a1f;
                    }
                  }
                  puVar7 = local_12d8;
                  phVar22 = local_12e0;
                  _local_1328 = local_1318;
                  local_12c0 = local_1258;
                  hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
                  if (*(long *)(phVar22 + 0x38) == 0) {
                    pfVar21 = (float *)0x0;
                  }
                  else {
                    pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
                  }
                  (**(code **)(phVar22 + 0x20))(phVar22,puVar7,&local_12d0);
                  local_1318._0_4_ = local_1258;
                  goto LAB_004454e1;
                }
              }
              local_12e0 = phVar22;
              local_12e8 = fVar44;
              local_12d8 = puVar7;
              local_125c = fVar48;
              if (local_12e4 == '\0') {
                if ((int)local_12d0 == 0) {
                  hb_draw_funcs_t::start_path(phVar22,puVar7,(undefined4 *)&local_12d0);
                }
                if (*(long *)(phVar22 + 0x38) == 0) {
                  pfVar21 = (float *)0x0;
                }
                else {
                  pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
                }
                local_1308._4_4_ = local_1328._4_4_;
                local_1308._0_4_ = (float)local_1328._4_4_ * fVar44 + (float)local_1328._0_4_;
                fStack_1300 = (float)local_1328._4_4_;
                fStack_12fc = (float)local_1328._4_4_;
                local_1318._0_4_ = local_1328._4_4_;
                (**(code **)(phVar22 + 0x20))
                          (local_1258 * fVar44 + fVar48,phVar22,puVar7,&local_12d0);
              }
              else {
                if ((int)local_12d0 == 0) {
                  hb_draw_funcs_t::start_path(phVar22,puVar7,(undefined4 *)&local_12d0);
                }
                if (*(long *)(phVar22 + 0x38) == 0) {
                  pfVar21 = (float *)0x0;
                }
                else {
                  pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
                }
                local_1318._0_4_ = local_1328._4_4_;
                (**(code **)(phVar22 + 0x20))(fVar48,phVar22,puVar7,&local_12d0);
LAB_004454d8:
                _local_1308 = _local_1328;
              }
            }
            goto LAB_004454e1;
          }
        }
        else {
          if ((bVar1 & 1) != 0) {
            if (local_12e4 == '\0') {
              local_1318._0_4_ = fVar48 * local_12e8 + fVar44;
              if ((int)local_12d0 == 0) goto LAB_00445061;
              if ((local_12d0._4_4_ != fStack_12c4) || (NAN(local_12d0._4_4_) || NAN(fStack_12c4)))
              {
LAB_00445c31:
                (**(code **)(local_12e0 + 0x18))(local_12e0,local_12d8,&local_12d0);
              }
              else if ((fStack_12c8 != local_12c0) || (NAN(fStack_12c8) || NAN(local_12c0)))
              goto LAB_00445c31;
              if (*(long *)(phVar22 + 0x38) == 0) {
                pfVar21 = (float *)0x0;
              }
              else {
                pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x20);
              }
              (**(code **)(phVar22 + 0x30))(phVar22,puVar7,&local_12d0);
LAB_00445929:
              fStack_12c8 = 0.0;
              local_12d0 = 0;
            }
            else {
              local_1318._0_4_ = fVar44;
              if ((int)local_12d0 != 0) {
                if ((local_12d0._4_4_ != fStack_12c4) || (NAN(local_12d0._4_4_) || NAN(fStack_12c4))
                   ) {
LAB_004458fa:
                  (**(code **)(local_12e0 + 0x18))(local_12e0,local_12d8,&local_12d0);
                }
                else if ((fStack_12c8 != local_12c0) || (NAN(fStack_12c8) || NAN(local_12c0)))
                goto LAB_004458fa;
                if (*(long *)(phVar22 + 0x38) == 0) {
                  pfVar21 = (float *)0x0;
                }
                else {
                  pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x20);
                }
                (**(code **)(phVar22 + 0x30))(phVar22,puVar7,&local_12d0);
                goto LAB_00445929;
              }
            }
LAB_00445061:
            bVar42 = true;
            auVar46 = _local_1328;
            local_12c0 = fVar48;
            fStack_12c4 = (float)local_1318._0_4_;
            goto LAB_00444efb;
          }
          if (local_129c._0_1_ != '\0') {
            auVar46._0_4_ = (local_125c + fVar44) * _DAT_005d9920;
            auVar46._4_4_ = (local_1258 + fVar48) * _UNK_005d9924;
            auVar46._8_4_ = _UNK_005d9928 * 0.0;
            auVar46._12_4_ = (fStack_1254 + 0.0) * _UNK_005d992c;
            if (local_12e4 == '\0') {
              local_1298 = CONCAT44(auVar46._4_4_,auVar46._4_4_);
              uStack_1290 = CONCAT44(auVar46._4_4_,auVar46._4_4_);
              local_1308._0_4_ = local_12e8 * auVar46._4_4_ + auVar46._0_4_;
              if ((int)local_12d0 != 0) {
                if ((local_12d0._4_4_ != fStack_12c4) || (NAN(local_12d0._4_4_) || NAN(fStack_12c4))
                   ) {
LAB_00445c67:
                  (**(code **)(local_12e0 + 0x18))(local_12e0,local_12d8,&local_12d0);
                }
                else if ((fStack_12c8 != local_12c0) || (NAN(fStack_12c8) || NAN(local_12c0)))
                goto LAB_00445c67;
                if (*(long *)(phVar22 + 0x38) == 0) {
                  pfVar21 = (float *)0x0;
                }
                else {
                  pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x20);
                }
                (**(code **)(phVar22 + 0x30))(phVar22,puVar7,&local_12d0);
                goto LAB_00445aa2;
              }
LAB_00445ab5:
              fVar44 = (float)local_1298;
              fVar48 = (float)local_1308._0_4_;
            }
            else {
              fVar44 = auVar46._4_4_;
              fVar48 = auVar46._0_4_;
              if ((int)local_12d0 != 0) {
                local_1308._0_4_ = auVar46._0_4_;
                local_1298 = CONCAT44(auVar46._4_4_,auVar46._4_4_);
                uStack_1290 = CONCAT44(auVar46._4_4_,auVar46._4_4_);
                if ((local_12d0._4_4_ != fStack_12c4) || (NAN(local_12d0._4_4_) || NAN(fStack_12c4))
                   ) {
LAB_00445a75:
                  (**(code **)(local_12e0 + 0x18))(local_12e0,local_12d8,&local_12d0);
                }
                else if ((fStack_12c8 != local_12c0) || (NAN(fStack_12c8) || NAN(local_12c0)))
                goto LAB_00445a75;
                if (*(long *)(phVar22 + 0x38) == 0) {
                  pfVar21 = (float *)0x0;
                }
                else {
                  pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x20);
                }
                (**(code **)(phVar22 + 0x30))(phVar22,puVar7,&local_12d0);
LAB_00445aa2:
                fStack_12c8 = 0.0;
                local_12d0 = 0;
                goto LAB_00445ab5;
              }
            }
            bVar6 = true;
            bVar42 = true;
            uStack_1290 = 0;
            local_1298 = (ulong)local_1328;
            local_12c0 = fVar44;
            fStack_12c4 = fVar48;
            goto LAB_00444efb;
          }
          local_1260 = 1;
          local_125c = fVar44;
          local_1258 = fVar48;
          fStack_1254 = fVar48;
          fStack_1250 = fVar48;
          fStack_124c = fVar48;
          if (*(char *)((long)pvVar8 + lVar40 + 9) == '\0') {
            local_129c = 1.4013e-45;
            bVar42 = false;
            _local_1328 = local_1318;
            goto LAB_00444f07;
          }
          bVar42 = true;
          if (bVar6) {
            _local_1328 = local_1318;
            goto LAB_00444fc2;
          }
          _local_1308 = ZEXT416((uint)fVar44);
          local_1328._0_4_ = local_1318._0_4_;
          local_1328._4_4_ = local_1318._4_4_;
          uStack_1320._0_4_ = local_1318._8_4_;
          uStack_1320._4_4_ = local_1318._12_4_;
          if (local_12e4 != '\0') goto LAB_004452d1;
LAB_004459c3:
          puVar7 = local_12d8;
          phVar22 = local_12e0;
          local_1318._4_4_ = local_1328._4_4_;
          local_1318._0_4_ = local_1328._0_4_;
          local_1318._8_4_ = (undefined4)uStack_1320;
          local_1318._12_4_ = uStack_1320._4_4_;
          fVar44 = local_12e8 * local_1258 + (float)local_1308._0_4_;
          local_1278._0_4_ = fVar44;
          if ((int)local_12d0 != 0) {
            if ((local_12d0._4_4_ != fStack_12c4) || (NAN(local_12d0._4_4_) || NAN(fStack_12c4))) {
LAB_00445c9b:
              (**(code **)(local_12e0 + 0x18))(local_12e0,local_12d8,&local_12d0);
            }
            else if ((fStack_12c8 != local_12c0) || (NAN(fStack_12c8) || NAN(local_12c0)))
            goto LAB_00445c9b;
            (**(code **)(phVar22 + 0x30))(phVar22,puVar7,&local_12d0);
            goto LAB_00445b33;
          }
          _local_1308 = ZEXT416((uint)fVar44);
          uStack_1320 = local_1318._8_8_;
          local_1328 = (undefined1  [8])local_1318._0_8_;
          fStack_12c4 = fVar44;
LAB_00445a1f:
          puVar7 = local_12d8;
          phVar22 = local_12e0;
          local_12c0 = local_1258;
          hb_draw_funcs_t::start_path(local_12e0,local_12d8,(undefined4 *)&local_12d0);
          if (*(long *)(phVar22 + 0x38) == 0) {
            pfVar21 = (float *)0x0;
          }
          else {
            pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x10);
          }
          (**(code **)(phVar22 + 0x20))(phVar22,puVar7,&local_12d0);
          local_1318._0_4_ = local_1258;
LAB_004454e1:
          puVar7 = local_12d8;
          phVar22 = local_12e0;
          _fStack_12c8 = CONCAT44(local_1308._0_4_,fStack_12c8);
          local_12c0 = (float)local_1318._0_4_;
          local_1260 = local_1260 & 0xffffff00;
          if ((int)local_12d0 != 0) {
            if ((local_12d0._4_4_ != (float)local_1308._0_4_) ||
               (NAN(local_12d0._4_4_) || NAN((float)local_1308._0_4_))) {
LAB_0044553f:
              (**(code **)(local_12e0 + 0x18))(local_12e0,local_12d8,&local_12d0);
            }
            else if ((fStack_12c8 != (float)local_1318._0_4_) ||
                    (NAN(fStack_12c8) || NAN((float)local_1318._0_4_))) goto LAB_0044553f;
            if (*(long *)(phVar22 + 0x38) == 0) {
              pfVar21 = (float *)0x0;
            }
            else {
              pfVar21 = *(float **)(*(long *)(phVar22 + 0x38) + 0x20);
            }
            (**(code **)(phVar22 + 0x30))(phVar22,puVar7,&local_12d0);
          }
          local_12d0 = 0;
          fStack_12c8 = 0.0;
          fStack_12c4 = 0.0;
          local_12c0 = 0.0;
          local_129c = 0.0;
          bVar6 = false;
          bVar42 = false;
        }
LAB_00444f07:
        lVar40 = lVar40 + 0xc;
        local_1318 = _local_1328;
      } while (local_1280 != lVar40);
    }
  }
  if ((float)local_1228 != 0.0) {
    free(pvStack_1220);
  }
  if (local_11e8._0_1_ == '\0') goto LAB_00445cf5;
  goto LAB_0044672c;
switchD_004460ad_caseD_10:
  uVar10 = CFF::cff2_cs_interp_env_t<CFF::number_t>::process_blend
                     ((cff2_cs_interp_env_t<CFF::number_t> *)&local_11d8);
  dVar45 = (double)(ulong)uVar10;
  local_1278._0_4_ = iVar27;
  if (uStack_11c4 == 0) {
    _hb_CrapPool = 0;
    uVar34 = 0;
LAB_00446682:
    fStack_11c8 = (float)CONCAT31(fStack_11c8._1_3_,1);
    uVar13 = 0;
  }
  else {
    uVar34 = uStack_11c4 - 1;
    uVar13 = (ulong)(uint)(int)local_11b8[(ulong)uVar34 - 1];
    uStack_11c4 = uVar34;
    if ((int)local_11b8[(ulong)uVar34 - 1] < 0) goto LAB_00446682;
  }
  uVar12 = (uint)uVar13;
  uVar23 = ~local_50 * uVar12 + uVar34;
  if (uVar34 < uVar23) {
    fStack_11cc = (float)((int)fStack_11d0 + 1);
    uVar10 = uStack_11c4;
  }
  else {
    if (uVar12 != 0) {
      if (local_38 == '\0') {
        iVar35 = 0;
        if (uVar12 != 1) {
          lVar40 = 0;
          uVar10 = uVar23;
          do {
            if (uVar10 < uVar34) {
              pdVar41 = local_11b8 + ((ulong)uVar10 - 1);
              uVar55 = SUB84(local_11b8[(ulong)uVar10 - 1],0);
              uVar57 = (undefined4)((ulong)local_11b8[(ulong)uVar10 - 1] >> 0x20);
            }
            else {
              fStack_11c8 = (float)CONCAT31(fStack_11c8._1_3_,1);
              _hb_CrapPool = 0;
              uVar55 = 0;
              uVar57 = 0;
              pdVar41 = (double *)&_hb_CrapPool;
            }
            *pdVar41 = (double)CONCAT44(uVar57,uVar55) + DAT_005db340;
            uVar38 = uVar10 + 1;
            if (uVar38 < uVar34) {
              pdVar41 = local_11b8 + ((ulong)uVar38 - 1);
              uVar55 = SUB84(local_11b8[(ulong)uVar38 - 1],0);
              uVar57 = (undefined4)((ulong)local_11b8[(ulong)uVar38 - 1] >> 0x20);
            }
            else {
              fStack_11c8 = (float)CONCAT31(fStack_11c8._1_3_,1);
              _hb_CrapPool = 0;
              uVar55 = 0;
              uVar57 = 0;
              pdVar41 = (double *)&_hb_CrapPool;
            }
            dVar45 = (double)CONCAT44(uVar57,uVar55) + DAT_005db340;
            *pdVar41 = dVar45;
            lVar40 = lVar40 + -2;
            uVar10 = uVar10 + 2;
          } while (-lVar40 != (ulong)(uVar12 & 0xfffffffe));
LAB_0044637e:
          iVar35 = -(int)lVar40;
        }
      }
      else {
        if (local_48._4_4_ != 0) {
          uVar10 = uVar34 - uVar12 * local_50;
          local_1298 = (ulong)uVar10;
          uVar39 = 0;
          local_1280 = CONCAT44(local_1280._4_4_,local_48._4_4_);
          uVar19 = local_1298;
          do {
            uVar17 = (uint)uVar19;
            uVar38 = 0x201 - uVar17;
            if (0x201 < uVar17) {
              uVar38 = 0;
            }
            if (local_50 < uVar38) {
              uVar38 = local_50;
            }
            iVar35 = local_50 * (int)uVar39;
            uVar28 = uVar10 + iVar35;
            uVar11 = 0x201 - uVar28;
            if (0x201 < uVar28) {
              uVar11 = 0;
            }
            if (local_50 < uVar11) {
              uVar11 = local_50;
            }
            uVar32 = iVar35 + uVar23 + uVar12;
            uVar28 = 0x201 - uVar32;
            if (0x201 < uVar32) {
              uVar28 = 0;
            }
            if (local_50 < uVar28) {
              uVar28 = local_50;
            }
            uVar32 = uVar23 + (int)uVar39;
            if (uVar32 < uVar34) {
              pdVar41 = local_11b8 + ((ulong)uVar32 - 1);
              uVar55 = SUB84(local_11b8[(ulong)uVar32 - 1],0);
              uVar57 = (undefined4)((ulong)local_11b8[(ulong)uVar32 - 1] >> 0x20);
            }
            else {
              fStack_11c8 = (float)CONCAT31(fStack_11c8._1_3_,1);
              _hb_CrapPool = 0;
              uVar55 = 0;
              uVar57 = 0;
              pdVar41 = (double *)&_hb_CrapPool;
            }
            dVar45 = 0.0;
            if (local_48._4_4_ == uVar28) {
              if ((ulong)uVar11 - 1 < 3) {
                dVar45 = 0.0;
                uVar37 = 0;
              }
              else {
                dVar45 = 0.0;
                uVar37 = 0;
                do {
                  dVar45 = (double)*(float *)((long)pvStack_40 + uVar37 * 4 + 0xc) *
                           local_11b8[uVar19 + uVar37 + 2] +
                           (double)*(float *)((long)pvStack_40 + uVar37 * 4 + 8) *
                           local_11b8[uVar19 + uVar37 + 1] +
                           (double)*(float *)((long)pvStack_40 + uVar37 * 4 + 4) *
                           local_11b8[uVar19 + uVar37] +
                           (double)*(float *)((long)pvStack_40 + uVar37 * 4) *
                           local_11b8[uVar19 + (uVar37 - 1)] + dVar45;
                  uVar37 = uVar37 + 4;
                } while ((uVar38 & 0x3fc) != uVar37);
              }
              if ((uVar11 & 3) != 0) {
                uVar33 = 0;
                do {
                  dVar45 = dVar45 + (double)*(float *)((long)pvStack_40 + uVar33 * 4 + uVar37 * 4) *
                                    local_11b8[uVar37 + uVar19 + (uVar33 - 1)];
                  uVar33 = uVar33 + 1;
                } while ((uVar38 & 3) != uVar33);
              }
            }
            dVar45 = (double)CONCAT44(uVar57,uVar55) + dVar45;
            *pdVar41 = dVar45;
            uVar39 = uVar39 + 1;
            uVar19 = (ulong)(uVar17 + local_50);
          } while (uVar39 != uVar13);
          goto LAB_004463b4;
        }
        iVar35 = 0;
        dVar45 = (double)(ulong)uVar10;
        if (uVar12 != 1) {
          lVar40 = 0;
          uVar10 = uVar23;
          do {
            if (uVar10 < uVar34) {
              pdVar41 = local_11b8 + ((ulong)uVar10 - 1);
              uVar55 = SUB84(local_11b8[(ulong)uVar10 - 1],0);
              uVar57 = (undefined4)((ulong)local_11b8[(ulong)uVar10 - 1] >> 0x20);
            }
            else {
              fStack_11c8 = (float)CONCAT31(fStack_11c8._1_3_,1);
              _hb_CrapPool = 0;
              uVar55 = 0;
              uVar57 = 0;
              pdVar41 = (double *)&_hb_CrapPool;
            }
            *pdVar41 = (double)CONCAT44(uVar57,uVar55) + DAT_005db340;
            uVar38 = uVar10 + 1;
            if (uVar38 < uVar34) {
              pdVar41 = local_11b8 + ((ulong)uVar38 - 1);
              uVar55 = SUB84(local_11b8[(ulong)uVar38 - 1],0);
              uVar57 = (undefined4)((ulong)local_11b8[(ulong)uVar38 - 1] >> 0x20);
            }
            else {
              fStack_11c8 = (float)CONCAT31(fStack_11c8._1_3_,1);
              _hb_CrapPool = 0;
              uVar55 = 0;
              uVar57 = 0;
              pdVar41 = (double *)&_hb_CrapPool;
            }
            dVar45 = (double)CONCAT44(uVar57,uVar55) + DAT_005db340;
            *pdVar41 = dVar45;
            lVar40 = lVar40 + -2;
            uVar10 = uVar10 + 2;
          } while (-lVar40 != (ulong)(uVar12 & 0xfffffffe));
          goto LAB_0044637e;
        }
      }
      if ((uVar13 & 1) != 0) {
        uVar23 = uVar23 + iVar35;
        if (uVar23 < uVar34) {
          pdVar41 = local_11b8 + ((ulong)uVar23 - 1);
          dVar45 = local_11b8[(ulong)uVar23 - 1] + DAT_005db340;
        }
        else {
          fStack_11c8 = (float)CONCAT31(fStack_11c8._1_3_,1);
          _hb_CrapPool = 0;
          dVar45 = 0.0;
          pdVar41 = (double *)&_hb_CrapPool;
        }
        *pdVar41 = dVar45;
      }
    }
LAB_004463b4:
    uVar10 = uVar34 - uVar12 * local_50;
    if (uVar34 < uVar12 * local_50) {
      fStack_11c8 = (float)CONCAT31(fStack_11c8._1_3_,1);
      uVar10 = uStack_11c4;
    }
  }
  uStack_11c4 = uVar10;
  if (local_190 == '\0') goto LAB_00446021;
LAB_004466d0:
  fStack_11cc = (float)((int)fStack_11d0 + 1);
  bVar6 = false;
  bVar42 = false;
joined_r0x004466e6:
  if ((int)local_48 != 0) {
    local_48 = local_48 & 0xffffffff;
    free(pvStack_40);
    bVar42 = bVar6;
  }
  if (!bVar42) {
LAB_00446704:
                    /* try { // try from 0044670d to 0044672b has its CatchHandler @ 004475bd */
    paVar14 = hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
              ::get((hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
                     *)(*(long *)((long)param_1 + 0x20) + 0xe8));
    _get_path((long)paVar14,(long)param_1,param_3,(long)&local_12e8,'\0',0);
  }
LAB_0044672c:
  puVar25 = local_12d8;
  phVar22 = local_12e0;
  if ((int)local_12d0 != 0) {
    if ((local_12d0._4_4_ != fStack_12c4) || (NAN(local_12d0._4_4_) || NAN(fStack_12c4))) {
LAB_0044675b:
      if (*(long *)(local_12e0 + 0x38) == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(*(long *)(local_12e0 + 0x38) + 8);
      }
                    /* try { // try from 00446770 to 0044679e has its CatchHandler @ 004475b5 */
      (**(code **)(local_12e0 + 0x18))(local_12e0,local_12d8,&local_12d0,uVar20);
    }
    else if ((fStack_12c8 != local_12c0) || (NAN(fStack_12c8) || NAN(local_12c0)))
    goto LAB_0044675b;
    if (*(long *)(phVar22 + 0x38) == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined8 *)(*(long *)(phVar22 + 0x38) + 0x20);
    }
    (**(code **)(phVar22 + 0x30))(phVar22,puVar25,&local_12d0,uVar20);
  }
  if (local_1208[0] == '\0') goto LAB_00447387;
  iVar35 = *(int *)((long)param_1 + 0x3c);
  iVar27 = *(int *)((long)param_1 + 0x40);
  local_1208 = ZEXT416((uint)((float)iVar35 * DAT_005d9044));
  if (*(char *)((long)param_1 + 0x38) == '\0') {
    if (*(int *)((long)param_1 + 0x28) < 0) goto LAB_004467f9;
LAB_00446846:
    fVar44 = (float)iVar27 * DAT_005d9044;
    if (*(int *)((long)param_1 + 0x2c) < 0) goto LAB_00446819;
LAB_00446852:
    local_11e8 = fVar44;
    uStack_11e4 = in_XMM11_Db;
    fStack_11e0 = in_XMM11_Dc;
    fStack_11dc = in_XMM11_Dd;
    if (iVar35 != 0 || iVar27 != 0) goto LAB_00446863;
  }
  else {
    local_1208 = ZEXT816(0);
    if (-1 < *(int *)((long)param_1 + 0x28)) goto LAB_00446846;
LAB_004467f9:
    local_1208._0_4_ = local_1208._0_4_ ^ _DAT_006524b0;
    local_1208._4_4_ = _UNK_006524b4;
    local_1208._8_4_ = local_1208._8_4_ ^ _UNK_006524b8;
    local_1208._12_4_ = local_1208._12_4_ ^ _UNK_006524bc;
    fVar44 = (float)iVar27 * DAT_005d9044;
    if (-1 < *(int *)((long)param_1 + 0x2c)) goto LAB_00446852;
LAB_00446819:
    local_11e8 = (float)((uint)fVar44 ^ _DAT_006524b0);
    uStack_11e4 = in_XMM11_Db ^ _UNK_006524b4;
    fStack_11e0 = (float)((uint)in_XMM11_Dc ^ _UNK_006524b8);
    fStack_11dc = (float)((uint)in_XMM11_Dd ^ _UNK_006524bc);
    if (iVar35 != 0 || iVar27 != 0) {
LAB_00446863:
      if ((ulong)local_1248._4_4_ != 0) {
        uVar13 = local_1238 >> 0x20;
        if (uVar13 != 0) {
          fVar48 = 0.0;
          puVar30 = puStack_1230;
          uVar19 = 0;
          do {
            uVar39 = (ulong)*puVar30;
            if ((uint)uVar19 < *puVar30) {
              pfVar21 = (float *)((long)pvStack_1240 + uVar19 * 0xc);
              uVar37 = uVar19;
              do {
                uVar33 = uVar37 + 1;
                uVar10 = (uint)uVar19;
                if (uVar33 < uVar39) {
                  uVar10 = (uint)uVar33;
                }
                if (uVar37 < local_1248._4_4_) {
                  pfVar36 = pfVar21;
                  if (local_1248._4_4_ <= uVar10) goto LAB_00446940;
LAB_004468f9:
                  pfVar29 = (float *)((long)pvStack_1240 + (ulong)uVar10 * 0xc);
                }
                else {
                  pfVar36 = (float *)&_hb_NullPool;
                  if (uVar10 < local_1248._4_4_) goto LAB_004468f9;
LAB_00446940:
                  pfVar29 = (float *)&_hb_NullPool;
                }
                fVar48 = fVar48 + (*pfVar36 * pfVar29[1] - *pfVar29 * pfVar36[1]);
                pfVar21 = pfVar21 + 3;
                uVar37 = uVar33;
              } while (uVar33 != uVar39);
            }
            puVar30 = puVar30 + 1;
            uVar19 = uVar39;
          } while (puVar30 != puStack_1230 + uVar13);
          fVar48 = fVar48 * DAT_005d9044;
          uVar39 = 0;
          local_11f8 = (uint *)CONCAT44(in_XMM11_Db,fVar44);
          uVar19 = 0;
          uVar10 = _DAT_006524b0;
          local_129c = (float)iVar35 * DAT_005d9044;
          fStack_11f0 = in_XMM11_Dc;
          fStack_11ec = in_XMM11_Dd;
          do {
            if (uVar39 < uVar13) {
              fVar49 = (float)puStack_1230[uVar39];
              uVar37 = (ulong)(uint)fVar49;
              uVar34 = (int)fVar49 - 1;
              if (((uint)uVar19 != uVar34) && (fVar49 != 0.0)) {
                fVar52 = 0.0;
                fVar53 = 0.0;
                uVar55 = 0;
                uVar57 = 0;
                uVar12 = 0xffffffff;
                uVar13 = (ulong)uVar34;
                fVar61 = 0.0;
                local_1308._0_4_ = 0.0;
                local_1308._4_4_ = 0.0;
                fStack_1300 = 0.0;
                fStack_12fc = 0.0;
                uVar37 = uVar19;
                fVar43 = 0.0;
                local_1258 = fVar49;
                do {
                  auVar63._4_4_ = local_1308._4_4_;
                  auVar63._0_4_ = local_1308._0_4_;
                  auVar63._8_4_ = fStack_1300;
                  auVar63._12_4_ = fStack_12fc;
                  uVar38 = (uint)uVar37;
                  uVar23 = (uint)uVar13;
                  fVar49 = fVar43;
                  fVar59 = fVar52;
                  fVar54 = fVar53;
                  uVar56 = uVar55;
                  uVar58 = uVar57;
                  if (uVar38 == uVar12) {
LAB_00446b0c:
                    fVar52 = auVar63._0_4_;
                    fVar53 = auVar63._4_4_;
                    uVar55 = auVar63._8_4_;
                    uVar57 = auVar63._12_4_;
                    if ((fVar61 != 0.0) || (NAN(fVar61))) {
                      if ((int)uVar12 < 0) {
                        local_1308._0_4_ = fVar59;
                        local_1308._4_4_ = fVar54;
                        fStack_1300 = (float)uVar56;
                        fStack_12fc = (float)uVar58;
                        uVar12 = uVar23;
                        fVar49 = fVar61;
                      }
                      fVar62 = fVar59 * fVar52 + fVar54 * fVar53;
                      fVar50 = 0.0;
                      fVar60 = 0.0;
                      if (_DAT_005de5a8 < fVar62) {
                        fVar62 = fVar62 + DAT_005d9038;
                        fVar51 = fVar59 + fVar52;
                        if (0.0 <= fVar48) {
                          fVar51 = (float)((uint)fVar51 ^ uVar10);
                        }
                        fVar50 = fVar52 * fVar54 - fVar59 * fVar53;
                        if (fVar48 < 0.0) {
                          fVar50 = (float)((uint)fVar50 ^ uVar10);
                        }
                        fVar59 = (float)(((uint)(fVar54 + fVar53) ^ uVar10) & -(uint)(fVar48 < 0.0)
                                        | ~-(uint)(fVar48 < 0.0) & (uint)(fVar54 + fVar53));
                        fVar61 = (float)(~-(uint)(fVar61 <= fVar43) & (uint)fVar43 |
                                        (uint)fVar61 & -(uint)(fVar61 <= fVar43));
                        if (local_129c * fVar50 <= fVar61 * fVar62) {
                          fVar60 = (fVar59 * local_129c) / fVar62;
                        }
                        else {
                          fVar60 = (fVar59 * fVar61) / fVar50;
                        }
                        if (fVar61 * fVar62 < fVar44 * fVar50) {
                          fVar50 = (fVar51 * fVar61) / fVar50;
                        }
                        else {
                          fVar50 = (fVar51 * fVar44) / fVar62;
                        }
                      }
                      if (uVar23 != uVar38) {
                        do {
                          uVar23 = (uint)uVar13;
                          if (uVar23 < local_1248._4_4_) {
                            puVar25 = (undefined8 *)((long)pvStack_1240 + uVar13 * 0xc);
                            *(float *)((long)pvStack_1240 + uVar13 * 0xc) =
                                 *(float *)((long)pvStack_1240 + uVar13 * 0xc) +
                                 fVar60 + (float)local_1208._0_4_;
                            fVar61 = *(float *)((long)pvStack_1240 + uVar13 * 0xc + 4);
                          }
                          else {
                            DAT_0071cd88 = 0;
                            _hb_CrapPool = 0;
                            fVar61 = 0.0;
                            puVar25 = &_hb_CrapPool;
                          }
                          *(float *)((long)puVar25 + 4) = fVar61 + fVar50 + local_11e8;
                          uVar17 = uVar23 + 1;
                          if ((int)uVar34 <= (int)uVar23) {
                            uVar17 = (uint)uVar19;
                          }
                          uVar13 = (ulong)uVar17;
                        } while (uVar17 != uVar38);
                      }
                      uVar13 = uVar37;
                      fVar61 = fVar43;
                    }
                    else {
                      uVar13 = uVar37;
                      fVar61 = fVar43;
                    }
                  }
                  else {
                    if (uVar38 < local_1248._4_4_) {
                      fVar44 = *(float *)((long)pvStack_1240 + uVar37 * 0xc);
                      if (local_1248._4_4_ <= uVar23) goto LAB_00446d28;
LAB_00446a33:
                      fVar49 = *(float *)((long)pvStack_1240 + uVar13 * 0xc);
                      if (local_1248._4_4_ <= uVar38) goto LAB_00446d49;
LAB_00446a4d:
                      auVar64 = ZEXT416(*(uint *)((long)pvStack_1240 + uVar37 * 0xc + 4));
                    }
                    else {
                      DAT_0071cd88 = 0;
                      _hb_CrapPool = 0;
                      fVar44 = 0.0;
                      if (uVar23 < local_1248._4_4_) goto LAB_00446a33;
LAB_00446d28:
                      DAT_0071cd88 = 0;
                      _hb_CrapPool = 0;
                      fVar49 = 0.0;
                      if (uVar38 < local_1248._4_4_) goto LAB_00446a4d;
LAB_00446d49:
                      DAT_0071cd88 = 0;
                      _hb_CrapPool = 0;
                      auVar64 = ZEXT816(0);
                    }
                    local_1280 = CONCAT44(local_1280._4_4_,fVar43);
                    local_1298 = CONCAT44(fVar53,fVar52);
                    uStack_1290 = CONCAT44(uVar57,uVar55);
                    if (uVar23 < local_1248._4_4_) {
                      fVar43 = *(float *)((long)pvStack_1240 + uVar13 * 0xc + 4);
                    }
                    else {
                      DAT_0071cd88 = 0;
                      _hb_CrapPool = 0;
                      fVar43 = 0.0;
                    }
                    register0x00001244 = auVar64._4_12_;
                    local_1278._0_4_ = auVar64._0_4_ - fVar43;
                    fVar43 = hypotf(fVar44 - fVar49,(float)local_1278._0_4_);
                    auVar63._4_4_ = local_1278._0_4_;
                    auVar63._0_4_ = fVar44 - fVar49;
                    auVar63._8_4_ = 0;
                    auVar63._12_4_ = local_1278._4_4_;
                    if ((fVar43 != 0.0) || (NAN(fVar43))) {
                      auVar47._4_4_ = fVar43;
                      auVar47._0_4_ = fVar43;
                      auVar47._8_4_ = fVar43;
                      auVar47._12_4_ = fVar43;
                      auVar63 = divps(auVar63,auVar47);
                    }
                    fVar49 = (float)local_1280;
                    fVar59 = (float)local_1298;
                    fVar54 = local_1298._4_4_;
                    uVar56 = (float)uStack_1290;
                    uVar58 = uStack_1290._4_4_;
                    fVar44 = (float)local_11f8;
                    uVar10 = _DAT_006524b0;
                    if (fVar43 != 0.0) goto LAB_00446b0c;
                    fVar52 = (float)local_1298;
                    fVar53 = local_1298._4_4_;
                    uVar55 = (float)uStack_1290;
                    uVar57 = uStack_1290._4_4_;
                    if (NAN(fVar43)) goto LAB_00446b0c;
                  }
                  uVar37 = (ulong)(uVar38 + 1);
                  if ((int)uVar34 <= (int)uVar38) {
                    uVar37 = uVar19;
                  }
                } while (((uint)uVar37 != (uint)uVar13) && (fVar43 = fVar49, (uint)uVar13 != uVar12)
                        );
                uVar13 = local_1238 >> 0x20;
                uVar37 = (ulong)(uint)local_1258;
              }
            }
            else {
              _hb_CrapPool = _hb_CrapPool & 0xffffffff00000000;
              uVar37 = 0;
            }
            uVar39 = uVar39 + 1;
            uVar19 = uVar37;
          } while (uVar39 < uVar13);
        }
      }
    }
  }
  local_11b8[0] = 0.0;
  local_11b8[1] = 0.0;
  fStack_11c8 = 0.0;
  uStack_11c4 = 0;
  uStack_11c0 = 0;
  local_11d8 = (ushort *)0x0;
  fStack_11d0 = 0.0;
  fStack_11cc = 0.0;
  if (local_1238 >> 0x20 != 0) {
    local_1208._0_8_ = puStack_1230 + (local_1238 >> 0x20);
    puVar30 = puStack_1230;
    uVar10 = 0;
    do {
      fStack_11c8 = 0.0;
      fStack_11cc = 0.0;
      fStack_11d0 = 0.0;
      local_11d8._4_4_ = 0.0;
      local_11d8._0_4_ = 0;
      uVar34 = *puVar30;
      uVar23 = uVar34 - uVar10;
      uVar12 = local_1248._4_4_ - uVar10;
      if (local_1248._4_4_ < uVar10) {
        uVar12 = 0;
      }
      if (uVar23 < uVar12) {
        uVar12 = uVar23;
      }
      if (uVar12 != 0) {
        pfVar21 = (float *)((ulong)uVar10 * 0xc + (long)pvStack_1240);
        fVar48 = 0.0;
        fVar44 = 0.0;
        local_11f8 = puVar30;
        do {
          uVar10 = uVar12 - 1;
          pfVar36 = pfVar21 + 3;
          fVar49 = fVar44;
          if ((uint)pfVar21[2] < 4) {
            fVar49 = *pfVar21;
            fVar43 = pfVar21[1];
            switch(pfVar21[2]) {
            case 0.0:
              if ((int)local_11d8 == 0) {
                fStack_11c8 = fVar43;
              }
              else {
                if ((local_11d8._4_4_ != fVar44) || (NAN(local_11d8._4_4_) || NAN(fVar44))) {
LAB_0044709b:
                  if (*(long *)(param_4 + 0x38) == 0) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
                  }
                  (**(code **)(param_4 + 0x18))
                            (local_11d8._4_4_,param_4,local_1268,&local_11d8,uVar20);
                }
                else if ((fStack_11d0 != fVar48) || (NAN(fStack_11d0) || NAN(fVar48)))
                goto LAB_0044709b;
                if (*(long *)(param_4 + 0x38) == 0) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20);
                }
                (**(code **)(param_4 + 0x30))(param_4,local_1268,&local_11d8,uVar20);
                fStack_11d0 = 0.0;
                local_11d8._0_4_ = 0;
                local_11d8._4_4_ = 0.0;
                fStack_11c8 = fVar43;
              }
              break;
            case 1.4013e-45:
              if ((int)local_11d8 == 0) {
                if (*(undefined8 **)(param_4 + 0x38) == (undefined8 *)0x0) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = **(undefined8 **)(param_4 + 0x38);
                }
                (**(code **)(param_4 + 0x10))(param_4,local_1268,&local_11d8,uVar20);
                local_11d8._0_4_ = 1;
                local_11d8._4_4_ = fStack_11cc;
                fStack_11d0 = fStack_11c8;
                lVar40 = *(long *)(param_4 + 0x38);
                if (lVar40 != 0) goto LAB_00447048;
LAB_00447250:
                uVar20 = 0;
              }
              else {
                lVar40 = *(long *)(param_4 + 0x38);
                if (lVar40 == 0) goto LAB_00447250;
LAB_00447048:
                uVar20 = *(undefined8 *)(lVar40 + 8);
              }
              (**(code **)(param_4 + 0x18))(fVar49,param_4,local_1268,&local_11d8,uVar20);
              fStack_11c8 = fVar43;
              break;
            case 2.8026e-45:
              if (uVar10 == 0) {
                pfVar29 = (float *)&_hb_NullPool;
              }
              else {
                uVar10 = uVar12 - 2;
                pfVar29 = pfVar36;
                pfVar36 = pfVar21 + 6;
              }
              local_1298 = CONCAT44(local_1298._4_4_,*pfVar29);
              local_1280 = CONCAT44(local_1280._4_4_,pfVar29[1]);
              if ((int)local_11d8 == 0) {
                if (*(undefined8 **)(param_4 + 0x38) == (undefined8 *)0x0) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = **(undefined8 **)(param_4 + 0x38);
                }
                (**(code **)(param_4 + 0x10))(param_4,local_1268,&local_11d8,uVar20);
                local_11d8._0_4_ = 1;
                local_11d8._4_4_ = fStack_11cc;
                fStack_11d0 = fStack_11c8;
                lVar40 = *(long *)(param_4 + 0x38);
                if (lVar40 == 0) goto LAB_00446f82;
LAB_00446e73:
                uVar20 = *(undefined8 *)(lVar40 + 0x10);
              }
              else {
                lVar40 = *(long *)(param_4 + 0x38);
                if (lVar40 != 0) goto LAB_00446e73;
LAB_00446f82:
                uVar20 = 0;
              }
                    /* try { // try from 00446e77 to 004472d2 has its CatchHandler @ 004475ea */
              (**(code **)(param_4 + 0x20))(fVar49,param_4,local_1268,&local_11d8,uVar20);
              fVar49 = (float)local_1298;
              fStack_11c8 = (float)local_1280;
              break;
            case 4.2039e-45:
              if (uVar10 == 0) {
                pfVar26 = (float *)&_hb_NullPool;
                pfVar29 = (float *)&_hb_NullPool;
                iVar35 = 0;
                pfVar21 = pfVar36;
              }
              else {
                iVar35 = uVar12 - 2;
                pfVar21 = pfVar21 + 6;
                pfVar29 = (float *)&_hb_NullPool;
                pfVar26 = pfVar36;
                if (iVar35 != 0) {
                  pfVar29 = pfVar21;
                }
              }
              if (iVar35 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = iVar35 - 1;
              }
              local_1278._0_4_ = pfVar26[1];
              local_1298 = CONCAT44(local_1298._4_4_,*pfVar29);
              local_1280 = CONCAT44(local_1280._4_4_,pfVar29[1]);
              if ((int)local_11d8 == 0) {
                if (*(undefined8 **)(param_4 + 0x38) == (undefined8 *)0x0) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = **(undefined8 **)(param_4 + 0x38);
                }
                (**(code **)(param_4 + 0x10))(param_4,local_1268,&local_11d8,uVar20);
                local_11d8._0_4_ = 1;
                local_11d8._4_4_ = fStack_11cc;
                fStack_11d0 = fStack_11c8;
                lVar40 = *(long *)(param_4 + 0x38);
                if (lVar40 != 0) goto LAB_0044701f;
LAB_0044719a:
                uVar20 = 0;
              }
              else {
                lVar40 = *(long *)(param_4 + 0x38);
                if (lVar40 == 0) goto LAB_0044719a;
LAB_0044701f:
                uVar20 = *(undefined8 *)(lVar40 + 0x18);
              }
              (**(code **)(param_4 + 0x28))(fVar49,param_4,local_1268,&local_11d8,uVar20);
              pfVar36 = pfVar21 + (ulong)(iVar35 != 0) * 3;
              fVar49 = (float)local_1298;
              fStack_11c8 = (float)local_1280;
            }
            fStack_11cc = fVar49;
            fVar48 = fStack_11c8;
          }
          uVar12 = uVar10;
          pfVar21 = pfVar36;
          puVar30 = local_11f8;
          fVar44 = fVar49;
        } while (uVar12 != 0);
        if ((int)local_11d8 != 0) {
          if ((local_11d8._4_4_ != fVar49) || (NAN(local_11d8._4_4_) || NAN(fVar49))) {
LAB_0044733a:
            if (*(long *)(param_4 + 0x38) == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 8);
            }
                    /* try { // try from 00447350 to 0044736d has its CatchHandler @ 004475e8 */
            (**(code **)(param_4 + 0x18))(local_11d8._4_4_,param_4,local_1268,&local_11d8,uVar20);
          }
          else if ((fStack_11d0 != fVar48) || (NAN(fStack_11d0) || NAN(fVar48))) goto LAB_0044733a;
          if (*(long *)(param_4 + 0x38) == 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20);
          }
                    /* try { // try from 00446de4 to 00446dfb has its CatchHandler @ 004475e8 */
          (**(code **)(param_4 + 0x30))(param_4,local_1268,&local_11d8,uVar20);
        }
      }
      local_11d8 = (ushort *)0x0;
      fStack_11d0 = 0.0;
      fStack_11cc = 0.0;
      fStack_11c8 = 0.0;
      puVar30 = puVar30 + 1;
      uVar10 = uVar34;
    } while (puVar30 != (uint *)local_1208._0_8_);
  }
LAB_00447387:
  if ((int)local_1238 != 0) {
    local_1238 = local_1238 & 0xffffffff;
    free(puStack_1230);
  }
  local_1238 = 0;
  puStack_1230 = (uint *)0x0;
  if ((int)local_1248 != 0) {
    local_1248 = local_1248 & 0xffffffff;
    free(pvStack_1240);
  }
  return;
}


