// Function : String
// Namespace: juce:String
// Entry    : 004a6db0
// Prototype: undefined String(String * this, long * param_1)
// Body     : 004a6db0 - 004a6dca


/* juce::String::String(juce::String const&) */

void __thiscall juce::String::String(String *this,long *param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  *(long *)this = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}


