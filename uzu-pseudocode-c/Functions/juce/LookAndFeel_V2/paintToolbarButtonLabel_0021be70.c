// Function : paintToolbarButtonLabel
// Namespace: juce:LookAndFeel_V2
// Entry    : 0021be70
// Prototype: undefined paintToolbarButtonLabel(undefined8 param_1_00, Graphics * param_2, uint param_3, long param_4, ulong param_5_00, uint param_6, undefined8 param_7, Component * param_8)
// Body     : 0021be70 - 0021be74


/* non-virtual thunk to juce::LookAndFeel_V2::paintToolbarButtonLabel(juce::Graphics&, int, int,
   int, int, juce::String const&, juce::ToolbarItemComponent&) */

void __thiscall
juce::LookAndFeel_V2::paintToolbarButtonLabel
          (undefined8 param_1_00,Graphics *param_2,uint param_3,long param_4,ulong param_5_00,
          uint param_6,long *param_7,Component *param_8)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  
  uVar2 = Component::findColour(param_8,0x1003240,'\x01');
  do {
    if ((*(ushort *)(param_8 + 0xe8) & 0x8000) != 0) {
      uVar1 = (uint)uVar2 & 0xffffff | 0x40000000;
      goto LAB_00215eba;
    }
    param_8 = *(Component **)(param_8 + 0x30);
  } while (param_8 != (Component *)0x0);
  uVar1 = (uint)uVar2 | 0xff000000;
LAB_00215eba:
  Graphics::setColour(param_2,uVar1);
  fVar3 = (float)(int)param_6 * DAT_005de428;
  if (DAT_005d9064 <= (float)(int)param_6 * DAT_005de428) {
    fVar3 = DAT_005d9064;
  }
  Graphics::setFont(fVar3,param_2);
  uVar2 = 1;
  if (0 < (int)((long)(int)param_6 / (long)(int)fVar3)) {
    uVar2 = (long)(int)param_6 / (long)(int)fVar3 & 0xffffffff;
  }
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_2,param_7,(ulong)param_3 | param_4 << 0x20,
             param_5_00 & 0xffffffff | (ulong)param_6 << 0x20,(uint *)0x24,uVar2);
  return;
}


