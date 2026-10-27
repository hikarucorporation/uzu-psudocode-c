// Function : setBusesLayout
// Namespace: juce:AudioProcessor
// Entry    : 004cb300
// Prototype: ulong setBusesLayout(AudioProcessor * this, undefined8 * param_1)
// Body     : 004cb300 - 004cb4c3


/* juce::AudioProcessor::setBusesLayout(juce::AudioProcessor::BusesLayout const&) */

ulong __thiscall juce::AudioProcessor::setBusesLayout(AudioProcessor *this,undefined8 *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_R13;
  ulong uVar6;
  long *local_50;
  int local_44;
  long *local_40;
  int local_34;
  
  getBusesLayout((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)&local_50,(long)this
                );
  bVar1 = ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::operator==
                    ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)*param_1,
                     *(int *)((long)param_1 + 0xc),local_50,local_44);
  if (bVar1) {
    bVar1 = ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::operator==
                      ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)param_1[2],
                       *(int *)((long)param_1 + 0x1c),local_40,local_34);
  }
  else {
    bVar1 = false;
  }
  if (0 < local_34) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      free(*(void **)((long)local_40 + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar4 < local_34);
  }
  local_34 = 0;
  free(local_40);
  if (0 < local_44) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      free(*(void **)((long)local_50 + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar4 < local_44);
  }
  local_44 = 0;
  free(local_50);
  uVar6 = CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
  if (bVar1 == false) {
    BusesLayout::BusesLayout((BusesLayout *)&local_50,param_1);
                    /* try { // try from 004cb401 to 004cb421 has its CatchHandler @ 004cb4c4 */
    cVar2 = (**(code **)(*(long *)this + 0x198))(this,(BusesLayout *)&local_50);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar3 = (**(code **)(*(long *)this + 0x1a0))(this,&local_50);
      uVar6 = (ulong)uVar3;
    }
    if (0 < local_34) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        free(*(void **)((long)local_40 + lVar4));
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while (lVar5 < local_34);
    }
    local_34 = 0;
    free(local_40);
    if (0 < local_44) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        free(*(void **)((long)local_50 + lVar4));
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while (lVar5 < local_44);
    }
    local_44 = 0;
    free(local_50);
  }
  return uVar6 & 0xffffffff;
}


