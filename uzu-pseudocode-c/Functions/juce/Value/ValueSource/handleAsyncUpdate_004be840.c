// Function : handleAsyncUpdate
// Namespace: juce:Value:ValueSource
// Entry    : 004be840
// Prototype: undefined handleAsyncUpdate(ValueSource * this)
// Body     : 004be840 - 004be8a8


/* juce::Value::ValueSource::handleAsyncUpdate() */

void __thiscall juce::Value::ValueSource::handleAsyncUpdate(ValueSource *this)

{
  ValueSource *pVVar1;
  uint uVar2;
  Value *this_00;
  bool bVar3;
  ulong uVar5;
  ulong uVar4;
  
  uVar2 = *(uint *)(this + 0x2c);
  if (0 < (int)uVar2) {
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(*(long *)(this + 0x18) + 0x18) = 0;
    UNLOCK();
    uVar5 = (ulong)uVar2;
    do {
      uVar4 = uVar5 - 1;
      if (((uint)uVar4 < *(uint *)(this + 0x2c)) &&
         (this_00 = *(Value **)(*(long *)(this + 0x20) + (uVar4 & 0xffffffff) * 8),
         this_00 != (Value *)0x0)) {
                    /* try { // try from 004be886 to 004be88a has its CatchHandler @ 004be8a9 */
        callListeners(this_00);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar4;
    } while (bVar3);
    LOCK();
    pVVar1 = this + 8;
    *(int *)pVVar1 = *(int *)pVVar1 + -1;
    UNLOCK();
    if (*(int *)pVVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004be8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))(this);
      return;
    }
  }
  return;
}


