// Function : ~TextHolderComponent
// Namespace: juce:TextEditor:TextHolderComponent
// Entry    : 0024ab80
// Prototype: undefined ~TextHolderComponent(TextHolderComponent * this)
// Body     : 0024ab80 - 0024abca


/* non-virtual thunk to juce::TextEditor::TextHolderComponent::~TextHolderComponent() */

void __thiscall
juce::TextEditor::TextHolderComponent::~TextHolderComponent(TextHolderComponent *this)

{
  TextEditor *this_00;
  
  this_00 = *(TextEditor **)(this + 0x30);
                    /* try { // try from 0024ab92 to 0024ab99 has its CatchHandler @ 0024abcb */
  updateValueFromText(this_00);
  Value::removeListener((Value *)(this_00 + 0x2b8),(long)(this + 0x28));
  Timer::~Timer((Timer *)this);
  Component::~Component((Component *)(this + -0xf0));
  return;
}


