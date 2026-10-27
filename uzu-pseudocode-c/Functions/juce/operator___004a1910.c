// Function : operator<<
// Namespace: juce
// Entry    : 004a1910
// Prototype: String * operator<<(String * param_1, uint param_2)
// Body     : 004a1910 - 004a19b0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TEMPNAMEPLACEHOLDERVALUE(juce::String&, int) */

String * __cdecl juce::operator<<(String *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  byte local_1b [11];
  
  if ((int)param_2 < 0) {
    pbVar2 = local_1b + 1;
    uVar1 = -param_2;
    do {
      *pbVar2 = (char)uVar1 + (char)(uVar1 / 10) * -10 | 0x30;
      pbVar2 = pbVar2 + -1;
      bVar3 = 9 < uVar1;
      uVar1 = uVar1 / 10;
    } while (bVar3);
    *pbVar2 = 0x2d;
  }
  else {
    pbVar2 = local_1b + 2;
    do {
      pbVar2[-1] = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
      pbVar2 = pbVar2 + -1;
      bVar3 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar3);
  }
  local_1b[2] = 0;
  String::appendCharPointer(param_1,pbVar2,(long)(local_1b + 3));
  return param_1;
}


