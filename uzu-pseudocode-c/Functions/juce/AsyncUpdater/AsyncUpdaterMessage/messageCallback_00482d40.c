// Function : messageCallback
// Namespace: juce:AsyncUpdater:AsyncUpdaterMessage
// Entry    : 00482d40
// Prototype: ulong messageCallback(AsyncUpdaterMessage * this)
// Body     : 00482d40 - 00482d58


/* juce::AsyncUpdater::AsyncUpdaterMessage::messageCallback() */

ulong __thiscall juce::AsyncUpdater::AsyncUpdaterMessage::messageCallback(AsyncUpdaterMessage *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 1;
  LOCK();
  uVar1 = *(uint *)(this + 0x18);
  if (uVar1 == 1) {
    *(uint *)(this + 0x18) = 0;
  }
  else {
    uVar2 = (ulong)uVar1;
  }
  UNLOCK();
  if (uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00482d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(this + 0x10) + 0x10))();
    return uVar2;
  }
  return uVar2;
}


