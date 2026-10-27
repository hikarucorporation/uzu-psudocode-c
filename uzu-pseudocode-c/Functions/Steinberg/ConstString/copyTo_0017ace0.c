// Function : copyTo
// Namespace: Steinberg:ConstString
// Entry    : 0017ace0
// Prototype: undefined copyTo(ConstString * this, long * param_1)
// Body     : 0017ace0 - 0017ad15


/* Steinberg::ConstString::copyTo(Steinberg::IString&) const */

void __thiscall Steinberg::ConstString::copyTo(ConstString *this,long *param_1)

{
  undefined1 auVar1 [16];
  
  if (((byte)this[0x13] & 0x40) == 0) {
    auVar1 = (**(code **)(*(long *)this + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0017acfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,auVar1._0_8_,auVar1._8_8_,*(code **)(*param_1 + 0x18));
    return;
  }
  auVar1 = (**(code **)(*(long *)this + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0017ad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,auVar1._0_8_,auVar1._8_8_,*(code **)(*param_1 + 0x20));
  return;
}


