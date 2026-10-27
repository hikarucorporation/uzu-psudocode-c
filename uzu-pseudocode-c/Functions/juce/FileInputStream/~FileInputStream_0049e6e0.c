// Function : ~FileInputStream
// Namespace: juce:FileInputStream
// Entry    : 0049e6e0
// Prototype: undefined ~FileInputStream(FileInputStream * this)
// Body     : 0049e6e0 - 0049e6f1


/* juce::FileInputStream::~FileInputStream() */

void __thiscall juce::FileInputStream::~FileInputStream(FileInputStream *this)

{
  ~FileInputStream(this);
  operator_delete(this);
  return;
}


