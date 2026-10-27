// Function : Desktop
// Namespace: juce:Desktop
// Entry    : 001d9da0
// Prototype: undefined Desktop(Desktop * this)
// Body     : 001d9da0 - 001da15e


/* juce::Desktop::Desktop() */

void __thiscall juce::Desktop::Desktop(Desktop *this)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Timer *this_00;
  XWindowSystem *pXVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  Displays *this_01;
  int iVar8;
  long lVar9;
  uint uVar10;
  
  DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)this);
  Timer::Timer((Timer *)(this + 8));
  *(undefined ***)(this + 0x30) = &PTR__AsyncUpdater_00712b58;
  *(undefined8 *)(this + 0x38) = 0;
                    /* try { // try from 001d9dd5 to 001d9dde has its CatchHandler @ 001da1eb */
  puVar3 = operator_new(0x20);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar3[2] = this + 0x30;
  *(undefined4 *)(puVar3 + 3) = 0;
  LOCK();
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  UNLOCK();
  pvVar6 = *(void **)(this + 0x38);
  *(undefined8 **)(this + 0x38) = puVar3;
  if (pvVar6 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar6 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar6);
    }
  }
  *(undefined ***)this = &PTR__Desktop_00707aa8;
  *(undefined ***)(this + 8) = &PTR__Desktop_00707ad8;
  *(undefined ***)(this + 0x30) = &PTR__Desktop_00707b00;
                    /* try { // try from 001d9e42 to 001d9e4b has its CatchHandler @ 001da1e2 */
  this_00 = operator_new(0x48);
  Timer::Timer(this_00);
  *(undefined ***)this_00 = &PTR__MouseInputSourceList_0070e240;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
                    /* try { // try from 001d9e74 to 001d9e7b has its CatchHandler @ 001da1b1 */
  detail::MouseInputSourceList::addSource((long)this_00);
  *(Timer **)(this + 0x40) = this_00;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x119) = 0;
  *(undefined8 *)(this + 0x121) = 0;
  *(undefined8 *)(this + 300) = 0x3f8000000000000f;
  *(undefined ***)(this + 0x138) = &PTR__ChangeBroadcaster_00712b80;
  *(undefined ***)(this + 0x140) = &PTR__AsyncUpdater_00712b58;
  *(undefined8 *)(this + 0x148) = 0;
                    /* try { // try from 001d9f21 to 001d9f2a has its CatchHandler @ 001da1a9 */
  puVar3 = operator_new(0x20);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar3[2] = this + 0x140;
  *(undefined4 *)(puVar3 + 3) = 0;
  LOCK();
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  UNLOCK();
  pvVar6 = *(void **)(this + 0x148);
  *(undefined8 **)(this + 0x148) = puVar3;
  if (pvVar6 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar6 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar6);
    }
  }
  *(undefined ***)(this + 0x140) = &PTR__ChangeBroadcasterCallback_00712ba0;
  this[0x180] = (Desktop)0x0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(Desktop **)(this + 0x150) = this + 0x138;
  Timer::Timer((Timer *)(this + 0x188));
  *(undefined ***)(this + 0x138) = &PTR__ComponentAnimator_00708910;
  *(undefined ***)(this + 0x188) = &PTR__ComponentAnimator_00708938;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
                    /* try { // try from 001d9ff1 to 001d9ffa has its CatchHandler @ 001da1a3 */
  puVar3 = operator_new(0x10);
  *puVar3 = &PTR__NativeDarkModeChangeDetectorImpl_0070dd30;
  *(undefined1 *)(puVar3 + 1) = 0;
                    /* try { // try from 001da00d to 001da0d8 has its CatchHandler @ 001da1f4 */
  pXVar4 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  lVar5 = *(long *)(pXVar4 + 0x158);
  if (lVar5 != 0) {
    ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
    ::initialiseIfNeeded
              ((ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
                *)(lVar5 + 0x58));
    puVar2 = *(undefined8 **)(lVar5 + 0x58);
    pvVar6 = (void *)*puVar2;
    iVar8 = *(int *)((long)puVar2 + 0xc);
    lVar5 = (long)iVar8;
    if (lVar5 != 0) {
      lVar9 = 0;
      do {
        if (*(undefined8 **)((long)pvVar6 + lVar9) == puVar3) goto LAB_001da0cd;
        lVar9 = lVar9 + 8;
      } while (lVar5 * 8 != lVar9);
    }
    if ((int)*(uint *)(puVar2 + 1) <= iVar8) {
      uVar10 = iVar8 + ((iVar8 - (iVar8 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar2 + 1) != uVar10) {
        if ((int)uVar10 < 1) {
          free(pvVar6);
          *puVar2 = 0;
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = realloc(pvVar6,(ulong)uVar10 << 3);
          *puVar2 = pvVar6;
        }
      }
      *(uint *)(puVar2 + 1) = uVar10;
      iVar8 = *(int *)((long)puVar2 + 0xc);
      lVar5 = (long)iVar8;
    }
    *(int *)((long)puVar2 + 0xc) = iVar8 + 1;
    *(undefined8 **)((long)pvVar6 + lVar5 * 8) = puVar3;
  }
LAB_001da0cd:
  uVar7 = XWindowSystem::isDarkModeActive(*(XWindowSystem **)(pXVar4 + 0x158));
  *(char *)(puVar3 + 1) = (char)uVar7;
  *(undefined8 **)(this + 0x1c8) = puVar3;
                    /* try { // try from 001da0e4 to 001da0ed has its CatchHandler @ 001da189 */
  this_01 = operator_new(0x80);
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)(this_01 + 8) = 0;
  this_01[0x78] = (Displays)0x0;
  *(undefined8 *)(this_01 + 0x14) = 0;
  *(undefined8 *)(this_01 + 0x1c) = 0;
  *(undefined8 *)(this_01 + 0x24) = 0;
  *(undefined8 *)(this_01 + 0x2c) = 0;
  *(undefined8 *)(this_01 + 0x34) = 0;
  *(undefined8 *)(this_01 + 0x3c) = 0;
  *(undefined8 *)(this_01 + 0x44) = 0;
  *(undefined8 *)(this_01 + 0x4c) = 0;
  *(undefined8 *)(this_01 + 0x54) = 0;
                    /* try { // try from 001da113 to 001da11d has its CatchHandler @ 001da15f */
  Displays::findDisplays(this_01,(long)this);
  puVar3 = *(undefined8 **)(this + 0xe0);
  *(Displays **)(this + 0xe0) = this_01;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  *(undefined4 *)((long)puVar3 + 0xc) = 0;
  free((void *)*puVar3);
  operator_delete(puVar3);
  return;
}


