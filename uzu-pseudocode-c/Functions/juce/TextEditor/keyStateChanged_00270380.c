// Function : keyStateChanged
// Namespace: juce:TextEditor
// Entry    : 00270380
// Prototype: bool keyStateChanged(TextEditor * this, int param_1)
// Body     : 00270380 - 002703e9


/* non-virtual thunk to juce::TextEditor::keyStateChanged(bool) */

bool __thiscall juce::TextEditor::keyStateChanged(TextEditor *this,int param_1)

{
  bool bVar1;
  XWindowSystem *pXVar2;
  
  if (param_1 != 0) {
    if (this[0x1cd] != (TextEditor)0x0) {
LAB_0027038e:
      return ((byte)ModifierKeys::currentModifiers & 2) == 0;
    }
    pXVar2 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    bVar1 = XWindowSystem::isKeyCurrentlyDown(pXVar2,0x1b);
    if ((!bVar1) || (((byte)ModifierKeys::currentModifiers & 7) != 0)) {
      pXVar2 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      bVar1 = XWindowSystem::isKeyCurrentlyDown(pXVar2,0xd);
      if ((!bVar1) || (((byte)ModifierKeys::currentModifiers & 7) != 0)) goto LAB_0027038e;
    }
  }
  return false;
}


