// Function : positionChanged
// Namespace: juce:Viewport:DragToScrollListener
// Entry    : 00269f70
// Prototype: undefined positionChanged(DragToScrollListener * this)
// Body     : 00269f70 - 00269fd0


/* non-virtual thunk to
   juce::Viewport::DragToScrollListener::positionChanged(juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>&,
   double) */

void __thiscall juce::Viewport::DragToScrollListener::positionChanged(DragToScrollListener *this)

{
  long lVar1;
  Component *this_00;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(Viewport **)(this + 8) + 0x200);
  if ((lVar1 == 0) || (this_00 = *(Component **)(lVar1 + 0x10), this_00 == (Component *)0x0)) {
    return;
  }
  uVar2 = viewportPosToCompPos
                    (*(Viewport **)(this + 8),
                     CONCAT44(*(int *)(this + 0x154) - (int)*(double *)(this + 0xf0),
                              *(int *)(this + 0x150) - (int)*(double *)(this + 0x50)));
  Component::setBounds
            (this_00,(int)uVar2,(int)((ulong)uVar2 >> 0x20),*(int *)(this_00 + 0x40),
             *(int *)(this_00 + 0x44));
  return;
}


