// Function : deferUpdate
// Namespace: Steinberg:FObject
// Entry    : 00178420
// Prototype: undefined deferUpdate(FObject * this, undefined4 param_1)
// Body     : 00178420 - 00178447


/* Steinberg::FObject::deferUpdate(int) */

void __thiscall Steinberg::FObject::deferUpdate(FObject *this,undefined4 param_1)

{
  if (gUpdateHandler == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00178446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x68))(this,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00178438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*gUpdateHandler + 0x30))();
  return;
}


