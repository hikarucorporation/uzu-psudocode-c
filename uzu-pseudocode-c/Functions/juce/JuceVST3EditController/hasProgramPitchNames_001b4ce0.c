// Function : hasProgramPitchNames
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4ce0
// Prototype: byte hasProgramPitchNames(JuceVST3EditController * this)
// Body     : 001b4ce0 - 001b4d77


/* non-virtual thunk to juce::JuceVST3EditController::hasProgramPitchNames(int, int) */

byte __thiscall juce::JuceVST3EditController::hasProgramPitchNames(JuceVST3EditController *this)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  String aSStack_28 [8];
  char local_20;
  
  lVar1 = *(long *)(this + 0x58);
  if (lVar1 == 0) {
    bVar2 = 1;
  }
  else {
    (**(code **)(**(long **)(lVar1 + 0xd8) + 0x188))(aSStack_28,*(long **)(lVar1 + 0xd8),0,1);
    bVar4 = true;
    if (local_20 == '\0') {
      uVar3 = 0xffffffff;
      do {
        if (uVar3 == 0x7e) {
          bVar4 = false;
          goto LAB_001b4d5d;
        }
        (**(code **)(**(long **)(lVar1 + 0xd8) + 0x188))
                  (aSStack_28,*(long **)(lVar1 + 0xd8),uVar3 + 2,1);
        uVar3 = uVar3 + 1;
      } while (local_20 == '\0');
      bVar4 = uVar3 < 0x7f;
    }
    local_20 = 0;
    juce::String::~String(aSStack_28);
LAB_001b4d5d:
    bVar2 = bVar4 ^ 1;
  }
  return bVar2;
}


