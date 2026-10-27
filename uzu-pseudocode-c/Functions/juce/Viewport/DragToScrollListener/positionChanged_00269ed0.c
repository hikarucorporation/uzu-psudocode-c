// Function : positionChanged
// Namespace: juce:Viewport:DragToScrollListener
// Entry    : 00269ed0
// Prototype: undefined positionChanged(long param_1)
// Body     : 00269ed0 - 00269f30


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Viewport::DragToScrollListener::positionChanged(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>&,
   double) */

void __cdecl juce::Viewport::DragToScrollListener::positionChanged(long param_1)

{
  long lVar1;
  Component *this;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(Viewport **)(param_1 + 0x10) + 0x200);
  if ((lVar1 == 0) || (this = *(Component **)(lVar1 + 0x10), this == (Component *)0x0)) {
    return;
  }
  uVar2 = viewportPosToCompPos
                    (*(Viewport **)(param_1 + 0x10),
                     CONCAT44(*(int *)(param_1 + 0x15c) - (int)*(double *)(param_1 + 0xf8),
                              *(int *)(param_1 + 0x158) - (int)*(double *)(param_1 + 0x58)));
  Component::setBounds
            (this,(int)uVar2,(int)((ulong)uVar2 >> 0x20),*(int *)(this + 0x40),*(int *)(this + 0x44)
            );
  return;
}


