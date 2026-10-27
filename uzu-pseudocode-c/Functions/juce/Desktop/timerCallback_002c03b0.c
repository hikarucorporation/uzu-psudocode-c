// Function : timerCallback
// Namespace: juce:Desktop
// Entry    : 002c03b0
// Prototype: undefined timerCallback(Desktop * this)
// Body     : 002c03b0 - 002c042d


/* non-virtual thunk to juce::Desktop::timerCallback() */

void __thiscall juce::Desktop::timerCallback(Desktop *this)

{
  Desktop *this_00;
  undefined8 uVar1;
  float fVar2;
  
  if (instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002c03d0 to 002c03d7 has its CatchHandler @ 002c042e */
    Desktop(this_00);
    instance = this_00;
  }
  uVar1 = detail::MouseInputSourceImpl::getScreenPosition
                    ((MouseInputSourceImpl *)**(undefined8 **)(*(long *)(instance + 0x40) + 0x28));
  if ((((*(float *)(this + 0xe0) == (float)uVar1) &&
       (!NAN(*(float *)(this + 0xe0)) && !NAN((float)uVar1))) &&
      (fVar2 = (float)((ulong)uVar1 >> 0x20), *(float *)(this + 0xe4) == fVar2)) &&
     (!NAN(*(float *)(this + 0xe4)) && !NAN(fVar2))) {
    return;
  }
  sendMouseMove(this + -8);
  return;
}


