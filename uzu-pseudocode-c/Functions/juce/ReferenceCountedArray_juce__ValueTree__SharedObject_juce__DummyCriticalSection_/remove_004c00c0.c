// Function : remove
// Namespace: juce:ReferenceCountedArray_juce__ValueTree__SharedObject_juce__DummyCriticalSection_
// Entry    : 004c00c0
// Prototype: undefined remove(ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection> * this, uint param_1)
// Body     : 004c00c0 - 004c0163


/* juce::ReferenceCountedArray<juce::ValueTree::SharedObject,
   juce::DummyCriticalSection>::remove(int) */

void __thiscall
juce::ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection>::remove
          (ReferenceCountedArray<juce::ValueTree::SharedObject,juce::DummyCriticalSection> *this,
          uint param_1)

{
  SharedObject *pSVar1;
  long lVar2;
  SharedObject *this_00;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  
  if (param_1 < *(uint *)(this + 0xc)) {
    lVar2 = *(long *)this;
    lVar4 = (long)(int)param_1;
    this_00 = *(SharedObject **)(lVar2 + lVar4 * 8);
    memmove((void *)(lVar2 + lVar4 * 8),(void *)(lVar2 + lVar4 * 8 + 8),
            (long)(int)(*(uint *)(this + 0xc) + ~param_1) << 3);
    uVar5 = *(int *)(this + 0xc) - 1;
    *(uint *)(this + 0xc) = uVar5;
    if (this_00 != (SharedObject *)0x0) {
      LOCK();
      pSVar1 = this_00 + 8;
      *(int *)pSVar1 = *(int *)pSVar1 + -1;
      UNLOCK();
      if (*(int *)pSVar1 == 0) {
        ValueTree::SharedObject::~SharedObject(this_00);
        operator_delete(this_00);
      }
      uVar5 = *(uint *)(this + 0xc);
    }
    if (((int)(uVar5 * 2) < *(int *)(this + 8)) && ((int)uVar5 < *(int *)(this + 8))) {
      if ((int)uVar5 < 1) {
        free(*(void **)this);
        *(undefined8 *)this = 0;
      }
      else {
        pvVar3 = realloc(*(void **)this,(ulong)uVar5 << 3);
        *(void **)this = pvVar3;
      }
      *(uint *)(this + 8) = uVar5;
    }
  }
  return;
}


