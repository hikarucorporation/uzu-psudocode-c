// Function : ~array
// Namespace: std:array_std__weak_ptr_juce__MouseCursor__SharedCursorHandle__20ul_
// Entry    : 001e6a30
// Prototype: undefined ~array(array<std::weak_ptr<juce::MouseCursor::SharedCursorHandle>,20ul> * this)
// Body     : 001e6a30 - 001e6a9c


/* std::array<std::weak_ptr<juce::MouseCursor::SharedCursorHandle>, 20ul>::~array() */

void __thiscall
std::array<std::weak_ptr<juce::MouseCursor::SharedCursorHandle>,20ul>::~array
          (array<std::weak_ptr<juce::MouseCursor::SharedCursorHandle>,20ul> *this)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR___libc_single_threaded_00715c50;
  lVar5 = 0x140;
  do {
    plVar3 = *(long **)(this + lVar5 + -8);
    if (plVar3 != (long *)0x0) {
      if (*puVar4 == '\0') {
        LOCK();
        piVar1 = (int *)((long)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = *(int *)((long)plVar3 + 0xc);
        *(int *)((long)plVar3 + 0xc) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0);
  return;
}


