// Function : componentParentHierarchyChanged
// Namespace: juce:FocusOutline
// Entry    : 002b8cb0
// Prototype: undefined componentParentHierarchyChanged(FocusOutline * this, long param_1)
// Body     : 002b8cb0 - 002b8d71


/* juce::FocusOutline::componentParentHierarchyChanged(juce::Component&) */

void __thiscall juce::FocusOutline::componentParentHierarchyChanged(FocusOutline *this,long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(this + 0x10) == 0) || (*(long *)(*(long *)(this + 0x10) + 0x10) != param_1)) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
LAB_002b8d47:
    plVar3 = *(long **)(this + 0x20);
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    puVar4 = *(undefined8 **)(lVar2 + 0xd8);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = operator_new(0x18);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR__ReferenceCountedObject_00714b80;
      puVar4[2] = lVar2;
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
      plVar3 = *(long **)(lVar2 + 0xd8);
      *(undefined8 **)(lVar2 + 0xd8) = puVar4;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
        puVar4 = *(undefined8 **)(lVar2 + 0xd8);
        if (puVar4 == (undefined8 *)0x0) goto LAB_002b8d47;
      }
    }
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    plVar3 = *(long **)(this + 0x20);
    *(undefined8 **)(this + 0x20) = puVar4;
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  updateOutlineWindow(this);
  return;
}


