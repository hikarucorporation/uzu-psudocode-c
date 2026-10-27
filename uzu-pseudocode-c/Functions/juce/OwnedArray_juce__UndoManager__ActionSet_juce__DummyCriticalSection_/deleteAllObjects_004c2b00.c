// Function : deleteAllObjects
// Namespace: juce:OwnedArray_juce__UndoManager__ActionSet_juce__DummyCriticalSection_
// Entry    : 004c2b00
// Prototype: undefined deleteAllObjects(OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> * this)
// Body     : 004c2b00 - 004c2c2b


/* juce::OwnedArray<juce::UndoManager::ActionSet, juce::DummyCriticalSection>::deleteAllObjects() */

void __thiscall
juce::OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection>::deleteAllObjects
          (OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  
  uVar10 = (ulong)*(uint *)(this + 0xc);
  if ((int)*(uint *)(this + 0xc) < 1) {
    return;
  }
  uVar7 = uVar10;
  do {
    lVar2 = *(long *)this;
    uVar5 = uVar7 - 1 & 0xffffffff;
    plVar3 = *(long **)(lVar2 + uVar5 * 8);
    memmove((void *)(lVar2 + uVar5 * 8),(void *)(lVar2 + uVar5 * 8 + 8),
            (long)((int)uVar10 - (int)uVar7) << 3);
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
    if (plVar3 != (long *)0x0) {
      piVar8 = (int *)(plVar3[2] + -0x10);
      if (piVar8 == &emptyString) {
LAB_004c2b76:
        uVar1 = *(uint *)((long)plVar3 + 0xc);
      }
      else {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 != 0) goto LAB_004c2b76;
        operator_delete__(piVar8);
        uVar1 = *(uint *)((long)plVar3 + 0xc);
      }
      if (0 < (int)uVar1) {
        uVar5 = (ulong)uVar1;
        iVar9 = -uVar1;
        uVar10 = uVar5;
        while( true ) {
          uVar6 = (ulong)((int)uVar10 - 1);
          lVar2 = *plVar3;
          plVar4 = *(long **)(lVar2 + uVar6 * 8);
          memmove((void *)(lVar2 + uVar6 * 8),(void *)(lVar2 + uVar6 * 8 + 8),
                  (long)((int)uVar5 + iVar9) << 3);
          *(int *)((long)plVar3 + 0xc) = *(int *)((long)plVar3 + 0xc) + -1;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
          if (uVar10 < 2) break;
          uVar5 = (ulong)*(uint *)((long)plVar3 + 0xc);
          iVar9 = iVar9 + 1;
          uVar10 = uVar10 - 1;
        }
      }
      *(undefined4 *)((long)plVar3 + 0xc) = 0;
      free((void *)*plVar3);
      operator_delete(plVar3);
    }
    if ((long)uVar7 < 2) {
      return;
    }
    uVar10 = (ulong)*(uint *)(this + 0xc);
    uVar7 = uVar7 - 1;
  } while( true );
}


