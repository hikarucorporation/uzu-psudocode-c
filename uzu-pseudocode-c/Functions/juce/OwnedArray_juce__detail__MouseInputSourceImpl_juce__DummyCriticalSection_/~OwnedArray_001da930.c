// Function : ~OwnedArray
// Namespace: juce:OwnedArray_juce__detail__MouseInputSourceImpl_juce__DummyCriticalSection_
// Entry    : 001da930
// Prototype: undefined ~OwnedArray(OwnedArray<juce::detail::MouseInputSourceImpl,juce::DummyCriticalSection> * this)
// Body     : 001da930 - 001da9b5


/* juce::OwnedArray<juce::detail::MouseInputSourceImpl, juce::DummyCriticalSection>::~OwnedArray()
    */

void __thiscall
juce::OwnedArray<juce::detail::MouseInputSourceImpl,juce::DummyCriticalSection>::~OwnedArray
          (OwnedArray<juce::detail::MouseInputSourceImpl,juce::DummyCriticalSection> *this)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar1 = *(uint *)(this + 0xc);
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    iVar7 = -uVar1;
    uVar6 = uVar4;
    while( true ) {
      uVar5 = (ulong)((int)uVar6 - 1);
      lVar2 = *(long *)this;
      plVar3 = *(long **)(lVar2 + uVar5 * 8);
      memmove((void *)(lVar2 + uVar5 * 8),(void *)(lVar2 + uVar5 * 8 + 8),
              (long)((int)uVar4 + iVar7) << 3);
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
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


