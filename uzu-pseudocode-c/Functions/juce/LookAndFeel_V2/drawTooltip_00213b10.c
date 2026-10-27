// Function : drawTooltip
// Namespace: juce:LookAndFeel_V2
// Entry    : 00213b10
// Prototype: undefined drawTooltip(LookAndFeel_V2 * this, Graphics * param_1, String * param_2, int param_3, int param_4)
// Body     : 00213b10 - 00213d42


/* juce::LookAndFeel_V2::drawTooltip(juce::Graphics&, juce::String const&, int, int) */

void __thiscall
juce::LookAndFeel_V2::drawTooltip
          (LookAndFeel_V2 *this,Graphics *param_1,String *param_2,int param_3,int param_4)

{
  uint uVar1;
  void *__ptr;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar1 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(this + 0xe8);
    uVar3 = uVar1;
    uVar4 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + (long)(int)uVar4 * 8) == 0x1001b00) {
          if (-1 < (int)uVar4) {
            uVar3 = 0;
            if (uVar4 < uVar1) {
              uVar3 = *(uint *)(lVar5 + 4 + (ulong)uVar4 * 8);
            }
            goto LAB_00213b9e;
          }
          goto LAB_00213b98;
        }
        uVar6 = (int)(uVar4 + uVar3) / 2;
        if (uVar6 == uVar4) goto LAB_00213b98;
        if (*(int *)(lVar5 + (long)(int)uVar6 * 8) < 0x1001b01) break;
        uVar3 = uVar6;
        if ((int)uVar6 <= (int)uVar4) goto LAB_00213b98;
      }
      uVar4 = uVar6;
    } while ((int)uVar6 < (int)uVar3);
  }
LAB_00213b98:
  uVar3 = _ZN4juce7ColoursL5blackE_14;
LAB_00213b9e:
  Graphics::fillAll(param_1,uVar3);
  uVar1 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(this + 0xe8);
    uVar3 = uVar1;
    uVar4 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + (long)(int)uVar4 * 8) == 0x1001c10) {
          if (-1 < (int)uVar4) {
            uVar3 = 0;
            if (uVar4 < uVar1) {
              uVar3 = *(uint *)(lVar5 + 4 + (ulong)uVar4 * 8);
            }
            goto LAB_00213c0e;
          }
          goto LAB_00213c08;
        }
        uVar6 = (int)(uVar4 + uVar3) / 2;
        if (uVar6 == uVar4) goto LAB_00213c08;
        if (*(int *)(lVar5 + (long)(int)uVar6 * 8) < 0x1001c11) break;
        uVar3 = uVar6;
        if ((int)uVar6 <= (int)uVar4) goto LAB_00213c08;
      }
      uVar4 = uVar6;
    } while ((int)uVar6 < (int)uVar3);
  }
LAB_00213c08:
  uVar3 = _ZN4juce7ColoursL5blackE_14;
LAB_00213c0e:
  Graphics::setColour(param_1,uVar3);
  uStack_60 = CONCAT44((float)param_4,(float)param_3);
  uStack_40 = 0;
  local_68 = (void *)0x0;
  local_48 = uStack_60;
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))(*(long **)(param_1 + 8),&local_68);
  uVar2 = (**(code **)(*(long *)this + 0x50))();
  uVar1 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(this + 0xe8);
    uVar3 = uVar1;
    uVar4 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar5 + (long)(int)uVar4 * 8) == 0x1001c00) {
          if (-1 < (int)uVar4) {
            uVar3 = 0;
            if (uVar4 < uVar1) {
              uVar3 = *(uint *)(lVar5 + 4 + (ulong)uVar4 * 8);
            }
            goto LAB_00213cce;
          }
          goto LAB_00213cc8;
        }
        uVar6 = (int)(uVar4 + uVar3) / 2;
        if (uVar6 == uVar4) goto LAB_00213cc8;
        if (*(int *)(lVar5 + (long)(int)uVar6 * 8) < 0x1001c01) break;
        uVar3 = uVar6;
        if ((int)uVar6 <= (int)uVar4) goto LAB_00213cc8;
      }
      uVar4 = uVar6;
    } while ((int)uVar6 < (int)uVar3);
  }
LAB_00213cc8:
  uVar3 = _ZN4juce7ColoursL5blackE_14;
LAB_00213cce:
  detail::LookAndFeelHelpers::layoutTooltipText((LookAndFeelHelpers *)&local_68,uVar2,param_2,uVar3)
  ;
                    /* try { // try from 00213ce2 to 00213cf1 has its CatchHandler @ 00213d43 */
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


