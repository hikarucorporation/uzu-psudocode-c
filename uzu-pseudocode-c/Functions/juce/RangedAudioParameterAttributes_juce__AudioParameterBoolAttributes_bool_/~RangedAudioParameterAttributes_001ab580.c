// Function : ~RangedAudioParameterAttributes
// Namespace: juce:RangedAudioParameterAttributes_juce__AudioParameterBoolAttributes_bool_
// Entry    : 001ab580
// Prototype: undefined ~RangedAudioParameterAttributes(RangedAudioParameterAttributes<juce::AudioParameterBoolAttributes,bool> * this)
// Body     : 001ab580 - 001ab5ba


/* juce::RangedAudioParameterAttributes<juce::AudioParameterBoolAttributes,
   bool>::~RangedAudioParameterAttributes() */

void __thiscall
juce::RangedAudioParameterAttributes<juce::AudioParameterBoolAttributes,bool>::
~RangedAudioParameterAttributes
          (RangedAudioParameterAttributes<juce::AudioParameterBoolAttributes,bool> *this)

{
  if (*(code **)(this + 0x40) != (code *)0x0) {
                    /* try { // try from 001ab591 to 001ab59a has its CatchHandler @ 001ab5c3 */
    (**(code **)(this + 0x40))(this + 0x30,this + 0x30,3);
  }
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* try { // try from 001ab5a8 to 001ab5b1 has its CatchHandler @ 001ab5bb */
    (**(code **)(this + 0x20))(this + 0x10,this + 0x10,3);
  }
  juce::String::~String((String *)this);
  return;
}


