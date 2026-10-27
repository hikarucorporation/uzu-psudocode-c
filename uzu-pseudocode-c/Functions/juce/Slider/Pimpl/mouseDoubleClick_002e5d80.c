// Function : mouseDoubleClick
// Namespace: juce:Slider:Pimpl
// Entry    : 002e5d80
// Prototype: undefined mouseDoubleClick(Pimpl * this)
// Body     : 002e5d80 - 002e5df3


/* juce::Slider::Pimpl::mouseDoubleClick() */

void __thiscall juce::Slider::Pimpl::mouseDoubleClick(Pimpl *this)

{
  long lVar1;
  Pimpl *this_00;
  
  if ((((this[0x231] != (Pimpl)0x0) && (*(int *)(this + 0x20) != 8)) &&
      (*(double *)(this + 0xf8) <= *(double *)(this + 0x180))) &&
     (*(double *)(this + 0x180) <= *(double *)(this + 0x100))) {
    lVar1 = *(long *)(this + 0x18);
    sendDragStart(*(Pimpl **)(lVar1 + 0x1a0));
                    /* try { // try from 002e5dce to 002e5dda has its CatchHandler @ 002e5dfc */
    setValue(*(double *)(this + 0x180),this,2);
    this_00 = *(Pimpl **)(lVar1 + 0x1a0);
    if (this_00 != (Pimpl *)0x0) {
                    /* try { // try from 002e5de7 to 002e5deb has its CatchHandler @ 002e5df4 */
      sendDragEnd(this_00);
    }
  }
  return;
}


