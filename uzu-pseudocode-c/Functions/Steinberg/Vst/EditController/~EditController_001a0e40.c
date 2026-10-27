// Function : ~EditController
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a0e40
// Prototype: undefined ~EditController(EditController * this)
// Body     : 001a0e40 - 001a0f00


/* Steinberg::Vst::EditController::~EditController() */

void __thiscall Steinberg::Vst::EditController::~EditController(EditController *this)

{
  *(undefined ***)this = &PTR_queryInterface_00703598;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703730;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00703768;
  *(undefined ***)(this + 0x30) = &PTR_queryInterface_007037a8;
  *(undefined ***)(this + 0x38) = &PTR_queryInterface_00703848;
  ParameterContainer::~ParameterContainer((ParameterContainer *)(this + 0x50));
  if (*(long **)(this + 0x48) != (long *)0x0) {
                    /* try { // try from 001a0e8f to 001a0e91 has its CatchHandler @ 001a0f19 */
    (**(code **)(**(long **)(this + 0x48) + 0x10))();
    *(undefined8 *)(this + 0x48) = 0;
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
                    /* try { // try from 001a0ea6 to 001a0ea8 has its CatchHandler @ 001a0f11 */
    (**(code **)(**(long **)(this + 0x40) + 0x10))();
    *(undefined8 *)(this + 0x40) = 0;
  }
  *(undefined ***)this = &PTR_queryInterface_00703468;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703520;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00703558;
  if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* try { // try from 001a0edd to 001a0edf has its CatchHandler @ 001a0f09 */
    (**(code **)(**(long **)(this + 0x28) + 0x10))();
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* try { // try from 001a0ef4 to 001a0ef6 has its CatchHandler @ 001a0f01 */
    (**(code **)(**(long **)(this + 0x20) + 0x10))();
    *(undefined8 *)(this + 0x20) = 0;
  }
  return;
}


