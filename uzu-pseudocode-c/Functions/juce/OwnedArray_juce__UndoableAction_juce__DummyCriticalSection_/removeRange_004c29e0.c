// Function : removeRange
// Namespace: juce:OwnedArray_juce__UndoableAction_juce__DummyCriticalSection_
// Entry    : 004c29e0
// Prototype: undefined removeRange(long * param_1, int param_2)
// Body     : 004c29e0 - 004c2afe


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::OwnedArray<juce::UndoableAction, juce::DummyCriticalSection>::removeRange(int, int, bool)
    */

void __cdecl
juce::OwnedArray<juce::UndoableAction,juce::DummyCriticalSection>::removeRange
          (long *param_1,int param_2)

{
  size_t __n;
  int iVar1;
  uint uVar2;
  void *__dest;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  
  iVar1 = *(int *)((long)param_1 + 0xc);
  iVar5 = param_2 + 1;
  if (iVar1 < param_2 + 1) {
    iVar5 = iVar1;
  }
  if (iVar1 < param_2) {
    param_2 = iVar1;
  }
  uVar4 = iVar5 - param_2;
  if (uVar4 == 0 || iVar5 < param_2) {
    return;
  }
  pvVar6 = (void *)((long)param_2 * 8 + *param_1);
  uVar2 = (uVar4 >> 1) + uVar4 + 8 & 0xfffffff8;
  if ((int)uVar2 < 1) {
    __dest = (void *)0x0;
  }
  else {
    __dest = malloc((ulong)uVar2 << 3);
  }
  __n = (ulong)uVar4 * 8;
  memcpy(__dest,pvVar6,__n);
  memmove(pvVar6,(void *)((long)pvVar6 + (ulong)uVar4 * 8),(long)(iVar1 - iVar5) << 3);
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - uVar4;
  sVar3 = 0;
  do {
    if (*(long **)((long)__dest + sVar3) != (long *)0x0) {
      (**(code **)(**(long **)((long)__dest + sVar3) + 8))();
    }
    sVar3 = sVar3 + 8;
  } while (__n != sVar3);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (((int)(uVar4 * 2) < (int)param_1[1]) && ((int)uVar4 < (int)param_1[1])) {
    if ((int)uVar4 < 1) {
      free((void *)*param_1);
      *param_1 = 0;
    }
    else {
      pvVar6 = realloc((void *)*param_1,(ulong)uVar4 * 8);
      *param_1 = (long)pvVar6;
    }
    *(uint *)(param_1 + 1) = uVar4;
  }
  free(__dest);
  return;
}


