// Function : getProgramName
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4c40
// Prototype: undefined8 getProgramName(JuceVST3EditController * this, int param_1, uint param_2, long param_3)
// Body     : 001b4c40 - 001b4cb9


/* non-virtual thunk to juce::JuceVST3EditController::getProgramName(int, int, char16_t*) */

undefined8 __thiscall
juce::JuceVST3EditController::getProgramName
          (JuceVST3EditController *this,int param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  ushort *puVar2;
  ulong uVar3;
  bool bVar4;
  String aSStack_18 [8];
  
  if (*(JuceAudioProcessor **)(this + 0x58) != (JuceAudioProcessor *)0x0) {
    uVar1 = JuceAudioProcessor::getProgramName
                      (*(JuceAudioProcessor **)(this + 0x58),param_1,param_2,param_3);
    return uVar1;
  }
  juce::String::String(aSStack_18);
                    /* try { // try from 001b4c6a to 001b4c71 has its CatchHandler @ 001b4cba */
  puVar2 = juce::String::toUTF16(aSStack_18);
  uVar3 = 0;
  do {
    *(ushort *)(param_3 + uVar3 * 2) = puVar2[uVar3];
    if (puVar2[uVar3] == 0) break;
    bVar4 = uVar3 < 0x7f;
    uVar3 = uVar3 + 1;
  } while (bVar4);
  *(undefined2 *)(param_3 + 0xfe) = 0;
  juce::String::~String(aSStack_18);
  return 1;
}


