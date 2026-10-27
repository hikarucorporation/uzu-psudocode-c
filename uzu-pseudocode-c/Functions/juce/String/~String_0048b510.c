// Function : ~String
// Namespace: juce:String
// Entry    : 0048b510
// Prototype: undefined ~String(String * this)
// Body     : 0048b510 - 0048b535


/* juce::String::~String() */

void __thiscall juce::String::~String(String *this)

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


