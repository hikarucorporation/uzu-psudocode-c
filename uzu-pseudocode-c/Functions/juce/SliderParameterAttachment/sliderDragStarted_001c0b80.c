// Function : sliderDragStarted
// Namespace: juce:SliderParameterAttachment
// Entry    : 001c0b80
// Prototype: undefined sliderDragStarted(long param_1)
// Body     : 001c0b80 - 001c0c50


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SliderParameterAttachment::sliderDragStarted(juce::Slider*) */

void __cdecl juce::SliderParameterAttachment::sliderDragStarted(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x88) = 1;
    LOCK();
    lVar2 = *(long *)(lVar4 + 0x70);
    *(long *)(lVar4 + 0x70) = (long)&DAT_0061ac58;
    UNLOCK();
    piVar8 = (int *)(lVar2 + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar8);
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
  uVar3 = *(uint *)(lVar4 + 0x44);
  uVar6 = (ulong)uVar3;
  if ((int)uVar3 < 1) {
LAB_001c0c26:
    plVar5 = *(long **)(lVar4 + 0x48);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 001c0c36 to 001c0c3d has its CatchHandler @ 001c0c51 */
      (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(lVar4 + 8),1);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
    return;
  }
  uVar7 = uVar6 - 1;
  uVar9 = uVar6;
  if (uVar3 <= (uint)uVar7) goto LAB_001c0c0e;
  do {
    plVar5 = *(long **)(*(long *)(lVar4 + 0x38) + (uVar7 & 0xffffffff) * 8);
    uVar9 = uVar6;
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 001c0c06 to 001c0c0d has its CatchHandler @ 001c0c53 */
      (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined4 *)(lVar4 + 8),1);
    }
LAB_001c0c0e:
    do {
      uVar6 = uVar7;
      if (uVar9 < 2) goto LAB_001c0c26;
      uVar7 = uVar6 - 1;
      uVar9 = uVar6;
    } while (*(uint *)(lVar4 + 0x44) <= (uint)uVar7);
  } while( true );
}


