// Function : _M_realloc_insert<juce::AudioProcessor::Bus_const&>
// Namespace: std:vector_juce__DynamicChannelMapping_std__allocator_juce__DynamicChannelMapping__
// Entry    : 001ad580
// Prototype: void _M_realloc_insert<juce::AudioProcessor::Bus_const&>(vector<juce::DynamicChannelMapping,std::allocator<juce::DynamicChannelMapping>> * this, BigInteger * param_1, long param_2)
// Body     : 001ad580 - 001ad78c


/* void std::vector<juce::DynamicChannelMapping, std::allocator<juce::DynamicChannelMapping>
   >::_M_realloc_insert<juce::AudioProcessor::Bus
   const&>(__gnu_cxx::__normal_iterator<juce::DynamicChannelMapping*,
   std::vector<juce::DynamicChannelMapping, std::allocator<juce::DynamicChannelMapping> > >,
   juce::AudioProcessor::Bus const&) */

void __thiscall
std::vector<juce::DynamicChannelMapping,std::allocator<juce::DynamicChannelMapping>>::
_M_realloc_insert<juce::AudioProcessor::Bus_const&>
          (vector<juce::DynamicChannelMapping,std::allocator<juce::DynamicChannelMapping>> *this,
          BigInteger *param_1,long param_2)

{
  BigInteger *pBVar1;
  BigInteger *pBVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  BigInteger *pBVar7;
  ulong uVar8;
  BigInteger *this_00;
  ulong uVar9;
  BigInteger *this_01;
  
  pBVar1 = *(BigInteger **)this;
  pBVar2 = *(BigInteger **)(this + 8);
  lVar5 = (long)pBVar2 - (long)pBVar1;
  if (lVar5 == 0x7fffffffffffffd0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar8 = (lVar5 >> 4) * -0x3333333333333333;
  uVar9 = 1;
  if (lVar5 != 0) {
    uVar9 = uVar8;
  }
  uVar6 = uVar8 + uVar9;
  if (0x199999999999999 < uVar6) {
    uVar6 = 0x199999999999999;
  }
  if (CARRY8(uVar9,uVar8)) {
    uVar6 = 0x199999999999999;
  }
  if (uVar6 == 0) {
    pBVar7 = (BigInteger *)0x0;
  }
  else {
    pBVar7 = operator_new(uVar6 * 0x50);
  }
  lVar5 = ((long)param_1 - (long)pBVar1 >> 4) * 0x10;
  iVar4 = juce::AudioChannelSet::size((AudioChannelSet *)(param_2 + 0x10));
                    /* try { // try from 001ad647 to 001ad656 has its CatchHandler @ 001ad79f */
  juce::BigInteger::BigInteger(pBVar7 + lVar5,(long *)(param_2 + 0x60));
                    /* try { // try from 001ad65f to 001ad666 has its CatchHandler @ 001ad78d */
  juce::ChannelMapping::makeChannelIndices
            ((ChannelMapping *)(pBVar7 + lVar5 + 0x28),(AudioChannelSet *)(param_2 + 0x60));
  pBVar7[lVar5 + 0x40] = (BigInteger)(iVar4 != 0);
  pBVar7[lVar5 + 0x48] = (BigInteger)0x0;
  this_00 = pBVar7;
  if (pBVar1 != param_1) {
    this_01 = pBVar1;
    do {
      juce::BigInteger::BigInteger(this_00,(undefined8 *)this_01);
      uVar3 = *(undefined8 *)(this_01 + 0x30);
      *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(this_01 + 0x28);
      *(undefined8 *)(this_00 + 0x30) = uVar3;
      *(undefined8 *)(this_00 + 0x38) = *(undefined8 *)(this_01 + 0x38);
      *(undefined8 *)(this_01 + 0x28) = 0;
      *(undefined8 *)(this_01 + 0x30) = 0;
      *(undefined8 *)(this_01 + 0x38) = 0;
      this_00[0x40] = this_01[0x40];
      this_00[0x48] = this_01[0x48];
      juce::BigInteger::~BigInteger(this_01);
      this_00 = this_00 + 0x50;
      this_01 = this_01 + 0x50;
    } while (this_01 != param_1);
  }
  for (; this_00 = this_00 + 0x50, pBVar2 != param_1; param_1 = param_1 + 0x50) {
    juce::BigInteger::BigInteger(this_00,(undefined8 *)param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this_00 + 0x30) = uVar3;
    *(undefined8 *)(this_00 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    this_00[0x40] = param_1[0x40];
    this_00[0x48] = param_1[0x48];
    juce::BigInteger::~BigInteger(param_1);
  }
  if (pBVar1 != (BigInteger *)0x0) {
    operator_delete(pBVar1);
  }
  *(BigInteger **)this = pBVar7;
  *(BigInteger **)(this + 8) = this_00;
  *(BigInteger **)(this + 0x10) = pBVar7 + uVar6 * 0x50;
  return;
}


