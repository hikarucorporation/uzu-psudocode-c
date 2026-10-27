// Function : setKnobMode
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a0ff0
// Prototype: undefined8 setKnobMode(undefined8 param_1_00, undefined4 param_2)
// Body     : 001a0ff0 - 001a0ff8


/* Steinberg::Vst::EditController::setKnobMode(int) */

undefined8 __thiscall
Steinberg::Vst::EditController::setKnobMode(undefined8 param_1_00,undefined4 param_2)

{
  hostKnobMode = param_2;
  return 0;
}


