// Function : ~$_157
// Namespace: juce:ComponentPeer:handleDragDrop_juce__ComponentPeer__DragInfo_const__:__157
// Entry    : 002cc330
// Prototype: undefined ~$_157($_157 * this)
// Body     : 002cc330 - 002cc45e


/* ~$_157() */

void __thiscall
juce::ComponentPeer::handleDragDrop(juce::ComponentPeer::DragInfo_const&)::$_157::~__157
          (__157 *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(long *)(this + 0x38) + -0x10);
  if (piVar5 == &emptyString) {
LAB_002cc359:
    iVar2 = *(int *)(this + 0x34);
  }
  else {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 != 0) goto LAB_002cc359;
    operator_delete__(piVar5);
    iVar2 = *(int *)(this + 0x34);
  }
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      piVar5 = (int *)(*(long *)(*(long *)(this + 0x28) + lVar4 * 8) + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar5);
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x34));
  }
  *(undefined4 *)(this + 0x34) = 0;
  free(*(void **)(this + 0x28));
  piVar5 = (int *)(*(long *)(this + 0x18) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
      iVar2 = *(int *)(this + 0x14);
      goto joined_r0x002cc3de;
    }
  }
  iVar2 = *(int *)(this + 0x14);
joined_r0x002cc3de:
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      piVar5 = (int *)(*(long *)(*(long *)(this + 8) + lVar4 * 8) + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar5);
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  free(*(void **)(this + 8));
  plVar3 = *(long **)this;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002cc456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}


