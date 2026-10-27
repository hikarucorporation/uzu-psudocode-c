// Function : ~XWindowSystem
// Namespace: juce:XWindowSystem
// Entry    : 002d00a0
// Prototype: undefined ~XWindowSystem(XWindowSystem * this)
// Body     : 002d00a0 - 002d0330


/* juce::XWindowSystem::~XWindowSystem() */

void __thiscall juce::XWindowSystem::~XWindowSystem(XWindowSystem *this)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  *(undefined ***)this = &PTR__XWindowSystem_00706fa8;
  if (this[8] != (XWindowSystem)0x0) {
    if ((singletonHolder._40_8_ != 0) &&
       (lVar5 = *(long *)(singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
                    /* try { // try from 002d00d3 to 002d00e0 has its CatchHandler @ 002d034d */
      lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar4 + 0x210))(lVar5);
    }
                    /* try { // try from 002d00e1 to 002d011b has its CatchHandler @ 002d0343 */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0xe8))(*(undefined8 *)(this + 0x148),juce_messageWindowHandle);
    juce_messageWindowHandle = 0;
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x330))(*(undefined8 *)(this + 0x148),1);
    if ((singletonHolder._40_8_ != 0) &&
       (lVar5 = *(long *)(singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
                    /* try { // try from 002d0134 to 002d0141 has its CatchHandler @ 002d0339 */
      lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar4 + 0x360))(lVar5);
    }
                    /* try { // try from 002d0142 to 002d0189 has its CatchHandler @ 002d034d */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar3 = (**(code **)(lVar5 + 0x58))(*(undefined8 *)(this + 0x148));
    if (InternalRunLoop::singletonHolder._40_8_ != 0) {
      InternalRunLoop::unregisterFdCallback
                ((InternalRunLoop *)InternalRunLoop::singletonHolder._40_8_,iVar3);
    }
    if ((singletonHolder._40_8_ != 0) &&
       (lVar5 = *(long *)(singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
      lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar4 + 0x210))(lVar5);
    }
                    /* try { // try from 002d018a to 002d0198 has its CatchHandler @ 002d0341 */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x50))(*(undefined8 *)(this + 0x148));
    pvVar1 = *(void **)(this + 0x150);
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    if ((singletonHolder._40_8_ != 0) &&
       (lVar5 = *(long *)(singletonHolder._40_8_ + 0x148), lVar5 != 0)) {
                    /* try { // try from 002d01cd to 002d01da has its CatchHandler @ 002d0331 */
      lVar4 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar4 + 0x360))(lVar5);
    }
  }
  pthread_mutex_lock((pthread_mutex_t *)X11Symbols::singletonHolder);
  uVar2 = X11Symbols::singletonHolder._40_8_;
  LOCK();
  X11Symbols::singletonHolder._40_8_ = 0;
  UNLOCK();
  if (uVar2 != 0) {
    LOCK();
    X11Symbols::singletonHolder._40_8_ = 0;
    UNLOCK();
    if (*(long *)(uVar2 + 0x428) != 0) {
      dlclose();
      *(undefined8 *)(uVar2 + 0x428) = 0;
    }
    if (*(long *)(uVar2 + 0x420) != 0) {
      dlclose();
      *(undefined8 *)(uVar2 + 0x420) = 0;
    }
    if (*(long *)(uVar2 + 0x418) != 0) {
      dlclose();
      *(undefined8 *)(uVar2 + 0x418) = 0;
    }
    if (*(long *)(uVar2 + 0x410) != 0) {
      dlclose();
      *(undefined8 *)(uVar2 + 0x410) = 0;
    }
    if (*(long *)(uVar2 + 0x408) != 0) {
      dlclose();
      *(undefined8 *)(uVar2 + 0x408) = 0;
    }
    operator_delete((void *)uVar2);
  }
  pthread_mutex_unlock((pthread_mutex_t *)X11Symbols::singletonHolder);
  LOCK();
  if (this == (XWindowSystem *)singletonHolder._40_8_) {
    singletonHolder._40_8_ = 0;
  }
  UNLOCK();
  piVar6 = (int *)(*(long *)(this + 0x1a0) + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      operator_delete__(piVar6);
    }
  }
  std::
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,int>,std::_Select1st<std::pair<unsigned_long_const,int>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
  ::_M_erase(*(void **)(this + 0x170));
  if (*(default_delete<juce::XWindowSystemUtilities::XSettings> **)(this + 0x158) !=
      (default_delete<juce::XWindowSystemUtilities::XSettings> *)0x0) {
    std::default_delete<juce::XWindowSystemUtilities::XSettings>::operator()
              (*(default_delete<juce::XWindowSystemUtilities::XSettings> **)(this + 0x158));
  }
  *(undefined8 *)(this + 0x158) = 0;
  if (*(void **)(this + 0x150) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x150));
  }
  *(undefined8 *)(this + 0x150) = 0;
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  return;
}


