// Function : desaturateInArea
// Namespace: juce:SubsectionPixelData
// Entry    : 0032cd10
// Prototype: undefined desaturateInArea(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 0032cd10 - 0032cd8e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SubsectionPixelData::desaturateInArea(juce::Rectangle<int>) */

void __cdecl
juce::SubsectionPixelData::desaturateInArea(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar4 = (uint)*(undefined8 *)(param_1 + 0x58);
  uVar6 = (int)param_2 + uVar4;
  uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  uVar2 = (int)((ulong)param_2 >> 0x20) + uVar11;
  uVar10 = uVar4;
  if ((int)uVar4 < (int)uVar6) {
    uVar10 = uVar6;
  }
  uVar1 = uVar11;
  if ((int)uVar11 < (int)uVar2) {
    uVar1 = uVar2;
  }
  iVar5 = uVar4 + *(int *)(param_1 + 0x60);
  iVar7 = uVar6 + (int)param_3;
  if (iVar7 < iVar5) {
    iVar5 = iVar7;
  }
  if (-1 < (int)(iVar5 - uVar10)) {
    iVar12 = uVar11 + *(int *)(param_1 + 100);
    iVar7 = uVar2 + (int)((ulong)param_3 >> 0x20);
    if (iVar12 <= iVar7) {
      iVar7 = iVar12;
    }
    if (-1 < (int)(iVar7 - uVar1)) {
      uVar3 = CONCAT44(iVar7 - uVar1,iVar5 - uVar10);
      uVar9 = (ulong)uVar1 << 0x20;
      uVar8 = (ulong)uVar10;
      goto LAB_0032cd80;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  uVar3 = 0;
LAB_0032cd80:
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x50) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x0032cd8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long **)(param_1 + 0x50),uVar8 | uVar9,uVar3,UNRECOVERED_JUMPTABLE);
  return;
}


