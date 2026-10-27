// Function : setSize
// Namespace: Steinberg:Buffer
// Entry    : 001769c0
// Prototype: bool setSize(Buffer * this, uint param_1)
// Body     : 001769c0 - 00176a81


/* Steinberg::Buffer::setSize(unsigned int) */

bool __thiscall Steinberg::Buffer::setSize(Buffer *this,uint param_1)

{
  void *__src;
  uint uVar1;
  void *__ptr;
  
  __ptr = *(void **)(this + 8);
  if (*(uint *)(this + 0x10) == param_1) goto LAB_00176a63;
  if (__ptr == (void *)0x0) {
    __ptr = malloc((ulong)param_1);
  }
  else if (param_1 == 0) {
LAB_00176a3d:
    free(__ptr);
    __ptr = (void *)0x0;
  }
  else {
    __ptr = realloc(__ptr,(ulong)param_1);
    if (__ptr == (void *)0x0) {
      __ptr = malloc((ulong)param_1);
      if (__ptr == (void *)0x0) {
        __ptr = *(void **)(this + 8);
        goto LAB_00176a3d;
      }
      uVar1 = *(uint *)(this + 0x10);
      if (param_1 <= *(uint *)(this + 0x10)) {
        uVar1 = param_1;
      }
      __src = *(void **)(this + 8);
      memcpy(__ptr,__src,(ulong)uVar1);
      free(__src);
    }
  }
  uVar1 = 0;
  if (__ptr != (void *)0x0) {
    uVar1 = param_1;
  }
  if (param_1 == 0) {
    uVar1 = param_1;
  }
  *(void **)(this + 8) = __ptr;
  *(uint *)(this + 0x10) = uVar1;
  if (uVar1 < *(uint *)(this + 0x14)) {
    *(uint *)(this + 0x14) = uVar1;
  }
LAB_00176a63:
  return (__ptr != (void *)0x0) != (param_1 == 0);
}


