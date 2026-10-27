// Function : ~FileInputSource
// Namespace: juce:FileInputSource
// Entry    : 004a5ec0
// Prototype: undefined ~FileInputSource(FileInputSource * this)
// Body     : 004a5ec0 - 004a5ef0


/* juce::FileInputSource::~FileInputSource() */

void __thiscall juce::FileInputSource::~FileInputSource(FileInputSource *this)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR__FileInputSource_00713268;
  piVar2 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return;
    }
  }
  return;
}


