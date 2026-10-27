// Function : hasProgramPitchNames
// Namespace: juce:JuceVST3Component
// Entry    : 001aa2f0
// Prototype: byte hasProgramPitchNames(JuceVST3Component * this)
// Body     : 001aa2f0 - 001aa380


/* non-virtual thunk to juce::JuceVST3Component::hasProgramPitchNames(int, int) */

byte __thiscall juce::JuceVST3Component::hasProgramPitchNames(JuceVST3Component *this)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  String aSStack_28 [8];
  char local_20;
  
  lVar1 = *(long *)(this + 0x68);
  plVar2 = *(long **)(lVar1 + 0xd8);
  (**(code **)(*plVar2 + 0x188))(aSStack_28,plVar2,0,1);
  bVar4 = true;
  if (local_20 == '\0') {
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0x7e) {
        bVar4 = false;
        goto LAB_001aa36d;
      }
      plVar2 = *(long **)(lVar1 + 0xd8);
      (**(code **)(*plVar2 + 0x188))(aSStack_28,plVar2,uVar3 + 2,1);
      uVar3 = uVar3 + 1;
    } while (local_20 == '\0');
    bVar4 = uVar3 < 0x7f;
  }
  local_20 = 0;
  juce::String::~String(aSStack_28);
LAB_001aa36d:
  return bVar4 ^ 1;
}


