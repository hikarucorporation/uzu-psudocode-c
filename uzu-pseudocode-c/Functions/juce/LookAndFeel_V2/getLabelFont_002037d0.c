// Function : getLabelFont
// Namespace: juce:LookAndFeel_V2
// Entry    : 002037d0
// Prototype: LookAndFeel_V2 * getLabelFont(LookAndFeel_V2 * this, undefined8 param_1, long param_2)
// Body     : 002037d0 - 002037e7


/* non-virtual thunk to juce::LookAndFeel_V2::getLabelFont(juce::Label&) */

LookAndFeel_V2 * __thiscall
juce::LookAndFeel_V2::getLabelFont(LookAndFeel_V2 *this,undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x1b0);
  *(long *)this = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return this;
}


