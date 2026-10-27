// Function : getBusCount
// Namespace: Steinberg:Vst:Component
// Entry    : 00191320
// Prototype: ulong getBusCount(Component * this, int param_1, int param_2)
// Body     : 00191320 - 00191358


/* Steinberg::Vst::Component::getBusCount(int, int) */

ulong __thiscall Steinberg::Vst::Component::getBusCount(Component *this,int param_1,int param_2)

{
  Component *pCVar1;
  Component *pCVar2;
  
  if (param_1 == 1) {
    pCVar1 = this + 0xe0;
    pCVar2 = this + 0xb0;
  }
  else {
    if (param_1 != 0) {
      return 0;
    }
    pCVar1 = this + 0x80;
    pCVar2 = this + 0x50;
  }
  if (param_2 != 0) {
    pCVar2 = pCVar1;
  }
  return (ulong)(*(long *)(pCVar2 + 0x18) - *(long *)(pCVar2 + 0x10)) >> 3;
}


