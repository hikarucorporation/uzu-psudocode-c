// Function : getBusInfo
// Namespace: juce:JuceVST3Component
// Entry    : 001a8010
// Prototype: undefined8 getBusInfo(JuceVST3Component * this, int param_1, int param_2, uint param_3, undefined4 * param_4)
// Body     : 001a8010 - 001a8136


/* juce::JuceVST3Component::getBusInfo(int, int, int, Steinberg::Vst::BusInfo&) */

undefined8 __thiscall
juce::JuceVST3Component::getBusInfo
          (JuceVST3Component *this,int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  byte bVar8;
  
  if (param_1 == 0) {
    if ((int)param_3 < 0) {
      return 1;
    }
    lVar5 = (ulong)(param_2 != 0) * 0x10;
    uVar1 = *(uint *)(lVar5 + 0xcc + *(long *)(this + 0x68));
    if ((int)uVar1 <= (int)param_3) {
      return 1;
    }
    if ((param_3 < uVar1) &&
       (lVar5 = *(long *)(*(long *)(lVar5 + *(long *)(this + 0x68) + 0xc0) + (ulong)param_3 * 8),
       lVar5 != 0)) {
      *param_4 = 0;
      param_4[1] = param_2;
      iVar2 = AudioChannelSet::size((AudioChannelSet *)(lVar5 + 0x60));
      param_4[2] = iVar2;
      getVst3SpeakerArrangement((AudioChannelSet *)(lVar5 + 0x60));
                    /* try { // try from 001a80ad to 001a80b1 has its CatchHandler @ 001a8137 */
      puVar3 = juce::String::toUTF16((String *)(lVar5 + 8));
      uVar6 = 0;
      do {
        *(ushort *)((long)param_4 + uVar6 * 2 + 0xc) = puVar3[uVar6];
        if (puVar3[uVar6] == 0) break;
        bVar7 = uVar6 < 0x7f;
        uVar6 = uVar6 + 1;
      } while (bVar7);
      *(undefined2 *)((long)param_4 + 0x10a) = 0;
      if (param_2 == 0) {
        bVar8 = 1;
        if (param_3 == 0) {
          plVar4 = (long *)(**(code **)(**(long **)(this + 0x68) + 0x170))();
          if (plVar4 == (long *)0x0) {
            bVar8 = 0;
          }
          else {
            bVar8 = (**(code **)(*plVar4 + 0x30))(plVar4);
            bVar8 = bVar8 ^ 1;
          }
        }
      }
      else {
        bVar8 = param_3 != 0;
      }
      param_4[0x43] = (uint)bVar8;
      param_4[0x44] = (uint)*(byte *)(lVar5 + 0x88);
      return 0;
    }
  }
  memset(param_4,0,0x114);
  return 1;
}


