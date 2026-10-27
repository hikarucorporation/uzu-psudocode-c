// Function : getProgramPitchName
// Namespace: juce:JuceVST3Component
// Entry    : 001a9370
// Prototype: byte getProgramPitchName(JuceVST3Component * this, undefined8 param_1, undefined8 param_2, undefined4 param_4_00, long param_4)
// Body     : 001a9370 - 001a93f6


/* juce::JuceVST3Component::getProgramPitchName(int, int, short, char16_t*) */

byte __thiscall
juce::JuceVST3Component::getProgramPitchName
          (JuceVST3Component *this,undefined8 param_1,undefined8 param_2,undefined4 param_4_00,
          long param_4)

{
  byte bVar1;
  ushort *puVar2;
  ulong uVar3;
  bool bVar4;
  String local_20 [8];
  byte local_18;
  
  (**(code **)(**(long **)(*(long *)(this + 0x78) + 0xd8) + 0x188))
            (local_20,*(long **)(*(long *)(this + 0x78) + 0xd8),param_4_00);
  bVar1 = local_18;
  if (local_18 != 0) {
                    /* try { // try from 001a93a2 to 001a93ab has its CatchHandler @ 001a93f7 */
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


