// Function : ~HostApplication
// Namespace: Steinberg:Vst:HostApplication
// Entry    : 001a03a0
// Prototype: undefined ~HostApplication(HostApplication * this)
// Body     : 001a03a0 - 001a03c5


/* Steinberg::Vst::HostApplication::~HostApplication() */

void __thiscall Steinberg::Vst::HostApplication::~HostApplication(HostApplication *this)

{
  *(undefined ***)this = &PTR_queryInterface_00702fb0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* try { // try from 001a03ba to 001a03bc has its CatchHandler @ 001a03c6 */
    (**(code **)(**(long **)(this + 0x10) + 0x10))();
  }
  operator_delete(this);
  return;
}


