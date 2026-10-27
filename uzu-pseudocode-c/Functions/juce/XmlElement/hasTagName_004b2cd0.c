// Function : hasTagName
// Namespace: juce:XmlElement
// Entry    : 004b2cd0
// Prototype: bool hasTagName(long param_1, byte * param_2)
// Body     : 004b2cd0 - 004b2ce0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XmlElement::hasTagName(juce::StringRef) const */

bool __cdecl juce::XmlElement::hasTagName(long param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (*(byte **)(param_1 + 0x18),param_2);
  return uVar1 == 0;
}


