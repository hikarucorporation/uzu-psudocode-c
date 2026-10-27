// Function : selectUnit
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a1a80
// Prototype: undefined8 selectUnit(EditControllerEx1 * this, undefined4 param_1)
// Body     : 001a1a80 - 001a1a85


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::selectUnit(int) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::selectUnit(EditControllerEx1 *this,undefined4 param_1)

{
  *(undefined4 *)(this + 0x68) = param_1;
  return 0;
}


