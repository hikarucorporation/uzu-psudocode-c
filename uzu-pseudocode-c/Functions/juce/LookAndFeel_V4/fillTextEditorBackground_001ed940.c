// Function : fillTextEditorBackground
// Namespace: juce:LookAndFeel_V4
// Entry    : 001ed940
// Prototype: undefined fillTextEditorBackground(undefined8 param_1_00, Graphics * param_2, int param_3, int param_4, long param_5)
// Body     : 001ed940 - 001eda54


/* juce::LookAndFeel_V4::fillTextEditorBackground(juce::Graphics&, int, int, juce::TextEditor&) */

void __thiscall
juce::LookAndFeel_V4::fillTextEditorBackground
          (undefined8 param_1_00,Graphics *param_2,int param_3,int param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  Component *this;
  long local_30;
  undefined8 local_28;
  
  this = (Component *)(param_5 + 8);
  if (*(long *)(param_5 + 0x38) != 0) {
    lVar1 = __dynamic_cast(*(long *)(param_5 + 0x38),&Component::typeinfo,&AlertWindow::typeinfo,0);
    if (lVar1 != 0) {
      uVar2 = Component::findColour(this,0x1000200,'\0');
      Graphics::setColour(param_2,(int)uVar2);
      local_28 = CONCAT44(param_4,param_3);
      local_30 = 0;
      (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_30,0);
      uVar2 = Component::findColour(this,0x1000205,'\0');
      Graphics::setColour(param_2,(int)uVar2);
      if (0 < param_3) {
        local_30 = (ulong)(uint)(float)(param_4 + -1) << 0x20;
        local_28 = CONCAT44(0x3f800000,(float)param_3);
        (**(code **)(**(long **)(param_2 + 8) + 0xb8))(*(long **)(param_2 + 8),&local_30);
      }
      return;
    }
  }
  uVar2 = Component::findColour(this,0x1000200,'\0');
  Graphics::fillAll(param_2,(uint)uVar2);
  return;
}


