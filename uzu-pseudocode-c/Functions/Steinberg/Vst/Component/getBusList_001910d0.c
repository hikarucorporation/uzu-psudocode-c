// Function : getBusList
// Namespace: Steinberg:Vst:Component
// Entry    : 001910d0
// Prototype: Component * getBusList(Component * this, int param_1, int param_2)
// Body     : 001910d0 - 00191104


/* Steinberg::Vst::Component::getBusList(int, int) */

Component * __thiscall
Steinberg::Vst::Component::getBusList(Component *this,int param_1,int param_2)

{
  Component *pCVar1;
  
  if (param_1 == 1) {
    pCVar1 = this + 0xb0;
    if (param_2 != 0) {
      pCVar1 = this + 0xe0;
    }
    return pCVar1;
  }
  if (param_1 != 0) {
    return (Component *)0x0;
  }
  pCVar1 = this + 0x50;
  if (param_2 != 0) {
    pCVar1 = this + 0x80;
  }
  return pCVar1;
}


