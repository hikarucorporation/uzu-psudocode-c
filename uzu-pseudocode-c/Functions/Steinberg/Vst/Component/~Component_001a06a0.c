// Function : ~Component
// Namespace: Steinberg:Vst:Component
// Entry    : 001a06a0
// Prototype: undefined ~Component(Component * this)
// Body     : 001a06a0 - 001a0890


/* Steinberg::Vst::Component::~Component() */

void __thiscall Steinberg::Vst::Component::~Component(Component *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR_queryInterface_00703270;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703370;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_007033a8;
  *(undefined ***)(this + 0x30) = &PTR_queryInterface_007033e8;
  plVar2 = *(long **)(this + 0xf0);
  plVar1 = *(long **)(this + 0xf8);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 001a07fb to 001a07fd has its CatchHandler @ 001a08b9 */
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0xf0);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  plVar2 = *(long **)(this + 0xc0);
  plVar1 = *(long **)(this + 200);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 001a081b to 001a081d has its CatchHandler @ 001a08b1 */
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0xc0);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  plVar2 = *(long **)(this + 0x90);
  plVar1 = *(long **)(this + 0x98);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 001a083b to 001a083d has its CatchHandler @ 001a08a9 */
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x90);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  plVar2 = *(long **)(this + 0x60);
  plVar1 = *(long **)(this + 0x68);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 001a07c8 to 001a07ca has its CatchHandler @ 001a08a1 */
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x60);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  *(undefined ***)this = &PTR_queryInterface_00703468;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703520;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00703558;
  if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* try { // try from 001a0785 to 001a0787 has its CatchHandler @ 001a0899 */
    (**(code **)(**(long **)(this + 0x28) + 0x10))();
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* try { // try from 001a079c to 001a079e has its CatchHandler @ 001a0891 */
    (**(code **)(**(long **)(this + 0x20) + 0x10))();
    *(undefined8 *)(this + 0x20) = 0;
  }
  return;
}


