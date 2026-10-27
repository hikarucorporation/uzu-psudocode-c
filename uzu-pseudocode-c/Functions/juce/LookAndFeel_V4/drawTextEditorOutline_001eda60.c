// Function : drawTextEditorOutline
// Namespace: juce:LookAndFeel_V4
// Entry    : 001eda60
// Prototype: undefined drawTextEditorOutline(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, long param_5)
// Body     : 001eda60 - 001edb8f


/* juce::LookAndFeel_V4::drawTextEditorOutline(juce::Graphics&, int, int, juce::TextEditor&) */

void __thiscall
juce::LookAndFeel_V4::drawTextEditorOutline
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,long param_5)

{
  Component *this;
  Component *pCVar1;
  long lVar2;
  Component *pCVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((*(long *)(param_5 + 0x38) == 0) ||
     (lVar2 = __dynamic_cast(*(long *)(param_5 + 0x38),&Component::typeinfo,&AlertWindow::typeinfo,0
                            ), lVar2 == 0)) {
    this = (Component *)(param_5 + 8);
    pCVar3 = this;
    do {
      if ((*(ushort *)(pCVar3 + 0xe8) & 0x8000) != 0) {
        return;
      }
      pCVar3 = *(Component **)(pCVar3 + 0x30);
      pCVar1 = Component::currentlyFocusedComponent;
    } while (pCVar3 != (Component *)0x0);
    for (; pCVar1 != this; pCVar1 = *(Component **)(pCVar1 + 0x30)) {
      if (pCVar1 == (Component *)0x0) goto LAB_001edb3a;
    }
    if (*(char *)(param_5 + 0x1c8) == '\0') {
      pCVar3 = this;
      do {
        if ((*(ushort *)(pCVar3 + 0xe8) & 0x8000) != 0) goto LAB_001edb3a;
        pCVar3 = *(Component **)(pCVar3 + 0x30);
      } while (pCVar3 != (Component *)0x0);
      uVar5 = 0x1000206;
    }
    else {
LAB_001edb3a:
      uVar5 = 0x1000205;
    }
    uVar4 = Component::findColour(this,uVar5,'\0');
    Graphics::setColour(param_2,(int)uVar4);
    uStack_28 = CONCAT44((float)param_4,(float)param_3);
    local_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0xd0))(*(long **)(param_2 + 8),&local_30);
  }
  return;
}


