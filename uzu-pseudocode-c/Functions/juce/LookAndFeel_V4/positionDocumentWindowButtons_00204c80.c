// Function : positionDocumentWindowButtons
// Namespace: juce:LookAndFeel_V4
// Entry    : 00204c80
// Prototype: undefined positionDocumentWindowButtons(LookAndFeel_V4 * this, undefined8 param_2_00, int param_2, int param_3, int param_4, int param_5, Component * param_6, Component * param_7, Component * param_8, char param_9)
// Body     : 00204c80 - 00204d55


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V4::positionDocumentWindowButtons(juce::DocumentWindow&,
   int, int, int, int, juce::Button*, juce::Button*, juce::Button*, bool) */

void __thiscall
juce::LookAndFeel_V4::positionDocumentWindowButtons
          (LookAndFeel_V4 *this,undefined8 param_2_00,int param_2,int param_3,int param_4,
          int param_5,Component *param_6,Component *param_7,Component *param_8,char param_9)

{
  int iVar1;
  int iVar2;
  Component *this_00;
  int iVar3;
  
  iVar3 = (int)((double)param_5 * _DAT_005de608);
  iVar2 = (param_4 + param_2) - iVar3;
  if (param_9 != '\0') {
    iVar2 = param_2;
  }
  if (param_8 != (Component *)0x0) {
    Component::setBounds(param_8,iVar2,param_3,iVar3,param_5);
    iVar1 = -iVar3;
    if (param_9 != '\0') {
      iVar1 = iVar3;
    }
    iVar2 = iVar2 + iVar1;
  }
  this_00 = param_7;
  if (param_9 != '\0') {
    this_00 = param_6;
    param_6 = param_7;
  }
  if (this_00 != (Component *)0x0) {
    Component::setBounds(this_00,iVar2,param_3,iVar3,param_5);
    iVar1 = -iVar3;
    if (param_9 != '\0') {
      iVar1 = iVar3;
    }
    iVar2 = iVar2 + iVar1;
  }
  if (param_6 == (Component *)0x0) {
    return;
  }
  Component::setBounds(param_6,iVar2,param_3,iVar3,param_5);
  return;
}


