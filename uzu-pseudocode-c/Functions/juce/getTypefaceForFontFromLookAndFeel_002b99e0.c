// Function : getTypefaceForFontFromLookAndFeel
// Namespace: juce
// Entry    : 002b99e0
// Prototype: juce * getTypefaceForFontFromLookAndFeel(juce * this, undefined8 param_1)
// Body     : 002b99e0 - 002b9a32


/* juce::getTypefaceForFontFromLookAndFeel(juce::Font const&) */

juce * __thiscall juce::getTypefaceForFontFromLookAndFeel(juce *this,undefined8 param_1)

{
  Desktop *this_00;
  LookAndFeel_V4 *pLVar1;
  
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002b99f7 to 002b9a00 has its CatchHandler @ 002b9a46 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002b9a04 to 002b9a0b has its CatchHandler @ 002b9a33 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar1 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  (**(code **)(*(long *)pLVar1 + 0x48))(this,pLVar1,param_1);
  return this;
}


