// Function : threadShouldExit
// Namespace: juce:Thread
// Entry    : 004ab730
// Prototype: byte threadShouldExit(Thread * this)
// Body     : 004ab730 - 004ab738


/* juce::Thread::threadShouldExit() const */

byte __thiscall juce::Thread::threadShouldExit(Thread *this)

{
  return (byte)this[0x165] & 1;
}


