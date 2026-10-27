// Function : _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::string&&>,std::tuple<>>
// Namespace: std:_Rb_tree_std____cxx11__string_std__pair_std____cxx11__string_const_Steinberg__Vst__HostAtt~ebbba36b
// Entry    : 001ba9e0
// Prototype: _Rb_tree_node_base * _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::string&&>,std::tuple<>>(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>> * param_1, _Rb_tree_node_base * param_2, undefined8 param_3, undefined8 * param_4)
// Body     : 001ba9e0 - 001bab46


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree_iterator<std::pair<std::__cxx11::string const,
   Steinberg::Vst::HostAttributeList::Attribute> > std::_Rb_tree<std::__cxx11::string,
   std::pair<std::__cxx11::string const, Steinberg::Vst::HostAttributeList::Attribute>,
   std::_Select1st<std::pair<std::__cxx11::string const,
   Steinberg::Vst::HostAttributeList::Attribute> >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const,
   Steinberg::Vst::HostAttributeList::Attribute> >
   >::_M_emplace_hint_unique<std::piecewise_construct_t const&, std::tuple<std::__cxx11::string&&>,
   std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::string const,
   Steinberg::Vst::HostAttributeList::Attribute> >, std::piecewise_construct_t const&,
   std::tuple<std::__cxx11::string&&>&&, std::tuple<>&&) */

_Rb_tree_node_base * __cdecl
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
::
_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::string&&>,std::tuple<>>
          (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
           *param_1,_Rb_tree_node_base *param_2,undefined8 param_3,undefined8 *param_4)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *__dest;
  long *plVar2;
  void *__src;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  _Rb_tree_node_base *p_Var6;
  long lVar7;
  _Rb_tree_node_base *p_Var8;
  ulong __n;
  long lVar9;
  undefined1 auVar10 [16];
  
  p_Var6 = operator_new(0x50);
  p_Var1 = p_Var6 + 0x20;
  plVar2 = (long *)*param_4;
  __dest = p_Var6 + 0x30;
  *(_Rb_tree_node_base **)(p_Var6 + 0x20) = __dest;
  __src = (void *)*plVar2;
  if (__src == plVar2 + 2) {
    memcpy(__dest,__src,plVar2[1] + 1);
  }
  else {
    *(void **)p_Var1 = __src;
    *(long *)__dest = plVar2[2];
  }
  *(long *)(p_Var6 + 0x28) = plVar2[1];
  *plVar2 = (long)(plVar2 + 2);
  plVar2[1] = 0;
  *(undefined1 *)(plVar2 + 2) = 0;
  *(undefined8 *)(p_Var6 + 0x40) = 0;
  *(undefined8 *)(p_Var6 + 0x48) = 0;
                    /* try { // try from 001baa6f to 001baa7c has its CatchHandler @ 001bab47 */
  auVar10 = _M_get_insert_hint_unique_pos(param_1,param_2,(undefined8 *)p_Var1);
  p_Var8 = auVar10._8_8_;
  if (p_Var8 == (_Rb_tree_node_base *)0x0) {
    if ((*(int *)(p_Var6 + 0x48) != 0) && (*(void **)(p_Var6 + 0x40) != (void *)0x0)) {
      operator_delete__(*(void **)(p_Var6 + 0x40));
    }
    if (*(_Rb_tree_node_base **)p_Var1 != __dest) {
      operator_delete(*(_Rb_tree_node_base **)p_Var1);
    }
    operator_delete(p_Var6);
    return auVar10._0_8_;
  }
  bVar4 = true;
  if ((auVar10._0_8_ == (_Rb_tree_node_base *)0x0) &&
     (p_Var8 != (_Rb_tree_node_base *)(param_1 + 8))) {
    __n = *(ulong *)(p_Var6 + 0x28);
    uVar3 = *(ulong *)(p_Var8 + 0x28);
    lVar9 = __n - uVar3;
    if (uVar3 <= __n && lVar9 != 0) {
      __n = uVar3;
    }
    if ((__n == 0) || (iVar5 = memcmp(*(void **)p_Var1,*(void **)(p_Var8 + 0x20),__n), iVar5 == 0))
    {
      lVar7 = -0x80000000;
      if (-0x80000000 < lVar9) {
        lVar7 = lVar9;
      }
      iVar5 = 0;
      if (lVar7 < 0x7fffffff) {
        iVar5 = (int)lVar7;
      }
    }
    bVar4 = SUB41((uint)iVar5 >> 0x1f,0);
  }
  std::_Rb_tree_insert_and_rebalance(bVar4,p_Var6,p_Var8,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return p_Var6;
}


