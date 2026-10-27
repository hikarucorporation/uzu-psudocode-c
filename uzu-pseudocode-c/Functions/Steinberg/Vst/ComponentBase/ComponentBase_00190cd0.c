// Function : ComponentBase
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 00190cd0
// Prototype: undefined ComponentBase(ComponentBase * this)
// Body     : 00190cd0 - 00190cfe


/* Steinberg::Vst::ComponentBase::ComponentBase() */

void __thiscall Steinberg::Vst::ComponentBase::ComponentBase(ComponentBase *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00703468;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703520;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00703558;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


