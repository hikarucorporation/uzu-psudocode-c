// Function : registerInstance
// Namespace: PdWorker
// Entry    : 00167400
// Prototype: undefined registerInstance(PdWorker * this, long param_1)
// Body     : 00167400 - 0016764c


/* PdWorker::registerInstance(AudioPluginAudioProcessor*) */

void __thiscall PdWorker::registerInstance(PdWorker *this,long param_1)

{
  PdWorker PVar1;
  long *__src;
  long *plVar2;
  long *plVar3;
  int iVar4;
  void *__dest;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong __n;
  ulong uVar9;
  
  if (param_1 == 0) {
    return;
  }
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x200));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  __src = *(long **)(this + 0x228);
  plVar2 = *(long **)(this + 0x230);
  __n = (long)plVar2 - (long)__src;
  plVar5 = __src;
  uVar6 = __n;
  if (0x1f < (long)__n) {
    lVar7 = (__n >> 5) + 1;
    plVar3 = __src + 2;
    do {
      plVar5 = plVar3;
      if (plVar5[-2] == param_1) {
        plVar5 = plVar5 + -2;
        goto joined_r0x001674e6;
      }
      if (plVar5[-1] == param_1) {
        plVar5 = plVar5 + -1;
        goto joined_r0x001674e6;
      }
      if (*plVar5 == param_1) goto joined_r0x001674e6;
      if (plVar5[1] == param_1) {
        plVar5 = plVar5 + 1;
        goto joined_r0x001674e6;
      }
      lVar7 = lVar7 + -1;
      uVar6 = uVar6 - 0x20;
      plVar3 = plVar5 + 4;
    } while (1 < lVar7);
    plVar5 = plVar5 + 2;
  }
  lVar7 = (long)uVar6 >> 3;
  if (lVar7 == 1) {
LAB_001674c9:
    if (*plVar5 == param_1) goto joined_r0x001674e6;
  }
  else {
    if (lVar7 == 2) {
LAB_001674c0:
      if (*plVar5 != param_1) {
        plVar5 = plVar5 + 1;
        goto LAB_001674c9;
      }
    }
    else {
      if (lVar7 != 3) goto LAB_001674fb;
      if (*plVar5 != param_1) {
        plVar5 = plVar5 + 1;
        goto LAB_001674c0;
      }
    }
joined_r0x001674e6:
    if (plVar5 != plVar2) goto LAB_001675f4;
  }
LAB_001674fb:
  if (plVar2 == *(long **)(this + 0x238)) {
    if (__n == 0x7ffffffffffffff8) {
                    /* try { // try from 00167641 to 0016764c has its CatchHandler @ 0016764d */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar8 = (long)__n >> 3;
    uVar6 = 1;
    if (__n != 0) {
      uVar6 = uVar8;
    }
    uVar9 = uVar6 + uVar8;
    if (uVar9 >> 0x3c != 0) {
      uVar9 = 0xfffffffffffffff;
    }
    if (CARRY8(uVar6,uVar8)) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 == 0) {
      __dest = (void *)0x0;
    }
    else {
                    /* try { // try from 00167570 to 00167574 has its CatchHandler @ 0016764d */
      __dest = operator_new(uVar9 * 8);
    }
    *(long *)((long)__dest + uVar8 * 8) = param_1;
    if (0 < (long)__n) {
      memmove(__dest,__src,__n);
    }
    if (__src != (long *)0x0) {
      operator_delete(__src);
    }
    *(void **)(this + 0x228) = __dest;
    *(ulong *)(this + 0x230) = (long)__dest + uVar8 * 8 + 8;
    *(void **)(this + 0x238) = (void *)(uVar9 * 8 + (long)__dest);
  }
  else {
    *plVar2 = param_1;
    *(long *)(this + 0x230) = *(long *)(this + 0x230) + 8;
  }
LAB_001675f4:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x200));
  *(undefined1 *)(param_1 + 0x551) = 1;
  LOCK();
  PVar1 = this[0x240];
  this[0x240] = (PdWorker)0x1;
  UNLOCK();
  if (((byte)PVar1 & 1) == 0) {
    juce::Thread::startThread((Thread *)this,1);
  }
  juce::WaitableEvent::signal((WaitableEvent *)(this + 0x198));
  return;
}


