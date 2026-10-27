// Function : setPosition
// Namespace: juce:FileOutputStream
// Entry    : 004a0cd0
// Prototype: bool setPosition(FileOutputStream * this, long param_1)
// Body     : 004a0cd0 - 004a0d79


/* juce::FileOutputStream::setPosition(long long) */

bool __thiscall juce::FileOutputStream::setPosition(FileOutputStream *this,long param_1)

{
  int iVar1;
  long lVar2;
  long in_RAX;
  ssize_t sVar3;
  __off_t _Var4;
  long lVar5;
  int *piVar6;
  long local_18;
  
  lVar5 = param_1;
  if (*(long *)(this + 0x28) == param_1) goto LAB_004a0d30;
  local_18 = in_RAX;
  if (*(size_t *)(this + 0x38) != 0) {
    if (-1 < *(int *)(this + 0x18)) {
      sVar3 = ::write(*(int *)(this + 0x18),*(void **)(this + 0x40),*(size_t *)(this + 0x38));
      if (sVar3 == -1) {
        (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_18);
        lVar2 = *(long *)(this + 0x20);
        *(long *)(this + 0x20) = local_18;
        piVar6 = (int *)(lVar2 + -0x10);
        local_18 = lVar2;
        if (piVar6 != &emptyString) {
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar6);
          }
        }
      }
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (*(int *)(this + 0x18) < 0) {
LAB_004a0d25:
    lVar5 = -1;
  }
  else {
    _Var4 = lseek(*(int *)(this + 0x18),param_1,0);
    if (_Var4 != param_1) goto LAB_004a0d25;
  }
  *(long *)(this + 0x28) = lVar5;
LAB_004a0d30:
  return lVar5 == param_1;
}


