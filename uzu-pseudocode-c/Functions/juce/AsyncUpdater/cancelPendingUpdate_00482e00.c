// Function : cancelPendingUpdate
// Namespace: juce:AsyncUpdater
// Entry    : 00482e00
// Prototype: undefined cancelPendingUpdate(AsyncUpdater * this)
// Body     : 00482e00 - 00482e09


/* juce::AsyncUpdater::cancelPendingUpdate() */

void __thiscall juce::AsyncUpdater::cancelPendingUpdate(AsyncUpdater *this)

{
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  return;
}


