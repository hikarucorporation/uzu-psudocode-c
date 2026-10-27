// Function : startsWithIgnoreCase
// Namespace: juce:String
// Entry    : 004a6640
// Prototype: undefined8 startsWithIgnoreCase(String * this, byte * param_1)
// Body     : 004a6640 - 004a6690


/* juce::String::startsWithIgnoreCase(juce::StringRef) const */

undefined8 __thiscall juce::String::startsWithIgnoreCase(String *this,byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 extraout_var;
  int iVar5;
  
  iVar5 = 0;
  pbVar4 = param_1;
  do {
    bVar2 = *pbVar4;
    if ((char)bVar2 < '\0') {
      do {
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pbVar4 = pbVar4 + 1;
      if (bVar2 == 0) {
        uVar3 = CharacterFunctions::
                compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (*(byte **)this,param_1,iVar5);
        return CONCAT71((int7)(CONCAT44(extraout_var,uVar3) >> 8),uVar3 == 0);
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


