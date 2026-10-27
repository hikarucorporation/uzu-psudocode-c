// Function : ~XmlElement
// Namespace: juce:XmlElement
// Entry    : 0048ea20
// Prototype: undefined ~XmlElement(XmlElement * this)
// Body     : 0048ea20 - 0048eb24


/* juce::XmlElement::~XmlElement() */

void __thiscall juce::XmlElement::~XmlElement(XmlElement *this)

{
  int iVar1;
  XmlElement *this_00;
  undefined8 *puVar2;
  int *piVar3;
  
  this_00 = *(XmlElement **)(this + 8);
  while (this_00 != (XmlElement *)0x0) {
    *(undefined8 *)(this + 8) = *(undefined8 *)this_00;
    ~XmlElement(this_00);
    operator_delete(this_00);
    this_00 = *(XmlElement **)(this + 8);
  }
  puVar2 = *(undefined8 **)(this + 0x10);
  do {
    if (puVar2 == (undefined8 *)0x0) {
      piVar3 = (int *)(*(long *)(this + 0x18) + -0x10);
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
    *(undefined8 *)(this + 0x10) = *puVar2;
    piVar3 = (int *)(puVar2[2] + -0x10);
    if (piVar3 == &emptyString) {
LAB_0048eab2:
      piVar3 = (int *)(puVar2[1] + -0x10);
      if (piVar3 != &emptyString) {
LAB_0048eabf:
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
    }
    else {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 != 0) goto LAB_0048eab2;
      operator_delete__(piVar3);
      piVar3 = (int *)(puVar2[1] + -0x10);
      if (piVar3 != &emptyString) goto LAB_0048eabf;
    }
    operator_delete(puVar2);
    puVar2 = *(undefined8 **)(this + 0x10);
  } while( true );
}


