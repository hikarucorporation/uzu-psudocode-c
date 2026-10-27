// Function : copy
// Namespace: Steinberg:Buffer
// Entry    : 00177140
// Prototype: bool copy(Buffer * this, uint param_1, uint param_2, uint param_3)
// Body     : 00177140 - 001771cb


/* Steinberg::Buffer::copy(unsigned int, unsigned int, unsigned int) */

bool __thiscall Steinberg::Buffer::copy(Buffer *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = param_3 + param_1;
  uVar2 = *(uint *)(this + 0x10);
  if ((param_3 != 0) && (uVar1 <= uVar2)) {
    if (uVar2 < param_3 + param_2) {
      setSize(this,param_3 + param_2);
    }
    lVar3 = *(long *)(this + 8);
    if ((param_1 < param_2) && (param_2 < uVar1)) {
      memmove((void *)((ulong)param_2 + lVar3),(void *)((ulong)param_1 + lVar3),(ulong)param_3);
    }
    else {
      memcpy((void *)((ulong)param_2 + lVar3),(void *)((ulong)param_1 + lVar3),(ulong)param_3);
    }
  }
  return uVar1 <= uVar2 && param_3 != 0;
}


