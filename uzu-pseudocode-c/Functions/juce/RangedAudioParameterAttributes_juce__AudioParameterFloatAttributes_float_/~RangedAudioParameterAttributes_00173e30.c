// Function : ~RangedAudioParameterAttributes
// Namespace: juce:RangedAudioParameterAttributes_juce__AudioParameterFloatAttributes_float_
// Entry    : 00173e30
// Prototype: undefined ~RangedAudioParameterAttributes(RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float> * this)
// Body     : 00173e30 - 00173e6a


/* juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,
   float>::~RangedAudioParameterAttributes() */

void __thiscall
juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>::
~RangedAudioParameterAttributes
          (RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float> *this)

{
  if (*(code **)(this + 0x40) != (code *)0x0) {
                    /* try { // try from 00173e41 to 00173e4a has its CatchHandler @ 00173e73 */
    (**(code **)(this + 0x40))(this + 0x30,this + 0x30,3);
  }
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* try { // try from 00173e58 to 00173e61 has its CatchHandler @ 00173e6b */
    (**(code **)(this + 0x20))(this + 0x10,this + 0x10,3);
  }
  juce::String::~String((String *)this);
  return;
}


