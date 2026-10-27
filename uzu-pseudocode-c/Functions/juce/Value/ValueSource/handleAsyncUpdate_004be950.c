// Function : handleAsyncUpdate
// Namespace: juce:Value:ValueSource
// Entry    : 004be950
// Prototype: undefined handleAsyncUpdate(ValueSource * this)
// Body     : 004be950 - 004be9d7


/* non-virtual thunk to juce::Value::ValueSource::handleAsyncUpdate() */

void __thiscall juce::Value::ValueSource::handleAsyncUpdate(ValueSource *this)

{
  ValueSource *pVVar1;
  uint uVar2;
  Value *this_00;
  bool bVar3;
  ulong uVar5;
  ulong uVar4;
  
  uVar2 = *(uint *)(this + 0x1c);
  if (0 < (int)uVar2) {
    LOCK();
    *(int *)(this + -8) = *(int *)(this + -8) + 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
    UNLOCK();
    uVar5 = (ulong)uVar2;
    do {
      uVar4 = uVar5 - 1;
      if (((uint)uVar4 < *(uint *)(this + 0x1c)) &&
         (this_00 = *(Value **)(*(long *)(this + 0x10) + (uVar4 & 0xffffffff) * 8),
         this_00 != (Value *)0x0)) {
                    /* try { // try from 004be9a8 to 004be9ac has its CatchHandler @ 004be9d8 */
        callListeners(this_00);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar4;
    } while (bVar3);
    LOCK();
    pVVar1 = this + -8;
    *(int *)pVVar1 = *(int *)pVVar1 + -1;
    UNLOCK();
    if (*(int *)pVVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004be9c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(this + -0x10) + 8))(this + -0x10);
      return;
    }
  }
  return;
}


