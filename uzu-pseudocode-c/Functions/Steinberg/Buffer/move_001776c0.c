// Function : move
// Namespace: Steinberg:Buffer
// Entry    : 001776c0
// Prototype: undefined move(Buffer * this, uint param_1, uint param_2)
// Body     : 001776c0 - 0017774e


/* Steinberg::Buffer::move(int, unsigned char) */

void __thiscall Steinberg::Buffer::move(Buffer *this,uint param_1,uint param_2)

{
  uint uVar1;
  ulong __n;
  void *pvVar2;
  ulong __n_00;
  
  uVar1 = *(uint *)(this + 0x10);
  __n = (ulong)uVar1;
  if (__n == 0) {
    return;
  }
  __n_00 = (ulong)param_1;
  if ((int)param_1 < 1) {
    pvVar2 = *(void **)(this + 8);
    if (uVar1 <= -param_1) {
      memset(pvVar2,param_2 & 0xff,__n);
      return;
    }
    __n_00 = (ulong)-param_1;
    memmove(pvVar2,(void *)((long)pvVar2 + __n_00),(ulong)(param_1 + uVar1));
    pvVar2 = (void *)(((ulong)*(uint *)(this + 0x10) + *(long *)(this + 8)) - __n_00);
  }
  else {
    pvVar2 = *(void **)(this + 8);
    if (uVar1 <= param_1) {
      memset(pvVar2,param_2 & 0xff,__n);
      return;
    }
    memmove((void *)((long)pvVar2 + __n_00),pvVar2,(ulong)(uVar1 - param_1));
    pvVar2 = *(void **)(this + 8);
  }
  memset(pvVar2,param_2 & 0xff,__n_00);
  return;
}


