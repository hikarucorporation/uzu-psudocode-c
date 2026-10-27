// Function : getBusCount
// Namespace: Steinberg:Vst:Component
// Entry    : 00191360
// Prototype: ulong getBusCount(Component * this, int param_1, int param_2)
// Body     : 00191360 - 001913a1


/* non-virtual thunk to Steinberg::Vst::Component::getBusCount(int, int) */

ulong __thiscall Steinberg::Vst::Component::getBusCount(Component *this,int param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar1 = 2;
    lVar2 = 1;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    lVar1 = 4;
    lVar2 = 3;
  }
  if (param_2 != 0) {
    lVar2 = lVar1;
  }
  return (ulong)(*(long *)(this + lVar2 * 0x30 + 8) - *(long *)(this + lVar2 * 0x30)) >> 3;
}


