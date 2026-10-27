// Function : drawTextEditorOutline
// Namespace: juce:LookAndFeel_V3
// Entry    : 00290f20
// Prototype: undefined drawTextEditorOutline(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, long param_5)
// Body     : 00290f20 - 0029101c


/* juce::LookAndFeel_V3::drawTextEditorOutline(juce::Graphics&, int, int, juce::TextEditor&) */

void __thiscall
juce::LookAndFeel_V3::drawTextEditorOutline
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,long param_5)

{
  Component *this;
  Component *pCVar1;
  Component *pCVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  
  this = (Component *)(param_5 + 8);
  pCVar2 = this;
  do {
    if ((*(ushort *)(pCVar2 + 0xe8) & 0x8000) != 0) {
      return;
    }
    pCVar2 = *(Component **)(pCVar2 + 0x30);
    pCVar1 = Component::currentlyFocusedComponent;
  } while (pCVar2 != (Component *)0x0);
  for (; pCVar1 != this; pCVar1 = *(Component **)(pCVar1 + 0x30)) {
    if (pCVar1 == (Component *)0x0) goto LAB_00290fca;
  }
  if (*(char *)(param_5 + 0x1c8) == '\0') {
    pCVar2 = this;
    do {
      if ((*(ushort *)(pCVar2 + 0xe8) & 0x8000) != 0) goto LAB_00290fca;
      pCVar2 = *(Component **)(pCVar2 + 0x30);
    } while (pCVar2 != (Component *)0x0);
    uVar4 = 0x1000206;
  }
  else {
LAB_00290fca:
    uVar4 = 0x1000205;
  }
  uVar3 = Component::findColour(this,uVar4,'\0');
  Graphics::setColour(param_2,(int)uVar3);
  uStack_20 = CONCAT44((float)param_4,(float)param_3);
  local_28 = 0;
  (**(code **)(**(long **)(param_2 + 8) + 0xd0))(*(long **)(param_2 + 8),&local_28);
  return;
}


