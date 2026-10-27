// Function : queryInterface
// Namespace: Steinberg:Vst:Component
// Entry    : 001a0610
// Prototype: undefined8 queryInterface(Component * this, long * param_1, long * param_2)
// Body     : 001a0610 - 001a065e


/* Steinberg::Vst::Component::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::Component::queryInterface(Component *this,long *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == IComponent::iid._8_8_) && (param_1[1] == IComponent::iid._16_8_)) {
    (**(code **)(*(long *)this + 8))(this);
    *param_2 = (long)(this + 0x30);
    return 0;
  }
  uVar1 = ComponentBase::queryInterface((ComponentBase *)this,param_1,param_2);
  return uVar1;
}


