// Function : getParameterCount
// Namespace: Steinberg:Vst:EditController
// Entry    : 00192460
// Prototype: ulong getParameterCount(EditController * this)
// Body     : 00192460 - 00192477


/* Steinberg::Vst::EditController::getParameterCount() */

ulong __thiscall Steinberg::Vst::EditController::getParameterCount(EditController *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x50);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  return (ulong)(plVar1[1] - *plVar1) >> 3;
}


