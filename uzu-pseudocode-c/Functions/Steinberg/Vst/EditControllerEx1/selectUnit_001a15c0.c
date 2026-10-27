// Function : selectUnit
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a15c0
// Prototype: undefined8 selectUnit(EditControllerEx1 * this, undefined4 param_1)
// Body     : 001a15c0 - 001a15c8


/* Steinberg::Vst::EditControllerEx1::selectUnit(int) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::selectUnit(EditControllerEx1 *this,undefined4 param_1)

{
  *(undefined4 *)(this + 0xf0) = param_1;
  return 0;
}


