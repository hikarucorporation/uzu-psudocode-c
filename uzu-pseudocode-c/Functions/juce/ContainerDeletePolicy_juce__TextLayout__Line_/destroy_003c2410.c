// Function : destroy
// Namespace: juce:ContainerDeletePolicy_juce__TextLayout__Line_
// Entry    : 003c2410
// Prototype: undefined destroy(long * param_1)
// Body     : 003c2410 - 003c24d2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ContainerDeletePolicy<juce::TextLayout::Line>::destroy(juce::TextLayout::Line*) */

void __cdecl juce::ContainerDeletePolicy<juce::TextLayout::Line>::destroy(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  uVar2 = *(uint *)((long)param_1 + 0xc);
  uVar6 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar9 = -uVar2;
    uVar8 = uVar6;
    while( true ) {
      uVar7 = (ulong)((int)uVar8 - 1);
      lVar3 = *param_1;
      plVar4 = *(long **)(lVar3 + uVar7 * 8);
      memmove((void *)(lVar3 + uVar7 * 8),(void *)(lVar3 + uVar7 * 8 + 8),
              (long)((int)uVar6 + iVar9) << 3);
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
      if (plVar4 != (long *)0x0) {
        *(undefined4 *)((long)plVar4 + 0x1c) = 0;
        free((void *)plVar4[2]);
        plVar5 = (long *)*plVar4;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        operator_delete(plVar4);
      }
      if (uVar8 < 2) break;
      uVar6 = (ulong)*(uint *)((long)param_1 + 0xc);
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 - 1;
    }
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  free((void *)*param_1);
  operator_delete(param_1);
  return;
}


