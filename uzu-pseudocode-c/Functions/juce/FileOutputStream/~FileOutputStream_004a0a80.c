// Function : ~FileOutputStream
// Namespace: juce:FileOutputStream
// Entry    : 004a0a80
// Prototype: undefined ~FileOutputStream(FileOutputStream * this)
// Body     : 004a0a80 - 004a0b9b


/* juce::FileOutputStream::~FileOutputStream() */

void __thiscall juce::FileOutputStream::~FileOutputStream(FileOutputStream *this)

{
  int iVar1;
  long lVar2;
  long in_RAX;
  ssize_t sVar3;
  int *piVar4;
  long local_18;
  
  *(undefined ***)this = &PTR__FileOutputStream_007131a0;
  local_18 = in_RAX;
  if (*(size_t *)(this + 0x38) != 0) {
    if (-1 < *(int *)(this + 0x18)) {
                    /* try { // try from 004a0aa5 to 004a0b5c has its CatchHandler @ 004a0b9c */
      sVar3 = ::write(*(int *)(this + 0x18),*(void **)(this + 0x40),*(size_t *)(this + 0x38));
      if (sVar3 == -1) {
        (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_18);
        lVar2 = *(long *)(this + 0x20);
        *(long *)(this + 0x20) = local_18;
        piVar4 = (int *)(lVar2 + -0x10);
        local_18 = lVar2;
        if (piVar4 != &emptyString) {
          LOCK();
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar4);
          }
        }
      }
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
  if (-1 < *(int *)(this + 0x18)) {
    close(*(int *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0xffffffff;
  }
  free(*(void **)(this + 0x40));
  piVar4 = (int *)(*(long *)(this + 0x20) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
  piVar4 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
  *(undefined ***)this = &PTR__OutputStream_00713440;
  piVar4 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
      return;
    }
  }
  return;
}


