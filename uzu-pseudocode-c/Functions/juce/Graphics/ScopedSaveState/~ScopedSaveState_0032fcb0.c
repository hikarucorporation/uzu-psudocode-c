// Function : ~ScopedSaveState
// Namespace: juce:Graphics:ScopedSaveState
// Entry    : 0032fcb0
// Prototype: undefined8 ~ScopedSaveState(ScopedSaveState * this)
// Body     : 0032fcb0 - 0032fcc8


/* juce::Graphics::ScopedSaveState::~ScopedSaveState() */

undefined8 __thiscall juce::Graphics::ScopedSaveState::~ScopedSaveState(ScopedSaveState *this)

{
  undefined8 in_RAX;
  
  if (this[0x10] == (ScopedSaveState)0x0) {
                    /* try { // try from 0032fcc4 to 0032fcc6 has its CatchHandler @ 0032fcc9 */
    (**(code **)(**(long **)(this + 8) + 0x78))();
    return in_RAX;
  }
  this[0x10] = (ScopedSaveState)0x0;
  return in_RAX;
}


