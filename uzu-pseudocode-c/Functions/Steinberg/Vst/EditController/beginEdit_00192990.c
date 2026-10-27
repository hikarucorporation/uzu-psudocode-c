// Function : beginEdit
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192990
// Prototype: undefined8 beginEdit(long param_1)
// Body     : 00192990 - 001929a7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::EditController::beginEdit(unsigned int) */

undefined8 __cdecl Steinberg::Vst::EditController::beginEdit(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x40) == (long *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x001929a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
  return uVar1;
}


