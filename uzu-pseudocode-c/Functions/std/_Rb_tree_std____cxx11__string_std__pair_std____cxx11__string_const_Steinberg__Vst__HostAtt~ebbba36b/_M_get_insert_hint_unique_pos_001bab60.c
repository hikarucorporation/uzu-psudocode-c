// Function : _M_get_insert_hint_unique_pos
// Namespace: std:_Rb_tree_std____cxx11__string_std__pair_std____cxx11__string_const_Steinberg__Vst__HostAtt~ebbba36b
// Entry    : 001bab60
// Prototype: undefined1[16] _M_get_insert_hint_unique_pos(_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>> * this, _Rb_tree_node_base * param_1, undefined8 * param_2)
// Body     : 001bab60 - 001bae12


/* std::_Rb_tree<std::__cxx11::string, std::pair<std::__cxx11::string const,
   Steinberg::Vst::HostAttributeList::Attribute>, std::_Select1st<std::pair<std::__cxx11::string
   const, Steinberg::Vst::HostAttributeList::Attribute> >, std::less<std::__cxx11::string >,
   std::allocator<std::pair<std::__cxx11::string const,
   Steinberg::Vst::HostAttributeList::Attribute> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::__cxx11::string
   const, Steinberg::Vst::HostAttributeList::Attribute> >, std::__cxx11::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::__cxx11::string,std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>,std::_Select1st<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>,std::less<std::__cxx11::string>,std::allocator<std::pair<std::__cxx11::string_const,Steinberg::Vst::HostAttributeList::Attribute>>>
           *this,_Rb_tree_node_base *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong __n;
  long lVar9;
  void *__s1;
  void *__s2;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  if ((_Rb_tree_node_base *)(this + 8) == param_1) {
    if (*(long *)(this + 0x28) != 0) {
      param_1 = *(_Rb_tree_node_base **)(this + 0x20);
      uVar7 = *(ulong *)(param_1 + 0x28);
      uVar8 = param_2[1];
      lVar9 = uVar7 - uVar8;
      if (uVar8 <= uVar7 && lVar9 != 0) {
        uVar7 = uVar8;
      }
      if (uVar7 == 0) {
LAB_001bac92:
        lVar6 = -0x80000000;
        if (-0x80000000 < lVar9) {
          lVar6 = lVar9;
        }
        iVar1 = 0x7fffffff;
        if (lVar6 < 0x7fffffff) {
          iVar1 = (int)lVar6;
        }
      }
      else {
        iVar1 = memcmp(*(void **)(param_1 + 0x20),(void *)*param_2,uVar7);
        if (iVar1 == 0) goto LAB_001bac92;
      }
      if (iVar1 < 0) {
LAB_001bade6:
        p_Var5 = (_Rb_tree_node_base *)0x0;
        p_Var3 = param_1;
        goto LAB_001baded;
      }
    }
  }
  else {
    uVar7 = param_2[1];
    uVar8 = *(ulong *)(param_1 + 0x28);
    uVar10 = uVar7 - uVar8;
    __n = uVar7;
    if (uVar8 <= uVar7 && uVar10 != 0) {
      __n = uVar8;
    }
    p_Var5 = param_1;
    p_Var3 = param_1;
    if (__n == 0) {
LAB_001babee:
      uVar2 = 0xffffffff80000000;
      if (-0x80000000 < (long)uVar10) {
        uVar2 = uVar10;
      }
      uVar10 = 0;
      if ((long)uVar2 < 0x7fffffff) {
        uVar10 = uVar2;
      }
      if ((uVar10 & 0x80000000) == 0) {
        if (__n != 0) {
          __s1 = (void *)*param_2;
          __s2 = *(void **)(param_1 + 0x20);
          goto LAB_001bac30;
        }
LAB_001bad46:
        lVar9 = -0x80000000;
        if (-0x80000000 < (long)(uVar8 - uVar7)) {
          lVar9 = uVar8 - uVar7;
        }
        iVar1 = 0x7fffffff;
        if (lVar9 < 0x7fffffff) {
          iVar1 = (int)lVar9;
        }
        if (-1 < iVar1) {
LAB_001bac4e:
          p_Var3 = (_Rb_tree_node_base *)0x0;
          goto LAB_001baded;
        }
LAB_001bad72:
        if (*(_Rb_tree_node_base **)(this + 0x20) == param_1) goto LAB_001bade6;
        p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
        uVar8 = *(ulong *)(p_Var4 + 0x28);
        lVar9 = uVar7 - uVar8;
        if (uVar8 <= uVar7 && lVar9 != 0) {
          uVar7 = uVar8;
        }
        if (uVar7 == 0) {
LAB_001badb1:
          lVar6 = -0x80000000;
          if (-0x80000000 < lVar9) {
            lVar6 = lVar9;
          }
          iVar1 = 0x7fffffff;
          if (lVar6 < 0x7fffffff) {
            iVar1 = (int)lVar6;
          }
        }
        else {
          iVar1 = memcmp((void *)*param_2,*(void **)(p_Var4 + 0x20),uVar7);
          if (iVar1 == 0) goto LAB_001badb1;
        }
        if (iVar1 < 0) {
          p_Var5 = (_Rb_tree_node_base *)0x0;
          if (*(long *)(param_1 + 0x18) != 0) {
            p_Var5 = p_Var4;
            p_Var3 = p_Var4;
          }
          goto LAB_001baded;
        }
        goto LAB_001baddc;
      }
    }
    else {
      __s2 = *(void **)(param_1 + 0x20);
      __s1 = (void *)*param_2;
      iVar1 = memcmp(__s1,__s2,__n);
      if (iVar1 == 0) goto LAB_001babee;
      if (-1 < iVar1) {
LAB_001bac30:
        iVar1 = memcmp(__s2,__s1,__n);
        if (iVar1 == 0) goto LAB_001bad46;
        if (iVar1 < 0) goto LAB_001bad72;
        goto LAB_001bac4e;
      }
    }
    if (*(_Rb_tree_node_base **)(this + 0x18) == param_1) goto LAB_001baded;
    p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
    uVar8 = *(ulong *)(p_Var3 + 0x28);
    lVar9 = uVar8 - uVar7;
    if (uVar7 <= uVar8 && lVar9 != 0) {
      uVar8 = uVar7;
    }
    if (uVar8 == 0) {
LAB_001bad06:
      lVar6 = -0x80000000;
      if (-0x80000000 < lVar9) {
        lVar6 = lVar9;
      }
      iVar1 = 0x7fffffff;
      if (lVar6 < 0x7fffffff) {
        iVar1 = (int)lVar6;
      }
    }
    else {
      iVar1 = memcmp(*(void **)(p_Var3 + 0x20),(void *)*param_2,uVar8);
      if (iVar1 == 0) goto LAB_001bad06;
    }
    if (iVar1 < 0) {
      if (*(long *)(p_Var3 + 0x18) == 0) {
        p_Var5 = (_Rb_tree_node_base *)0x0;
      }
      else {
        p_Var3 = param_1;
      }
      goto LAB_001baded;
    }
  }
LAB_001baddc:
  auVar11 = _M_get_insert_unique_pos(this,param_2);
  p_Var5 = auVar11._0_8_;
  p_Var3 = auVar11._8_8_;
LAB_001baded:
  auVar11._8_8_ = p_Var3;
  auVar11._0_8_ = p_Var5;
  return auVar11;
}


