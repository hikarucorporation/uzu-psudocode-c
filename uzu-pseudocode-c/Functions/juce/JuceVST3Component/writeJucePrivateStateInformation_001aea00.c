// Function : writeJucePrivateStateInformation
// Namespace: juce:JuceVST3Component
// Entry    : 001aea00
// Prototype: undefined writeJucePrivateStateInformation(JuceVST3Component * this, long * param_1)
// Body     : 001aea00 - 001aeb21


/* juce::JuceVST3Component::writeJucePrivateStateInformation(juce::MemoryOutputStream&) */

void __thiscall
juce::JuceVST3Component::writeJucePrivateStateInformation(JuceVST3Component *this,long *param_1)

{
  var vVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  Identifier local_60 [8];
  Identifier local_58 [16];
  ValueTree local_48 [48];
  
  lVar2 = (**(code **)(**(long **)(this + 0x68) + 0xb8))();
  if (lVar2 != 0) {
    return;
  }
  Identifier::Identifier(local_58,(byte *)"JUCEPrivateData");
                    /* try { // try from 001aea39 to 001aea45 has its CatchHandler @ 001aeb57 */
  ValueTree::ValueTree(local_48,(long *)local_58);
  Identifier::~Identifier(local_58);
                    /* try { // try from 001aea50 to 001aea60 has its CatchHandler @ 001aeb42 */
  Identifier::Identifier(local_60,(byte *)"Bypass");
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
      if ((lVar4 != lVar3) && (*(long **)(lVar4 + 0x28) != (long *)0x0)) {
                    /* try { // try from 001aeab8 to 001aeaba has its CatchHandler @ 001aeb22 */
        fVar7 = (float)(**(code **)(**(long **)(lVar4 + 0x28) + 0x10))();
        vVar1 = (var)(DAT_005d9044 <= fVar7);
        goto LAB_001aeac9;
      }
    }
  }
  vVar1 = (var)0x0;
LAB_001aeac9:
  var::var((var *)local_58,vVar1);
                    /* try { // try from 001aead9 to 001aeaec has its CatchHandler @ 001aeb29 */
  ValueTree::setProperty(local_48,(long *)local_60,(long *)local_58,(UndoManager *)0x0);
  var::~var((var *)local_58);
  Identifier::~Identifier(local_60);
                    /* try { // try from 001aeb01 to 001aeb0d has its CatchHandler @ 001aeb27 */
  ValueTree::writeToStream(local_48,param_1);
  ValueTree::~ValueTree(local_48);
  return;
}


