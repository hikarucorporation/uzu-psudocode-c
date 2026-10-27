// Function : ~DynamicObject
// Namespace: juce:DynamicObject
// Entry    : 004b2320
// Prototype: undefined ~DynamicObject(DynamicObject * this)
// Body     : 004b2320 - 004b23b4


/* juce::DynamicObject::~DynamicObject() */

void __thiscall juce::DynamicObject::~DynamicObject(DynamicObject *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  
  *(undefined ***)this = &PTR__DynamicObject_00713988;
  if (0 < *(int *)(this + 0x1c)) {
    lVar4 = 0x10;
    lVar5 = 0;
    do {
      lVar2 = *(long *)(this + 0x10);
                    /* try { // try from 004b236e to 004b2370 has its CatchHandler @ 004b23b5 */
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
    } while (lVar5 < *(int *)(this + 0x1c));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  operator_delete(this);
  return;
}


