// Function : next
// Namespace: juce:RangedDirectoryIterator
// Entry    : 0049f420
// Prototype: ulong next(RangedDirectoryIterator * this)
// Body     : 0049f420 - 0049f545


/* juce::RangedDirectoryIterator::next() */

ulong __thiscall juce::RangedDirectoryIterator::next(RangedDirectoryIterator *this)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  
  uVar3 = DirectoryIterator::next
                    (*(DirectoryIterator **)this,(byte *)(this + 0x40),(char *)(this + 0x41),
                     (__off_t *)(this + 0x38),(long *)(this + 0x28),(long *)(this + 0x30),
                     (long)(this + 0x42));
  uVar7 = uVar3 & 0xffffffff;
  if ((char)uVar3 == '\0') {
    plVar2 = *(long **)(this + 0x18);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    if (plVar2 != (long *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        piVar6 = (int *)((long)plVar2 + 0xc);
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
      }
      else {
        iVar1 = *(int *)((long)plVar2 + 0xc);
        *(int *)((long)plVar2 + 0xc) = iVar1 + -1;
      }
      if (iVar1 == 1) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    lVar5 = *(long *)(this + 0x20);
    *(undefined1 **)(this + 0x20) = &DAT_0061ac58;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x3f) = 0;
    *(__off_t *)(this + 0x38) = 0;
    piVar6 = (int *)(lVar5 + -0x10);
    if (piVar6 == &emptyString) {
      return uVar7;
    }
  }
  else {
    lVar5 = *(long *)this;
    do {
      lVar4 = lVar5;
      lVar5 = *(long *)(lVar4 + 0x38);
      if (lVar5 == 0) break;
    } while (*(char *)(lVar5 + 0x35) != '\0');
    lVar5 = *(long *)(lVar4 + 0x40);
    piVar6 = (int *)(lVar5 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
      lVar5 = *(long *)(lVar4 + 0x40);
    }
    LOCK();
    lVar4 = *(long *)(this + 0x20);
    *(long *)(this + 0x20) = lVar5;
    UNLOCK();
    piVar6 = (int *)(lVar4 + -0x10);
    if (piVar6 == &emptyString) {
      return uVar7;
    }
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar6);
  }
  return uVar7;
}


