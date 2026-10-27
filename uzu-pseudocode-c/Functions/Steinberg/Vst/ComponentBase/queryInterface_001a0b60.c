// Function : queryInterface
// Namespace: Steinberg:Vst:ComponentBase
// Entry    : 001a0b60
// Prototype: undefined8 queryInterface(ComponentBase * this, long * param_1, long * param_2)
// Body     : 001a0b60 - 001a0c22


/* Steinberg::Vst::ComponentBase::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::ComponentBase::queryInterface(ComponentBase *this,long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 == IPluginBase::iid._8_8_) && (param_1[1] == IPluginBase::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    this = this + 0x10;
  }
  else if ((lVar1 == IConnectionPoint::iid._8_8_) && (param_1[1] == IConnectionPoint::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    this = this + 0x18;
  }
  else {
    if ((((lVar1 != FUnknown::iid._8_8_) || (param_1[1] != FUnknown::iid._16_8_)) &&
        ((lVar1 != IDependent::iid._8_8_ || (param_1[1] != IDependent::iid._16_8_)))) &&
       ((lVar1 != FObject::iid._8_8_ || (param_1[1] != FObject::iid._16_8_)))) {
      *param_2 = 0;
      return 0xffffffff;
    }
    (**(code **)(*(long *)this + 8))(this);
  }
  *param_2 = (long)this;
  return 0;
}


