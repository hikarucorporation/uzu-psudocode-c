// Function : createSliderTextBox
// Namespace: juce:LookAndFeel_V2
// Entry    : 00219d00
// Prototype: Label * createSliderTextBox(undefined8 param_1_00, Component * param_2)
// Body     : 00219d00 - 00219d04


/* non-virtual thunk to juce::LookAndFeel_V2::createSliderTextBox(juce::Slider&) */

Label * __thiscall
juce::LookAndFeel_V2::createSliderTextBox(undefined8 param_1_00,Component *param_2)

{
  undefined4 uVar1;
  Label *this;
  ulong uVar2;
  uint uVar3;
  undefined1 *puStack_20;
  undefined1 *puStack_18;
  
  this = operator_new(0x218);
  puStack_18 = &DAT_0061ac58;
  puStack_20 = &DAT_0061ac58;
  Label::Label(this,(long *)&puStack_18,(long *)&puStack_20);
  *(undefined ***)this = &PTR__Label_0070e9e0;
  *(undefined ***)(this + 0xf0) = &PTR__SliderLabelComp_0070ebf0;
  *(undefined ***)(this + 0x100) = &PTR__SliderLabelComp_0070ec20;
  *(undefined ***)(this + 0x108) = &PTR__SliderLabelComp_0070ec60;
  *(undefined ***)(this + 0x110) = &PTR__SliderLabelComp_0070ecc0;
  if (*(int *)(this + 0x1b8) != 0x24) {
    *(undefined4 *)(this + 0x1b8) = 0x24;
    Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  }
  *(undefined4 *)(this + 0x20c) = 2;
  uVar2 = Component::findColour(param_2,0x1001400,'\0');
  Component::setColour((Component *)this,0x1000281,(int)uVar2);
  if ((*(uint *)(*(long *)(param_2 + 0x1a0) + 0x20) & 0xfffffffe) == 2) {
    uVar1 = _ZN4juce7ColoursL16transparentBlackE_5;
  }
  else {
    uVar2 = Component::findColour(param_2,0x1001500,'\0');
    uVar1 = (undefined4)uVar2;
  }
  Component::setColour((Component *)this,0x1000280,uVar1);
  uVar2 = Component::findColour(param_2,0x1001700,'\0');
  Component::setColour((Component *)this,0x1000282,(int)uVar2);
  uVar2 = Component::findColour(param_2,0x1001400,'\0');
  Component::setColour((Component *)this,0x1000201,(int)uVar2);
  uVar2 = Component::findColour(param_2,0x1001500,'\0');
  uVar3 = 0xff000000;
  if ((*(uint *)(*(long *)(param_2 + 0x1a0) + 0x20) & 0xfffffffe) == 2) {
    uVar3 = 0xb2000000;
  }
  Component::setColour((Component *)this,0x1000200,uVar3 | (uint)uVar2 & 0xffffff);
  uVar2 = Component::findColour(param_2,0x1001700,'\0');
  Component::setColour((Component *)this,0x1000205,(int)uVar2);
  uVar2 = Component::findColour(param_2,0x1001600,'\0');
  Component::setColour((Component *)this,0x1000202,(int)uVar2);
  return this;
}


