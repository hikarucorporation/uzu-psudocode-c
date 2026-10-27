// Function : get
// Namespace: juce:SingletonHolder_juce__X11Symbols_juce__CriticalSection_false_
// Entry    : 001deaa0
// Prototype: undefined8 get(void)
// Body     : 001deaa0 - 001deb33


/* juce::SingletonHolder<juce::X11Symbols, juce::CriticalSection, false>::get() */

X11Symbols * juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get(void)

{
  X11Symbols *this;
  
  this = (X11Symbols *)X11Symbols::singletonHolder._40_8_;
  if (X11Symbols::singletonHolder._40_8_ == 0) {
    pthread_mutex_lock((pthread_mutex_t *)X11Symbols::singletonHolder);
    this = (X11Symbols *)X11Symbols::singletonHolder._40_8_;
    if (X11Symbols::singletonHolder._40_8_ == 0) {
      if (get()::alreadyInside == '\0') {
        get()::alreadyInside = 1;
                    /* try { // try from 001deae8 to 001deaf1 has its CatchHandler @ 001deb41 */
        this = operator_new(0x430);
        memset(this,0,0x430);
                    /* try { // try from 001deb04 to 001deb0b has its CatchHandler @ 001deb34 */
        X11Symbols::X11Symbols(this);
        LOCK();
        UNLOCK();
        get()::alreadyInside = '\0';
        X11Symbols::singletonHolder._40_8_ = this;
      }
      else {
        this = (X11Symbols *)0x0;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)X11Symbols::singletonHolder);
  }
  return this;
}


