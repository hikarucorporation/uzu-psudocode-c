// Function : getWithoutChecking
// Namespace: juce:SingletonHolder_juce__TypefaceFileCache_juce__DummyCriticalSection_false_
// Entry    : 002ffd20
// Prototype: DeletedAtShutdown * getWithoutChecking(void)
// Body     : 002ffd20 - 002ffde2


/* juce::SingletonHolder<juce::TypefaceFileCache, juce::DummyCriticalSection,
   false>::getWithoutChecking() */

DeletedAtShutdown *
juce::SingletonHolder<juce::TypefaceFileCache,juce::DummyCriticalSection,false>::getWithoutChecking
          (void)

{
  DeletedAtShutdown *this;
  undefined8 *puVar1;
  
  if (TypefaceFileCache::singletonHolder == (DeletedAtShutdown *)0x0) {
    this = operator_new(0x60);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    DeletedAtShutdown::DeletedAtShutdown(this);
    *(undefined ***)this = &PTR__TypefaceFileCache_00712370;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(DeletedAtShutdown **)(this + 0x20) = this + 0x10;
    *(DeletedAtShutdown **)(this + 0x28) = this + 0x10;
    *(undefined8 *)(this + 0x30) = 0;
    *(DeletedAtShutdown **)(this + 0x40) = this + 0x38;
    *(DeletedAtShutdown **)(this + 0x38) = this + 0x38;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x50) = 0;
                    /* try { // try from 002ffdb0 to 002ffdb9 has its CatchHandler @ 002ffde3 */
    puVar1 = operator_new(0x28);
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    *(undefined8 **)(this + 0x58) = puVar1;
    LOCK();
    UNLOCK();
    TypefaceFileCache::singletonHolder = this;
  }
  return TypefaceFileCache::singletonHolder;
}


