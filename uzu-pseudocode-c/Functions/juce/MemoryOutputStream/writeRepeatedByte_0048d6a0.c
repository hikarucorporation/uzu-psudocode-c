// Function : writeRepeatedByte
// Namespace: juce:MemoryOutputStream
// Entry    : 0048d6a0
// Prototype: bool writeRepeatedByte(MemoryOutputStream * this, uint param_2_00, size_t param_2)
// Body     : 0048d6a0 - 0048d6db


/* juce::MemoryOutputStream::writeRepeatedByte(unsigned char, unsigned long) */

bool __thiscall
juce::MemoryOutputStream::writeRepeatedByte(MemoryOutputStream *this,uint param_2_00,size_t param_2)

{
  void *__s;
  
  if (param_2 == 0) {
    return true;
  }
  __s = (void *)prepareToWrite(this,param_2);
  if (__s != (void *)0x0) {
    memset(__s,param_2_00 & 0xff,param_2);
  }
  return __s != (void *)0x0;
}


