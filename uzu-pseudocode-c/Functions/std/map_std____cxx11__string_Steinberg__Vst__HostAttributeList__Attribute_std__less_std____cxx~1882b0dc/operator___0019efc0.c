// Function : operator[]
// Namespace: std:map_std____cxx11__string_Steinberg__Vst__HostAttributeList__Attribute_std__less_std____cxx~1882b0dc
// Entry    : 0019efc0
// Prototype: _Rb_tree_node_base * operator[](map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>> * this, undefined8 * param_1)
// Body     : 0019efc0 - 0019f109


/* std::map<std::__cxx11::string, Steinberg::Vst::HostAttributeList::Attribute,
   std::less<std::__cxx11::string >, std::allocator<std::pair<std::__cxx11::string const,
   Steinberg::Vst::HostAttributeList::Attribute> > >::operator[](std::__cxx11::string&&) */

_Rb_tree_node_base * __thiscall
std::
map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
::operator[](map<std::__cxx11::string,Steinberg::Vst::HostAttributeList::Attribute,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
             *this,undefined8 *param_1)

{
  _Rb_tree_node_base *p_Var1;
  void *__s2;
  ulong uVar2;
  int iVar3;
  _Rb_tree_node_base *p_Var4;
  long lVar5;
  _Rb_tree_node_base *p_Var6;
  ulong __n;
  ulong __n_00;
  _Rb_tree_node_base *p_Var7;
  long lVar8;
  undefined8 *local_38;
  
  p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  p_Var4 = p_Var1;
  if (p_Var7 != (_Rb_tree_node_base *)0x0) {
    __s2 = (void *)*param_1;
    __n_00 = param_1[1];
    do {
      uVar2 = *(ulong *)(p_Var7 + 0x28);
      lVar8 = uVar2 - __n_00;
      __n = __n_00;
      if (uVar2 < __n_00 || lVar8 == 0) {
        __n = uVar2;
      }
      if ((__n == 0) || (iVar3 = memcmp(*(void **)(p_Var7 + 0x20),__s2,__n), iVar3 == 0)) {
        if (lVar8 < -0x7fffffff) {
          lVar8 = -0x80000000;
        }
        if (0x7ffffffe < lVar8) {
          lVar8 = 0x7fffffff;
        }
        iVar3 = (int)lVar8;
      }
      p_Var6 = p_Var7 + 0x18;
      if (-1 < iVar3) {
        p_Var6 = p_Var7 + 0x10;
        p_Var4 = p_Var7;
      }
      p_Var7 = *(_Rb_tree_node_base **)p_Var6;
    } while (p_Var7 != (_Rb_tree_node_base *)0x0);
    if (p_Var4 == p_Var1) {
      p_Var4 = p_Var1;
    }
    else {
      uVar2 = *(ulong *)(p_Var4 + 0x28);
      lVar8 = __n_00 - uVar2;
      if (uVar2 <= __n_00 && lVar8 != 0) {
        __n_00 = uVar2;
      }
      if (__n_00 == 0) {
LAB_0019f090:
        lVar5 = -0x80000000;
        if (-0x80000000 < lVar8) {
          lVar5 = lVar8;
        }
        iVar3 = 0x7fffffff;
        if (lVar5 < 0x7fffffff) {
          iVar3 = (int)lVar5;
        }
      }
      else {
        iVar3 = memcmp(__s2,*(void **)(p_Var4 + 0x20),__n_00);
        if (iVar3 == 0) goto LAB_0019f090;
      }
      if (-1 < iVar3) goto LAB_0019f0f4;
    }
  }
  local_38 = param_1;
  p_Var4 = _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
           ::
           _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::string&&>,std::tuple<>>
                     ((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
                       *)this,p_Var4,PTR_piecewise_construct_00715990,&local_38);
LAB_0019f0f4:
  return p_Var4 + 0x40;
}


