// Function : internalChildKeyboardFocusChange
// Namespace: juce:Component
// Entry    : 002206c0
// Prototype: undefined internalChildKeyboardFocusChange(Component * this, undefined4 param_1, long * param_2)
// Body     : 002206c0 - 00220810


/* juce::Component::internalChildKeyboardFocusChange(juce::Component::FocusChangeType,
   juce::WeakReference<juce::Component, juce::ReferenceCountedObject> const&) */

void __thiscall
juce::Component::internalChildKeyboardFocusChange(Component *this,undefined4 param_1,long *param_2)

{
  long *plVar1;
  Component *pCVar2;
  long *plVar3;
  uint3 uVar4;
  ushort uVar5;
  long *local_20;
  
  for (pCVar2 = currentlyFocusedComponent; pCVar2 != this; pCVar2 = *(Component **)(pCVar2 + 0x30))
  {
    if (pCVar2 == (Component *)0x0) {
      uVar4 = *(uint3 *)(this + 0xe8);
      uVar5 = 0;
      if ((uVar4 & 0x100) != 0) goto LAB_0022072b;
      goto LAB_00220764;
    }
  }
  uVar4 = *(uint3 *)(this + 0xe8);
  uVar5 = 0x100;
  if ((uVar4 & 0x100) == 0) {
LAB_0022072b:
    this[0xea] = SUB31(uVar4 >> 0x10,0);
    *(ushort *)(this + 0xe8) = (ushort)uVar4 & 0xfeff | uVar5;
    (**(code **)(*(long *)this + 0x138))(this,param_1);
    if (*param_2 == 0) {
      return;
    }
    if (*(long *)(*param_2 + 0x10) == 0) {
      return;
    }
  }
LAB_00220764:
  pCVar2 = *(Component **)(this + 0x30);
  if (pCVar2 == (Component *)0x0) {
    return;
  }
  local_20 = *(long **)(pCVar2 + 0xd8);
  if (local_20 == (long *)0x0) {
    local_20 = operator_new(0x18);
    *(undefined4 *)(local_20 + 1) = 0;
    *local_20 = (long)&PTR__ReferenceCountedObject_00714b80;
    local_20[2] = (long)pCVar2;
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    plVar3 = *(long **)(pCVar2 + 0xd8);
    *(long **)(pCVar2 + 0xd8) = local_20;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
      local_20 = *(long **)(pCVar2 + 0xd8);
      if (local_20 == (long *)0x0) goto LAB_00220783;
    }
  }
  LOCK();
  *(int *)(local_20 + 1) = (int)local_20[1] + 1;
  UNLOCK();
LAB_00220783:
                    /* try { // try from 00220783 to 00220792 has its CatchHandler @ 00220811 */
  internalChildKeyboardFocusChange(pCVar2,param_1,(long *)&local_20);
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*local_20 + 8))();
    }
  }
  return;
}


