// Function : getLayersForGlyph
// Namespace: juce:Typeface
// Entry    : 00353510
// Prototype: undefined getLayersForGlyph(undefined8 * param_1, long * param_2, int param_3, uint param_4, float * param_5)
// Body     : 00353510 - 00354cb9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Typeface::getLayersForGlyph(juce::TypefaceMetricsKind, int, juce::AffineTransform const&)
   const */

void __cdecl
juce::Typeface::getLayersForGlyph
          (undefined8 *param_1,long *param_2,int param_3,uint param_4,float *param_5)

{
  long *plVar1;
  hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t> *this
  ;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short sVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long *plVar7;
  pthread_mutex_t *__ptr;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  float fVar13;
  uint uVar14;
  bool bVar15;
  char cVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined7 extraout_var;
  undefined **ppuVar20;
  _Rb_tree_node_base *p_Var21;
  undefined4 *puVar22;
  ushort *puVar23;
  accelerator_t *paVar24;
  undefined4 *puVar25;
  undefined7 extraout_var_00;
  accelerator_t *paVar26;
  undefined8 uVar27;
  void *pvVar28;
  sbix_accelerator_t *this_00;
  accelerator_t *this_01;
  ushort uVar29;
  short *psVar30;
  float *pfVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  long lVar35;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar36;
  ulong *puVar37;
  accelerator_t *paVar38;
  int iVar39;
  int iVar40;
  long *plVar41;
  ulong *puVar42;
  ushort uVar43;
  ushort uVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  undefined **ppuVar48;
  void *pvVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong *puVar53;
  long *plVar54;
  undefined1 uVar55;
  int *__ptr_00;
  ulong uVar56;
  ulong uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  ulong *local_158;
  undefined **local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float fStack_130;
  float fStack_12c;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined7 uStack_11f;
  uint local_118;
  undefined1 local_114;
  char local_110;
  undefined1 local_108 [16];
  long *local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float *local_d8;
  int local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  uint local_ac;
  undefined **local_a8;
  ulong uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 uStack_88;
  undefined8 uStack_87;
  uint local_78;
  undefined1 local_74;
  long local_70;
  hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t>
  *local_68;
  ulong *local_60;
  ulong *local_58;
  long local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  pfVar31 = param_5;
  plVar17 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
  local_70 = *plVar17;
  lVar18 = (**(code **)(*param_2 + 0x18))(param_2);
  if (param_3 == 1) {
    puVar19 = (undefined8 *)(lVar18 + 0x10);
LAB_0035356a:
    fVar58 = (float)*puVar19;
    fVar60 = (float)((ulong)*puVar19 >> 0x20);
  }
  else {
    fVar58 = 0.0;
    fVar60 = 0.0;
    if (param_3 == 0) {
      puVar19 = (undefined8 *)(lVar18 + 8);
      goto LAB_0035356a;
    }
  }
  fVar58 = DAT_005d9038 / (fVar60 + fVar58);
  lVar18 = *(long *)(local_70 + 0x20);
  uVar32 = *(uint *)(lVar18 + 0x14);
  if (uVar32 == 0) {
    puVar22 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
              ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                     *)(lVar18 + 0x70));
    uVar29 = *(ushort *)((long)puVar22 + 0x12) << 8 | *(ushort *)((long)puVar22 + 0x12) >> 8;
    uVar32 = 1000;
    if (uVar29 - 0x10 < 0x3ff1) {
      uVar32 = (uint)uVar29;
    }
    *(uint *)(lVar18 + 0x14) = uVar32;
  }
  fVar58 = fVar58 / (float)uVar32;
  fVar61 = param_5[1] * 0.0;
  local_f0 = *param_5 * fVar58 + fVar61;
  fVar60 = *param_5 * 0.0;
  local_ec = fVar60 - param_5[1] * fVar58;
  local_e8 = fVar60 + fVar61 + param_5[2];
  fVar60 = param_5[4] * 0.0;
  local_e4 = param_5[3] * fVar58 + fVar60;
  local_e0 = param_5[3] * 0.0;
  local_dc = local_e0 + fVar60 + param_5[5];
  local_e0 = local_e0 - fVar58 * param_5[4];
  plVar17 = (long *)(**(code **)(*param_2 + 0x18))();
  lVar18 = *(long *)(*plVar17 + 0x20);
  bVar15 = hb_ot_color_has_png(lVar18);
  hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
  ::get((hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
         *)(lVar18 + 0x1a0));
  hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>::get
            ((hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
              *)(lVar18 + 0x180));
  hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>::get
            ((hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
              *)(lVar18 + 0x180));
  if ((int)CONCAT71(extraout_var,bVar15) == 0) {
LAB_00353816:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    ppuVar20 = (undefined **)(**(code **)(*param_2 + 0x18))();
    local_148 = ppuVar20;
    p_Var21 = LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::
              get<juce::Typeface::Native::getGlyphExtents(unsigned_int)const::_lambda(auto:1)_1_>
                        ((LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul> *)
                         (ppuVar20 + 0xf),param_4,&local_148);
    if (p_Var21[0x10] == (_Rb_tree_node_base)0x0) goto LAB_00353816;
    iVar39 = *(int *)p_Var21;
    iVar46 = *(int *)(p_Var21 + 4);
    uVar32 = *(uint *)(p_Var21 + 8);
    uVar56 = (ulong)uVar32;
    iVar36 = *(int *)(p_Var21 + 0xc);
    puVar6 = *ppuVar20;
    lVar18 = *(long *)(puVar6 + 0x20);
    this_00 = *(sbix_accelerator_t **)(lVar18 + 0x198);
    while (this_00 == (sbix_accelerator_t *)0x0) {
      lVar35 = *(long *)(lVar18 + 0x68);
      if (lVar35 == 0) {
LAB_00354add:
        this_00 = (sbix_accelerator_t *)&_hb_NullPool;
        break;
      }
      this_00 = calloc(1,0x10);
      if (this_00 == (sbix_accelerator_t *)0x0) {
        LOCK();
        bVar15 = *(long *)(lVar18 + 0x198) == 0;
        if (bVar15) {
          *(long *)(lVar18 + 0x198) = (long)&_hb_NullPool;
        }
        UNLOCK();
        if (bVar15) goto LAB_00354add;
      }
      else {
        OT::sbix_accelerator_t::sbix_accelerator_t(this_00,lVar35,extraout_RDX,uVar56,pfVar31);
        LOCK();
        bVar15 = *(long *)(lVar18 + 0x198) == 0;
        if (bVar15) {
          *(long *)(lVar18 + 0x198) = (long)this_00;
        }
        UNLOCK();
        if (bVar15) break;
        OT::sbix::accelerator_t::~accelerator_t((accelerator_t *)this_00);
        free(this_00);
      }
      this_00 = *(sbix_accelerator_t **)(lVar18 + 0x198);
    }
    puVar22 = *(undefined4 **)this_00;
    __ptr_00 = &_hb_NullPool;
    if (puVar22 == (undefined4 *)0x0) {
      puVar22 = &_hb_NullPool;
    }
    psVar30 = (short *)&_hb_NullPool;
    if (7 < (uint)puVar22[6]) {
      psVar30 = *(short **)(puVar22 + 4);
    }
    if (*psVar30 != 0) {
      lVar18 = *(long *)(puVar6 + 0x20);
      this_01 = *(accelerator_t **)(lVar18 + 0x198);
      while (this_01 == (accelerator_t *)0x0) {
        lVar35 = *(long *)(lVar18 + 0x68);
        if (lVar35 == 0) {
LAB_00354cab:
          this_01 = (accelerator_t *)&_hb_NullPool;
          break;
        }
        this_01 = calloc(1,0x10);
        if (this_01 == (accelerator_t *)0x0) {
          psVar30 = (short *)&_hb_NullPool;
          LOCK();
          bVar15 = *(long *)(lVar18 + 0x198) == 0;
          if (bVar15) {
            *(long *)(lVar18 + 0x198) = (long)&_hb_NullPool;
          }
          UNLOCK();
          if (bVar15) goto LAB_00354cab;
        }
        else {
          OT::sbix_accelerator_t::sbix_accelerator_t
                    ((sbix_accelerator_t *)this_01,lVar35,extraout_RDX_00,psVar30,pfVar31);
          LOCK();
          bVar15 = *(long *)(lVar18 + 0x198) == 0;
          if (bVar15) {
            *(long *)(lVar18 + 0x198) = (long)this_01;
          }
          UNLOCK();
          if (bVar15) break;
          OT::sbix::accelerator_t::~accelerator_t(this_01);
          free(this_01);
        }
        this_01 = *(accelerator_t **)(lVar18 + 0x198);
      }
      puVar23 = (ushort *)OT::sbix::accelerator_t::choose_strike(this_01,(long)puVar6);
      __ptr_00 = OT::SBIXStrike::get_glyph_blob
                           (puVar23,param_4,*(int **)this_01,(int *)0x0,(int *)0x0,
                            *(uint *)(this_01 + 8),(uint *)0x0);
    }
    if (__ptr_00[6] == 0) {
      lVar18 = *(long *)(puVar6 + 0x20);
      paVar24 = *(accelerator_t **)(lVar18 + 400);
      if (paVar24 == (accelerator_t *)0x0) {
        paVar38 = (accelerator_t *)&_hb_NullPool;
        do {
          lVar35 = *(long *)(lVar18 + 0x68);
          if (lVar35 == 0) goto LAB_00353781;
          paVar24 = calloc(1,0x18);
          if (paVar24 == (accelerator_t *)0x0) {
            LOCK();
            bVar15 = *(long *)(lVar18 + 400) == 0;
            if (bVar15) {
              *(long *)(lVar18 + 400) = (long)&_hb_NullPool;
            }
            UNLOCK();
            if (bVar15) goto LAB_00353781;
          }
          else {
            OT::CBDT::accelerator_t::accelerator_t(paVar24,lVar35);
            LOCK();
            bVar15 = *(long *)(lVar18 + 400) == 0;
            if (bVar15) {
              *(long *)(lVar18 + 400) = (long)paVar24;
            }
            UNLOCK();
            if (bVar15) {
              paVar38 = paVar24;
              goto LAB_00353781;
            }
            OT::CBDT::accelerator_t::~accelerator_t(paVar24);
            free(paVar24);
          }
          paVar24 = *(accelerator_t **)(lVar18 + 400);
        } while (paVar24 == (accelerator_t *)0x0);
      }
      paVar38 = paVar24;
LAB_00353781:
      puVar22 = *(undefined4 **)(paVar38 + 8);
      if (puVar22 == (undefined4 *)0x0) {
        puVar22 = &_hb_NullPool;
      }
      if (puVar22[6] != 0) {
        lVar18 = *(long *)(puVar6 + 0x20);
        do {
          while( true ) {
            paVar24 = *(accelerator_t **)(lVar18 + 400);
            if (paVar24 != (accelerator_t *)0x0) goto LAB_00354209;
            lVar35 = *(long *)(lVar18 + 0x68);
            paVar24 = (accelerator_t *)&_hb_NullPool;
            if (lVar35 == 0) goto LAB_00354209;
            paVar24 = calloc(1,0x18);
            if (paVar24 == (accelerator_t *)0x0) break;
            OT::CBDT::accelerator_t::accelerator_t(paVar24,lVar35);
            LOCK();
            bVar15 = *(long *)(lVar18 + 400) == 0;
            if (bVar15) {
              *(long *)(lVar18 + 400) = (long)paVar24;
            }
            UNLOCK();
            if (bVar15) {
              goto LAB_00354209;
            }
            OT::CBDT::accelerator_t::~accelerator_t(paVar24);
            free(paVar24);
          }
          LOCK();
          bVar15 = *(long *)(lVar18 + 400) == 0;
          if (bVar15) {
            *(long *)(lVar18 + 400) = (long)&_hb_NullPool;
          }
          UNLOCK();
          paVar24 = (accelerator_t *)&_hb_NullPool;
        } while (!bVar15);
LAB_00354209:
        __ptr_00 = OT::CBDT::accelerator_t::reference_png(paVar24,(long)puVar6,param_4);
      }
    }
    if ((*(ulong *)(__ptr_00 + 4) == 0) || ((uint)__ptr_00[6] < 5)) {
LAB_003547c7:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      local_148 = &PTR__MemoryInputStream_007132a0;
      fStack_130 = 0.0;
      fStack_12c = 0.0;
      uStack_128 = 0;
      uStack_127 = 0;
      local_120 = 0;
      uStack_11f = 0;
      uStack_140 = *(ulong *)(__ptr_00 + 4);
      uStack_138 = (ulong)(uint)__ptr_00[6];
      uVar27 = MemoryInputStream::getPosition((MemoryInputStream *)&local_148);
      if ((DefaultImageFormats::get()::formats == '\0') &&
         (iVar40 = __cxa_guard_acquire(&DefaultImageFormats::get()::formats), iVar40 != 0)) {
        DefaultImageFormats::get()::formats = &PTR__PNGImageFormat_00711938;
        _DAT_0071ccd0 = &PTR__JPEGImageFormat_007118f0;
        _DAT_0071ccd8 = 0xbf800000;
        _DAT_0071cce0 = &PTR__GIFImageFormat_007118a8;
        DAT_0071cce8 = (long *)&DefaultImageFormats::get()::formats;
        DAT_0071ccf0 = &DAT_0071ccd0;
        _DAT_0071ccf8 = &DAT_0071cce0;
        _DAT_0071cd00 = 0;
        __cxa_guard_release(&DefaultImageFormats::get()::formats);
      }
      if (DAT_0071cce8 != (long *)0x0) {
        puVar19 = &DAT_0071ccf0;
        plVar17 = DAT_0071cce8;
        do {
                    /* try { // try from 003542a3 to 003542bb has its CatchHandler @ 00354d36 */
          cVar16 = (**(code **)(*plVar17 + 0x18))(plVar17,&local_148);
          (*(code *)local_148[0x17])(&local_148,uVar27);
          if (cVar16 != '\0') {
            plVar17 = (long *)puVar19[-1];
            if (plVar17 != (long *)0x0) {
                    /* try { // try from 003545e4 to 003545f3 has its CatchHandler @ 00354cf4 */
              (**(code **)(*plVar17 + 0x28))(&local_a8,plVar17,&local_148);
              goto LAB_00354602;
            }
            break;
          }
          plVar17 = (long *)*puVar19;
          puVar19 = puVar19 + 1;
        } while (plVar17 != (long *)0x0);
      }
      local_a8 = (undefined **)0x0;
LAB_00354602:
      local_148 = &PTR__MemoryInputStream_007132a0;
      free((void *)CONCAT71(uStack_127,uStack_128));
      ppuVar20 = local_a8;
      if (local_a8 == (undefined **)0x0) goto LAB_003547c7;
      iVar40 = *(int *)(local_a8 + 2);
      if (iVar40 < 1) {
        iVar40 = 1;
      }
      iVar34 = 1;
      if (0 < *(int *)((long)local_a8 + 0x14)) {
        iVar34 = *(int *)((long)local_a8 + 0x14);
      }
      fVar58 = (float)(int)uVar32 / (float)iVar40;
      fStack_12c = local_e4 * (float)iVar39 + local_e0 * (float)iVar46 + local_dc;
      LOCK();
      *(int *)(local_a8 + 1) = *(int *)(local_a8 + 1) + 1;
      UNLOCK();
      fStack_130 = local_e4 * 0.0 + ((float)iVar36 / (float)iVar34) * local_e0;
      local_148 = local_a8;
      uStack_140 = CONCAT44(local_f0 * 0.0 + local_ec * ((float)iVar36 / (float)iVar34),
                            local_f0 * fVar58 + local_ec * 0.0);
      uStack_138 = CONCAT44(fVar58 * local_e4 + local_e0 * 0.0,
                            local_f0 * (float)iVar39 + local_ec * (float)iVar46 + local_e8);
      local_110 = '\x01';
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
                    /* try { // try from 0035474b to 00354754 has its CatchHandler @ 00354d06 */
      puVar19 = operator_new(0x40);
      *param_1 = puVar19;
      param_1[2] = puVar19 + 8;
      *(undefined1 *)(puVar19 + 7) = 0xff;
      *puVar19 = ppuVar20;
      LOCK();
      ppuVar20 = ppuVar20 + 1;
      *(int *)ppuVar20 = *(int *)ppuVar20 + 1;
      UNLOCK();
      puVar19[3] = CONCAT44(fStack_12c,fStack_130);
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_140;
      *(undefined4 *)((long)puVar19 + 0xc) = uStack_140._4_4_;
      *(undefined4 *)(puVar19 + 2) = (undefined4)uStack_138;
      *(undefined4 *)((long)puVar19 + 0x14) = uStack_138._4_4_;
      *(char *)(puVar19 + 7) = local_110;
      param_1[1] = puVar19 + 8;
      if (local_110 == '\0') {
        free(local_148);
      }
      else if ((local_110 != -1) && (local_148 != (undefined **)0x0)) {
        LOCK();
        ppuVar20 = local_148 + 1;
        *(int *)ppuVar20 = *(int *)ppuVar20 + -1;
        UNLOCK();
        if (*(int *)ppuVar20 == 0) {
          (**(code **)(*local_148 + 8))();
        }
      }
      if (local_a8 != (undefined **)0x0) {
        LOCK();
        ppuVar20 = local_a8 + 1;
        *(int *)ppuVar20 = *(int *)ppuVar20 + -1;
        UNLOCK();
        if (*(int *)ppuVar20 == 0) {
          (**(code **)(*local_a8 + 8))();
        }
      }
    }
    if ((__ptr_00 != (int *)0x0) && (*__ptr_00 != 0)) {
      LOCK();
      *__ptr_00 = *__ptr_00 + -1;
      UNLOCK();
      if (*__ptr_00 == 0) {
        *__ptr_00 = -0xdead;
        __ptr = *(pthread_mutex_t **)(__ptr_00 + 2);
        if (__ptr != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00354809 to 00354810 has its CatchHandler @ 00354cfe */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &__ptr[1].__data,__ptr);
          free(__ptr);
          __ptr_00[2] = 0;
          __ptr_00[3] = 0;
        }
        if (*(code **)(__ptr_00 + 10) != (code *)0x0) {
                    /* try { // try from 0035482e to 0035482f has its CatchHandler @ 00354cf6 */
          (**(code **)(__ptr_00 + 10))(*(undefined8 *)(__ptr_00 + 8));
        }
        free(__ptr_00);
      }
    }
    pvVar28 = (void *)*param_1;
    if (pvVar28 != (void *)param_1[1]) {
      return;
    }
    if (pvVar28 != (void *)0x0) {
      operator_delete(pvVar28);
    }
  }
  plVar17 = (long *)(**(code **)(*param_2 + 0x18))();
  local_50 = *plVar17;
  local_68 = *(hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t>
               **)(local_50 + 0x20);
  this = (hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
          *)(local_68 + 0x180);
  puVar25 = hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
            ::get(this);
  uVar29 = *(ushort *)((long)puVar25 + 2);
  puVar22 = &_hb_NullPool;
  if (uVar29 != 0) {
    uVar32 = puVar25[1];
    uVar32 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
    iVar39 = (ushort)(uVar29 << 8 | uVar29 >> 8) - 1;
    iVar46 = 0;
    do {
      while( true ) {
        uVar45 = (uint)(iVar46 + iVar39) >> 1;
        uVar29 = *(ushort *)((long)puVar25 + (ulong)uVar45 * 6 + (ulong)uVar32);
        uVar33 = (uint)(ushort)(uVar29 << 8 | uVar29 >> 8);
        if (param_4 < uVar33) break;
        if (param_4 <= uVar33) {
          puVar22 = (undefined4 *)((long)puVar25 + (ulong)uVar45 * 6 + (ulong)uVar32);
          goto LAB_003538b4;
        }
        iVar46 = uVar45 + 1;
        if (iVar39 < iVar46) goto LAB_003538b4;
      }
      iVar39 = uVar45 - 1;
    } while (iVar46 <= iVar39);
  }
