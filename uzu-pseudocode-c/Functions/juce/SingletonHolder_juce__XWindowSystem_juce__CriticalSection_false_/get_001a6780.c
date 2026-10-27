// Function : get
// Namespace: juce:SingletonHolder_juce__XWindowSystem_juce__CriticalSection_false_
// Entry    : 001a6780
// Prototype: XWindowSystem * get(SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> * this)
// Body     : 001a6780 - 001a67ef


/* juce::SingletonHolder<juce::XWindowSystem, juce::CriticalSection, false>::get() */

XWindowSystem * __thiscall
juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
          (SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *this)

{
  XWindowSystem *this_00;
  
  this_00 = *(XWindowSystem **)(this + 0x28);
  if (this_00 == (XWindowSystem *)0x0) {
    CriticalSection::enter((CriticalSection *)this);
    this_00 = *(XWindowSystem **)(this + 0x28);
    if (this_00 == (XWindowSystem *)0x0) {
      if (get()::alreadyInside == '\0') {
        get()::alreadyInside = 1;
        this_00 = *(XWindowSystem **)(this + 0x28);
        if (this_00 == (XWindowSystem *)0x0) {
                    /* try { // try from 001a67bc to 001a67c5 has its CatchHandler @ 001a67fd */
          this_00 = operator_new(0x1b0);
                    /* try { // try from 001a67c9 to 001a67d0 has its CatchHandler @ 001a67f0 */
          XWindowSystem::XWindowSystem(this_00);
          LOCK();
          *(XWindowSystem **)(this + 0x28) = this_00;
          UNLOCK();
        }
        get()::alreadyInside = '\0';
      }
      else {
        this_00 = (XWindowSystem *)0x0;
      }
    }
    CriticalSection::exit((CriticalSection *)this);
  }
  return this_00;
}


