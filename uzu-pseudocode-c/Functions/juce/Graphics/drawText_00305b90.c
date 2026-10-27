// Function : drawText
// Namespace: juce:Graphics
// Entry    : 00305b90
// Prototype: undefined drawText(undefined8 param_1_00, undefined8 param_2, long param_3, ulong * param_4, uint param_5, undefined4 param_6, uint * param_7, undefined8 * param_8)
// Body     : 00305b90 - 0030691d


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Graphics::drawText(juce::String const&, juce::Rectangle<float>, juce::Justification, bool)
   const */

void __cdecl
juce::Graphics::drawText
          (undefined8 param_1_00,ulong param_2,long param_3,ulong *param_4,uint param_5,
          undefined4 param_6,uint *param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  pthread_mutex_t *ppVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  int *piVar9;
  DeletedAtShutdown *this;
  undefined8 *puVar10;
  undefined8 uVar11;
  _List_node_base *p_Var12;
  void *pvVar13;
  _Rb_tree_node_base *p_Var14;
  _Rb_tree_node_base *p_Var15;
  _Rb_tree_node_base *p_Var16;
  _Rb_tree_node_base *p_Var17;
  _Rb_tree_node_base *p_Var18;
  _Rb_tree_node_base *p_Var19;
  ulong uVar20;
  _Rb_tree_node_base *p_Var21;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar22;
  void *pvVar23;
  _Rb_tree_node_base *p_Var24;
  long lVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  void *local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  undefined8 local_d0;
  long *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  uint uStack_b0;
  byte bStack_ac;
  uint local_a8;
  float local_a4;
  pthread_mutex_t *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  ulong local_78;
  ulong local_70;
  uint local_68;
  byte local_64;
  long local_60;
  float local_58;
  undefined8 local_48;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  fVar32 = (float)((ulong)param_1_00 >> 0x20);
  fVar33 = (float)param_1_00;
  if (*(char *)*param_4 == '\0') {
    return;
  }
  local_a0 = (pthread_mutex_t *)CONCAT44(local_a0._4_4_,param_6);
  plVar3 = *(long **)(param_3 + 8);
  iVar22 = -0x80000000;
  iVar27 = -0x80000000;
  local_a4 = fVar33;
  if (DAT_00653430 < fVar33) {
    fVar31 = floorf(fVar33);
    iVar27 = (int)fVar31;
  }
  local_60 = param_3;
  local_58 = fVar32;
  if (DAT_00653430 < fVar32) {
    fVar32 = floorf(fVar32);
    iVar22 = (int)fVar32;
  }
  fVar33 = fVar33 + (float)param_2;
  iVar28 = 0x7fffffff;
  iVar29 = 0x7fffffff;
  if (fVar33 < DAT_00653434) {
    fVar33 = ceilf(fVar33);
    iVar29 = (int)fVar33;
  }
  fVar33 = local_58 + (float)(param_2 >> 0x20);
  if (fVar33 < DAT_00653434) {
    fVar33 = ceilf(fVar33);
    iVar28 = (int)fVar33;
  }
  local_c8 = (long *)CONCAT44(iVar22,iVar27);
  local_c0 = CONCAT44(iVar28 - iVar22,iVar29 - iVar27);
  cVar6 = (**(code **)(*plVar3 + 0x58))(plVar3,&local_c8);
  lVar25 = local_60;
  if (cVar6 == '\0') {
    return;
  }
  local_80 = (long *)(**(code **)(**(long **)(local_60 + 8) + 0x100))();
  local_80 = (long *)*local_80;
  if (local_80 != (long *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_78 = *param_4;
  piVar9 = (int *)(local_78 - 0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_64 = (byte)local_a0;
  this = (DeletedAtShutdown *)
         (anonymous_namespace)::
         GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
         ::singletonHolder._40_8_;
  local_68 = param_5;
  if ((anonymous_namespace)::
      GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
      ::singletonHolder._40_8_ == 0) {
    local_70 = param_2;
    pthread_mutex_lock((pthread_mutex_t *)
                       (anonymous_namespace)::
                       GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                       ::singletonHolder);
    this = (DeletedAtShutdown *)
           (anonymous_namespace)::
           GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
           ::singletonHolder._40_8_;
    if ((anonymous_namespace)::
        GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
        ::singletonHolder._40_8_ == 0) {
      if (SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>,juce::CriticalSection,false>
          ::get()::alreadyInside == '\0') {
        SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>,juce::CriticalSection,false>
        ::get()::alreadyInside = 1;
                    /* try { // try from 00305da8 to 00305db1 has its CatchHandler @ 00306933 */
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
        *(undefined ***)this = &PTR__GlyphArrangementCache_00712548;
        *(undefined4 *)(this + 0x10) = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(DeletedAtShutdown **)(this + 0x20) = this + 0x10;
        *(DeletedAtShutdown **)(this + 0x28) = this + 0x10;
        *(undefined8 *)(this + 0x30) = 0;
        *(DeletedAtShutdown **)(this + 0x40) = this + 0x38;
        *(DeletedAtShutdown **)(this + 0x38) = this + 0x38;
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined4 *)(this + 0x50) = 0;
                    /* try { // try from 00305e34 to 00305e3d has its CatchHandler @ 0030691e */
        puVar10 = operator_new(0x28);
        puVar10[2] = 0;
        puVar10[3] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[4] = 0;
        *(undefined8 **)(this + 0x58) = puVar10;
        CriticalSection::CriticalSection((CriticalSection *)(this + 0x60));
        LOCK();
        UNLOCK();
        SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>,juce::CriticalSection,false>
        ::get()::alreadyInside = '\0';
        (anonymous_namespace)::
        GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
        ::singletonHolder._40_8_ = this;
      }
      else {
        this = (DeletedAtShutdown *)0x0;
      }
    }
    pthread_mutex_unlock
              ((pthread_mutex_t *)
               (anonymous_namespace)::
               GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
               ::singletonHolder);
    param_2 = local_70;
  }
  local_70 = param_2;
  iVar22 = pthread_mutex_trylock((pthread_mutex_t *)(this + 0x60));
  if (iVar22 != 0) {
    local_d0 = 200;
    local_d8 = malloc(0x1900);
    fVar33 = (float)local_70;
    p_Var19 = (_Rb_tree_node_base *)(ulong)local_64;
                    /* try { // try from 00305ebe to 00305f02 has its CatchHandler @ 003069af */
    GlyphArrangement::addCurtailedLineOfText
              (0.0,0.0,(float)local_70,(GlyphArrangement *)&local_d8,&local_80,&local_78,local_64);
    GlyphArrangement::justifyGlyphs
              (fVar33,local_70 >> 0x20,(GlyphArrangement *)&local_d8,local_d0._4_4_,local_68,p_Var19
               ,param_7,(ulong)param_8);
    uVar11 = extraout_RDX;
    goto LAB_00306800;
  }
  local_c8 = local_80;
  if (local_80 != (long *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_c0 = local_78;
  piVar9 = (int *)(local_78 - 0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  uStack_b0 = local_68;
  bStack_ac = local_64;
  ppVar4 = *(pthread_mutex_t **)(this + 0x58);
  local_a0 = (pthread_mutex_t *)(this + 0x60);
  local_b8 = local_70;
  iVar22 = pthread_mutex_lock(ppVar4);
  if (iVar22 != 0) {
                    /* try { // try from 00306910 to 00306916 has its CatchHandler @ 00306991 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar22);
  }
  p_Var24 = *(_Rb_tree_node_base **)(this + 0x18);
  p_Var21 = (_Rb_tree_node_base *)(this + 0x10);
  if (p_Var24 == (_Rb_tree_node_base *)0x0) {
LAB_0030601d:
    iVar22 = *(int *)(this + 0x50);
    pthread_mutex_unlock(ppVar4);
    uStack_e0 = 200;
    local_e8 = malloc(0x1900);
    fVar33 = (float)local_b8;
    uVar20 = (ulong)bStack_ac;
                    /* try { // try from 00306057 to 0030609b has its CatchHandler @ 00306982 */
    GlyphArrangement::addCurtailedLineOfText
              (0.0,0.0,(float)local_b8,(GlyphArrangement *)&local_e8,&local_c8,&local_c0,bStack_ac);
    uVar30 = uStack_e0._4_4_;
    GlyphArrangement::justifyGlyphs
              (fVar33,local_b8 >> 0x20,(GlyphArrangement *)&local_e8,uStack_e0._4_4_,uStack_b0,
               uVar20,param_7,(ulong)param_8);
    iVar27 = pthread_mutex_lock(ppVar4);
    if (iVar27 != 0) {
                    /* try { // try from 00306917 to 0030691d has its CatchHandler @ 00306980 */
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar27);
    }
    if ((iVar22 == *(int *)(this + 0x50)) ||
       (p_Var24 = *(_Rb_tree_node_base **)(this + 0x18), p_Var24 == (_Rb_tree_node_base *)0x0)) {
LAB_0030611f:
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + 1;
      if (0x7f < *(ulong *)(this + 0x30)) {
        do {
          pvVar23 = *(void **)(this + 0x38);
          pvVar13 = (void *)std::_Rb_tree_rebalance_for_erase
                                      (*(_Rb_tree_node_base **)((long)pvVar23 + 0x10),p_Var21);
          if (0 < *(int *)((long)pvVar13 + 0x4c)) {
            lVar26 = 0;
            lVar25 = 0;
            do {
              plVar3 = *(long **)(*(long *)((long)pvVar13 + 0x40) + lVar26);
              if (plVar3 != (long *)0x0) {
                LOCK();
                plVar1 = plVar3 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)(*plVar3 + 8))();
                }
              }
              lVar25 = lVar25 + 1;
              lVar26 = lVar26 + 0x20;
            } while (lVar25 < *(int *)((long)pvVar13 + 0x4c));
          }
          *(undefined4 *)((long)pvVar13 + 0x4c) = 0;
          free(*(void **)((long)pvVar13 + 0x40));
          piVar9 = (int *)(*(long *)((long)pvVar13 + 0x28) + -0x10);
          if (piVar9 != &emptyString) {
            LOCK();
            iVar22 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar22 == 0) {
              operator_delete__(piVar9);
            }
          }
          plVar3 = *(long **)((long)pvVar13 + 0x20);
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar3 + 8))();
            }
          }
          operator_delete(pvVar13);
          *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
          *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
          std::__detail::_List_node_base::_M_unhook();
          operator_delete(pvVar23);
        } while (0x7f < *(ulong *)(this + 0x30));
        uVar30 = uStack_e0._4_4_;
      }
      pvVar23 = local_e8;
      local_98 = local_e8;
      uVar2 = (undefined4)uStack_e0;
      local_e8 = (void *)0x0;
      uStack_e0 = 0;
      local_90 = CONCAT44(uVar30,uVar2);
      local_88 = 0;
      p_Var24 = *(_Rb_tree_node_base **)(this + 0x18);
      bVar5 = true;
      if (p_Var24 == (_Rb_tree_node_base *)0x0) {
LAB_0030630c:
        p_Var24 = p_Var21;
LAB_0030630f:
                    /* try { // try from 0030630f to 00306318 has its CatchHandler @ 00306955 */
        p_Var14 = operator_new(0x58);
        *(long **)(p_Var14 + 0x20) = local_c8;
        if (local_c8 == (long *)0x0) {
          uVar11 = 0;
        }
        else {
          LOCK();
          *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
          UNLOCK();
          pvVar23 = local_98;
          uVar11 = local_88;
          uVar2 = (undefined4)local_90;
          uVar30 = local_90._4_4_;
        }
        *(ulong *)(p_Var14 + 0x28) = local_c0;
        piVar9 = (int *)(local_c0 - 0x10);
        if (piVar9 != &emptyString) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          UNLOCK();
        }
        p_Var15 = p_Var14 + 0x20;
        p_Var19 = (_Rb_tree_node_base *)CONCAT17(bStack_ac,CONCAT43(uStack_b0,local_b8._5_3_));
        *(_Rb_tree_node_base **)(p_Var14 + 0x35) = p_Var19;
        *(ulong *)(p_Var14 + 0x30) = local_b8;
        *(void **)(p_Var14 + 0x40) = pvVar23;
        local_98 = (void *)0x0;
        *(undefined4 *)(p_Var14 + 0x48) = uVar2;
        *(uint *)(p_Var14 + 0x4c) = uVar30;
        local_90 = 0;
        *(undefined8 *)(p_Var14 + 0x50) = uVar11;
        if (bVar5) {
          if ((*(long *)(this + 0x30) == 0) ||
             (uVar11 = std::
                       less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                       ::operator()((long *)(*(long *)(this + 0x28) + 0x20),(long *)p_Var15),
             (char)uVar11 == '\0')) {
            p_Var17 = *(_Rb_tree_node_base **)(this + 0x18);
            if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
LAB_00306488:
              p_Var19 = (_Rb_tree_node_base *)0x0;
              if (p_Var24 == *(_Rb_tree_node_base **)(this + 0x20)) goto LAB_003064fe;
              p_Var17 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var24);
            }
            else {
              do {
                p_Var24 = p_Var17;
                uVar11 = std::
                         less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                         ::operator()((long *)p_Var15,(long *)(p_Var24 + 0x20));
                p_Var17 = *(_Rb_tree_node_base **)
                           (p_Var24 + (ulong)(byte)((byte)uVar11 ^ 1) * 8 + 0x10);
              } while (*(_Rb_tree_node_base **)
                        (p_Var24 + (ulong)(byte)((byte)uVar11 ^ 1) * 8 + 0x10) !=
                       (_Rb_tree_node_base *)0x0);
              p_Var19 = (_Rb_tree_node_base *)0x0;
              p_Var17 = p_Var24;
              if ((byte)uVar11 != 0) goto LAB_00306488;
            }
            uVar11 = std::
                     less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                     ::operator()((long *)(p_Var17 + 0x20),(long *)p_Var15);
            if ((char)uVar11 == '\0') goto LAB_00306601;
