// Function : getProgramListInfo
// Namespace: juce:JuceAudioProcessor
// Entry    : 001ab0c0
// Prototype: undefined8 getProgramListInfo(JuceAudioProcessor * this, int param_1, undefined4 * param_2)
// Body     : 001ab0c0 - 001ab157


/* juce::JuceAudioProcessor::getProgramListInfo(int, Steinberg::Vst::ProgramListInfo&) */

undefined8 __thiscall
juce::JuceAudioProcessor::getProgramListInfo
          (JuceAudioProcessor *this,int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  ulong uVar3;
  bool bVar4;
  juce ajStack_18 [8];
  
  if (param_1 != 0) {
    memset(param_2,0,0x108);
    return 1;
  }
  *param_2 = *(undefined4 *)(this + 100);
  uVar1 = (**(code **)(**(long **)(this + 0xd8) + 0xe0))();
  param_2[0x41] = uVar1;
  translate(ajStack_18,(byte *)"Factory Presets");
                    /* try { // try from 001ab114 to 001ab11b has its CatchHandler @ 001ab158 */
  puVar2 = juce::String::toUTF16((String *)ajStack_18);
  uVar3 = 0;
  do {
    *(ushort *)((long)param_2 + uVar3 * 2 + 4) = puVar2[uVar3];
    if (puVar2[uVar3] == 0) break;
    bVar4 = uVar3 < 0x7f;
    uVar3 = uVar3 + 1;
  } while (bVar4);
  *(undefined2 *)((long)param_2 + 0x102) = 0;
  juce::String::~String((String *)ajStack_18);
  return 0;
}


