// Function : removeParameter
// Namespace: Steinberg:Vst:ParameterContainer
// Entry    : 00196390
// Prototype: undefined8 removeParameter(ParameterContainer * this, uint param_1)
// Body     : 00196390 - 001964cf


/* Steinberg::Vst::ParameterContainer::removeParameter(unsigned int) */

undefined8 __thiscall
Steinberg::Vst::ParameterContainer::removeParameter(ParameterContainer *this,uint param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  _Rb_tree_node_base *p_Var4;
  void *pvVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree_node_base *p_Var7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  _Rb_tree_node_base *p_Var12;
  
  plVar1 = *(long **)this;
  if ((plVar1 != (long *)0x0) &&
     (p_Var4 = *(_Rb_tree_node_base **)(this + 0x18), p_Var4 != (_Rb_tree_node_base *)0x0)) {
    p_Var12 = (_Rb_tree_node_base *)(this + 0x10);
    p_Var7 = p_Var12;
    do {
      p_Var6 = p_Var4 + 0x18;
      if (param_1 <= *(uint *)(p_Var4 + 0x20)) {
        p_Var6 = p_Var4 + 0x10;
        p_Var7 = p_Var4;
      }
      p_Var4 = *(_Rb_tree_node_base **)p_Var6;
    } while (p_Var4 != (_Rb_tree_node_base *)0x0);
    if (p_Var7 != p_Var12) {
      if (param_1 < *(uint *)(p_Var7 + 0x20)) {
        p_Var7 = p_Var12;
      }
      if (p_Var7 != p_Var12) {
        lVar9 = plVar1[1];
        lVar10 = *plVar1 + *(long *)(p_Var7 + 0x28) * 8 + 8;
        if (lVar10 != lVar9) {
          uVar8 = lVar9 - lVar10;
          lVar10 = lVar9;
          if (0 < (long)uVar8) {
            plVar11 = (long *)(*plVar1 + *(long *)(p_Var7 + 0x28) * 8);
            lVar9 = (uVar8 >> 3) + 1;
            do {
              plVar2 = (long *)*plVar11;
              plVar3 = (long *)plVar11[1];
              if (plVar2 != plVar3) {
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 0x10))();
                }
                *plVar11 = (long)plVar3;
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 8))(plVar3);
                }
              }
              plVar11 = plVar11 + 1;
              lVar9 = lVar9 + -1;
            } while (1 < lVar9);
            lVar10 = plVar1[1];
          }
        }
        plVar1[1] = lVar10 + -8;
        if (*(long **)(lVar10 + -8) != (long *)0x0) {
                    /* try { // try from 0019649c to 0019649e has its CatchHandler @ 001964d0 */
          (**(code **)(**(long **)(lVar10 + -8) + 0x10))();
          *(undefined8 *)(lVar10 + -8) = 0;
        }
        pvVar5 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var7,p_Var12);
        operator_delete(pvVar5);
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      }
    }
  }
  return 0;
}


