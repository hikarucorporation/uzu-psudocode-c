// Function : removePitchName
// Namespace: Steinberg:Vst:ProgramListWithPitchNames
// Entry    : 00194880
// Prototype: undefined8 removePitchName(ProgramListWithPitchNames * this, uint param_1, short param_2)
// Body     : 00194880 - 001949bf


/* Steinberg::Vst::ProgramListWithPitchNames::removePitchName(int, short) */

undefined8 __thiscall
Steinberg::Vst::ProgramListWithPitchNames::removePitchName
          (ProgramListWithPitchNames *this,uint param_1,short param_2)

{
  _Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
  *this_00;
  long lVar1;
  ulong uVar2;
  long lVar3;
  _Rb_tree_node_base *p_Var4;
  undefined8 uVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  ulong uVar8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)(this + 0x110))) {
    uVar8 = (ulong)param_1;
    lVar1 = *(long *)(this + 0x150);
    uVar2 = (*(long *)(this + 0x158) - lVar1 >> 4) * -0x5555555555555555;
    if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__throw_out_of_range_fmt
                ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar8,
                 uVar2);
    }
    lVar3 = uVar8 * 0x30;
    this_00 = (_Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
               *)(lVar1 + lVar3);
    p_Var9 = (_Rb_tree_node_base *)(lVar1 + lVar3 + 8);
    p_Var7 = *(_Rb_tree_node_base **)(lVar1 + 0x10 + lVar3);
    if (p_Var7 != (_Rb_tree_node_base *)0x0) {
      p_Var4 = p_Var9;
LAB_001948ff:
      do {
        p_Var9 = p_Var7;
        if (*(short *)(p_Var9 + 0x20) < param_2) goto LAB_001948f0;
        p_Var10 = p_Var9;
        if (*(short *)(p_Var9 + 0x20) <= param_2) {
          p_Var6 = *(_Rb_tree_node_base **)(p_Var9 + 0x18);
          p_Var7 = *(_Rb_tree_node_base **)(p_Var9 + 0x10);
          while (p_Var7 != (_Rb_tree_node_base *)0x0) {
            p_Var9 = p_Var7 + 0x18;
            if (param_2 <= *(short *)(p_Var7 + 0x20)) {
              p_Var9 = p_Var7 + 0x10;
              p_Var10 = p_Var7;
            }
            p_Var7 = *(_Rb_tree_node_base **)p_Var9;
          }
          while( true ) {
            p_Var9 = p_Var4;
            if (p_Var6 == (_Rb_tree_node_base *)0x0) break;
            p_Var7 = p_Var6 + 0x18;
            if (param_2 < *(short *)(p_Var6 + 0x20)) {
              p_Var7 = p_Var6 + 0x10;
              p_Var4 = p_Var6;
            }
            p_Var6 = *(_Rb_tree_node_base **)p_Var7;
          }
          break;
        }
        p_Var4 = p_Var9;
        p_Var7 = *(_Rb_tree_node_base **)(p_Var9 + 0x10);
      } while (*(_Rb_tree_node_base **)(p_Var9 + 0x10) != (_Rb_tree_node_base *)0x0);
      goto LAB_0019497c;
    }
    p_Var10 = p_Var9;
LAB_0019497c:
    lVar1 = *(long *)(this_00 + 0x28);
    std::
    _Rb_tree<short,std::pair<short_const,std::__cxx11::u16string>,std::_Select1st<std::pair<short_const,std::__cxx11::u16string>>,std::less<short>,std::allocator<std::pair<short_const,std::__cxx11::u16string>>>
    ::_M_erase_aux(this_00,p_Var10,p_Var9);
    if (lVar1 != *(long *)(this_00 + 0x28)) {
      uVar5 = (**(code **)(*(long *)this + 0x58))(this,1);
      return CONCAT71((int7)((ulong)uVar5 >> 8),1);
    }
  }
  return 0;
LAB_001948f0:
  p_Var6 = p_Var9 + 0x18;
  p_Var9 = p_Var4;
  p_Var7 = *(_Rb_tree_node_base **)p_Var6;
  p_Var10 = p_Var4;
  if (*(_Rb_tree_node_base **)p_Var6 == (_Rb_tree_node_base *)0x0) goto LAB_0019497c;
  goto LAB_001948ff;
}


