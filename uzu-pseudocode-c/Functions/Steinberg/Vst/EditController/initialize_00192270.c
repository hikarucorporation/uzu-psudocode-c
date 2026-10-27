// Function : initialize
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192270
// Prototype: undefined8 initialize(EditController * this, long * param_1)
// Body     : 00192270 - 00192298


/* non-virtual thunk to Steinberg::Vst::EditController::initialize(Steinberg::FUnknown*) */

undefined8 __thiscall Steinberg::Vst::EditController::initialize(EditController *this,long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((*(long *)(this + 0x10) == 0) && (uVar1 = 0, param_1 != (long *)0x0)) {
    *(long **)(this + 0x10) = param_1;
    (**(code **)(*param_1 + 8))(param_1);
    return 0;
  }
  return uVar1;
}


