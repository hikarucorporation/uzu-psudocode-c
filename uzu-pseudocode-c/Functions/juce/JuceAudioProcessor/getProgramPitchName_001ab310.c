// Function : getProgramPitchName
// Namespace: juce:JuceAudioProcessor
// Entry    : 001ab310
// Prototype: byte getProgramPitchName(JuceAudioProcessor * this, undefined8 param_1, undefined8 param_2, undefined4 param_4_00, long param_4)
// Body     : 001ab310 - 001ab396


/* juce::JuceAudioProcessor::getProgramPitchName(int, int, short, char16_t*) */

byte __thiscall
juce::JuceAudioProcessor::getProgramPitchName
          (JuceAudioProcessor *this,undefined8 param_1,undefined8 param_2,undefined4 param_4_00,
          long param_4)

{
  byte bVar1;
  ushort *puVar2;
  ulong uVar3;
  bool bVar4;
  String local_20 [8];
  byte local_18;
  
  (**(code **)(**(long **)(this + 0xd8) + 0x188))(local_20,*(long **)(this + 0xd8),param_4_00);
  bVar1 = local_18;
  if (local_18 != 0) {
                    /* try { // try from 001ab33e to 001ab347 has its CatchHandler @ 001ab397 */
    puVar2 = juce::String::toUTF16(local_20);
    uVar3 = 0;
    do {
      *(ushort *)(param_4 + uVar3 * 2) = puVar2[uVar3];
      if (puVar2[uVar3] == 0) break;
      bVar4 = uVar3 < 0x7f;
      uVar3 = uVar3 + 1;
    } while (bVar4);
    *(undefined2 *)(param_4 + 0xfe) = 0;
    if (local_18 != 0) {
      local_18 = 0;
      juce::String::~String(local_20);
    }
  }
  return bVar1 ^ 1;
}


