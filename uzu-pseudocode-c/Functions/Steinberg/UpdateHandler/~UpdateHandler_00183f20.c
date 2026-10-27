// Function : ~UpdateHandler
// Namespace: Steinberg:UpdateHandler
// Entry    : 00183f20
// Prototype: undefined ~UpdateHandler(UpdateHandler * this)
// Body     : 00183f20 - 00183f31


/* Steinberg::UpdateHandler::~UpdateHandler() */

void __thiscall Steinberg::UpdateHandler::~UpdateHandler(UpdateHandler *this)

{
  ~UpdateHandler(this);
  operator_delete(this);
  return;
}


