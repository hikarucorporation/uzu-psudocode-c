// Function : ~OwnedArray
// Namespace: juce:OwnedArray_juce__AudioProcessor__Bus_juce__DummyCriticalSection_
// Entry    : 004c8590
// Prototype: undefined ~OwnedArray(OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection> * this)
// Body     : 004c8590 - 004c865f


/* juce::OwnedArray<juce::AudioProcessor::Bus, juce::DummyCriticalSection>::~OwnedArray() */

void __thiscall
juce::OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection>::~OwnedArray
          (OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection> *this)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  
  uVar2 = *(uint *)(this + 0xc);
  uVar5 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar9 = -uVar2;
    uVar7 = uVar5;
    while( true ) {
      uVar6 = (ulong)((int)uVar7 - 1);
      lVar3 = *(long *)this;
      pvVar4 = *(void **)(lVar3 + uVar6 * 8);
      memmove((void *)(lVar3 + uVar6 * 8),(void *)(lVar3 + uVar6 * 8 + 8),
              (long)((int)uVar5 + iVar9) << 3);
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
      if (pvVar4 != (void *)0x0) {
        free(*(void **)((long)pvVar4 + 0x60));
        free(*(void **)((long)pvVar4 + 0x38));
        free(*(void **)((long)pvVar4 + 0x10));
        piVar8 = (int *)(*(long *)((long)pvVar4 + 8) + -0x10);
        if (piVar8 != &emptyString) {
          LOCK();
          iVar1 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar8);
          }
        }
        operator_delete(pvVar4);
      }
      if (uVar7 < 2) break;
      uVar5 = (ulong)*(uint *)(this + 0xc);
      iVar9 = iVar9 + 1;
      uVar7 = uVar7 - 1;
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


