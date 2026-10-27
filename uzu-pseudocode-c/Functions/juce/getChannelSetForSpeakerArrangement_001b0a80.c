// Function : getChannelSetForSpeakerArrangement
// Namespace: juce
// Entry    : 001b0a80
// Prototype: juce * getChannelSetForSpeakerArrangement(juce * this, ulong param_1)
// Body     : 001b0a80 - 001b0b3a


/* juce::getChannelSetForSpeakerArrangement(unsigned long) */

juce * __thiscall juce::getChannelSetForSpeakerArrangement(juce *this,ulong param_1)

{
  undefined8 *puVar1;
  void *local_50;
  undefined4 local_44;
  char local_40;
  AudioChannelSet local_38 [40];
  
  if (Ambisonics::mappings == param_1) {
    puVar1 = &Ambisonics::mappings;
  }
  else if (DAT_0071b6c0 == param_1) {
    puVar1 = &DAT_0071b6c0;
  }
  else {
    if (DAT_0071b6f0 != param_1) {
                    /* try { // try from 001b0ad9 to 001b0ae2 has its CatchHandler @ 001b0b64 */
      getSpeakerOrder((juce *)&local_50,param_1);
      if (local_40 == '\0') {
        this[0x28] = (juce)0x0;
        return this;
      }
                    /* try { // try from 001b0aea to 001b0af8 has its CatchHandler @ 001b0b3b */
      AudioChannelSet::channelSetWithChannels(local_38,(long *)&local_50);
      BigInteger::BigInteger((BigInteger *)this,(undefined8 *)local_38);
      this[0x28] = (juce)0x1;
      BigInteger::~BigInteger((BigInteger *)local_38);
      if (local_40 == '\0') {
        return this;
      }
      local_40 = 0;
      local_44 = 0;
      free(local_50);
      return this;
    }
    puVar1 = &DAT_0071b6f0;
  }
                    /* try { // try from 001b0ac2 to 001b0ac9 has its CatchHandler @ 001b0b66 */
  BigInteger::BigInteger((BigInteger *)this,puVar1 + 1);
  this[0x28] = (juce)0x1;
  return this;
}


