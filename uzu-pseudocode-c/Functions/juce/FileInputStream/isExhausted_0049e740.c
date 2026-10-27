// Function : isExhausted
// Namespace: juce:FileInputStream
// Entry    : 0049e740
// Prototype: bool isExhausted(FileInputStream * this)
// Body     : 0049e740 - 0049e752


/* juce::FileInputStream::isExhausted() */

bool __thiscall juce::FileInputStream::isExhausted(FileInputStream *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x18);
  lVar2 = (**(code **)(*(long *)this + 0x10))();
  return lVar2 <= lVar1;
}


