// Function : queryInterface
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00198ee0
// Prototype: undefined8 queryInterface(long param_1)
// Body     : 00198ee0 - 00198ef6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::Vst::ReadOnlyBStream::queryInterface(char const*, void**) */

undefined8 __cdecl Steinberg::Vst::ReadOnlyBStream::queryInterface(long param_1)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00198eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x10))();
  return uVar1;
}


