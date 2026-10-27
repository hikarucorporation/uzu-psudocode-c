// Function : read
// Namespace: juce:FileInputStream
// Entry    : 0049e760
// Prototype: undefined read(FileInputStream * this, void * param_1, int param_2)
// Body     : 0049e760 - 0049e7cf


/* juce::FileInputStream::read(void*, int) */

void __thiscall juce::FileInputStream::read(FileInputStream *this,void *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ssize_t sVar3;
  int *piVar4;
  long local_10;
  
  if (-1 < *(int *)(this + 0x10)) {
    sVar3 = ::read(*(int *)(this + 0x10),param_1,(long)param_2);
    if (-1 < sVar3) {
      *(long *)(this + 0x18) = *(long *)(this + 0x18) + sVar3;
      return;
    }
    (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_10);
    lVar2 = *(long *)(this + 0x20);
    *(long *)(this + 0x20) = local_10;
    piVar4 = (int *)(lVar2 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_10 = lVar2;
        operator_delete__(piVar4);
      }
    }
  }
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x18);
  return;
}


