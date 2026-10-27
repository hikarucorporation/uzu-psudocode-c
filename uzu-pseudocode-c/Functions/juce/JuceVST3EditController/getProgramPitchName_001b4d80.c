// Function : getProgramPitchName
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4d80
// Prototype: byte getProgramPitchName(JuceVST3EditController * this, undefined8 param_1, undefined8 param_3_00, short param_3, long param_4)
// Body     : 001b4d80 - 001b4e1d


/* non-virtual thunk to juce::JuceVST3EditController::getProgramPitchName(int, int, short,
   char16_t*) */

byte __thiscall
juce::JuceVST3EditController::getProgramPitchName
          (JuceVST3EditController *this,undefined8 param_1,undefined8 param_3_00,short param_3,
          long param_4)

{
  long *plVar1;
  ushort *puVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  String local_20 [8];
  byte local_18;
  
  if (*(long *)(this + 0x58) == 0) {
    bVar4 = 1;
  }
  else {
    plVar1 = *(long **)(*(long *)(this + 0x58) + 0xd8);
    (**(code **)(*plVar1 + 0x188))(local_20,plVar1,(int)param_3);
    bVar4 = local_18;
    if (local_18 != 0) {
                    /* try { // try from 001b4dbc to 001b4dc5 has its CatchHandler @ 001b4e1e */
      puVar2 = juce::String::toUTF16(local_20);
      uVar3 = 0;
      do {
        *(ushort *)(param_4 + uVar3 * 2) = puVar2[uVar3];
        if (puVar2[uVar3] == 0) break;
        bVar5 = uVar3 < 0x7f;
        uVar3 = uVar3 + 1;
      } while (bVar5);
      *(undefined2 *)(param_4 + 0xfe) = 0;
      if (local_18 != 0) {
        local_18 = 0;
        juce::String::~String(local_20);
      }
    }
    bVar4 = bVar4 ^ 1;
  }
  return bVar4;
}


