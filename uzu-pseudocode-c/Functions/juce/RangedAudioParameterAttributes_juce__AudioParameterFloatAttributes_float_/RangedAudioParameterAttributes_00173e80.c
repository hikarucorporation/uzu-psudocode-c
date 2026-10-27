// Function : RangedAudioParameterAttributes
// Namespace: juce:RangedAudioParameterAttributes_juce__AudioParameterFloatAttributes_float_
// Entry    : 00173e80
// Prototype: undefined RangedAudioParameterAttributes(RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float> * this, long * param_1)
// Body     : 00173e80 - 00173f27


/* juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,
   float>::RangedAudioParameterAttributes(juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,
   float> const&) */

void __thiscall
juce::RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float>::
RangedAudioParameterAttributes
          (RangedAudioParameterAttributes<juce::AudioParameterFloatAttributes,float> *this,
          long *param_1)

{
  long lVar1;
  
  juce::String::String((String *)this,param_1);
  lVar1 = param_1[1];
  *(undefined4 *)(this + 0xb) = *(undefined4 *)((long)param_1 + 0xb);
  *(int *)(this + 8) = (int)lVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if ((code *)param_1[4] != (code *)0x0) {
                    /* try { // try from 00173ec5 to 00173ece has its CatchHandler @ 00173f6b */
    (*(code *)param_1[4])(this + 0x10,param_1 + 2,2);
    *(long *)(this + 0x28) = param_1[5];
    *(long *)(this + 0x20) = param_1[4];
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if ((code *)param_1[8] != (code *)0x0) {
                    /* try { // try from 00173f02 to 00173f0b has its CatchHandler @ 00173f28 */
    (*(code *)param_1[8])(this + 0x30,param_1 + 6,2);
    *(long *)(this + 0x48) = param_1[9];
    *(long *)(this + 0x40) = param_1[8];
  }
  return;
}


