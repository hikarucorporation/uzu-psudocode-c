// Function : ~ErrorException
// Namespace: juce:JSONParser:ErrorException
// Entry    : 004b0500
// Prototype: undefined ~ErrorException(ErrorException * this)
// Body     : 004b0500 - 004b0525


/* juce::JSONParser::ErrorException::~ErrorException() */

void __thiscall juce::JSONParser::ErrorException::~ErrorException(ErrorException *this)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(long *)this + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return;
    }
  }
  return;
}


