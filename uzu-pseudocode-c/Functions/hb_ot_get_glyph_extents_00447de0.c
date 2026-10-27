// Function : hb_ot_get_glyph_extents
// Namespace: 
// Entry    : 00447de0
// Prototype: ulong hb_ot_get_glyph_extents(hb_font_t * param_1, undefined8 * param_2, uint param_3, undefined1[16] * param_4, undefined8 param_5)
// Body     : 00447de0 - 004491ed


/* WARNING: Removing unreachable block (ram,0x0044900d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_glyph_extents(hb_font_t*, void*, unsigned int, hb_glyph_extents_t*, void*) */

ulong __cdecl
hb_ot_get_glyph_extents
          (hb_font_t *param_1,undefined8 *param_2,uint param_3,undefined1 (*param_4) [16],
          undefined8 param_5)

{
  short sVar1;
  undefined1 (*pauVar2) [16];
  uint *puVar3;
  uint *puVar4;
  hb_face_t *phVar5;
  undefined1 (*pauVar6) [16];
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  COLR *this;
  ulong uVar13;
  undefined6 extraout_var;
  accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
  *paVar14;
  accelerator_t *paVar15;
  undefined1 (*pauVar16) [16];
  glyf_accelerator_t *this_00;
  accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
  *this_01;
  accelerator_t *this_02;
  uint uVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  accelerator_t *this_03;
  int iVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  ClipList *this_04;
  hb_paint_extents_context_t *this_05;
  uint uVar28;
  double *pdVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  int iVar33;
  float fVar34;
  float fVar38;
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  char local_1200 [8];
  double local_11f8;
  double dStack_11f0;
  double local_11e8;
  double dStack_11e0;
  undefined1 local_11d8 [12];
  uint uStack_11cc;
  undefined8 local_11c8;
  void *pvStack_11c0;
  undefined8 local_11b8;
  undefined1 (*pauStack_11b0) [16];
  double local_11a8 [510];
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
  long local_68;
  int local_60;
  short *local_58;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  void *pvStack_40;
  char local_38;
  undefined2 local_37;
  
  pauVar2 = (undefined1 (*) [16])*param_2;
  this_02 = *(accelerator_t **)pauVar2[0x13];
  pauVar16 = param_4;
  while (this_02 == (accelerator_t *)0x0) {
    lVar18 = *(long *)*pauVar2;
    if (lVar18 == 0) {
LAB_004491df:
      this_02 = (accelerator_t *)&_hb_NullPool;
      break;
    }
    this_02 = calloc(1,0x10);
    if (this_02 == (accelerator_t *)0x0) {
      pauVar16 = (undefined1 (*) [16])&_hb_NullPool;
      LOCK();
      bVar7 = *(long *)pauVar2[0x13] == 0;
      if (bVar7) {
        *(undefined4 **)pauVar2[0x13] = &_hb_NullPool;
      }
      UNLOCK();
      if (bVar7) goto LAB_004491df;
    }
    else {
      OT::sbix_accelerator_t::sbix_accelerator_t
                ((sbix_accelerator_t *)this_02,lVar18,extraout_RDX_01,pauVar16,param_5);
      LOCK();
      bVar7 = *(long *)pauVar2[0x13] == 0;
      if (bVar7) {
        *(accelerator_t **)pauVar2[0x13] = this_02;
      }
      UNLOCK();
      if (bVar7) break;
      OT::sbix::accelerator_t::~accelerator_t(this_02);
      free(this_02);
    }
    this_02 = *(accelerator_t **)pauVar2[0x13];
  }
  bVar7 = OT::sbix::accelerator_t::get_png_extents
                    (this_02,(long)param_1,param_3,(int *)param_4,'\x01');
  if (bVar7) {
    return 1;
  }
  paVar15 = *(accelerator_t **)((long)pauVar2[0x12] + 8);
  if (paVar15 == (accelerator_t *)0x0) {
    this_03 = (accelerator_t *)&_hb_NullPool;
    do {
      lVar18 = *(long *)*pauVar2;
      if (lVar18 == 0) goto LAB_00447e41;
      paVar15 = calloc(1,0x18);
      if (paVar15 == (accelerator_t *)0x0) {
        LOCK();
        bVar7 = *(long *)((long)pauVar2[0x12] + 8) == 0;
        if (bVar7) {
          *(long *)((long)pauVar2[0x12] + 8) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar7) goto LAB_00447e41;
      }
      else {
        OT::CBDT::accelerator_t::accelerator_t(paVar15,lVar18);
        LOCK();
        bVar7 = *(long *)((long)pauVar2[0x12] + 8) == 0;
        if (bVar7) {
          *(long *)((long)pauVar2[0x12] + 8) = (long)paVar15;
        }
        UNLOCK();
        if (bVar7) {
          this_03 = paVar15;
          goto LAB_00447e41;
        }
        OT::CBDT::accelerator_t::~accelerator_t(paVar15);
        free(paVar15);
      }
      paVar15 = *(accelerator_t **)((long)pauVar2[0x12] + 8);
    } while (paVar15 == (accelerator_t *)0x0);
  }
  this_03 = paVar15;
LAB_00447e41:
  uVar12 = OT::CBDT::accelerator_t::get_extents(this_03,(long)param_1,param_3,(int *)param_4,'\x01')
  ;
  if ((char)uVar12 != '\0') {
    return 1;
  }
  this = (COLR *)hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
                 ::get((hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
                        *)((long)pauVar2[0x11] + 8));
  this_04 = (ClipList *)&_hb_NullPool;
  if (*(short *)this == 0) {
    local_11d8._0_8_ = &_hb_NullPool;
    register_RAX = (COLR *)&_hb_NullPool;
  }
  else {
    register_RAX = (COLR *)&_hb_NullPool;
    local_11d8._0_8_ = &_hb_NullPool;
    if (*(int *)(this + 0x1e) == 0) {
LAB_00447eb7:
      sVar1 = *(short *)this;
    }
    else {
      uVar9 = *(uint *)(this + 0x1e);
      if (uVar9 != 0) {
        local_11d8._0_8_ =
             this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
                    );
        goto LAB_00447eb7;
      }
      local_11d8._0_8_ = &_hb_NullPool;
      sVar1 = *(short *)this;
    }
    if ((sVar1 != 0) && (*(int *)(this + 0x1a) != 0)) {
      uVar9 = *(uint *)(this + 0x1a);
      if (uVar9 == 0) {
        register_RAX = (COLR *)&_hb_NullPool;
      }
      else {
        register_RAX = this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                              uVar9 << 0x18);
      }
    }
  }
  local_11c8 = *(double *)(param_1 + 0x80);
  pvStack_11c0 = (void *)(ulong)*(uint *)(param_1 + 0x78);
  local_11b8 = 0;
  if ((*(short *)this != 0) && (*(int *)(this + 0x16) != 0)) {
    uVar9 = *(uint *)(this + 0x16);
    if (uVar9 == 0) {
      this_04 = (ClipList *)&_hb_NullPool;
    }
    else {
      this_04 = (ClipList *)
                (this + (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                        uVar9 << 0x18));
    }
  }
  uVar12 = OT::ClipList::get_extents(this_04,param_3,(int *)param_4,(long *)local_11d8);
  if ((char)uVar12 != '\0') {
    fVar41 = *(float *)(param_1 + 0x4c) *
             (float)((*(int *)*param_4 + *(int *)(*param_4 + 8)) * 0x10000 >> 0x10);
    fVar42 = *(float *)(param_1 + 0x4c) * (float)(int)(short)*(int *)*param_4;
    fVar39 = *(float *)(param_1 + 0x50) * (float)(int)(short)*(int *)(*param_4 + 4);
    fVar40 = *(float *)(param_1 + 0x50) *
             (float)((*(int *)(*param_4 + 4) + *(int *)(*param_4 + 0xc)) * 0x10000 >> 0x10);
    fVar38 = *(float *)(param_1 + 0x48);
    if ((fVar38 != 0.0) || (NAN(fVar38))) {
      fVar34 = fVar38 * fVar39;
      fVar38 = fVar38 * fVar40;
      fVar41 = fVar41 + (float)(~-(uint)(fVar38 <= fVar34) & (uint)fVar38 |
                               (uint)fVar34 & -(uint)(fVar38 <= fVar34));
      fVar42 = fVar42 + (float)(~-(uint)(fVar34 <= fVar38) & (uint)fVar38 |
                               (uint)fVar34 & -(uint)(fVar34 <= fVar38));
    }
    fVar38 = floorf(fVar42);
    *(int *)*param_4 = (int)fVar38;
    fVar39 = floorf(fVar39);
    *(int *)(*param_4 + 4) = (int)fVar39;
    fVar41 = ceilf(fVar41);
    *(int *)(*param_4 + 8) = (int)(fVar41 - (float)(int)fVar38);
    fVar40 = ceilf(fVar40);
    *(int *)(*param_4 + 0xc) = (int)(fVar40 - (float)(int)fVar39);
    iVar23 = *(int *)(param_1 + 0x3c);
    iVar21 = *(int *)(param_1 + 0x40);
    if (iVar23 == 0 && iVar21 == 0) {
      return 1;
    }
    iVar24 = -iVar21;
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar24 = iVar21;
    }
    *(int *)(*param_4 + 4) = (int)fVar39 + iVar24;
    *(int *)(*param_4 + 0xc) = (int)(fVar40 - (float)(int)fVar39) - iVar24;
    iVar21 = -iVar23;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar21 = iVar23;
    }
    if (param_1[0x38] != (hb_font_t)0x0) {
      *(int *)*param_4 = (int)fVar38 - iVar21 / 2;
    }
    *(int *)(*param_4 + 8) = iVar21 + (int)(fVar41 - (float)(int)fVar38);
    return 1;
  }
  while( true ) {
    pauVar16 = static_paint_extents_funcs;
    static_paint_extents_funcs = pauVar16;
    if (pauVar16 != (undefined1 (*) [16])0x0) break;
    pauVar16 = (undefined1 (*) [16])hb_paint_extents_funcs_lazy_loader_t::create();
    pauVar6 = static_paint_extents_funcs;
    if (pauVar16 == (undefined1 (*) [16])0x0) {
      pauVar16 = (undefined1 (*) [16])&_hb_Null_hb_paint_funcs_t;
      LOCK();
      if (static_paint_extents_funcs == (undefined1 (*) [16])0x0) {
        static_paint_extents_funcs = (undefined1 (*) [16])&_hb_Null_hb_paint_funcs_t;
      }
      UNLOCK();
    }
    else {
      LOCK();
      if (static_paint_extents_funcs == (undefined1 (*) [16])0x0) {
        static_paint_extents_funcs = pauVar16;
      }
      UNLOCK();
    }
    if (pauVar6 == (undefined1 (*) [16])0x0) break;
    if ((pauVar16 != (undefined1 (*) [16])0x0) &&
       (pauVar16 != (undefined1 (*) [16])&_hb_Null_hb_paint_funcs_t)) {
      hb_paint_funcs_destroy((int *)pauVar16);
    }
  }
  this_05 = (hb_paint_extents_context_t *)local_11d8;
  hb_paint_extents_context_t::hb_paint_extents_context_t(this_05);
                    /* try { // try from 004480df to 004480fd has its CatchHandler @ 0044921b */
  uVar13 = OT::COLR::paint_glyph(this,(long)param_1,param_3,(long)pauVar16,this_05,0,0,'\x01');
  if (local_11b8._4_4_ == 0) {
    uVar37 = 0;
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90._0_4_ = 0;
    uVar12 = 0;
LAB_00448139:
    fVar38 = (float)((ulong)uVar37 >> 0x20);
    auVar43._0_4_ = (int)(float)uVar12;
    auVar43._4_4_ = (int)fVar38;
    auVar43._8_4_ = (int)((float)uVar37 - (float)uVar12);
    auVar43._12_4_ = (int)((float)((ulong)uVar12 >> 0x20) - fVar38);
  }
  else {
    uVar12 = *(undefined8 *)((long)pauStack_11b0 + (ulong)(local_11b8._4_4_ - 1) * 0x14 + 4);
    uVar37 = *(undefined8 *)((long)pauStack_11b0 + (ulong)(local_11b8._4_4_ - 1) * 0x14 + 0xc);
    auVar43 = ZEXT816(0);
    pauVar16 = pauStack_11b0;
    if ((float)uVar12 <= (float)uVar37) goto LAB_00448139;
  }
  *param_4 = auVar43;
  if ((int)local_11b8 != 0) {
    local_11b8 = local_11b8 & 0xffffffff;
    free(pauStack_11b0);
  }
  local_11b8 = 0;
  pauStack_11b0 = (undefined1 (*) [16])0x0;
  if ((uint)local_11c8 != 0) {
    local_11c8 = (double)((ulong)local_11c8 & 0xffffffff);
    free(pvStack_11c0);
  }
  local_11c8 = 0.0;
  pvStack_11c0 = (void *)0x0;
  if (local_11d8._0_4_ != 0) {
    local_11d8._4_4_ = 0;
    free(stack0xffffffffffffee30);
  }
  if ((char)uVar13 != '\0') {
    return 1;
  }
  this_00 = *(glyf_accelerator_t **)((long)pauVar2[7] + 8);
  while (this_00 == (glyf_accelerator_t *)0x0) {
    phVar5 = *(hb_face_t **)*pauVar2;
    if (phVar5 == (hb_face_t *)0x0) {
LAB_004490aa:
      this_00 = (glyf_accelerator_t *)&_hb_NullPool;
      break;
    }
    this_00 = calloc(1,0x30);
    if (this_00 == (glyf_accelerator_t *)0x0) {
      LOCK();
      bVar7 = *(long *)((long)pauVar2[7] + 8) == 0;
      if (bVar7) {
        *(long *)((long)pauVar2[7] + 8) = (long)&_hb_NullPool;
      }
      UNLOCK();
      pauVar16 = pauVar2;
      if (bVar7) goto LAB_004490aa;
    }
    else {
      OT::glyf_accelerator_t::glyf_accelerator_t(this_00,phVar5,extraout_RDX,pauVar16,this_05);
      LOCK();
      bVar7 = *(long *)((long)pauVar2[7] + 8) == 0;
      if (bVar7) {
        *(long *)((long)pauVar2[7] + 8) = (long)this_00;
      }
      UNLOCK();
      if (bVar7) break;
      OT::glyf_accelerator_t::~glyf_accelerator_t(this_00);
      free(this_00);
    }
    this_00 = *(glyf_accelerator_t **)((long)pauVar2[7] + 8);
  }
  pauVar16 = param_4;
  uVar13 = OT::glyf_accelerator_t::get_extents(this_00,(long)param_1,param_3,(int *)param_4);
  if ((char)uVar13 != '\0') {
    return 1;
  }
  this_01 = *(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
              **)((long)pauVar2[8] + 8);
  while (this_01 ==
         (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
          *)0x0) {
    lVar18 = *(long *)*pauVar2;
    if (lVar18 == 0) {
LAB_0044913c:
      this_01 = (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                 *)&_hb_NullPool;
      break;
    }
    this_01 = calloc(1,200);
    if (this_01 ==
        (accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
         *)0x0) {
      LOCK();
      bVar7 = *(long *)((long)pauVar2[8] + 8) == 0;
      if (bVar7) {
        *(long *)((long)pauVar2[8] + 8) = (long)&_hb_NullPool;
      }
      UNLOCK();
      pauVar16 = pauVar2;
      if (bVar7) goto LAB_0044913c;
    }
    else {
      OT::cff2::
      accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
      ::accelerator_templ_t(this_01,lVar18,extraout_RDX_00,pauVar16,this_05);
      LOCK();
      bVar7 = *(long *)((long)pauVar2[8] + 8) == 0;
      if (bVar7) {
        *(long *)((long)pauVar2[8] + 8) = (long)this_01;
      }
      UNLOCK();
      if (bVar7) break;
      pauVar16 = pauVar2;
      OT::cff2::
      accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
      ::~accelerator_templ_t(this_01);
      free(this_01);
    }
    this_01 = *(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
                **)((long)pauVar2[8] + 8);
  }
  if ((*(long *)(this_01 + 0x40) == 0) || (*(uint *)(this_01 + 0xc0) <= param_3)) goto LAB_00448b95;
  uVar8 = CFF::CFF2FDSelect::get_fd(*(CFF2FDSelect **)(this_01 + 0x90),param_3);
  auVar43 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[]
                      (*(CFFIndex<OT::IntType<unsigned_int,4u>> **)(this_01 + 0x80),param_3);
  uVar13 = auVar43._8_8_;
  local_68 = *(long *)(param_1 + 0x80);
  puVar19 = &_hb_NullPool;
  if ((uint)CONCAT62(extraout_var,uVar8) < *(uint *)(this_01 + 0xb4)) {
    puVar19 = (undefined4 *)
              ((CONCAT62(extraout_var,uVar8) & 0xffffffff) * 0x30 + *(long *)(this_01 + 0xb8));
  }
  iVar23 = *(int *)(param_1 + 0x78);
  puVar3 = *(uint **)(this_01 + 0x70);
  puVar4 = *(uint **)(puVar19 + 8);
  memset((void *)((long)&local_11c8 + 4),0,0x100c);
  local_11c8 = (double)((ulong)local_11c8 & 0xffffffffffffff00);
  local_11d8 = auVar43._0_12_;
  uStack_11cc = 0;
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
  local_1b8 = auVar43._0_8_;
  local_1b0 = uVar13 & 0xffffffff;
  local_1a8 = 0;
  local_19f = 1;
  local_19c = 0;
  local_194 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (puVar3 == (uint *)0x0) {
LAB_004483be:
    local_98 = 0x6b;
  }
  else {
    uVar9 = *puVar3;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    if (uVar9 < 0x4d8) goto LAB_004483be;
    if (uVar9 < 0x846c) {
      local_98 = 0x46b;
    }
    else {
      local_98 = 0x8000;
    }
  }
  if (puVar4 == (uint *)0x0) {
LAB_004483f9:
    local_88 = 0x6b;
  }
  else {
    uVar9 = *puVar4;
    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    if (uVar9 < 0x4d8) goto LAB_004483f9;
    if (uVar9 < 0x846c) {
      local_88 = 0x46b;
    }
    else {
      local_88 = 0x8000;
    }
  }
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_37 = 0;
  local_58 = *(short **)(this_01 + 0x78);
  if (local_68 == 0) {
    local_38 = false;
  }
  else {
    local_38 = false;
    if (iVar23 != 0) {
      local_38 = *local_58 != 0;
    }
  }
  local_4c = puVar19[10];
  local_1200[0] = '\0';
  local_11f8 = _DAT_005de0f0;
  dStack_11f0 = _UNK_005de0f8;
  local_11e8 = _DAT_005de100;
  dStack_11e0 = _UNK_005de108;
  local_1a0 = '\0';
  iVar21 = 200000;
  uVar9 = 0;
  local_90 = puVar3;
  local_80 = puVar4;
  local_60 = iVar23;
  do {
    uVar10 = uVar9 + 1;
    uVar28 = (uint)uVar13;
    if (uVar28 < uVar10) {
      uVar27 = (uint)((int)local_18c == 0) * 3 + 0xb;
switchD_00448549_caseD_b:
                    /* try { // try from 004484e8 to 004485c7 has its CatchHandler @ 004491ee */
      CFF::
      cs_opset_t<CFF::number_t,cff2_cs_opset_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t,cff2_path_procs_extents_t>
      ::process_op(uVar27,(long *)local_11d8,local_1200);
    }
    else {
      uVar12 = local_11d8._0_8_;
      uVar27 = (uint)*(byte *)(local_11d8._0_8_ + (ulong)uVar9);
      uStack_11cc = uVar10;
      if (uVar27 == 0xc) {
        if (uVar28 < uVar9 + 2) {
          uVar27 = 0xffff;
          goto switchD_00448549_caseD_b;
        }
        uVar27 = *(byte *)(uVar12 + (ulong)uVar10) | 0x100;
        uStack_11cc = uVar9 + 2;
      }
      switch(uVar27) {
      case 10:
      case 0x1d:
        CFF::
        cs_opset_t<CFF::number_t,cff2_cs_opset_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t,cff2_path_procs_extents_t>
        ::process_op(uVar27,(long *)local_11d8,local_1200);
        break;
      default:
        goto switchD_00448549_caseD_b;
      case 0xf:
        iVar23 = local_11c8._4_4_;
        bVar7 = local_11c8._4_4_ == 0;
        if (bVar7) {
          _hb_CrapPool = 0;
LAB_00448ab5:
          local_11c8 = (double)CONCAT71(local_11c8._1_7_,1);
          iVar23 = 0;
          if ((char)local_37 == '\0') goto LAB_00448599;
LAB_00448ad0:
LAB_00448ada:
          uStack_11cc = uVar28 + 1;
        }
        else {
          iVar23 = (int)local_11a8[(ulong)(iVar23 - 1) - 3];
          if (iVar23 < 0) goto LAB_00448ab5;
          if ((char)local_37 != '\0') goto LAB_00448ad0;
LAB_00448599:
          if (local_37._1_1_ != '\0') goto LAB_00448ada;
          local_4c = iVar23;
        }
        local_37 = CONCAT11(local_37._1_1_,1);
        local_11c8 = (double)(ulong)(uint)local_11c8;
        break;
      case 0x10:
        CFF::cff2_cs_interp_env_t<CFF::number_t>::process_blend
                  ((cff2_cs_interp_env_t<CFF::number_t> *)local_11d8);
        if (local_11c8._4_4_ == 0) {
          _hb_CrapPool = 0;
          uVar9 = 0;
LAB_00448af3:
          local_11c8 = (double)CONCAT71(local_11c8._1_7_,1);
          uVar13 = 0;
        }
        else {
          uVar9 = local_11c8._4_4_ - 1;
          local_11c8 = (double)CONCAT44(uVar9,(uint)local_11c8);
          uVar13 = (ulong)(uint)(int)local_11a8[(ulong)uVar9 - 3];
          if ((int)local_11a8[(ulong)uVar9 - 3] < 0) {
            goto LAB_00448af3;
          }
        }
        uVar10 = (uint)uVar13;
        uVar28 = ~local_50 * uVar10 + uVar9;
        if (uVar9 < uVar28) {
          iVar23 = local_11d8._8_4_ + 1;
          uStack_11cc = iVar23;
        }
        else {
          if (uVar10 != 0) {
            if (local_38 == '\0') {
              iVar23 = 0;
              if (uVar10 != 1) {
                lVar18 = 0;
                uVar27 = uVar28;
                do {
                  if (uVar27 < uVar9) {
                    pdVar29 = local_11a8 + ((ulong)uVar27 - 3);
                    dVar36 = local_11a8[(ulong)uVar27 - 3];
                  }
                  else {
                    local_11c8 = (double)CONCAT71(local_11c8._1_7_,1);
                    _hb_CrapPool = 0;
                    dVar36 = 0.0;
                    pdVar29 = (double *)&_hb_CrapPool;
                  }
                  *pdVar29 = dVar36 + DAT_005db340;
                  uVar20 = uVar27 + 1;
                  if (uVar20 < uVar9) {
                    pdVar29 = local_11a8 + ((ulong)uVar20 - 3);
                    dVar36 = local_11a8[(ulong)uVar20 - 3];
                  }
                  else {
                    local_11c8 = (double)CONCAT71(local_11c8._1_7_,1);
                    _hb_CrapPool = 0;
                    dVar36 = 0.0;
                    pdVar29 = (double *)&_hb_CrapPool;
                  }
                  *pdVar29 = dVar36 + DAT_005db340;
                  lVar18 = lVar18 + -2;
                  uVar27 = uVar27 + 2;
                } while (-lVar18 != (ulong)(uVar10 & 0xfffffffe));
                iVar23 = -(int)lVar18;
              }
              if ((uVar13 & 1) != 0) {
LAB_0044880d:
                uVar28 = uVar28 + iVar23;
                if (uVar28 < uVar9) {
                  pdVar29 = local_11a8 + ((ulong)uVar28 - 3);
                  dVar36 = local_11a8[(ulong)uVar28 - 3] + DAT_005db340;
                }
                else {
                  local_11c8 = (double)CONCAT71(local_11c8._1_7_,1);
                  _hb_CrapPool = 0;
                  dVar36 = 0.0;
                  pdVar29 = (double *)&_hb_CrapPool;
                }
                *pdVar29 = dVar36;
              }
            }
            else if (local_48._4_4_ == 0) {
              iVar23 = 0;
              if (uVar10 != 1) {
                lVar18 = 0;
                uVar27 = uVar28;
                do {
                  if (uVar27 < uVar9) {
                    pdVar29 = local_11a8 + ((ulong)uVar27 - 3);
                    dVar36 = local_11a8[(ulong)uVar27 - 3];
                  }
                  else {
                    local_11c8 = (double)CONCAT71(local_11c8._1_7_,1);
                    _hb_CrapPool = 0;
                    dVar36 = 0.0;
                    pdVar29 = (double *)&_hb_CrapPool;
                  }
                  *pdVar29 = dVar36 + DAT_005db340;
                  uVar20 = uVar27 + 1;
                  if (uVar20 < uVar9) {
                    pdVar29 = local_11a8 + ((ulong)uVar20 - 3);
                    dVar36 = local_11a8[(ulong)uVar20 - 3];
                  }
                  else {
                    local_11c8 = (double)CONCAT71(local_11c8._1_7_,1);
                    _hb_CrapPool = 0;
                    dVar36 = 0.0;
                    pdVar29 = (double *)&_hb_CrapPool;
                  }
                  *pdVar29 = dVar36 + DAT_005db340;
                  lVar18 = lVar18 + -2;
                  uVar27 = uVar27 + 2;
                } while (-lVar18 != (ulong)(uVar10 & 0xfffffffe));
                iVar23 = -(int)lVar18;
              }
              if ((uVar13 & 1) != 0) goto LAB_0044880d;
            }
            else {
              uVar20 = uVar9 - uVar10 * local_50;
              uVar26 = 0;
              uVar27 = uVar20;
              do {
                uVar22 = (ulong)uVar27;
                uVar32 = 0x201 - uVar27;
                if (0x201 < uVar27) {
                  uVar32 = 0;
                }
                if (local_50 < uVar32) {
                  uVar32 = local_50;
                }
                iVar23 = local_50 * (int)uVar26;
                uVar17 = uVar20 + iVar23;
                uVar30 = 0x201 - uVar17;
                if (0x201 < uVar17) {
                  uVar30 = 0;
                }
                if (local_50 < uVar30) {
                  uVar30 = local_50;
                }
                uVar11 = iVar23 + uVar28 + uVar10;
                uVar17 = 0x201 - uVar11;
                if (0x201 < uVar11) {
                  uVar17 = 0;
                }
                if (local_50 < uVar17) {
                  uVar17 = local_50;
                }
                uVar11 = uVar28 + (int)uVar26;
                if (uVar11 < uVar9) {
                  pdVar29 = local_11a8 + ((ulong)uVar11 - 3);
                  dVar36 = local_11a8[(ulong)uVar11 - 3];
                }
                else {
                  local_11c8 = (double)CONCAT71(local_11c8._1_7_,1);
                  _hb_CrapPool = 0;
                  dVar36 = 0.0;
                  pdVar29 = (double *)&_hb_CrapPool;
                }
                dVar35 = 0.0;
                if (local_48._4_4_ == uVar17) {
                  if ((ulong)uVar30 - 1 < 3) {
                    dVar35 = 0.0;
                    uVar31 = 0;
                  }
                  else {
                    dVar35 = 0.0;
                    uVar31 = 0;
                    do {
                      dVar35 = (double)*(float *)((long)pvStack_40 + uVar31 * 4 + 0xc) *
                               local_11a8[uVar22 + uVar31] +
                               (double)*(float *)((long)pvStack_40 + uVar31 * 4 + 8) *
                               local_11a8[uVar22 + (uVar31 - 1)] +
                               (double)*(float *)((long)pvStack_40 + uVar31 * 4 + 4) *
                               local_11a8[uVar22 + (uVar31 - 2)] +
                               (double)*(float *)((long)pvStack_40 + uVar31 * 4) *
                               local_11a8[uVar22 + (uVar31 - 3)] + dVar35;
                      uVar31 = uVar31 + 4;
                    } while ((uVar32 & 0x3fc) != uVar31);
                  }
                  if ((uVar30 & 3) != 0) {
                    uVar25 = 0;
                    do {
                      dVar35 = dVar35 + (double)*(float *)((long)pvStack_40 +
                                                          uVar25 * 4 + uVar31 * 4) *
                                        local_11a8[uVar31 + uVar22 + (uVar25 - 3)];
                      uVar25 = uVar25 + 1;
                    } while ((uVar32 & 3) != uVar25);
                  }
                }
                *pdVar29 = dVar36 + dVar35;
                uVar26 = uVar26 + 1;
                uVar27 = uVar27 + local_50;
              } while (uVar26 != uVar13);
            }
          }
          if (uVar9 < uVar10 * local_50) {
            local_11c8 = (double)CONCAT71(local_11c8._1_7_,1);
          }
          else {
            local_11c8 = (double)CONCAT44(uVar9 - uVar10 * local_50,(uint)local_11c8);
          }
        }
      }
    }
    dVar36 = local_11e8;
    if (local_190 != '\0') {
LAB_00448b52:
      iVar23 = local_11d8._8_4_ + 1;
      uStack_11cc = iVar23;
      bVar7 = false;
      goto LAB_00448b60;
    }
    uVar13 = (ulong)(uint)local_11d8._8_4_;
    if ((((uint)local_11d8._8_4_ < uStack_11cc) || ((char)local_11c8 != '\0')) ||
       (iVar21 = iVar21 + -1, iVar21 == 0)) goto LAB_00448b52;
    uVar9 = uStack_11cc;
  } while (local_1a0 == '\0');
  iVar21 = 0;
  iVar24 = 0;
  iVar23 = 0;
  if (local_11f8 < local_11e8) {
    dVar35 = floor(local_11f8 + DAT_005db338);
    iVar23 = (int)dVar35;
    dVar36 = floor((dVar36 - (double)(int)dVar35) + DAT_005db338);
    iVar24 = (int)dVar36;
  }
  dVar36 = dStack_11f0;
  *(int *)(*param_4 + 8) = iVar24;
  *(int *)*param_4 = iVar23;
  iVar33 = 0;
  if (dStack_11f0 < dStack_11e0) {
    dVar35 = floor(dStack_11e0 + DAT_005db338);
    iVar33 = (int)dVar35;
    dVar36 = floor((dVar36 - (double)(int)dVar35) + DAT_005db338);
    iVar21 = (int)dVar36;
  }
  *(int *)(*param_4 + 0xc) = iVar21;
  *(int *)(*param_4 + 4) = iVar33;
  fVar41 = *(float *)(param_1 + 0x4c) * (float)((iVar24 + iVar23) * 0x10000 >> 0x10);
  fVar42 = *(float *)(param_1 + 0x4c) * (float)(int)(short)iVar23;
  fVar39 = *(float *)(param_1 + 0x50) * (float)(int)(short)iVar33;
  fVar40 = *(float *)(param_1 + 0x50) * (float)((iVar21 + iVar33) * 0x10000 >> 0x10);
  fVar38 = *(float *)(param_1 + 0x48);
  if ((fVar38 != 0.0) || (NAN(fVar38))) {
    fVar34 = fVar38 * fVar39;
    fVar38 = fVar38 * fVar40;
    fVar41 = fVar41 + (float)(~-(uint)(fVar38 <= fVar34) & (uint)fVar38 |
                             (uint)fVar34 & -(uint)(fVar38 <= fVar34));
    fVar42 = fVar42 + (float)(~-(uint)(fVar34 <= fVar38) & (uint)fVar38 |
                             (uint)fVar34 & -(uint)(fVar34 <= fVar38));
  }
  fVar38 = floorf(fVar42);
  *(int *)*param_4 = (int)fVar38;
  fVar39 = floorf(fVar39);
  *(int *)(*param_4 + 4) = (int)fVar39;
  fVar41 = ceilf(fVar41);
  *(int *)(*param_4 + 8) = (int)(fVar41 - (float)(int)fVar38);
  fVar40 = ceilf(fVar40);
  *(int *)(*param_4 + 0xc) = (int)(fVar40 - (float)(int)fVar39);
  iVar23 = *(int *)(param_1 + 0x3c);
  iVar21 = *(int *)(param_1 + 0x40);
  bVar7 = true;
  if (iVar23 != 0 || iVar21 != 0) {
    iVar24 = -iVar21;
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar24 = iVar21;
    }
    *(int *)(*param_4 + 4) = (int)fVar39 + iVar24;
    *(int *)(*param_4 + 0xc) = (int)(fVar40 - (float)(int)fVar39) - iVar24;
    iVar21 = -iVar23;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar21 = iVar23;
    }
    if (param_1[0x38] != (hb_font_t)0x0) {
      *(int *)*param_4 = (int)fVar38 - iVar21 / 2;
    }
    *(int *)(*param_4 + 8) = iVar21 + (int)(fVar41 - (float)(int)fVar38);
  }
