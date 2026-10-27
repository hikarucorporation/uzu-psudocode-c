// Function : ~HostApplication
// Namespace: Steinberg:Vst:HostApplication
// Entry    : 001a0370
// Prototype: undefined ~HostApplication(HostApplication * this)
// Body     : 001a0370 - 001a0396


/* Steinberg::Vst::HostApplication::~HostApplication() */

void __thiscall Steinberg::Vst::HostApplication::~HostApplication(HostApplication *this)

{
  *(undefined ***)this = &PTR_queryInterface_00702fb0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* try { // try from 001a038a to 001a038c has its CatchHandler @ 001a0397 */
    (**(code **)(**(long **)(this + 0x10) + 0x10))();
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}