LAB_003538b4:
  uVar29 = *(ushort *)(puVar22 + 1) << 8 | *(ushort *)(puVar22 + 1) >> 8;
  uVar33 = (uint)(ushort)(*(ushort *)((long)puVar22 + 2) << 8 | *(ushort *)((long)puVar22 + 2) >> 8)
  ;
  uVar45 = (uint)(ushort)(*(ushort *)(puVar25 + 3) << 8 | *(ushort *)(puVar25 + 3) >> 8);
  uVar32 = uVar45 - uVar33;
  if (uVar45 < uVar33) {
    uVar32 = 0;
  }
  if (uVar29 < uVar32) {
    uVar32 = (uint)uVar29;
  }
  uVar56 = (ulong)uVar32;
  if (uVar32 == 0) {
    local_158 = (ulong *)0x0;
    puVar53 = (ulong *)0x0;
  }
  else {
    local_158 = operator_new(uVar56 * 8);
    *local_158 = 0;
    if (uVar32 == 1) {
      puVar53 = local_158 + 1;
    }
    else {
      puVar53 = local_158 + uVar56;
      local_158[1] = 0;
      if (((((uVar32 != 2) && (local_158[2] = 0, uVar32 != 3)) && (local_158[3] = 0, uVar32 != 4))
          && ((local_158[4] = 0, uVar32 != 5 && (local_158[5] = 0, puVar53 != local_158 + 6)))) &&
         ((local_158[6] = 0, puVar53 != local_158 + 7 &&
          (local_158[7] = 0, puVar53 != local_158 + 8)))) {
        local_158[8] = 0;
        lVar18 = 0;
        if (uVar56 != 9) {
          do {
            lVar35 = lVar18 + 8;
            *(ulong *)((long)local_158 + lVar18 + 0x48) = *local_158;
            lVar18 = lVar35;
          } while (uVar56 * 8 + -0x48 != lVar35);
        }
      }
    }
  }
                    /* try { // try from 003539c6 to 003539cd has its CatchHandler @ 00354d2f */
  puVar25 = hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
            ::get(this);
  uVar29 = *(ushort *)((long)puVar25 + 2);
  puVar22 = &_hb_NullPool;
  if (uVar29 != 0) {
    uVar33 = puVar25[1];
    uVar33 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18;
    iVar39 = (ushort)(uVar29 << 8 | uVar29 >> 8) - 1;
    iVar46 = 0;
    do {
      while( true ) {
        uVar47 = (uint)(iVar39 + iVar46) >> 1;
        uVar29 = *(ushort *)((long)puVar25 + (ulong)uVar47 * 6 + (ulong)uVar33);
        uVar45 = (uint)(ushort)(uVar29 << 8 | uVar29 >> 8);
        if (param_4 < uVar45) break;
        if (param_4 <= uVar45) {
          puVar22 = (undefined4 *)((long)puVar25 + (ulong)uVar47 * 6 + (ulong)uVar33);
          goto LAB_00353a34;
        }
        iVar46 = uVar47 + 1;
        if (iVar39 < iVar46) goto LAB_00353a34;
      }
      iVar39 = uVar47 - 1;
    } while (iVar46 <= iVar39);
  }
