// Function : ~StringListParameter
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 001959b0
// Prototype: undefined ~StringListParameter(StringListParameter * this)
// Body     : 001959b0 - 00195a0f


/* Steinberg::Vst::StringListParameter::~StringListParameter() */

void __thiscall Steinberg::Vst::StringListParameter::~StringListParameter(StringListParameter *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR_queryInterface_00704170;
  puVar2 = *(undefined8 **)(this + 0x338);
  puVar1 = *(undefined8 **)(this + 0x340);
  if (puVar2 != puVar1) {
    do {
      free((void *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)(this + 0x338);
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar2);
  return;
}


