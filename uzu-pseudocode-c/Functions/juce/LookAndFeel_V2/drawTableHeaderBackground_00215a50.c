// Function : drawTableHeaderBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 00215a50
// Prototype: undefined drawTableHeaderBackground(undefined8 param_1_00, Graphics * param_2, Component * param_3)
// Body     : 00215a50 - 00215ce8


/* juce::LookAndFeel_V2::drawTableHeaderBackground(juce::Graphics&, juce::TableHeaderComponent&) */

void __thiscall
juce::LookAndFeel_V2::drawTableHeaderBackground
          (undefined8 param_1_00,Graphics *param_2,Component *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_78 [16];
  undefined1 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulong local_50;
  float local_48;
  
  Graphics::fillAll(param_2,_ZN4juce7ColoursL5whiteE_144);
  local_50 = (ulong)*(uint *)(param_3 + 0x40);
  iVar12 = *(int *)(param_3 + 0x44);
  iVar13 = iVar12 / 2;
  if (iVar12 < iVar12 / 2) {
    iVar13 = iVar12;
  }
  uVar5 = Component::findColour(param_3,0x1003810,'\0');
  local_48 = (float)iVar13;
  uVar4 = Colour::withMultipliedSaturation(DAT_005d9044,(uint)uVar5);
  auVar1._4_4_ = 0;
  auVar1._0_4_ = local_48;
  auVar1._8_4_ = (float)iVar12;
  auVar1._12_4_ = 0;
  local_78 = auVar1 << 0x20;
  local_68 = 0;
  local_60 = malloc(0x80);
  local_58 = 8;
  *local_60 = 0;
  *(uint *)(local_60 + 1) = (uint)uVar5;
  local_54 = 2;
  local_60[2] = 0x3ff0000000000000;
  *(undefined4 *)(local_60 + 3) = uVar4;
                    /* try { // try from 00215b1c to 00215b26 has its CatchHandler @ 00215ce9 */
  Graphics::setGradientFill(param_2,(undefined8 *)local_78);
  uVar14 = iVar12 - iVar13;
  uVar5 = (ulong)uVar14 << 0x20 | local_50;
  free(local_60);
  auVar2._4_8_ = local_78._8_8_;
  auVar2._0_4_ = iVar13;
  local_78._0_8_ = auVar2._0_8_ << 0x20;
  iVar13 = 0;
  local_78._8_8_ = uVar5;
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),local_78,0);
  uVar5 = Component::findColour(param_3,0x1003820,'\0');
  Graphics::setColour(param_2,(int)uVar5);
  uVar8 = 1;
  if ((int)uVar14 < 1) {
    uVar8 = uVar14;
  }
  auVar3._4_8_ = local_78._8_8_;
  auVar3._0_4_ = iVar12 - uVar8;
  local_78._0_8_ = auVar3._0_8_ << 0x20;
  local_78._8_8_ = ((ulong)uVar8 << 0x20) + local_50;
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),local_78,0);
  uVar5 = (ulong)*(int *)(param_3 + 0x10c);
  if (uVar5 != 0) {
    lVar6 = *(long *)(param_3 + 0x100);
    lVar10 = 0;
    do {
      iVar13 = iVar13 + (*(ushort *)(*(long *)(lVar6 + lVar10) + 0xe8) >> 1 & 1);
      lVar10 = lVar10 + 8;
    } while (uVar5 * 8 != lVar10);
    if (iVar13 != 0) {
      iVar12 = iVar13 + -1;
      if (*(int *)(param_3 + 0x10c) == 0) goto LAB_00215c80;
      do {
        lVar10 = (long)(int)uVar5 * 8;
        lVar11 = 0;
        iVar7 = 0;
        uVar8 = 0;
        iVar9 = 0;
        do {
          while( true ) {
            iVar7 = iVar7 + uVar8;
            if ((*(ushort *)(*(long *)(lVar6 + lVar11) + 0xe8) & 2) == 0) break;
            uVar8 = *(uint *)(*(long *)(lVar6 + lVar11) + 0xf8);
            if (iVar9 == iVar12) goto LAB_00215c64;
            iVar9 = iVar9 + 1;
            lVar11 = lVar11 + 8;
            if (lVar10 == lVar11) goto LAB_00215c64;
          }
          uVar8 = 0;
          lVar11 = lVar11 + 8;
        } while (lVar10 != lVar11);
LAB_00215c64:
        uVar5 = (ulong)*(uint *)(param_3 + 0x44) << 0x20;
        iVar9 = iVar13;
        uVar14 = 1;
        if (0 < (int)uVar8) goto LAB_00215c8f;
        while( true ) {
          iVar9 = iVar13;
          uVar14 = uVar8;
LAB_00215c8f:
          iVar13 = iVar12;
          local_78._4_4_ = 0;
          local_78._0_4_ = (iVar7 + uVar8) - uVar14;
          local_78._8_8_ = uVar14 | uVar5;
          (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),local_78,0);
          if (iVar9 < 2) {
            return;
          }
          lVar6 = *(long *)(param_3 + 0x100);
          uVar5 = (ulong)*(uint *)(param_3 + 0x10c);
          iVar12 = iVar13 + -1;
          if (*(uint *)(param_3 + 0x10c) != 0) break;
LAB_00215c80:
          uVar5 = (ulong)*(uint *)(param_3 + 0x44) << 0x20;
          iVar7 = 0;
          uVar8 = 0;
        }
      } while( true );
    }
  }
  return;
}


