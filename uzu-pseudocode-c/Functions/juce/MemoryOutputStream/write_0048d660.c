// Function : write
// Namespace: juce:MemoryOutputStream
// Entry    : 0048d660
// Prototype: bool write(MemoryOutputStream * this, void * param_1, size_t param_2)
// Body     : 0048d660 - 0048d69c


/* juce::MemoryOutputStream::write(void const*, unsigned long) */

bool __thiscall
juce::MemoryOutputStream::write(MemoryOutputStream *this,void *param_1,size_t param_2)

{
  void *__dest;
  
  if (param_2 == 0) {
    return true;
  }
  __dest = (void *)prepareToWrite(this,param_2);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest != (void *)0x0;
}


