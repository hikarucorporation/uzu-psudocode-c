// Function : endsWithChar
// Namespace: juce:String
// Entry    : 0049f830
// Prototype: ulong endsWithChar(char * param_1)
// Body     : 0049f830 - 0049f921


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::String::endsWithChar(wchar_t) const */

ulong __cdecl juce::String::endsWithChar(char *param_1)

{
  uint uVar1;
  byte bVar2;
  size_t sVar3;
  undefined7 uVar5;
  ulong uVar4;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  
  if (*param_1 == '\0') {
    return 0;
  }
  sVar3 = strlen(param_1);
  pcVar6 = param_1 + (sVar3 - 1);
  uVar5 = (undefined7)(sVar3 >> 8);
  uVar4 = CONCAT71(uVar5,param_1[sVar3 - 1]);
  if ((param_1[sVar3 - 1] & 0xc0U) == 0x80) {
    uVar4 = CONCAT71(uVar5,param_1[sVar3 - 2]);
    pcVar6 = param_1 + (sVar3 - 2);
    if ((param_1[sVar3 - 2] & 0xc0U) == 0x80) {
      uVar4 = CONCAT71(uVar5,param_1[sVar3 - 3]);
      pcVar6 = param_1 + (sVar3 - 3);
      if ((param_1[sVar3 - 3] & 0xc0U) == 0x80) {
        uVar4 = CONCAT71(uVar5,param_1[sVar3 - 4]);
        pcVar6 = param_1 + (sVar3 - 4);
      }
    }
  }
  uVar1 = (uint)uVar4;
  uVar7 = uVar1 & 0xff;
  if ((char)(byte)uVar4 < '\0') {
    uVar5 = (undefined7)(uVar4 >> 8);
    if ((uVar4 & 0x40) == 0) {
      return CONCAT71(uVar5,(uVar1 & 0x7f) == 0x20);
    }
    uVar8 = 0x3f;
    if ((uVar4 & 0x20) != 0) {
      uVar8 = uVar1 & 0x10 ^ 0x1f;
    }
    uVar7 = uVar7 & uVar8;
    if (((((byte)pcVar6[1] & 0xffffffc0) == 0x80) &&
        (uVar7 = (byte)pcVar6[1] & 0x3f | uVar7 << 6, (uVar4 & 0x20) != 0)) &&
       (((byte)pcVar6[2] & 0xffffffc0) == 0x80)) {
      bVar2 = (byte)uVar4 >> 5 & (uVar4 & 0x10) == 0;
      uVar4 = CONCAT71(uVar5,bVar2);
      uVar7 = (byte)pcVar6[2] & 0x3f | uVar7 << 6;
      if (bVar2 == 0) {
        uVar4 = 0;
        if (((byte)pcVar6[3] & 0xffffffc0) == 0x80) {
          return (ulong)((uVar7 << 6 | (byte)pcVar6[3] & 0x3f) == 0x20);
        }
      }
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),uVar7 == 0x20);
}


