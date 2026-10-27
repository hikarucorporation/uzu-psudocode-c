// Function : ~TextHolderComponent
// Namespace: juce:TextEditor:TextHolderComponent
// Entry    : 0024aa40
// Prototype: undefined ~TextHolderComponent(TextHolderComponent * this)
// Body     : 0024aa40 - 0024aa8e


/* juce::TextEditor::TextHolderComponent::~TextHolderComponent() */

void __thiscall
juce::TextEditor::TextHolderComponent::~TextHolderComponent(TextHolderComponent *this)

{
  TextEditor *this_00;
  
  this_00 = *(TextEditor **)(this + 0x120);
                    /* try { // try from 0024aa4e to 0024aa55 has its CatchHandler @ 0024aa8f */
  updateValueFromText(this_00);
  Value::removeListener((Value *)(this_00 + 0x2b8),(long)(this + 0x118));
  Timer::~Timer((Timer *)(this + 0xf0));
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


