// Function : string<std::allocator<char>>
// Namespace: std:__cxx11:string
// Entry    : 0019ef20
// Prototype: char * string<std::allocator<char>>(string * this, string * param_1)
// Body     : 0019ef20 - 0019efbf


/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&) */

char * __thiscall std::__cxx11::string::string<std::allocator<char>>(string *this,string *param_1)

{
  _Rb_tree_node_base *p_Var1;
  void *__s2;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  string *__dest;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  _Rb_tree_node_base *p_Var7;
  ulong __n;
  ulong __n_00;
  _Rb_tree_node_base *p_Var8;
  long lVar9;
  string *psStack_60;
  char *local_28;
  
  __dest = this + 0x10;
  *(string **)this = __dest;
  if (param_1 != (string *)0x0) {
    pcVar4 = (char *)strlen((char *)param_1);
    local_28 = pcVar4;
    if ((char *)0xf < pcVar4) {
      __dest = (string *)std::__cxx11::string::_M_create((ulong *)this,(ulong)&local_28);
      *(string **)this = __dest;
      *(char **)(this + 0x10) = local_28;
    }
    if (pcVar4 != (char *)0x0) {
      if (pcVar4 == (char *)0x1) {
        *__dest = *param_1;
      }
      else {
        memcpy(__dest,param_1,(size_t)pcVar4);
      }
    }
    *(char **)(this + 8) = local_28;
    local_28[*(long *)this] = '\0';
    return local_28;
  }
  pcVar4 = "basic_string: construction from null is not valid";
  std::__throw_logic_error("basic_string: construction from null is not valid");
  p_Var8 = *(_Rb_tree_node_base **)(pcVar4 + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(pcVar4 + 8);
  p_Var5 = p_Var1;
  if (p_Var8 != (_Rb_tree_node_base *)0x0) {
    __s2 = *(void **)param_1;
    __n_00 = *(ulong *)(param_1 + 8);
    do {
      uVar2 = *(ulong *)(p_Var8 + 0x28);
      lVar9 = uVar2 - __n_00;
      __n = __n_00;
      if (uVar2 < __n_00 || lVar9 == 0) {
        __n = uVar2;
      }
      if ((__n == 0) || (iVar3 = memcmp(*(void **)(p_Var8 + 0x20),__s2,__n), iVar3 == 0)) {
        if (lVar9 < -0x7fffffff) {
          lVar9 = -0x80000000;
        }
        if (0x7ffffffe < lVar9) {
          lVar9 = 0x7fffffff;
        }
        iVar3 = (int)lVar9;
      }
      p_Var7 = p_Var8 + 0x18;
      if (-1 < iVar3) {
        p_Var7 = p_Var8 + 0x10;
        p_Var5 = p_Var8;
      }
      p_Var8 = *(_Rb_tree_node_base **)p_Var7;
    } while (p_Var8 != (_Rb_tree_node_base *)0x0);
    if (p_Var5 == p_Var1) {
      p_Var5 = p_Var1;
    }
    else {
      uVar2 = *(ulong *)(p_Var5 + 0x28);
      lVar9 = __n_00 - uVar2;
      if (uVar2 <= __n_00 && lVar9 != 0) {
        __n_00 = uVar2;
      }
      if (__n_00 == 0) {
LAB_0019f090:
        lVar6 = -0x80000000;
        if (-0x80000000 < lVar9) {
          lVar6 = lVar9;
        }
        iVar3 = 0x7fffffff;
        if (lVar6 < 0x7fffffff) {
          iVar3 = (int)lVar6;
        }
      }
      else {
        iVar3 = memcmp(__s2,*(void **)(p_Var5 + 0x20),__n_00);
        if (iVar3 == 0) goto LAB_0019f090;
      }
      if (-1 < iVar3) goto LAB_0019f0f4;
    }
  }
  psStack_60 = param_1;
  p_Var5 = _Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
           ::
           _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<std::__cxx11::string&&>,std::tuple<>>
                     ((_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
                       *)pcVar4,p_Var5,PTR_piecewise_construct_00715990,&psStack_60);
LAB_0019f0f4:
  return (char *)(p_Var5 + 0x40);
}


