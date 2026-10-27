// Function : operator[]
// Namespace: juce:CharPointer_UTF8
// Entry    : 00492a90
// Prototype: uint operator[](undefined8 * param_1)
// Body     : 00492a90 - 00492b1f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::CharPointer_UTF8::operator[](int) const */

uint __cdecl juce::CharPointer_UTF8::operator[](undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  uVar3 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) == 0) {
      return uVar3 & 0x7f;
    }
    uVar4 = 0x3f;
    if ((bVar1 & 0x20) != 0) {
      uVar4 = uVar3 & 0x10 ^ 0x1f;
    }
    if ((pbVar2[1] & 0xffffffc0) != 0x80) {
      return uVar4 & uVar3;
    }
    uVar3 = pbVar2[1] & 0x3f | (uVar4 & uVar3) << 6;
    if (((bVar1 & 0x20) == 0) || ((pbVar2[2] & 0xc0) != 0x80)) {
      return uVar3;
    }
    uVar3 = pbVar2[2] & 0x3f | uVar3 << 6;
    if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0) && ((pbVar2[3] & 0xffffffc0) == 0x80)) {
      return uVar3 << 6 | pbVar2[3] & 0x3f;
    }
  }
  return uVar3;
}


