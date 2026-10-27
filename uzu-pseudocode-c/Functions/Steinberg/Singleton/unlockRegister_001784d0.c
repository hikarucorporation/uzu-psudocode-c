// Function : unlockRegister
// Namespace: Steinberg:Singleton
// Entry    : 001784d0
// Prototype: undefined unlockRegister(void)
// Body     : 001784d0 - 001784dc


/* Steinberg::Singleton::unlockRegister() */

void Steinberg::Singleton::unlockRegister(void)

{
                    /* WARNING: Could not recover jumptable at 0x001784da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*singletonsLock + 0x18))();
  return;
}


