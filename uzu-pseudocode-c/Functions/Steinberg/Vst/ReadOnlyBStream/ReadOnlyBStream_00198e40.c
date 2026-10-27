// Function : ReadOnlyBStream
// Namespace: Steinberg:Vst:ReadOnlyBStream
// Entry    : 00198e40
// Prototype: undefined ReadOnlyBStream(ReadOnlyBStream * this, long * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 00198e40 - 00198e73


/* Steinberg::Vst::ReadOnlyBStream::ReadOnlyBStream(Steinberg::IBStream*, long, long) */

void __thiscall
Steinberg::Vst::ReadOnlyBStream::ReadOnlyBStream
          (ReadOnlyBStream *this,long *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined ***)this = &PTR_queryInterface_007042e0;
  *(long **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 8) = 1;
  if (param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00198e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


