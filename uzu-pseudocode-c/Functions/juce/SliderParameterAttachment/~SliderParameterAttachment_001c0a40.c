// Function : ~SliderParameterAttachment
// Namespace: juce:SliderParameterAttachment
// Entry    : 001c0a40
// Prototype: undefined ~SliderParameterAttachment(SliderParameterAttachment * this)
// Body     : 001c0a40 - 001c0a72


/* juce::SliderParameterAttachment::~SliderParameterAttachment() */

void __thiscall
juce::SliderParameterAttachment::~SliderParameterAttachment(SliderParameterAttachment *this)

{
  *(undefined ***)this = &PTR__SliderParameterAttachment_00706a80;
  Slider::removeListener(*(Slider **)(*(long *)(this + 8) + 0x1a0),(long)this);
  ParameterAttachment::~ParameterAttachment((ParameterAttachment *)(this + 0x10));
  operator_delete(this);
  return;
}


