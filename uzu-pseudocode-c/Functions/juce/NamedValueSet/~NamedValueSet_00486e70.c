// Function : ~NamedValueSet
// Namespace: juce:NamedValueSet
// Entry    : 00486e70
// Prototype: undefined ~NamedValueSet(NamedValueSet * this)
// Body     : 00486e70 - 00486efa


/* juce::NamedValueSet::~NamedValueSet() */

void __thiscall juce::NamedValueSet::~NamedValueSet(NamedValueSet *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar4 = 0x10;
    lVar5 = 0;
    do {
      lVar2 = *(long *)this;
                    /* try { // try from 00486ebd to 00486ebf has its CatchHandler @ 00486efb */
      (**(code **)(*(long *)(lVar2 + -8 + lVar4) + 0x58))(lVar2 + lVar4);
      piVar3 = (int *)(*(long *)(lVar2 + -0x10 + lVar4) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


