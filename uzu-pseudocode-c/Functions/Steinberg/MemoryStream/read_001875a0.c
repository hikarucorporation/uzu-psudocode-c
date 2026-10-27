// Function : read
// Namespace: Steinberg:MemoryStream
// Entry    : 001875a0
// Prototype: undefined8 read(MemoryStream * this, void * param_1, int param_2, int * param_3)
// Body     : 001875a0 - 00187644


/* Steinberg::MemoryStream::read(void*, int, int*) */

undefined8 __thiscall
Steinberg::MemoryStream::read(MemoryStream *this,void *param_1,int param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  size_t __n;
  
  if (*(long *)(this + 0x10) == 0) {
    if (this[0x31] != (MemoryStream)0x0) {
      return 6;
    }
LAB_00187628:
    param_2 = 0;
  }
  else {
    lVar1 = *(long *)(this + 0x20);
    lVar2 = *(long *)(this + 0x28);
    __n = (size_t)param_2;
    if (lVar1 < (long)(lVar2 + __n)) {
      param_2 = (int)lVar1 - (int)lVar2;
      if (param_2 < 1) {
        param_2 = 0;
        *(long *)(this + 0x28) = lVar1;
        goto joined_r0x00187641;
      }
      __n = (size_t)param_2;
    }
    else if (param_2 == 0) goto LAB_00187628;
    memcpy(param_1,(void *)(*(long *)(this + 0x10) + lVar2),__n);
    *(size_t *)(this + 0x28) = __n + *(long *)(this + 0x28);
  }
joined_r0x00187641:
  if (param_3 != (int *)0x0) {
    *param_3 = param_2;
  }
  return 0;
}


