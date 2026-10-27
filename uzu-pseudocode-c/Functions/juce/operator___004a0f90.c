// Function : operator==
// Namespace: juce
// Entry    : 004a0f90
// Prototype: bool operator==(undefined8 * param_1, undefined8 * param_2)
// Body     : 004a0f90 - 004a0fab


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TEMPNAMEPLACEHOLDERVALUE(juce::String const&, juce::String const&) */

bool __cdecl juce::operator==(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  if ((byte *)*param_1 == (byte *)*param_2) {
    return true;
  }
  uVar1 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)*param_1,(byte *)*param_2);
  return uVar1 == 0;
}


