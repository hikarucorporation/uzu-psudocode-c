// Function : performEdit
// Namespace: Steinberg:Vst:EditController
// Entry    : 001929b0
// Prototype: undefined8 performEdit(long param_1)
// Body     : 001929b0 - 001929c7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::EditController::performEdit(unsigned int, double) */

undefined8 __cdecl Steinberg::Vst::EditController::performEdit(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x40) == (long *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x001929c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
  return uVar1;
}


