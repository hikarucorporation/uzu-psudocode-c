// Function : _M_get_insert_unique_pos
// Namespace: std:_Rb_tree_std____cxx11__string_std__pair_std____cxx11__string_const_std____cxx11__u16string~2d7c134e
// Entry    : 001bc770
// Prototype: undefined1[16] _M_get_insert_unique_pos(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>> * this, undefined8 * param_1)
// Body     : 001bc770 - 001bc89d


/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const, std::__cxx11::u16string
   >, std::_Select1st<std::pair<std::__cxx11::string const, std::__cxx11::u16string > >,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   std::__cxx11::u16string > > >::_M_get_insert_unique_pos(std::__cxx11::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
           *this,undefined8 *param_1)

{
  void *__s1;
  int iVar1;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
  *p_Var2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
  *p_Var7;
  undefined1 auVar8 [16];
  
  if (*(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
       *)0x0) {
    p_Var7 = this + 8;
    if (p_Var7 == *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
                    **)(this + 0x18)) {
LAB_001bc886:
      p_Var2 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
                *)0x0;
      goto LAB_001bc889;
    }
LAB_001bc818:
    p_Var2 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
              *)std::_Rb_tree_decrement((_Rb_tree_node_base *)p_Var7);
  }
  else {
    __s1 = (void *)*param_1;
    uVar5 = param_1[1];
    p_Var7 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
               **)(this + 0x10);
    do {
      p_Var2 = p_Var7;
      uVar4 = *(ulong *)(p_Var2 + 0x28);
      lVar6 = uVar5 - uVar4;
      if (uVar5 < uVar4 || lVar6 == 0) {
        uVar4 = uVar5;
      }
      if ((uVar4 == 0) || (iVar1 = memcmp(__s1,*(void **)(p_Var2 + 0x20),uVar4), iVar1 == 0)) {
        if (lVar6 < -0x7fffffff) {
          lVar6 = -0x80000000;
        }
        iVar1 = (int)lVar6;
        if (0x7ffffffe < lVar6) {
          iVar1 = 0x7fffffff;
        }
      }
      p_Var7 = *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
                 **)(p_Var2 + (ulong)(-1 < iVar1) * 8 + 0x10);
    } while (*(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
               **)(p_Var2 + (ulong)(-1 < iVar1) * 8 + 0x10) !=
             (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
              *)0x0);
    p_Var7 = p_Var2;
    if (iVar1 < 0) {
      if (p_Var2 == *(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
                      **)(this + 0x18)) goto LAB_001bc886;
      goto LAB_001bc818;
    }
  }
  uVar5 = *(ulong *)(p_Var2 + 0x28);
  uVar4 = param_1[1];
  lVar6 = uVar5 - uVar4;
  if (uVar4 <= uVar5 && lVar6 != 0) {
    uVar5 = uVar4;
  }
  if (uVar5 == 0) {
LAB_001bc84d:
    lVar3 = -0x80000000;
    if (-0x80000000 < lVar6) {
      lVar3 = lVar6;
    }
    iVar1 = 0x7fffffff;
    if (lVar3 < 0x7fffffff) {
      iVar1 = (int)lVar3;
    }
  }
  else {
    iVar1 = memcmp(*(void **)(p_Var2 + 0x20),(void *)*param_1,uVar5);
    if (iVar1 == 0) goto LAB_001bc84d;
  }
  if (iVar1 < 0) {
    p_Var2 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
              *)0x0;
  }
  else {
    p_Var7 = (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,std::__cxx11::u16string>,std::_Select1st<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,std::__cxx11::u16string>>>
              *)0x0;
  }
LAB_001bc889:
  auVar8._8_8_ = p_Var7;
  auVar8._0_8_ = p_Var2;
  return auVar8;
}


