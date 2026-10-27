// Function : flush
// Namespace: juce:FileOutputStream
// Entry    : 004a0bf0
// Prototype: undefined flush(FileOutputStream * this)
// Body     : 004a0bf0 - 004a0cc4


/* juce::FileOutputStream::flush() */

void __thiscall juce::FileOutputStream::flush(FileOutputStream *this)

{
  long lVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  long local_10;
  
  if (*(size_t *)(this + 0x38) != 0) {
    if (-1 < *(int *)(this + 0x18)) {
      sVar3 = ::write(*(int *)(this + 0x18),*(void **)(this + 0x40),*(size_t *)(this + 0x38));
      if (sVar3 == -1) {
        (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_10);
        lVar1 = *(long *)(this + 0x20);
        *(long *)(this + 0x20) = local_10;
        piVar4 = (int *)(lVar1 + -0x10);
        local_10 = lVar1;
        if (piVar4 != &emptyString) {
          LOCK();
          iVar2 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            operator_delete__(piVar4);
          }
        }
      }
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (-1 < *(int *)(this + 0x18)) {
    iVar2 = fsync(*(int *)(this + 0x18));
    if (iVar2 == -1) {
      (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_10);
      lVar1 = *(long *)(this + 0x20);
      *(long *)(this + 0x20) = local_10;
      piVar4 = (int *)(lVar1 + -0x10);
      if (piVar4 != &emptyString) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          local_10 = lVar1;
          operator_delete__(piVar4);
          return;
        }
      }
    }
  }
  return;
}


