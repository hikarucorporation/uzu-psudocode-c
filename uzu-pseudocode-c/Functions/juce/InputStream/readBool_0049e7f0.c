// Function : readBool
// Namespace: juce:InputStream
// Entry    : 0049e7f0
// Prototype: bool readBool(InputStream * this)
// Body     : 0049e7f0 - 0049e7fd


/* juce::InputStream::readBool() */

bool __thiscall juce::InputStream::readBool(InputStream *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x28))();
  return cVar1 != '\0';
}


