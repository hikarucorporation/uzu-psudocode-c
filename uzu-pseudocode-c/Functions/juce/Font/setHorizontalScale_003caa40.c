// Function : setHorizontalScale
// Namespace: juce:Font
// Entry    : 003caa40
// Prototype: undefined setHorizontalScale(undefined4 param_1, Font * this)
// Body     : 003caa40 - 003caad6


/* juce::Font::setHorizontalScale(float) */

void __thiscall juce::Font::setHorizontalScale(undefined4 param_1,Font *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *local_18;
  
  if (1 < *(int *)(*(long *)this + 8)) {
    SharedFontInternal::copy(&local_18,*(long *)this);
    plVar2 = *(long **)this;
    *(long **)this = local_18;
    local_18 = plVar2;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  SharedFontInternal::setHorizontalScale(param_1,*(SharedFontInternal **)this);
  lVar3 = *(long *)this;
  pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x80));
  plVar2 = *(long **)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x80));
  return;
}


