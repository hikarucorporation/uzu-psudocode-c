// Function : getTotalLength
// Namespace: juce:FileInputStream
// Entry    : 0049e700
// Prototype: __off_t getTotalLength(FileInputStream * this)
// Body     : 0049e700 - 0049e734


/* juce::FileInputStream::getTotalLength() */

__off_t __thiscall juce::FileInputStream::getTotalLength(FileInputStream *this)

{
  int iVar1;
  stat64 local_90;
  
  if (**(char **)(this + 8) != '\0') {
    iVar1 = stat64(*(char **)(this + 8),&local_90);
    if (iVar1 == 0) {
      return local_90.st_size;
    }
  }
  return 0;
}


