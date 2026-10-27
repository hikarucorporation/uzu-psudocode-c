// Function : preallocate
// Namespace: juce:MemoryOutputStream
// Entry    : 0048ba50
// Prototype: undefined preallocate(MemoryOutputStream * this, long param_1)
// Body     : 0048ba50 - 0048bac7


/* juce::MemoryOutputStream::preallocate(unsigned long) */

void __thiscall juce::MemoryOutputStream::preallocate(MemoryOutputStream *this,long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong __size;
  
  if ((this != (MemoryOutputStream *)0x0) && (__size = param_1 + 1, *(ulong *)(this + 8) < __size))
  {
    if (*(void **)this == (void *)0x0) {
      pvVar1 = malloc(__size);
    }
    else {
      pvVar1 = realloc(*(void **)this,__size);
    }
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar2 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
    }
    *(void **)this = pvVar1;
    *(ulong *)(this + 8) = __size;
  }
  return;
}


