// Function : ~DragToScrollListener
// Namespace: juce:Viewport:DragToScrollListener
// Entry    : 00268b90
// Prototype: undefined ~DragToScrollListener(DragToScrollListener * this)
// Body     : 00268b90 - 00268ce1


/* juce::Viewport::DragToScrollListener::~DragToScrollListener() */

void __thiscall
juce::Viewport::DragToScrollListener::~DragToScrollListener(DragToScrollListener *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  Desktop *pDVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  plVar2 = *(long **)(*(long *)(this + 0x10) + 0x1a0);
  if (plVar2 != (long *)0x0) {
    uVar1 = *(uint *)((long)plVar2 + 0xc);
    if ((long)(int)uVar1 != 0) {
      lVar3 = *plVar2;
      lVar10 = (long)(int)uVar1 * 8;
      uVar8 = 0;
      do {
        if (*(DragToScrollListener **)(lVar3 + uVar8 * 8) == this) {
          uVar6 = (uint)uVar8;
          if (-1 < (int)uVar6) {
            if ((int)uVar6 < (int)plVar2[2]) {
              *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
            }
            if (uVar6 < uVar1) {
              memmove((void *)(lVar3 + (uVar8 & 0xffffffff) * 8),
                      (void *)(lVar3 + (uVar8 & 0xffffffff) * 8 + 8),
                      (long)(int)(~uVar6 + uVar1) << 3);
              iVar9 = *(int *)((long)plVar2 + 0xc);
              uVar1 = iVar9 - 1;
              *(uint *)((long)plVar2 + 0xc) = uVar1;
              iVar7 = iVar9 * 2 + -2;
              iVar9 = 0;
              if (-1 < iVar7) {
                iVar9 = iVar7;
              }
              if (iVar9 < (int)plVar2[1]) {
                uVar6 = 8;
                if (8 < (int)uVar1) {
                  uVar6 = uVar1;
                }
                if ((int)uVar6 < (int)plVar2[1]) {
                  pvVar4 = realloc((void *)*plVar2,(ulong)uVar6 << 3);
                  *plVar2 = (long)pvVar4;
                  *(uint *)(plVar2 + 1) = uVar6;
                }
              }
            }
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00268c60 to 00268c69 has its CatchHandler @ 00268cef */
    pDVar5 = operator_new(0x1d0);
                    /* try { // try from 00268c6d to 00268c74 has its CatchHandler @ 00268ce2 */
    Desktop::Desktop(pDVar5);
    Desktop::instance = pDVar5;
  }
  pDVar5 = Desktop::instance;
  ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::
  remove((ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>
          *)(Desktop::instance + 0x48),(long)this);
                    /* try { // try from 00268c88 to 00268c8f has its CatchHandler @ 00268cef */
  Desktop::resetTimer(pDVar5);
  *(undefined ***)(this + 0xb8) = &PTR__AnimatedPosition_0070e8f0;
  ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x130));
  Timer::~Timer((Timer *)(this + 0xb8));
  *(undefined ***)(this + 0x18) = &PTR__AnimatedPosition_0070e8f0;
  ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x90));
  Timer::~Timer((Timer *)(this + 0x18));
  return;
}


