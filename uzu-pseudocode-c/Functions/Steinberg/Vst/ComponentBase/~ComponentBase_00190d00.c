// Function : ~ComponentBase
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00190d00
// Prototype: undefined ~ComponentBase(ComponentBase * this)
// Body     : 00190d00 - 00190d53


/* Steinberg::Vst::ComponentBase::~ComponentBase() */

void __thiscall Steinberg::Vst::ComponentBase::~ComponentBase(ComponentBase *this)

{
  *(undefined ***)this = &PTR_queryInterface_00703468;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703520;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00703558;
  if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* try { // try from 00190d30 to 00190d32 has its CatchHandler @ 00190d5c */
    (**(code **)(**(long **)(this + 0x28) + 0x10))();
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* try { // try from 00190d47 to 00190d49 has its CatchHandler @ 00190d54 */
    (**(code **)(**(long **)(this + 0x20) + 0x10))();
    *(undefined8 *)(this + 0x20) = 0;
  }
  return;
}


