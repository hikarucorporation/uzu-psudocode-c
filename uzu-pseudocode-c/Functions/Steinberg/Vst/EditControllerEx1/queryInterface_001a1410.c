// Function : queryInterface
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a1410
// Prototype: undefined8 queryInterface(EditControllerEx1 * this, long * param_1, long * param_2)
// Body     : 001a1410 - 001a14ab


/* Steinberg::Vst::EditControllerEx1::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::queryInterface
          (EditControllerEx1 *this,long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  EditControllerEx1 *pEVar3;
  
  lVar1 = *param_1;
  if ((lVar1 == IUnitInfo::iid._8_8_) && (param_1[1] == IUnitInfo::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    pEVar3 = this + 0x88;
  }
  else if ((lVar1 == IEditController::iid._8_8_) && (param_1[1] == IEditController::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    pEVar3 = this + 0x30;
  }
  else {
    if ((lVar1 != IEditController2::iid._8_8_) || (param_1[1] != IEditController2::iid._16_8_)) {
      uVar2 = ComponentBase::queryInterface((ComponentBase *)this,param_1,param_2);
      return uVar2;
    }
    (**(code **)(*(long *)this + 8))(this);
    pEVar3 = this + 0x38;
  }
  *param_2 = (long)pEVar3;
  return 0;
}


