// Function : drawPopupMenuBackground
// Namespace: juce:LookAndFeel_V3
// Entry    : 001efb00
// Prototype: undefined drawPopupMenuBackground(LookAndFeel_V3 * this, Graphics * param_1, int param_2, int param_3)
// Body     : 001efb00 - 001efc42


/* juce::LookAndFeel_V3::drawPopupMenuBackground(juce::Graphics&, int, int) */

void __thiscall
juce::LookAndFeel_V3::drawPopupMenuBackground
          (LookAndFeel_V3 *this,Graphics *param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar1 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(this + 0xe8);
    uVar4 = 0;
    uVar3 = uVar1;
    do {
      while( true ) {
        if (*(int *)(lVar2 + (long)(int)uVar4 * 8) == 0x1000700) {
          if (-1 < (int)uVar4) {
            uVar3 = 0;
            if (uVar4 < uVar1) {
              uVar3 = *(uint *)(lVar2 + 4 + (ulong)uVar4 * 8);
            }
            goto LAB_001efb7e;
          }
          goto LAB_001efb78;
        }
        uVar5 = (int)(uVar4 + uVar3) / 2;
        if (uVar5 == uVar4) goto LAB_001efb78;
        if (*(int *)(lVar2 + (long)(int)uVar5 * 8) < 0x1000701) break;
        uVar3 = uVar5;
        if ((int)uVar5 <= (int)uVar4) goto LAB_001efb78;
      }
      uVar4 = uVar5;
    } while ((int)uVar5 < (int)uVar3);
  }
LAB_001efb78:
  uVar3 = _ZN4juce7ColoursL5blackE_14;
LAB_001efb7e:
  Graphics::fillAll(param_1,uVar3);
  uVar1 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(this + 0xe8);
    uVar4 = uVar1;
    uVar3 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar2 + (long)(int)uVar3 * 8) == 0x1000600) {
          if (-1 < (int)uVar3) {
            uVar4 = 0;
            if (uVar3 < uVar1) {
              uVar4 = *(uint *)(lVar2 + 4 + (ulong)uVar3 * 8);
            }
            goto LAB_001efbee;
          }
          goto LAB_001efbe8;
        }
        uVar5 = (int)(uVar3 + uVar4) / 2;
        if (uVar5 == uVar3) goto LAB_001efbe8;
        if (*(int *)(lVar2 + (long)(int)uVar5 * 8) < 0x1000601) break;
        uVar4 = uVar5;
        if ((int)uVar5 <= (int)uVar3) goto LAB_001efbe8;
      }
      uVar3 = uVar5;
    } while ((int)uVar5 < (int)uVar4);
  }
LAB_001efbe8:
  uVar4 = _ZN4juce7ColoursL5blackE_14;
LAB_001efbee:
  Graphics::setColour(param_1,uVar4 & 0xffffff | 0x99000000);
  uStack_30 = CONCAT44((float)param_3,(float)param_2);
  local_38 = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))(*(long **)(param_1 + 8),&local_38);
  return;
}


