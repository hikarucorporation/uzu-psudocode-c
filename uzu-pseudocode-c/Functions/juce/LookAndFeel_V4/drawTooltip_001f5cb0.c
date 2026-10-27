// Function : drawTooltip
// Namespace: juce:LookAndFeel_V4
// Entry    : 001f5cb0
// Prototype: undefined drawTooltip(LookAndFeel_V4 * this, Graphics * param_1, String * param_2, int param_3, int param_4)
// Body     : 001f5cb0 - 001f5f22


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V4::drawTooltip(juce::Graphics&, juce::String const&, int, int) */

void __thiscall
juce::LookAndFeel_V4::drawTooltip
          (LookAndFeel_V4 *this,Graphics *param_1,String *param_2,int param_3,int param_4)

{
  uint uVar1;
  void *__ptr;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar1 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(this + 0xe8);
    uVar6 = uVar1;
    uVar4 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + (long)(int)uVar4 * 8) == 0x1001b00) {
          if (-1 < (int)uVar4) {
            uVar2 = 0;
            if (uVar4 < uVar1) {
              uVar2 = *(undefined4 *)(lVar5 + 4 + (ulong)uVar4 * 8);
            }
            goto LAB_001f5d3e;
          }
          goto LAB_001f5d38;
        }
        uVar7 = (int)(uVar4 + uVar6) / 2;
        if (uVar7 == uVar4) goto LAB_001f5d38;
        if (*(int *)(lVar5 + (long)(int)uVar7 * 8) < 0x1001b01) break;
        uVar6 = uVar7;
        if ((int)uVar7 <= (int)uVar4) goto LAB_001f5d38;
      }
      uVar4 = uVar7;
    } while ((int)uVar7 < (int)uVar6);
  }
LAB_001f5d38:
  uVar2 = _ZN4juce7ColoursL5blackE_14;
LAB_001f5d3e:
  Graphics::setColour(param_1,uVar2);
  uStack_60 = CONCAT44((float)param_4,(float)param_3);
  uStack_40 = 0;
  local_68 = (void *)0x0;
  local_48 = uStack_60;
  (**(code **)(**(long **)(param_1 + 8) + 0x120))(*(long **)(param_1 + 8),&local_68);
  uVar1 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(this + 0xe8);
    uVar6 = uVar1;
    uVar4 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + (long)(int)uVar4 * 8) == 0x1001c10) {
          if (-1 < (int)uVar4) {
            uVar2 = 0;
            if (uVar4 < uVar1) {
              uVar2 = *(undefined4 *)(lVar5 + 4 + (ulong)uVar4 * 8);
            }
            goto LAB_001f5dee;
          }
          goto LAB_001f5de8;
        }
        uVar7 = (int)(uVar4 + uVar6) / 2;
        if (uVar7 == uVar4) goto LAB_001f5de8;
        if (*(int *)(lVar5 + (long)(int)uVar7 * 8) < 0x1001c11) break;
        uVar6 = uVar7;
        if ((int)uVar7 <= (int)uVar4) goto LAB_001f5de8;
      }
      uVar4 = uVar7;
    } while ((int)uVar7 < (int)uVar6);
  }
LAB_001f5de8:
  uVar2 = _ZN4juce7ColoursL5blackE_14;
LAB_001f5dee:
  Graphics::setColour(param_1,uVar2);
  auVar8._0_4_ = _DAT_005d9910 + (float)local_48;
  auVar8._4_4_ = _UNK_005d9914 + local_48._4_4_;
  auVar8._8_4_ = _UNK_005d9918 + (float)uStack_40;
  auVar8._12_4_ = _UNK_005d991c + uStack_40._4_4_;
  auVar8 = maxps(auVar8,ZEXT816(0));
  uStack_60 = auVar8._0_8_;
  local_68 = _DAT_005d9920;
  (**(code **)(**(long **)(param_1 + 8) + 0x118))(*(long **)(param_1 + 8),&local_68);
  uVar2 = (**(code **)(*(long *)this + 0x50))();
  uVar1 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(this + 0xe8);
    uVar6 = uVar1;
    uVar4 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + (long)(int)uVar4 * 8) == 0x1001c00) {
          if (-1 < (int)uVar4) {
            uVar3 = 0;
            if (uVar4 < uVar1) {
              uVar3 = *(undefined4 *)(lVar5 + 4 + (ulong)uVar4 * 8);
            }
            goto LAB_001f5eae;
          }
          goto LAB_001f5ea8;
        }
        uVar7 = (int)(uVar4 + uVar6) / 2;
        if (uVar7 == uVar4) goto LAB_001f5ea8;
        if (*(int *)(lVar5 + (long)(int)uVar7 * 8) < 0x1001c01) break;
        uVar6 = uVar7;
        if ((int)uVar7 <= (int)uVar4) goto LAB_001f5ea8;
      }
      uVar4 = uVar7;
    } while ((int)uVar7 < (int)uVar6);
  }
LAB_001f5ea8:
  uVar3 = _ZN4juce7ColoursL5blackE_14;
LAB_001f5eae:
  detail::LookAndFeelHelpers::layoutTooltipText((LookAndFeelHelpers *)&local_68,uVar2,param_2,uVar3)
  ;
                    /* try { // try from 001f5ec2 to 001f5ed1 has its CatchHandler @ 001f5f23 */
  TextLayout::draw(0,local_48,(long *)&local_68,*(long **)(param_1 + 8));
  __ptr = local_68;
  if (0 < (int)uStack_60._4_4_) {
    lVar5 = (ulong)uStack_60._4_4_ + 1;
    do {
      ContainerDeletePolicy<juce::TextLayout::Line>::destroy
                (*(long **)((long)__ptr + (ulong)((int)lVar5 - 2) * 8));
      lVar5 = lVar5 + -1;
    } while (1 < lVar5);
  }
  free(__ptr);
  return;
}


