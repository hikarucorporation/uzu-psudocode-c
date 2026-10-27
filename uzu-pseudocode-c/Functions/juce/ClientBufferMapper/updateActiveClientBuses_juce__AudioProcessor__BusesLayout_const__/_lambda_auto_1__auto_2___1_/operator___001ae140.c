// Function : operator()
// Namespace: juce:ClientBufferMapper:updateActiveClientBuses_juce__AudioProcessor__BusesLayout_const__:_lambda_auto_1__auto_2___1_
// Entry    : 001ae140
// Prototype: auto operator()(undefined8 param_1_00, long * param_2, long * param_3)
// Body     : 001ae140 - 001ae242


/* auto juce::ClientBufferMapper::updateActiveClientBuses(juce::AudioProcessor::BusesLayout
   const&)::{lambda(auto:1&,
   auto:2&)#1}::TEMPNAMEPLACEHOLDERVALUE(std::vector<juce::DynamicChannelMapping,
   std::allocator<juce::DynamicChannelMapping> >&, juce::Array<juce::AudioChannelSet,
   juce::DummyCriticalSection, 0> const&) const */

void __thiscall
juce::ClientBufferMapper::updateActiveClientBuses(juce::AudioProcessor::BusesLayout_const&)::
{lambda(auto:1&,auto:2&)#1}::operator()(undefined8 param_1_00,long *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  AudioChannelSet local_58 [40];
  
  lVar4 = *param_2;
  if (param_2[1] != lVar4) {
    lVar2 = 0x40;
    lVar3 = 0;
    uVar5 = 0;
    do {
      if ((uint)uVar5 < *(uint *)((long)param_3 + 0xc)) {
                    /* try { // try from 001ae188 to 001ae1bf has its CatchHandler @ 001ae258 */
        BigInteger::BigInteger((BigInteger *)&local_88,(long *)((lVar3 >> 0x20) * 0x28 + *param_3));
      }
      else {
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_68 = 0;
        BigInteger::BigInteger((BigInteger *)&local_88);
      }
                    /* try { // try from 001ae1c5 to 001ae1cc has its CatchHandler @ 001ae243 */
      AudioChannelSet::disabled(local_58);
      bVar1 = AudioChannelSet::operator!=((AudioChannelSet *)&local_88,(long *)local_58);
      *(bool *)(lVar4 + lVar2) = bVar1;
      BigInteger::~BigInteger((BigInteger *)local_58);
      BigInteger::~BigInteger((BigInteger *)&local_88);
      uVar5 = uVar5 + 1;
      lVar4 = *param_2;
      lVar2 = lVar2 + 0x50;
      lVar3 = lVar3 + 0x100000000;
    } while (uVar5 < (ulong)((param_2[1] - lVar4 >> 4) * -0x3333333333333333));
  }
  return;
}


