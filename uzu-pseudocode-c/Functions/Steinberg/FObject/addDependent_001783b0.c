// Function : addDependent
// Namespace: Steinberg:FObject
// Entry    : 001783b0
// Prototype: undefined addDependent(FObject * this, undefined8 param_1)
// Body     : 001783b0 - 001783cb


/* Steinberg::FObject::addDependent(Steinberg::IDependent*) */

void __thiscall Steinberg::FObject::addDependent(FObject *this,undefined8 param_1)

{
  if (gUpdateHandler == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001783c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*gUpdateHandler + 0x18))(gUpdateHandler,this,param_1);
  return;
}


