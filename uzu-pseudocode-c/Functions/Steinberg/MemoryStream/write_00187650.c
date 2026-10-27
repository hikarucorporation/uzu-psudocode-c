// Function : write
// Namespace: Steinberg:MemoryStream
// Entry    : 00187650
// Prototype: undefined8 write(MemoryStream * this, void * param_1, int param_2, int * param_3)
// Body     : 00187650 - 00187700


/* Steinberg::MemoryStream::write(void*, int, int*) */

undefined8 __thiscall
Steinberg::MemoryStream::write(MemoryStream *this,void *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  size_t __n;
  
  uVar2 = 6;
  if (this[0x31] == (MemoryStream)0x0) {
    if (param_1 == (void *)0x0) {
      uVar2 = 2;
    }
    else {
      __n = (size_t)param_2;
      uVar3 = *(long *)(this + 0x28) + __n;
      if (*(long *)(this + 0x20) < (long)uVar3) {
        if (*(long *)(this + 0x18) < (long)uVar3) {
          setSize(this,uVar3);
        }
        else {
          *(ulong *)(this + 0x20) = uVar3;
        }
      }
      uVar2 = 0;
      iVar1 = 0;
      if ((*(long *)(this + 0x10) != 0) && (iVar1 = 0, 0 < param_2)) {
        iVar1 = 0;
        if (-1 < *(long *)(this + 0x28)) {
          memcpy((void *)(*(long *)(this + 0x10) + *(long *)(this + 0x28)),param_1,__n);
          *(size_t *)(this + 0x28) = *(long *)(this + 0x28) + __n;
          iVar1 = param_2;
        }
      }
      if (param_3 != (int *)0x0) {
        *param_3 = iVar1;
      }
    }
  }
  return uVar2;
}