LAB_00448b60:
  if ((int)local_48 != 0) {
    local_48 = local_48 & 0xffffffff;
    free(pvStack_40);
  }
  if (bVar7) {
    return 1;
  }
LAB_00448b95:
  paVar14 = hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
            ::get((hb_lazy_loader_t<OT::cff1_accelerator_t,hb_face_lazy_loader_t<OT::cff1_accelerator_t,16u>,hb_face_t,16u,OT::cff1_accelerator_t>
                   *)(pauVar2 + 8));
  local_11c8 = 0.0;
  pvStack_11c0 = (void *)0x0;
  _local_11d8 = ZEXT816(0);
  iVar23 = 0;
  uVar13 = _get_bounds((long)paVar14,param_3,(double *)local_11d8,0);
  dVar36 = local_11c8;
  if ((char)uVar13 != '\0') {
    iVar21 = 0;
    if ((double)local_11d8._0_8_ < local_11c8) {
      dVar35 = floor((double)local_11d8._0_8_ + DAT_005db338);
      iVar21 = (int)dVar35;
      dVar36 = floor((dVar36 - (double)(int)dVar35) + DAT_005db338);
      iVar23 = (int)dVar36;
    }
    *(int *)(*param_4 + 8) = iVar23;
    *(int *)*param_4 = iVar21;
    dVar36 = (double)stack0xffffffffffffee30;
    iVar23 = 0;
    iVar21 = 0;
    if ((double)stack0xffffffffffffee30 < (double)pvStack_11c0) {
      dVar35 = floor((double)pvStack_11c0 + DAT_005db338);
      iVar21 = (int)dVar35;
      dVar36 = floor((dVar36 - (double)(int)dVar35) + DAT_005db338);
      iVar23 = (int)dVar36;
    }
    *(int *)(*param_4 + 0xc) = iVar23;
    *(int *)(*param_4 + 4) = iVar21;
    hb_font_t::scale_glyph_extents(param_1,(int *)param_4);
  }
  return uVar13 & 0xff;
}


