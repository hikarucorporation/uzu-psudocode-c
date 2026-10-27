// Function : sendDragAndDropMessage
// Namespace: juce:X11DragState
// Entry    : 002cbda0
// Prototype: undefined sendDragAndDropMessage(X11DragState * this, undefined4 * param_1)
// Body     : 002cbda0 - 002cbe51


/* juce::X11DragState::sendDragAndDropMessage(XClientMessageEvent&) */

void __thiscall juce::X11DragState::sendDragAndDropMessage(X11DragState *this,undefined4 *param_1)

{
  undefined8 uVar1;
  XWindowSystem *pXVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 002cbdae to 002cbdb9 has its CatchHandler @ 002cbe5a */
  pXVar2 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  uVar1 = *(undefined8 *)(pXVar2 + 0x148);
  *param_1 = 0x21;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 0x10);
  param_1[0xc] = 0x20;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)this;
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar4 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar4 != 0)) {
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar3 + 0x210))(lVar4);
  }
                    /* try { // try from 002cbe07 to 002cbe1f has its CatchHandler @ 002cbe62 */
  lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar4 + 0x2d0))(uVar1,*(undefined8 *)(this + 0x10),0,0,param_1);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar4 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar4 != 0)) {
                    /* try { // try from 002cbe38 to 002cbe45 has its CatchHandler @ 002cbe52 */
    lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar3 + 0x360))(lVar4);
  }
  return;
}


