// Function : setStateInformation
// Namespace: juce:JuceVST3Component
// Entry    : 001ae610
// Prototype: undefined setStateInformation(JuceVST3Component * this, long param_1, uint param_2)
// Body     : 001ae610 - 001ae6cf


/* juce::JuceVST3Component::setStateInformation(void const*, int) */

void __thiscall
juce::JuceVST3Component::setStateInformation(JuceVST3Component *this,long param_1,uint param_2)

{
  undefined1 uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 local_31;
  String local_30 [8];
  
  local_31 = 0;
  puVar6 = &local_31;
  if (*(long *)(this + 0x80) != 0) {
    puVar6 = (undefined1 *)(*(long *)(this + 0x80) + 0x62b0);
  }
  uVar1 = *puVar6;
  *puVar6 = 1;
  uVar4 = (ulong)(int)param_2;
  if (0x16 < param_2) {
                    /* try { // try from 001ae65e to 001ae667 has its CatchHandler @ 001ae6df */
    juce::String::String(local_30,(char *)(param_1 + uVar4 + -0xf),param_1 + uVar4);
    bVar3 = operator==((undefined8 *)local_30,(byte *)"JUCEPrivateData");
    if (bVar3) {
      lVar2 = *(long *)(param_1 + -0x17 + uVar4);
      lVar5 = (uVar4 - 0x17) - lVar2;
      if (lVar2 != 0) {
                    /* try { // try from 001ae692 to 001ae699 has its CatchHandler @ 001ae6d0 */
        setJucePrivateStateInformation(this,param_1 + lVar5,(int)lVar2);
      }
      uVar4 = lVar5 - 8;
    }
    juce::String::~String(local_30);
  }
  if (uVar4 != 0) {
                    /* try { // try from 001ae6b4 to 001ae6be has its CatchHandler @ 001ae6e1 */
    (**(code **)(**(long **)(this + 0x68) + 0x118))
              (*(long **)(this + 0x68),param_1,uVar4 & 0xffffffff);
  }
  *puVar6 = uVar1;
  return;
}


