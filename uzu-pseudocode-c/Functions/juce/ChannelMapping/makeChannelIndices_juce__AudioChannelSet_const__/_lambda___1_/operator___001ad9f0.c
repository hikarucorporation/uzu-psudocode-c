// Function : operator()
// Namespace: juce:ChannelMapping:makeChannelIndices_juce__AudioChannelSet_const__:_lambda___1_
// Entry    : 001ad9f0
// Prototype: {lambda()#1} * operator()({lambda()#1} * this, undefined8 * param_1)
// Body     : 001ad9f0 - 001adb75


/* juce::ChannelMapping::makeChannelIndices(juce::AudioChannelSet
   const&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

_lambda___1_ * __thiscall
juce::ChannelMapping::makeChannelIndices(juce::AudioChannelSet_const&)::{lambda()#1}::operator()
          (_lambda___1_ *this,undefined8 *param_1)

{
  bool bVar1;
  void *pvVar2;
  void *__dest;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  void *local_70;
  uint local_64;
  void *local_60;
  uint local_54;
  char local_50;
  AudioChannelSet local_48 [40];
  
  AudioChannelSet::getChannelTypes(&local_70,(long *)*param_1);
  auVar5 = getVst3SpeakerArrangement((AudioChannelSet *)*param_1);
  if (auVar5[8] == '\0') {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    if (0 < (int)local_64) {
      uVar3 = local_64 + (local_64 >> 1) + 8 & 0xfffffff8;
      if ((int)uVar3 < 1) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = malloc((ulong)uVar3 << 2);
        *(void **)this = pvVar2;
      }
      *(uint *)(this + 8) = uVar3;
      memcpy(pvVar2,local_70,(ulong)local_64 * 4);
    }
    *(uint *)(this + 0xc) = local_64;
    goto LAB_001adb57;
  }
                    /* try { // try from 001ada1a to 001ada26 has its CatchHandler @ 001adb99 */
  getSpeakerOrder((juce *)&local_60,auVar5._0_8_);
  if (local_50 == '\0') {
LAB_001ada5b:
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    uVar4 = (ulong)local_64;
    if (0 < (int)local_64) {
      pvVar2 = local_70;
LAB_001adad6:
      uVar3 = (int)uVar4 + (int)(uVar4 >> 1) + 8U & 0xfffffff8;
      if ((int)uVar3 < 1) {
        __dest = (void *)0x0;
      }
      else {
        __dest = malloc((ulong)uVar3 << 2);
        *(void **)this = __dest;
      }
      *(uint *)(this + 8) = uVar3;
      memcpy(__dest,pvVar2,uVar4 * 4);
    }
  }
  else {
                    /* try { // try from 001ada2e to 001ada3c has its CatchHandler @ 001adb76 */
    AudioChannelSet::channelSetWithChannels(local_48,(long *)&local_60);
    bVar1 = AudioChannelSet::operator!=(local_48,(long *)*param_1);
    BigInteger::~BigInteger((BigInteger *)local_48);
    if (bVar1) goto LAB_001ada5b;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    uVar4 = (ulong)local_54;
    if (0 < (int)local_54) {
      pvVar2 = local_60;
      goto LAB_001adad6;
    }
  }
  *(int *)(this + 0xc) = (int)uVar4;
  if (local_50 != '\0') {
    local_50 = '\0';
    local_54 = 0;
    free(local_60);
  }
LAB_001adb57:
  local_64 = 0;
  free(local_70);
  return this;
}


