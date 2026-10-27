// Function : shouldBailOut
// Namespace: juce:HierarchyChecker
// Entry    : 0023c160
// Prototype: undefined8 shouldBailOut(HierarchyChecker * this)
// Body     : 0023c160 - 0023c255


/* juce::HierarchyChecker::shouldBailOut() const */

undefined8 __thiscall juce::HierarchyChecker::shouldBailOut(HierarchyChecker *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar3 = *(long **)(this + 8);
  do {
    if (plVar3 == *(long **)(this + 0x10)) {
      plVar3 = *(long **)this;
LAB_0023c1be:
      plVar5 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar5 != (long *)0x0) {
LAB_0023c1cb:
        LOCK();
        plVar3 = plVar5 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
LAB_0023c1d8:
      lVar2 = **(long **)this;
      if (lVar2 == 0) {
        return 1;
      }
      return CONCAT71((int7)((ulong)lVar2 >> 8),*(long *)(lVar2 + 0x10) == 0);
    }
    if ((*plVar3 != 0) && (lVar2 = *(long *)(*plVar3 + 0x10), lVar2 != 0)) {
      plVar3 = *(long **)this;
      puVar4 = *(undefined8 **)(lVar2 + 0xd8);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = operator_new(0x18);
        *(undefined4 *)(puVar4 + 1) = 0;
        *puVar4 = &PTR__ReferenceCountedObject_00714b80;
        puVar4[2] = lVar2;
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
        plVar5 = *(long **)(lVar2 + 0xd8);
        *(undefined8 **)(lVar2 + 0xd8) = puVar4;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
          puVar4 = *(undefined8 **)(lVar2 + 0xd8);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0023c1be;
        }
      }
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
      plVar5 = (long *)*plVar3;
      *plVar3 = (long)puVar4;
      if (plVar5 == (long *)0x0) goto LAB_0023c1d8;
      goto LAB_0023c1cb;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}


