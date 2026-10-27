// Function : getParamNormalized
// Namespace: Steinberg:Vst:EditController
// Entry    : 001927f0
// Prototype: undefined8 getParamNormalized(EditController * this)
// Body     : 001927f0 - 00192812


/* non-virtual thunk to Steinberg::Vst::EditController::getParamNormalized(unsigned int) */

undefined8 __thiscall Steinberg::Vst::EditController::getParamNormalized(EditController *this)

{
  undefined8 in_RAX;
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)(this + -0x30) + 0x168))(this + -0x30);
  if (lVar1 == 0) {
    return in_RAX;
  }
  return in_RAX;
}


