// Function : triggerUpdates
// Namespace: Steinberg:UpdateHandler
// Entry    : 00184b00
// Prototype: undefined triggerUpdates(UpdateHandler * this, undefined8 * param_1, int param_2)
// Body     : 00184b00 - 00184b06


/* Steinberg::UpdateHandler::triggerUpdates(Steinberg::FUnknown*, int) */

void __thiscall
Steinberg::UpdateHandler::triggerUpdates(UpdateHandler *this,undefined8 *param_1,int param_2)

{
  doTriggerUpdates(this,param_1,param_2,'\0');
  return;
}


