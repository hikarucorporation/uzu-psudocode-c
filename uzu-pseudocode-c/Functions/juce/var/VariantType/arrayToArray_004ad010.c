// Function : arrayToArray
// Namespace: juce:var:VariantType
// Entry    : 004ad010
// Prototype: long arrayToArray(long * param_1)
// Body     : 004ad010 - 004ad041


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::arrayToArray(juce::var::ValueUnion const&) */

long __cdecl juce::var::VariantType::arrayToArray(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = __dynamic_cast(*param_1,&ReferenceCountedObject::typeinfo,&RefCountedArray::typeinfo,0);
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}


