// Function : ~FileOutputStream
// Namespace: juce:FileOutputStream
// Entry    : 004a0bd0
// Prototype: undefined ~FileOutputStream(FileOutputStream * this)
// Body     : 004a0bd0 - 004a0be1


/* juce::FileOutputStream::~FileOutputStream() */

void __thiscall juce::FileOutputStream::~FileOutputStream(FileOutputStream *this)

{
  ~FileOutputStream(this);
  operator_delete(this);
  return;
}


