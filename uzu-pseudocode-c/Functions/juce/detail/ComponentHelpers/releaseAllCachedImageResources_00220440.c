// Function : releaseAllCachedImageResources
// Namespace: juce:detail:ComponentHelpers
// Entry    : 00220440
// Prototype: undefined releaseAllCachedImageResources(long param_1)
// Body     : 00220440 - 002204b7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::ComponentHelpers::releaseAllCachedImageResources(juce::Component&) */

void __cdecl juce::detail::ComponentHelpers::releaseAllCachedImageResources(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x28))();
  }
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  iVar1 = *(int *)(param_1 + 100);
  if ((long)iVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    lVar5 = 0;
    do {
      releaseAllCachedImageResources(*(long *)(lVar4 + lVar5));
      lVar5 = lVar5 + 8;
    } while ((long)iVar1 * 8 != lVar5);
  }
  return;
}


