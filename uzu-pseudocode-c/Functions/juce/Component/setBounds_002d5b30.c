// Function : setBounds
// Namespace: juce:Component
// Entry    : 002d5b30
// Prototype: undefined setBounds(Component * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 002d5b30 - 002d5b45


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::setBounds(juce::Rectangle<int>) */

void __cdecl juce::Component::setBounds(Component *param_1,undefined8 param_2,undefined8 param_3)

{
  setBounds(param_1,(int)param_2,(int)((ulong)param_2 >> 0x20),(int)param_3,
            (int)((ulong)param_3 >> 0x20));
  return;
}


