// Function : setPitchName
// Namespace: Steinberg:Vst:ProgramListWithPitchNames
// Entry    : 00194720
// Prototype: undefined8 setPitchName(ProgramListWithPitchNames * this, uint param_1, short param_2, u16string * param_3)
// Body     : 00194720 - 00194878


/* Steinberg::Vst::ProgramListWithPitchNames::setPitchName(int, short, char16_t const*) */

undefined8 __thiscall
Steinberg::Vst::ProgramListWithPitchNames::setPitchName
          (ProgramListWithPitchNames *this,uint param_1,short param_2,u16string *param_3)

{
  ushort uVar1;
  ulong uVar2;
  _Rb_tree_node_base *p_Var3;
  ulong uVar4;
  _Rb_tree_node_base *p_Var5;
  int iVar6;
  _Rb_tree_node_base *p_Var7;
  ulong uVar8;
  _Rb_tree_node_base *p_Var9;
  long lVar10;
  long lVar11;
  short local_20 [4];
  u16string *local_18;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  if (*(int *)(this + 0x110) <= (int)param_1) {
    return 0;
  }
  lVar10 = *(long *)(this + 0x150);
  lVar11 = (ulong)param_1 * 0x30;
  p_Var3 = *(_Rb_tree_node_base **)(lVar10 + 0x10 + lVar11);
  p_Var7 = (_Rb_tree_node_base *)(lVar10 + lVar11 + 8);
  local_20[0] = param_2;
  local_18 = param_3;
  if (p_Var3 == (_Rb_tree_node_base *)0x0) {
LAB_0019479a:
    std::
    _Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
    ::_M_emplace_hint_unique<std::pair<short,char16_t_const*>>
              ((_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
                *)(lVar10 + lVar11),p_Var7,local_20);
  }
  else {
    p_Var9 = p_Var7;
    do {
      p_Var5 = p_Var3 + 0x18;
      if (param_2 <= *(short *)(p_Var3 + 0x20)) {
        p_Var5 = p_Var3 + 0x10;
        p_Var9 = p_Var3;
      }
      p_Var3 = *(_Rb_tree_node_base **)p_Var5;
    } while (p_Var3 != (_Rb_tree_node_base *)0x0);
    if (p_Var9 == p_Var7) goto LAB_0019479a;
    if (param_2 < *(short *)(p_Var9 + 0x20)) {
      p_Var7 = p_Var9;
      goto LAB_0019479a;
    }
    uVar2 = *(ulong *)(p_Var9 + 0x30);
    uVar4 = 0xffffffffffffffff;
    do {
      lVar10 = uVar4 * 2;
      uVar4 = uVar4 + 1;
    } while (*(short *)(param_3 + lVar10 + 2) != 0);
    lVar10 = uVar2 - uVar4;
    uVar8 = uVar2;
    if (uVar4 <= uVar2 && lVar10 != 0) {
      uVar8 = uVar4;
    }
    if (uVar8 != 0) {
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      uVar8 = 0;
      do {
        uVar1 = *(ushort *)(*(long *)(p_Var9 + 0x28) + uVar8 * 2);
        if ((uVar1 < *(ushort *)(param_3 + uVar8 * 2)) || (*(ushort *)(param_3 + uVar8 * 2) < uVar1)
           ) goto LAB_00194852;
        uVar8 = uVar8 + 1;
      } while (uVar4 != uVar8);
    }
    lVar11 = -0x80000000;
    if (-0x80000000 < lVar10) {
      lVar11 = lVar10;
    }
    iVar6 = 0x7fffffff;
    if (lVar11 < 0x7fffffff) {
      iVar6 = (int)lVar11;
    }
    if (iVar6 == 0) goto LAB_001947b8;
LAB_00194852:
    uVar4 = 0xffffffffffffffff;
    do {
      lVar10 = uVar4 * 2;
      uVar4 = uVar4 + 1;
    } while (*(short *)(param_3 + lVar10 + 2) != 0);
    std::__cxx11::u16string::_M_replace((u16string *)(p_Var9 + 0x28),0,uVar2,param_3,uVar4);
  }
  lVar11 = (**(code **)(*(long *)this + 0x58))(this,1);
LAB_001947b8:
  return CONCAT71((int7)((ulong)lVar11 >> 8),1);
}


