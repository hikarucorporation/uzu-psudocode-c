// Function : handleExternalDragAndDropStatus
// Namespace: juce:X11DragState
// Entry    : 002cc9f0
// Prototype: undefined handleExternalDragAndDropStatus(X11DragState * this, long param_1)
// Body     : 002cc9f0 - 002cca70


/* juce::X11DragState::handleExternalDragAndDropStatus(XClientMessageEvent const&) */

void __thiscall juce::X11DragState::handleExternalDragAndDropStatus(X11DragState *this,long param_1)

{
  uint uVar1;
  uint uVar2;
  XWindowSystem *pXVar3;
  
  if (this[0x1e] != (X11DragState)0x0) {
    *(undefined2 *)(this + 0x1e) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
                    /* try { // try from 002cca0d to 002cca18 has its CatchHandler @ 002cca71 */
    pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    if (((*(ulong *)(param_1 + 0x40) & 1) != 0) &&
       ((*(long *)(param_1 + 0x58) == *(long *)(pXVar3 + 200) ||
        (*(long *)(param_1 + 0x58) == *(long *)(pXVar3 + 0xd0))))) {
      if ((*(ulong *)(param_1 + 0x40) & 2) == 0) {
        uVar1 = *(uint *)(param_1 + 0x48);
        uVar2 = *(uint *)(param_1 + 0x50);
        *(int *)(this + 0x70) = (int)uVar1 >> 0x10;
        *(uint *)(this + 0x74) = uVar1 & 0xffff;
        *(int *)(this + 0x78) = (int)uVar2 >> 0x10;
        *(uint *)(this + 0x7c) = uVar2 & 0xffff;
      }
      this[0x1f] = (X11DragState)0x1;
      return;
    }
  }
  return;
}


