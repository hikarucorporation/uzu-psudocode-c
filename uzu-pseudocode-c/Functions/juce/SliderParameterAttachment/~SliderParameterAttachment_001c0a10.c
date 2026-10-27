// Function : ~SliderParameterAttachment
// Namespace: juce:SliderParameterAttachment
// Entry    : 001c0a10
// Prototype: undefined ~SliderParameterAttachment(SliderParameterAttachment * this)
// Body     : 001c0a10 - 001c0a3d


/* juce::SliderParameterAttachment::~SliderParameterAttachment() */

void __thiscall
juce::SliderParameterAttachment::~SliderParameterAttachment(SliderParameterAttachment *this)

{
  *(undefined ***)this = &PTR__SliderParameterAttachment_00706a80;
  Slider::removeListener(*(Slider **)(*(long *)(this + 8) + 0x1a0),(long)this);
  ParameterAttachment::~ParameterAttachment((ParameterAttachment *)(this + 0x10));
  return;
}


