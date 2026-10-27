// Function : operator[]
// Namespace: juce:String
// Entry    : 00496c20
// Prototype: uint operator[](String * this, int param_1)
// Body     : 00496c20 - 00496d42


/* juce::String::operator[](int) const */

uint __thiscall juce::String::operator[](String *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  pbVar3 = *(byte **)this;
  if (param_1 < 0) {
    do {
      if ((pbVar3[-1] & 0xc0) == 0x80) {
        if ((pbVar3[-2] & 0xc0) == 0x80) {
          if ((pbVar3[-3] & 0xc0) == 0x80) {
            pbVar3 = pbVar3 + -4;
          }
          else {
            pbVar3 = pbVar3 + -3;
          }
        }
        else {
          pbVar3 = pbVar3 + -2;
        }
      }
      else {
        pbVar3 = pbVar3 + -1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != 0);
  }
  else if (param_1 != 0) {
    iVar5 = param_1 + 1;
    do {
      bVar1 = *pbVar3;
      pbVar2 = pbVar3 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar2 = pbVar3 + 2;
        }
        else {
          pbVar2 = pbVar3 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar3 = pbVar2;
      iVar5 = iVar5 + -1;
    } while (1 < iVar5);
  }
  bVar1 = *pbVar3;
  uVar4 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) == 0) {
      return uVar4 & 0x7f;
    }
    uVar6 = 0x3f;
    if ((bVar1 & 0x20) != 0) {
      uVar6 = uVar4 & 0x10 ^ 0x1f;
    }
    if ((pbVar3[1] & 0xffffffc0) != 0x80) {
      return uVar6 & uVar4;
    }
    uVar4 = pbVar3[1] & 0x3f | (uVar6 & uVar4) << 6;
    if (((bVar1 & 0x20) == 0) || ((pbVar3[2] & 0xc0) != 0x80)) {
      return uVar4;
    }
    uVar4 = pbVar3[2] & 0x3f | uVar4 << 6;
    if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0) && ((pbVar3[3] & 0xffffffc0) == 0x80)) {
      return uVar4 << 6 | pbVar3[3] & 0x3f;
    }
  }
  return uVar4;
}


