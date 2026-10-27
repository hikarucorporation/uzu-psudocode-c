// Function : getProgramListInfo
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4b90
// Prototype: undefined8 getProgramListInfo(JuceVST3EditController * this, int param_1, undefined4 * param_2)
// Body     : 001b4b90 - 001b4c37


/* non-virtual thunk to juce::JuceVST3EditController::getProgramListInfo(int,
   Steinberg::Vst::ProgramListInfo&) */

undefined8 __thiscall
juce::JuceVST3EditController::getProgramListInfo
          (JuceVST3EditController *this,int param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ulong uVar4;
  bool bVar5;
  juce ajStack_18 [8];
  
  lVar1 = *(long *)(this + 0x58);
  if ((lVar1 == 0) || (param_1 != 0)) {
    memset(param_2,0,0x108);
    return 1;
  }
  *param_2 = *(undefined4 *)(lVar1 + 100);
  uVar2 = (**(code **)(**(long **)(lVar1 + 0xd8) + 0xe0))();
  param_2[0x41] = uVar2;
  translate(ajStack_18,(byte *)"Factory Presets");
                    /* try { // try from 001b4bed to 001b4bf4 has its CatchHandler @ 001b4c38 */
  puVar3 = juce::String::toUTF16((String *)ajStack_18);
  uVar4 = 0;
  do {
    *(ushort *)((long)param_2 + uVar4 * 2 + 4) = puVar3[uVar4];
    if (puVar3[uVar4] == 0) break;
    bVar5 = uVar4 < 0x7f;
    uVar4 = uVar4 + 1;
  } while (bVar5);
  *(undefined2 *)((long)param_2 + 0x102) = 0;
  juce::String::~String((String *)ajStack_18);
  return 0;
}


