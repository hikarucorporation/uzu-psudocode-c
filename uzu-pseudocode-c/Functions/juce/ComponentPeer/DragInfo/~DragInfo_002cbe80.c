// Function : ~DragInfo
// Namespace: juce:ComponentPeer:DragInfo
// Entry    : 002cbe80
// Prototype: undefined ~DragInfo(DragInfo * this)
// Body     : 002cbe80 - 002cbf11


/* juce::ComponentPeer::DragInfo::~DragInfo() */

void __thiscall juce::ComponentPeer::DragInfo::~DragInfo(DragInfo *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      iVar1 = *(int *)(this + 0xc);
      goto joined_r0x002cbefb;
    }
  }
  iVar1 = *(int *)(this + 0xc);
joined_r0x002cbefb:
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)this + lVar2 * 8) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