LAB_003064fe:
            p_Var17 = (_Rb_tree_node_base *)0x0;
            goto LAB_0030651b;
          }
          p_Var18 = *(_Rb_tree_node_base **)(this + 0x28);
LAB_003065c3:
          p_Var17 = (_Rb_tree_node_base *)0x0;
LAB_003065c6:
          p_Var24 = p_Var18;
          if (p_Var18 == (_Rb_tree_node_base *)0x0) {
LAB_00306601:
            if (0 < *(int *)(p_Var14 + 0x4c)) {
              lVar25 = 0;
              lVar26 = 0;
              do {
                plVar3 = *(long **)(*(long *)(p_Var14 + 0x40) + lVar25);
                if (plVar3 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar3 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)(*plVar3 + 8))();
                  }
                }
                lVar26 = lVar26 + 1;
                lVar25 = lVar25 + 0x20;
              } while (lVar26 < *(int *)(p_Var14 + 0x4c));
            }
            *(undefined4 *)(p_Var14 + 0x4c) = 0;
            free(*(void **)(p_Var14 + 0x40));
            piVar9 = (int *)(*(long *)(p_Var14 + 0x28) + -0x10);
            if (piVar9 != &emptyString) {
              LOCK();
              iVar22 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar22 == 0) {
                operator_delete__(piVar9);
              }
            }
            plVar3 = *(long **)p_Var15;
            if (plVar3 != (long *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar3 + 8))();
              }
            }
            operator_delete(p_Var14);
            uVar30 = local_90._4_4_;
            goto LAB_003066a2;
          }
        }
        else {
          uVar11 = std::
                   less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                   ::operator()((long *)p_Var15,(long *)(p_Var24 + 0x20));
          p_Var17 = p_Var24;
          if ((char)uVar11 != '\0') {
            if (*(_Rb_tree_node_base **)(this + 0x20) != p_Var24) {
              p_Var16 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var24);
              uVar11 = std::
                       less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                       ::operator()((long *)(p_Var16 + 0x20),(long *)p_Var15);
              if ((char)uVar11 != '\0') {
                p_Var18 = p_Var24;
                if (*(long *)(p_Var16 + 0x18) == 0) {
                  p_Var17 = (_Rb_tree_node_base *)0x0;
                  p_Var24 = p_Var16;
                  goto LAB_003065ce;
                }
                goto LAB_003065c6;
              }
              p_Var24 = *(_Rb_tree_node_base **)(this + 0x18);
              if (*(_Rb_tree_node_base **)(this + 0x18) == (_Rb_tree_node_base *)0x0) {
                p_Var18 = p_Var21;
LAB_0030659d:
                p_Var19 = (_Rb_tree_node_base *)0x0;
                if (p_Var18 == *(_Rb_tree_node_base **)(this + 0x20)) goto LAB_003065c3;
                p_Var17 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var18);
              }
              else {
                do {
                  p_Var18 = p_Var24;
                  uVar11 = std::
                           less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                           ::operator()((long *)p_Var15,(long *)(p_Var18 + 0x20));
                  bVar7 = (byte)uVar11;
                  p_Var24 = *(_Rb_tree_node_base **)(p_Var18 + (ulong)(bVar7 ^ 1) * 8 + 0x10);
                } while (*(_Rb_tree_node_base **)(p_Var18 + (ulong)(bVar7 ^ 1) * 8 + 0x10) !=
                         (_Rb_tree_node_base *)0x0);
LAB_00306583:
                p_Var19 = (_Rb_tree_node_base *)0x0;
                p_Var17 = p_Var18;
                if (bVar7 != 0) goto LAB_0030659d;
              }
              uVar11 = std::
                       less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                       ::operator()((long *)(p_Var17 + 0x20),(long *)p_Var15);
              if ((char)uVar11 != '\0') goto LAB_003065c3;
              goto LAB_00306601;
            }
