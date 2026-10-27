// Function : drawPopupMenuBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 00210930
// Prototype: undefined drawPopupMenuBackground(LookAndFeel_V2 * this, Graphics * param_1, uint param_2, int param_3)
// Body     : 00210930 - 00210b9b


/* juce::LookAndFeel_V2::drawPopupMenuBackground(juce::Graphics&, int, int) */

void __thiscall
juce::LookAndFeel_V2::drawPopupMenuBackground
          (LookAndFeel_V2 *this,Graphics *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long local_48;
  ulong uStack_40;
  LookAndFeel_V2 *local_38;
  
  uVar4 = *(uint *)(this + 0xf4);
  local_38 = this;
  if (0 < (int)uVar4) {
    lVar5 = *(long *)(this + 0xe8);
    uVar1 = 0;
    uVar2 = uVar4;
    do {
      while( true ) {
        if (*(int *)(lVar5 + (long)(int)uVar1 * 8) == 0x1000700) {
          if (-1 < (int)uVar1) {
            if (uVar4 <= uVar1) {
              Graphics::fillAll(param_1,0);
              uVar1 = 0x2badd8e6;
              goto LAB_00210a56;
            }
            uVar4 = *(uint *)(lVar5 + 4 + (ulong)uVar1 * 8);
            goto LAB_002109c0;
          }
          goto LAB_002109ba;
        }
        uVar3 = (int)(uVar1 + uVar2) / 2;
        if (uVar3 == uVar1) goto LAB_002109ba;
        if (*(int *)(lVar5 + (long)(int)uVar3 * 8) < 0x1000701) break;
        uVar2 = uVar3;
        if ((int)uVar3 <= (int)uVar1) goto LAB_002109ba;
      }
      uVar1 = uVar3;
    } while ((int)uVar3 < (int)uVar2);
  }
LAB_002109ba:
  uVar4 = _ZN4juce7ColoursL5blackE_14;
LAB_002109c0:
  Graphics::fillAll(param_1,uVar4);
  uVar1 = 0x2badd8e6;
  if (0xffffff < uVar4) {
    uVar2 = (uVar4 >> 0x18 ^ 0xff) * 0xd4 >> 8 ^ 0xff;
    uVar1 = ((uVar4 >> 0x18) * 0xd4) / uVar2;
    uVar1 = (((uVar4 & 0xff) - 0xe6) * uVar1 >> 8) + 0xe6 & 0xff |
            ((uVar4 >> 8 & 0xff) - 0xd8) * uVar1 + 0xd800 & 0xff00 |
            ((uVar4 >> 0x10 & 0xff) - 0xad) * uVar1 * 0x100 + 0xad0000 & 0xff0000 | uVar2 << 0x18;
  }
LAB_00210a56:
  Graphics::setColour(param_1,uVar1);
  if (0 < param_3) {
    iVar6 = 0;
    lVar5 = 0;
    do {
      local_48 = lVar5;
      uStack_40 = (ulong)param_2 | 0x100000000;
      (**(code **)(**(long **)(param_1 + 8) + 0xb0))(*(long **)(param_1 + 8),&local_48,0);
      lVar5 = lVar5 + 0x300000000;
      iVar6 = iVar6 + 3;
    } while (iVar6 < param_3);
  }
  uVar4 = *(uint *)(local_38 + 0xf4);
  if (0 < (int)uVar4) {
    lVar5 = *(long *)(local_38 + 0xe8);
    uVar1 = uVar4;
    uVar2 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + (long)(int)uVar2 * 8) == 0x1000600) {
          if (-1 < (int)uVar2) {
            uVar1 = 0;
            if (uVar2 < uVar4) {
              uVar1 = *(uint *)(lVar5 + 4 + (ulong)uVar2 * 8);
            }
            goto LAB_00210b2e;
          }
          goto LAB_00210b28;
        }
        uVar3 = (int)(uVar2 + uVar1) / 2;
        if (uVar3 == uVar2) goto LAB_00210b28;
        if (*(int *)(lVar5 + (long)(int)uVar3 * 8) < 0x1000601) break;
        uVar1 = uVar3;
        if ((int)uVar3 <= (int)uVar2) goto LAB_00210b28;
      }
      uVar2 = uVar3;
    } while ((int)uVar3 < (int)uVar1);
  }
LAB_00210b28:
  uVar1 = _ZN4juce7ColoursL5blackE_14;
LAB_00210b2e:
  Graphics::setColour(param_1,uVar1 & 0xffffff | 0x99000000);
  uStack_40 = CONCAT44((float)param_3,(float)(int)param_2);
  local_48 = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))(*(long **)(param_1 + 8),&local_48);
  return;
}


