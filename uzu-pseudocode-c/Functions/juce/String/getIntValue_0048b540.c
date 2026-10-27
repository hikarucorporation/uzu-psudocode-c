// Function : getIntValue
// Namespace: juce:String
// Entry    : 0048b540
// Prototype: undefined getIntValue(String * this)
// Body     : 0048b540 - 0048b54e


/* juce::String::getIntValue() const */

void __thiscall juce::String::getIntValue(String *this)

{
  strtol(*(char **)this,(char **)0x0,10);
  return;
}


