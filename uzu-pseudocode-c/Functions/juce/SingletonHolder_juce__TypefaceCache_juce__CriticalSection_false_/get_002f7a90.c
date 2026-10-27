// Function : get
// Namespace: juce:SingletonHolder_juce__TypefaceCache_juce__CriticalSection_false_
// Entry    : 002f7a90
// Prototype: undefined8 get(void)
// Body     : 002f7a90 - 002f7b14


/* juce::SingletonHolder<juce::TypefaceCache, juce::CriticalSection, false>::get() */

TypefaceCache * juce::SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get(void)

{
  TypefaceCache *this;
  
  this = (TypefaceCache *)TypefaceCache::singletonHolder._40_8_;
  if (TypefaceCache::singletonHolder._40_8_ == 0) {
    pthread_mutex_lock((pthread_mutex_t *)TypefaceCache::singletonHolder);
    this = (TypefaceCache *)TypefaceCache::singletonHolder._40_8_;
    if (TypefaceCache::singletonHolder._40_8_ == 0) {
      if (get()::alreadyInside == '\0') {
        get()::alreadyInside = 1;
                    /* try { // try from 002f7ad8 to 002f7ae1 has its CatchHandler @ 002f7b22 */
        this = operator_new(0x120);
                    /* try { // try from 002f7ae5 to 002f7aec has its CatchHandler @ 002f7b15 */
        TypefaceCache::TypefaceCache(this);
        LOCK();
        UNLOCK();
        get()::alreadyInside = '\0';
        TypefaceCache::singletonHolder._40_8_ = this;
      }
      else {
        this = (TypefaceCache *)0x0;
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)TypefaceCache::singletonHolder);
  }
  return this;
}


