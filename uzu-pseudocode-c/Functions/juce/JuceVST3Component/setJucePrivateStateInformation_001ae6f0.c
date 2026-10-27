// Function : setJucePrivateStateInformation
// Namespace: juce:JuceVST3Component
// Entry    : 001ae6f0
// Prototype: undefined setJucePrivateStateInformation(JuceVST3Component * this, undefined8 param_1, int param_2)
// Body     : 001ae6f0 - 001ae8ff


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JuceVST3Component::setJucePrivateStateInformation(void const*, int) */

void __thiscall
juce::JuceVST3Component::setJucePrivateStateInformation
          (JuceVST3Component *this,undefined8 param_1,int param_2)

{
  AudioProcessorParameter *this_00;
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Identifier local_78 [8];
  var local_70 [16];
  var local_60 [16];
  ValueTree local_50 [48];
  
  lVar2 = (**(code **)(**(long **)(this + 0x68) + 0xb8))();
  if (lVar2 != 0) {
    return;
  }
  lVar2 = *(long *)(this + 0x78);
  lVar6 = *(long *)(lVar2 + 0x150);
  if (lVar6 == 0) {
    return;
  }
  lVar3 = lVar2 + 0x148;
  lVar4 = lVar3;
  do {
    plVar5 = (long *)(lVar6 + 0x18);
    if (*(uint *)(lVar2 + 0x60) <= *(uint *)(lVar6 + 0x20)) {
      plVar5 = (long *)(lVar6 + 0x10);
      lVar4 = lVar6;
    }
    lVar6 = *plVar5;
  } while (lVar6 != 0);
  if (lVar4 == lVar3) {
    return;
  }
  if (*(uint *)(lVar2 + 0x60) < *(uint *)(lVar4 + 0x20)) {
    lVar4 = lVar3;
  }
  if (lVar4 == lVar3) {
    return;
  }
  if (*(long *)(lVar4 + 0x28) == 0) {
    return;
  }
  ValueTree::readFromData(local_50,param_1,(long)param_2);
                    /* try { // try from 001ae784 to 001ae794 has its CatchHandler @ 001ae937 */
  Identifier::Identifier(local_78,(byte *)"Bypass");
  var::var(local_60,(var)0x0);
                    /* try { // try from 001ae7a4 to 001ae7ba has its CatchHandler @ 001ae91e */
  ValueTree::getProperty((long *)local_70,(long *)local_50,(long *)local_78,(long *)local_60);
  bVar1 = var::operator_cast_to_bool(local_70);
  lVar2 = *(long *)(this + 0x78);
  lVar6 = *(long *)(lVar2 + 0x150);
  if (lVar6 != 0) {
    lVar3 = lVar2 + 0x148;
    lVar4 = lVar3;
    do {
      plVar5 = (long *)(lVar6 + 0x18);
      if (*(uint *)(lVar2 + 0x60) <= *(uint *)(lVar6 + 0x20)) {
        plVar5 = (long *)(lVar6 + 0x10);
        lVar4 = lVar6;
      }
      lVar6 = *plVar5;
    } while (lVar6 != 0);
    if (lVar4 != lVar3) {
      if (*(uint *)(lVar2 + 0x60) < *(uint *)(lVar4 + 0x20)) {
        lVar4 = lVar3;
      }
      if ((lVar4 != lVar3) &&
         (this_00 = *(AudioProcessorParameter **)(lVar4 + 0x28),
         this_00 != (AudioProcessorParameter *)0x0)) {
        if (bVar1) {
          fVar7 = DAT_005d9038;
        }
        else {
          fVar7 = 0.0;
        }
                    /* try { // try from 001ae84b to 001ae850 has its CatchHandler @ 001ae90f */
        fVar8 = (float)(**(code **)(*(long *)this_00 + 0x10))(this_00);
        fVar9 = (float)(_DAT_005d91c0 & (uint)fVar8);
        if (fVar9 == DAT_005d94c8) {
          if ((fVar8 == fVar7) && (!NAN(fVar8) && !NAN(fVar7))) goto LAB_001ae8d3;
        }
        else {
          fVar8 = (float)((uint)(fVar8 - fVar7) & _DAT_005d91c0);
          if (fVar8 <= DAT_005d94cc) goto LAB_001ae8d3;
          fVar10 = fVar7;
          if (fVar7 <= fVar9) {
            fVar10 = fVar9;
          }
          if (fVar8 <= fVar10 * DAT_005d94d0) goto LAB_001ae8d3;
        }
        lVar2 = __tls_get_addr(&PTR_007153d8);
        *(undefined1 *)(lVar2 + 8) = 1;
                    /* try { // try from 001ae8bb to 001ae8c8 has its CatchHandler @ 001ae900 */
        AudioProcessorParameter::setValueNotifyingHost(fVar7,this_00);
        *(undefined1 *)(lVar2 + 8) = 0;
      }
    }
  }
LAB_001ae8d3:
  var::~var(local_70);
  var::~var(local_60);
  Identifier::~Identifier(local_78);
  ValueTree::~ValueTree(local_50);
  return;
}


