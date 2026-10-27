// Function : trimExternalBlockSize
// Namespace: juce:MemoryOutputStream
// Entry    : 0048cb80
// Prototype: undefined trimExternalBlockSize(MemoryOutputStream * this)
// Body     : 0048cb80 - 0048cc16


/* juce::MemoryOutputStream::trimExternalBlockSize() */

void __thiscall juce::MemoryOutputStream::trimExternalBlockSize(MemoryOutputStream *this)

{
  MemoryOutputStream *pMVar1;
  size_t __size;
  void *pvVar2;
  undefined8 *puVar3;
  
  pMVar1 = *(MemoryOutputStream **)(this + 0x10);
  if (((pMVar1 != this + 0x18) && (pMVar1 != (MemoryOutputStream *)0x0)) &&
     (__size = *(size_t *)(this + 0x38), *(size_t *)(pMVar1 + 8) != __size)) {
    pvVar2 = *(void **)pMVar1;
    if (__size == 0) {
      free(pvVar2);
      *(long *)pMVar1 = 0;
      *(long *)(pMVar1 + 8) = 0;
      return;
    }
    if (pvVar2 == (void *)0x0) {
      pvVar2 = malloc(__size);
    }
    else {
      pvVar2 = realloc(pvVar2,__size);
    }
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar3 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
    }
    *(void **)pMVar1 = pvVar2;
    *(size_t *)(pMVar1 + 8) = __size;
  }
  return;
}