LAB_0030651b:
            p_Var18 = p_Var24;
            goto LAB_003065c6;
          }
          uVar11 = std::
                   less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                   ::operator()((long *)(p_Var24 + 0x20),(long *)p_Var15);
          if ((char)uVar11 == '\0') goto LAB_00306601;
          if (*(_Rb_tree_node_base **)(this + 0x28) == p_Var24) goto LAB_003064fe;
          p_Var18 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var24);
          uVar11 = std::
                   less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                   ::operator()((long *)p_Var15,(long *)(p_Var18 + 0x20));
          if ((char)uVar11 == '\0') {
            p_Var24 = *(_Rb_tree_node_base **)(this + 0x18);
            if (*(_Rb_tree_node_base **)(this + 0x18) != (_Rb_tree_node_base *)0x0) {
              do {
                p_Var18 = p_Var24;
                uVar11 = std::
                         less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                         ::operator()((long *)p_Var15,(long *)(p_Var18 + 0x20));
                bVar7 = (byte)uVar11;
                p_Var24 = *(_Rb_tree_node_base **)(p_Var18 + (ulong)(bVar7 ^ 1) * 8 + 0x10);
              } while (*(_Rb_tree_node_base **)(p_Var18 + (ulong)(bVar7 ^ 1) * 8 + 0x10) !=
                       (_Rb_tree_node_base *)0x0);
              goto LAB_00306583;
            }
            p_Var18 = p_Var21;
            goto LAB_0030659d;
          }
          p_Var17 = p_Var18;
          if (*(long *)(p_Var24 + 0x18) != 0) goto LAB_003065c6;
          p_Var17 = (_Rb_tree_node_base *)0x0;
        }