LAB_00353a34:
  uVar29 = *(ushort *)((long)puVar22 + 2) << 8 | *(ushort *)((long)puVar22 + 2) >> 8;
  uVar43 = *(ushort *)(puVar22 + 1) << 8 | *(ushort *)(puVar22 + 1) >> 8;
  uVar45 = (uint)(ushort)(*(ushort *)(puVar25 + 3) << 8 | *(ushort *)(puVar25 + 3) >> 8);
  uVar33 = uVar45 - uVar29;
  if (uVar45 < uVar29) {
    uVar33 = 0;
  }
  if (uVar43 < uVar33) {
    uVar33 = (uint)uVar43;
  }
  if (uVar32 < uVar33) {
    uVar33 = uVar32;
  }
  if (uVar33 != 0) {
    uVar32 = puVar25[2];
    uVar47 = 1;
    lVar18 = 0;
    puVar42 = local_158;
    uVar45 = uVar33;
    do {
      uVar5 = *(undefined4 *)
               ((long)puVar25 +
               lVar18 * 4 +
               (ulong)(uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                      uVar32 << 0x18) + (ulong)uVar29 * 4);
      uVar43 = (ushort)uVar5;
      uVar44 = (ushort)((uint)uVar5 >> 0x10);
      puVar37 = puVar42;
      if (uVar47 == 0) {
        _hb_CrapPool = 0;
        puVar37 = &_hb_CrapPool;
      }
      *puVar37 = (ulong)(ushort)(uVar43 << 8 | uVar43 >> 8) |
                 (ulong)(ushort)(uVar44 << 8 | uVar44 >> 8) << 0x20;
      bVar15 = uVar45 == 0;
      uVar47 = uVar45 - 1;
      uVar14 = uVar47;
      if (bVar15) {
        uVar47 = 0;
        uVar14 = uVar45;
      }
      uVar45 = uVar14;
      puVar42 = puVar42 + !bVar15;
      lVar18 = lVar18 + 1;
    } while (uVar33 != (uint)lVar18);
  }
  if (local_158 == puVar53) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pvVar28 = (void *)0x0;
    pvVar49 = (void *)0x0;
  }
  else {
    local_108 = ZEXT816(0);
    local_f8 = (long *)0x0;
    local_68 = local_68 + 0x188;
    puVar42 = local_158;
    local_60 = puVar53;
    do {
      uVar32 = *(uint *)((long)puVar42 + 4);
      if ((ulong)uVar32 == 0xffff) {
        uVar55 = 0;
      }
      else {
                    /* try { // try from 00353b60 to 00353b6c has its CatchHandler @ 00354d80 */
        puVar22 = hb_lazy_loader_t<OT::CPAL,hb_table_lazy_loader_t<OT::CPAL,36u,true>,hb_face_t,36u,hb_blob_t>
                  ::get(local_68);
        if (*(short *)(puVar22 + 1) == 0) {
          uVar33 = 0;
        }
        else {
          uVar29 = *(ushort *)(puVar22 + 3) << 8 | *(ushort *)(puVar22 + 3) >> 8;
          uVar43 = *(ushort *)((long)puVar22 + 2) << 8 | *(ushort *)((long)puVar22 + 2) >> 8;
          uVar33 = 0;
          uVar47 = (uint)(ushort)(*(ushort *)((long)puVar22 + 6) << 8 |
                                 *(ushort *)((long)puVar22 + 6) >> 8);
          uVar45 = uVar47 - uVar29;
          if (uVar47 < uVar29) {
            uVar45 = 0;
          }
          if (uVar43 < uVar45) {
            uVar45 = (uint)uVar43;
          }
          if (uVar32 < uVar45) {
            uVar33 = puVar22[2];
            uVar32 = *(uint *)((long)puVar22 +
                              (ulong)uVar32 * 4 +
                              (ulong)uVar29 * 4 +
                              (ulong)(uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 |
                                      (uVar33 & 0xff00) << 8 | uVar33 << 0x18));
            uVar33 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                     uVar32 << 0x18;
          }
        }
        local_ac = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                   uVar33 << 0x18;
        uVar55 = 1;
      }
                    /* try { // try from 00353bc9 to 00353bd8 has its CatchHandler @ 00354d82 */
      getGlyphPathInGlyphUnits((juce *)&local_d8,(int)*puVar42,local_50);
      Path::applyTransform((Path *)&local_d8,&local_f0);
      fVar13 = local_bc;
      fVar61 = local_c0;
      fVar60 = local_c4;
      fVar58 = local_c8;
      iVar39 = -0x80000000;
      iVar46 = -0x80000000;
      if (DAT_00653430 < local_c8) {
        fVar59 = floorf(local_c8);
        iVar46 = (int)fVar59;
      }
      local_58 = puVar42;
      if (DAT_00653430 < fVar61) {
        fVar59 = floorf(fVar61);
        iVar39 = (int)fVar59;
      }
      fVar58 = (fVar60 - fVar58) + fVar58;
      iVar40 = 0x7fffffff;
      iVar36 = 0x7fffffff;
      if (fVar58 < DAT_00653434) {
        fVar58 = ceilf(fVar58);
        iVar36 = (int)fVar58;
      }
      fVar61 = (fVar13 - fVar61) + fVar61;
      if (fVar61 < DAT_00653434) {
        fVar58 = ceilf(fVar61);
        iVar40 = (int)fVar58;
      }
      iVar36 = iVar36 - iVar46;
      if (iVar36 < -1) {
        iVar36 = -2;
      }
      uVar56 = (ulong)(uint)(iVar40 - iVar39);
      if (iVar40 - iVar39 < 0) {
        uVar56 = 0;
      }
      local_48 = ZEXT416((uint)DAT_005d9038);
      local_38 = 0x3f800000;
      EdgeTable::EdgeTable
                ((EdgeTable *)&local_a8,CONCAT44(iVar39,iVar46 + -1),
                 (ulong)(iVar36 + 2) | uVar56 << 0x20,&local_d8,(float *)local_48);
      uVar56 = uStack_a0;
      ppuVar20 = local_a8;
      local_78 = local_ac;
      local_148 = local_a8;
      local_a8 = (undefined **)0x0;
      uStack_a0 = 0;
      uStack_140 = uVar56;
      uStack_138 = CONCAT44(uStack_94,local_98);
      uStack_128 = uStack_88;
      uStack_127 = (undefined7)uStack_87;
      local_120 = (undefined1)((ulong)uStack_87 >> 0x38);
      fStack_130 = fStack_90;
      fStack_12c = fStack_8c;
      local_118 = local_ac;
      local_110 = '\0';
      uVar11 = local_108._8_8_;
      uVar27 = local_108._0_8_;
      local_114 = uVar55;
      local_74 = uVar55;
      if ((long *)local_108._8_8_ == local_f8) {
        lVar18 = local_108._8_8_ - local_108._0_8_;
        if (lVar18 == 0x7fffffffffffffc0) {
                    /* try { // try from 00354b92 to 00354b9d has its CatchHandler @ 00354d59 */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar57 = lVar18 >> 6;
        uVar52 = uVar57;
        if (lVar18 == 0) {
          uVar52 = 1;
        }
        uVar50 = uVar52 + uVar57;
        if (0x1ffffffffffffff < uVar50) {
          uVar50 = 0x1ffffffffffffff;
        }
        if (CARRY8(uVar52,uVar57)) {
          uVar50 = 0x1ffffffffffffff;
        }
        if (uVar50 == 0) {
          plVar17 = (long *)0x0;
        }
        else {
                    /* try { // try from 00353e94 to 00353e98 has its CatchHandler @ 00354d34 */
          plVar17 = operator_new(uVar50 << 6);
        }
        *(undefined1 *)(plVar17 + uVar57 * 8 + 7) = 0xff;
        plVar17[uVar57 * 8] = (long)ppuVar20;
        local_148 = (undefined **)0x0;
        uStack_140 = 0;
        plVar17[uVar57 * 8 + 1] = uVar56;
        plVar54 = plVar17 + uVar57 * 8 + 2;
        *(undefined4 *)plVar54 = local_98;
        *(undefined4 *)((long)plVar54 + 4) = uStack_94;
        *(float *)(plVar54 + 1) = fStack_90;
        *(float *)((long)plVar54 + 0xc) = fStack_8c;
        puVar19 = (undefined8 *)((long)plVar17 + uVar57 * 0x40 + 0x19);
        *puVar19 = CONCAT17(uStack_88,CONCAT43(fStack_8c,fStack_90._1_3_));
        puVar19[1] = uStack_87;
        *(uint *)(plVar17 + uVar57 * 8 + 6) = local_78;
        *(undefined1 *)((long)plVar17 + uVar57 * 0x40 + 0x34) = local_74;
        *(undefined1 *)(plVar17 + uVar57 * 8 + 7) = 0;
        plVar54 = plVar17;
        if (uVar27 != uVar11) {
          plVar41 = (long *)uVar27;
          do {
            cVar16 = (char)plVar41[7];
            if (cVar16 == -1) {
LAB_00353f47:
              *(char *)(plVar54 + 7) = cVar16;
              if (cVar16 != '\0') goto LAB_00353f50;
LAB_00353fb6:
              free((void *)*plVar41);
LAB_00353fbf:
              *(undefined1 *)(plVar41 + 7) = 0xff;
            }
            else {
              if (cVar16 == '\x01') {
                *plVar54 = *plVar41;
                *plVar41 = 0;
                plVar54[3] = plVar41[3];
                uVar5 = *(undefined4 *)((long)plVar41 + 0xc);
                lVar18 = plVar41[2];
                uVar8 = *(undefined4 *)((long)plVar41 + 0x14);
                *(int *)(plVar54 + 1) = (int)plVar41[1];
                *(undefined4 *)((long)plVar54 + 0xc) = uVar5;
                *(int *)(plVar54 + 2) = (int)lVar18;
                *(undefined4 *)((long)plVar54 + 0x14) = uVar8;
                goto LAB_00353f47;
              }
              *plVar54 = *plVar41;
              lVar18 = plVar41[1];
              *plVar41 = 0;
              plVar41[1] = 0;
              plVar54[1] = lVar18;
              uVar5 = *(undefined4 *)((long)plVar41 + 0x14);
              lVar18 = plVar41[3];
              uVar8 = *(undefined4 *)((long)plVar41 + 0x1c);
              uVar9 = *(undefined8 *)((long)plVar41 + 0x19);
              uVar10 = *(undefined8 *)((long)plVar41 + 0x21);
              *(int *)(plVar54 + 2) = (int)plVar41[2];
              *(undefined4 *)((long)plVar54 + 0x14) = uVar5;
              *(int *)(plVar54 + 3) = (int)lVar18;
              *(undefined4 *)((long)plVar54 + 0x1c) = uVar8;
              *(undefined8 *)((long)plVar54 + 0x19) = uVar9;
              *(undefined8 *)((long)plVar54 + 0x21) = uVar10;
              *(int *)(plVar54 + 6) = (int)plVar41[6];
              *(undefined1 *)((long)plVar54 + 0x34) = *(undefined1 *)((long)plVar41 + 0x34);
              *(char *)(plVar54 + 7) = cVar16;
              if (cVar16 == '\0') goto LAB_00353fb6;
LAB_00353f50:
              if (cVar16 != -1) {
                plVar7 = (long *)*plVar41;
                if (plVar7 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar7 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)(*plVar7 + 8))();
                  }
                }
                goto LAB_00353fbf;
              }
            }
            plVar41 = plVar41 + 8;
            plVar54 = plVar54 + 8;
          } while (plVar41 != (long *)uVar11);
        }
        if ((long *)uVar27 != (long *)0x0) {
          operator_delete((void *)uVar27);
        }
        puVar42 = local_58;
        puVar53 = local_60;
        local_108._8_8_ = plVar54 + 8;
        local_108._0_8_ = plVar17;
        local_f8 = plVar17 + uVar50 * 8;
        if (local_110 == '\0') goto LAB_00354050;
        if (local_110 != -1) {
          if (local_148 != (undefined **)0x0) {
            LOCK();
            ppuVar20 = local_148 + 1;
            *(int *)ppuVar20 = *(int *)ppuVar20 + -1;
            UNLOCK();
            if (*(int *)ppuVar20 == 0) {
              (**(code **)(*local_148 + 8))();
            }
          }
          goto LAB_0035405a;
        }
        ppuVar20 = (undefined **)0x0;
      }
      else {
        *(undefined1 *)(local_108._8_8_ + 0x38) = 0xff;
        *(undefined ***)local_108._8_8_ = ppuVar20;
        local_148 = (undefined **)0x0;
        uStack_140 = 0;
        *(ulong *)(local_108._8_8_ + 8) = uVar56;
        *(long *)(local_108._8_8_ + 0x10) = CONCAT44(uStack_94,local_98);
        *(long *)(local_108._8_8_ + 0x18) = CONCAT44(fStack_8c,fStack_90);
        *(ulong *)(local_108._8_8_ + 0x19) = CONCAT17(uStack_88,CONCAT43(fStack_8c,fStack_90._1_3_))
        ;
        *(undefined8 *)(local_108._8_8_ + 0x21) = uStack_87;
        *(uint *)(local_108._8_8_ + 0x30) = local_ac;
        *(undefined1 *)(local_108._8_8_ + 0x34) = uVar55;
        *(undefined1 *)(local_108._8_8_ + 0x38) = 0;
        local_108._8_8_ = (long *)(local_108._8_8_ + 0x40);
LAB_00354050:
        puVar42 = local_58;
        puVar53 = local_60;
        free(local_148);
LAB_0035405a:
        ppuVar20 = local_a8;
      }
      free(ppuVar20);
      local_cc = 0;
      free(local_d8);
      puVar42 = puVar42 + 1;
    } while (puVar42 != puVar53);
    *param_1 = local_108._0_8_;
    param_1[1] = local_108._8_8_;
    param_1[2] = local_f8;
    pvVar28 = (void *)local_108._0_8_;
    pvVar49 = (void *)local_108._8_8_;
  }
  if (local_158 != (ulong *)0x0) {
    operator_delete(local_158);
    pvVar28 = (void *)*param_1;
    pvVar49 = (void *)param_1[1];
  }
  if (pvVar28 != pvVar49) {
    return;
  }
  if (pvVar49 != (void *)0x0) {
    operator_delete(pvVar49);
  }
  plVar17 = (long *)(**(code **)(*param_2 + 0x18))();
  lVar18 = *(long *)(*plVar17 + 0x20);
  bVar15 = hb_ot_color_has_png(lVar18);
  paVar26 = hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
            ::get((hb_lazy_loader_t<OT::SVG_accelerator_t,hb_face_lazy_loader_t<OT::SVG_accelerator_t,39u>,hb_face_t,39u,OT::SVG_accelerator_t>
                   *)(lVar18 + 0x1a0));
  puVar22 = *(undefined4 **)paVar26;
  puVar25 = &_hb_NullPool;
  if (puVar22 == (undefined4 *)0x0) {
    puVar22 = &_hb_NullPool;
  }
  if (9 < (uint)puVar22[6]) {
    puVar25 = *(undefined4 **)(puVar22 + 4);
  }
  iVar39 = *(int *)((long)puVar25 + 2);
  puVar22 = hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
            ::get((hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
                   *)(lVar18 + 0x180));
  sVar4 = *(short *)((long)puVar22 + 2);
  psVar30 = (short *)hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
                     ::get((hb_lazy_loader_t<OT::COLR,hb_table_lazy_loader_t<OT::COLR,35u,true>,hb_face_t,35u,hb_blob_t>
                            *)(lVar18 + 0x180));
  if (*psVar30 != 0) {
    uVar32 = *(uint *)(psVar30 + 7);
    iVar46 = _hb_NullPool;
    if (uVar32 != 0) {
      iVar46 = *(int *)((long)psVar30 +
                       (ulong)(uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                              uVar32 << 0x18));
    }
    bVar12 = true;
    if (iVar46 != 0) goto LAB_0035418a;
  }
  bVar12 = false;
