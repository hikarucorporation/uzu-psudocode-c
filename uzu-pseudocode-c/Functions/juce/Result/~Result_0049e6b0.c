// Function : ~Result
// Namespace: juce:Result
// Entry    : 0049e6b0
// Prototype: undefined ~Result(Result * this)
// Body     : 0049e6b0 - 0049e6d2


/* juce::Result::~Result() */

void __thiscall juce::Result::~Result(Result *this)

{
  int iVar1;
  Result *pRVar2;
  
  pRVar2 = this + -0x10;
  if (pRVar2 != (Result *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pRVar2;
    *(int *)pRVar2 = *(int *)pRVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pRVar2);
      return;
    }
  }
  return;
}


