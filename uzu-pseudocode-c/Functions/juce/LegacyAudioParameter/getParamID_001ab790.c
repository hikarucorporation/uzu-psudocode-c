// Function : getParamID
// Namespace: juce:LegacyAudioParameter
// Entry    : 001ab790
// Prototype: LegacyAudioParameter * getParamID(LegacyAudioParameter * this, long param_1, char param_2)
// Body     : 001ab790 - 001ab834


/* juce::LegacyAudioParameter::getParamID(juce::AudioProcessorParameter const*, bool) */

LegacyAudioParameter * __thiscall
juce::LegacyAudioParameter::getParamID(LegacyAudioParameter *this,long param_1,char param_2)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    juce::String::String((String *)this);
  }
  else {
    lVar1 = __dynamic_cast(param_1,&AudioProcessorParameter::typeinfo,&typeinfo,0);
    if (lVar1 == 0) {
      plVar2 = (long *)__dynamic_cast(param_1,&AudioProcessorParameter::typeinfo,
                                      &HostedAudioProcessorParameter::typeinfo,0);
      if ((plVar2 == (long *)0x0) || (param_2 != '\0')) {
                    /* try { // try from 001ab825 to 001ab82c has its CatchHandler @ 001ab835 */
        juce::String::String((String *)this,*(uint *)(param_1 + 8));
      }
      else {
                    /* try { // try from 001ab7ff to 001ab80a has its CatchHandler @ 001ab83d */
        (**(code **)(*plVar2 + 0x90))(this,plVar2);
      }
    }
    else if (param_2 == '\0') {
                    /* try { // try from 001ab817 to 001ab81f has its CatchHandler @ 001ab845 */
      (**(code **)(**(long **)(lVar1 + 0x60) + 0x1c0))
                (this,*(long **)(lVar1 + 0x60),*(undefined4 *)(lVar1 + 8));
    }
    else {
                    /* try { // try from 001ab7c6 to 001ab7cd has its CatchHandler @ 001ab845 */
      juce::String::String((String *)this,*(uint *)(lVar1 + 8));
    }
  }
  return this;
}


