// Function : ~Weak
// Namespace: juce:SharedResourcePointer_juce__CRQLLNF_:Weak
// Entry    : 0016caf0
// Prototype: undefined ~Weak(Weak * this)
// Body     : 0016caf0 - 0016cb28


/* juce::SharedResourcePointer<juce::CRQLLNF>::Weak::~Weak() */

void __thiscall juce::SharedResourcePointer<juce::CRQLLNF>::Weak::~Weak(Weak *this)

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
                    /* WARNING: Could not recover jumptable at 0x0016cb16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  return;
}


