// Function : ~ButtonParameterAttachment
// Namespace: juce:ButtonParameterAttachment
// Entry    : 001c1720
// Prototype: undefined ~ButtonParameterAttachment(ButtonParameterAttachment * this)
// Body     : 001c1720 - 001c174b


/* juce::ButtonParameterAttachment::~ButtonParameterAttachment() */

void __thiscall
juce::ButtonParameterAttachment::~ButtonParameterAttachment(ButtonParameterAttachment *this)

{
  *(undefined ***)this = &PTR__ButtonParameterAttachment_00706ae0;
  Button::removeListener(*(Button **)(this + 8),(long)this);
  ParameterAttachment::~ParameterAttachment((ParameterAttachment *)(this + 0x10));
  operator_delete(this);
  return;
}


