// Function : changed
// Namespace: Steinberg:FObject
// Entry    : 001783f0
// Prototype: undefined changed(FObject * this, undefined4 param_1)
// Body     : 001783f0 - 00178417


/* Steinberg::FObject::changed(int) */

void __thiscall Steinberg::FObject::changed(FObject *this,undefined4 param_1)

{
  if (gUpdateHandler == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00178416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x68))(this,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00178408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*gUpdateHandler + 0x28))();
  return;
}


