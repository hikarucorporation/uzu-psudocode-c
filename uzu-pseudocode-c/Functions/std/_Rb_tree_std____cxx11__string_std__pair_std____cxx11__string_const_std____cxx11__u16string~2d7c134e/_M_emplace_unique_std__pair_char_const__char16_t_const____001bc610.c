// Function : _M_emplace_unique<std::pair<char_const*,char16_t_const*>>
// Namespace: std:_Rb_tree_std____cxx11__string_std__pair_std____cxx11__string_const_std____cxx11__u16string~2d7c134e
// Entry    : 001bc610
// Prototype: undefined1[16] _M_emplace_unique<std::pair<char_const*,char16_t_const*>>(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>> * this, undefined8 * param_1)
// Body     : 001bc610 - 001bc725


/* std::pair<std::_Rb_tree_iterator<std::pair<std::__cxx11::string const, std::__cxx11::u16string >
   >, bool> std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   std::__cxx11::u16string >, std::_Select1st<std::pair<std::__cxx11::string const,
   std::__cxx11::u16string > >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const, std::__cxx11::u16string > >
   >::_M_emplace_unique<std::pair<char const*, char16_t const*> >(std::pair<char const*, char16_t
   const*>&&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
::_M_emplace_unique<std::pair<char_const*,char16_t_const*>>
          (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
           *this,undefined8 *param_1)

{
  pair<std::__cxx11::string_const,std::__cxx11::u16string> *this_00;
  ulong uVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  p_Var4 = operator_new(0x60);
  this_00 = (pair<std::__cxx11::string_const,std::__cxx11::u16string> *)(p_Var4 + 0x20);
                    /* try { // try from 001bc63a to 001bc644 has its CatchHandler @ 001bc73b */
  pair<std::__cxx11::string_const,std::__cxx11::u16string>::pair<char_const*,char16_t_const*,true>
            (this_00,param_1);
                    /* try { // try from 001bc64a to 001bc654 has its CatchHandler @ 001bc726 */
  auVar9 = _M_get_insert_unique_pos(this,(undefined8 *)this_00);
  auVar9._8_8_ = auVar9._8_8_;
  p_Var5 = auVar9._0_8_;
  if (auVar9._8_8_ == (_Rb_tree_node_base *)0x0) {
    if (*(_Rb_tree_node_base **)(p_Var4 + 0x40) != p_Var4 + 0x50) {
      operator_delete(*(_Rb_tree_node_base **)(p_Var4 + 0x40));
    }
    if (*(_Rb_tree_node_base **)(p_Var4 + 0x20) != p_Var4 + 0x30) {
      operator_delete(*(_Rb_tree_node_base **)(p_Var4 + 0x20));
    }
    operator_delete(p_Var4);
    uVar6 = 0;
    goto LAB_001bc712;
  }
  uVar6 = CONCAT71((int7)((ulong)param_1 >> 8),1);
  bVar2 = true;
  if ((p_Var5 == (_Rb_tree_node_base *)0x0) &&
     (bVar2 = true, auVar9._8_8_ != (_Rb_tree_node_base *)(this + 8))) {
    uVar6 = *(ulong *)(p_Var4 + 0x28);
    uVar1 = *(ulong *)(auVar9._8_8_ + 0x28);
    lVar8 = uVar6 - uVar1;
    if (uVar1 <= uVar6 && lVar8 != 0) {
      uVar6 = uVar1;
    }
    if (uVar6 == 0) {
LAB_001bc6a2:
      lVar7 = -0x80000000;
      if (-0x80000000 < lVar8) {
        lVar7 = lVar8;
      }
      iVar3 = 0;
      if (lVar7 < 0x7fffffff) {
        iVar3 = (int)lVar7;
      }
    }
    else {
      iVar3 = memcmp(*(void **)this_00,*(void **)(auVar9._8_8_ + 0x20),uVar6);
      if (iVar3 == 0) goto LAB_001bc6a2;
    }
    bVar2 = SUB41((uint)iVar3 >> 0x1f,0);
    uVar6 = CONCAT71((int7)((ulong)lVar8 >> 8),1);
  }
  std::_Rb_tree_insert_and_rebalance(bVar2,p_Var4,auVar9._8_8_,(_Rb_tree_node_base *)(this + 8));
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  p_Var5 = p_Var4;
LAB_001bc712:
  auVar9._8_8_ = uVar6 & 0xffffffff;
  auVar9._0_8_ = p_Var5;
  return auVar9;
}


