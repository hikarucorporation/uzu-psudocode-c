// Function : handleAsyncUpdate
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 001e3c70
// Prototype: undefined handleAsyncUpdate(undefined8 param_1, undefined8 param_2, MouseInputSourceImpl * this)
// Body     : 001e3c70 - 001e3cd8


/* juce::detail::MouseInputSourceImpl::handleAsyncUpdate() */

void __thiscall
juce::detail::MouseInputSourceImpl::handleAsyncUpdate
          (undefined8 param_1,undefined8 param_2,MouseInputSourceImpl *this)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_XMM0_Qa;
  timeval local_28;
  
  lVar1 = *(long *)(this + 0xf0);
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  lVar2 = local_28.tv_usec / 1000 + local_28.tv_sec * 1000;
  if (lVar2 <= lVar1) {
    lVar2 = lVar1;
  }
  setPointerState(extraout_XMM0_Qa,param_2,this,(float *)(this + 0x20),lVar2,'\x01');
  return;
}


