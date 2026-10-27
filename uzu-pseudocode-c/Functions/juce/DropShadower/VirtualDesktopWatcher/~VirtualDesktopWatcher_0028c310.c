// Function : ~VirtualDesktopWatcher
// Namespace: juce:DropShadower:VirtualDesktopWatcher
// Entry    : 0028c310
// Prototype: undefined ~VirtualDesktopWatcher(VirtualDesktopWatcher * this)
// Body     : 0028c310 - 0028c38f


/* juce::DropShadower::VirtualDesktopWatcher::~VirtualDesktopWatcher() */

void __thiscall
juce::DropShadower::VirtualDesktopWatcher::~VirtualDesktopWatcher(VirtualDesktopWatcher *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  Timer::stopTimer((Timer *)(this + 8));
  if ((*(long *)(this + 0x30) != 0) &&
     (lVar2 = *(long *)(*(long *)(this + 0x30) + 0x10), lVar2 != 0)) {
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(lVar2 + 0xa0),(long)this);
  }
  plVar3 = *(long **)(this + 0x70);
  if (plVar3 != (long *)0x0) {
    plVar3[2] = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
                    /* try { // try from 0028c366 to 0028c36a has its CatchHandler @ 0028c390 */
  std::
  _Rb_tree<void*,std::pair<void*const,std::function<void()>>,std::_Select1st<std::pair<void*const,std::function<void()>>>,std::less<void*>,std::allocator<std::pair<void*const,std::function<void()>>>>
  ::_M_erase(*(void **)(this + 0x50));
  plVar3 = *(long **)(this + 0x30);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  Timer::~Timer((Timer *)(this + 8));
  return;
}


