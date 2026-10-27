// Function : operator+=
// Namespace: juce:String
// Entry    : 00492be0
// Prototype: String * operator+=(String * this)
// Body     : 00492be0 - 00492c18


/* juce::String::TEMPNAMEPLACEHOLDERVALUE(char) */

String * __thiscall juce::String::operator+=(String *this)

{
  size_t sVar1;
  char local_12 [2];
  
  sVar1 = strlen(local_12);
  appendCharPointer(this,local_12,(long)(local_12 + sVar1));
  return this;
}


