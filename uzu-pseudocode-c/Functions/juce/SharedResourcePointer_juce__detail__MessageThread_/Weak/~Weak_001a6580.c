// Function : ~Weak
// Namespace: juce:SharedResourcePointer_juce__detail__MessageThread_:Weak
// Entry    : 001a6580
// Prototype: undefined ~Weak(Weak * this)
// Body     : 001a6580 - 001a65b8


/* juce::SharedResourcePointer<juce::detail::MessageThread>::Weak::~Weak() */

void __thiscall juce::SharedResourcePointer<juce::detail::MessageThread>::Weak::~Weak(Weak *this)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
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
                    /* WARNING: Could not recover jumptable at 0x001a65a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  return;
}


