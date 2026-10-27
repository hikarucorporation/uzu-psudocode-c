// Function : ~MidiBuffer
// Namespace: juce:MidiBuffer
// Entry    : 001a7ce0
// Prototype: undefined ~MidiBuffer(MidiBuffer * this)
// Body     : 001a7ce0 - 001a7cee


/* juce::MidiBuffer::~MidiBuffer() */

void __thiscall juce::MidiBuffer::~MidiBuffer(MidiBuffer *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


