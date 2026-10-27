// Function : drawPopupMenuSectionHeader
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f0c40
// Prototype: undefined drawPopupMenuSectionHeader(LookAndFeel_V2 * this, Graphics * param_1, int * param_2, long * param_3)
// Body     : 001f0c40 - 001f0dc5


/* juce::LookAndFeel_V2::drawPopupMenuSectionHeader(juce::Graphics&, juce::Rectangle<int> const&,
   juce::String const&) */

void __thiscall
juce::LookAndFeel_V2::drawPopupMenuSectionHeader
          (LookAndFeel_V2 *this,Graphics *param_1,int *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  long *local_38;
  long *local_30;
  
  (**(code **)(*(long *)this + 0x1d8))((Font *)&local_30,this);
  uVar3 = Font::getStyleFlags((Font *)&local_30);
  local_38 = local_30;
  if (local_30 != (long *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 001f0c8b to 001f0c94 has its CatchHandler @ 001f0dc6 */
  Font::setStyleFlags((Font *)&local_38,uVar3 | 1);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 001f0cab to 001f0cbe has its CatchHandler @ 001f0dc8 */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_38);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_30 + 8))();
    }
  }
  uVar3 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar3) {
    lVar2 = *(long *)(this + 0xe8);
    uVar5 = uVar3;
    uVar4 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar2 + (long)(int)uVar4 * 8) == 0x1000601) {
          if (-1 < (int)uVar4) {
            uVar6 = 0;
            if (uVar4 < uVar3) {
              uVar6 = *(undefined4 *)(lVar2 + 4 + (ulong)uVar4 * 8);
            }
            goto LAB_001f0d5e;
          }
          goto LAB_001f0d58;
        }
        uVar7 = (int)(uVar4 + uVar5) / 2;
        if (uVar7 == uVar4) goto LAB_001f0d58;
        if (*(int *)(lVar2 + (long)(int)uVar7 * 8) < 0x1000602) break;
        uVar5 = uVar7;
        if ((int)uVar7 <= (int)uVar4) goto LAB_001f0d58;
      }
      uVar4 = uVar7;
    } while ((int)uVar7 < (int)uVar5);
  }
LAB_001f0d58:
  uVar6 = _ZN4juce7ColoursL5blackE_14;
LAB_001f0d5e:
  Graphics::setColour(param_1,uVar6);
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_1,param_3,CONCAT44(param_2[1],*param_2 + 0xc),
             CONCAT44((int)((float)param_2[3] * DAT_005de3cc),param_2[2] + -0x10),(uint *)0x11,1);
  return;
}


