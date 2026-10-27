// Function : queryInterface
// Namespace: Steinberg:Vst:EditController
// Entry    : 001a0d80
// Prototype: undefined8 queryInterface(EditController * this, long * param_1, long * param_2)
// Body     : 001a0d80 - 001a0df3


/* Steinberg::Vst::EditController::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::EditController::queryInterface(EditController *this,long *param_1,long *param_2)

{
  undefined8 uVar1;
  EditController *pEVar2;
  
  if ((*param_1 == IEditController::iid._8_8_) && (param_1[1] == IEditController::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    pEVar2 = this + 0x30;
  }
  else {
    if ((*param_1 != IEditController2::iid._8_8_) || (param_1[1] != IEditController2::iid._16_8_)) {
      uVar1 = ComponentBase::queryInterface((ComponentBase *)this,param_1,param_2);
      return uVar1;
    }
    (**(code **)(*(long *)this + 8))(this);
    pEVar2 = this + 0x38;
  }
  *param_2 = (long)pEVar2;
  return 0;
}


