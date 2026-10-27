// Function : setSize
// Namespace: juce:MemoryBlock
// Entry    : 0048aed0
// Prototype: undefined setSize(MemoryBlock * this, ulong param_1, byte param_2)
// Body     : 0048aed0 - 0048af78


/* juce::MemoryBlock::setSize(unsigned long, bool) */

void __thiscall juce::MemoryBlock::setSize(MemoryBlock *this,ulong param_1,byte param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (*(ulong *)(this + 8) != param_1) {
    pvVar2 = *(void **)this;
    if (param_1 != 0) {
      if (pvVar2 == (void *)0x0) {
        HeapBlock<char,true>::allocate<unsigned_long>
                  ((HeapBlock<char,true> *)this,param_1,(uint)param_2);
      }
      else {
        pvVar2 = realloc(pvVar2,param_1);
        if (pvVar2 == (void *)0x0) {
          puVar3 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar3 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar3,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
        }
        *(void **)this = pvVar2;
        if ((param_2 != 0) && (uVar1 = *(ulong *)(this + 8), uVar1 < param_1)) {
          memset((void *)((long)pvVar2 + uVar1),0,param_1 - uVar1);
        }
      }
      *(ulong *)(this + 8) = param_1;
      return;
    }
    free(pvVar2);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


