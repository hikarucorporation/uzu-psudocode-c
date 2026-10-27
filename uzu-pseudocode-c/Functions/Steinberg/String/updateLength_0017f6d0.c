// Function : updateLength
// Namespace: Steinberg:String
// Entry    : 0017f6d0
// Prototype: undefined updateLength(String * this)
// Body     : 0017f6d0 - 0017f737


/* Steinberg::String::updateLength() */

void __thiscall Steinberg::String::updateLength(String *this)

{
  short *psVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  if (((byte)this[0x13] & 0x40) == 0) {
    pcVar3 = (char *)(**(code **)(*(long *)this + 0x18))(this);
    uVar5 = 0xffffffff;
    do {
      uVar5 = uVar5 + 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
  }
  else {
    lVar4 = (**(code **)(*(long *)this + 0x20))(this);
    uVar6 = 0;
    do {
      psVar1 = (short *)(lVar4 + uVar6);
      uVar6 = uVar6 + 2;
    } while (*psVar1 != 0);
    uVar5 = ((uint)(uVar6 >> 1) & 0x7fffffff) + 0x3fffffff;
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xc0000000 | uVar5 & 0x3fffffff;
  return;
}


