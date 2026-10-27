// Function : setComponentHandler
// Namespace: Steinberg:Vst:EditController
// Entry    : 001928b0
// Prototype: undefined8 setComponentHandler(EditController * this, long * param_1)
// Body     : 001928b0 - 0019291a


/* Steinberg::Vst::EditController::setComponentHandler(Steinberg::Vst::IComponentHandler*) */

undefined8 __thiscall
Steinberg::Vst::EditController::setComponentHandler(EditController *this,long *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x40);
  if (plVar1 != param_1) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    *(long **)(this + 0x40) = param_1;
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    if (*(long **)(this + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x48) + 0x10))();
    }
    *(undefined8 *)(this + 0x48) = 0;
    if (param_1 != (long *)0x0) {
      (**(code **)*param_1)(param_1,0x71aca0,this + 0x48);
    }
  }
  return 0;
}


