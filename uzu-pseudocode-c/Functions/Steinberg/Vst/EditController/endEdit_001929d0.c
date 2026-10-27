// Function : endEdit
// Namespace: Steinberg:Vst:EditController
// Entry    : 001929d0
// Prototype: undefined8 endEdit(long param_1)
// Body     : 001929d0 - 001929e7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::EditController::endEdit(unsigned int) */

undefined8 __cdecl Steinberg::Vst::EditController::endEdit(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x40) == (long *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x001929e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x28))();
  return uVar1;
}


