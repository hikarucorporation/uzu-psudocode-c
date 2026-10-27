// Function : ~ScopedXLock
// Namespace: juce:XWindowSystemUtilities:ScopedXLock
// Entry    : 001e69f0
// Prototype: undefined ~ScopedXLock(void)
// Body     : 001e69f0 - 001e6a18


/* juce::XWindowSystemUtilities::ScopedXLock::~ScopedXLock() */

void __thiscall juce::XWindowSystemUtilities::ScopedXLock::~ScopedXLock(void)

{
  long lVar1;
  long lVar2;
  
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar1 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar1 != 0)) {
                    /* try { // try from 001e6a09 to 001e6a16 has its CatchHandler @ 001e6a19 */
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x360))(lVar1);
  }
  return;
}


