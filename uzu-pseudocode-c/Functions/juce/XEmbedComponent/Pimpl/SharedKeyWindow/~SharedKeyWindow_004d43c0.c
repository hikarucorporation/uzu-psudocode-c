// Function : ~SharedKeyWindow
// Namespace: juce:XEmbedComponent:Pimpl:SharedKeyWindow
// Entry    : 004d43c0
// Prototype: undefined ~SharedKeyWindow(SharedKeyWindow * this)
// Body     : 004d43c0 - 004d4752


/* juce::XEmbedComponent::Pimpl::SharedKeyWindow::~SharedKeyWindow() */

void __thiscall
juce::XEmbedComponent::Pimpl::SharedKeyWindow::~SharedKeyWindow(SharedKeyWindow *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  XWindowSystem *pXVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  undefined8 local_f0 [24];
  
  uVar1 = *(undefined8 *)(this + 0x28);
  lVar7 = *(long *)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (lVar7 != 0) {
                    /* try { // try from 004d43e6 to 004d43f1 has its CatchHandler @ 004d475b */
    pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar2 = *(undefined8 *)(pXVar6 + 0x148);
    local_f0[0] = 0;
                    /* try { // try from 004d4402 to 004d4438 has its CatchHandler @ 004d476b */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar5 = (**(code **)(lVar7 + 0x118))(uVar2,uVar1,windowHandleXContext,local_f0);
    if (iVar5 == 0) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0xd0))(uVar2,uVar1,windowHandleXContext);
    }
  }
  uVar1 = *(undefined8 *)(this + 0x18);
                    /* try { // try from 004d4441 to 004d4478 has its CatchHandler @ 004d4773 */
  pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar7 + 0xe8))(*(undefined8 *)(pXVar6 + 0x148),uVar1);
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar7 + 0x330))(*(undefined8 *)(pXVar6 + 0x148),0);
  do {
                    /* try { // try from 004d4480 to 004d4499 has its CatchHandler @ 004d4775 */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar5 = (**(code **)(lVar7 + 0x40))(*(undefined8 *)(pXVar6 + 0x148),uVar1,0x62c07f,local_f0);
  } while (iVar5 == 1);
  if ((getKeyWindows()::keyWindows == '\0') &&
     (iVar5 = __cxa_guard_acquire(&getKeyWindows()::keyWindows), iVar5 != 0)) {
    getKeyWindows()::keyWindows._24_4_ = 0;
    getKeyWindows()::keyWindows._8_8_ = malloc(0x4c0);
    getKeyWindows()::keyWindows._16_4_ = 0x98;
    memset((void *)getKeyWindows()::keyWindows._8_8_,0,0x328);
    getKeyWindows()::keyWindows._20_4_ = 0x65;
    __cxa_atexit(HashMap<juce::ComponentPeer*,juce::XEmbedComponent::Pimpl::SharedKeyWindow*,juce::DefaultHashFunctions,juce::DummyCriticalSection>
                 ::~HashMap,getKeyWindows()::keyWindows,&__dso_handle);
    __cxa_guard_release(&getKeyWindows()::keyWindows);
  }
  uVar3 = *(ulong *)(this + 0x10);
  if ((uVar3 | (long)(int)getKeyWindows()::keyWindows._20_4_) >> 0x20 == 0) {
    uVar9 = (uint)((uVar3 & 0xffffffff) % (ulong)(uint)getKeyWindows()::keyWindows._20_4_);
  }
  else {
    uVar9 = (uint)(uVar3 % (ulong)(long)(int)getKeyWindows()::keyWindows._20_4_);
  }
  puVar4 = *(ulong **)(getKeyWindows()::keyWindows._8_8_ + (long)(int)uVar9 * 8);
  if (puVar4 != (ulong *)0x0) {
    if ((int)uVar9 < 0) {
      puVar11 = (ulong *)0x0;
      do {
        while (puVar10 = puVar4, puVar4 = (ulong *)puVar10[2], *puVar10 != uVar3) {
          puVar11 = puVar10;
          if (puVar4 == (ulong *)0x0) goto LAB_004d4654;
        }
        if (puVar11 != (ulong *)0x0) {
          puVar11[2] = (ulong)puVar4;
        }
        getKeyWindows()::keyWindows._24_4_ = getKeyWindows()::keyWindows._24_4_ + -1;
        operator_delete(puVar10);
      } while (puVar4 != (ulong *)0x0);
    }
    else {
      puVar11 = (ulong *)0x0;
      do {
        while (puVar10 = puVar4, puVar4 = (ulong *)puVar10[2], *puVar10 != uVar3) {
          puVar11 = puVar10;
          if (puVar4 == (ulong *)0x0) goto LAB_004d4654;
        }
        if (puVar11 == (ulong *)0x0) {
          if ((int)uVar9 < (int)getKeyWindows()::keyWindows._20_4_) {
            puVar8 = (ulong *)(getKeyWindows()::keyWindows._8_8_ + (ulong)uVar9 * 8);
          }
          else {
            if ((int)getKeyWindows()::keyWindows._16_4_ <= (int)getKeyWindows()::keyWindows._20_4_)
            {
              uVar12 = getKeyWindows()::keyWindows._20_4_ +
                       ((getKeyWindows()::keyWindows._20_4_ -
                        (getKeyWindows()::keyWindows._20_4_ + 1 >> 0x1f)) + 1 >> 1) + 9U &
                       0xfffffff8;
              if (getKeyWindows()::keyWindows._16_4_ != uVar12) {
                if ((int)uVar12 < 1) {
                  free((void *)getKeyWindows()::keyWindows._8_8_);
                  getKeyWindows()::keyWindows._8_8_ = 0;
                }
                else {
                  getKeyWindows()::keyWindows._8_8_ =
                       realloc((void *)getKeyWindows()::keyWindows._8_8_,(ulong)uVar12 << 3);
                }
              }
              getKeyWindows()::keyWindows._16_4_ = uVar12;
            }
            puVar8 = (ulong *)((long)(int)getKeyWindows()::keyWindows._20_4_ * 8 +
                              getKeyWindows()::keyWindows._8_8_);
            getKeyWindows()::keyWindows._20_4_ = getKeyWindows()::keyWindows._20_4_ + 1;
          }
        }
        else {
          puVar8 = puVar11 + 2;
        }
        *puVar8 = (ulong)puVar4;
        getKeyWindows()::keyWindows._24_4_ = getKeyWindows()::keyWindows._24_4_ + -1;
        operator_delete(puVar10);
      } while (puVar4 != (ulong *)0x0);
    }
  }
LAB_004d4654:
  if (*(long *)(this + 0x20) != 0) {
                    /* try { // try from 004d465f to 004d466a has its CatchHandler @ 004d4753 */
    pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar1 = *(undefined8 *)(pXVar6 + 0x148);
    uVar2 = *(undefined8 *)(this + 0x28);
    local_f0[0] = 0;
                    /* try { // try from 004d467f to 004d46b6 has its CatchHandler @ 004d4763 */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar5 = (**(code **)(lVar7 + 0x118))(uVar1,uVar2,windowHandleXContext,local_f0);
    if (iVar5 == 0) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0xd0))(uVar1,*(undefined8 *)(this + 0x28),windowHandleXContext);
    }
  }
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


