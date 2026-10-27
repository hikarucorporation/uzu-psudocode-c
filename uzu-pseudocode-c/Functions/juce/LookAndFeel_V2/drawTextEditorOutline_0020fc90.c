// Function : drawTextEditorOutline
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020fc90
// Prototype: undefined drawTextEditorOutline(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, long param_5)
// Body     : 0020fc90 - 0020febf


/* juce::LookAndFeel_V2::drawTextEditorOutline(juce::Graphics&, int, int, juce::TextEditor&) */

void __thiscall
juce::LookAndFeel_V2::drawTextEditorOutline
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,long param_5)

{
  Component *this;
  Component *pCVar1;
  ulong uVar2;
  Component *pCVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_30 [2];
  undefined8 uStack_28;
  
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
    if (pCVar1 == (Component *)0x0) goto LAB_0020fcfc;
  }
  if (*(char *)(param_5 + 0x1c8) == '\0') {
    pCVar3 = this;
    do {
      if ((*(ushort *)(pCVar3 + 0xe8) & 0x8000) != 0) goto LAB_0020fcfc;
      pCVar3 = *(Component **)(pCVar3 + 0x30);
    } while (pCVar3 != (Component *)0x0);
    uVar2 = Component::findColour(this,0x1000206,'\0');
    Graphics::setColour(param_2,(int)uVar2);
    uStack_28 = CONCAT44((float)param_4,(float)param_3);
    local_30[0] = 0;
    local_30[1] = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0xd0))(*(long **)(param_2 + 8),local_30);
    if (param_2[0x10] != (Graphics)0x0) {
      param_2[0x10] = (Graphics)0x0;
      (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_2 + 8) + 0x98))();
    uVar2 = Component::findColour(this,0x1000207,'\0');
    iVar5 = SUB84((double)((float)((uint)(uVar2 >> 0x18) & 0xff) * DAT_0065b218) + DAT_005d9098,0);
    iVar6 = 0xff;
    if (iVar5 < 0xff) {
      iVar6 = iVar5;
    }
    local_30[0] = (uint)uVar2 & 0xffffff | iVar6 << 0x18;
    uVar4 = 4;
  }
  else {
LAB_0020fcfc:
    uVar2 = Component::findColour(this,0x1000205,'\0');
    Graphics::setColour(param_2,(int)uVar2);
    uStack_28 = CONCAT44((float)param_4,(float)param_3);
    local_30[0] = 0;
    local_30[1] = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0xd0))(*(long **)(param_2 + 8),local_30);
    if (param_2[0x10] != (Graphics)0x0) {
      param_2[0x10] = (Graphics)0x0;
      (**(code **)(**(long **)(param_2 + 8) + 0x70))();
    }
    (**(code **)(**(long **)(param_2 + 8) + 0x98))();
    uVar2 = Component::findColour(this,0x1000207,'\0');
    local_30[0] = (int)uVar2;
    uVar4 = 3;
  }
  drawBevel((long)param_2,param_3,param_4 + 2,uVar4,local_30,local_30);
  return;
}


