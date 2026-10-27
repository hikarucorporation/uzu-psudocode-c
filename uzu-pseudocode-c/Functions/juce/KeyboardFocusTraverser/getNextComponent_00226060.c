// Function : getNextComponent
// Namespace: juce:KeyboardFocusTraverser
// Entry    : 00226060
// Prototype: long getNextComponent(undefined8 param_1_00, long param_2)
// Body     : 00226060 - 002260ef


/* juce::KeyboardFocusTraverser::getNextComponent(juce::Component*) */

long __thiscall juce::KeyboardFocusTraverser::getNextComponent(undefined8 param_1_00,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x30);
  while (lVar2 = lVar1, lVar2 != 0) {
    if (((*(ushort *)(lVar2 + 0xe8) & 0x80) != 0) ||
       (lVar1 = *(long *)(lVar2 + 0x30), *(long *)(lVar2 + 0x30) == 0)) goto LAB_00226098;
  }
  lVar2 = 0;
LAB_00226098:
  do {
    do {
      param_2 = detail::FocusHelpers::navigateFocus
                          (param_2,lVar2,0,Component::isKeyboardFocusContainer,1);
      if (param_2 == 0) {
        return 0;
      }
    } while ((*(ushort *)(param_2 + 0xe8) & 0x8020) != 0x20);
    lVar1 = param_2;
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x30);
      if (lVar1 == lVar2) {
        return param_2;
      }
    }
  } while( true );
}


