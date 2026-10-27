// Function : hasProgramPitchNames
// Namespace: juce:JuceVST3Component
// Entry    : 001a92c0
// Prototype: byte hasProgramPitchNames(long param_1)
// Body     : 001a92c0 - 001a9361


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3Component::hasProgramPitchNames(int, int) */

byte __cdecl juce::JuceVST3Component::hasProgramPitchNames(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  String local_30 [8];
  char local_28;
  
  lVar1 = *(long *)(param_1 + 0x78);
  plVar2 = *(long **)(lVar1 + 0xd8);
  uVar4 = 0;
  iVar3 = 1;
  (**(code **)(*plVar2 + 0x188))(local_30,plVar2,0,1);
  bVar5 = true;
  if (local_28 == '\0') {
    do {
      if (uVar4 == 0xffffff81) {
        bVar5 = false;
        goto LAB_001a9344;
      }
      plVar2 = *(long **)(lVar1 + 0xd8);
      (**(code **)(*plVar2 + 0x188))(local_30,plVar2,iVar3,1);
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + 1;
    } while (local_28 == '\0');
    bVar5 = ~uVar4 < 0x7f;
  }
  local_28 = 0;
  juce::String::~String(local_30);
LAB_001a9344:
  return bVar5 ^ 1;
}


