// Function : ~ComponentBase
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00191900
// Prototype: undefined ~ComponentBase(ComponentBase * this)
// Body     : 00191900 - 00191952


/* Steinberg::Vst::ComponentBase::~ComponentBase() */

void __thiscall Steinberg::Vst::ComponentBase::~ComponentBase(ComponentBase *this)

{
  *(undefined ***)this = &PTR_queryInterface_00703468;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703520;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00703558;
  if (*(long **)(this + 0x28) != (long *)0x0) {
                    /* try { // try from 00191930 to 00191932 has its CatchHandler @ 0019195b */
    (**(code **)(**(long **)(this + 0x28) + 0x10))();
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* try { // try from 00191947 to 00191949 has its CatchHandler @ 00191953 */
    (**(code **)(**(long **)(this + 0x20) + 0x10))();
  }
  operator_delete(this);
  return;
}


