// Function : drawResizableFrame
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f66e0
// Prototype: undefined drawResizableFrame(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, long * param_5)
// Body     : 001f66e0 - 001f685d


/* juce::LookAndFeel_V2::drawResizableFrame(juce::Graphics&, int, int, juce::BorderSize<int> const&)
    */

void __thiscall
juce::LookAndFeel_V2::drawResizableFrame
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_5;
  uStack_40 = 0;
  uVar5 = (uint)((ulong)local_48 >> 0x20);
  iVar1 = *(int *)((long)param_5 + 0xc) + uVar5;
  if (iVar1 + (int)local_48 + (int)param_5[1] != 0) {
    iVar1 = param_3 - iVar1;
    iVar4 = param_4 - ((int)param_5[1] + (int)local_48);
    uVar3 = local_48 << 0x20;
    if (param_2[0x10] != (Graphics)0x0) {
      param_2[0x10] = (Graphics)0x0;
      (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    }
    param_2[0x10] = (Graphics)0x1;
    local_58 = uVar3 | uVar5;
    param_2[0x10] = (Graphics)0x0;
                    /* try { // try from 001f6777 to 001f6838 has its CatchHandler @ 001f6866 */
    uStack_50 = CONCAT44(iVar4,iVar1);
    (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    (**(code **)(**(long **)(param_2 + 8) + 0x40))(*(long **)(param_2 + 8),&local_58);
    Graphics::setColour(param_2,0x50000000);
    uStack_50 = CONCAT44((float)param_4,(float)param_3);
    local_58 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_2 + 8),&local_58);
    Graphics::setColour(param_2,0x19000000);
    if (iVar1 < -1) {
      iVar1 = -2;
    }
    iVar2 = -2;
    if (-2 < iVar4) {
      iVar2 = iVar4;
    }
    local_58 = CONCAT44((float)((int)local_48 + -1),(float)(local_48._4_4_ + -1));
    uStack_50 = CONCAT44((float)(iVar2 + 2),(float)(iVar1 + 2));
    (**(code **)(**(long **)(param_2 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_2 + 8),&local_58);
    if (param_2[0x10] == (Graphics)0x0) {
                    /* try { // try from 001f684c to 001f684e has its CatchHandler @ 001f685e */
      (**(code **)(**(long **)(param_2 + 8) + 0x78))();
    }
    else {
      param_2[0x10] = (Graphics)0x0;
    }
  }
  return;
}


