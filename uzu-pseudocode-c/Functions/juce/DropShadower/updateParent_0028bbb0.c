// Function : updateParent
// Namespace: juce:DropShadower
// Entry    : 0028bbb0
// Prototype: undefined updateParent(DropShadower * this)
// Body     : 0028bbb0 - 0028bd44


/* juce::DropShadower::updateParent() */

void __thiscall juce::DropShadower::updateParent(DropShadower *this)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__ptr;
  int iVar5;
  long lVar6;
  uint uVar7;
  
  if ((*(long *)(this + 0x38) != 0) &&
     (lVar4 = *(long *)(*(long *)(this + 0x38) + 0x10), lVar4 != 0)) {
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
              *)(lVar4 + 0xa0),(long)this);
  }
  if (((*(long *)(this + 8) == 0) || (lVar4 = *(long *)(*(long *)(this + 8) + 0x10), lVar4 == 0)) ||
     (lVar4 = *(long *)(lVar4 + 0x30), lVar4 == 0)) {
LAB_0028bc67:
    puVar3 = (undefined8 *)0x0;
    plVar2 = *(long **)(this + 0x38);
    *(undefined8 *)(this + 0x38) = 0;
  }
  else {
    puVar3 = *(undefined8 **)(lVar4 + 0xd8);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = operator_new(0x18);
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = &PTR__ReferenceCountedObject_00714b80;
      puVar3[2] = lVar4;
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
      plVar2 = *(long **)(lVar4 + 0xd8);
      *(undefined8 **)(lVar4 + 0xd8) = puVar3;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        puVar3 = *(undefined8 **)(lVar4 + 0xd8);
        if (puVar3 == (undefined8 *)0x0) goto LAB_0028bc67;
      }
    }
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0x38);
    *(undefined8 **)(this + 0x38) = puVar3;
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    puVar3 = *(undefined8 **)(this + 0x38);
  }
  if ((puVar3 != (undefined8 *)0x0) && (lVar4 = puVar3[2], lVar4 != 0)) {
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::initialiseIfNeeded
              ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(lVar4 + 0xa0));
    puVar3 = *(undefined8 **)(lVar4 + 0xa0);
    __ptr = (void *)*puVar3;
    iVar5 = *(int *)((long)puVar3 + 0xc);
    lVar4 = (long)iVar5;
    if (lVar4 != 0) {
      lVar6 = 0;
      do {
        if (*(DropShadower **)((long)__ptr + lVar6) == this) {
          return;
        }
        lVar6 = lVar6 + 8;
      } while (lVar4 * 8 != lVar6);
    }
    if ((int)*(uint *)(puVar3 + 1) <= iVar5) {
      uVar7 = iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar3 + 1) != uVar7) {
        if ((int)uVar7 < 1) {
          free(__ptr);
          *puVar3 = 0;
          __ptr = (void *)0x0;
        }
        else {
          __ptr = realloc(__ptr,(ulong)uVar7 << 3);
          *puVar3 = __ptr;
        }
      }
      *(uint *)(puVar3 + 1) = uVar7;
      iVar5 = *(int *)((long)puVar3 + 0xc);
      lVar4 = (long)iVar5;
    }
    *(int *)((long)puVar3 + 0xc) = iVar5 + 1;
    *(DropShadower **)((long)__ptr + lVar4 * 8) = this;
  }
  return;
}


