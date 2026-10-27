// Function : ~SharedObject
// Namespace: juce:ValueTree:SharedObject
// Entry    : 004bfe80
// Prototype: undefined ~SharedObject(SharedObject * this)
// Body     : 004bfe80 - 004c0052


/* juce::ValueTree::SharedObject::~SharedObject() */

void __thiscall juce::ValueTree::SharedObject::~SharedObject(SharedObject *this)

{
  SharedObject *pSVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  SharedObject *pSVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  
  if (0 < (int)*(uint *)(this + 0x34)) {
    uVar5 = (ulong)*(uint *)(this + 0x34);
    do {
      uVar10 = uVar5 - 1;
      pSVar7 = *(SharedObject **)(*(long *)(this + 0x28) + (uVar10 & 0xffffffff) * 8);
      if (pSVar7 == (SharedObject *)0x0) {
        pSVar7 = (SharedObject *)0x0;
      }
      else {
        LOCK();
        *(int *)(pSVar7 + 8) = *(int *)(pSVar7 + 8) + 1;
        UNLOCK();
      }
      *(undefined8 *)(pSVar7 + 0x48) = 0;
                    /* try { // try from 004bfeda to 004bfeec has its CatchHandler @ 004c005b */
      ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection>::remove
                ((ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection> *)
                 (this + 0x28),(uint)uVar10);
      sendParentChangeMessage(pSVar7);
      LOCK();
      pSVar1 = pSVar7 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        ~SharedObject(pSVar7);
        operator_delete(pSVar7);
      }
      bVar4 = 1 < uVar5;
      uVar5 = uVar10;
    } while (bVar4);
  }
  *(undefined4 *)(this + 0x44) = 0;
  free(*(void **)(this + 0x38));
  uVar2 = *(uint *)(this + 0x34);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar12 = -uVar2;
    uVar10 = uVar5;
    while( true ) {
      uVar6 = (ulong)((int)uVar10 - 1);
      lVar8 = *(long *)(this + 0x28);
      pSVar7 = *(SharedObject **)(lVar8 + uVar6 * 8);
      memmove((void *)(lVar8 + uVar6 * 8),(void *)(lVar8 + uVar6 * 8 + 8),
              (long)((int)uVar5 + iVar12) << 3);
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + -1;
      if (pSVar7 != (SharedObject *)0x0) {
        LOCK();
        pSVar1 = pSVar7 + 8;
        *(int *)pSVar1 = *(int *)pSVar1 + -1;
        UNLOCK();
        if (*(int *)pSVar1 == 0) {
          ~SharedObject(pSVar7);
          operator_delete(pSVar7);
        }
      }
      if (uVar10 < 2) break;
      uVar5 = (ulong)*(uint *)(this + 0x34);
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 - 1;
    }
  }
  *(undefined4 *)(this + 0x34) = 0;
  free(*(void **)(this + 0x28));
  if (0 < *(int *)(this + 0x24)) {
    lVar8 = 0x10;
    lVar11 = 0;
    do {
      lVar3 = *(long *)(this + 0x18);
                    /* try { // try from 004bffde to 004bffe0 has its CatchHandler @ 004c0053 */
      (**(code **)(*(long *)(lVar3 + -8 + lVar8) + 0x58))(lVar8 + lVar3);
      piVar9 = (int *)(*(long *)(lVar3 + -0x10 + lVar8) + -0x10);
      if (piVar9 != &emptyString) {
        LOCK();
        iVar12 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar12 == 0) {
          operator_delete__(piVar9);
        }
      }
      lVar11 = lVar11 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar11 < *(int *)(this + 0x24));
  }
  *(undefined4 *)(this + 0x24) = 0;
  free(*(void **)(this + 0x18));
  piVar9 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    iVar12 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar12 == 0) {
      operator_delete__(piVar9);
    }
  }
  *(undefined ***)this = &PTR__ReferenceCountedObject_00706828;
  return;
}


