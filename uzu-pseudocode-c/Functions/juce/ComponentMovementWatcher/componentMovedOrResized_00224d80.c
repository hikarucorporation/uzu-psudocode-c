// Function : componentMovedOrResized
// Namespace: juce:ComponentMovementWatcher
// Entry    : 00224d80
// Prototype: undefined componentMovedOrResized(long * param_1, undefined8 param_2, char param_3)
// Body     : 00224d80 - 00224e2b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComponentMovementWatcher::componentMovedOrResized(juce::Component&, bool, bool) */

void __cdecl
juce::ComponentMovementWatcher::componentMovedOrResized
          (long *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  bool bVar10;
  
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(lVar7 + 0x10);
  if (plVar8 == (long *)0x0) {
    return;
  }
  if (param_3 == '\0') {
    bVar9 = false;
    iVar6 = (int)plVar8[8];
    if (*(int *)((long)param_1 + 0x34) != iVar6) goto LAB_00224dd8;
  }
  else {
    plVar3 = plVar8;
    do {
      plVar4 = plVar3;
      plVar3 = (long *)plVar4[6];
    } while ((long *)plVar4[6] != (long *)0x0);
    if (plVar4 == plVar8) {
      lVar5 = plVar8[7];
    }
    else {
      lVar5 = detail::ComponentHelpers::convertCoordinate<juce::Point<int>>(plVar4,plVar8,0);
      lVar7 = param_1[1];
    }
    lVar2 = *(long *)((long)param_1 + 0x2c);
    *(long *)((long)param_1 + 0x2c) = lVar5;
    bVar9 = lVar2 != lVar5;
    plVar8 = *(long **)(lVar7 + 0x10);
    iVar6 = (int)plVar8[8];
    if (*(int *)((long)param_1 + 0x34) != iVar6) {
LAB_00224dd8:
      uVar1 = *(undefined4 *)((long)plVar8 + 0x44);
      *(int *)((long)param_1 + 0x34) = iVar6;
      *(undefined4 *)(param_1 + 7) = uVar1;
      bVar10 = true;
      goto LAB_00224e16;
    }
  }
  bVar10 = (int)param_1[7] != *(int *)((long)plVar8 + 0x44);
  *(int *)(param_1 + 7) = *(int *)((long)plVar8 + 0x44);
  if (bVar9 == false && !bVar10) {
    return;
  }
LAB_00224e16:
                    /* WARNING: Could not recover jumptable at 0x00224e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,bVar9,bVar10);
  return;
}


