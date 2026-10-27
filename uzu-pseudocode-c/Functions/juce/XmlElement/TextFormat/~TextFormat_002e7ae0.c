// Function : ~TextFormat
// Namespace: juce:XmlElement:TextFormat
// Entry    : 002e7ae0
// Prototype: undefined ~TextFormat(TextFormat * this)
// Body     : 002e7ae0 - 002e7b67


/* juce::XmlElement::TextFormat::~TextFormat() */

void __thiscall juce::XmlElement::TextFormat::~TextFormat(TextFormat *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      lVar2 = *(long *)(this + 8);
      goto joined_r0x002e7b39;
    }
  }
  lVar2 = *(long *)(this + 8);
joined_r0x002e7b39:
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
  piVar3 = (int *)(*(long *)this + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      return;
    }
  }
  return;
}


