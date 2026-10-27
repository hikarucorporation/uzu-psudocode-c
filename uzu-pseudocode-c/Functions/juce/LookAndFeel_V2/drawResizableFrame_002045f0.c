// Function : drawResizableFrame
// Namespace: juce:LookAndFeel_V2
// Entry    : 002045f0
// Prototype: undefined drawResizableFrame(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, long * param_5)
// Body     : 002045f0 - 002045f4


/* non-virtual thunk to juce::LookAndFeel_V2::drawResizableFrame(juce::Graphics&, int, int,
   juce::BorderSize<int> const&) */

void __thiscall
juce::LookAndFeel_V2::drawResizableFrame
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = *param_5;
  uStack_40 = 0;
  uVar5 = (uint)((ulong)uStack_48 >> 0x20);
  iVar1 = *(int *)((long)param_5 + 0xc) + uVar5;
  if (iVar1 + (int)uStack_48 + (int)param_5[1] != 0) {
    iVar1 = param_3 - iVar1;
    iVar4 = param_4 - ((int)param_5[1] + (int)uStack_48);
    uVar3 = uStack_48 << 0x20;
    if (param_2[0x10] != (Graphics)0x0) {
      param_2[0x10] = (Graphics)0x0;
      (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    }
    param_2[0x10] = (Graphics)0x1;
    uStack_58 = uVar3 | uVar5;
    param_2[0x10] = (Graphics)0x0;
    uStack_50 = CONCAT44(iVar4,iVar1);
    (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    (**(code **)(**(long **)(param_2 + 8) + 0x40))(*(long **)(param_2 + 8),&uStack_58);
    Graphics::setColour(param_2,0x50000000);
    uStack_50 = CONCAT44((float)param_4,(float)param_3);
    uStack_58 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_2 + 8),&uStack_58);
    Graphics::setColour(param_2,0x19000000);
    if (iVar1 < -1) {
      iVar1 = -2;
    }
    iVar2 = -2;
    if (-2 < iVar4) {
      iVar2 = iVar4;
    }
    uStack_58 = CONCAT44((float)((int)uStack_48 + -1),(float)(uStack_48._4_4_ + -1));
    uStack_50 = CONCAT44((float)(iVar2 + 2),(float)(iVar1 + 2));
    (**(code **)(**(long **)(param_2 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_2 + 8),&uStack_58);
    if (param_2[0x10] == (Graphics)0x0) {
      (**(code **)(**(long **)(param_2 + 8) + 0x78))();
    }
    else {
      param_2[0x10] = (Graphics)0x0;
    }
  }
  return;
}


