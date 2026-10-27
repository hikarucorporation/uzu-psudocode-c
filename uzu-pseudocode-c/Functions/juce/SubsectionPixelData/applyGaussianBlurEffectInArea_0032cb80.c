// Function : applyGaussianBlurEffectInArea
// Namespace: juce:SubsectionPixelData
// Entry    : 0032cb80
// Prototype: undefined applyGaussianBlurEffectInArea(SubsectionPixelData * this, undefined8 param_1, undefined8 param_2)
// Body     : 0032cb80 - 0032cbfe


/* juce::SubsectionPixelData::applyGaussianBlurEffectInArea(juce::Rectangle<int>, float) */

void __thiscall
juce::SubsectionPixelData::applyGaussianBlurEffectInArea
          (SubsectionPixelData *this,undefined8 param_1,undefined8 param_2)

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
  
  uVar4 = (uint)*(undefined8 *)(this + 0x58);
  uVar6 = (int)param_1 + uVar4;
  uVar11 = (uint)((ulong)*(undefined8 *)(this + 0x58) >> 0x20);
  uVar2 = (int)((ulong)param_1 >> 0x20) + uVar11;
  uVar10 = uVar4;
  if ((int)uVar4 < (int)uVar6) {
    uVar10 = uVar6;
  }
  uVar1 = uVar11;
  if ((int)uVar11 < (int)uVar2) {
    uVar1 = uVar2;
  }
  iVar7 = uVar6 + (int)param_2;
  iVar5 = uVar4 + *(int *)(this + 0x60);
  if (iVar7 < (int)(uVar4 + *(int *)(this + 0x60))) {
    iVar5 = iVar7;
  }
  if (-1 < (int)(iVar5 - uVar10)) {
    iVar7 = uVar2 + (int)((ulong)param_2 >> 0x20);
    if ((int)(uVar11 + *(int *)(this + 100)) <= iVar7) {
      iVar7 = uVar11 + *(int *)(this + 100);
    }
    if (-1 < (int)(iVar7 - uVar1)) {
      uVar3 = CONCAT44(iVar7 - uVar1,iVar5 - uVar10);
      uVar9 = (ulong)uVar1 << 0x20;
      uVar8 = (ulong)uVar10;
      goto LAB_0032cbf0;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  uVar3 = 0;
LAB_0032cbf0:
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(this + 0x50) + 0x48);
                    /* WARNING: Could not recover jumptable at 0x0032cbfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long **)(this + 0x50),uVar8 | uVar9,uVar3,UNRECOVERED_JUMPTABLE);
  return;
}