LAB_0035418a:
  if ((char)(((int)CONCAT71(extraout_var_00,bVar15) != 0) + (iVar39 != 0) * '\x02' +
            (sVar4 != 0) * '\x04') != '\0' || bVar12) {
    lVar18 = (**(code **)(*param_2 + 0x18))();
    plVar17 = *(long **)(lVar18 + 0x18);
    if (plVar17 == (long *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      (**(code **)(*plVar17 + 0x10))(param_1,plVar17,param_4,&local_f0);
      pvVar28 = (void *)*param_1;
      if (pvVar28 != (void *)param_1[1]) {
        return;
      }
      if (pvVar28 != (void *)0x0) {
        operator_delete(pvVar28);
      }
    }
  }
  getGlyphPathInGlyphUnits((juce *)&local_d8,param_4,local_70);
  if ((long)local_cc != 0) {
    pfVar31 = local_d8;
    do {
      fVar58 = *pfVar31;
      if ((fVar58 != DAT_005de3d0) || (NAN(fVar58) || NAN(DAT_005de3d0))) {
        if ((fVar58 != DAT_005de3d4) || (NAN(fVar58) || NAN(DAT_005de3d4))) {
          if (((fVar58 != DAT_005de3d8) || (NAN(fVar58) || NAN(DAT_005de3d8))) &&
             ((fVar58 != DAT_005de3dc || (NAN(fVar58) || NAN(DAT_005de3dc))))) goto LAB_00354354;
        }
        Path::applyTransform((Path *)&local_d8,&local_f0);
        iVar39 = -0x80000000;
        iVar46 = -0x80000000;
        if (DAT_00653430 < local_c8) {
          fVar58 = floorf(local_c8);
          iVar46 = (int)fVar58;
        }
        if (DAT_00653430 < local_c0) {
          fVar58 = floorf(local_c0);
          iVar39 = (int)fVar58;
        }
        local_c8 = local_c8 + (local_c4 - local_c8);
        iVar40 = 0x7fffffff;
        iVar36 = 0x7fffffff;
        if (local_c8 < DAT_00653434) {
          fVar58 = ceilf(local_c8);
          iVar36 = (int)fVar58;
        }
        local_c0 = local_c0 + (local_bc - local_c0);
        if (local_c0 < DAT_00653434) {
          fVar58 = ceilf(local_c0);
          iVar40 = (int)fVar58;
        }
        iVar34 = -2;
        if (-2 < iVar36 - iVar46) {
          iVar34 = iVar36 - iVar46;
        }
        uVar56 = 0;
        if (-1 < iVar40 - iVar39) {
          uVar56 = (ulong)(uint)(iVar40 - iVar39);
        }
        local_108 = ZEXT416((uint)DAT_005d9038);
        local_f8 = (long *)&DAT_3f800000;
        EdgeTable::EdgeTable
                  ((EdgeTable *)&local_a8,CONCAT44(iVar39,iVar46 + -1),
                   (ulong)(iVar34 + 2) | uVar56 << 0x20,&local_d8,(float *)local_108);
        uVar56 = uStack_a0;
        ppuVar20 = local_a8;
        local_74 = 0;
        local_148 = local_a8;
        local_a8 = (undefined **)0x0;
        uStack_a0 = 0;
        uStack_140 = uVar56;
        uStack_138 = CONCAT44(uStack_94,local_98);
        fStack_130 = fStack_90;
        fStack_12c = fStack_8c;
        uStack_128 = uStack_88;
        uStack_127 = (undefined7)uStack_87;
        local_120 = (undefined1)((ulong)uStack_87 >> 0x38);
        local_118 = local_78;
        local_114 = 0;
        local_110 = '\0';
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
                    /* try { // try from 00354573 to 0035457c has its CatchHandler @ 00354cba */
        puVar19 = operator_new(0x40);
        *param_1 = puVar19;
        param_1[2] = puVar19 + 8;
        *(undefined1 *)(puVar19 + 7) = 0xff;
        if (uVar56 * 4 == 0) {
          pvVar28 = (void *)0x0;
        }
        else {
          pvVar28 = malloc(uVar56 * 4);
        }
        *puVar19 = pvVar28;
        puVar19[1] = uVar56;
        if ((long)uVar56 < 1) goto LAB_00354914;
        uVar56 = uVar56 & 0x3fffffffffffffff;
        uVar52 = uVar56 + (uVar56 == 0);
        if ((uVar52 < 8) ||
           ((pvVar28 < (void *)((long)ppuVar20 + uVar52 * 4) &&
            (ppuVar20 < (undefined **)((long)pvVar28 + uVar52 * 4))))) {
          ppuVar48 = ppuVar20;
          goto LAB_003548f4;
        }
        uVar51 = uVar52 & 0xfffffffffffffff8;
        uVar50 = (uVar51 - 8 >> 3) + 1;
        uVar57 = (ulong)((uint)uVar50 & 3);
        if (uVar51 - 8 < 0x18) {
          lVar18 = 0;
        }
        else {
          uVar50 = uVar50 & 0x3ffffffffffffffc;
          lVar18 = 0;
          do {
            puVar2 = (undefined8 *)((long)ppuVar20 + lVar18 * 4);
            uVar27 = puVar2[1];
            puVar3 = (undefined8 *)((long)ppuVar20 + lVar18 * 4 + 0x10);
            uVar11 = *puVar3;
            uVar9 = puVar3[1];
            puVar3 = (undefined8 *)((long)pvVar28 + lVar18 * 4);
            *puVar3 = *puVar2;
            puVar3[1] = uVar27;
            puVar2 = (undefined8 *)((long)pvVar28 + lVar18 * 4 + 0x10);
            *puVar2 = uVar11;
            puVar2[1] = uVar9;
            puVar2 = (undefined8 *)((long)ppuVar20 + lVar18 * 4 + 0x20);
            uVar27 = puVar2[1];
            puVar3 = (undefined8 *)((long)ppuVar20 + lVar18 * 4 + 0x30);
            uVar11 = *puVar3;
            uVar9 = puVar3[1];
            puVar3 = (undefined8 *)((long)pvVar28 + lVar18 * 4 + 0x20);
            *puVar3 = *puVar2;
            puVar3[1] = uVar27;
            puVar2 = (undefined8 *)((long)pvVar28 + lVar18 * 4 + 0x30);
            *puVar2 = uVar11;
            puVar2[1] = uVar9;
            puVar2 = (undefined8 *)((long)ppuVar20 + lVar18 * 4 + 0x40);
            uVar27 = puVar2[1];
            puVar3 = (undefined8 *)((long)ppuVar20 + lVar18 * 4 + 0x50);
            uVar11 = *puVar3;
            uVar9 = puVar3[1];
            puVar3 = (undefined8 *)((long)pvVar28 + lVar18 * 4 + 0x40);
            *puVar3 = *puVar2;
            puVar3[1] = uVar27;
            puVar2 = (undefined8 *)((long)pvVar28 + lVar18 * 4 + 0x50);
            *puVar2 = uVar11;
            puVar2[1] = uVar9;
            puVar2 = (undefined8 *)((long)ppuVar20 + lVar18 * 4 + 0x60);
            uVar27 = puVar2[1];
            puVar3 = (undefined8 *)((long)ppuVar20 + lVar18 * 4 + 0x70);
            uVar11 = *puVar3;
            uVar9 = puVar3[1];
            puVar3 = (undefined8 *)((long)pvVar28 + lVar18 * 4 + 0x60);
            *puVar3 = *puVar2;
            puVar3[1] = uVar27;
            puVar2 = (undefined8 *)((long)pvVar28 + lVar18 * 4 + 0x70);
            *puVar2 = uVar11;
            puVar2[1] = uVar9;
            lVar18 = lVar18 + 0x20;
            uVar50 = uVar50 - 4;
          } while (uVar50 != 0);
        }
        if (uVar57 != 0) {
          lVar35 = 0;
          do {
            puVar3 = (undefined8 *)((long)ppuVar20 + lVar35 + lVar18 * 4);
            uVar27 = puVar3[1];
            puVar2 = (undefined8 *)((long)ppuVar20 + lVar35 + lVar18 * 4 + 0x10);
            uVar11 = *puVar2;
            uVar9 = puVar2[1];
            puVar2 = (undefined8 *)((long)pvVar28 + lVar35 + lVar18 * 4);
            *puVar2 = *puVar3;
            puVar2[1] = uVar27;
            puVar2 = (undefined8 *)((long)pvVar28 + lVar35 + lVar18 * 4 + 0x10);
            *puVar2 = uVar11;
            puVar2[1] = uVar9;
            lVar35 = lVar35 + 0x20;
          } while (uVar57 * 0x20 != lVar35);
        }
        if (uVar52 != uVar51) {
          uVar56 = uVar56 - uVar51;
          pvVar28 = (void *)((long)pvVar28 + uVar51 * 4);
          ppuVar48 = (undefined **)((long)ppuVar20 + uVar51 * 4);
LAB_003548f4:
          uVar56 = uVar56 + 1;
          lVar18 = 0;
          do {
            *(undefined4 *)((long)pvVar28 + lVar18) = *(undefined4 *)((long)ppuVar48 + lVar18);
            uVar56 = uVar56 - 1;
            lVar18 = lVar18 + 4;
          } while (1 < uVar56);
        }
LAB_00354914:
        *(ulong *)((long)puVar19 + 0x19) =
             CONCAT17(uStack_128,CONCAT43(fStack_12c,fStack_130._1_3_));
        *(ulong *)((long)puVar19 + 0x21) = CONCAT17(local_120,uStack_127);
        puVar19[2] = uStack_138;
        puVar19[3] = CONCAT44(fStack_12c,fStack_130);
        *(uint *)(puVar19 + 6) = local_118;
        *(undefined1 *)((long)puVar19 + 0x34) = local_114;
        *(undefined1 *)(puVar19 + 7) = 0;
        param_1[1] = puVar19 + 8;
        free(ppuVar20);
        goto LAB_003545c3;
      }
      pfVar31 = pfVar31 + 2;
LAB_00354354:
      pfVar31 = pfVar31 + 1;
    } while (pfVar31 != local_d8 + local_cc);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_003545c3:
  local_cc = 0;
  free(local_d8);
  return;
}


