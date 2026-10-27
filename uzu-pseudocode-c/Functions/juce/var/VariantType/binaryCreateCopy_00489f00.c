// Function : binaryCreateCopy
// Namespace: juce:var:VariantType
// Entry    : 00489f00
// Prototype: undefined binaryCreateCopy(undefined8 * param_1, long * param_2)
// Body     : 00489f00 - 00489f8e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::binaryCreateCopy(juce::var::ValueUnion&, juce::var::ValueUnion const&) */

void __cdecl juce::var::VariantType::binaryCreateCopy(undefined8 *param_1,long *param_2)

{
  size_t __size;
  undefined8 *puVar1;
  void *__dest;
  undefined8 *puVar2;
  
  puVar1 = operator_new(0x10);
  puVar2 = (undefined8 *)*param_2;
  *puVar1 = 0;
  __size = puVar2[1];
  puVar1[1] = __size;
  if (__size != 0) {
    __dest = malloc(__size);
    if (__dest == (void *)0x0) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar2 = PTR_vtable_00715738 + 0x10;
                    /* try { // try from 00489f79 to 00489f8e has its CatchHandler @ 00489f8f */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,PTR_typeinfo_00715888,PTR__bad_alloc_00715478);
    }
    *puVar1 = __dest;
    memcpy(__dest,(void *)*puVar2,__size);
  }
  *param_1 = puVar1;
  return;
}


