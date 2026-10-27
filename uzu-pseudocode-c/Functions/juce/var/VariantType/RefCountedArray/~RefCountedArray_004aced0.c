// Function : ~RefCountedArray
// Namespace: juce:var:VariantType:RefCountedArray
// Entry    : 004aced0
// Prototype: undefined ~RefCountedArray(RefCountedArray * this)
// Body     : 004aced0 - 004acf30


/* juce::var::VariantType::RefCountedArray::~RefCountedArray() */

void __thiscall juce::var::VariantType::RefCountedArray::~RefCountedArray(RefCountedArray *this)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0x1c)) {
    lVar1 = 8;
    lVar2 = 0;
    do {
                    /* try { // try from 004acefc to 004acefe has its CatchHandler @ 004acf31 */
      (**(code **)(*(long *)(*(long *)(this + 0x10) + -8 + lVar1) + 0x58))
                (*(long *)(this + 0x10) + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(this + 0x1c));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


