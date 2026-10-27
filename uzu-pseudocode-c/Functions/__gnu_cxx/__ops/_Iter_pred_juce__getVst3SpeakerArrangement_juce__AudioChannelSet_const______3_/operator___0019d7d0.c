// Function : operator()
// Namespace: __gnu_cxx:__ops:_Iter_pred_juce__getVst3SpeakerArrangement_juce__AudioChannelSet_const______3_
// Entry    : 0019d7d0
// Prototype: ulong operator()(_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3> * this, long param_1)
// Body     : 0019d7d0 - 0019d9ac


/* bool __gnu_cxx::__ops::_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet
   const&)::$_3>::TEMPNAMEPLACEHOLDERVALUE(juce::detail::LayoutPair const*) */

ulong __thiscall
__gnu_cxx::__ops::_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::$_3>::
operator()(_Iter_pred<juce::getVst3SpeakerArrangement(juce::AudioChannelSet_const&)::__3> *this,
          long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined7 extraout_var;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *local_58;
  undefined8 uStack_50;
  AudioChannelSet local_48 [40];
  
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((int)uVar3 < 1) {
    if (uVar3 == 0) goto LAB_0019d886;
  }
  else {
    uVar11 = (int)uVar3 + ((uint)(uVar3 >> 1) & 0x7fffffff) + 8 & 0xfffffff8;
    if (0 < (int)uVar11) {
      local_58 = malloc((ulong)uVar11 << 2);
    }
    uStack_50 = (ulong)uVar11;
  }
  puVar4 = *(undefined4 **)(param_1 + 8);
  uVar16 = uVar3 - 1 & 0x3fffffffffffffff;
  if ((uVar16 < 7) ||
     ((local_58 < puVar4 + uVar3 + 0x4000000000000000 &&
      (puVar4 < local_58 + uVar3 + 0x4000000000000000)))) {
    uVar9 = 0;
    puVar13 = puVar4;
LAB_0019d862:
    do {
      local_58[uVar9] = *puVar13;
      uVar9 = uVar9 + 1;
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar4 + uVar3);
  }
  else {
    uVar16 = uVar16 + 1;
    uVar9 = uVar16 & 0xfffffffffffffff8;
    uVar15 = (uVar9 - 8 >> 3) + 1;
    uVar10 = (ulong)((uint)uVar15 & 3);
    if (uVar9 - 8 < 0x18) {
      lVar14 = 0;
    }
    else {
      uVar15 = uVar15 & 0x3ffffffffffffffc;
      lVar14 = 0;
      do {
        uVar5 = *(undefined8 *)((long)(puVar4 + lVar14) + 8);
        uVar6 = *(undefined8 *)(puVar4 + lVar14 + 4);
        uVar7 = *(undefined8 *)((long)(puVar4 + lVar14 + 4) + 8);
        *(undefined8 *)(local_58 + lVar14) = *(undefined8 *)(puVar4 + lVar14);
        *(undefined8 *)((long)(local_58 + lVar14) + 8) = uVar5;
        *(undefined8 *)(local_58 + lVar14 + 4) = uVar6;
        *(undefined8 *)((long)(local_58 + lVar14 + 4) + 8) = uVar7;
        uVar5 = *(undefined8 *)((long)(puVar4 + lVar14 + 8) + 8);
        uVar6 = *(undefined8 *)(puVar4 + lVar14 + 0xc);
        uVar7 = *(undefined8 *)((long)(puVar4 + lVar14 + 0xc) + 8);
        *(undefined8 *)(local_58 + lVar14 + 8) = *(undefined8 *)(puVar4 + lVar14 + 8);
        *(undefined8 *)((long)(local_58 + lVar14 + 8) + 8) = uVar5;
        *(undefined8 *)(local_58 + lVar14 + 0xc) = uVar6;
        *(undefined8 *)((long)(local_58 + lVar14 + 0xc) + 8) = uVar7;
        uVar5 = *(undefined8 *)((long)(puVar4 + lVar14 + 0x10) + 8);
        uVar6 = *(undefined8 *)(puVar4 + lVar14 + 0x14);
        uVar7 = *(undefined8 *)((long)(puVar4 + lVar14 + 0x14) + 8);
        *(undefined8 *)(local_58 + lVar14 + 0x10) = *(undefined8 *)(puVar4 + lVar14 + 0x10);
        *(undefined8 *)((long)(local_58 + lVar14 + 0x10) + 8) = uVar5;
        *(undefined8 *)(local_58 + lVar14 + 0x14) = uVar6;
        *(undefined8 *)((long)(local_58 + lVar14 + 0x14) + 8) = uVar7;
        uVar5 = *(undefined8 *)((long)(puVar4 + lVar14 + 0x18) + 8);
        uVar6 = *(undefined8 *)(puVar4 + lVar14 + 0x1c);
        uVar7 = *(undefined8 *)((long)(puVar4 + lVar14 + 0x1c) + 8);
        *(undefined8 *)(local_58 + lVar14 + 0x18) = *(undefined8 *)(puVar4 + lVar14 + 0x18);
        *(undefined8 *)((long)(local_58 + lVar14 + 0x18) + 8) = uVar5;
        *(undefined8 *)(local_58 + lVar14 + 0x1c) = uVar6;
        *(undefined8 *)((long)(local_58 + lVar14 + 0x1c) + 8) = uVar7;
        lVar14 = lVar14 + 0x20;
        uVar15 = uVar15 - 4;
      } while (uVar15 != 0);
    }
    if (uVar10 != 0) {
      lVar12 = 0;
      do {
        puVar2 = (undefined8 *)((long)puVar4 + lVar12 + lVar14 * 4);
        uVar5 = puVar2[1];
        puVar1 = (undefined8 *)((long)puVar4 + lVar12 + lVar14 * 4 + 0x10);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        puVar1 = (undefined8 *)((long)local_58 + lVar12 + lVar14 * 4);
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)((long)local_58 + lVar12 + lVar14 * 4 + 0x10);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        lVar12 = lVar12 + 0x20;
      } while (uVar10 * 0x20 != lVar12);
    }
    if (uVar16 != uVar9) {
      puVar13 = puVar4 + uVar9;
      goto LAB_0019d862;
    }
  }
  uStack_50 = CONCAT44((int)uVar9,(undefined4)uStack_50);
LAB_0019d886:
                    /* try { // try from 0019d886 to 0019d892 has its CatchHandler @ 0019d9ad */
  juce::AudioChannelSet::channelSetWithChannels(local_48,(long *)&local_58);
  bVar8 = juce::AudioChannelSet::operator==(local_48,*(long **)this);
  juce::BigInteger::~BigInteger((BigInteger *)local_48);
  uStack_50 = uStack_50 & 0xffffffff;
  free(local_58);
  return CONCAT71(extraout_var,bVar8) & 0xffffffff;
}


