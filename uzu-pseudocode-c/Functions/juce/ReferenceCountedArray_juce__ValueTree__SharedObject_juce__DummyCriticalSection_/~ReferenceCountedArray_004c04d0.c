// Function : ~ReferenceCountedArray
// Namespace: juce:ReferenceCountedArray_juce__ValueTree__SharedObject_juce__DummyCriticalSection_
// Entry    : 004c04d0
// Prototype: undefined ~ReferenceCountedArray(ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection> * this)
// Body     : 004c04d0 - 004c0563


/* juce::ReferenceCountedArray<juce::ValueTree::SharedObject,
   juce::DummyCriticalSection>::~ReferenceCountedArray() */

void __thiscall
juce::ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection>::
~ReferenceCountedArray
          (ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection> *this)

{
  SharedObject *pSVar1;
  uint uVar2;
  long lVar3;
  SharedObject *this_00;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar2 = *(uint *)(this + 0xc);
  uVar4 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar7 = -uVar2;
    uVar6 = uVar4;
    while( true ) {
      uVar5 = (ulong)((int)uVar6 - 1);
      lVar3 = *(long *)this;
      this_00 = *(SharedObject **)(lVar3 + uVar5 * 8);
      memmove((void *)(lVar3 + uVar5 * 8),(void *)(lVar3 + uVar5 * 8 + 8),
              (long)((int)uVar4 + iVar7) << 3);
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
      if (this_00 != (SharedObject *)0x0) {
        LOCK();
        pSVar1 = this_00 + 8;
        *(int *)pSVar1 = *(int *)pSVar1 + -1;
        UNLOCK();
        if (*(int *)pSVar1 == 0) {
          ValueTree::SharedObject::~SharedObject(this_00);
          operator_delete(this_00);
        }
      }
      if (uVar6 < 2) break;
      uVar4 = (ulong)*(uint *)(this + 0xc);
      iVar7 = iVar7 + 1;
      uVar6 = uVar6 - 1;
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


