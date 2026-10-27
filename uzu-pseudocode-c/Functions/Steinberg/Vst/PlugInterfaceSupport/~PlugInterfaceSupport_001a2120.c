// Function : ~PlugInterfaceSupport
// Namespace: Steinberg:Vst:PlugInterfaceSupport
// Entry    : 001a2120
// Prototype: undefined ~PlugInterfaceSupport(PlugInterfaceSupport * this)
// Body     : 001a2120 - 001a216e


/* Steinberg::Vst::PlugInterfaceSupport::~PlugInterfaceSupport() */

void __thiscall
Steinberg::Vst::PlugInterfaceSupport::~PlugInterfaceSupport(PlugInterfaceSupport *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR_queryInterface_00704390;
  puVar2 = *(undefined8 **)(this + 0x10);
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2);
      puVar2 = puVar2 + 3;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)(this + 0x10);
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  operator_delete(this);
  return;
}


