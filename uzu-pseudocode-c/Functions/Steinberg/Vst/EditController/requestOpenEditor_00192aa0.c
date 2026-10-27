// Function : requestOpenEditor
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192aa0
// Prototype: undefined8 requestOpenEditor(long param_1)
// Body     : 00192aa0 - 00192ab7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::EditController::requestOpenEditor(char const*) */

undefined8 __cdecl Steinberg::Vst::EditController::requestOpenEditor(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x48) == (long *)0x0) {
    return 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00192ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x20))();
  return uVar1;
}


