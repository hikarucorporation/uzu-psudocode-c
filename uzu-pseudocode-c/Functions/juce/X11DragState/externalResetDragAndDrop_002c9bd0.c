// Function : externalResetDragAndDrop
// Namespace: juce:X11DragState
// Entry    : 002c9bd0
// Prototype: undefined externalResetDragAndDrop(X11DragState * this)
// Body     : 002c9bd0 - 002c9c6f


/* juce::X11DragState::externalResetDragAndDrop() */

void __thiscall juce::X11DragState::externalResetDragAndDrop(X11DragState *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  XWindowSystem *pXVar4;
  
  if (this[0x1d] != (X11DragState)0x0) {
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar3 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
      lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar2 + 0x210))(lVar3);
    }
                    /* try { // try from 002c9c03 to 002c9c07 has its CatchHandler @ 002c9c80 */
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar1 = *(code **)(lVar3 + 0x350);
                    /* try { // try from 002c9c0f to 002c9c1a has its CatchHandler @ 002c9c78 */
    pXVar4 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
                    /* try { // try from 002c9c22 to 002c9c26 has its CatchHandler @ 002c9c80 */
    (*pcVar1)(*(undefined8 *)(pXVar4 + 0x148),0);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar3 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
                    /* try { // try from 002c9c3f to 002c9c4c has its CatchHandler @ 002c9c70 */
      lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar2 + 0x360))(lVar3);
    }
  }
  if (*(long *)(this + 0x98) != 0) {
    (**(code **)(this + 0xa0))(this + 0x88);
  }
  this[0x1d] = (X11DragState)0x0;
  return;
}


