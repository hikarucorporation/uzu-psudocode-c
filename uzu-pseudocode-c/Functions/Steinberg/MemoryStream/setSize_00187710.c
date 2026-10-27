// Function : setSize
// Namespace: Steinberg:MemoryStream
// Entry    : 00187710
// Prototype: undefined setSize(MemoryStream * this, ulong param_1)
// Body     : 00187710 - 0018781b


/* Steinberg::MemoryStream::setSize(long) */

void __thiscall Steinberg::MemoryStream::setSize(MemoryStream *this,ulong param_1)

{
  ulong uVar1;
  void *__src;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  
  if ((long)param_1 < 1) {
    if ((this[0x30] != (MemoryStream)0x0) && (*(void **)(this + 0x10) != (void *)0x0)) {
      free(*(void **)(this + 0x10));
    }
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    return;
  }
  uVar1 = *(ulong *)(this + 0x18);
  uVar3 = uVar1;
  if ((long)uVar1 < (long)param_1) {
    uVar3 = param_1;
  }
  uVar3 = uVar3 + 0xfff & 0xfffffffffffff000;
  if (uVar3 == uVar1) goto LAB_001877f2;
  pvVar2 = *(void **)(this + 0x10);
  if ((pvVar2 != (void *)0x0) && (this[0x30] == (MemoryStream)0x0)) {
    this[0x31] = (MemoryStream)0x1;
    return;
  }
  this[0x30] = (MemoryStream)0x1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = malloc(uVar3);
LAB_001877e5:
    if (pvVar2 == (void *)0x0) {
      if ((long)uVar3 < 1) goto LAB_0018780a;
LAB_00187805:
      this[0x31] = (MemoryStream)0x1;
LAB_0018780a:
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      return;
    }
  }
  else {
    pvVar2 = realloc(pvVar2,uVar3);
    if ((pvVar2 != (void *)0x0) || ((long)uVar3 < 1)) goto LAB_001877e5;
    pvVar2 = malloc(uVar3);
    if (pvVar2 == (void *)0x0) goto LAB_00187805;
    __src = *(void **)(this + 0x10);
    __n = *(size_t *)(this + 0x18);
    if ((long)uVar3 <= (long)*(size_t *)(this + 0x18)) {
      __n = uVar3;
    }
    memcpy(pvVar2,__src,__n);
    free(__src);
  }
  *(void **)(this + 0x10) = pvVar2;
  *(ulong *)(this + 0x18) = uVar3;
LAB_001877f2:
  *(ulong *)(this + 0x20) = param_1;
  return;
}


