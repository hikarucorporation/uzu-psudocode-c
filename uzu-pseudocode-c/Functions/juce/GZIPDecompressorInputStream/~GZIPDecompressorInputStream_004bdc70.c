// Function : ~GZIPDecompressorInputStream
// Namespace: juce:GZIPDecompressorInputStream
// Entry    : 004bdc70
// Prototype: undefined ~GZIPDecompressorInputStream(GZIPDecompressorInputStream * this)
// Body     : 004bdc70 - 004bdc81


/* juce::GZIPDecompressorInputStream::~GZIPDecompressorInputStream() */

void __thiscall
juce::GZIPDecompressorInputStream::~GZIPDecompressorInputStream(GZIPDecompressorInputStream *this)

{
  ~GZIPDecompressorInputStream(this);
  operator_delete(this);
  return;
}


