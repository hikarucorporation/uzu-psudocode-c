// Function : queryInterface
// Namespace: Steinberg:Vst:HostApplication
// Entry    : 00187f20
// Prototype: undefined8 queryInterface(HostApplication * this, long * param_1, undefined8 * param_2)
// Body     : 00187f20 - 00187f99


/* Steinberg::Vst::HostApplication::queryInterface(char const*, void**) */

undefined8 __thiscall
Steinberg::Vst::HostApplication::queryInterface
          (HostApplication *this,long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (((*param_1 == FUnknown::iid._8_8_) && (param_1[1] == FUnknown::iid._16_8_)) ||
     ((*param_1 == IHostApplication::iid._8_8_ && (param_1[1] == IHostApplication::iid._16_8_)))) {
    (**(code **)(*(long *)this + 8))(this);
    *param_2 = this;
    return 0;
  }
  puVar1 = *(undefined8 **)(this + 0x10);
  if ((puVar1 == (undefined8 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,param_1,param_2), iVar2 != 0)) {
    *param_2 = 0;
    return 1;
  }
  return 0;
}


