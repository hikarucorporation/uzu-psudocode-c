// Function : get<juce::Typeface::Native::getGlyphExtents(unsigned_int)const::{lambda(auto:1)#1}>
// Namespace: juce:LruCache_unsigned_int_std__optional_hb_glyph_extents_t__512ul_
// Entry    : 00324050
// Prototype: _Rb_tree_node_base * get<juce::Typeface::Native::getGlyphExtents(unsigned_int)const::{lambda(auto:1)#1}>(LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul> * this, uint param_1, undefined8 * param_2)
// Body     : 00324050 - 003244f5


/* std::optional<hb_glyph_extents_t> const& juce::LruCache<unsigned int,
   std::optional<hb_glyph_extents_t>, 512ul>::get<juce::Typeface::Native::getGlyphExtents(unsigned
   int) const::{lambda(auto:1)#1}>(unsigned int, juce::Typeface::Native::getGlyphExtents(unsigned
   int) const::{lambda(auto:1)#1}&&) */

_Rb_tree_node_base * __thiscall
juce::LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::
get<juce::Typeface::Native::getGlyphExtents(unsigned_int)const::_lambda(auto:1)_1_>
          (LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul> *this,uint param_1,
          undefined8 *param_2)

{
  _Rb_tree_node_base *p_Var1;
  int iVar2;
  pthread_mutex_t *__mutex;
  void *pvVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  _List_node_base *p_Var9;
  void *pvVar10;
  _Rb_tree_node_base *p_Var11;
  _Rb_tree_node_base *p_Var12;
  _Rb_tree_node_base *p_Var13;
  _Rb_tree_node_base *p_Var14;
  _Rb_tree_node_base *p_Var15;
  undefined8 uVar16;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  __mutex = *(pthread_mutex_t **)(this + 0x50);
  iVar7 = pthread_mutex_lock(__mutex);
  if (iVar7 != 0) goto LAB_0032424d;
  p_Var11 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  if (p_Var11 == (_Rb_tree_node_base *)0x0) {
LAB_003240e4:
    iVar2 = *(int *)(this + 0x48);
    pthread_mutex_unlock(__mutex);
    lVar4 = *(long *)*param_2;
    local_58 = 0;
    uStack_50 = 0;
    lVar5 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar5 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(lVar5 + 0x68);
    }
    iVar8 = (**(code **)(*(long *)(lVar4 + 0x90) + 0x88))
                      (lVar4,*(undefined8 *)(lVar4 + 0x98),param_1,&local_58,uVar16);
    if (iVar8 == 0) {
      iVar7 = pthread_mutex_lock(__mutex);
    }
    else {
      local_48 = local_58;
      uStack_40 = uStack_50;
      iVar7 = pthread_mutex_lock(__mutex);
    }
    if (iVar7 != 0) {
LAB_0032424d:
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar7);
    }
    p_Var11 = *(_Rb_tree_node_base **)(this + 0x10);
    if ((iVar2 != *(int *)(this + 0x48)) && (p_Var11 != (_Rb_tree_node_base *)0x0)) {
      p_Var12 = p_Var11;
      p_Var14 = p_Var1;
      do {
        p_Var13 = p_Var12 + 0x18;
        if (param_1 <= *(uint *)(p_Var12 + 0x20)) {
          p_Var13 = p_Var12 + 0x10;
          p_Var14 = p_Var12;
        }
        p_Var12 = *(_Rb_tree_node_base **)p_Var13;
      } while (p_Var12 != (_Rb_tree_node_base *)0x0);
      if (p_Var14 != p_Var1) {
        if (param_1 < *(uint *)(p_Var14 + 0x20)) {
          p_Var14 = p_Var1;
        }
        if (p_Var14 != p_Var1) goto LAB_003244d8;
      }
    }
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
    if (0x1ff < *(ulong *)(this + 0x28)) {
      do {
        pvVar3 = *(void **)(this + 0x30);
        pvVar10 = (void *)std::_Rb_tree_rebalance_for_erase
                                    (*(_Rb_tree_node_base **)((long)pvVar3 + 0x10),p_Var1);
        operator_delete(pvVar10);
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
        *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
        std::__detail::_List_node_base::_M_unhook();
        operator_delete(pvVar3);
      } while (0x1ff < *(ulong *)(this + 0x28));
      p_Var11 = *(_Rb_tree_node_base **)(this + 0x10);
    }
    p_Var14 = p_Var1;
    if (p_Var11 == (_Rb_tree_node_base *)0x0) {
LAB_00324257:
                    /* try { // try from 00324257 to 00324263 has its CatchHandler @ 003244f8 */
      p_Var11 = operator_new(0x48);
      *(uint *)(p_Var11 + 0x20) = param_1;
      *(undefined8 *)(p_Var11 + 0x28) = local_48;
      *(undefined8 *)(p_Var11 + 0x30) = uStack_40;
      p_Var11[0x38] = (_Rb_tree_node_base)(iVar8 != 0);
      *(undefined8 *)(p_Var11 + 0x40) = 0;
      if (p_Var14 == p_Var1) {
        if ((*(long *)(this + 0x28) == 0) ||
           (p_Var12 = *(_Rb_tree_node_base **)(this + 0x20), param_1 <= *(uint *)(p_Var12 + 0x20)))
        {
          p_Var12 = *(_Rb_tree_node_base **)(this + 0x10);
          if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
            p_Var12 = p_Var1;
            if (p_Var1 != *(_Rb_tree_node_base **)(this + 0x18)) {
LAB_003243b4:
              p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var12);
              goto LAB_003243c2;
            }
          }
          else {
            do {
              p_Var14 = p_Var12;
              p_Var12 = *(_Rb_tree_node_base **)
                         (p_Var14 + (ulong)(*(uint *)(p_Var14 + 0x20) <= param_1) * 8 + 0x10);
            } while (*(_Rb_tree_node_base **)
                      (p_Var14 + (ulong)(*(uint *)(p_Var14 + 0x20) <= param_1) * 8 + 0x10) !=
                     (_Rb_tree_node_base *)0x0);
            p_Var12 = p_Var14;
            if (*(uint *)(p_Var14 + 0x20) <= param_1) {
LAB_003243c2:
              if (param_1 <= *(uint *)(p_Var14 + 0x20)) goto LAB_0032447f;
              goto LAB_003243d2;
            }
            if (p_Var14 != *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_003243b4;
          }
LAB_0032445b:
          p_Var14 = (_Rb_tree_node_base *)0x0;
          if (p_Var12 == (_Rb_tree_node_base *)0x0) goto LAB_0032447f;
        }
        else {
LAB_0032435b:
          p_Var14 = (_Rb_tree_node_base *)0x0;
        }
LAB_00324466:
        bVar6 = true;
        if (p_Var14 == (_Rb_tree_node_base *)0x0) {
          p_Var14 = p_Var12;
          if (p_Var12 != p_Var1) {
            bVar6 = param_1 < *(uint *)(p_Var12 + 0x20);
          }
        }
        else {
          p_Var14 = p_Var12;
        }
LAB_00324496:
        std::_Rb_tree_insert_and_rebalance(bVar6,p_Var11,p_Var14,p_Var1);
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
        p_Var14 = p_Var11;
      }
      else {
        p_Var12 = p_Var14;
        if (param_1 < *(uint *)(p_Var14 + 0x20)) {
          p_Var13 = *(_Rb_tree_node_base **)(this + 0x18);
          if (p_Var13 == p_Var14) {
            bVar6 = true;
            goto LAB_00324496;
          }
          p_Var12 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var14);
          if (*(uint *)(p_Var12 + 0x20) < param_1) {
            if (*(long *)(p_Var12 + 0x18) == 0) {
              p_Var14 = (_Rb_tree_node_base *)0x0;
            }
            else {
              p_Var12 = p_Var14;
            }
            goto LAB_00324466;
          }
          p_Var12 = *(_Rb_tree_node_base **)(this + 0x10);
          if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
            p_Var15 = p_Var1;
LAB_0032441b:
            p_Var12 = p_Var13;
            if (p_Var15 == p_Var13) goto LAB_0032445b;
            p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var15);
            p_Var12 = p_Var15;
          }
          else {
            do {
              p_Var14 = p_Var12;
              p_Var12 = *(_Rb_tree_node_base **)
                         (p_Var14 + (ulong)(*(uint *)(p_Var14 + 0x20) <= param_1) * 8 + 0x10);
            } while (*(_Rb_tree_node_base **)
                      (p_Var14 + (ulong)(*(uint *)(p_Var14 + 0x20) <= param_1) * 8 + 0x10) !=
                     (_Rb_tree_node_base *)0x0);
            p_Var15 = p_Var14;
            p_Var12 = p_Var14;
            if (param_1 < *(uint *)(p_Var14 + 0x20)) goto LAB_0032441b;
          }
          if (*(uint *)(p_Var14 + 0x20) < param_1) {
LAB_003243d2:
            p_Var14 = (_Rb_tree_node_base *)0x0;
            if (p_Var12 != (_Rb_tree_node_base *)0x0) goto LAB_00324466;
          }
        }
        else if (*(uint *)(p_Var14 + 0x20) < param_1) {
          if (*(_Rb_tree_node_base **)(this + 0x20) == p_Var14) goto LAB_0032435b;
          p_Var13 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var14);
          if (*(uint *)(p_Var13 + 0x20) <= param_1) {
            p_Var12 = *(_Rb_tree_node_base **)(this + 0x10);
            if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
              p_Var12 = p_Var1;
            }
            else {
              do {
                p_Var14 = p_Var12;
                p_Var12 = *(_Rb_tree_node_base **)
                           (p_Var14 + (ulong)(*(uint *)(p_Var14 + 0x20) <= param_1) * 8 + 0x10);
              } while (*(_Rb_tree_node_base **)
                        (p_Var14 + (ulong)(*(uint *)(p_Var14 + 0x20) <= param_1) * 8 + 0x10) !=
                       (_Rb_tree_node_base *)0x0);
              p_Var12 = p_Var14;
              if (*(uint *)(p_Var14 + 0x20) <= param_1) goto LAB_003243c2;
            }
            if (p_Var12 != *(_Rb_tree_node_base **)(this + 0x18)) {
              p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var12);
              goto LAB_003243c2;
            }
            goto LAB_0032445b;
          }
          p_Var15 = p_Var14 + 0x18;
          p_Var14 = (_Rb_tree_node_base *)0x0;
          if (*(long *)p_Var15 != 0) {
            p_Var12 = p_Var13;
            p_Var14 = p_Var13;
          }
          goto LAB_00324466;
        }
