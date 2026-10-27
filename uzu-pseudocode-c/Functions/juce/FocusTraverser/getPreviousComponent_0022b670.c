// Function : getPreviousComponent
// Namespace: juce:FocusTraverser
// Entry    : 0022b670
// Prototype: undefined getPreviousComponent(FocusTraverser * this, long param_1)
// Body     : 0022b670 - 0022b6b8


/* juce::FocusTraverser::getPreviousComponent(juce::Component*) */

void __thiscall juce::FocusTraverser::getPreviousComponent(FocusTraverser *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  while (lVar2 = lVar1, lVar2 != 0) {
    if (((*(ushort *)(lVar2 + 0xe8) & 0x40) != 0) ||
       (lVar1 = *(long *)(lVar2 + 0x30), *(long *)(lVar2 + 0x30) == 0)) goto LAB_0022b6a1;
  }
  lVar2 = 0;
LAB_0022b6a1:
  detail::FocusHelpers::navigateFocus
            (param_1,lVar2,1,Component::isFocusContainer,*(int *)(this + 8));
  return;
}


