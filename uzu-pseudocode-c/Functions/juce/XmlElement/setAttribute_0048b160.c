// Function : setAttribute
// Namespace: juce:XmlElement
// Entry    : 0048b160
// Prototype: undefined setAttribute(XmlElement * this, long * param_1, long * param_2)
// Body     : 0048b160 - 0048b26a


/* juce::XmlElement::setAttribute(juce::Identifier const&, juce::String const&) */

void __thiscall juce::XmlElement::setAttribute(XmlElement *this,long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  if (*(undefined8 **)(this + 0x10) == (undefined8 *)0x0) {
    puVar4 = operator_new(0x18);
    *puVar4 = 0;
    lVar5 = *param_1;
    puVar4[1] = lVar5;
    piVar6 = (int *)(lVar5 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    lVar5 = *param_2;
    puVar4[2] = lVar5;
    piVar6 = (int *)(lVar5 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    *(undefined8 **)(this + 0x10) = puVar4;
    return;
  }
  lVar5 = *param_1;
  puVar4 = *(undefined8 **)(this + 0x10);
  while (puVar3 = puVar4, puVar3[1] != lVar5) {
    puVar4 = (undefined8 *)*puVar3;
    if ((undefined8 *)*puVar3 == (undefined8 *)0x0) {
      puVar4 = operator_new(0x18);
      *puVar4 = 0;
      puVar4[1] = lVar5;
      piVar6 = (int *)(lVar5 + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      lVar5 = *param_2;
      puVar4[2] = lVar5;
      piVar6 = (int *)(lVar5 + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      *puVar3 = puVar4;
      return;
    }
  }
  lVar5 = *param_2;
  piVar6 = (int *)(lVar5 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    lVar5 = *param_2;
  }
  LOCK();
  lVar2 = puVar3[2];
  puVar3[2] = lVar5;
  UNLOCK();
  piVar6 = (int *)(lVar2 + -0x10);
  if (piVar6 == &emptyString) {
    return;
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
    return;
  }
  return;
}


