// Function : getTooltip
// Namespace: juce:ComboBox
// Entry    : 0016bfb0
// Prototype: undefined8 getTooltip(undefined8 param_1, long param_2)
// Body     : 0016bfb0 - 0016bfd0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComboBox::getTooltip() */

undefined8 __cdecl juce::ComboBox::getTooltip(undefined8 param_1,long param_2)

{
  (**(code **)(*(long *)(*(long *)(param_2 + 0x1b8) + 0xf0) + 0x10))
            (param_1,*(long *)(param_2 + 0x1b8) + 0xf0);
  return param_1;
}


