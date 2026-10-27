// Function : makeChannelIndices
// Namespace: juce:ChannelMapping
// Entry    : 001ad7f0
// Prototype: ChannelMapping * makeChannelIndices(ChannelMapping * this, AudioChannelSet * param_1)
// Body     : 001ad7f0 - 001ad9c0


/* juce::ChannelMapping::makeChannelIndices(juce::AudioChannelSet const&) */

ChannelMapping * __thiscall
juce::ChannelMapping::makeChannelIndices(ChannelMapping *this,AudioChannelSet *param_1)

{
  int iVar1;
  ulong uVar2;
  void *__dest;
  int *piVar3;
  size_t __n;
  void *pvVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  void *local_78;
  void *local_70;
  int local_64;
  void *local_60;
  AudioChannelSet *local_58;
  ChannelMapping *local_50;
  ulong local_48;
  long local_40;
  AudioChannelSet *local_38;
  
  local_38 = param_1;
  makeChannelIndices(juce::AudioChannelSet_const&)::{lambda()#1}::operator()
            ((_lambda___1_ *)&local_70,&local_38);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if ((long)local_64 != 0) {
    local_40 = (long)local_64 << 2;
    lVar7 = 0;
    local_78 = (void *)0x0;
    piVar3 = (int *)0x0;
    piVar6 = (int *)0x0;
    local_60 = local_70;
    pvVar4 = local_70;
    local_58 = param_1;
    local_50 = this;
    do {
      while (iVar1 = AudioChannelSet::getChannelIndexForType
                               (param_1,*(uint *)((long)pvVar4 + lVar7)), piVar6 == piVar3) {
        __n = (long)piVar3 - (long)local_78;
        if (__n == 0x7ffffffffffffffc) {
                    /* try { // try from 001ad9b5 to 001ad9c0 has its CatchHandler @ 001ad9c3 */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar5 = (long)__n >> 2;
        uVar2 = 1;
        if (__n != 0) {
          uVar2 = uVar5;
        }
        local_48 = 0x1fffffffffffffff;
        if (uVar2 + uVar5 < 0x2000000000000000) {
          local_48 = uVar2 + uVar5;
        }
        if (CARRY8(uVar2,uVar5)) {
          local_48 = 0x1fffffffffffffff;
        }
        if (local_48 == 0) {
          __dest = (void *)0x0;
          *(int *)(uVar5 * 4) = iVar1;
        }
        else {
                    /* try { // try from 001ad905 to 001ad909 has its CatchHandler @ 001ad9c1 */
          __dest = operator_new(local_48 * 4);
          *(int *)((long)__dest + uVar5 * 4) = iVar1;
        }
        if (0 < (long)__n) {
          memmove(__dest,local_78,__n);
        }
        piVar6 = (int *)((long)__dest + uVar5 * 4 + 4);
        if (local_78 != (void *)0x0) {
          operator_delete(local_78);
        }
        *(void **)local_50 = __dest;
        *(int **)(local_50 + 8) = piVar6;
        piVar3 = (int *)((long)__dest + local_48 * 4);
        *(int **)(local_50 + 0x10) = piVar3;
        lVar7 = lVar7 + 4;
        this = local_50;
        param_1 = local_58;
        pvVar4 = local_60;
        local_78 = __dest;
        if (local_40 == lVar7) goto LAB_001ad993;
      }
      *piVar6 = iVar1;
      piVar6 = piVar6 + 1;
      *(int **)(this + 8) = piVar6;
      lVar7 = lVar7 + 4;
    } while (local_40 != lVar7);
  }
LAB_001ad993:
  local_64 = 0;
  free(local_70);
  return this;
}


