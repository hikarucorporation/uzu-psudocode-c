// Function : triggerUpdates
// Namespace: Steinberg:UpdateHandler
// Entry    : 00184b10
// Prototype: undefined triggerUpdates(UpdateHandler * this, undefined8 * param_1, int param_2)
// Body     : 00184b10 - 00184b1a


/* non-virtual thunk to Steinberg::UpdateHandler::triggerUpdates(Steinberg::FUnknown*, int) */

void __thiscall
Steinberg::UpdateHandler::triggerUpdates(UpdateHandler *this,undefined8 *param_1,int param_2)

{
  doTriggerUpdates(this + -0x10,param_1,param_2,'\0');
  return;
}


