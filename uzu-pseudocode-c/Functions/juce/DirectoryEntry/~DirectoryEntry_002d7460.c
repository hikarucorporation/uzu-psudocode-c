// Function : ~DirectoryEntry
// Namespace: juce:DirectoryEntry
// Entry    : 002d7460
// Prototype: undefined ~DirectoryEntry(DirectoryEntry * this)
// Body     : 002d7460 - 002d74d1


/* juce::DirectoryEntry::~DirectoryEntry() */

void __thiscall juce::DirectoryEntry::~DirectoryEntry(DirectoryEntry *this)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      plVar2 = *(long **)(this + 8);
      goto joined_r0x002d748c;
    }
  }
  plVar2 = *(long **)(this + 8);
joined_r0x002d748c:
  if (plVar2 != (long *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      piVar3 = (int *)((long)plVar2 + 0xc);
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    else {
      iVar1 = *(int *)((long)plVar2 + 0xc);
      *(int *)((long)plVar2 + 0xc) = iVar1 + -1;
    }
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x002d74cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}


