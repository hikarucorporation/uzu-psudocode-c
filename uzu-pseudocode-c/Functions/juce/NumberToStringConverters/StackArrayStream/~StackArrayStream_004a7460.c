// Function : ~StackArrayStream
// Namespace: juce:NumberToStringConverters:StackArrayStream
// Entry    : 004a7460
// Prototype: undefined ~StackArrayStream(StackArrayStream * this)
// Body     : 004a7460 - 004a7483


/* juce::NumberToStringConverters::StackArrayStream::~StackArrayStream() */

void __thiscall
juce::NumberToStringConverters::StackArrayStream::~StackArrayStream(StackArrayStream *this)

{
  *(undefined **)this = PTR_vtable_00715ca8 + 0x10;
  std::locale::~locale((locale *)(this + 0x38));
  operator_delete(this);
  return;
}


