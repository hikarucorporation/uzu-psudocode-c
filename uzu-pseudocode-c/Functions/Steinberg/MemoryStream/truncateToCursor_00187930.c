// Function : truncateToCursor
// Namespace: Steinberg:MemoryStream
// Entry    : 00187930
// Prototype: ulong truncateToCursor(MemoryStream * this)
// Body     : 00187930 - 00187987


/* Steinberg::MemoryStream::truncateToCursor() */

ulong __thiscall Steinberg::MemoryStream::truncateToCursor(MemoryStream *this)

{
  size_t __size;
  void *pvVar1;
  undefined8 unaff_RBP;
  ulong uVar2;
  
  __size = *(size_t *)(this + 0x28);
  *(size_t *)(this + 0x20) = __size;
  if (this[0x30] == (MemoryStream)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
    if (*(size_t *)(this + 0x18) != __size) {
      *(size_t *)(this + 0x18) = __size;
      pvVar1 = *(void **)(this + 0x10);
      if (__size == 0) {
        if (pvVar1 == (void *)0x0) goto LAB_0018797f;
        free(pvVar1);
        pvVar1 = (void *)0x0;
      }
      else if ((pvVar1 == (void *)0x0) || (pvVar1 = realloc(pvVar1,__size), pvVar1 == (void *)0x0))
      goto LAB_0018797f;
      *(void **)(this + 0x10) = pvVar1;
    }
  }
LAB_0018797f:
  return uVar2 & 0xffffffff;
}


