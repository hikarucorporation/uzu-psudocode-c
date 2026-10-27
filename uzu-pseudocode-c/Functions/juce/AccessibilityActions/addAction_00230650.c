// Function : addAction
// Namespace: juce:AccessibilityActions
// Entry    : 00230650
// Prototype: AccessibilityActions * addAction(AccessibilityActions * this, int param_1, undefined8 * param_2)
// Body     : 00230650 - 00230989


/* juce::AccessibilityActions::addAction(juce::AccessibilityActionType, std::function<void ()>) */

AccessibilityActions * __thiscall
juce::AccessibilityActions::addAction(AccessibilityActions *this,int param_1,undefined8 *param_2)

{
  _Rb_tree_node_base *p_Var1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  _Rb_tree_node_base *p_Var7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  _Rb_tree_node_base *p_Var11;
  undefined8 local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  p_Var7 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  p_Var11 = p_Var1;
  if (p_Var7 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var8 = p_Var7 + 0x18;
      if (param_1 <= *(int *)(p_Var7 + 0x20)) {
        p_Var8 = p_Var7 + 0x10;
        p_Var11 = p_Var7;
      }
      p_Var7 = *(_Rb_tree_node_base **)p_Var8;
    } while (p_Var7 != (_Rb_tree_node_base *)0x0);
    if (p_Var11 == p_Var1) {
      p_Var11 = p_Var1;
    }
    else if (*(int *)(p_Var11 + 0x20) <= param_1) goto LAB_00230902;
  }
  p_Var8 = operator_new(0x48);
  *(int *)(p_Var8 + 0x20) = param_1;
  *(undefined8 *)(p_Var8 + 0x28) = 0;
  *(undefined8 *)(p_Var8 + 0x30) = 0;
  *(undefined8 *)(p_Var8 + 0x38) = 0;
  *(undefined8 *)(p_Var8 + 0x40) = 0;
  p_Var7 = p_Var1;
  if (p_Var11 == p_Var1) {
    if ((*(long *)(this + 0x28) == 0) ||
       (p_Var9 = *(_Rb_tree_node_base **)(this + 0x20), param_1 <= *(int *)(p_Var9 + 0x20))) {
      p_Var11 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
        p_Var9 = p_Var1;
        if (p_Var1 != *(_Rb_tree_node_base **)(this + 0x18)) {
LAB_00230804:
          p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var7);
          goto LAB_00230812;
        }
      }
      else {
        do {
          p_Var9 = p_Var11;
          p_Var11 = *(_Rb_tree_node_base **)
                     (p_Var9 + (ulong)(*(int *)(p_Var9 + 0x20) <= param_1) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var9 + (ulong)(*(int *)(p_Var9 + 0x20) <= param_1) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var7 = p_Var9;
        if (*(int *)(p_Var9 + 0x20) <= param_1) {
LAB_00230812:
          if (param_1 <= *(int *)(p_Var9 + 0x20)) {
            p_Var11 = p_Var9;
            goto LAB_002308cf;
          }
          goto LAB_00230822;
        }
        if (p_Var9 != *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_00230804;
      }
LAB_002308ab:
      p_Var11 = (_Rb_tree_node_base *)0x0;
      if (p_Var9 == (_Rb_tree_node_base *)0x0) goto LAB_002308cf;
    }
    else {
LAB_002307ab:
      p_Var11 = (_Rb_tree_node_base *)0x0;
    }
LAB_002308b6:
    bVar6 = true;
    if (p_Var11 == (_Rb_tree_node_base *)0x0) {
      p_Var11 = p_Var9;
      if (p_Var9 != p_Var1) {
        bVar6 = param_1 < *(int *)(p_Var9 + 0x20);
      }
    }
    else {
      p_Var11 = p_Var9;
    }
LAB_002308e6:
    std::_Rb_tree_insert_and_rebalance(bVar6,p_Var8,p_Var11,p_Var1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var11 = p_Var8;
  }
  else {
    p_Var9 = p_Var11;
    if (param_1 < *(int *)(p_Var11 + 0x20)) {
      p_Var10 = *(_Rb_tree_node_base **)(this + 0x18);
      if (p_Var10 == p_Var11) {
        bVar6 = true;
        goto LAB_002308e6;
      }
      p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var11);
      if (*(int *)(p_Var9 + 0x20) < param_1) {
        if (*(long *)(p_Var9 + 0x18) == 0) {
          p_Var11 = (_Rb_tree_node_base *)0x0;
        }
        else {
          p_Var9 = p_Var11;
        }
        goto LAB_002308b6;
      }
      p_Var9 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_0023086b:
        p_Var9 = p_Var10;
        if (p_Var7 == p_Var10) goto LAB_002308ab;
        p_Var11 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var7);
      }
      else {
        do {
          p_Var11 = p_Var9;
          p_Var9 = *(_Rb_tree_node_base **)
                    (p_Var11 + (ulong)(*(int *)(p_Var11 + 0x20) <= param_1) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var11 + (ulong)(*(int *)(p_Var11 + 0x20) <= param_1) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var7 = p_Var11;
        if (param_1 < *(int *)(p_Var11 + 0x20)) goto LAB_0023086b;
      }
      if (*(int *)(p_Var11 + 0x20) < param_1) {
LAB_00230822:
        p_Var9 = p_Var7;
        p_Var11 = (_Rb_tree_node_base *)0x0;
        if (p_Var9 != (_Rb_tree_node_base *)0x0) goto LAB_002308b6;
      }
    }
    else if (*(int *)(p_Var11 + 0x20) < param_1) {
      if (*(_Rb_tree_node_base **)(this + 0x20) == p_Var11) goto LAB_002307ab;
      p_Var10 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var11);
      if (*(int *)(p_Var10 + 0x20) <= param_1) {
        p_Var11 = *(_Rb_tree_node_base **)(this + 0x10);
        if (*(_Rb_tree_node_base **)(this + 0x10) != (_Rb_tree_node_base *)0x0) {
          do {
            p_Var9 = p_Var11;
            p_Var11 = *(_Rb_tree_node_base **)
                       (p_Var9 + (ulong)(*(int *)(p_Var9 + 0x20) <= param_1) * 8 + 0x10);
          } while (*(_Rb_tree_node_base **)
                    (p_Var9 + (ulong)(*(int *)(p_Var9 + 0x20) <= param_1) * 8 + 0x10) !=
                   (_Rb_tree_node_base *)0x0);
          p_Var7 = p_Var9;
          if (*(int *)(p_Var9 + 0x20) <= param_1) goto LAB_00230812;
        }
        p_Var9 = p_Var7;
        if (p_Var7 != *(_Rb_tree_node_base **)(this + 0x18)) {
          p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var7);
          goto LAB_00230812;
        }
        goto LAB_002308ab;
      }
      p_Var7 = p_Var11 + 0x18;
      p_Var11 = (_Rb_tree_node_base *)0x0;
      if (*(long *)p_Var7 != 0) {
        p_Var9 = p_Var10;
        p_Var11 = p_Var10;
      }
      goto LAB_002308b6;
    }
