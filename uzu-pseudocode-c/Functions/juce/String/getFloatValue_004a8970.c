// Function : getFloatValue
// Namespace: juce:String
// Entry    : 004a8970
// Prototype: long getFloatValue(String * this)
// Body     : 004a8970 - 004a8985


/* juce::String::getFloatValue() const */

long __thiscall juce::String::getFloatValue(String *this)

{
  long local_8;
  
  local_8 = *(long *)this;
  CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(&local_8);
  return local_8;
}


