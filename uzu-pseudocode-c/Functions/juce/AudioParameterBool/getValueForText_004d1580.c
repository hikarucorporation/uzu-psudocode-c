// Function : getValueForText
// Namespace: juce:AudioParameterBool
// Entry    : 004d1580
// Prototype: undefined8 getValueForText(long param_1)
// Body     : 004d1580 - 004d15b2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioParameterBool::getValueForText(juce::String const&) const */

undefined8 __cdecl juce::AudioParameterBool::getValueForText(long param_1)

{
  char cVar1;
  undefined8 in_RAX;
  
  if (*(long *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_function_call();
  }
  cVar1 = (**(code **)(param_1 + 0x138))(param_1 + 0x120);
  if (cVar1 == '\0') {
    return in_RAX;
  }
  return in_RAX;
}


