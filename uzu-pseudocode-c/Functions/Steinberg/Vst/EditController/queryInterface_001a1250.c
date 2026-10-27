// Function : queryInterface
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a1250
// Prototype: undefined8 queryInterface(EditController * this, long * param_1, long * param_2)
// Body     : 001a1250 - 001a12c7


/* non-virtual thunk to Steinberg::Vst::EditController::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::EditController::queryInterface(EditController *this,long *param_1,long *param_2)

{
  undefined8 uVar1;
  ComponentBase *this_00;
  
  this_00 = (ComponentBase *)(this + -0x30);
  if ((*param_1 == IEditController::iid._8_8_) && (param_1[1] == IEditController::iid._16_8_)) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
  }
  else {
    if ((*param_1 != IEditController2::iid._8_8_) || (param_1[1] != IEditController2::iid._16_8_)) {
      uVar1 = ComponentBase::queryInterface(this_00,param_1,param_2);
      return uVar1;
    }
    (**(code **)(*(long *)this_00 + 8))(this_00);
    this = this + 8;
  }
  *param_2 = (long)this;
  return 0;
}


