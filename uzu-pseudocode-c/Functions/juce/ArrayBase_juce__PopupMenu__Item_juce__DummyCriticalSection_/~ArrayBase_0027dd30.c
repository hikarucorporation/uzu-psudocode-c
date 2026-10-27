// Function : ~ArrayBase
// Namespace: juce:ArrayBase_juce__PopupMenu__Item_juce__DummyCriticalSection_
// Entry    : 0027dd30
// Prototype: undefined ~ArrayBase(ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> * this)
// Body     : 0027dd30 - 0027dd80


/* juce::ArrayBase<juce::PopupMenu::Item, juce::DummyCriticalSection>::~ArrayBase() */

void __thiscall
juce::ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::~ArrayBase
          (ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *this)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      PopupMenu::Item::~Item((Item *)(*(long *)this + lVar2));
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x70;
    } while (lVar1 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


