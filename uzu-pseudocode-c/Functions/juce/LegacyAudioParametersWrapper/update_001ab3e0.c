// Function : update
// Namespace: juce:LegacyAudioParametersWrapper
// Entry    : 001ab3e0
// Prototype: undefined update(LegacyAudioParametersWrapper * this, AudioProcessor * param_2, LegacyAudioParametersWrapper param_3)
// Body     : 001ab3e0 - 001ab56a


/* juce::LegacyAudioParametersWrapper::update(juce::AudioProcessor&, bool) */

void __thiscall
juce::LegacyAudioParametersWrapper::update
          (LegacyAudioParametersWrapper *this,AudioProcessor *param_2,
          LegacyAudioParametersWrapper param_3)

{
  int iVar1;
  int iVar2;
  AudioProcessor *pAVar3;
  AudioProcessorParameter *pAVar4;
  void *pvVar5;
  uint uVar6;
  LegacyAudioParametersWrapper LVar7;
  int local_68;
  int local_64;
  LegacyAudioParametersWrapper *local_60;
  AudioProcessor *local_58;
  undefined1 *local_50;
  
  *(undefined8 *)(this + 0x50) = 0;
  AudioProcessorParameterGroup::AudioProcessorParameterGroup
            ((AudioProcessorParameterGroup *)&local_60);
                    /* try { // try from 001ab410 to 001ab417 has its CatchHandler @ 001ab56b */
  AudioProcessorParameterGroup::operator=
            ((AudioProcessorParameterGroup *)(this + 8),(AudioProcessorParameterGroup *)&local_60);
  AudioProcessorParameterGroup::~AudioProcessorParameterGroup
            ((AudioProcessorParameterGroup *)&local_60);
  *(undefined4 *)(this + 0x44) = 0;
  if (*(int *)(this + 0x40) != 0) {
    free(*(void **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(AudioProcessor **)(this + 0x50) = param_2;
  this[0x58] = param_3;
  iVar1 = (**(code **)(*(long *)param_2 + 0x1b0))(param_2);
  pAVar3 = AudioProcessor::getParameters(param_2);
  LVar7 = (LegacyAudioParametersWrapper)(*(int *)(pAVar3 + 0xc) == iVar1);
  this[0x59] = LVar7;
  local_68 = 0;
  if (0 < iVar1) {
    local_64 = iVar1;
    do {
      local_60 = this;
      local_58 = param_2;
      local_50 = (undefined1 *)&local_68;
      pAVar4 = update(juce::AudioProcessor&,bool)::{lambda()#1}::operator()
                         ((_lambda___1_ *)&local_60);
      iVar2 = *(int *)(this + 0x44);
      if ((int)*(uint *)(this + 0x40) <= iVar2) {
        uVar6 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(this + 0x40) != uVar6) {
          if ((int)uVar6 < 1) {
            free(*(void **)(this + 0x38));
            *(undefined8 *)(this + 0x38) = 0;
          }
          else {
            pvVar5 = realloc(*(void **)(this + 0x38),(ulong)uVar6 << 3);
            *(void **)(this + 0x38) = pvVar5;
          }
        }
        *(uint *)(this + 0x40) = uVar6;
        iVar2 = *(int *)(this + 0x44);
        iVar1 = local_64;
      }
      *(int *)(this + 0x44) = iVar2 + 1;
      *(AudioProcessorParameter **)(*(long *)(this + 0x38) + (long)iVar2 * 8) = pAVar4;
      local_68 = local_68 + 1;
    } while (local_68 < iVar1);
    LVar7 = this[0x59];
  }
  if (LVar7 == (LegacyAudioParametersWrapper)0x0) {
    pAVar3 = (AudioProcessor *)0x0;
  }
  else {
    pAVar3 = AudioProcessor::getParameterTree(param_2);
  }
  *(AudioProcessor **)this = pAVar3;
  return;
}


