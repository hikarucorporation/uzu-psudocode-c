// Function : sliderDragEnded
// Namespace: juce:SliderParameterAttachment
// Entry    : 001c0c70
// Prototype: undefined sliderDragEnded(long param_1)
// Body     : 001c0c70 - 001c0cfa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SliderParameterAttachment::sliderDragEnded(juce::Slider*) */

void __cdecl juce::SliderParameterAttachment::sliderDragEnded(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *(long *)(param_1 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(lVar2 + 0x10));
  uVar1 = *(uint *)(lVar2 + 0x44);
  uVar4 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
LAB_001c0cd3:
    plVar3 = *(long **)(lVar2 + 0x48);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 001c0ce3 to 001c0ce7 has its CatchHandler @ 001c0cfb */
      (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(lVar2 + 8),0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(lVar2 + 0x10));
    return;
  }
  uVar5 = uVar4 - 1;
  uVar6 = uVar4;
  if (uVar1 <= (uint)uVar5) goto LAB_001c0cbb;
  do {
    plVar3 = *(long **)(*(long *)(lVar2 + 0x38) + (uVar5 & 0xffffffff) * 8);
    uVar6 = uVar4;
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 001c0cb6 to 001c0cba has its CatchHandler @ 001c0cfd */
      (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(lVar2 + 8),0);
    }
LAB_001c0cbb:
    do {
      uVar4 = uVar5;
      if (uVar6 < 2) goto LAB_001c0cd3;
      uVar5 = uVar4 - 1;
      uVar6 = uVar4;
    } while (*(uint *)(lVar2 + 0x44) <= (uint)uVar5);
  } while( true );
}


