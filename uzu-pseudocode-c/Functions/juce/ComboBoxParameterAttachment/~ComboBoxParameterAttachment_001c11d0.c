// Function : ~ComboBoxParameterAttachment
// Namespace: juce:ComboBoxParameterAttachment
// Entry    : 001c11d0
// Prototype: undefined ~ComboBoxParameterAttachment(ComboBoxParameterAttachment * this)
// Body     : 001c11d0 - 001c11f6


/* juce::ComboBoxParameterAttachment::~ComboBoxParameterAttachment() */

void __thiscall
juce::ComboBoxParameterAttachment::~ComboBoxParameterAttachment(ComboBoxParameterAttachment *this)

{
  *(undefined ***)this = &PTR__ComboBoxParameterAttachment_00706ab8;
  ComboBox::removeListener(*(ComboBox **)(this + 8),(long)this);
  ParameterAttachment::~ParameterAttachment((ParameterAttachment *)(this + 0x18));
  return;
}


