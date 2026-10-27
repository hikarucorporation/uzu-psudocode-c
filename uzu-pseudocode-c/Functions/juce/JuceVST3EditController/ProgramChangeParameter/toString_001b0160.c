// Function : toString
// Namespace: juce:JuceVST3EditController:ProgramChangeParameter
// Entry    : 001b0160
// Prototype: undefined toString(double param_1, ProgramChangeParameter * this, long param_3)
// Body     : 001b0160 - 001b01d4


/* juce::JuceVST3EditController::ProgramChangeParameter::toString(double, char16_t*) const */

void __thiscall
juce::JuceVST3EditController::ProgramChangeParameter::toString
          (double param_1,ProgramChangeParameter *this,long param_3)

{
  ushort *puVar1;
  ulong uVar2;
  bool bVar3;
  String aSStack_18 [8];
  
  (**(code **)(**(long **)(this + 0x338) + 0xf8))
            (aSStack_18,*(long **)(this + 0x338),
             (double)*(int *)(this + 0x314) * param_1 + DAT_005d9098);
                    /* try { // try from 001b0196 to 001b019d has its CatchHandler @ 001b01d5 */
  puVar1 = juce::String::toUTF16(aSStack_18);
  uVar2 = 0;
  do {
    *(ushort *)(param_3 + uVar2 * 2) = puVar1[uVar2];
    if (puVar1[uVar2] == 0) break;
    bVar3 = uVar2 < 0x7f;
    uVar2 = uVar2 + 1;
  } while (bVar3);
  *(undefined2 *)(param_3 + 0xfe) = 0;
  juce::String::~String(aSStack_18);
  return;
}


