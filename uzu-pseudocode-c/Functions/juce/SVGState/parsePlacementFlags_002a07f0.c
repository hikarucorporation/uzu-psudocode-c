// Function : parsePlacementFlags
// Namespace: juce:SVGState
// Entry    : 002a07f0
// Prototype: uint parsePlacementFlags(String * param_1)
// Body     : 002a07f0 - 002a08a8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SVGState::parsePlacementFlags(juce::String const&) */

uint __cdecl juce::SVGState::parsePlacementFlags(String *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (**(byte **)param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (*(byte **)param_1,&DAT_0065e5f2);
    if (uVar1 == 0) {
      uVar1 = 0x40;
    }
    else {
      uVar2 = juce::String::containsIgnoreCase(param_1,(byte *)"slice");
      uVar3 = juce::String::containsIgnoreCase(param_1,&DAT_005e3a86);
      uVar4 = 1;
      if ((char)uVar3 == '\0') {
        uVar3 = juce::String::containsIgnoreCase(param_1,&DAT_005e3a8b);
        uVar4 = (uint)(byte)((byte)uVar3 ^ 1) * 2 + 2;
      }
      uVar3 = juce::String::containsIgnoreCase(param_1,&DAT_005e3a90);
      uVar1 = 8;
      if ((char)uVar3 == '\0') {
        uVar3 = juce::String::containsIgnoreCase(param_1,&DAT_005e3a95);
        uVar1 = (uint)(byte)((byte)uVar3 ^ 1) * 0x10 + 0x10;
      }
      uVar1 = uVar4 | ((uint)uVar2 & 0xff) << 7 | uVar1;
    }
  }
  return uVar1;
}