LAB_003065ce:
        uVar8 = true;
        if ((p_Var17 == (_Rb_tree_node_base *)0x0) && (p_Var24 != p_Var21)) {
          uVar11 = std::
                   less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                   ::operator()((long *)p_Var15,(long *)(p_Var24 + 0x20));
          uVar8 = (undefined1)uVar11;
        }
        std::_Rb_tree_insert_and_rebalance((bool)uVar8,p_Var14,p_Var24,p_Var21);
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
        p_Var19 = p_Var21;
        p_Var17 = p_Var14;
      }
      else {
        p_Var17 = p_Var21;
        local_a8 = uVar30;
        do {
          uVar11 = std::
                   less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                   ::operator()((long *)(p_Var24 + 0x20),(long *)&local_c8);
          p_Var19 = p_Var24 + 0x18;
          if ((char)uVar11 == '\0') {
            p_Var14 = p_Var24 + 0x10;
            p_Var17 = p_Var24;
          }
          else {
            p_Var14 = p_Var19;
          }
          p_Var24 = *(_Rb_tree_node_base **)p_Var14;
        } while (p_Var24 != (_Rb_tree_node_base *)0x0);
        if (p_Var17 == p_Var21) {
          uVar30 = local_a8;
          goto LAB_0030630c;
        }
        uVar11 = std::
                 less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                 ::operator()((long *)&local_c8,(long *)(p_Var17 + 0x20));
        if ((char)uVar11 != '\0') {
          bVar5 = false;
          p_Var24 = p_Var17;
          uVar30 = local_a8;
          goto LAB_0030630f;
        }
        uVar30 = local_a8;
LAB_003066a2:
        if (0 < (int)uVar30) {
          lVar25 = 0;
          lVar26 = 0;
          do {
            plVar3 = *(long **)((long)local_98 + lVar25);
            if (plVar3 != (long *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar3 + 8))();
              }
            }
            lVar26 = lVar26 + 1;
            lVar25 = lVar25 + 0x20;
          } while (lVar26 < (int)local_90._4_4_);
        }
      }
      free(local_98);
                    /* try { // try from 00306717 to 00306720 has its CatchHandler @ 00306967 */
      p_Var12 = operator_new(0x18);
      *(_Rb_tree_node_base **)(p_Var12 + 0x10) = p_Var17;
      std::__detail::_List_node_base::_M_hook(p_Var12);
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
      *(_List_node_base **)(p_Var17 + 0x50) = p_Var12;
      uVar30 = uStack_e0._4_4_;
    }
    else {
      p_Var17 = p_Var21;
      do {
        uVar11 = std::
                 less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                 ::operator()((long *)(p_Var24 + 0x20),(long *)&local_c8);
        p_Var19 = p_Var24 + 0x18;
        if ((char)uVar11 == '\0') {
          p_Var14 = p_Var24 + 0x10;
          p_Var17 = p_Var24;
        }
        else {
          p_Var14 = p_Var19;
        }
        p_Var24 = *(_Rb_tree_node_base **)p_Var14;
      } while (p_Var24 != (_Rb_tree_node_base *)0x0);
      if (p_Var17 == p_Var21) goto LAB_0030611f;
      uVar11 = std::
               less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
               ::operator()((long *)&local_c8,(long *)(p_Var17 + 0x20));
      if ((char)uVar11 != '\0') {
        p_Var17 = p_Var21;
      }
      if (p_Var17 == p_Var21) goto LAB_0030611f;
    }
    if (0 < (int)uVar30) {
      lVar25 = 0;
      lVar26 = 0;
      do {
        plVar3 = *(long **)((long)local_e8 + lVar25);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        lVar26 = lVar26 + 1;
        lVar25 = lVar25 + 0x20;
      } while (lVar26 < (int)uStack_e0._4_4_);
    }
    uStack_e0 = uStack_e0 & 0xffffffff;
    free(local_e8);
  }
  else {
    p_Var17 = p_Var21;
    do {
      uVar11 = std::
               less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
               ::operator()((long *)(p_Var24 + 0x20),(long *)&local_c8);
      p_Var19 = p_Var24 + 0x18;
      if ((char)uVar11 == '\0') {
        p_Var14 = p_Var24 + 0x10;
        p_Var17 = p_Var24;
      }
      else {
        p_Var14 = p_Var19;
      }
      p_Var24 = *(_Rb_tree_node_base **)p_Var14;
    } while (p_Var24 != (_Rb_tree_node_base *)0x0);
    if (p_Var17 == p_Var21) goto LAB_0030601d;
    uVar11 = std::
             less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
             ::operator()((long *)&local_c8,(long *)(p_Var17 + 0x20));
    if ((char)uVar11 != '\0') {
      p_Var17 = p_Var21;
    }
    if (p_Var17 == p_Var21) goto LAB_0030601d;
    pvVar23 = *(void **)(p_Var17 + 0x50);
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
    std::__detail::_List_node_base::_M_unhook();
    operator_delete(pvVar23);
                    /* try { // try from 00305ff2 to 00305ffb has its CatchHandler @ 0030694b */
    p_Var12 = operator_new(0x18);
    *(_Rb_tree_node_base **)(p_Var12 + 0x10) = p_Var17;
    std::__detail::_List_node_base::_M_hook(p_Var12);
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
    *(_List_node_base **)(p_Var17 + 0x50) = p_Var12;
  }
  pthread_mutex_unlock(ppVar4);
                    /* try { // try from 0030679d to 003067a9 has its CatchHandler @ 00306991 */
  GlyphArrangement::GlyphArrangement((GlyphArrangement *)&local_d8,(long *)(p_Var17 + 0x40));
  lVar25 = local_60;
  ppVar4 = local_a0;
  piVar9 = (int *)(local_c0 - 0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    iVar22 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar22 == 0) {
      operator_delete__(piVar9);
    }
  }
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar3 = local_c8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*local_c8 + 8))();
    }
  }
  pthread_mutex_unlock(ppVar4);
  uVar11 = extraout_RDX_00;
LAB_00306800:
  local_48 = 0x3f800000;
  fStack_40 = local_a4;
  uStack_3c = 0;
  uStack_38 = 0x3f800000;
  fStack_34 = local_58;
                    /* try { // try from 00306841 to 00306866 has its CatchHandler @ 003069ad */
  GlyphArrangement::draw
            ((long *)&local_d8,lVar25,uVar11,p_Var19,param_7,param_8,0x3f800000,
             (ulong)(uint)local_a4,CONCAT44(local_58,0x3f800000));
  if (0 < (int)local_d0._4_4_) {
    lVar25 = 0;
    lVar26 = 0;
    do {
      plVar3 = *(long **)((long)local_d8 + lVar25);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      lVar26 = lVar26 + 1;
      lVar25 = lVar25 + 0x20;
    } while (lVar26 < (int)local_d0._4_4_);
  }
  local_d0 = local_d0 & 0xffffffff;
  free(local_d8);
  piVar9 = (int *)(local_78 - 0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    iVar22 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar22 == 0) {
      operator_delete__(piVar9);
    }
  }
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar3 = local_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*local_80 + 8))();
    }
  }
  return;
}


