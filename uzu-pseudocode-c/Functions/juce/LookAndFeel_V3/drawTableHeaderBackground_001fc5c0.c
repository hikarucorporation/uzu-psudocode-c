// Function : drawTableHeaderBackground
// Namespace: juce:LookAndFeel_V3
// Entry    : 001fc5c0
// Prototype: undefined drawTableHeaderBackground(undefined8 param_1_00, Graphics * param_2, Component * param_3)
// Body     : 001fc5c0 - 001fc7a8


/* juce::LookAndFeel_V3::drawTableHeaderBackground(juce::Graphics&, juce::TableHeaderComponent&) */

void __thiscall
juce::LookAndFeel_V3::drawTableHeaderBackground
          (undefined8 param_1_00,Graphics *param_2,Component *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  
  uVar1 = *(undefined4 *)(param_3 + 0x40);
  iVar12 = *(int *)(param_3 + 0x44);
  iVar11 = 0;
  uVar2 = Component::findColour(param_3,0x1003820,'\0');
  Graphics::setColour(param_2,(int)uVar2);
  iVar5 = 1;
  if (iVar12 < 1) {
    iVar5 = iVar12;
  }
  local_48 = (ulong)(uint)(iVar12 - iVar5) << 0x20;
  local_38 = CONCAT44(iVar12 - iVar5,uVar1);
  local_40 = CONCAT44(iVar5,uVar1);
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_48,0);
  uVar3 = Component::findColour(param_3,0x1003810,'\0');
  Graphics::setColour(param_2,(int)uVar3);
  local_48 = 0;
  local_40 = local_38;
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_48,0);
  Graphics::setColour(param_2,(int)uVar2);
  uVar2 = (ulong)*(int *)(param_3 + 0x10c);
  if (uVar2 != 0) {
    lVar4 = *(long *)(param_3 + 0x100);
    lVar9 = 0;
    do {
      iVar11 = iVar11 + (*(ushort *)(*(long *)(lVar4 + lVar9) + 0xe8) >> 1 & 1);
      lVar9 = lVar9 + 8;
    } while (uVar2 * 8 != lVar9);
    if (iVar11 != 0) {
      iVar12 = iVar11 + -1;
      if (*(int *)(param_3 + 0x10c) == 0) goto LAB_001fc740;
      do {
        lVar9 = (long)(int)uVar2 * 8;
        lVar10 = 0;
        iVar5 = 0;
        uVar6 = 0;
        iVar7 = 0;
        do {
          while( true ) {
            iVar5 = iVar5 + uVar6;
            if ((*(ushort *)(*(long *)(lVar4 + lVar10) + 0xe8) & 2) == 0) break;
            uVar6 = *(uint *)(*(long *)(lVar4 + lVar10) + 0xf8);
            if (iVar7 == iVar12) goto LAB_001fc724;
            iVar7 = iVar7 + 1;
            lVar10 = lVar10 + 8;
            if (lVar9 == lVar10) goto LAB_001fc724;
          }
          uVar6 = 0;
          lVar10 = lVar10 + 8;
        } while (lVar9 != lVar10);
LAB_001fc724:
        local_40 = (ulong)*(uint *)(param_3 + 0x44) << 0x20;
        iVar7 = iVar11;
        uVar8 = 1;
        if (0 < (int)uVar6) goto LAB_001fc74f;
        while( true ) {
          iVar7 = iVar11;
          uVar8 = uVar6;
LAB_001fc74f:
          iVar11 = iVar12;
          local_48 = (ulong)((iVar5 + uVar6) - uVar8);
          local_40 = uVar8 | local_40;
          (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_48,0);
          if (iVar7 < 2) {
            return;
          }
          lVar4 = *(long *)(param_3 + 0x100);
          uVar2 = (ulong)*(uint *)(param_3 + 0x10c);
          iVar12 = iVar11 + -1;
          if (*(uint *)(param_3 + 0x10c) != 0) break;
LAB_001fc740:
          local_40 = (ulong)*(uint *)(param_3 + 0x44) << 0x20;
          iVar5 = 0;
          uVar6 = 0;
        }
      } while( true );
    }
  }
  return;
}


