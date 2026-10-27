// Function : getUnitInfo
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4130
// Prototype: undefined8 getUnitInfo(JuceVST3EditController * this, int param_1, uint * param_2)
// Body     : 001b4130 - 001b41e7


/* juce::JuceVST3EditController::getUnitInfo(int, Steinberg::Vst::UnitInfo&) */

undefined8 __thiscall
juce::JuceVST3EditController::getUnitInfo(JuceVST3EditController *this,int param_1,uint *param_2)

{
  undefined8 uVar1;
  ushort *puVar2;
  ulong uVar3;
  bool bVar4;
  juce ajStack_18 [8];
  
  if (*(JuceAudioProcessor **)(this + 0xe8) != (JuceAudioProcessor *)0x0) {
    uVar1 = JuceAudioProcessor::getUnitInfo(*(JuceAudioProcessor **)(this + 0xe8),param_1,param_2);
    return uVar1;
  }
  if (param_1 != 0) {
    memset(param_2,0,0x10c);
    return 1;
  }
  param_2[0] = 0;
  param_2[1] = 0xffffffff;
  param_2[0x42] = 0xffffffff;
  translate(ajStack_18,(byte *)"Root Unit");
                    /* try { // try from 001b419b to 001b41a2 has its CatchHandler @ 001b41e8 */
  puVar2 = juce::String::toUTF16((String *)ajStack_18);
  uVar3 = 0;
  do {
    *(ushort *)((long)param_2 + uVar3 * 2 + 8) = puVar2[uVar3];
    if (puVar2[uVar3] == 0) break;
    bVar4 = uVar3 < 0x7f;
    uVar3 = uVar3 + 1;
  } while (bVar4);
  *(undefined2 *)((long)param_2 + 0x106) = 0;
  juce::String::~String((String *)ajStack_18);
  return 0;
}


