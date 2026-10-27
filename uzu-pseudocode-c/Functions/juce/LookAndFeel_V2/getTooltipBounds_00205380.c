// Function : getTooltipBounds
// Namespace: juce:LookAndFeel_V2
// Entry    : 00205380
// Prototype: undefined1[16] getTooltipBounds(LookAndFeel_V2 * this, String * param_1, undefined8 param_2, ulong param_3, ulong param_4)
// Body     : 00205380 - 0020551b


/* non-virtual thunk to juce::LookAndFeel_V2::getTooltipBounds(juce::String const&,
   juce::Point<int>, juce::Rectangle<int>) */

undefined1  [16] __thiscall
juce::LookAndFeel_V2::getTooltipBounds
          (LookAndFeel_V2 *this,String *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  int iVar11;
  uint uVar10;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar17;
  uint uVar16;
  undefined1 auVar18 [16];
  void *local_50;
  uint local_44;
  float local_40;
  float local_3c;
  
  uVar2 = (**(code **)(*(long *)(this + -0x70) + 0x50))(this + -0x70);
  detail::LookAndFeelHelpers::layoutTooltipText
            ((LookAndFeelHelpers *)&local_50,uVar2,param_1,_ZN4juce7ColoursL5blackE_14);
  uVar3 = (uint)(local_40 + DAT_005d9064);
  uVar7 = (uint)(local_3c + DAT_005d98e4);
  iVar5 = (int)param_4;
  iVar9 = (int)param_3;
  iVar17 = 0x18;
  if (((int)(((uint)(param_4 >> 0x1f) & 1) + iVar5) >> 1) + iVar9 < (int)param_2) {
    iVar17 = -0xc - uVar3;
  }
  uVar16 = iVar17 + (int)param_2;
  iVar17 = (int)(param_4 >> 0x20);
  iVar4 = (int)(param_3 >> 0x20);
  iVar12 = (int)((ulong)param_2 >> 0x20);
  iVar11 = 6;
  if (iVar17 / 2 + iVar4 < iVar12) {
    iVar11 = -6 - uVar7;
  }
  uVar10 = iVar11 + iVar12;
  iVar11 = iVar5 - uVar3;
  if ((int)(iVar5 - uVar3) < 0) {
    iVar11 = 0;
  }
  iVar12 = iVar17 - uVar7;
  if ((int)(iVar17 - uVar7) < 0) {
    iVar12 = 0;
  }
  if (0 < (int)local_44) {
    lVar6 = (ulong)local_44 + 1;
    do {
      ContainerDeletePolicy<juce::TextLayout::Line>::destroy
                (*(long **)((long)local_50 + (ulong)((int)lVar6 - 2) * 8));
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  uVar14 = iVar12 + iVar4;
  if ((int)uVar10 <= iVar12 + iVar4) {
    uVar14 = uVar10;
  }
  uVar15 = (ulong)uVar14;
  if ((int)uVar10 < iVar4) {
    uVar15 = param_3 >> 0x20;
  }
  uVar10 = iVar11 + iVar9;
  if ((int)uVar16 <= iVar11 + iVar9) {
    uVar10 = uVar16;
  }
  uVar13 = (ulong)uVar10;
  if ((int)uVar16 < iVar9) {
    uVar13 = param_3 & 0xffffffff;
  }
  uVar8 = (ulong)uVar7;
  if (iVar17 < (int)uVar7) {
    uVar8 = param_4 >> 0x20;
  }
  uVar1 = (ulong)uVar3;
  if (iVar5 < (int)uVar3) {
    uVar1 = param_4;
  }
  free(local_50);
  auVar18._8_8_ = uVar1 & 0xffffffff | uVar8 << 0x20;
  auVar18._0_8_ = uVar13 | uVar15 << 0x20;
  return auVar18;
}


