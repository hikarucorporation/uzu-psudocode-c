// Function : ~TextHolderComponent
// Namespace: juce:TextEditor:TextHolderComponent
// Entry    : 0024ac10
// Prototype: undefined ~TextHolderComponent(TextHolderComponent * this)
// Body     : 0024ac10 - 0024ac5a


/* non-virtual thunk to juce::TextEditor::TextHolderComponent::~TextHolderComponent() */

void __thiscall
juce::TextEditor::TextHolderComponent::~TextHolderComponent(TextHolderComponent *this)

{
  TextEditor *this_00;
  
  this_00 = *(TextEditor **)(this + 8);
                    /* try { // try from 0024ac22 to 0024ac29 has its CatchHandler @ 0024ac5b */
  updateValueFromText(this_00);
  Value::removeListener((Value *)(this_00 + 0x2b8),(long)this);
  Timer::~Timer((Timer *)(this + -0x28));
  Component::~Component((Component *)(this + -0x118));
  return;
}


