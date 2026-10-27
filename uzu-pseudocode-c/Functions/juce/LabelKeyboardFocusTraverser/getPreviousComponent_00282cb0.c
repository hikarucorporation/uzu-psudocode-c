// Function : getPreviousComponent
// Namespace: juce:LabelKeyboardFocusTraverser
// Entry    : 00282cb0
// Prototype: long getPreviousComponent(LabelKeyboardFocusTraverser * this, long param_1)
// Body     : 00282cb0 - 00282d5f


/* juce::LabelKeyboardFocusTraverser::getPreviousComponent(juce::Component*) */

long __thiscall
juce::LabelKeyboardFocusTraverser::getPreviousComponent
          (LabelKeyboardFocusTraverser *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(*(long *)(this + 8) + 0x1c0) != 0) &&
     (*(long *)(*(long *)(this + 8) + 0x1c0) + 8 == param_1)) {
    param_1 = *(long *)(param_1 + 0x30);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  while (lVar2 = lVar1, lVar2 != 0) {
    if (((*(ushort *)(lVar2 + 0xe8) & 0x80) != 0) ||
       (lVar1 = *(long *)(lVar2 + 0x30), *(long *)(lVar2 + 0x30) == 0)) goto LAB_00282d08;
  }
  lVar2 = 0;
LAB_00282d08:
  do {
    do {
      param_1 = detail::FocusHelpers::navigateFocus
                          (param_1,lVar2,1,Component::isKeyboardFocusContainer,1);
      if (param_1 == 0) {
        return 0;
      }
    } while ((*(ushort *)(param_1 + 0xe8) & 0x8020) != 0x20);
    lVar1 = param_1;
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x30);
      if (lVar1 == lVar2) {
        return param_1;
      }
    }
  } while( true );
}


