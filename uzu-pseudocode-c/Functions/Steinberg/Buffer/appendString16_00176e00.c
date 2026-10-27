// Function : appendString16
// Namespace: Steinberg:Buffer
// Entry    : 00176e00
// Prototype: ulong appendString16(Buffer * this, void * param_1)
// Body     : 00176e00 - 00176ea3


/* Steinberg::Buffer::appendString16(char16_t const*) */

ulong __thiscall Steinberg::Buffer::appendString16(Buffer *this,void *param_1)

{
  short *psVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong unaff_R15;
  
  if (param_1 == (void *)0x0) {
    unaff_R15 = 0;
  }
  else {
    lVar5 = 0;
    do {
      psVar1 = (short *)((long)param_1 + lVar5);
      lVar5 = lVar5 + 2;
    } while (*psVar1 != 0);
    uVar4 = (int)lVar5 + 0x7ffffffeU & 0x7ffffffe;
    uVar6 = *(uint *)(this + 0x14);
    if (*(uint *)(this + 0x10) < uVar6 + uVar4) {
      uVar3 = *(uint *)(this + 0x18);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x18) = 0x1000;
        uVar3 = 0x1000;
      }
      uVar6 = (uVar6 + uVar4 + uVar3) - 1;
      unaff_R15 = 0;
      bVar2 = setSize(this,uVar6 - uVar6 % uVar3);
      if (!bVar2) goto LAB_00176e96;
      uVar6 = *(uint *)(this + 0x14);
    }
    memcpy((void *)((ulong)uVar6 + *(long *)(this + 8)),param_1,(ulong)uVar4);
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar4;
    unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
  }
LAB_00176e96:
  return unaff_R15 & 0xffffffff;
}


