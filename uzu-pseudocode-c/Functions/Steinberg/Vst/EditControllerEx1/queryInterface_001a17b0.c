// Function : queryInterface
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a17b0
// Prototype: undefined8 queryInterface(EditControllerEx1 * this, long * param_1, long * param_2)
// Body     : 001a17b0 - 001a184f


/* non-virtual thunk to Steinberg::Vst::EditControllerEx1::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::queryInterface
          (EditControllerEx1 *this,long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ComponentBase *this_00;
  
  this_00 = (ComponentBase *)(this + -0x30);
  lVar1 = *param_1;
  if ((lVar1 == IUnitInfo::iid._8_8_) && (param_1[1] == IUnitInfo::iid._16_8_)) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    this = this + 0x58;
  }
  else if ((lVar1 == IEditController::iid._8_8_) && (param_1[1] == IEditController::iid._16_8_)) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
  }
  else {
    if ((lVar1 != IEditController2::iid._8_8_) || (param_1[1] != IEditController2::iid._16_8_)) {
      uVar2 = ComponentBase::queryInterface(this_00,param_1,param_2);
      return uVar2;
    }
    (**(code **)(*(long *)this_00 + 8))(this_00);
    this = this + 8;
  }
  *param_2 = (long)this;
  return 0;
}


