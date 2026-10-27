// Function : ~TextHolderComponent
// Namespace: juce:TextEditor:TextHolderComponent
// Entry    : 0024a9d0
// Prototype: undefined ~TextHolderComponent(TextHolderComponent * this)
// Body     : 0024a9d0 - 0024aa16


/* juce::TextEditor::TextHolderComponent::~TextHolderComponent() */

void __thiscall
juce::TextEditor::TextHolderComponent::~TextHolderComponent(TextHolderComponent *this)

{
  TextEditor *this_00;
  
  this_00 = *(TextEditor **)(this + 0x120);
                    /* try { // try from 0024a9de to 0024a9e5 has its CatchHandler @ 0024aa17 */
  updateValueFromText(this_00);
  Value::removeListener((Value *)(this_00 + 0x2b8),(long)(this + 0x118));
  Timer::~Timer((Timer *)(this + 0xf0));
  Component::~Component((Component *)this);
  return;
}


