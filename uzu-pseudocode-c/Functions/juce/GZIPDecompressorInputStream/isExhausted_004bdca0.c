// Function : isExhausted
// Namespace: juce:GZIPDecompressorInputStream
// Entry    : 004bdca0
// Prototype: bool isExhausted(GZIPDecompressorInputStream * this)
// Body     : 004bdca0 - 004bdcb9


/* juce::GZIPDecompressorInputStream::isExhausted() */

bool __thiscall juce::GZIPDecompressorInputStream::isExhausted(GZIPDecompressorInputStream *this)

{
  if (((*(char **)(this + 0x48))[2] == '\0') && (**(char **)(this + 0x48) == '\0')) {
    return this[0x24] != (GZIPDecompressorInputStream)0x0;
  }
  return true;
}


