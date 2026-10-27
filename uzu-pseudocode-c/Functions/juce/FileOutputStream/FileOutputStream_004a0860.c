// Function : FileOutputStream
// Namespace: juce:FileOutputStream
// Entry    : 004a0860
// Prototype: undefined FileOutputStream(FileOutputStream * this, long * param_1, size_t param_2)
// Body     : 004a0860 - 004a09fd


/* juce::FileOutputStream::FileOutputStream(juce::File const&, unsigned long) */

void __thiscall
juce::FileOutputStream::FileOutputStream(FileOutputStream *this,long *param_1,size_t param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  __off_t _Var6;
  char *__name;
  int *piVar7;
  long local_30;
  
  *(undefined ***)this = &PTR__OutputStream_00713440;
  puVar4 = operator_new__(0x1b);
  LOCK();
  *puVar4 = 0;
  UNLOCK();
  *(undefined8 *)(puVar4 + 2) = 4;
  *(undefined2 *)(puVar4 + 4) = 0xa0d;
  *(undefined1 *)((long)puVar4 + 0x12) = 0;
  *(undefined4 **)(this + 8) = puVar4 + 4;
  *(undefined ***)this = &PTR__FileOutputStream_007131a0;
  __name = (char *)*param_1;
  *(char **)(this + 0x10) = __name;
  piVar7 = (int *)(__name + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    __name = *(char **)(this + 0x10);
  }
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined1 **)(this + 0x20) = &DAT_0061ac58;
  *(undefined8 *)(this + 0x28) = 0;
  *(size_t *)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x38) = 0;
  pvVar5 = malloc(param_2);
  *(void **)(this + 0x40) = pvVar5;
  if (*__name != '\0') {
    iVar3 = access(__name,0);
    __name = *(char **)(this + 0x10);
    if (iVar3 == 0) {
      iVar3 = open(__name,2);
      if (iVar3 != -1) {
        _Var6 = lseek(iVar3,0,2);
        *(__off_t *)(this + 0x28) = _Var6;
        if (-1 < _Var6) {
          *(int *)(this + 0x18) = iVar3;
          return;
        }
        (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_30);
        lVar2 = *(long *)(this + 0x20);
        *(long *)(this + 0x20) = local_30;
        piVar7 = (int *)(lVar2 + -0x10);
        local_30 = lVar2;
        if (piVar7 != &emptyString) {
          LOCK();
          iVar1 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar7);
          }
        }
        close(iVar3);
        return;
      }
      (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_30);
      goto LAB_004a0984;
    }
  }
                    /* try { // try from 004a091b to 004a09f0 has its CatchHandler @ 004a09fe */
  iVar3 = open(__name,0x42,0x1a4);
  if (iVar3 != -1) {
    *(int *)(this + 0x18) = iVar3;
    return;
  }
  (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_30);
LAB_004a0984:
  lVar2 = *(long *)(this + 0x20);
  *(long *)(this + 0x20) = local_30;
  piVar7 = (int *)(lVar2 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_30 = lVar2;
      operator_delete__(piVar7);
    }
  }
  return;
}


