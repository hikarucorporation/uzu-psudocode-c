// Function : operator()
// Namespace: juce:JuceVST3Component:setBusArrangements_unsigned_long__int_unsigned_long__int_:_lambda___2_
// Entry    : 001b04b0
// Prototype: {lambda()#2} * operator()({lambda()#2} * this, long * param_1)
// Body     : 001b04b0 - 001b061e


/* juce::JuceVST3Component::setBusArrangements(unsigned long*, int, unsigned long*,
   int)::{lambda()#2}::TEMPNAMEPLACEHOLDERVALUE() const */

_lambda___2_ * __thiscall
juce::JuceVST3Component::setBusArrangements(unsigned_long*,int,unsigned_long*,int)::{lambda()#2}::
operator()(_lambda___2_ *this,long *param_1)

{
  long lVar1;
  Bus *pBVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = *param_1;
  AudioProcessor::getBusesLayout
            ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)this,
             *(long *)(lVar1 + 0x68));
  uVar5 = *(uint *)(param_1 + 1);
  if ((int)*(uint *)(param_1 + 1) < (int)*(uint *)((long)param_1 + 0xc)) {
    uVar5 = *(uint *)((long)param_1 + 0xc);
  }
  if (0 < (int)uVar5) {
    lVar7 = (ulong)uVar5 * 0x28;
    uVar4 = (ulong)uVar5;
    do {
      uVar8 = uVar4 - 1;
      lVar7 = lVar7 + -0x28;
      lVar6 = *(long *)(lVar1 + 0x68);
      if ((uVar8 < *(uint *)(lVar6 + 0xcc)) &&
         (pBVar2 = *(Bus **)(*(long *)(lVar6 + 0xc0) + uVar8 * 8), pBVar2 != (Bus *)0x0)) {
        if (uVar8 < *(uint *)(param_1[2] + 0xc)) {
                    /* try { // try from 001b0571 to 001b0598 has its CatchHandler @ 001b061f */
          BigInteger::BigInteger((BigInteger *)&local_58,(long *)(*(long *)param_1[2] + lVar7));
        }
        else {
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_38 = 0;
          BigInteger::BigInteger((BigInteger *)&local_58);
        }
                    /* try { // try from 001b0599 to 001b05a8 has its CatchHandler @ 001b0627 */
        AudioProcessor::Bus::isLayoutSupported
                  (pBVar2,(BigInteger *)&local_58,
                   (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)this);
        BigInteger::~BigInteger((BigInteger *)&local_58);
        lVar6 = *(long *)(lVar1 + 0x68);
      }
      if ((uVar8 < *(uint *)(lVar6 + 0xdc)) &&
         (pBVar2 = *(Bus **)(*(long *)(lVar6 + 0xd0) + uVar8 * 8), pBVar2 != (Bus *)0x0)) {
        if (uVar8 < *(uint *)(param_1[2] + 0x1c)) {
                    /* try { // try from 001b0507 to 001b050e has its CatchHandler @ 001b061f */
          BigInteger::BigInteger
                    ((BigInteger *)&local_58,(long *)(*(long *)(param_1[2] + 0x10) + lVar7));
        }
        else {
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_38 = 0;
                    /* try { // try from 001b05fe to 001b0605 has its CatchHandler @ 001b061f */
          BigInteger::BigInteger((BigInteger *)&local_58);
        }
                    /* try { // try from 001b050f to 001b051e has its CatchHandler @ 001b0627 */
        AudioProcessor::Bus::isLayoutSupported
                  (pBVar2,(BigInteger *)&local_58,
                   (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)this);
        BigInteger::~BigInteger((BigInteger *)&local_58);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar8;
    } while (bVar3);
  }
  return this;
}


