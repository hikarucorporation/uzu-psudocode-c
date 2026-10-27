// Function : hasProgramPitchNames
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4380
// Prototype: byte hasProgramPitchNames(long param_1)
// Body     : 001b4380 - 001b4438


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::hasProgramPitchNames(int, int) */

byte __cdecl juce::JuceVST3EditController::hasProgramPitchNames(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  String local_30 [8];
  char local_28;
  
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 == 0) {
    bVar4 = 1;
  }
  else {
    uVar3 = 0;
    iVar2 = 1;
    (**(code **)(**(long **)(lVar1 + 0xd8) + 0x188))(local_30,*(long **)(lVar1 + 0xd8),0,1);
    bVar5 = true;
    if (local_28 == '\0') {
      do {
        if (uVar3 == 0xffffff81) {
          bVar5 = false;
          goto LAB_001b4414;
        }
        (**(code **)(**(long **)(lVar1 + 0xd8) + 0x188))(local_30,*(long **)(lVar1 + 0xd8),iVar2,1);
        uVar3 = uVar3 - 1;
        iVar2 = iVar2 + 1;
      } while (local_28 == '\0');
      bVar5 = ~uVar3 < 0x7f;
    }
    local_28 = 0;
    juce::String::~String(local_30);
LAB_001b4414:
    bVar4 = bVar5 ^ 1;
  }
  return bVar4;
}


