// Function : paintContent
// Namespace: juce:Slider:Pimpl:PopupDisplayComponent
// Entry    : 002e7380
// Prototype: undefined paintContent(PopupDisplayComponent * this, Graphics * param_1, ulong param_2, long param_3)
// Body     : 002e7380 - 002e7416


/* juce::Slider::Pimpl::PopupDisplayComponent::paintContent(juce::Graphics&, int, int) */

void __thiscall
juce::Slider::Pimpl::PopupDisplayComponent::paintContent
          (PopupDisplayComponent *this,Graphics *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),this + 0x140);
  uVar1 = Component::findColour(*(Component **)(this + 0x138),0x1001c00,'\x01');
  Graphics::setColour(param_1,(int)uVar1);
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_1,(long *)(this + 0x148),0,
             param_2 & 0xffffffff | param_3 << 0x20,(uint *)0x24,1);
  return;
}


