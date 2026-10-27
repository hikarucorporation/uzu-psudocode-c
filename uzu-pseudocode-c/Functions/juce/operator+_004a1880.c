// Function : operator+
// Namespace: juce
// Entry    : 004a1880
// Prototype: juce * operator+(juce * this, String * param_1, char * param_2)
// Body     : 004a1880 - 004a18c7


/* juce::TEMPNAMEPLACEHOLDERVALUE(juce::String, char const*) */

juce * __thiscall juce::operator+(juce *this,String *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  int *piVar3;
  
  sVar2 = strlen(param_2);
  String::appendCharPointer(param_1,param_2,(long)(param_2 + sVar2));
  lVar1 = *(long *)param_1;
  *(long *)this = lVar1;
  piVar3 = (int *)(lVar1 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  return this;
}


