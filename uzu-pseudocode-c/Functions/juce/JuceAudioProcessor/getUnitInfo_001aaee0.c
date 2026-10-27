// Function : getUnitInfo
// Namespace: juce:JuceAudioProcessor
// Entry    : 001aaee0
// Prototype: undefined8 getUnitInfo(JuceAudioProcessor * this, int param_1, uint * param_2)
// Body     : 001aaee0 - 001ab08e


/* juce::JuceAudioProcessor::getUnitInfo(int, Steinberg::Vst::UnitInfo&) */

undefined8 __thiscall
juce::JuceAudioProcessor::getUnitInfo(JuceAudioProcessor *this,int param_1,uint *param_2)

{
  AudioProcessorParameterGroup *this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  AudioProcessorParameterGroup *this_01;
  ushort *puVar5;
  ulong uVar6;
  bool bVar7;
  String local_30 [8];
  
  if (param_1 == 0) {
    param_2[0] = 0;
    param_2[1] = 0xffffffff;
    iVar3 = (**(code **)(**(long **)(this + 0xd8) + 0xe0))();
    uVar1 = 0xffffffff;
    if (0 < iVar3) {
      uVar1 = *(uint *)(this + 100);
    }
    param_2[0x42] = uVar1;
    translate((juce *)local_30,(byte *)"Root Unit");
                    /* try { // try from 001ab042 to 001ab049 has its CatchHandler @ 001ab097 */
    puVar5 = juce::String::toUTF16(local_30);
    uVar6 = 0;
    do {
      *(ushort *)((long)param_2 + uVar6 * 2 + 8) = puVar5[uVar6];
      if (puVar5[uVar6] == 0) break;
      bVar7 = uVar6 < 0x7f;
      uVar6 = uVar6 + 1;
    } while (bVar7);
  }
  else {
    if (*(uint *)(this + 0x18c) <= param_1 - 1U) {
      return 1;
    }
    this_00 = *(AudioProcessorParameterGroup **)
               (*(long *)(this + 0x180) + (long)(int)(param_1 - 1U) * 8);
    if (this_00 == (AudioProcessorParameterGroup *)0x0) {
      return 1;
    }
    lVar4 = AudioProcessorParameterGroup::getParent(this_00);
    uVar2 = 0;
    uVar1 = 0;
    if (lVar4 != 0) {
      AudioProcessorParameterGroup::getID((long *)local_30,(long *)this_00);
      uVar1 = juce::String::hashCode(local_30);
      uVar1 = uVar1 & 0x7fffffff;
      juce::String::~String(local_30);
    }
    *param_2 = uVar1;
    this_01 = (AudioProcessorParameterGroup *)AudioProcessorParameterGroup::getParent(this_00);
    if ((this_01 != (AudioProcessorParameterGroup *)0x0) &&
       (lVar4 = AudioProcessorParameterGroup::getParent(this_01), lVar4 != 0)) {
      AudioProcessorParameterGroup::getID((long *)local_30,(long *)this_01);
      uVar2 = juce::String::hashCode(local_30);
      uVar2 = uVar2 & 0x7fffffff;
      juce::String::~String(local_30);
    }
    param_2[1] = uVar2;
    param_2[0x42] = 0xffffffff;
    AudioProcessorParameterGroup::getName((long *)local_30,(long)this_00);
                    /* try { // try from 001aafc9 to 001aafd0 has its CatchHandler @ 001ab08f */
    puVar5 = juce::String::toUTF16(local_30);
    uVar6 = 0;
    do {
      *(ushort *)((long)param_2 + uVar6 * 2 + 8) = puVar5[uVar6];
      if (puVar5[uVar6] == 0) break;
      bVar7 = uVar6 < 0x7f;
      uVar6 = uVar6 + 1;
    } while (bVar7);
  }
  *(undefined2 *)((long)param_2 + 0x106) = 0;
  juce::String::~String(local_30);
  return 0;
}


