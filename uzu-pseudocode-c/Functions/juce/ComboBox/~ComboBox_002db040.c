// Function : ~ComboBox
// Namespace: juce:ComboBox
// Entry    : 002db040
// Prototype: undefined ~ComboBox(ComboBox * this)
// Body     : 002db040 - 002db051


/* juce::ComboBox::~ComboBox() */

void __thiscall juce::ComboBox::~ComboBox(ComboBox *this)

{
  ~ComboBox(this);
  operator_delete(this);
  return;
}


