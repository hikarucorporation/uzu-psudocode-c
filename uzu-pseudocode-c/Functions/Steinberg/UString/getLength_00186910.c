// Function : getLength
// Namespace: Steinberg:UString
// Entry    : 00186910
// Prototype: ulong getLength(UString * this)
// Body     : 00186910 - 0018695d


/* Steinberg::UString::getLength() const */

ulong __thiscall Steinberg::UString::getLength(UString *this)

{
  short sVar1;
  ulong uVar2;
  ulong uVar3;
  short *psVar4;
  
  uVar3 = (ulong)*(uint *)(this + 8);
  if (uVar3 == 0) {
    return 0;
  }
  psVar4 = *(short **)this;
  if ((int)*(uint *)(this + 8) < 1) {
    uVar3 = 0xffffffff;
    do {
      uVar3 = (ulong)((int)uVar3 + 1);
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
  }
  else {
    uVar2 = 0;
    do {
      if (psVar4[uVar2] == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
  }
  return uVar3;
}


