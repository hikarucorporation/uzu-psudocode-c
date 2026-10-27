// Function : allocate<unsigned_long>
// Namespace: juce:HeapBlock_char_true_
// Entry    : 00174720
// Prototype: void allocate<unsigned_long>(HeapBlock<char,true> * this, size_t param_1, int param_2)
// Body     : 00174720 - 00174795


/* void juce::HeapBlock<char, true>::allocate<unsigned long>(unsigned long, bool) */

void __thiscall
juce::HeapBlock<char,true>::allocate<unsigned_long>
          (HeapBlock<char,true> *this,size_t param_1,int param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  free(*(void **)this);
  if (param_2 == 0) {
    if (param_1 == 0) goto LAB_0017478c;
    pvVar1 = malloc(param_1);
  }
  else {
    if (param_1 == 0) {
LAB_0017478c:
      pvVar1 = (void *)0x0;
      goto LAB_0017478e;
    }
    pvVar1 = calloc(param_1,1);
  }
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar2 = PTR_vtable_00715738 + 0x10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
  }
LAB_0017478e:
  *(void **)this = pvVar1;
  return;
}


