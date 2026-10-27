// Function : isBusesLayoutSupported
// Namespace: AudioPluginAudioProcessor
// Entry    : 001705f0
// Prototype: bool isBusesLayoutSupported(undefined8 param_1_00, undefined8 * param_2)
// Body     : 001705f0 - 001707de


/* AudioPluginAudioProcessor::isBusesLayoutSupported(juce::AudioProcessor::BusesLayout const&) const
    */

bool __thiscall
AudioPluginAudioProcessor::isBusesLayoutSupported(undefined8 param_1_00,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  AudioChannelSet local_c0 [40];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  AudioChannelSet local_38 [40];
  
  if (*(int *)((long)param_2 + 0xc) == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 0;
    juce::BigInteger::BigInteger((BigInteger *)&local_68);
  }
  else {
                    /* try { // try from 00170606 to 00170634 has its CatchHandler @ 0017081d */
    juce::BigInteger::BigInteger((BigInteger *)&local_68,(long *)*param_2);
  }
  if (*(int *)((long)param_2 + 0x1c) == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_78 = 0;
    juce::BigInteger::BigInteger((BigInteger *)&local_98);
  }
  else {
                    /* try { // try from 0017063f to 0017066a has its CatchHandler @ 00170815 */
    juce::BigInteger::BigInteger((BigInteger *)&local_98,(long *)param_2[2]);
  }
                    /* try { // try from 0017066b to 00170674 has its CatchHandler @ 001707f6 */
  juce::AudioChannelSet::disabled(local_c0);
  bVar1 = juce::AudioChannelSet::operator==((AudioChannelSet *)&local_68,(long *)local_c0);
  if (bVar1) {
    juce::BigInteger::~BigInteger((BigInteger *)local_c0);
  }
  else {
                    /* try { // try from 00170694 to 001706a0 has its CatchHandler @ 001707e7 */
    juce::AudioChannelSet::disabled(local_38);
    bVar1 = juce::AudioChannelSet::operator==((AudioChannelSet *)&local_98,(long *)local_38);
    juce::BigInteger::~BigInteger((BigInteger *)local_38);
    juce::BigInteger::~BigInteger((BigInteger *)local_c0);
    if (!bVar1) {
                    /* try { // try from 001706f1 to 001706fa has its CatchHandler @ 001707e5 */
      juce::AudioChannelSet::mono(local_c0);
      bVar1 = juce::AudioChannelSet::operator==((AudioChannelSet *)&local_68,(long *)local_c0);
      if (bVar1) {
        juce::BigInteger::~BigInteger((BigInteger *)local_c0);
      }
      else {
                    /* try { // try from 0017071a to 00170726 has its CatchHandler @ 001707e1 */
        juce::AudioChannelSet::stereo(local_38);
        bVar1 = juce::AudioChannelSet::operator==((AudioChannelSet *)&local_68,(long *)local_38);
        juce::BigInteger::~BigInteger((BigInteger *)local_38);
        juce::BigInteger::~BigInteger((BigInteger *)local_c0);
        if (!bVar1) goto LAB_001706ce;
      }
                    /* try { // try from 00170758 to 00170761 has its CatchHandler @ 001707e3 */
      juce::AudioChannelSet::mono(local_c0);
      bVar1 = juce::AudioChannelSet::operator==((AudioChannelSet *)&local_98,(long *)local_c0);
      if (bVar1) {
        juce::BigInteger::~BigInteger((BigInteger *)local_c0);
      }
      else {
                    /* try { // try from 00170781 to 0017078d has its CatchHandler @ 001707df */
        juce::AudioChannelSet::stereo(local_38);
        bVar1 = juce::AudioChannelSet::operator==((AudioChannelSet *)&local_98,(long *)local_38);
        juce::BigInteger::~BigInteger((BigInteger *)local_38);
        juce::BigInteger::~BigInteger((BigInteger *)local_c0);
        if (!bVar1) goto LAB_001706ce;
      }
      iVar2 = juce::AudioChannelSet::size((AudioChannelSet *)&local_68);
      iVar3 = juce::AudioChannelSet::size((AudioChannelSet *)&local_98);
      bVar1 = iVar2 == iVar3;
      goto LAB_001706d0;
    }
  }
LAB_001706ce:
  bVar1 = false;
LAB_001706d0:
  juce::BigInteger::~BigInteger((BigInteger *)&local_98);
  juce::BigInteger::~BigInteger((BigInteger *)&local_68);
  return bVar1;
}


