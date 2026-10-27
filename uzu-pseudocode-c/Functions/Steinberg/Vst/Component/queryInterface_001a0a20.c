// Function : queryInterface
// Namespace: Steinberg:Vst:Component
// Entry    : 001a0a20
// Prototype: undefined8 queryInterface(Component * this, long * param_1, long * param_2)
// Body     : 001a0a20 - 001a0a72


/* non-virtual thunk to Steinberg::Vst::Component::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::Component::queryInterface(Component *this,long *param_1,long *param_2)

{
  undefined8 uVar1;
  ComponentBase *this_00;
  
  this_00 = (ComponentBase *)(this + -0x18);
  if ((*param_1 == IComponent::iid._8_8_) && (param_1[1] == IComponent::iid._16_8_)) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    *param_2 = (long)(this + 0x18);
    return 0;
  }
  uVar1 = ComponentBase::queryInterface(this_00,param_1,param_2);
  return uVar1;
}


