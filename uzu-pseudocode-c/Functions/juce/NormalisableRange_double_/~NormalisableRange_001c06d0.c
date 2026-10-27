// Function : ~NormalisableRange
// Namespace: juce:NormalisableRange_double_
// Entry    : 001c06d0
// Prototype: undefined ~NormalisableRange(NormalisableRange<double> * this)
// Body     : 001c06d0 - 001c071d


/* juce::NormalisableRange<double>::~NormalisableRange() */

void __thiscall juce::NormalisableRange<double>::~NormalisableRange(NormalisableRange<double> *this)

{
  if (*(code **)(this + 0x78) != (code *)0x0) {
                    /* try { // try from 001c06e1 to 001c06ea has its CatchHandler @ 001c072e */
    (**(code **)(this + 0x78))(this + 0x68,this + 0x68,3);
  }
  if (*(code **)(this + 0x58) != (code *)0x0) {
                    /* try { // try from 001c06f8 to 001c0701 has its CatchHandler @ 001c0726 */
    (**(code **)(this + 0x58))(this + 0x48,this + 0x48,3);
  }
  if (*(code **)(this + 0x38) != (code *)0x0) {
                    /* try { // try from 001c070f to 001c071b has its CatchHandler @ 001c071e */
    (**(code **)(this + 0x38))(this + 0x28,this + 0x28,3);
  }
  return;
}


