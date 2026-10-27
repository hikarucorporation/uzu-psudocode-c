// Function : operator[]
// Namespace: std:map_unsigned_long_int_std__less_unsigned_long__std__allocator_std__pair_unsigned_long_cons~59ef14fc
// Entry    : 002c9cd0
// Prototype: _Rb_tree_node_base * operator[](map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>> * this, ulong * param_1)
// Body     : 002c9cd0 - 002c9f8b


/* std::map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<unsigned long
   const, int> > >::operator[](unsigned long const&) */

_Rb_tree_node_base * __thiscall
std::
map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>::
operator[](map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
           *this,ulong *param_1)

{
  _Rb_tree_node_base *p_Var1;
  ulong uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  bool bVar8;
  bool bVar9;
  
  p_Var3 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  p_Var7 = p_Var1;
  if (p_Var3 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var4 = p_Var3 + 0x18;
      if (*param_1 <= *(ulong *)(p_Var3 + 0x20)) {
        p_Var4 = p_Var3 + 0x10;
        p_Var7 = p_Var3;
      }
      p_Var3 = *(_Rb_tree_node_base **)p_Var4;
    } while (p_Var3 != (_Rb_tree_node_base *)0x0);
    if (p_Var7 == p_Var1) {
      p_Var7 = p_Var1;
    }
    else if (*(ulong *)(p_Var7 + 0x20) <= *param_1) goto LAB_002c9f76;
  }
  p_Var4 = operator_new(0x30);
  uVar2 = *param_1;
  *(ulong *)(p_Var4 + 0x20) = uVar2;
  *(undefined4 *)(p_Var4 + 0x28) = 0;
  p_Var3 = p_Var1;
  if (p_Var7 == p_Var1) {
    if ((*(long *)(this + 0x28) == 0) ||
       (p_Var5 = *(_Rb_tree_node_base **)(this + 0x20), uVar2 <= *(ulong *)(p_Var5 + 0x20))) {
      p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
        p_Var5 = p_Var1;
        if (p_Var1 != *(_Rb_tree_node_base **)(this + 0x18)) {
LAB_002c9e87:
          p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var3);
          goto LAB_002c9e95;
        }
      }
      else {
        do {
          p_Var5 = p_Var7;
          p_Var7 = *(_Rb_tree_node_base **)
                    (p_Var5 + (ulong)(*(ulong *)(p_Var5 + 0x20) <= uVar2) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var5 + (ulong)(*(ulong *)(p_Var5 + 0x20) <= uVar2) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var3 = p_Var5;
        if (*(ulong *)(p_Var5 + 0x20) <= uVar2) {
LAB_002c9e95:
          if (uVar2 <= *(ulong *)(p_Var5 + 0x20)) {
            p_Var7 = p_Var5;
            goto LAB_002c9f6b;
          }
          goto LAB_002c9ea6;
        }
        if (p_Var5 != *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_002c9e87;
      }
LAB_002c9f2f:
      p_Var7 = (_Rb_tree_node_base *)0x0;
      if (p_Var5 == (_Rb_tree_node_base *)0x0) goto LAB_002c9f6b;
    }
    else {
LAB_002c9e2a:
      p_Var7 = (_Rb_tree_node_base *)0x0;
    }
LAB_002c9f3a:
    bVar8 = true;
    bVar9 = p_Var7 == (_Rb_tree_node_base *)0x0;
    p_Var7 = p_Var5;
    if ((bVar9) && (p_Var5 != p_Var1)) {
      bVar8 = uVar2 < *(ulong *)(p_Var5 + 0x20);
    }
LAB_002c9f4d:
    std::_Rb_tree_insert_and_rebalance(bVar8,p_Var4,p_Var7,p_Var1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var7 = p_Var4;
  }
  else {
    p_Var5 = p_Var7;
    if (uVar2 < *(ulong *)(p_Var7 + 0x20)) {
      p_Var6 = *(_Rb_tree_node_base **)(this + 0x18);
      if (p_Var6 == p_Var7) {
        bVar8 = true;
        goto LAB_002c9f4d;
      }
      p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var7);
      if (*(ulong *)(p_Var5 + 0x20) < uVar2) {
        if (*(long *)(p_Var5 + 0x18) == 0) {
          p_Var7 = (_Rb_tree_node_base *)0x0;
        }
        else {
          p_Var5 = p_Var7;
        }
        goto LAB_002c9f3a;
      }
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_002c9eee:
        p_Var5 = p_Var6;
        if (p_Var3 == p_Var6) goto LAB_002c9f2f;
        p_Var7 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var3);
      }
      else {
        do {
          p_Var7 = p_Var5;
          p_Var5 = *(_Rb_tree_node_base **)
                    (p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) <= uVar2) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var7 + (ulong)(*(ulong *)(p_Var7 + 0x20) <= uVar2) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var3 = p_Var7;
        if (uVar2 < *(ulong *)(p_Var7 + 0x20)) goto LAB_002c9eee;
      }
      if (*(ulong *)(p_Var7 + 0x20) < uVar2) {
LAB_002c9ea6:
        p_Var5 = p_Var3;
        p_Var7 = (_Rb_tree_node_base *)0x0;
        if (p_Var5 != (_Rb_tree_node_base *)0x0) goto LAB_002c9f3a;
      }
    }
    else if (*(ulong *)(p_Var7 + 0x20) < uVar2) {
      if (*(_Rb_tree_node_base **)(this + 0x20) == p_Var7) goto LAB_002c9e2a;
      p_Var6 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var7);
      if (*(ulong *)(p_Var6 + 0x20) <= uVar2) {
        p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
        if (*(_Rb_tree_node_base **)(this + 0x10) != (_Rb_tree_node_base *)0x0) {
          do {
            p_Var5 = p_Var7;
            p_Var7 = *(_Rb_tree_node_base **)
                      (p_Var5 + (ulong)(*(ulong *)(p_Var5 + 0x20) <= uVar2) * 8 + 0x10);
          } while (*(_Rb_tree_node_base **)
                    (p_Var5 + (ulong)(*(ulong *)(p_Var5 + 0x20) <= uVar2) * 8 + 0x10) !=
                   (_Rb_tree_node_base *)0x0);
          p_Var3 = p_Var5;
          if (*(ulong *)(p_Var5 + 0x20) <= uVar2) goto LAB_002c9e95;
        }
        p_Var5 = p_Var3;
        if (p_Var3 != *(_Rb_tree_node_base **)(this + 0x18)) {
          p_Var5 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var3);
          goto LAB_002c9e95;
        }
        goto LAB_002c9f2f;
      }
      p_Var3 = p_Var7 + 0x18;
      p_Var7 = (_Rb_tree_node_base *)0x0;
      if (*(long *)p_Var3 != 0) {
        p_Var5 = p_Var6;
        p_Var7 = p_Var6;
      }
      goto LAB_002c9f3a;
    }
LAB_002c9f6b:
    operator_delete(p_Var4);
  }
LAB_002c9f76:
  return p_Var7 + 0x28;
}


