// Function : getTypefacePtr
// Namespace: juce:Font:SharedFontInternal
// Entry    : 002f79a0
// Prototype: undefined getTypefacePtr(SharedFontInternal * this, long param_1, long * param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 002f79a0 - 002f7a71


/* juce::Font::SharedFontInternal::getTypefacePtr(juce::Font const&) */

void __thiscall
juce::Font::SharedFontInternal::getTypefacePtr
          (SharedFontInternal *this,long param_1,long *param_2,undefined8 param_3,uint *param_4,
          ulong param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *local_30;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x80));
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    plVar2 = *(long **)(param_1 + 0x28);
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 002f79fb to 002f7a0f has its CatchHandler @ 002f7a72 */
      lVar4 = SingletonHolder<juce::TypefaceCache,juce::CriticalSection,false>::get();
      TypefaceCache::findTypefaceFor((long *)&local_30,lVar4,param_2,param_3,param_4,param_5);
    }
    else {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_30 = *(long **)(param_1 + 0x28);
      if (local_30 != (long *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
    }
    plVar3 = *(long **)(param_1 + 0x10);
    *(long **)(param_1 + 0x10) = local_30;
    local_30 = plVar3;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)this = lVar4;
    if (lVar4 == 0) goto LAB_002f7a5d;
  }
  else {
    *(long *)this = lVar4;
  }
  LOCK();
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  UNLOCK();
LAB_002f7a5d:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80));
  return;
}


