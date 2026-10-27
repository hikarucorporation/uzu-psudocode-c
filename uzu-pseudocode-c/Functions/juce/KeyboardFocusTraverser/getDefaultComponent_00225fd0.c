// Function : getDefaultComponent
// Namespace: juce:KeyboardFocusTraverser
// Entry    : 00225fd0
// Prototype: long getDefaultComponent(KeyboardFocusTraverser * this, long param_1)
// Body     : 00225fd0 - 0022605c


/* juce::KeyboardFocusTraverser::getDefaultComponent(juce::Component*) */

long __thiscall
juce::KeyboardFocusTraverser::getDefaultComponent(KeyboardFocusTraverser *this,long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_28;
  long *local_20;
  
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
            goto LAB_00226043;
          }
        }
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != local_20);
  }
  lVar3 = 0;
  if (local_28 != (long *)0x0) {
LAB_00226043:
    operator_delete(local_28);
  }
  return lVar3;
}


