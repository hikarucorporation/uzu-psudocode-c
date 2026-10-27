// Function : ~NormalisableRange
// Namespace: juce:NormalisableRange_float_
// Entry    : 00172340
// Prototype: undefined ~NormalisableRange(NormalisableRange<float> * this)
// Body     : 00172340 - 0017238d


/* juce::NormalisableRange<float>::~NormalisableRange() */

void __thiscall juce::NormalisableRange<float>::~NormalisableRange(NormalisableRange<float> *this)

{
  if (*(code **)(this + 0x68) != (code *)0x0) {
                    /* try { // try from 00172351 to 0017235a has its CatchHandler @ 0017239e */
    (**(code **)(this + 0x68))(this + 0x58,this + 0x58,3);
  }
  if (*(code **)(this + 0x48) != (code *)0x0) {
                    /* try { // try from 00172368 to 00172371 has its CatchHandler @ 00172396 */
    (**(code **)(this + 0x48))(this + 0x38,this + 0x38,3);
  }
  if (*(code **)(this + 0x28) != (code *)0x0) {
                    /* try { // try from 0017237f to 0017238b has its CatchHandler @ 0017238e */
    (**(code **)(this + 0x28))(this + 0x18,this + 0x18,3);
  }
  return;
}


