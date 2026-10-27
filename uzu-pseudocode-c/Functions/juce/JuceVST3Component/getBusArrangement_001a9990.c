// Function : getBusArrangement
// Namespace: juce:JuceVST3Component
// Entry    : 001a9990
// Prototype: undefined8 getBusArrangement(JuceVST3Component * this, int param_1, uint param_2, undefined8 * param_3)
// Body     : 001a9990 - 001a99e5


/* juce::JuceVST3Component::getBusArrangement(int, int, unsigned long&) */

undefined8 __thiscall
juce::JuceVST3Component::getBusArrangement
          (JuceVST3Component *this,int param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = (ulong)(param_1 != 0) * 0x10;
  uVar2 = 1;
  if ((param_2 < *(uint *)(lVar1 + 0xcc + *(long *)(this + 0x68))) &&
     (lVar1 = *(long *)(*(long *)(*(long *)(this + 0x68) + lVar1 + 0xc0) + (long)(int)param_2 * 8),
     lVar1 != 0)) {
    auVar3 = getVst3SpeakerArrangement((AudioChannelSet *)(lVar1 + 0x60));
    if (auVar3[8] != '\0') {
      *param_3 = auVar3._0_8_;
      uVar2 = 0;
    }
  }
  return uVar2;
}


