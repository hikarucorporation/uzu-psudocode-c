// Function : unregisterInstance
// Namespace: PdWorker
// Entry    : 00167670
// Prototype: undefined unregisterInstance(PdWorker * this, long param_1)
// Body     : 00167670 - 0016784c


/* WARNING: Removing unreachable block (ram,0x00167801) */
/* WARNING: Removing unreachable block (ram,0x00167803) */
/* PdWorker::unregisterInstance(AudioPluginAudioProcessor*) */

void __thiscall PdWorker::unregisterInstance(PdWorker *this,long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x551) = 0;
  iVar5 = 200;
  do {
    if ((*(byte *)(param_1 + 0x552) & 1) == 0) break;
    juce::Thread::sleep(1);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x200));
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  plVar6 = *(long **)(this + 0x228);
  plVar7 = *(long **)(this + 0x230);
  uVar2 = (long)plVar7 - (long)plVar6;
  if (0x1f < (long)uVar2) {
    lVar4 = (uVar2 >> 5) + 1;
    plVar3 = plVar6 + 2;
    do {
      plVar6 = plVar3;
      if (plVar6[-2] == param_1) {
        plVar6 = plVar6 + -2;
        goto LAB_0016777e;
      }
      if (plVar6[-1] == param_1) {
        plVar6 = plVar6 + -1;
        goto LAB_0016777e;
      }
      if (*plVar6 == param_1) goto LAB_0016777e;
      if (plVar6[1] == param_1) {
        plVar6 = plVar6 + 1;
        goto LAB_0016777e;
      }
      lVar4 = lVar4 + -1;
      uVar2 = uVar2 - 0x20;
      plVar3 = plVar6 + 4;
    } while (1 < lVar4);
    plVar6 = plVar6 + 2;
  }
  lVar4 = (long)uVar2 >> 3;
  if (lVar4 == 1) {
LAB_00167759:
    if (*plVar6 != param_1) goto LAB_00167835;
  }
  else if (lVar4 == 2) {
LAB_00167750:
    if (*plVar6 != param_1) {
      plVar6 = plVar6 + 1;
      goto LAB_00167759;
    }
  }
  else {
    if (lVar4 != 3) goto LAB_00167835;
    if (*plVar6 != param_1) {
      plVar6 = plVar6 + 1;
      goto LAB_00167750;
    }
  }
LAB_0016777e:
  plVar3 = plVar6;
  if ((plVar6 != plVar7) && (plVar1 = plVar6 + 1, plVar1 != plVar7)) {
    if (*plVar1 != param_1) {
      *plVar6 = *plVar1;
      plVar3 = plVar1;
    }
    for (plVar6 = plVar6 + 2; plVar6 != plVar7; plVar6 = plVar6 + 1) {
      if (*plVar6 != param_1) {
        *plVar3 = *plVar6;
        plVar3 = plVar3 + 1;
      }
    }
    plVar7 = *(long **)(this + 0x230);
  }
  if (((plVar3 != plVar7) &&
      ((long)plVar3 - *(long *)(this + 0x228) >> 3 != (long)plVar7 - *(long *)(this + 0x228) >> 3))
     && (plVar7 != plVar3)) {
    *(long **)(this + 0x230) = plVar3;
  }
LAB_00167835:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x200));
  return;
}