LAB_002308cf:
    operator_delete(p_Var8);
  }
LAB_00230902:
  local_68 = 0;
  uStack_60 = 0;
  lVar2 = param_2[2];
  uVar3 = param_2[3];
  if (lVar2 != 0) {
    local_68 = *param_2;
    uStack_60 = param_2[1];
    param_2[2] = 0;
    param_2[3] = 0;
  }
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = (undefined4)uStack_60;
  uStack_3c = uStack_60._4_4_;
  uVar4 = *(undefined8 *)(p_Var11 + 0x28);
  uVar5 = *(undefined8 *)(p_Var11 + 0x30);
  *(undefined4 *)(p_Var11 + 0x28) = (undefined4)local_68;
  *(undefined4 *)(p_Var11 + 0x2c) = local_68._4_4_;
  *(undefined4 *)(p_Var11 + 0x30) = (undefined4)uStack_60;
  *(undefined4 *)(p_Var11 + 0x34) = uStack_60._4_4_;
  local_58 = *(code **)(p_Var11 + 0x38);
  *(long *)(p_Var11 + 0x38) = lVar2;
  local_50 = *(undefined8 *)(p_Var11 + 0x40);
  *(undefined8 *)(p_Var11 + 0x40) = uVar3;
  if (local_58 != (code *)0x0) {
                    /* try { // try from 00230969 to 00230977 has its CatchHandler @ 0023098a */
    local_68 = uVar4;
    uStack_60 = uVar5;
    (*local_58)(&local_68,&local_68,3);
  }
  return this;
}


