// Function : mouseWheelMove
// Namespace: juce:Component
// Entry    : 00222920
// Prototype: undefined mouseWheelMove(Component * this, ulong * param_1, undefined8 param_2)
// Body     : 00222920 - 00222996


/* juce::Component::mouseWheelMove(juce::MouseEvent const&, juce::MouseWheelDetails const&) */

void __thiscall juce::Component::mouseWheelMove(Component *this,ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  float afStack_78 [24];
  
  plVar1 = *(long **)(this + 0x30);
  do {
    if (plVar1 == (long *)0x0) {
      return;
    }
    plVar2 = plVar1;
    while ((*(ushort *)(plVar2 + 0x1d) & 0x8000) == 0) {
      plVar2 = (long *)plVar2[6];
      if (plVar2 == (long *)0x0) {
        if (plVar1 == (long *)0x0) {
          return;
        }
        MouseEvent::getEventRelativeTo(afStack_78,param_1,plVar1);
        (**(code **)(*plVar1 + 0x48))(plVar1,afStack_78,param_2);
        return;
      }
    }
    plVar1 = (long *)plVar1[6];
  } while( true );
}


