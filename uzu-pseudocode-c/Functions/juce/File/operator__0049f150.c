// Function : operator=
// Namespace: juce:File
// Entry    : 0049f150
// Prototype: File * operator=(File * this, long * param_1)
// Body     : 0049f150 - 0049f195


/* juce::File::TEMPNAMEPLACEHOLDERVALUE(juce::File const&) */

File * __thiscall juce::File::operator=(File *this,long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = *param_1;
  piVar4 = (int *)(lVar3 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    lVar3 = *param_1;
  }
  LOCK();
  lVar2 = *(long *)this;
  *(long *)this = lVar3;
  UNLOCK();
  piVar4 = (int *)(lVar2 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
      return this;
    }
  }
  return this;
}


