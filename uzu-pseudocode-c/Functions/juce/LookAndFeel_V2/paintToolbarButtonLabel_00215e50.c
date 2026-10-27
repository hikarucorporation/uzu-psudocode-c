// Function : paintToolbarButtonLabel
// Namespace: juce:LookAndFeel_V2
// Entry    : 00215e50
// Prototype: undefined paintToolbarButtonLabel(undefined8 param_1_00, Graphics * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, long * param_7, Component * param_8)
// Body     : 00215e50 - 00215f3b


/* juce::LookAndFeel_V2::paintToolbarButtonLabel(juce::Graphics&, int, int, int, int, juce::String
   const&, juce::ToolbarItemComponent&) */

void __thiscall
juce::LookAndFeel_V2::paintToolbarButtonLabel
          (undefined8 param_1_00,Graphics *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,long *param_7,Component *param_8)

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
  fVar3 = (float)param_6 * DAT_005de428;
  if (DAT_005d9064 <= (float)param_6 * DAT_005de428) {
    fVar3 = DAT_005d9064;
  }
  Graphics::setFont(fVar3,param_2);
  uVar2 = 1;
  if (0 < (int)((long)param_6 / (long)(int)fVar3)) {
    uVar2 = (long)param_6 / (long)(int)fVar3 & 0xffffffff;
  }
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_2,param_7,CONCAT44(param_4,param_3),
             CONCAT44(param_6,param_5),(uint *)0x24,uVar2);
  return;
}


