// Function : dropLastCharacters
// Namespace: juce:String
// Entry    : 0049f930
// Prototype: undefined8 * dropLastCharacters(undefined8 * param_1, undefined8 * param_2, int param_3)
// Body     : 0049f930 - 0049f985


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::dropLastCharacters(int) const */

undefined8 * __cdecl
juce::String::dropLastCharacters(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = 0;
  pbVar3 = (byte *)*param_2;
  do {
    bVar2 = *pbVar3;
    if ((char)bVar2 < '\0') {
      do {
        pbVar1 = pbVar3 + 1;
        pbVar3 = pbVar3 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pbVar3 = pbVar3 + 1;
      if (bVar2 == 0) {
        uVar5 = (ulong)(uint)(iVar4 - param_3);
        if (iVar4 - param_3 < 0) {
          uVar5 = 0;
        }
        pbVar3 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                           ((byte *)*param_2,uVar5);
        *param_1 = pbVar3;
        return param_1;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


