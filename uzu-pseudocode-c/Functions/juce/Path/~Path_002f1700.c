// Function : ~Path
// Namespace: juce:Path
// Entry    : 002f1700
// Prototype: undefined ~Path(Path * this)
// Body     : 002f1700 - 002f170e


/* juce::Path::~Path() */

void __thiscall juce::Path::~Path(Path *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


