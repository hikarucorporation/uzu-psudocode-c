// Function : ~Component
// Namespace: Steinberg:Vst:Component
// Entry    : 001a08d0
// Prototype: undefined ~Component(Component * this)
// Body     : 001a08d0 - 001a08e1


/* Steinberg::Vst::Component::~Component() */

void __thiscall Steinberg::Vst::Component::~Component(Component *this)

{
  ~Component(this);
  operator_delete(this);
  return;
}


