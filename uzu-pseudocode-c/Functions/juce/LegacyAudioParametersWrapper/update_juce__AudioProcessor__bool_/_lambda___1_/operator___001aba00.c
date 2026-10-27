// Function : operator()
// Namespace: juce:LegacyAudioParametersWrapper:update_juce__AudioProcessor__bool_:_lambda___1_
// Entry    : 001aba00
// Prototype: AudioProcessorParameter * operator()({lambda()#1} * this)
// Body     : 001aba00 - 001abb09


/* juce::LegacyAudioParametersWrapper::update(juce::AudioProcessor&,
   bool)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

AudioProcessorParameter * __thiscall
juce::LegacyAudioParametersWrapper::update(juce::AudioProcessor&,bool)::{lambda()#1}::operator()
          (_lambda___1_ *this)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  AudioProcessor *pAVar5;
  AudioProcessorParameter *this_00;
  AudioProcessorParameter *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  lVar2 = *(long *)this;
  if (*(char *)(lVar2 + 0x59) == '\0') {
    uVar3 = *(undefined8 *)(this + 8);
    puVar4 = *(undefined4 **)(this + 0x10);
    this_00 = operator_new(0x68);
    uVar1 = *puVar4;
    *(undefined ***)this_00 = &PTR__AudioProcessorParameter_00714218;
    *(undefined8 *)(this_00 + 8) = 0xffffffff;
    CriticalSection::CriticalSection((CriticalSection *)(this_00 + 0x10));
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    StringArray::StringArray((StringArray *)(this_00 + 0x50));
    *(undefined ***)this_00 = &PTR__AudioProcessorParameter_007058e8;
    *(undefined8 *)(this_00 + 0x60) = uVar3;
    AudioProcessorParameter::setOwner(this_00,lVar2 + 0x48);
    AudioProcessorParameter::setParameterIndex(this_00,uVar1);
    local_30 = 0;
    local_38 = 0;
                    /* try { // try from 001abad0 to 001abadc has its CatchHandler @ 001abb0a */
    local_40 = this_00;
    AudioProcessorParameterGroup::append((AudioProcessorParameterGroup *)(lVar2 + 8),&local_40);
    if (local_40 != (AudioProcessorParameter *)0x0) {
      (**(code **)(*(long *)local_40 + 8))();
    }
  }
  else {
    pAVar5 = AudioProcessor::getParameters(*(AudioProcessor **)(this + 8));
    if (**(uint **)(this + 0x10) < *(uint *)(pAVar5 + 0xc)) {
      this_00 = *(AudioProcessorParameter **)
                 (*(long *)pAVar5 + (long)(int)**(uint **)(this + 0x10) * 8);
    }
    else {
      this_00 = (AudioProcessorParameter *)0x0;
    }
  }
  return this_00;
}


