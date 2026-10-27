// Function : operator!=
// Namespace: juce:AudioChannelSet
// Entry    : 004d16b0
// Prototype: bool operator!=(AudioChannelSet * this, long * param_1)
// Body     : 004d16b0 - 004d16bc


/* juce::AudioChannelSet::TEMPNAMEPLACEHOLDERVALUE(juce::AudioChannelSet const&) const */

bool __thiscall juce::AudioChannelSet::operator!=(AudioChannelSet *this,long *param_1)

{
  int iVar1;
  
  iVar1 = BigInteger::compare((BigInteger *)this,param_1);
  return iVar1 != 0;
}


