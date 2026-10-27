// Function : drawFittedText
// Namespace: juce:Graphics
// Entry    : 003268e0
// Prototype: undefined drawFittedText(undefined4 param_1_00, _Rb_tree_node_base * param_2, long param_3, long * param_4, undefined8 param_5, undefined8 param_6, uint * param_7, undefined8 param_8)
// Body     : 003268e0 - 00327602


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Graphics::drawFittedText(juce::String const&, juce::Rectangle<int>, juce::Justification,
   int, float, juce::GlyphArrangementOptions) const */

void __cdecl
juce::Graphics::drawFittedText
          (undefined4 param_1_00,_Rb_tree_node_base *param_2,long param_3,long *param_4,
          undefined8 param_5,long param_6,uint *param_7,undefined8 *param_8)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  bool bVar5;
  DeletedAtShutdown *pDVar6;
  pthread_mutex_t *__mutex;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  DeletedAtShutdown *this;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  _List_node_base *p_Var16;
  void *pvVar17;
  _Rb_tree_node_base *p_Var18;
  _Rb_tree_node_base *p_Var19;
  _Rb_tree_node_base *p_Var20;
  undefined8 extraout_RDX;
  _Rb_tree_node_base *p_Var21;
  undefined8 extraout_RDX_00;
  long lVar22;
  _Rb_tree_node_base *p_Var23;
  long lVar24;
  undefined4 uVar25;
  uint *puVar26;
  uint uVar27;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  void *local_120;
  undefined8 local_118;
  DeletedAtShutdown *local_110;
  undefined1 local_108 [16];
  pthread_mutex_t *local_f8;
  void *local_f0;
  undefined8 local_e8;
  long local_e0;
  _Rb_tree_node_base *local_d8;
  void *local_d0;
  undefined8 local_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  undefined8 local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  long *local_88;
  long local_80;
  float local_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  undefined8 local_64;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  uVar27 = (uint)param_8;
  if (*(char *)*param_4 == '\0') {
    return;
  }
  if ((int)param_6 < 1) {
    return;
  }
  if (param_6 < 0x100000000) {
    return;
  }
  local_108._8_4_ = in_XMM1_Dc;
  local_108._0_8_ = param_2;
  local_108._12_4_ = in_XMM1_Dd;
  local_f8 = (pthread_mutex_t *)CONCAT44(local_f8._4_4_,param_1_00);
  puVar26 = param_7;
  local_58 = param_5;
  local_50 = param_6;
  cVar7 = (**(code **)(**(long **)(param_3 + 8) + 0x58))(*(long **)(param_3 + 8),&local_58);
  if (cVar7 == '\0') {
    return;
  }
  local_88 = (long *)(**(code **)(**(long **)(param_3 + 8) + 0x100))();
  local_88 = (long *)*local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_80 = *param_4;
  piVar12 = (int *)(local_80 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    *piVar12 = *piVar12 + 1;
    UNLOCK();
  }
  local_78 = (float)(int)local_50;
  fStack_74 = (float)local_50._4_4_;
  uStack_70 = (uint)param_7;
  local_68 = (uint)local_f8;
  local_64 = local_108._0_8_;
  this = (DeletedAtShutdown *)
         (anonymous_namespace)::
         GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
         ::singletonHolder._40_8_;
  uStack_6c = uVar27;
  if ((anonymous_namespace)::
      GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
      ::singletonHolder._40_8_ == 0) {
    pthread_mutex_lock((pthread_mutex_t *)
                       (anonymous_namespace)::
                       GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                       ::singletonHolder);
    this = (DeletedAtShutdown *)
           (anonymous_namespace)::
           GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
           ::singletonHolder._40_8_;
    if ((anonymous_namespace)::
        GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
        ::singletonHolder._40_8_ == 0) {
      if (SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,juce::CriticalSection,false>
          ::get()::alreadyInside == '\0') {
        SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,juce::CriticalSection,false>
        ::get()::alreadyInside = 1;
                    /* try { // try from 00326a3d to 00326a46 has its CatchHandler @ 00327618 */
        this = operator_new(0x88);
        *(undefined8 *)(this + 0x70) = 0;
        *(undefined8 *)(this + 0x78) = 0;
        *(undefined8 *)(this + 0x60) = 0;
        *(undefined8 *)(this + 0x68) = 0;
        *(undefined8 *)(this + 0x50) = 0;
        *(undefined8 *)(this + 0x58) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)(this + 0x80) = 0;
        DeletedAtShutdown::DeletedAtShutdown(this);
        *(undefined ***)this = &PTR__GlyphArrangementCache_00712580;
        *(undefined4 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(DeletedAtShutdown **)(this + 0x20) = this + 0x10;
        *(DeletedAtShutdown **)(this + 0x28) = this + 0x10;
        *(undefined8 *)(this + 0x30) = 0;
        *(DeletedAtShutdown **)(this + 0x40) = this + 0x38;
        *(DeletedAtShutdown **)(this + 0x38) = this + 0x38;
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined4 *)(this + 0x50) = 0;
                    /* try { // try from 00326ac9 to 00326ad2 has its CatchHandler @ 00327603 */
        puVar13 = operator_new(0x28);
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[4] = 0;
        *(undefined8 **)(this + 0x58) = puVar13;
        CriticalSection::CriticalSection((CriticalSection *)(this + 0x60));
        LOCK();
        UNLOCK();
        SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,juce::CriticalSection,false>
        ::get()::alreadyInside = '\0';
        (anonymous_namespace)::
        GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
        ::singletonHolder._40_8_ = this;
      }
      else {
        this = (DeletedAtShutdown *)0x0;
      }
    }
    pthread_mutex_unlock
              ((pthread_mutex_t *)
               (anonymous_namespace)::
               GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
               ::singletonHolder);
  }
  iVar10 = pthread_mutex_trylock((pthread_mutex_t *)(this + 0x60));
  if (iVar10 != 0) {
    local_e8 = 200;
    local_f0 = malloc(0x1900);
    p_Var18 = (_Rb_tree_node_base *)(ulong)uStack_70;
    puVar26 = (uint *)(ulong)uStack_6c;
                    /* try { // try from 00326b75 to 00326b8f has its CatchHandler @ 00327678 */
    GlyphArrangement::addFittedText
              (0.0,0.0,local_78,fStack_74,local_68,local_64,(GlyphArrangement *)&local_f0,&local_88,
               (String *)&local_80,uStack_70,uStack_6c);
    uVar14 = extraout_RDX;
    goto LAB_003274d8;
  }
  local_b8 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_b0 = local_80;
  piVar12 = (int *)(local_80 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    *piVar12 = *piVar12 + 1;
    UNLOCK();
  }
  local_a8 = CONCAT44(fStack_74,local_78);
  uStack_98 = local_68;
  uStack_94 = (undefined4)local_64;
  uStack_90 = local_64._4_4_;
  uStack_a0 = uStack_70;
  uStack_9c = uStack_6c;
  local_f8 = *(pthread_mutex_t **)(this + 0x58);
  iVar10 = pthread_mutex_lock(local_f8);
  if (iVar10 != 0) {
                    /* try { // try from 003275f0 to 003275f6 has its CatchHandler @ 0032767a */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar10);
  }
  p_Var23 = *(_Rb_tree_node_base **)(this + 0x18);
  p_Var19 = (_Rb_tree_node_base *)(this + 0x10);
  local_108._0_8_ = p_Var19;
  if (p_Var23 == (_Rb_tree_node_base *)0x0) {
LAB_00326cb0:
    __mutex = local_f8;
    iVar10 = *(int *)(this + 0x50);
    pthread_mutex_unlock(local_f8);
    local_118 = 200;
    local_120 = malloc(0x1900);
    puVar26 = (uint *)(ulong)uStack_9c;
                    /* try { // try from 00326d14 to 00326d2e has its CatchHandler @ 00327664 */
    GlyphArrangement::addFittedText
              (0.0,0.0,(float)local_a8,local_a8._4_4_,uStack_98,CONCAT44(uStack_90,uStack_94),
               (GlyphArrangement *)&local_120,&local_b8,(String *)&local_b0,uStack_a0,uStack_9c);
    iVar11 = pthread_mutex_lock(__mutex);
    if (iVar11 != 0) {
                    /* try { // try from 003275f7 to 00327602 has its CatchHandler @ 00327662 */
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar11);
    }
    p_Var23 = (_Rb_tree_node_base *)local_108._0_8_;
    if ((iVar10 == *(int *)(this + 0x50)) ||
       (p_Var21 = *(_Rb_tree_node_base **)(this + 0x18), p_Var21 == (_Rb_tree_node_base *)0x0)) {
LAB_00326db0:
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
      local_110 = this + 8;
      uVar2 = *(ulong *)(this + 0x30);
      local_e0 = param_3;
      p_Var19 = p_Var23;
      pvVar17 = local_120;
      local_c8 = local_118;
      while (0x7f < uVar2) {
        pvVar3 = *(void **)(this + 0x38);
        local_120 = pvVar17;
        local_118 = local_c8;
        pvVar17 = (void *)std::_Rb_tree_rebalance_for_erase
                                    (*(_Rb_tree_node_base **)((long)pvVar3 + 0x10),p_Var19);
        if (0 < *(int *)((long)pvVar17 + 0x5c)) {
          lVar24 = 0;
          lVar22 = 0;
          do {
            plVar4 = *(long **)(*(long *)((long)pvVar17 + 0x50) + lVar24);
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar4 + 8))();
              }
            }
            lVar22 = lVar22 + 1;
            lVar24 = lVar24 + 0x20;
          } while (lVar22 < *(int *)((long)pvVar17 + 0x5c));
        }
        *(undefined4 *)((long)pvVar17 + 0x5c) = 0;
        free(*(void **)((long)pvVar17 + 0x50));
        piVar12 = (int *)(*(long *)((long)pvVar17 + 0x28) + -0x10);
        if (piVar12 != &emptyString) {
          LOCK();
          iVar10 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            operator_delete__(piVar12);
          }
        }
        plVar4 = *(long **)((long)pvVar17 + 0x20);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        operator_delete(pvVar17);
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
        std::__detail::_List_node_base::_M_unhook();
        operator_delete(pvVar3);
        uVar2 = *(ulong *)(this + 0x30);
        p_Var19 = (_Rb_tree_node_base *)local_108._0_8_;
        pvVar17 = local_120;
        local_c8 = local_118;
      }
      local_120 = (void *)0x0;
      local_118._0_4_ = (undefined4)local_c8;
      uVar25 = (undefined4)local_118;
      local_118._4_4_ = (int)(local_c8 >> 0x20);
      iVar10 = local_118._4_4_;
      local_118 = 0;
      local_c0 = 0;
      p_Var23 = *(_Rb_tree_node_base **)(local_110 + 0x10);
      local_d0 = pvVar17;
      if (p_Var23 == (_Rb_tree_node_base *)0x0) {
LAB_00326f9a:
        bVar5 = true;
LAB_00326fa0:
                    /* try { // try from 00326fa0 to 00326fa9 has its CatchHandler @ 0032763a */
        p_Var18 = operator_new(0x68);
        pDVar6 = local_110;
        *(long **)(p_Var18 + 0x20) = local_b8;
        if (local_b8 == (long *)0x0) {
          lVar22 = 0;
        }
        else {
          LOCK();
          *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
          UNLOCK();
          lVar22 = local_c0;
          pvVar17 = local_d0;
          iVar10 = local_c8._4_4_;
          uVar25 = (undefined4)local_c8;
        }
        *(long *)(p_Var18 + 0x28) = local_b0;
        piVar12 = (int *)(local_b0 + -0x10);
        if (piVar12 != &emptyString) {
          LOCK();
          *piVar12 = *piVar12 + 1;
          UNLOCK();
        }
        p_Var23 = p_Var18 + 0x20;
        *(ulong *)(p_Var18 + 0x3c) = CONCAT44(uStack_98,uStack_9c);
        *(ulong *)(p_Var18 + 0x44) = CONCAT44(uStack_90,uStack_94);
        *(long *)(p_Var18 + 0x30) = local_a8;
        *(long *)(p_Var18 + 0x38) = CONCAT44(uStack_9c,uStack_a0);
        *(void **)(p_Var18 + 0x50) = pvVar17;
        local_d0 = (void *)0x0;
        *(undefined4 *)(p_Var18 + 0x58) = uVar25;
        *(int *)(p_Var18 + 0x5c) = iVar10;
        local_c8 = 0;
        *(long *)(p_Var18 + 0x60) = lVar22;
        local_d8 = p_Var18;
        if (bVar5) {
          if ((*(long *)(local_110 + 0x28) == 0) ||
             (uVar14 = std::
                       less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                       ::operator()((long *)(*(long *)(local_110 + 0x20) + 0x20),(long *)p_Var23),
             (char)uVar14 == '\0')) {
            p_Var18 = *(_Rb_tree_node_base **)(pDVar6 + 0x10);
            if (*(_Rb_tree_node_base **)(pDVar6 + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_00327129:
              p_Var18 = (_Rb_tree_node_base *)0x0;
              if (p_Var19 != *(_Rb_tree_node_base **)(pDVar6 + 0x18)) {
                p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var19);
                goto LAB_0032713a;
              }
            }
            else {
              do {
                p_Var19 = p_Var18;
                uVar14 = std::
                         less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                         ::operator()((long *)p_Var23,(long *)(p_Var19 + 0x20));
                p_Var18 = *(_Rb_tree_node_base **)
                           (p_Var19 + (ulong)(byte)((byte)uVar14 ^ 1) * 8 + 0x10);
              } while (*(_Rb_tree_node_base **)
                        (p_Var19 + (ulong)(byte)((byte)uVar14 ^ 1) * 8 + 0x10) !=
                       (_Rb_tree_node_base *)0x0);
              p_Var18 = (_Rb_tree_node_base *)0x0;
              p_Var20 = p_Var19;
              if ((byte)uVar14 != 0) goto LAB_00327129;
LAB_0032713a:
              uVar14 = std::
                       less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                       ::operator()((long *)(p_Var20 + 0x20),(long *)p_Var23);
              if ((char)uVar14 == '\0') goto LAB_003272be;
            }
            p_Var20 = (_Rb_tree_node_base *)0x0;
            p_Var21 = p_Var19;
          }
          else {
            p_Var21 = *(_Rb_tree_node_base **)(pDVar6 + 0x20);
LAB_00327282:
            p_Var20 = (_Rb_tree_node_base *)0x0;
          }
LAB_00327285:
          p_Var19 = p_Var21;
          if (p_Var21 == (_Rb_tree_node_base *)0x0) {
LAB_003272be:
            p_Var19 = p_Var20;
            p_Var21 = local_d8;
            if (0 < *(int *)(local_d8 + 0x5c)) {
              lVar22 = 0;
              lVar24 = 0;
              do {
                plVar4 = *(long **)(*(long *)(p_Var21 + 0x50) + lVar22);
                if (plVar4 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar4 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)(*plVar4 + 8))();
                  }
                }
                lVar24 = lVar24 + 1;
                lVar22 = lVar22 + 0x20;
              } while (lVar24 < *(int *)(p_Var21 + 0x5c));
            }
            *(undefined4 *)(p_Var21 + 0x5c) = 0;
            free(*(void **)(p_Var21 + 0x50));
            piVar12 = (int *)(*(long *)(p_Var21 + 0x28) + -0x10);
            if (piVar12 != &emptyString) {
              LOCK();
              iVar10 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar10 == 0) {
                operator_delete__(piVar12);
              }
            }
            param_3 = local_e0;
            plVar4 = *(long **)p_Var23;
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar4 + 8))();
              }
            }
            operator_delete(p_Var21);
            iVar10 = local_c8._4_4_;
            goto LAB_0032736f;
          }
        }
        else {
          uVar14 = std::
                   less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                   ::operator()((long *)p_Var23,(long *)(p_Var19 + 0x20));
          pDVar6 = local_110;
          p_Var20 = p_Var19;
          p_Var21 = p_Var19;
          if ((char)uVar14 == '\0') {
            uVar14 = std::
                     less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                     ::operator()((long *)(p_Var19 + 0x20),(long *)p_Var23);
            if ((char)uVar14 != '\0') {
              if (*(_Rb_tree_node_base **)(pDVar6 + 0x20) == p_Var19) {
                p_Var20 = (_Rb_tree_node_base *)0x0;
              }
              else {
                p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var19);
                uVar14 = std::
                         less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                         ::operator()((long *)p_Var23,(long *)(p_Var20 + 0x20));
                if ((char)uVar14 == '\0') {
                  p_Var19 = *(_Rb_tree_node_base **)(pDVar6 + 0x10);
                  if (*(_Rb_tree_node_base **)(pDVar6 + 0x10) != (_Rb_tree_node_base *)0x0) {
                    do {
                      p_Var20 = p_Var19;
                      uVar14 = std::
                               less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                               ::operator()((long *)p_Var23,(long *)(p_Var20 + 0x20));
                      bVar8 = (byte)uVar14;
                      p_Var19 = *(_Rb_tree_node_base **)(p_Var20 + (ulong)(bVar8 ^ 1) * 8 + 0x10);
                    } while (*(_Rb_tree_node_base **)(p_Var20 + (ulong)(bVar8 ^ 1) * 8 + 0x10) !=
                             (_Rb_tree_node_base *)0x0);
                    goto LAB_0032723f;
                  }
                  p_Var21 = (_Rb_tree_node_base *)local_108._0_8_;
                  goto LAB_0032725c;
                }
                p_Var21 = p_Var20;
                if (*(long *)(p_Var19 + 0x18) == 0) {
                  p_Var20 = (_Rb_tree_node_base *)0x0;
                  goto LAB_0032728d;
                }
              }
              goto LAB_00327285;
            }
            goto LAB_003272be;
          }
          if (*(_Rb_tree_node_base **)(local_110 + 0x18) == p_Var19) goto LAB_00327285;
          p_Var19 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var19);
          uVar14 = std::
                   less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                   ::operator()((long *)(p_Var19 + 0x20),(long *)p_Var23);
          if ((char)uVar14 == '\0') {
            p_Var19 = *(_Rb_tree_node_base **)(pDVar6 + 0x10);
            if (*(_Rb_tree_node_base **)(pDVar6 + 0x10) == (_Rb_tree_node_base *)0x0) {
              p_Var21 = (_Rb_tree_node_base *)local_108._0_8_;
LAB_0032725c:
              p_Var18 = (_Rb_tree_node_base *)0x0;
              if (p_Var21 == *(_Rb_tree_node_base **)(local_110 + 0x18)) goto LAB_00327282;
              p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var21);
            }
            else {
              do {
                p_Var20 = p_Var19;
                uVar14 = std::
                         less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                         ::operator()((long *)p_Var23,(long *)(p_Var20 + 0x20));
                bVar8 = (byte)uVar14;
                p_Var19 = *(_Rb_tree_node_base **)(p_Var20 + (ulong)(bVar8 ^ 1) * 8 + 0x10);
              } while (*(_Rb_tree_node_base **)(p_Var20 + (ulong)(bVar8 ^ 1) * 8 + 0x10) !=
                       (_Rb_tree_node_base *)0x0);
LAB_0032723f:
              p_Var18 = (_Rb_tree_node_base *)0x0;
              p_Var21 = p_Var20;
              if (bVar8 != 0) goto LAB_0032725c;
            }
            uVar14 = std::
                     less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                     ::operator()((long *)(p_Var20 + 0x20),(long *)p_Var23);
            if ((char)uVar14 != '\0') goto LAB_00327282;
            goto LAB_003272be;
          }
          if (*(long *)(p_Var19 + 0x18) != 0) goto LAB_00327285;
          p_Var20 = (_Rb_tree_node_base *)0x0;
        }
