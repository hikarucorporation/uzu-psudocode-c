// Function : ~Typeface
// Namespace: juce:Typeface
// Entry    : 002ff280
// Prototype: undefined ~Typeface(Typeface * this)
// Body     : 002ff280 - 002ff2f6


/* juce::Typeface::~Typeface() */

void __thiscall juce::Typeface::~Typeface(Typeface *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined ***)this = &PTR__Typeface_00711980;
  piVar3 = (int *)(*(long *)(this + 0x18) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      lVar2 = *(long *)(this + 0x10);
      goto joined_r0x002ff2e3;
    }
  }
  lVar2 = *(long *)(this + 0x10);
joined_r0x002ff2e3:
  piVar3 = (int *)(lVar2 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


