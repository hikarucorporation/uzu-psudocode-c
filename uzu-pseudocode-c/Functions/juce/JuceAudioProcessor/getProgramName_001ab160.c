// Function : getProgramName
// Namespace: juce:JuceAudioProcessor
// Entry    : 001ab160
// Prototype: undefined8 getProgramName(JuceAudioProcessor * this, int param_1, uint param_2, long param_3)
// Body     : 001ab160 - 001ab23c


/* juce::JuceAudioProcessor::getProgramName(int, int, char16_t*) */

undefined8 __thiscall
juce::JuceAudioProcessor::getProgramName
          (JuceAudioProcessor *this,int param_1,uint param_2,long param_3)

{
  uint uVar1;
  ushort *puVar2;
  ulong uVar3;
  bool bVar4;
  String local_20 [8];
  
  if ((*(int *)(this + 100) == param_1) &&
     (uVar1 = (**(code **)(**(long **)(this + 0xd8) + 0xe0))(), param_2 < uVar1)) {
    (**(code **)(**(long **)(this + 0xd8) + 0xf8))(local_20,*(long **)(this + 0xd8),param_2);
                    /* try { // try from 001ab1a6 to 001ab1ad has its CatchHandler @ 001ab23d */
    puVar2 = juce::String::toUTF16(local_20);
    uVar3 = 0;
    do {
      *(ushort *)(param_3 + uVar3 * 2) = puVar2[uVar3];
      if (puVar2[uVar3] == 0) break;
      bVar4 = uVar3 < 0x7f;
      uVar3 = uVar3 + 1;
    } while (bVar4);
    *(undefined2 *)(param_3 + 0xfe) = 0;
    juce::String::~String(local_20);
    return 0;
  }
  juce::String::String(local_20);
                    /* try { // try from 001ab1f0 to 001ab1f7 has its CatchHandler @ 001ab245 */
  puVar2 = juce::String::toUTF16(local_20);
  uVar3 = 0;
  do {
    *(ushort *)(param_3 + uVar3 * 2) = puVar2[uVar3];
    if (puVar2[uVar3] == 0) break;
    bVar4 = uVar3 < 0x7f;
    uVar3 = uVar3 + 1;
  } while (bVar4);
  *(undefined2 *)(param_3 + 0xfe) = 0;
  juce::String::~String(local_20);
  return 1;
}


