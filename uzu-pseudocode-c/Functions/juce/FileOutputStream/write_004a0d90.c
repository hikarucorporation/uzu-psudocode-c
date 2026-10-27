// Function : write
// Namespace: juce:FileOutputStream
// Entry    : 004a0d90
// Prototype: bool write(FileOutputStream * this, void * param_1, ulong param_2)
// Body     : 004a0d90 - 004a0eeb


/* juce::FileOutputStream::write(void const*, unsigned long) */

bool __thiscall juce::FileOutputStream::write(FileOutputStream *this,void *param_1,ulong param_2)

{
  int iVar1;
  size_t __n;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *__dest;
  int *piVar5;
  long local_20;
  
  if (**(char **)(this + 0x20) != '\0') {
    return false;
  }
  uVar4 = *(ulong *)(this + 0x30);
  __n = *(size_t *)(this + 0x38);
  if (__n + param_2 < uVar4) {
    __dest = (void *)(__n + *(long *)(this + 0x40));
  }
  else {
    if (__n != 0) {
      if (*(int *)(this + 0x18) < 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = ::write(*(int *)(this + 0x18),*(void **)(this + 0x40),__n);
        if (lVar3 == -1) {
          (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_20);
          lVar3 = *(long *)(this + 0x20);
          *(long *)(this + 0x20) = local_20;
          piVar5 = (int *)(lVar3 + -0x10);
          local_20 = lVar3;
          if (piVar5 != &emptyString) {
            LOCK();
            iVar1 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              operator_delete__(piVar5);
            }
          }
          lVar3 = -1;
        }
      }
      lVar2 = *(long *)(this + 0x38);
      *(undefined8 *)(this + 0x38) = 0;
      if (lVar3 != lVar2) {
        return false;
      }
      uVar4 = *(ulong *)(this + 0x30);
    }
    if (uVar4 <= param_2) {
      if (*(int *)(this + 0x18) < 0) {
        uVar4 = 0;
LAB_004a0e95:
        *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + uVar4;
        return uVar4 == param_2;
      }
      uVar4 = ::write(*(int *)(this + 0x18),param_1,param_2);
      if (uVar4 == 0xffffffffffffffff) {
        (anonymous_namespace)::getResultForErrno((_anonymous_namespace_ *)&local_20);
        lVar3 = *(long *)(this + 0x20);
        *(long *)(this + 0x20) = local_20;
        piVar5 = (int *)(lVar3 + -0x10);
        if (piVar5 != &emptyString) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            local_20 = lVar3;
            operator_delete__(piVar5);
          }
        }
      }
      else if (-1 < (long)uVar4) goto LAB_004a0e95;
      return false;
    }
    __dest = *(void **)(this + 0x40);
  }
  memcpy(__dest,param_1,param_2);
  *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + param_2;
  *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + param_2;
  return true;
}


