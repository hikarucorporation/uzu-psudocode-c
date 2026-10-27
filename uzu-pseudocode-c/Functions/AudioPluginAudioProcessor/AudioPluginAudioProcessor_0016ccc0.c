// Function : AudioPluginAudioProcessor
// Namespace: AudioPluginAudioProcessor
// Entry    : 0016ccc0
// Prototype: undefined AudioPluginAudioProcessor(AudioPluginAudioProcessor * this)
// Body     : 0016ccc0 - 0016d429


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioPluginAudioProcessor::AudioPluginAudioProcessor() */

void __thiscall
AudioPluginAudioProcessor::AudioPluginAudioProcessor(AudioPluginAudioProcessor *this)

{
  undefined8 *puVar1;
  void *__src;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *__dest;
  String *pSVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  AudioProcessorValueTreeState *this_00;
  uint uVar10;
  long lVar11;
  size_t __n;
  String local_148 [8];
  String local_140 [8];
  void *local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  void *local_110;
  int local_104;
  void *local_100;
  int local_f4;
  void *local_f0;
  int local_e4;
  void *local_e0;
  int local_d4;
  AudioProcessorValueTreeState *local_d0;
  byte *local_c8;
  AudioPluginAudioProcessor *local_c0;
  String *local_b8;
  AsyncUpdater *local_b0;
  AudioPluginAudioProcessor *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  AudioChannelSet local_80 [40];
  AudioChannelSet local_58 [40];
  
  local_128 = (void *)0x0;
  uStack_120 = 0;
  local_138 = (void *)0x0;
  uStack_130 = 0;
                    /* try { // try from 0016cce1 to 0016ccf1 has its CatchHandler @ 0016d4d1 */
  juce::String::String(local_140,(byte *)0x5e2d95);
                    /* try { // try from 0016ccf2 to 0016ccfe has its CatchHandler @ 0016d4cc */
  juce::AudioChannelSet::stereo(local_80);
                    /* try { // try from 0016ccff to 0016cd20 has its CatchHandler @ 0016d4a0 */
  juce::AudioProcessor::BusesProperties::withInput
            ((ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> *)&local_110
             ,&local_138,(long *)local_140,(BigInteger *)local_80,1);
                    /* try { // try from 0016cd21 to 0016cd31 has its CatchHandler @ 0016d491 */
  juce::String::String(local_148,(byte *)"Output");
                    /* try { // try from 0016cd32 to 0016cd3e has its CatchHandler @ 0016d482 */
  juce::AudioChannelSet::stereo(local_58);
                    /* try { // try from 0016cd3f to 0016cd60 has its CatchHandler @ 0016d470 */
  juce::AudioProcessor::BusesProperties::withOutput
            ((ArrayBase<juce::AudioProcessor::BusProperties,juce::DummyCriticalSection> *)&local_f0,
             &local_110,(long *)local_148,(BigInteger *)local_58,1);
                    /* try { // try from 0016cd61 to 0016cd6d has its CatchHandler @ 0016d461 */
  juce::AudioProcessor::AudioProcessor((AudioProcessor *)this,&local_f0);
  if (0 < local_d4) {
    lVar8 = 0;
    lVar11 = 0;
    do {
      pSVar5 = (String *)((long)local_e0 + lVar8);
      juce::BigInteger::~BigInteger((BigInteger *)((long)local_e0 + lVar8 + 8));
      juce::String::~String(pSVar5);
      lVar11 = lVar11 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar11 < local_d4);
  }
  local_d4 = 0;
  free(local_e0);
  if (0 < local_e4) {
    lVar8 = 0;
    lVar11 = 0;
    do {
      pSVar5 = (String *)((long)local_f0 + lVar8);
      juce::BigInteger::~BigInteger((BigInteger *)((long)local_f0 + lVar8 + 8));
      juce::String::~String(pSVar5);
      lVar11 = lVar11 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar11 < local_e4);
  }
  local_e4 = 0;
  free(local_f0);
  juce::BigInteger::~BigInteger((BigInteger *)local_58);
  juce::String::~String(local_148);
  if (0 < local_f4) {
    lVar8 = 0;
    lVar11 = 0;
    do {
      pSVar5 = (String *)((long)local_100 + lVar8);
      juce::BigInteger::~BigInteger((BigInteger *)((long)local_100 + lVar8 + 8));
      juce::String::~String(pSVar5);
      lVar11 = lVar11 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar11 < local_f4);
  }
  local_f4 = 0;
  free(local_100);
  if (0 < local_104) {
    lVar8 = 0;
    lVar11 = 0;
    do {
      pSVar5 = (String *)((long)local_110 + lVar8);
      juce::BigInteger::~BigInteger((BigInteger *)((long)local_110 + lVar8 + 8));
      juce::String::~String(pSVar5);
      lVar11 = lVar11 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar11 < local_104);
  }
  local_104 = 0;
  free(local_110);
  juce::BigInteger::~BigInteger((BigInteger *)local_80);
  juce::String::~String(local_140);
  if (0 < uStack_120._4_4_) {
    lVar8 = 0;
    lVar11 = 0;
    do {
      pSVar5 = (String *)((long)local_128 + lVar8);
      juce::BigInteger::~BigInteger((BigInteger *)((long)local_128 + lVar8 + 8));
      juce::String::~String(pSVar5);
      lVar11 = lVar11 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar11 < uStack_120._4_4_);
  }
  uStack_120 = uStack_120 & 0xffffffff;
  free(local_128);
  if (0 < uStack_130._4_4_) {
    lVar8 = 0;
    lVar11 = 0;
    do {
      pSVar5 = (String *)((long)local_138 + lVar8);
      juce::BigInteger::~BigInteger((BigInteger *)((long)local_138 + lVar8 + 8));
      juce::String::~String(pSVar5);
      lVar11 = lVar11 + 1;
      lVar8 = lVar8 + 0x38;
    } while (lVar11 < uStack_130._4_4_);
  }
  uStack_130 = uStack_130 & 0xffffffff;
  free(local_138);
                    /* try { // try from 0016cfa9 to 0016cfb5 has its CatchHandler @ 0016d459 */
  juce::AsyncUpdater::AsyncUpdater((AsyncUpdater *)(this + 0x148));
  *(undefined ***)this = &PTR__AudioPluginAudioProcessor_00701a98;
  *(undefined ***)(this + 0x148) = &PTR__AudioPluginAudioProcessor_00701d08;
                    /* try { // try from 0016cfd0 to 0016cfeb has its CatchHandler @ 0016d451 */
  local_b0 = (AsyncUpdater *)(this + 0x148);
  juce::Identifier::Identifier((Identifier *)local_80,(byte *)"Parameters");
                    /* try { // try from 0016cfec to 0016cff8 has its CatchHandler @ 0016d43c */
  param::createParameterLayout((param *)&local_98);
  this_00 = (AudioProcessorValueTreeState *)(this + 0x158);
                    /* try { // try from 0016d001 to 0016d01d has its CatchHandler @ 0016d42a */
  juce::AudioProcessorValueTreeState::AudioProcessorValueTreeState
            (this_00,this,0,(long *)local_80,(long *)&local_98);
  for (plVar6 = local_98; plVar6 != local_90; plVar6 = plVar6 + 1) {
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 8))();
    }
    *plVar6 = 0;
  }
  if (local_98 != (long *)0x0) {
    operator_delete(local_98);
  }
  juce::Identifier::~Identifier((Identifier *)local_80);
  local_a8 = this + 0x238;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x241) = 0;
  *(undefined8 *)(this + 0x249) = 0;
  *(undefined8 *)(this + 0x260) = 0xffffffffffffffff;
  this[0x268] = (AudioPluginAudioProcessor)0x0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined2 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x288) = 0x200;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(AudioPluginAudioProcessor **)(this + 0x2a0) = this + 0x2b0;
  *(undefined8 *)(this + 0x2a8) = 0;
  this[0x3b0] = (AudioPluginAudioProcessor)0x0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(AudioPluginAudioProcessor **)(this + 0x3c8) = this + 0x3d8;
  *(undefined8 *)(this + 0x3d0) = 0;
  this[0x4d8] = (AudioPluginAudioProcessor)0x0;
  *(undefined8 *)(this + 0x4e0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  *(undefined8 *)(this + 0x520) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x543) = 0;
  *(undefined8 *)(this + 0x54b) = 0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined8 *)(this + 0x540) = 0;
  *(undefined8 *)(this + 0x528) = 0;
  *(undefined8 *)(this + 0x530) = 0;
  uVar10 = 0;
  memset(this + 0x554,0,0x214);
  *(AudioPluginAudioProcessor **)(this + 0x768) = this + 0x778;
  *(undefined8 *)(this + 0x770) = 0;
  this[0x878] = (AudioPluginAudioProcessor)0x0;
  *(undefined4 *)(this + 0x880) = 0;
  local_b8 = (String *)(this + 0x888);
  juce::String::String(local_b8);
  local_c0 = this + 0x890;
  *(undefined8 *)(this + 0x890) = 0;
  *(undefined8 *)(this + 0x898) = 0;
  *(undefined8 *)(this + 0x8a0) = 0;
  uVar2 = _UNK_005d9478;
  uVar3 = _DAT_005d9470;
  *(undefined8 *)(this + 0x528) = _DAT_005d9470;
  *(undefined8 *)(this + 0x530) = uVar2;
  *(undefined8 *)(this + 0x538) = uVar3;
  *(undefined8 *)(this + 0x540) = uVar2;
  *(undefined8 *)(this + 0x548) = 0x7fc000007fc00000;
  local_d0 = this_00;
  do {
                    /* try { // try from 0016d292 to 0016d29c has its CatchHandler @ 0016d4fa */
    param::toID((param *)local_80,uVar10);
    juce::StringRef::StringRef((StringRef *)&local_c8,(undefined8 *)local_80);
    uVar3 = juce::AudioProcessorValueTreeState::getParameter(this_00,local_c8);
    puVar1 = *(undefined8 **)(this + 0x240);
    if (puVar1 == *(undefined8 **)(this + 0x248)) {
      __src = *(void **)local_a8;
      __n = (long)puVar1 - (long)__src;
      if (__n == 0x7ffffffffffffff8) {
                    /* try { // try from 0016d41e to 0016d429 has its CatchHandler @ 0016d4e8 */
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar9 = (long)__n >> 3;
      uVar4 = uVar9;
      if (__n == 0) {
        uVar4 = 1;
      }
      uVar7 = uVar4 + uVar9;
      if (0xfffffffffffffff < uVar7) {
        uVar7 = 0xfffffffffffffff;
      }
      if (CARRY8(uVar4,uVar9)) {
        uVar7 = 0xfffffffffffffff;
      }
      if (uVar7 == 0) {
        __dest = (void *)0x0;
        *(undefined8 *)(uVar9 * 8) = uVar3;
      }
      else {
        local_a0 = uVar3;
                    /* try { // try from 0016d33c to 0016d340 has its CatchHandler @ 0016d4e6 */
        __dest = operator_new(uVar7 * 8);
        *(undefined8 *)((long)__dest + uVar9 * 8) = local_a0;
      }
      if (0 < (long)__n) {
        memmove(__dest,__src,__n);
      }
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
      *(void **)(this + 0x238) = __dest;
      *(ulong *)(this + 0x240) = (long)__dest + uVar9 * 8 + 8;
      *(void **)(this + 0x248) = (void *)(uVar7 * 8 + (long)__dest);
      this_00 = local_d0;
    }
    else {
      *puVar1 = uVar3;
      *(long *)(this + 0x240) = *(long *)(this + 0x240) + 8;
    }
    juce::String::~String((String *)local_80);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 10);
  this[0x279] = (AudioPluginAudioProcessor)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  return;
}


