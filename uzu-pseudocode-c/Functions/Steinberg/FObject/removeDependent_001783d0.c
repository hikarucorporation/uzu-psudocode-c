// Function : removeDependent
// Namespace: Steinberg:FObject
// Entry    : 001783d0
// Prototype: undefined removeDependent(FObject * this, undefined8 param_1)
// Body     : 001783d0 - 001783eb


/* Steinberg::FObject::removeDependent(Steinberg::IDependent*) */

void __thiscall Steinberg::FObject::removeDependent(FObject *this,undefined8 param_1)

{
  if (gUpdateHandler == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001783e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*gUpdateHandler + 0x20))(gUpdateHandler,this,param_1);
  return;
}


