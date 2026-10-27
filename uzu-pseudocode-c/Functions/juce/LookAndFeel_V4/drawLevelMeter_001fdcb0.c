// Function : drawLevelMeter
// Namespace: juce:LookAndFeel_V4
// Entry    : 001fdcb0
// Prototype: undefined drawLevelMeter(float param_1, undefined8 param_2, long param_3, Graphics * param_4_00, int param_5, int param_6)
// Body     : 001fdcb0 - 001fe103


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V4::drawLevelMeter(juce::Graphics&, int, int, float) */

void __cdecl
juce::LookAndFeel_V4::drawLevelMeter
          (float param_1,undefined8 param_2,long param_3,Graphics *param_4_00,int param_5,
          int param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  uVar8 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = *(uint *)(param_3 + 0xf4);
  if (0 < (int)uVar3) {
    lVar1 = *(long *)(param_3 + 0xe8);
    uVar2 = 0;
    uVar4 = uVar3;
    do {
      while( true ) {
        if (*(int *)(lVar1 + (long)(int)uVar2 * 8) == 0x1005700) {
          if (-1 < (int)uVar2) {
            uVar4 = 0;
            if (uVar2 < uVar3) {
              uVar4 = *(uint *)(lVar1 + 4 + (ulong)uVar2 * 8);
            }
            goto LAB_001fdd3e;
          }
          goto LAB_001fdd38;
        }
        uVar5 = (int)(uVar2 + uVar4) / 2;
        if (uVar5 == uVar2) goto LAB_001fdd38;
        if (*(int *)(lVar1 + (long)(int)uVar5 * 8) < 0x1005701) break;
        uVar4 = uVar5;
        if ((int)uVar5 <= (int)uVar2) goto LAB_001fdd38;
      }
      uVar2 = uVar5;
    } while ((int)uVar5 < (int)uVar4);
  }
LAB_001fdd38:
  uVar4 = _ZN4juce7ColoursL5blackE_14;
LAB_001fdd3e:
  Graphics::setColour(param_4_00,uVar4);
  local_48 = ZEXT416((uint)(float)param_5);
  local_58 = (float)param_6;
  uStack_60 = CONCAT44(local_58,(float)param_5);
  local_68 = 0;
  fStack_54 = (float)uVar8;
  (**(code **)(**(long **)(param_4_00 + 8) + 0x120))
            (DAT_0065449c,*(long **)(param_4_00 + 8),&local_68);
  local_48._0_4_ = ((float)local_48._0_4_ + DAT_0065b5a8) / DAT_0065b140;
  fVar7 = DAT_005d9068 * (float)local_48._0_4_;
  uVar3 = *(uint *)(param_3 + 0xf4);
  local_38 = ZEXT416((uint)(DAT_005d905c * (float)local_48._0_4_));
  if (0 < (int)uVar3) {
    lVar1 = *(long *)(param_3 + 0xe8);
    uVar2 = uVar3;
    uVar4 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar1 + (long)(int)uVar4 * 8) == 0x1001300) {
          if (-1 < (int)uVar4) {
            uVar2 = 0;
            if (uVar4 < uVar3) {
              uVar2 = *(uint *)(lVar1 + 4 + (ulong)uVar4 * 8);
            }
            goto LAB_001fde58;
          }
          goto LAB_001fde4d;
        }
        uVar5 = (int)(uVar4 + uVar2) / 2;
        if (uVar5 == uVar4) goto LAB_001fde4d;
        if (*(int *)(lVar1 + (long)(int)uVar5 * 8) < 0x1001301) break;
        uVar2 = uVar5;
        if ((int)uVar5 <= (int)uVar4) goto LAB_001fde4d;
      }
      uVar4 = uVar5;
    } while ((int)uVar5 < (int)uVar2);
  }
LAB_001fde4d:
  uVar2 = _ZN4juce7ColoursL5blackE_14;
LAB_001fde58:
  fVar9 = local_58 + DAT_0065b5a8;
  uStack_50 = 0;
  uStack_4c = fStack_54;
  uVar3 = uVar2 & 0xffffff | 0x80000000;
  iVar6 = SUB84((double)(param_1 * DAT_0065b140) + DAT_005d9098,0);
  uVar4 = uVar3;
  if (0 < iVar6) {
    uVar4 = uVar2;
  }
  local_58 = DAT_005de458 * (float)local_48._0_4_;
  fStack_54 = fVar9;
  Graphics::setColour(param_4_00,uVar4);
  local_68 = CONCAT44(_UNK_0065b154,
                      (float)local_48._0_4_ * 0.0 + DAT_005d9078 + (float)local_38._0_4_);
  uStack_60 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_4_00 + 8) + 0x120))(fVar7,*(long **)(param_4_00 + 8),&local_68);
  uVar4 = uVar3;
  if (1 < iVar6) {
    uVar4 = uVar2;
  }
  Graphics::setColour(param_4_00,uVar4);
  local_68 = CONCAT44(_UNK_0065b154,(float)local_48._0_4_ + DAT_005d9078 + (float)local_38._0_4_);
  uStack_60 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_4_00 + 8) + 0x120))(fVar7,*(long **)(param_4_00 + 8),&local_68);
  uVar4 = uVar3;
  if (2 < iVar6) {
    uVar4 = uVar2;
  }
  Graphics::setColour(param_4_00,uVar4);
  local_68 = CONCAT44(_UNK_0065b154,
                      (float)local_48._0_4_ + (float)local_48._0_4_ + DAT_005d9078 +
                      (float)local_38._0_4_);
  uStack_60 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_4_00 + 8) + 0x120))(fVar7,*(long **)(param_4_00 + 8),&local_68);
  uVar4 = uVar3;
  if (3 < iVar6) {
    uVar4 = uVar2;
  }
  Graphics::setColour(param_4_00,uVar4);
  local_68 = CONCAT44(_UNK_0065b154,
                      DAT_0065449c * (float)local_48._0_4_ + DAT_005d9078 + (float)local_38._0_4_);
  uStack_60 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_4_00 + 8) + 0x120))(fVar7,*(long **)(param_4_00 + 8),&local_68);
  uVar4 = uVar3;
  if (4 < iVar6) {
    uVar4 = uVar2;
  }
  Graphics::setColour(param_4_00,uVar4);
  local_68 = CONCAT44(_UNK_0065b154,
                      DAT_005d94d4 * (float)local_48._0_4_ + DAT_005d9078 + (float)local_38._0_4_);
  uStack_60 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_4_00 + 8) + 0x120))(fVar7,*(long **)(param_4_00 + 8),&local_68);
  if (iVar6 < 6) {
    uVar2 = uVar3;
  }
  Graphics::setColour(param_4_00,uVar2);
  local_68 = CONCAT44(_UNK_0065b154,
                      DAT_00652628 * (float)local_48._0_4_ + DAT_005d9078 + (float)local_38._0_4_);
  uStack_60 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_4_00 + 8) + 0x120))(fVar7,*(long **)(param_4_00 + 8),&local_68);
  if (6 < iVar6) {
    uVar3 = _ZN4juce7ColoursL3redE_121;
  }
  Graphics::setColour(param_4_00,uVar3);
  local_68 = CONCAT44(_UNK_0065b154,
                      (float)local_38._0_4_ + (float)local_48._0_4_ * DAT_005d98e4 + DAT_005d9078);
  uStack_60 = CONCAT44(fStack_54,local_58);
  (**(code **)(**(long **)(param_4_00 + 8) + 0x120))(fVar7,*(long **)(param_4_00 + 8),&local_68);
  return;
}


