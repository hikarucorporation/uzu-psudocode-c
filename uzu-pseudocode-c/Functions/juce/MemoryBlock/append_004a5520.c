// Function : append
// Namespace: juce:MemoryBlock
// Entry    : 004a5520
// Prototype: undefined append(MemoryBlock * this, void * param_1, size_t param_2)
// Body     : 004a5520 - 004a55cf


/* juce::MemoryBlock::append(void const*, unsigned long) */

void __thiscall juce::MemoryBlock::append(MemoryBlock *this,void *param_1,size_t param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  size_t __size;
  
  if (param_2 == 0) {
    return;
  }
  pvVar2 = *(void **)this;
  lVar1 = *(long *)(this + 8);
  __size = lVar1 + param_2;
  if (__size == 0) {
    free(pvVar2);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    pvVar2 = (void *)0x0;
  }
  else {
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
    *(void **)this = pvVar2;
    *(size_t *)(this + 8) = __size;
  }
  memcpy((void *)((long)pvVar2 + lVar1),param_1,param_2);
  return;
}