LAB_0032447f:
        operator_delete(p_Var11);
      }
    }
    else {
      do {
        p_Var12 = p_Var11 + 0x18;
        if (param_1 <= *(uint *)(p_Var11 + 0x20)) {
          p_Var12 = p_Var11 + 0x10;
          p_Var14 = p_Var11;
        }
        p_Var11 = *(_Rb_tree_node_base **)p_Var12;
      } while (p_Var11 != (_Rb_tree_node_base *)0x0);
      if (p_Var14 == p_Var1) {
        p_Var14 = p_Var1;
        goto LAB_00324257;
      }
      if (param_1 < *(uint *)(p_Var14 + 0x20)) goto LAB_00324257;
    }
                    /* try { // try from 003244b2 to 003244bb has its CatchHandler @ 003244fa */
    p_Var9 = operator_new(0x18);
  }
  else {
    p_Var14 = p_Var1;
    do {
      p_Var12 = p_Var11 + 0x18;
      if (param_1 <= *(uint *)(p_Var11 + 0x20)) {
        p_Var12 = p_Var11 + 0x10;
        p_Var14 = p_Var11;
      }
      p_Var11 = *(_Rb_tree_node_base **)p_Var12;
    } while (p_Var11 != (_Rb_tree_node_base *)0x0);
    if (p_Var14 == p_Var1) goto LAB_003240e4;
    if (param_1 < *(uint *)(p_Var14 + 0x20)) {
      p_Var14 = p_Var1;
    }
    if (p_Var14 == p_Var1) goto LAB_003240e4;
    pvVar3 = *(void **)(p_Var14 + 0x40);
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
    std::__detail::_List_node_base::_M_unhook();
    operator_delete(pvVar3);
                    /* try { // try from 003240d5 to 003240de has its CatchHandler @ 003244f6 */
    p_Var9 = operator_new(0x18);
  }
  *(_Rb_tree_node_base **)(p_Var9 + 0x10) = p_Var14;
  std::__detail::_List_node_base::_M_hook(p_Var9);
  *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
  *(_List_node_base **)(p_Var14 + 0x40) = p_Var9;
LAB_003244d8:
  pthread_mutex_unlock(__mutex);
  return p_Var14 + 0x28;
}


