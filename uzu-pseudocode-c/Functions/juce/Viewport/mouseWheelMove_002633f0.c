// Function : mouseWheelMove
// Namespace: juce:Viewport
// Entry    : 002633f0
// Prototype: undefined mouseWheelMove(Viewport * this, ulong * param_1, float * param_2)
// Body     : 002633f0 - 00263480


/* juce::Viewport::mouseWheelMove(juce::MouseEvent const&, juce::MouseWheelDetails const&) */

void __thiscall juce::Viewport::mouseWheelMove(Viewport *this,ulong *param_1,float *param_2)

{
  undefined8 uVar1;
  Viewport *pVVar2;
  float local_80 [24];
  
  if (((Viewport *)param_1[6] == this) &&
     (uVar1 = useMouseWheelMoveIfNeeded(*param_2,param_2[1],this,(ulong)(uint)param_1[2]),
     (char)uVar1 == '\0')) {
    while (this = *(Viewport **)(this + 0x30), this != (Viewport *)0x0) {
      pVVar2 = this;
      while ((*(ushort *)(pVVar2 + 0xe8) & 0x8000) == 0) {
        pVVar2 = *(Viewport **)(pVVar2 + 0x30);
        if (pVVar2 == (Viewport *)0x0) {
          if (this == (Viewport *)0x0) {
            return;
          }
          MouseEvent::getEventRelativeTo(local_80,param_1,(long *)this);
          (**(code **)(*(long *)this + 0x48))(this,local_80,param_2);
          return;
        }
      }
    }
  }
  return;
}


