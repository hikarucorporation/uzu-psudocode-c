// Function : endsWith
// Namespace: juce:String
// Entry    : 004a8450
// Prototype: undefined8 endsWith(String * this, char * param_1)
// Body     : 004a8450 - 004a86d9


/* juce::String::endsWith(juce::StringRef) const */

undefined8 __thiscall juce::String::endsWith(String *this,char *param_1)

{
  byte bVar1;
  char *__s;
  size_t sVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  __s = *(char **)this;
  sVar2 = strlen(__s);
  pcVar8 = __s + sVar2;
  sVar2 = strlen(param_1);
  pcVar3 = param_1 + sVar2;
  do {
    if ((pcVar8 <= __s) || (pcVar3 <= param_1)) {
      return CONCAT71((int7)((ulong)pcVar3 >> 8),pcVar3 == param_1);
    }
    bVar4 = pcVar8[-1];
    if ((bVar4 & 0xc0) == 0x80) {
      bVar4 = pcVar8[-2];
      if ((bVar4 & 0xc0) == 0x80) {
        bVar4 = pcVar8[-3];
        if ((bVar4 & 0xc0) == 0x80) {
          bVar4 = pcVar8[-4];
          pcVar8 = pcVar8 + -4;
        }
        else {
          pcVar8 = pcVar8 + -3;
        }
      }
      else {
        pcVar8 = pcVar8 + -2;
      }
    }
    else {
      pcVar8 = pcVar8 + -1;
    }
    bVar1 = pcVar3[-1];
    if ((bVar1 & 0xc0) == 0x80) {
      bVar1 = pcVar3[-2];
      if ((bVar1 & 0xc0) == 0x80) {
        bVar1 = pcVar3[-3];
        if ((bVar1 & 0xc0) == 0x80) {
          bVar1 = pcVar3[-4];
          pcVar3 = pcVar3 + -4;
        }
        else {
          pcVar3 = pcVar3 + -3;
        }
      }
      else {
        pcVar3 = pcVar3 + -2;
      }
    }
    else {
      pcVar3 = pcVar3 + -1;
    }
    uVar7 = (uint)bVar4;
    if ((char)bVar4 < '\0') {
      if ((bVar4 & 0x40) == 0) {
        uVar7 = bVar4 & 0x7f;
      }
      else {
        uVar7 = bVar4 & 0x10 ^ 0x1f;
        if ((bVar4 & 0x20) == 0) {
          uVar7 = 0x3f;
        }
        uVar7 = bVar4 & uVar7;
        if (((((pcVar8[1] & 0xc0U) == 0x80) &&
             (uVar7 = (byte)pcVar8[1] & 0x3f | uVar7 << 6, (bVar4 & 0x20) != 0)) &&
            ((pcVar8[2] & 0xc0U) == 0x80)) &&
           ((uVar7 = (byte)pcVar8[2] & 0x3f | uVar7 << 6, (bVar4 >> 5 & (bVar4 & 0x10) == 0) == 0 &&
            (((byte)pcVar8[3] & 0xffffffc0) == 0x80)))) {
          uVar7 = uVar7 << 6 | (byte)pcVar8[3] & 0x3f;
        }
      }
    }
    uVar5 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar5 = uVar5 & 0x7f;
      }
      else {
        uVar6 = uVar5 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar6 = 0x3f;
        }
        uVar5 = uVar5 & uVar6;
        if ((((pcVar3[1] & 0xc0U) == 0x80) &&
            (uVar5 = (byte)pcVar3[1] & 0x3f | uVar5 << 6, (bVar1 & 0x20) != 0)) &&
           (((pcVar3[2] & 0xc0U) == 0x80 &&
            ((uVar5 = (byte)pcVar3[2] & 0x3f | uVar5 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0
             && (((byte)pcVar3[3] & 0xffffffc0) == 0x80)))))) {
          uVar5 = uVar5 << 6 | (byte)pcVar3[3] & 0x3f;
        }
      }
    }
  } while (uVar7 == uVar5);
  return 0;
}


