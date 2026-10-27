// Function : ~ComponentAnimator
// Namespace: juce:ComponentAnimator
// Entry    : 001e1060
// Prototype: undefined ~ComponentAnimator(ComponentAnimator * this)
// Body     : 001e1060 - 001e1168


/* juce::ComponentAnimator::~ComponentAnimator() */

void __thiscall juce::ComponentAnimator::~ComponentAnimator(ComponentAnimator *this)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  *(undefined ***)this = &PTR__ComponentAnimator_00708910;
  *(undefined ***)(this + 0x50) = &PTR__ComponentAnimator_00708938;
  uVar2 = *(uint *)(this + 0x84);
  uVar6 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar9 = -uVar2;
    uVar8 = uVar6;
    while( true ) {
      uVar7 = (ulong)((int)uVar8 - 1);
      lVar3 = *(long *)(this + 0x78);
      plVar4 = *(long **)(lVar3 + uVar7 * 8);
      memmove((void *)(lVar3 + uVar7 * 8),(void *)(lVar3 + uVar7 * 8 + 8),
              (long)((int)uVar6 + iVar9) << 3);
      *(int *)(this + 0x84) = *(int *)(this + 0x84) + -1;
      ContainerDeletePolicy<juce::ComponentAnimator::AnimationTask>::destroy(plVar4);
      if ((long)uVar8 < 2) break;
      uVar6 = (ulong)*(uint *)(this + 0x84);
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 - 1;
    }
  }
  *(undefined4 *)(this + 0x84) = 0;
  free(*(void **)(this + 0x78));
  Timer::~Timer((Timer *)(this + 0x50));
  *(undefined ***)this = &PTR__ChangeBroadcaster_00712b80;
  ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x20));
  *(undefined ***)(this + 8) = &PTR__ChangeBroadcasterCallback_00712ba0;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x10) + 0x18) = 0;
  UNLOCK();
  *(undefined ***)(this + 8) = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x10) + 0x18) = 0;
  UNLOCK();
  pvVar5 = *(void **)(this + 0x10);
  if (pvVar5 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar5 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar5);
    }
  }
  operator_delete(this);
  return;
}


