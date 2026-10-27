// Function : updateDraggedFileList
// Namespace: juce:X11DragState
// Entry    : 002cc8e0
// Prototype: undefined updateDraggedFileList(X11DragState * this, long param_1, undefined8 param_2)
// Body     : 002cc8e0 - 002cc9c3


/* juce::X11DragState::updateDraggedFileList(XClientMessageEvent const&, unsigned long) */

void __thiscall
juce::X11DragState::updateDraggedFileList(X11DragState *this,long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  XWindowSystem *pXVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((*(long *)(this + 0x10) != 0) && (*(long *)(this + 0x28) != 0)) {
                    /* try { // try from 002cc90a to 002cc915 has its CatchHandler @ 002cc9d4 */
    pXVar5 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar1 = *(undefined8 *)(pXVar5 + 0x148);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar7 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
      lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar6 + 0x210))(lVar7);
    }
                    /* try { // try from 002cc943 to 002cc947 has its CatchHandler @ 002cc9dc */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar2 = *(code **)(lVar7 + 0x60);
                    /* try { // try from 002cc94c to 002cc957 has its CatchHandler @ 002cc9cc */
    pXVar5 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar3 = *(undefined8 *)(pXVar5 + 0xa8);
    uVar4 = *(undefined8 *)(this + 0x28);
                    /* try { // try from 002cc963 to 002cc98e has its CatchHandler @ 002cc9dc */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar8 = (**(code **)(lVar7 + 0x1f0))(uVar1,"JXSelectionWindowProperty",0);
    (*pcVar2)(uVar1,uVar3,uVar4,uVar8,param_2,*(undefined8 *)(param_1 + 0x48));
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar7 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
                    /* try { // try from 002cc9a7 to 002cc9b4 has its CatchHandler @ 002cc9c4 */
      lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar6 + 0x360))(lVar7);
    }
  }
  return;
}


