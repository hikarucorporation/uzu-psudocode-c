// Function : ~EditController
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a0f30
// Prototype: undefined ~EditController(EditController * this)
// Body     : 001a0f30 - 001a0f41


/* Steinberg::Vst::EditController::~EditController() */

void __thiscall Steinberg::Vst::EditController::~EditController(EditController *this)

{
  ~EditController(this);
  operator_delete(this);
  return;
}


