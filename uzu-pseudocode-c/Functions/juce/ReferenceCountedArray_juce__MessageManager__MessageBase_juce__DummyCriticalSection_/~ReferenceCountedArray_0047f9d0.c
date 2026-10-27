// Function : ~ReferenceCountedArray
// Namespace: juce:ReferenceCountedArray_juce__MessageManager__MessageBase_juce__DummyCriticalSection_
// Entry    : 0047f9d0
// Prototype: undefined ~ReferenceCountedArray(ReferenceCountedArray<juce::MessageManager::MessageBase,juce::DummyCriticalSection> * this)
// Body     : 0047f9d0 - 0047fa5c


/* juce::ReferenceCountedArray<juce::MessageManager::MessageBase,
   juce::DummyCriticalSection>::~ReferenceCountedArray() */

void __thiscall
juce::ReferenceCountedArray<juce::MessageManager::MessageBase,juce::DummyCriticalSection>::
~ReferenceCountedArray
          (ReferenceCountedArray<juce::MessageManager::MessageBase,juce::DummyCriticalSection> *this
          )

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  uVar2 = *(uint *)(this + 0xc);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar8 = -uVar2;
    uVar7 = uVar5;
    while( true ) {
      uVar6 = (ulong)((int)uVar7 - 1);
      lVar3 = *(long *)this;
      plVar4 = *(long **)(lVar3 + uVar6 * 8);
      memmove((void *)(lVar3 + uVar6 * 8),(void *)(lVar3 + uVar6 * 8 + 8),
              (long)((int)uVar5 + iVar8) << 3);
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
      if (uVar7 < 2) break;
      uVar5 = (ulong)*(uint *)(this + 0xc);
      iVar8 = iVar8 + 1;
      uVar7 = uVar7 - 1;
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


