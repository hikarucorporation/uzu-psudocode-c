// Function : ~OwnedArray
// Namespace: juce:OwnedArray_juce__PopupMenu__HelperClasses__MouseSourceState_juce__DummyCriticalSection_
// Entry    : 0027b890
// Prototype: undefined ~OwnedArray(OwnedArray<juce::PopupMenu::HelperClasses::MouseSourceState,juce::DummyCriticalSection> * this)
// Body     : 0027b890 - 0027b924


/* juce::OwnedArray<juce::PopupMenu::HelperClasses::MouseSourceState,
   juce::DummyCriticalSection>::~OwnedArray() */

void __thiscall
juce::OwnedArray<juce::PopupMenu::HelperClasses::MouseSourceState,juce::DummyCriticalSection>::
~OwnedArray(OwnedArray<juce::PopupMenu::HelperClasses::MouseSourceState,juce::DummyCriticalSection>
            *this)

{
  uint uVar1;
  long lVar2;
  Timer *this_00;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(this + 0xc);
  uVar3 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    iVar6 = -uVar1;
    uVar5 = uVar3;
    while( true ) {
      uVar4 = (ulong)((int)uVar5 - 1);
      lVar2 = *(long *)this;
      this_00 = *(Timer **)(lVar2 + uVar4 * 8);
      memmove((void *)(lVar2 + uVar4 * 8),(void *)(lVar2 + uVar4 * 8 + 8),
              (long)((int)uVar3 + iVar6) << 3);
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
      if (this_00 != (Timer *)0x0) {
        Timer::stopTimer(this_00);
        Timer::~Timer(this_00);
        operator_delete(this_00);
      }
      if (uVar5 < 2) break;
      uVar3 = (ulong)*(uint *)(this + 0xc);
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 - 1;
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


