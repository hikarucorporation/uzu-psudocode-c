// Function : sendMessage
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00191da0
// Prototype: undefined8 sendMessage(ComponentBase * this, long param_1)
// Body     : 00191da0 - 00191dbc


/* Steinberg::Vst::ComponentBase::sendMessage(Steinberg::Vst::IMessage*) const */

undefined8 __thiscall Steinberg::Vst::ComponentBase::sendMessage(ComponentBase *this,long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(long **)(this + 0x28) == (long *)0x0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00191db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(this + 0x28) + 0x28))();
  return uVar1;
}


