// Function : drawGlyphs
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003328f0
// Prototype: undefined drawGlyphs(long param_1, FillType * param_2, ushort * param_3, float * param_4, float * param_5, float * param_6)
// Body     : 003328f0 - 00333781


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::drawGlyphs(juce::Span<unsigned
   short const, 18446744073709551615ul>, juce::Span<juce::Point<float> const,
   18446744073709551615ul>, juce::AffineTransform const&) */

void __cdecl
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::drawGlyphs
          (long param_1,FillType *param_2,ushort *param_3,float *param_4,float *param_5,
          float *param_6)

{
  long *plVar1;
  SharedFontInternal *pSVar2;
  pthread_mutex_t *__mutex;
  char cVar3;
  ushort uVar4;
  int iVar5;
  long *plVar6;
  void *__src;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *pSVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
  *p_Var12;
  undefined8 *puVar13;
  void *__dest;
  SharedFontInternal *pSVar14;
  float *pfVar15;
  float *pfVar16;
  DeletedAtShutdown *this;
  undefined8 *puVar17;
  uint uVar18;
  ushort *extraout_RDX;
  ushort *extraout_RDX_00;
  ushort *extraout_RDX_01;
  ushort *extraout_RDX_02;
  ushort *extraout_RDX_03;
  ushort *extraout_RDX_04;
  ushort *extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ushort *puVar25;
  long lVar26;
  SharedFontInternal *pSVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  int local_168;
  int iStack_164;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  SharedFontInternal *local_d0;
  SharedFontInternal *pSStack_c8;
  long *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  float *local_88;
  float *local_80;
  ushort *local_78;
  long local_70;
  ushort *local_68;
  long *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (param_2 != (FillType *)0x0) {
    local_78 = param_3 + (long)param_2;
    lVar26 = 0;
    puVar25 = param_3;
    local_120 = param_1;
    local_88 = param_5;
    local_80 = param_6;
    do {
      plVar6 = *(long **)(param_1 + 8);
      if (*plVar6 != 0) {
        uVar4 = *puVar25;
        fVar42 = *local_80;
        fVar28 = local_80[1];
        fVar43 = fVar28 * 0.0 + fVar42;
        fVar41 = fVar42 * 0.0 + fVar28;
        fVar29 = local_80[3];
        fVar33 = local_80[4];
        fVar40 = fVar33 * 0.0 + fVar29;
        fVar35 = fVar29 * 0.0 + fVar33;
        fVar34 = (float)*(undefined8 *)(local_88 + lVar26 * 2);
        fVar38 = (float)((ulong)*(undefined8 *)(local_88 + lVar26 * 2) >> 0x20);
        local_e8 = local_80[2] + fVar34 * fVar42 + fVar28 * fVar38;
        fStack_e4 = local_80[5] + fVar34 * fVar29 + fVar33 * fVar38;
        fStack_e0 = local_80[4] + fVar34 * 0.0 + fVar38 * 0.0;
        fStack_dc = local_80[5] + fVar34 * 0.0 + fVar38 * 0.0;
        local_70 = lVar26;
        local_68 = puVar25;
        if (((((fVar41 != 0.0) || (NAN(fVar41))) || (fVar40 != DAT_005d9058)) ||
            ((NAN(fVar40) || NAN(DAT_005d9058) || (fVar43 != DAT_005d9038)))) ||
           ((fVar35 != DAT_005d9038 ||
            ((NAN(fVar35) || NAN(DAT_005d9038) || (*(char *)((long)plVar6 + 0x29) != '\0')))))) {
          local_b8 = ZEXT416((uint)fVar40);
          local_98 = ZEXT416((uint)fVar35);
          local_a8 = ZEXT416((uint)fVar41);
          fVar28 = detail::FontRendering::getEffectiveHeight
                             (plVar6 + 0xe,param_2,param_3,param_4,(uint *)param_5,(ulong)param_6);
          lVar26 = *(long *)(param_1 + 8);
          fVar29 = fVar28 * *(float *)(*(long *)(lVar26 + 0x70) + 0x70);
          fVar33 = fVar43 * fVar29 + (float)local_a8._0_4_ * 0.0;
          fVar34 = fVar43 * 0.0 + (float)local_a8._0_4_ * fVar28;
          fVar38 = fVar43 * 0.0 + (float)local_a8._0_4_ * 0.0 + local_e8;
          fVar42 = local_b8._0_4_;
          fVar29 = fVar42 * fVar29 + (float)local_98._0_4_ * 0.0;
          fVar28 = fVar42 * 0.0 + (float)local_98._0_4_ * fVar28;
          fVar42 = fStack_e4 + fVar42 * 0.0 + (float)local_98._0_4_ * 0.0;
          if (*(char *)(lVar26 + 0x28) == '\0') {
            fVar35 = *(float *)(lVar26 + 8);
            fVar40 = *(float *)(lVar26 + 0xc);
            fVar39 = fVar35 * fVar38 + fVar42 * fVar40 + *(float *)(lVar26 + 0x10);
            fVar41 = *(float *)(lVar26 + 0x14);
            fVar43 = *(float *)(lVar26 + 0x18);
            fVar36 = fVar41 * fVar33;
            fVar37 = fVar41 * fVar34;
            fVar33 = fVar35 * fVar33 + fVar40 * fVar29;
            fVar34 = fVar35 * fVar34 + fVar40 * fVar28;
            fVar29 = fVar36 + fVar43 * fVar29;
            fVar28 = fVar37 + fVar43 * fVar28;
            fVar35 = fVar41 * fVar38 + fVar42 * fVar43;
            fVar42 = *(float *)(lVar26 + 0x1c);
          }
          else {
            fVar35 = (float)(int)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20);
            fVar39 = fVar38 + (float)(int)*(undefined8 *)(lVar26 + 0x20);
          }
          local_118 = (SharedFontInternal *)CONCAT44(fVar34,fVar33);
          local_110 = (undefined8 *)CONCAT44(fVar29,fVar39);
          local_108 = (long *)CONCAT44(fVar42 + fVar35,fVar28);
          Font::SharedFontInternal::getTypefacePtr
                    ((SharedFontInternal *)&local_60,*(long *)(lVar26 + 0x70),
                     (long *)(lVar26 + 0x70),param_4,(uint *)param_5,(ulong)param_6);
          plVar1 = local_60;
                    /* try { // try from 00332bd0 to 00332be4 has its CatchHandler @ 0033381d */
          param_5 = (float *)&local_118;
          Typeface::getLayersForGlyph
                    (&local_158,local_60,*(int *)(*(long *)(*(long *)(param_1 + 8) + 0x70) + 0x60),
                     (uint)uVar4,param_5);
          local_d8 = 0;
          local_d0 = local_158;
          pSStack_c8 = uStack_150;
          local_c0 = local_148;
          local_158 = (SharedFontInternal *)0x0;
          uStack_150 = (SharedFontInternal *)0x0;
          local_148 = (long *)0x0;
          LOCK();
          plVar6 = plVar1 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*plVar1 + 8))(plVar1);
          }
        }
        else {
          if (GlyphCache::getSingletonPointer()::g == (DeletedAtShutdown *)0x0) {
            this = operator_new(0x60);
            *(undefined8 *)this = 0;
            *(undefined8 *)(this + 8) = 0;
            *(undefined8 *)(this + 0x10) = 0;
            *(undefined8 *)(this + 0x18) = 0;
            *(undefined8 *)(this + 0x20) = 0;
            *(undefined8 *)(this + 0x28) = 0;
            *(undefined8 *)(this + 0x30) = 0;
            *(undefined8 *)(this + 0x38) = 0;
            *(undefined8 *)(this + 0x40) = 0;
            *(undefined8 *)(this + 0x48) = 0;
            *(undefined8 *)(this + 0x50) = 0;
            *(undefined8 *)(this + 0x58) = 0;
            DeletedAtShutdown::DeletedAtShutdown(this);
            *(undefined ***)this = &PTR__GlyphCache_00712010;
            *(undefined4 *)(this + 0x10) = 0;
            *(undefined8 *)(this + 0x18) = 0;
            *(DeletedAtShutdown **)(this + 0x20) = this + 0x10;
            *(DeletedAtShutdown **)(this + 0x28) = this + 0x10;
            *(undefined8 *)(this + 0x30) = 0;
            *(DeletedAtShutdown **)(this + 0x40) = this + 0x38;
            *(DeletedAtShutdown **)(this + 0x38) = this + 0x38;
            *(undefined8 *)(this + 0x48) = 0;
            *(undefined4 *)(this + 0x50) = 0;
                    /* try { // try from 003334ec to 003334f5 has its CatchHandler @ 003337b9 */
            puVar17 = operator_new(0x28);
            puVar17[2] = 0;
            puVar17[3] = 0;
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[4] = 0;
            *(undefined8 **)(this + 0x58) = puVar17;
            plVar6 = *(long **)(param_1 + 8);
            cVar3 = (char)plVar6[5];
            param_3 = extraout_RDX_05;
          }
          else {
            cVar3 = (char)plVar6[5];
            this = GlyphCache::getSingletonPointer()::g;
          }
          GlyphCache::getSingletonPointer()::g = this;
          if (cVar3 == '\0') {
            local_158 = (SharedFontInternal *)plVar6[0xe];
            LOCK();
            *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
            UNLOCK();
            fVar42 = *(float *)(local_158 + 100);
            if (fVar42 <= DAT_005d9058) {
              fVar42 = *(float *)(local_158 + 0x68);
                    /* try { // try from 0033354c to 00333555 has its CatchHandler @ 00333782 */
              uVar31 = Font::SharedFontInternal::getAscentDescent
                                 (local_158,&local_158,param_3,param_4,(uint *)param_5,
                                  (ulong)param_6);
              fVar42 = fVar42 * ((float)((ulong)uVar31 >> 0x20) + (float)uVar31);
            }
                    /* try { // try from 00333573 to 0033357c has its CatchHandler @ 003337af */
            Font::setHeight(fVar42 * *(float *)(*(long *)(param_1 + 8) + 0x18),(Font *)&local_158);
            lVar26 = *(long *)(param_1 + 8);
            fVar42 = *(float *)(lVar26 + 8);
            fVar28 = *(float *)(lVar26 + 0x18);
            uVar31 = extraout_RDX_06;
            if (DAT_00652618 < (float)((uint)(fVar42 / fVar28 + DAT_005d9054) & _DAT_005d91c0)) {
              if (1 < *(int *)(local_158 + 8)) {
                    /* try { // try from 003335cc to 003335d5 has its CatchHandler @ 0033378a */
                Font::SharedFontInternal::copy(&local_118,(long)local_158);
                pSVar14 = local_158;
                local_158 = local_118;
                local_118 = pSVar14;
                if (pSVar14 != (SharedFontInternal *)0x0) {
                  LOCK();
                  pSVar27 = pSVar14 + 8;
                  *(int *)pSVar27 = *(int *)pSVar27 + -1;
                  UNLOCK();
                  if (*(int *)pSVar27 == 0) {
                    (**(code **)(*(long *)pSVar14 + 8))();
                  }
                }
              }
                    /* try { // try from 0033360b to 0033360f has its CatchHandler @ 0033378a */
              Font::SharedFontInternal::setHorizontalScale(fVar42 / fVar28,local_158);
              pSVar14 = local_158;
              __mutex = (pthread_mutex_t *)(local_158 + 0x80);
              pthread_mutex_lock(__mutex);
              plVar6 = *(long **)(pSVar14 + 0x10);
              *(long *)(pSVar14 + 0x10) = 0;
              if (plVar6 != (long *)0x0) {
                LOCK();
                plVar1 = plVar6 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)(*plVar6 + 8))();
                }
              }
              pthread_mutex_unlock(__mutex);
              lVar26 = *(long *)(local_120 + 8);
              fVar42 = *(float *)(lVar26 + 8);
              fVar28 = *(float *)(lVar26 + 0x18);
              uVar31 = extraout_RDX_07;
              param_1 = local_120;
            }
            local_b8 = ZEXT416((uint)fVar42);
            local_a8 = ZEXT416(*(uint *)(lVar26 + 0xc));
            local_98 = ZEXT416(*(uint *)(lVar26 + 0x10));
            local_58 = ZEXT416(*(uint *)(lVar26 + 0x14));
            local_48 = ZEXT416(*(uint *)(lVar26 + 0x1c));
            local_118 = local_158;
            if (local_158 != (SharedFontInternal *)0x0) {
              LOCK();
              *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
              UNLOCK();
            }
            local_110 = (undefined8 *)CONCAT44(local_110._4_4_,(uint)uVar4);
                    /* try { // try from 003336ba to 003336c6 has its CatchHandler @ 0033378e */
            p_Var12 = LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>
                      ::
                      get<juce::RenderingHelpers::GlyphCache::get(juce::Font_const&,int)::_lambda(auto:1_const&)_1_>
                                ((_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                                  *)(this + 8),&local_118,uVar31,param_4,(uint *)param_5,
                                 (ulong)param_6);
            if (local_118 != (SharedFontInternal *)0x0) {
              LOCK();
              pSVar14 = local_118 + 8;
              *(int *)pSVar14 = *(int *)pSVar14 + -1;
              UNLOCK();
              if (*(int *)pSVar14 == 0) {
                (**(code **)(*(long *)local_118 + 8))();
              }
            }
            local_d8 = CONCAT44((float)local_48._0_4_ +
                                local_e8 * (float)local_58._0_4_ + fVar28 * fStack_e4,
                                (float)local_98._0_4_ +
                                local_e8 * (float)local_b8._0_4_ + (float)local_a8._0_4_ * fStack_e4
                               );
                    /* try { // try from 0033373c to 0033374b has its CatchHandler @ 0033378c */
            std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>::vector
                      ((vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>> *)&local_d0,
                       (long *)p_Var12);
            if (local_158 != (SharedFontInternal *)0x0) {
              LOCK();
              pSVar14 = local_158 + 8;
              *(int *)pSVar14 = *(int *)pSVar14 + -1;
              UNLOCK();
              if (*(int *)pSVar14 == 0) {
                (**(code **)(*(long *)local_158 + 8))();
              }
            }
          }
          else {
            lVar26 = plVar6[4];
            local_118 = (SharedFontInternal *)plVar6[0xe];
            if (local_118 != (SharedFontInternal *)0x0) {
              LOCK();
              *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
              UNLOCK();
            }
            local_110._4_4_ = (undefined4)((ulong)local_110 >> 0x20);
            local_110 = (undefined8 *)CONCAT44(local_110._4_4_,(uint)uVar4);
                    /* try { // try from 00332c75 to 00332c81 has its CatchHandler @ 003337db */
            p_Var12 = LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>
                      ::
                      get<juce::RenderingHelpers::GlyphCache::get(juce::Font_const&,int)::_lambda(auto:1_const&)_1_>
                                ((_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                                  *)(this + 8),&local_118,param_3,param_4,(uint *)param_5,
                                 (ulong)param_6);
            if (local_118 != (SharedFontInternal *)0x0) {
              LOCK();
              pSVar14 = local_118 + 8;
              *(int *)pSVar14 = *(int *)pSVar14 + -1;
              UNLOCK();
              if (*(int *)pSVar14 == 0) {
                (**(code **)(*(long *)local_118 + 8))();
              }
            }
            local_168 = (int)lVar26;
            iStack_164 = (int)((ulong)lVar26 >> 0x20);
            local_d8 = CONCAT44(fStack_e4 + (float)iStack_164,local_e8 + (float)local_168);
            std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>::vector
                      ((vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>> *)&local_d0,
                       (long *)p_Var12);
          }
        }
        lVar26 = *(long *)(param_1 + 8);
        local_118 = (SharedFontInternal *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar26 + 0x30));
        puVar17 = *(undefined8 **)(lVar26 + 0x38);
        if (puVar17 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
        }
        else {
                    /* try { // try from 00332ce5 to 00332cee has its CatchHandler @ 003337fc */
          puVar13 = operator_new(0x28);
          *puVar13 = *puVar17;
          puVar13[1] = puVar17[1];
          *(undefined1 *)(puVar13 + 2) = *(undefined1 *)(puVar17 + 2);
          puVar13[3] = 0;
          puVar13[4] = 0;
          uVar18 = *(uint *)((long)puVar17 + 0x24);
          if (0 < (int)uVar18) {
            __src = (void *)puVar17[3];
            uVar24 = uVar18 + (uVar18 >> 1) + 8 & 0xfffffff8;
            if ((int)uVar24 < 1) {
              __dest = (void *)0x0;
            }
            else {
              __dest = malloc((ulong)uVar24 << 4);
              puVar13[3] = __dest;
            }
            *(uint *)(puVar13 + 4) = uVar24;
            memcpy(__dest,__src,(ulong)uVar18 << 4);
          }
          *(uint *)((long)puVar13 + 0x24) = uVar18;
          param_1 = local_120;
        }
        local_108 = *(long **)(lVar26 + 0x40);
        if (local_108 != (long *)0x0) {
          LOCK();
          *(int *)(local_108 + 1) = (int)local_108[1] + 1;
          UNLOCK();
        }
        local_f0 = *(undefined8 *)(lVar26 + 0x58);
        param_4 = (float *)local_100;
        local_100 = *(undefined1 (*) [16])(lVar26 + 0x48);
        local_b8._0_8_ = pSStack_c8;
        pSVar14 = pSStack_c8;
        pSVar27 = local_d0;
        local_110 = puVar13;
        if (local_d0 != pSStack_c8) {
          do {
            if (pSVar27 != (SharedFontInternal *)0x0) {
              if (pSVar27[0x38] == (SharedFontInternal)0x1) {
                pSVar7 = *(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)
                          (param_1 + 8);
                if (pSVar7[0x28] ==
                    (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0) {
                  fVar42 = *(float *)(pSVar7 + 8);
                  fVar28 = *(float *)(pSVar7 + 0xc);
                  fVar29 = *(float *)(pSVar7 + 0x14);
                  fVar33 = *(float *)(pSVar7 + 0x18);
                  fVar34 = *(float *)(pSVar7 + 0x10);
                  fVar38 = *(float *)(pSVar7 + 0x1c);
                }
                else {
                  fVar38 = (float)(int)((ulong)*(undefined8 *)(pSVar7 + 0x20) >> 0x20);
                  fVar34 = (float)(int)*(undefined8 *)(pSVar7 + 0x20);
                  fVar29 = 0.0;
                  fVar28 = 0.0;
                  fVar33 = DAT_005d9038;
                  fVar42 = DAT_005d9038;
                }
                fVar35 = fVar42 * fVar33 - fVar29 * fVar28;
                dVar30 = (double)fVar35;
                dVar32 = (double)CONCAT44((uint)((ulong)dVar30 >> 0x20) & _UNK_005d91b4,
                                          SUB84(dVar30,0) & _DAT_005d91b0);
                if (dVar32 == DAT_005d94e0) {
                  if ((fVar35 != DAT_005d9058) || (NAN(fVar35) || NAN(DAT_005d9058)))
                  goto LAB_00333076;
                }
                else if ((DAT_005db368 < dVar32) && (dVar32 * DAT_005db370 < dVar32)) {
LAB_00333076:
                  dVar30 = _DAT_005d9000 / dVar30;
                  dVar32 = (double)fVar33;
                  fVar29 = (float)((double)(float)((uint)fVar29 ^ _DAT_006524b0) * dVar30);
                  fVar33 = (float)((double)fVar42 * dVar30);
                  fVar28 = (float)((double)(float)((uint)fVar28 ^ _DAT_006524b0) * dVar30);
                  fVar42 = fVar38 * fVar28;
                  fVar38 = (float)((uint)fVar34 ^ _DAT_006524b0) * fVar29 - fVar38 * fVar33;
                  fVar34 = (float)((uint)fVar34 ^ _DAT_006524b0) * (float)(dVar32 * dVar30) - fVar42
                  ;
                  fVar42 = (float)(dVar32 * dVar30);
                }
                fVar40 = *(float *)(pSVar27 + 0x10) + (float)local_d8;
                fVar35 = (float)((ulong)local_d8 >> 0x20) + *(float *)(pSVar27 + 0x1c);
                local_158 = (SharedFontInternal *)
                            CONCAT44(fVar42 * *(float *)(pSVar27 + 0xc) +
                                     *(float *)(pSVar27 + 0x18) * fVar28,
                                     fVar42 * *(float *)(pSVar27 + 8) +
                                     *(float *)(pSVar27 + 0x14) * fVar28);
                uStack_150 = (SharedFontInternal *)
                             CONCAT44(*(float *)(pSVar27 + 8) * fVar29 +
                                      *(float *)(pSVar27 + 0x14) * fVar33,
                                      fVar34 + fVar42 * fVar40 + fVar28 * fVar35);
                local_148 = (long *)CONCAT44(fVar40 * fVar29 + fVar35 * fVar33 + fVar38,
                                             *(float *)(pSVar27 + 0xc) * fVar29 +
                                             *(float *)(pSVar27 + 0x18) * fVar33);
                if ((*(long *)pSVar7 != 0) &&
                   (pSVar7[0x33] !=
                    (SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>)0x0)) {
                    /* try { // try from 003331d2 to 003331e0 has its CatchHandler @ 0033384b */
                  param_4 = (float *)0x0;
                  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::renderImage
                            (pSVar7,(long *)pSVar27,&local_158,(long *)0x0);
                }
              }
              else if (pSVar27[0x38] == (SharedFontInternal)0x0) {
                if (pSVar27[0x34] != (SharedFontInternal)0x0) {
                  local_158 = (SharedFontInternal *)
                              CONCAT44(local_158._4_4_,*(undefined4 *)(pSVar27 + 0x30));
                  uStack_150 = (SharedFontInternal *)0x0;
                  local_148 = (long *)0x0;
                  local_140 = ZEXT416((uint)DAT_005d9038);
                  local_130 = 0x3f800000;
                    /* try { // try from 00332efa to 00332f03 has its CatchHandler @ 0033386d */
                  FillType::operator=((FillType *)(*(long *)(param_1 + 8) + 0x30),
                                      (FillType *)&local_158);
                  if (local_148 != (long *)0x0) {
                    LOCK();
                    plVar6 = local_148 + 1;
                    *(int *)plVar6 = (int)*plVar6 + -1;
                    UNLOCK();
                    if ((int)*plVar6 == 0) {
                      (**(code **)(*local_148 + 8))();
                    }
                  }
                  pSVar2 = uStack_150;
                  if (uStack_150 != (SharedFontInternal *)0x0) {
                    *(undefined4 *)(uStack_150 + 0x24) = 0;
                    free(*(void **)(uStack_150 + 0x18));
                    operator_delete(pSVar2);
                  }
                }
                pSVar7 = *(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)
                          (param_1 + 8);
                dVar30 = (double)local_d8._4_4_ + DAT_005d9098;
                if (*(long *)pSVar7 != 0) {
                  local_e8 = (float)local_d8;
                    /* try { // try from 00332f78 to 00332f81 has its CatchHandler @ 00333868 */
                  pSVar14 = operator_new(0x40);
                  *(undefined4 *)(pSVar14 + 8) = 0;
                  *(undefined ***)pSVar14 = &PTR__EdgeTableRegion_00711be0;
                  uVar19 = *(ulong *)(pSVar27 + 8);
                  if (uVar19 * 4 == 0) {
                    pfVar15 = (float *)0x0;
                  }
                  else {
                    pfVar15 = malloc(uVar19 * 4);
                  }
                  local_168 = SUB84(dVar30,0);
                  *(float **)(pSVar14 + 0x10) = pfVar15;
                  *(ulong *)(pSVar14 + 0x18) = uVar19;
                  if (0 < (long)uVar19) {
                    uVar19 = uVar19 & 0x3fffffffffffffff;
                    pfVar16 = *(float **)pSVar27;
                    param_4 = (float *)(uVar19 + (uVar19 == 0));
                    if ((param_4 < &DAT_00000008) ||
                       ((pfVar15 < pfVar16 + (long)param_4 && (pfVar16 < pfVar15 + (long)param_4))))
                    {
                      param_4 = pfVar15;
                    }
                    else {
                      param_5 = (float *)((ulong)param_4 & 0xfffffffffffffff8);
                      uVar23 = ((ulong)(param_5 + -2) >> 3) + 1;
                      uVar22 = (ulong)((uint)uVar23 & 3);
                      if (&DAT_00000017 < param_5 + -2) {
                        uVar23 = uVar23 & 0x3ffffffffffffffc;
                        lVar26 = 0;
                        do {
                          uVar31 = *(undefined8 *)(pfVar16 + lVar26 + 2);
                          uVar9 = *(undefined8 *)(pfVar16 + lVar26 + 4);
                          uVar10 = *(undefined8 *)(pfVar16 + lVar26 + 4 + 2);
                          *(undefined8 *)(pfVar15 + lVar26) = *(undefined8 *)(pfVar16 + lVar26);
                          *(undefined8 *)(pfVar15 + lVar26 + 2) = uVar31;
                          *(undefined8 *)(pfVar15 + lVar26 + 4) = uVar9;
                          *(undefined8 *)(pfVar15 + lVar26 + 4 + 2) = uVar10;
                          uVar31 = *(undefined8 *)(pfVar16 + lVar26 + 8 + 2);
                          uVar9 = *(undefined8 *)(pfVar16 + lVar26 + 0xc);
                          uVar10 = *(undefined8 *)(pfVar16 + lVar26 + 0xc + 2);
                          *(undefined8 *)(pfVar15 + lVar26 + 8) =
                               *(undefined8 *)(pfVar16 + lVar26 + 8);
                          *(undefined8 *)(pfVar15 + lVar26 + 8 + 2) = uVar31;
                          *(undefined8 *)(pfVar15 + lVar26 + 0xc) = uVar9;
                          *(undefined8 *)(pfVar15 + lVar26 + 0xc + 2) = uVar10;
                          uVar31 = *(undefined8 *)(pfVar16 + lVar26 + 0x10 + 2);
                          uVar9 = *(undefined8 *)(pfVar16 + lVar26 + 0x14);
                          uVar10 = *(undefined8 *)(pfVar16 + lVar26 + 0x14 + 2);
                          *(undefined8 *)(pfVar15 + lVar26 + 0x10) =
                               *(undefined8 *)(pfVar16 + lVar26 + 0x10);
                          *(undefined8 *)(pfVar15 + lVar26 + 0x10 + 2) = uVar31;
                          *(undefined8 *)(pfVar15 + lVar26 + 0x14) = uVar9;
                          *(undefined8 *)(pfVar15 + lVar26 + 0x14 + 2) = uVar10;
                          uVar31 = *(undefined8 *)(pfVar16 + lVar26 + 0x18 + 2);
                          uVar9 = *(undefined8 *)(pfVar16 + lVar26 + 0x1c);
                          uVar10 = *(undefined8 *)(pfVar16 + lVar26 + 0x1c + 2);
                          *(undefined8 *)(pfVar15 + lVar26 + 0x18) =
                               *(undefined8 *)(pfVar16 + lVar26 + 0x18);
                          *(undefined8 *)(pfVar15 + lVar26 + 0x18 + 2) = uVar31;
                          *(undefined8 *)(pfVar15 + lVar26 + 0x1c) = uVar9;
                          *(undefined8 *)(pfVar15 + lVar26 + 0x1c + 2) = uVar10;
                          lVar26 = lVar26 + 0x20;
                          uVar23 = uVar23 - 4;
                        } while (uVar23 != 0);
                      }
                      else {
                        lVar26 = 0;
                      }
                      if (uVar22 != 0) {
                        lVar21 = 0;
                        do {
                          puVar13 = (undefined8 *)((long)pfVar16 + lVar21 + lVar26 * 4);
                          uVar31 = puVar13[1];
                          puVar17 = (undefined8 *)((long)pfVar16 + lVar21 + lVar26 * 4 + 0x10);
                          uVar9 = *puVar17;
                          uVar10 = puVar17[1];
                          puVar17 = (undefined8 *)((long)pfVar15 + lVar21 + lVar26 * 4);
                          *puVar17 = *puVar13;
                          puVar17[1] = uVar31;
                          puVar17 = (undefined8 *)((long)pfVar15 + lVar21 + lVar26 * 4 + 0x10);
                          *puVar17 = uVar9;
                          puVar17[1] = uVar10;
                          lVar21 = lVar21 + 0x20;
                        } while (uVar22 * 0x20 != lVar21);
                      }
                      if (param_4 == param_5) goto LAB_00333274;
                      uVar19 = uVar19 - (long)param_5;
                      param_4 = pfVar15 + (long)param_5;
                      pfVar16 = pfVar16 + (long)param_5;
                    }
                    uVar19 = uVar19 + 1;
                    lVar26 = 0;
                    do {
                      *(undefined4 *)((long)param_4 + lVar26) =
                           *(undefined4 *)((long)pfVar16 + lVar26);
                      uVar19 = uVar19 - 1;
                      lVar26 = lVar26 + 4;
                    } while (1 < uVar19);
                  }
LAB_00333274:
                  lVar26 = *(long *)(pSVar27 + 0x18);
                  uVar31 = *(undefined8 *)(pSVar27 + 0x19);
                  uVar9 = *(undefined8 *)(pSVar27 + 0x21);
                  *(long *)(pSVar14 + 0x20) = *(long *)(pSVar27 + 0x10);
                  *(long *)(pSVar14 + 0x28) = lVar26;
                  *(undefined8 *)(pSVar14 + 0x29) = uVar31;
                  *(undefined8 *)(pSVar14 + 0x31) = uVar9;
                  fVar42 = floorf(local_e8);
                  *(int *)(pSVar14 + 0x20) = *(int *)(pSVar14 + 0x20) + (int)fVar42;
                  *(int *)(pSVar14 + 0x24) = *(int *)(pSVar14 + 0x24) + local_168;
                  if (0 < *(int *)(pSVar14 + 0x2c)) {
                    uVar18 = (uint)(local_e8 * DAT_005de53c);
                    param_4 = (float *)(ulong)uVar18;
                    iVar5 = *(int *)(pSVar14 + 0x34);
                    iVar11 = *(int *)(pSVar14 + 0x2c);
                    do {
                      fVar42 = *pfVar15;
                      if (0 < (int)fVar42) {
                        pfVar16 = pfVar15 + 1;
                        uVar24 = (int)fVar42 - 1;
                        uVar20 = (uint)fVar42 & 3;
                        if (uVar20 != 0) {
                          fVar42 = (float)((uint)fVar42 & 0xfffffffc);
                          do {
                            *pfVar16 = (float)((int)*pfVar16 + uVar18);
                            pfVar16 = pfVar16 + 2;
                            uVar20 = uVar20 - 1;
                          } while (uVar20 != 0);
                        }
                        if (2 < uVar24) {
                          uVar24 = (int)fVar42 - 1;
                          do {
                            *pfVar16 = (float)((int)*pfVar16 + uVar18);
                            pfVar16[2] = (float)((int)pfVar16[2] + uVar18);
                            pfVar16[4] = (float)((int)pfVar16[4] + uVar18);
                            pfVar16[6] = (float)((int)pfVar16[6] + uVar18);
                            uVar24 = uVar24 - 4;
                            pfVar16 = pfVar16 + 8;
                          } while (uVar24 < 0xfffffffe);
                        }
                      }
                      pfVar15 = pfVar15 + iVar5;
                      bVar8 = 1 < iVar11;
                      iVar11 = iVar11 + -1;
                    } while (bVar8);
                  }
                  *(undefined4 *)(pSVar14 + 8) = 1;
                    /* try { // try from 00333346 to 00333352 has its CatchHandler @ 0033384d */
                  local_158 = pSVar14;
                  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillShape
                            (pSVar7,&local_158);
                  param_1 = local_120;
                  pSVar14 = (SharedFontInternal *)local_b8._0_8_;
                  if (local_158 != (SharedFontInternal *)0x0) {
                    pSVar2 = local_158 + 8;
                    *(int *)pSVar2 = *(int *)pSVar2 + -1;
                    if (*(int *)pSVar2 == 0) {
                      (**(code **)(*(long *)local_158 + 8))();
                    }
                  }
                }
              }
            }
            pSVar27 = pSVar27 + 0x40;
          } while (pSVar27 != pSVar14);
        }
                    /* try { // try from 00332dc8 to 00332dd1 has its CatchHandler @ 00333843 */
        param_2 = (FillType *)&local_118;
        FillType::operator=((FillType *)(*(long *)(param_1 + 8) + 0x30),param_2);
        puVar25 = local_68;
        lVar26 = local_70;
        param_3 = extraout_RDX;
        if (local_108 != (long *)0x0) {
          LOCK();
          plVar6 = local_108 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*local_108 + 8))();
            param_3 = extraout_RDX_00;
          }
        }
        puVar17 = local_110;
        pSVar14 = local_d0;
        pSVar27 = pSStack_c8;
        if (local_110 != (undefined8 *)0x0) {
          *(undefined4 *)((long)local_110 + 0x24) = 0;
          free((void *)local_110[3]);
          operator_delete(puVar17);
          param_3 = extraout_RDX_01;
          pSVar14 = local_d0;
          pSVar27 = pSStack_c8;
        }
        for (; pSVar2 = pSStack_c8, pSVar14 != pSStack_c8; pSVar14 = pSVar14 + 0x40) {
          if (pSVar14[0x38] == (SharedFontInternal)0x0) {
            pSStack_c8 = pSVar27;
            free(*(void **)pSVar14);
            param_3 = extraout_RDX_03;
LAB_00332e69:
            pSVar14[0x38] = (SharedFontInternal)0xff;
          }
          else {
            pSStack_c8 = pSVar27;
            if (pSVar14[0x38] != (SharedFontInternal)0xff) {
              plVar6 = *(long **)pSVar14;
              if (plVar6 != (long *)0x0) {
                LOCK();
                plVar1 = plVar6 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)(*plVar6 + 8))();
                  param_3 = extraout_RDX_02;
                }
              }
              goto LAB_00332e69;
            }
          }
          pSVar27 = pSStack_c8;
          pSStack_c8 = pSVar2;
        }
        pSStack_c8 = pSVar27;
        if (local_d0 != (SharedFontInternal *)0x0) {
          operator_delete(local_d0);
          param_3 = extraout_RDX_04;
        }
      }
      puVar25 = puVar25 + 1;
      lVar26 = lVar26 + 1;
    } while (puVar25 != local_78);
  }
  return;
}


