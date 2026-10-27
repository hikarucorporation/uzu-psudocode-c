// Function : truncate
// Namespace: Steinberg:MemoryStream
// Entry    : 001878d0
// Prototype: ulong truncate(MemoryStream * this)
// Body     : 001878d0 - 00187923


/* Steinberg::MemoryStream::truncate() */

ulong __thiscall Steinberg::MemoryStream::truncate(MemoryStream *this)

{
  size_t __size;
  void *pvVar1;
  undefined8 unaff_RBP;
  ulong uVar2;
  
  if (this[0x30] == (MemoryStream)0x0) {
    uVar2 = 0;
  }
  else {
    __size = *(size_t *)(this + 0x20);
    uVar2 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if (*(size_t *)(this + 0x18) != __size) {
      *(size_t *)(this + 0x18) = __size;
      pvVar1 = *(void **)(this + 0x10);
      if (__size == 0) {
        if (pvVar1 == (void *)0x0) goto LAB_0018791b;
        free(pvVar1);
        pvVar1 = (void *)0x0;
      }
      else if ((pvVar1 == (void *)0x0) || (pvVar1 = realloc(pvVar1,__size), pvVar1 == (void *)0x0))
      goto LAB_0018791b;
      *(void **)(this + 0x10) = pvVar1;
    }
  }
LAB_0018791b:
  return uVar2 & 0xffffffff;
}


