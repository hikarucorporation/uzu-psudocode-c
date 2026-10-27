// Function : isThreadRunning
// Namespace: juce:Thread
// Entry    : 004ab720
// Prototype: undefined8 isThreadRunning(Thread * this)
// Body     : 004ab720 - 004ab72a


/* juce::Thread::isThreadRunning() const */

undefined8 __thiscall juce::Thread::isThreadRunning(Thread *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x10) >> 8),*(long *)(this + 0x10) != 0);
}


