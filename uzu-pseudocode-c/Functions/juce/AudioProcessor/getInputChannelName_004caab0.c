// Function : getInputChannelName
// Namespace: juce:AudioProcessor
// Entry    : 004caab0
// Prototype: AudioChannelSet * getInputChannelName(AudioChannelSet * param_1, long param_2, int param_3)
// Body     : 004caab0 - 004cab6e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::getInputChannelName(int) const */

AudioChannelSet * __cdecl
juce::AudioProcessor::getInputChannelName(AudioChannelSet *param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_2 + 0xcc) < 1) {
    *(undefined1 **)param_1 = &DAT_0061ac58;
    return param_1;
  }
  lVar2 = **(long **)(param_2 + 0xc0);
  lVar3 = lVar2 + 0x18;
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
  }
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (-1 < (int)uVar1) {
    uVar4 = 0;
    do {
      if ((*(uint *)(lVar3 + (long)((int)uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
        if (((int)uVar4 < 0) || (param_3 < 1)) goto LAB_004cab0c;
        iVar5 = 0;
        goto LAB_004cab38;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 + 1 != uVar4);
  }
LAB_004cab07:
  uVar4 = 0xffffffff;
LAB_004cab0c:
  AudioChannelSet::getChannelTypeName(param_1,uVar4);
  return param_1;
  while( true ) {
    while (uVar4 = uVar4 + 1,
          (*(uint *)(lVar3 + (long)((int)uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0) {
      if (uVar4 == uVar1) goto LAB_004cab07;
    }
    if (((int)uVar4 < 0) || (iVar5 = iVar5 + 1, param_3 <= iVar5)) break;
LAB_004cab38:
    if ((int)uVar1 <= (int)uVar4) goto LAB_004cab07;
  }
  goto LAB_004cab0c;
}


