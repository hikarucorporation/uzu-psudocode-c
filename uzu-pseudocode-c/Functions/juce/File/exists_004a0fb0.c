// Function : exists
// Namespace: juce:File
// Entry    : 004a0fb0
// Prototype: undefined8 exists(File * this)
// Body     : 004a0fb0 - 004a0fca


/* juce::File::exists() const */

undefined8 __thiscall juce::File::exists(File *this)

{
  int iVar1;
  undefined4 extraout_var;
  
  if (**(char **)this == '\0') {
    return 0;
  }
  iVar1 = access(*(char **)this,0);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}


