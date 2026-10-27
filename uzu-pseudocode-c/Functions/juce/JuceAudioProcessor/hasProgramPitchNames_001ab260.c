// Function : hasProgramPitchNames
// Namespace: juce:JuceAudioProcessor
// Entry    : 001ab260
// Prototype: byte hasProgramPitchNames(long param_1)
// Body     : 001ab260 - 001ab301


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceAudioProcessor::hasProgramPitchNames(int, int) */

byte __cdecl juce::JuceAudioProcessor::hasProgramPitchNames(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  String local_30 [8];
  char local_28;
  
  uVar1 = 0;
  iVar2 = 1;
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x188))(local_30,*(long **)(param_1 + 0xd8),0,1);
  bVar3 = true;
  if (local_28 == '\0') {
    do {
      if (uVar1 == 0xffffff81) {
        bVar3 = false;
        goto LAB_001ab2e4;
      }
      (**(code **)(**(long **)(param_1 + 0xd8) + 0x188))
                (local_30,*(long **)(param_1 + 0xd8),iVar2,1);
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + 1;
    } while (local_28 == '\0');
    bVar3 = ~uVar1 < 0x7f;
  }
  local_28 = 0;
  juce::String::~String(local_30);
LAB_001ab2e4:
  return bVar3 ^ 1;
}


