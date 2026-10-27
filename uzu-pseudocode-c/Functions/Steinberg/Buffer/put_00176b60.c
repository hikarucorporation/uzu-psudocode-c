// Function : put
// Namespace: Steinberg:Buffer
// Entry    : 00176b60
// Prototype: ulong put(Buffer * this, void * param_1, uint param_2)
// Body     : 00176b60 - 00176bdb


/* Steinberg::Buffer::put(void const*, unsigned int) */

ulong __thiscall Steinberg::Buffer::put(Buffer *this,void *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ulong unaff_RBP;
  uint uVar3;
  
  if (param_1 == (void *)0x0) {
    unaff_RBP = 0;
  }
  else {
    uVar3 = *(uint *)(this + 0x14);
    if (*(uint *)(this + 0x10) < uVar3 + param_2) {
      uVar2 = *(uint *)(this + 0x18);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x18) = 0x1000;
        uVar2 = 0x1000;
      }
      uVar3 = (uVar3 + param_2 + uVar2) - 1;
      unaff_RBP = 0;
      bVar1 = setSize(this,uVar3 - uVar3 % uVar2);
      if (!bVar1) goto LAB_00176bcf;
      uVar3 = *(uint *)(this + 0x14);
    }
    memcpy((void *)((ulong)uVar3 + *(long *)(this + 8)),param_1,(ulong)param_2);
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + param_2;
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  }
LAB_00176bcf:
  return unaff_RBP & 0xffffffff;
}


