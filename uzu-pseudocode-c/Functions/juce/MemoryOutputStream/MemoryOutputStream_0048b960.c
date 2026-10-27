// Function : MemoryOutputStream
// Namespace: juce:MemoryOutputStream
// Entry    : 0048b960
// Prototype: undefined MemoryOutputStream(MemoryOutputStream * this, size_t param_1)
// Body     : 0048b960 - 0048ba0b


/* juce::MemoryOutputStream::MemoryOutputStream(unsigned long) */

void __thiscall
juce::MemoryOutputStream::MemoryOutputStream(MemoryOutputStream *this,size_t param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &PTR__OutputStream_00713440;
  puVar1 = operator_new__(0x1b);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 4;
  *(undefined2 *)(puVar1 + 4) = 0xa0d;
  *(undefined1 *)((long)puVar1 + 0x12) = 0;
  *(undefined4 **)(this + 8) = puVar1 + 4;
  *(undefined ***)this = &PTR__MemoryOutputStream_00713378;
  *(MemoryOutputStream **)(this + 0x10) = this + 0x18;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (param_1 != 0) {
    pvVar2 = malloc(param_1);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar3 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 0048b9f6 to 0048ba0b has its CatchHandler @ 0048ba0c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
    }
    *(void **)(this + 0x18) = pvVar2;
    *(size_t *)(this + 0x20) = param_1;
  }
  return;
}


