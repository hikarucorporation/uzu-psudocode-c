// Function : ~RangedAudioParameterAttributes
// Namespace: juce:RangedAudioParameterAttributes_juce__AudioParameterIntAttributes_int_
// Entry    : 001ac260
// Prototype: undefined ~RangedAudioParameterAttributes(RangedAudioParameterAttributes<juce::AudioParameterIntAttributes,int> * this)
// Body     : 001ac260 - 001ac29a


/* juce::RangedAudioParameterAttributes<juce::AudioParameterIntAttributes,
   int>::~RangedAudioParameterAttributes() */

void __thiscall
juce::RangedAudioParameterAttributes<juce::AudioParameterIntAttributes,int>::
~RangedAudioParameterAttributes
          (RangedAudioParameterAttributes<juce::AudioParameterIntAttributes,int> *this)

{
  if (*(code **)(this + 0x40) != (code *)0x0) {
                    /* try { // try from 001ac271 to 001ac27a has its CatchHandler @ 001ac2a3 */
    (**(code **)(this + 0x40))(this + 0x30,this + 0x30,3);
  }
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* try { // try from 001ac288 to 001ac291 has its CatchHandler @ 001ac29b */
    (**(code **)(this + 0x20))(this + 0x10,this + 0x10,3);
  }
  juce::String::~String((String *)this);
  return;
}


