// Function : sendExternalDragAndDropMessage
// Namespace: juce:X11DragState
// Entry    : 002cd1d0
// Prototype: bool sendExternalDragAndDropMessage(X11DragState * this, undefined4 * param_1)
// Body     : 002cd1d0 - 002cd286


/* juce::X11DragState::sendExternalDragAndDropMessage(XClientMessageEvent&) */

bool __thiscall
juce::X11DragState::sendExternalDragAndDropMessage(X11DragState *this,undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  XWindowSystem *pXVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 002cd1dd to 002cd1e8 has its CatchHandler @ 002cd28f */
  pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  uVar1 = *(undefined8 *)(pXVar3 + 0x148);
  *param_1 = 0x21;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
  param_1[0xc] = 0x20;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)this;
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar5 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar4 + 0x210))(lVar5);
  }
                    /* try { // try from 002cd236 to 002cd24e has its CatchHandler @ 002cd297 */
  lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar2 = (**(code **)(lVar5 + 0x2d0))(uVar1,*(undefined8 *)(this + 8),0,0,param_1);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar5 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
                    /* try { // try from 002cd269 to 002cd276 has its CatchHandler @ 002cd287 */
    lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar4 + 0x360))(lVar5);
  }
  return iVar2 != 0;
}


