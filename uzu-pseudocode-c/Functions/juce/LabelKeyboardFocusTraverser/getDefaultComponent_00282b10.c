// Function : getDefaultComponent
// Namespace: juce:LabelKeyboardFocusTraverser
// Entry    : 00282b10
// Prototype: long getDefaultComponent(LabelKeyboardFocusTraverser * this, long param_1)
// Body     : 00282b10 - 00282bf1


/* juce::LabelKeyboardFocusTraverser::getDefaultComponent(juce::Component*) */

long __thiscall
juce::LabelKeyboardFocusTraverser::getDefaultComponent
          (LabelKeyboardFocusTraverser *this,long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_28;
  long *local_20;
  
  if ((*(long *)(*(long *)(this + 8) + 0x1c0) == 0) || (*(long *)(this + 8) != param_1)) {
    if (param_1 == 0) {
      return 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    do {
      param_1 = lVar3;
      if (param_1 == 0) {
        return 0;
      }
    } while (((*(ushort *)(param_1 + 0xe8) & 0x80) == 0) &&
            (lVar3 = *(long *)(param_1 + 0x30), *(long *)(param_1 + 0x30) != 0));
  }
  (**(code **)(*(long *)this + 0x28))(&local_28,this,param_1);
  if (local_28 != local_20) {
    plVar1 = local_28;
    do {
      lVar3 = *plVar1;
      if ((*(ushort *)(lVar3 + 0xe8) & 0x8020) == 0x20) {
        lVar2 = lVar3;
        while (lVar2 != 0) {
          lVar2 = *(long *)(lVar2 + 0x30);
          if (lVar2 == param_1) {
            if (local_28 == (long *)0x0) {
              return lVar3;
            }
            goto LAB_00282bdd;
          }
        }
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != local_20);
  }
  lVar3 = 0;
  if (local_28 != (long *)0x0) {
LAB_00282bdd:
    operator_delete(local_28);
  }
  return lVar3;
}


