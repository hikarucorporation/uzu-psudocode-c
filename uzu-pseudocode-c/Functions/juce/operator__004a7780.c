// Function : operator<
// Namespace: juce
// Entry    : 004a7780
// Prototype: uint operator<(undefined8 * param_1, byte * param_2)
// Body     : 004a7780 - 004a778d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TEMPNAMEPLACEHOLDERVALUE(juce::String const&, juce::StringRef) */

uint __cdecl juce::operator<(undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*param_1,param_2);
  return uVar1 >> 0x1f;
}


