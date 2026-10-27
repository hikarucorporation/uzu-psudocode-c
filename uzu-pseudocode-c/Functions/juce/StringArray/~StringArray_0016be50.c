// Function : ~StringArray
// Namespace: juce:StringArray
// Entry    : 0016be50
// Prototype: undefined ~StringArray(StringArray * this)
// Body     : 0016be50 - 0016bea0


/* juce::StringArray::~StringArray() */

void __thiscall juce::StringArray::~StringArray(StringArray *this)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      juce::String::~String((String *)(*(long *)this + lVar2));
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (lVar1 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


