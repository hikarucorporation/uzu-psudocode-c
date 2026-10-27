// Function : copy
// Namespace: juce:TextEditor
// Entry    : 00274160
// Prototype: undefined copy(TextEditor * this)
// Body     : 00274160 - 0027425c


/* juce::TextEditor::copy() */

void __thiscall juce::TextEditor::copy(TextEditor *this)

{
  int iVar1;
  XWindowSystem *pXVar2;
  long lVar3;
  int *piVar4;
  char *local_10;
  
  if (*(int *)(this + 0x2a4) == 0) {
    (**(code **)(*(long *)this + 0x30))(&local_10,this,this + 0x270);
    if (*local_10 != '\0') {
                    /* try { // try from 00274197 to 00274227 has its CatchHandler @ 0027425d */
      pXVar2 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      piVar4 = (int *)(local_10 + -0x10);
      if (piVar4 != &emptyString) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      LOCK();
      lVar3 = *(long *)(pXVar2 + 0x1a0);
      *(char **)(pXVar2 + 0x1a0) = local_10;
      UNLOCK();
      piVar4 = (int *)(lVar3 + -0x10);
      if (piVar4 != &emptyString) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar4);
        }
      }
      lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar3 + 0x2f8))(*(undefined8 *)(pXVar2 + 0x148),1,juce_messageWindowHandle,0);
      lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar3 + 0x2f8))
                (*(undefined8 *)(pXVar2 + 0x148),*(undefined8 *)(pXVar2 + 0x138),
                 juce_messageWindowHandle,0);
    }
    piVar4 = (int *)(local_10 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
        return;
      }
    }
  }
  return;
}


