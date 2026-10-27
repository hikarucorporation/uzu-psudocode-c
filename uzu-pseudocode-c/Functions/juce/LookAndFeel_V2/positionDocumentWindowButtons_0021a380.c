// Function : positionDocumentWindowButtons
// Namespace: juce:LookAndFeel_V2
// Entry    : 0021a380
// Prototype: undefined positionDocumentWindowButtons(LookAndFeel_V2 * this, undefined8 param_2_00, int param_2, undefined4 param_3, int param_4, int param_5, Component * param_6, Component * param_7, Component * param_8, char param_9)
// Body     : 0021a380 - 0021a384


/* non-virtual thunk to juce::LookAndFeel_V2::positionDocumentWindowButtons(juce::DocumentWindow&,
   int, int, int, int, juce::Button*, juce::Button*, juce::Button*, bool) */

void __thiscall
juce::LookAndFeel_V2::positionDocumentWindowButtons
          (LookAndFeel_V2 *this,undefined8 param_2_00,int param_2,int param_3,int param_4,
          int param_5,Component *param_6,Component *param_7,Component *param_8,char param_9)

{
  Component *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_5 + 7;
  if (-1 < param_5) {
    iVar2 = param_5;
  }
  iVar2 = param_5 - (iVar2 >> 3);
  pCVar1 = param_6;
  if (param_9 == '\0') {
    iVar4 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    iVar3 = ((param_4 + param_2) - iVar2) - (iVar4 >> 2);
    if (param_8 == (Component *)0x0) goto joined_r0x00215451;
    Component::setBounds(param_8,iVar3,param_3,iVar2,param_5);
    iVar4 = -iVar2 - (iVar4 >> 2);
LAB_002153cb:
    iVar3 = iVar3 + iVar4;
  }
  else {
    iVar3 = param_2 + 4;
    if (param_8 != (Component *)0x0) {
      Component::setBounds(param_8,iVar3,param_3,iVar2,param_5);
      iVar4 = iVar2;
      goto LAB_002153cb;
    }
  }
  if (param_9 != '\0') {
    pCVar1 = param_7;
    param_7 = param_6;
  }
joined_r0x00215451:
  if (param_7 != (Component *)0x0) {
    Component::setBounds(param_7,iVar3,param_3,iVar2,param_5);
    iVar4 = -iVar2;
    if (param_9 != '\0') {
      iVar4 = iVar2;
    }
    iVar3 = iVar3 + iVar4;
  }
  if (pCVar1 == (Component *)0x0) {
    return;
  }
  Component::setBounds(pCVar1,iVar3,param_3,iVar2,param_5);
  return;
}


