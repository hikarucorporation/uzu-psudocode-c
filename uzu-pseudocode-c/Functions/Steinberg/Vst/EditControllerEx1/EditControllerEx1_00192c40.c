// Function : EditControllerEx1
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00192c40
// Prototype: undefined EditControllerEx1(EditControllerEx1 * this)
// Body     : 00192c40 - 00192d45


/* Steinberg::Vst::EditControllerEx1::EditControllerEx1() */

void __thiscall Steinberg::Vst::EditControllerEx1::EditControllerEx1(EditControllerEx1 *this)

{
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(EditControllerEx1 **)(this + 0x70) = this + 0x60;
  *(EditControllerEx1 **)(this + 0x78) = this + 0x60;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined ***)this = &PTR_queryInterface_00703a08;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703c10;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00703c48;
  *(undefined ***)(this + 0x30) = &PTR_queryInterface_00703c88;
  *(undefined ***)(this + 0x38) = &PTR_queryInterface_00703d28;
  *(undefined ***)(this + 0x88) = &PTR_queryInterface_00703d68;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(EditControllerEx1 **)(this + 0xd8) = this + 200;
  *(EditControllerEx1 **)(this + 0xe0) = this + 200;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
                    /* try { // try from 00192d32 to 00192d3b has its CatchHandler @ 00192d46 */
  UpdateHandler::instance('\x01');
  return;
}


