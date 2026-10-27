// Function : ParameterContainer
// Namespace: Steinberg:Vst:ParameterContainer
// Entry    : 00195f20
// Prototype: undefined ParameterContainer(ParameterContainer * this)
// Body     : 00195f20 - 00195f4a


/* Steinberg::Vst::ParameterContainer::ParameterContainer() */

void __thiscall Steinberg::Vst::ParameterContainer::ParameterContainer(ParameterContainer *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(ParameterContainer **)(this + 0x20) = this + 0x10;
  *(ParameterContainer **)(this + 0x28) = this + 0x10;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


