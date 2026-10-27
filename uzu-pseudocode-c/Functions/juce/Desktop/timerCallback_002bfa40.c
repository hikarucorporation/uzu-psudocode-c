// Function : timerCallback
// Namespace: juce:Desktop
// Entry    : 002bfa40
// Prototype: undefined timerCallback(Desktop * this)
// Body     : 002bfa40 - 002bfab9


/* juce::Desktop::timerCallback() */

void __thiscall juce::Desktop::timerCallback(Desktop *this)

{
  Desktop *this_00;
  undefined8 uVar1;
  float fVar2;
  
  if (instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002bfa60 to 002bfa67 has its CatchHandler @ 002bfaba */
    Desktop(this_00);
    instance = this_00;
  }
  uVar1 = detail::MouseInputSourceImpl::getScreenPosition
                    ((MouseInputSourceImpl *)**(undefined8 **)(*(long *)(instance + 0x40) + 0x28));
  if ((((*(float *)(this + 0xe8) == (float)uVar1) &&
       (!NAN(*(float *)(this + 0xe8)) && !NAN((float)uVar1))) &&
      (fVar2 = (float)((ulong)uVar1 >> 0x20), *(float *)(this + 0xec) == fVar2)) &&
     (!NAN(*(float *)(this + 0xec)) && !NAN(fVar2))) {
    return;
  }
  sendMouseMove(this);
  return;
}


