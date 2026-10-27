// Function : setRotaryParameters
// Namespace: juce:Slider
// Entry    : 002e7a10
// Prototype: undefined setRotaryParameters(undefined8 param_1, long param_2, undefined1 param_3)
// Body     : 002e7a10 - 002e7a25


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Slider::setRotaryParameters(juce::Slider::RotaryParameters) */

void __cdecl juce::Slider::setRotaryParameters(undefined8 param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x1a0);
  *(undefined8 *)(lVar1 + 0x1bc) = param_1;
  *(undefined1 *)(lVar1 + 0x1c4) = param_3;
  return;
}


