// Function : ~ValueTree
// Namespace: juce:ValueTree
// Entry    : 004c06c0
// Prototype: undefined ~ValueTree(ValueTree * this)
// Body     : 004c06c0 - 004c07e0


/* juce::ValueTree::~ValueTree() */

void __thiscall juce::ValueTree::~ValueTree(ValueTree *this)

{
  SharedObject *pSVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  SharedObject *this_00;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((((*(int *)(this + 0x28) == 2) && (*(int *)(*(long *)(this + 8) + 0xc) != 0)) &&
      (lVar3 = *(long *)this, lVar3 != 0)) && (uVar2 = *(uint *)(lVar3 + 0x44), 0 < (int)uVar2)) {
    lVar4 = *(long *)(lVar3 + 0x38);
    uVar8 = uVar2;
    uVar6 = 0;
    do {
      while( true ) {
        if (*(ValueTree **)(lVar4 + (long)(int)uVar6 * 8) == this) {
          if (uVar6 < uVar2) {
            pvVar5 = (void *)(lVar4 + (long)(int)uVar6 * 8);
            memmove(pvVar5,(void *)((long)pvVar5 + 8),(long)(int)(uVar2 + ~uVar6) << 3);
            iVar9 = *(int *)(lVar3 + 0x44);
            uVar2 = iVar9 - 1;
            *(uint *)(lVar3 + 0x44) = uVar2;
            iVar7 = iVar9 * 2 + -2;
            iVar9 = 0;
            if (-1 < iVar7) {
              iVar9 = iVar7;
            }
            if (iVar9 < *(int *)(lVar3 + 0x40)) {
              uVar8 = 8;
              if (8 < (int)uVar2) {
                uVar8 = uVar2;
              }
              if ((int)uVar8 < *(int *)(lVar3 + 0x40)) {
                pvVar5 = realloc(*(void **)(lVar3 + 0x38),(ulong)uVar8 << 3);
                *(void **)(lVar3 + 0x38) = pvVar5;
                *(uint *)(lVar3 + 0x40) = uVar8;
              }
            }
          }
          goto LAB_004c07a5;
        }
        uVar10 = (int)(uVar6 + uVar8) / 2;
        if (uVar10 == uVar6) goto LAB_004c07a5;
        if (*(ValueTree **)(lVar4 + (long)(int)uVar10 * 8) <= this) break;
        uVar8 = uVar10;
        if ((int)uVar10 <= (int)uVar6) goto LAB_004c07a5;
      }
      uVar6 = uVar10;
    } while ((int)uVar10 < (int)uVar8);
  }
LAB_004c07a5:
  ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 8));
  this_00 = *(SharedObject **)this;
  if (this_00 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = this_00 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      SharedObject::~SharedObject(this_00);
      operator_delete(this_00);
      return;
    }
  }
  return;
}


