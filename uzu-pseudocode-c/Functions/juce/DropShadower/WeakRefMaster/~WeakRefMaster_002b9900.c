// Function : ~WeakRefMaster
// Namespace: juce:DropShadower:WeakRefMaster
// Entry    : 002b9900
// Prototype: undefined ~WeakRefMaster(WeakRefMaster * this)
// Body     : 002b9900 - 002b991a


/* juce::DropShadower::WeakRefMaster::~WeakRefMaster() */

void __thiscall juce::DropShadower::WeakRefMaster::~WeakRefMaster(WeakRefMaster *this)

{
  WeakRefMaster *pWVar1;
  
  if (this != (WeakRefMaster *)0x0) {
    *(undefined8 *)(this + 0x10) = 0;
    LOCK();
    pWVar1 = this + 8;
    *(int *)pWVar1 = *(int *)pWVar1 + -1;
    UNLOCK();
    if (*(int *)pWVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002b9917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 8))();
      return;
    }
  }
  return;
}


