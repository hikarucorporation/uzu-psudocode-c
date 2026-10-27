// Function : setParamNormalized
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192860
// Prototype: bool setParamNormalized(undefined8 param_1, EditController * this)
// Body     : 00192860 - 001928a0


/* non-virtual thunk to Steinberg::Vst::EditController::setParamNormalized(unsigned int, double) */

bool __thiscall
Steinberg::Vst::EditController::setParamNormalized(undefined8 param_1,EditController *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -0x30) + 0x168))(this + -0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x98))(param_1,plVar1);
  }
  return plVar1 == (long *)0x0;
}


