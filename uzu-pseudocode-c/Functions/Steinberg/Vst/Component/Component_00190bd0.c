// Function : Component
// Namespace: Steinberg:Vst:Component
// Entry    : 00190bd0
// Prototype: undefined Component(Component * this)
// Body     : 00190bd0 - 00190cc8


/* Steinberg::Vst::Component::Component() */

void __thiscall Steinberg::Vst::Component::Component(Component *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_queryInterface_00703270;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703370;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_007033a8;
  *(undefined ***)(this + 0x30) = &PTR_queryInterface_007033e8;
  *(undefined ***)(this + 0x38) = &PTR__FUID_00704de0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x58) = 1;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x50) = &PTR_queryInterface_00704e00;
  *(undefined4 *)(this + 0x88) = 1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined ***)(this + 0x80) = &PTR_queryInterface_00704e00;
  *(undefined8 *)(this + 0xa8) = 0x100000000;
  *(undefined4 *)(this + 0xb8) = 1;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined ***)(this + 0xb0) = &PTR_queryInterface_00704e00;
  *(undefined8 *)(this + 0xd8) = 1;
  *(undefined4 *)(this + 0xe8) = 1;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined ***)(this + 0xe0) = &PTR_queryInterface_00704e00;
  *(undefined8 *)(this + 0x108) = 0x100000001;
  return;
}


