// Function : appendString8
// Namespace: Steinberg:Buffer
// Entry    : 00176d70
// Prototype: ulong appendString8(Buffer * this, char * param_1)
// Body     : 00176d70 - 00176df1


/* Steinberg::Buffer::appendString8(char const*) */

ulong __thiscall Steinberg::Buffer::appendString8(Buffer *this,char *param_1)

{
  bool bVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  ulong unaff_RBP;
  
  if (param_1 == (char *)0x0) {
    unaff_RBP = 0;
  }
  else {
    sVar3 = strlen(param_1);
    uVar4 = *(uint *)(this + 0x14);
    uVar2 = (int)sVar3 + uVar4;
    if (*(uint *)(this + 0x10) < uVar2) {
      uVar4 = *(uint *)(this + 0x18);
      if (uVar4 == 0) {
        *(undefined4 *)(this + 0x18) = 0x1000;
        uVar4 = 0x1000;
      }
      uVar2 = (uVar2 + uVar4) - 1;
      unaff_RBP = 0;
      bVar1 = setSize(this,uVar2 - uVar2 % uVar4);
      if (!bVar1) goto LAB_00176de5;
      uVar4 = *(uint *)(this + 0x14);
    }
    memcpy((void *)((ulong)uVar4 + *(long *)(this + 8)),param_1,sVar3 & 0xffffffff);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + (int)sVar3;
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  }
LAB_00176de5:
  return unaff_RBP & 0xffffffff;
}


