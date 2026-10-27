// Function : applySingleChannelBoxBlurEffectInArea
// Namespace: juce:SubsectionPixelData
// Entry    : 0032cc00
// Prototype: undefined applySingleChannelBoxBlurEffectInArea(SubsectionPixelData * this, undefined8 param_1, undefined8 param_2)
// Body     : 0032cc00 - 0032cc82


/* juce::SubsectionPixelData::applySingleChannelBoxBlurEffectInArea(juce::Rectangle<int>, int) */

void __thiscall
juce::SubsectionPixelData::applySingleChannelBoxBlurEffectInArea
          (SubsectionPixelData *this,undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  
  uVar2 = (uint)*(undefined8 *)(this + 0x58);
  uVar5 = (int)param_1 + uVar2;
  uVar4 = (uint)((ulong)*(undefined8 *)(this + 0x58) >> 0x20);
  uVar9 = (int)((ulong)param_1 >> 0x20) + uVar4;
  uVar11 = uVar2;
  if ((int)uVar2 < (int)uVar5) {
    uVar11 = uVar5;
  }
  uVar1 = uVar4;
  if ((int)uVar4 < (int)uVar9) {
    uVar1 = uVar9;
  }
  iVar6 = uVar5 + (int)param_2;
  iVar3 = uVar2 + *(int *)(this + 0x60);
  if (iVar6 < (int)(uVar2 + *(int *)(this + 0x60))) {
    iVar3 = iVar6;
  }
  if (-1 < (int)(iVar3 - uVar11)) {
    iVar6 = uVar9 + (int)((ulong)param_2 >> 0x20);
    if ((int)(uVar4 + *(int *)(this + 100)) <= iVar6) {
      iVar6 = uVar4 + *(int *)(this + 100);
    }
    if (-1 < (int)(iVar6 - uVar1)) {
      uVar10 = CONCAT44(iVar6 - uVar1,iVar3 - uVar11);
      uVar8 = (ulong)uVar1 << 0x20;
      uVar7 = (ulong)uVar11;
      goto LAB_0032cc73;
    }
  }
  uVar7 = 0;
  uVar8 = 0;
  uVar10 = 0;
LAB_0032cc73:
                    /* WARNING: Could not recover jumptable at 0x0032cc81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x50) + 0x50))(*(long **)(this + 0x50),uVar7 | uVar8,uVar10);
  return;
}