LAB_0032728d:
        param_3 = local_e0;
        uVar9 = true;
        if ((p_Var20 == (_Rb_tree_node_base *)0x0) &&
           (p_Var19 != (_Rb_tree_node_base *)local_108._0_8_)) {
          uVar14 = std::
                   less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                   ::operator()((long *)p_Var23,(long *)(p_Var19 + 0x20));
          uVar9 = (undefined1)uVar14;
        }
        p_Var23 = local_d8;
        p_Var18 = (_Rb_tree_node_base *)local_108._0_8_;
        std::_Rb_tree_insert_and_rebalance
                  ((bool)uVar9,local_d8,p_Var19,(_Rb_tree_node_base *)local_108._0_8_);
        *(long *)(local_110 + 0x28) = *(long *)(local_110 + 0x28) + 1;
        p_Var19 = p_Var23;
      }
      else {
        do {
          uVar14 = std::
                   less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                   ::operator()((long *)(p_Var23 + 0x20),(long *)&local_b8);
          p_Var18 = p_Var23 + 0x18;
          if ((char)uVar14 == '\0') {
            p_Var21 = p_Var23 + 0x10;
            p_Var19 = p_Var23;
          }
          else {
            p_Var21 = p_Var18;
          }
          p_Var23 = *(_Rb_tree_node_base **)p_Var21;
        } while (p_Var23 != (_Rb_tree_node_base *)0x0);
        if (p_Var19 == (_Rb_tree_node_base *)local_108._0_8_) {
          p_Var19 = (_Rb_tree_node_base *)local_108._0_8_;
          goto LAB_00326f9a;
        }
        uVar14 = std::
                 less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                 ::operator()((long *)&local_b8,(long *)(p_Var19 + 0x20));
        if ((char)uVar14 != '\0') {
          bVar5 = false;
          goto LAB_00326fa0;
        }
        param_3 = local_e0;
LAB_0032736f:
        if (0 < iVar10) {
          lVar22 = 0;
          lVar24 = 0;
          do {
            plVar4 = *(long **)((long)local_d0 + lVar22);
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar4 + 8))();
              }
            }
            lVar24 = lVar24 + 1;
            lVar22 = lVar22 + 0x20;
          } while (lVar24 < local_c8._4_4_);
        }
      }
      free(local_d0);
                    /* try { // try from 003273ef to 003273f8 has its CatchHandler @ 00327649 */
      p_Var16 = operator_new(0x18);
      *(_Rb_tree_node_base **)(p_Var16 + 0x10) = p_Var19;
      std::__detail::_List_node_base::_M_hook(p_Var16);
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
      *(_List_node_base **)(p_Var19 + 0x60) = p_Var16;
    }
    else {
      p_Var19 = (_Rb_tree_node_base *)local_108._0_8_;
      do {
        uVar14 = std::
                 less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                 ::operator()((long *)(p_Var21 + 0x20),(long *)&local_b8);
        p_Var18 = p_Var21 + 0x18;
        if ((char)uVar14 == '\0') {
          p_Var23 = p_Var21 + 0x10;
          p_Var19 = p_Var21;
        }
        else {
          p_Var23 = p_Var18;
        }
        p_Var21 = *(_Rb_tree_node_base **)p_Var23;
      } while (p_Var21 != (_Rb_tree_node_base *)0x0);
      p_Var23 = (_Rb_tree_node_base *)local_108._0_8_;
      if (p_Var19 == (_Rb_tree_node_base *)local_108._0_8_) goto LAB_00326db0;
      uVar14 = std::
               less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
               ::operator()((long *)&local_b8,(long *)(p_Var19 + 0x20));
      if ((char)uVar14 != '\0') {
        p_Var19 = p_Var23;
      }
      if (p_Var19 == p_Var23) goto LAB_00326db0;
    }
    if (0 < local_118._4_4_) {
      lVar22 = 0;
      lVar24 = 0;
      do {
        plVar4 = *(long **)((long)local_120 + lVar22);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        lVar24 = lVar24 + 1;
        lVar22 = lVar22 + 0x20;
      } while (lVar24 < local_118._4_4_);
    }
    local_118 = local_118 & 0xffffffff;
    free(local_120);
  }
  else {
    do {
      uVar14 = std::
               less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
               ::operator()((long *)(p_Var23 + 0x20),(long *)&local_b8);
      p_Var18 = p_Var23 + 0x18;
      if ((char)uVar14 == '\0') {
        p_Var21 = p_Var23 + 0x10;
        p_Var19 = p_Var23;
      }
      else {
        p_Var21 = p_Var18;
      }
      p_Var23 = *(_Rb_tree_node_base **)p_Var21;
    } while (p_Var23 != (_Rb_tree_node_base *)0x0);
    uVar14 = local_108._0_8_;
    if (p_Var19 == (_Rb_tree_node_base *)local_108._0_8_) goto LAB_00326cb0;
    uVar15 = std::
             less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
             ::operator()((long *)&local_b8,(long *)(p_Var19 + 0x20));
    if ((char)uVar15 != '\0') {
      p_Var19 = (_Rb_tree_node_base *)uVar14;
    }
    if (p_Var19 == (_Rb_tree_node_base *)uVar14) goto LAB_00326cb0;
    pvVar17 = *(void **)(p_Var19 + 0x60);
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
    std::__detail::_List_node_base::_M_unhook();
    operator_delete(pvVar17);
                    /* try { // try from 00326c85 to 00326c8e has its CatchHandler @ 00327630 */
    p_Var16 = operator_new(0x18);
    *(_Rb_tree_node_base **)(p_Var16 + 0x10) = p_Var19;
    std::__detail::_List_node_base::_M_hook(p_Var16);
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
    *(_List_node_base **)(p_Var19 + 0x60) = p_Var16;
  }
  pthread_mutex_unlock(local_f8);
                    /* try { // try from 0032747f to 0032748b has its CatchHandler @ 0032767a */
  GlyphArrangement::GlyphArrangement((GlyphArrangement *)&local_f0,(long *)(p_Var19 + 0x50));
  piVar12 = (int *)(local_b0 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    iVar10 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar12);
    }
  }
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar4 = local_b8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*local_b8 + 8))();
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x60));
  uVar14 = extraout_RDX_00;
LAB_003274d8:
  fStack_40 = (float)(int)local_58;
  fStack_34 = (float)local_58._4_4_;
  local_48 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0x3f800000;
                    /* try { // try from 00327520 to 00327545 has its CatchHandler @ 0032769b */
  GlyphArrangement::draw
            ((long *)&local_f0,param_3,uVar14,p_Var18,puVar26,param_8,0x3f800000,
             (ulong)(uint)fStack_40,CONCAT44(fStack_34,0x3f800000));
  if (0 < local_e8._4_4_) {
    lVar22 = 0;
    lVar24 = 0;
    do {
      plVar4 = *(long **)((long)local_f0 + lVar22);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
      lVar24 = lVar24 + 1;
      lVar22 = lVar22 + 0x20;
    } while (lVar24 < local_e8._4_4_);
  }
  local_e8 = local_e8 & 0xffffffff;
  free(local_f0);
  piVar12 = (int *)(local_80 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    iVar10 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar12);
    }
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar4 = local_88 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  return;
}


