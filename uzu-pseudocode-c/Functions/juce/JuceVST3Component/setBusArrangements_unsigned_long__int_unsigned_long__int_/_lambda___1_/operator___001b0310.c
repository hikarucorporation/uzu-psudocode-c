// Function : operator()
// Namespace: juce:JuceVST3Component:setBusArrangements_unsigned_long__int_unsigned_long__int_:_lambda___1_
// Entry    : 001b0310
// Prototype: {lambda()#1} * operator()({lambda()#1} * this, undefined8 * param_1)
// Body     : 001b0310 - 001b047d


/* juce::JuceVST3Component::setBusArrangements(unsigned long*, int, unsigned long*,
   int)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

_lambda___1_ * __thiscall
juce::JuceVST3Component::setBusArrangements(unsigned_long*,int,unsigned_long*,int)::{lambda()#1}::
operator()(_lambda___1_ *this,undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  void *local_68;
  int local_5c;
  char local_58;
  void *local_50;
  int local_44;
  char local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  {lambda(auto:1,auto:2)#1}::operator()
            (&local_50,*param_1,*(ulong **)param_1[1],*(ulong **)param_1[1] + *(int *)param_1[2]);
                    /* try { // try from 001b0353 to 001b035a has its CatchHandler @ 001b0495 */
  {lambda(auto:1,auto:2)#1}::operator()
            (&local_68,*param_1,*(ulong **)param_1[3],*(ulong **)param_1[3] + *(int *)param_1[4]);
  if ((local_40 == '\0') || (local_58 == '\0')) {
    this[0x20] = (_lambda___1_)0x0;
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
                    /* try { // try from 001b0377 to 001b0392 has its CatchHandler @ 001b047e */
    Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
              ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_38,
               (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_50);
    Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
              ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_28,
               (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_68);
    *(undefined8 *)this = local_38;
    *(undefined4 *)(this + 8) = (undefined4)uStack_30;
    *(undefined4 *)(this + 0xc) = uStack_30._4_4_;
    *(undefined8 *)(this + 0x10) = local_28;
    *(undefined4 *)(this + 0x18) = (undefined4)uStack_20;
    *(undefined4 *)(this + 0x1c) = uStack_20._4_4_;
    this[0x20] = (_lambda___1_)0x1;
  }
  if (local_58 != '\0') {
    local_58 = '\0';
    if (0 < local_5c) {
      lVar2 = 0;
      lVar1 = 0;
      do {
        BigInteger::~BigInteger((BigInteger *)((long)local_68 + lVar2));
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 0x28;
      } while (lVar1 < local_5c);
    }
    local_5c = 0;
    free(local_68);
  }
  if (local_40 != '\0') {
    local_40 = 0;
    if (0 < local_44) {
      lVar2 = 0;
      lVar1 = 0;
      do {
        BigInteger::~BigInteger((BigInteger *)((long)local_50 + lVar2));
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 0x28;
      } while (lVar1 < local_44);
    }
    local_44 = 0;
    free(local_50);
  }
  return this;
}


