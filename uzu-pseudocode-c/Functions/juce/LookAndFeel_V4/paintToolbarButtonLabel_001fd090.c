// Function : paintToolbarButtonLabel
// Namespace: juce:LookAndFeel_V4
// Entry    : 001fd090
// Prototype: undefined paintToolbarButtonLabel(undefined8 param_1_00, Graphics * param_2, uint param_3, long param_4_00, undefined4 param_5, int param_6, long * param_7, Component * param_8)
// Body     : 001fd090 - 001fd1d7


/* juce::LookAndFeel_V4::paintToolbarButtonLabel(juce::Graphics&, int, int, int, int, juce::String
   const&, juce::ToolbarItemComponent&) */

void __thiscall
juce::LookAndFeel_V4::paintToolbarButtonLabel
          (undefined8 param_1_00,Graphics *param_2,uint param_3,long param_4_00,undefined4 param_5,
          int param_6,long *param_7,Component *param_8)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  Component *pCVar4;
  float fVar5;
  
  pCVar4 = param_8;
  do {
    pCVar4 = *(Component **)(pCVar4 + 0x30);
    if (pCVar4 == (Component *)0x0) {
      uVar1 = 0x1003240;
      goto LAB_001fd10a;
    }
    lVar2 = __dynamic_cast(pCVar4,&Component::typeinfo,&PopupMenu::CustomComponent::typeinfo,0);
  } while (lVar2 == 0);
  uVar1 = 0x1000600;
LAB_001fd10a:
  uVar3 = Component::findColour(param_8,uVar1,'\0');
  do {
    if ((*(ushort *)(param_8 + 0xe8) & 0x8000) != 0) {
      uVar1 = (uint)uVar3 & 0xffffff | 0x40000000;
      goto LAB_001fd14a;
    }
    param_8 = *(Component **)(param_8 + 0x30);
  } while (param_8 != (Component *)0x0);
  uVar1 = (uint)uVar3 | 0xff000000;
LAB_001fd14a:
  Graphics::setColour(param_2,uVar1);
  fVar5 = (float)param_6 * DAT_005de428;
  if (DAT_005d9064 <= (float)param_6 * DAT_005de428) {
    fVar5 = DAT_005d9064;
  }
  Graphics::setFont(fVar5,param_2);
  uVar3 = 1;
  if (0 < (int)((long)param_6 / (long)(int)fVar5)) {
    uVar3 = (long)param_6 / (long)(int)fVar5 & 0xffffffff;
  }
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_2,param_7,(ulong)param_3 | param_4_00 << 0x20,
             CONCAT44(param_6,param_5),(uint *)0x24,uVar3);
  return;
}


