// Function : objectCleanUp
// Namespace: juce:var:VariantType
// Entry    : 004ad360
// Prototype: undefined objectCleanUp(long * param_1)
// Body     : 004ad360 - 004ad375


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::objectCleanUp(juce::var::ValueUnion&) */

void __cdecl juce::var::VariantType::objectCleanUp(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004ad372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


