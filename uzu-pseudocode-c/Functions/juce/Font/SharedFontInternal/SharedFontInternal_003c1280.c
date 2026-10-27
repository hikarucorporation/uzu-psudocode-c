// Function : SharedFontInternal
// Namespace: juce:Font:SharedFontInternal
// Entry    : 003c1280
// Prototype: undefined SharedFontInternal(SharedFontInternal * this, long * param_1)
// Body     : 003c1280 - 003c144c


/* juce::Font::SharedFontInternal::SharedFontInternal(juce::FontOptions) */

void __thiscall
juce::Font::SharedFontInternal::SharedFontInternal(SharedFontInternal *this,long *param_1)

{
  int *piVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  long local_30;
  pthread_mutexattr_t local_28 [2];
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__SharedFontInternal_00712058;
  *(undefined8 *)(this + 0x10) = 0;
  pcVar2 = (char *)*param_1;
  piVar1 = (int *)(pcVar2 + -0x10);
  if (piVar1 != &emptyString) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (*pcVar2 == '\0') {
    if (getFontPlaceholderNames()::names == '\0') {
      iVar6 = __cxa_guard_acquire(&getFontPlaceholderNames()::names);
      if (iVar6 != 0) {
                    /* try { // try from 003c141d to 003c1421 has its CatchHandler @ 003c144d */
        FontPlaceholderNames::FontPlaceholderNames();
        __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                     &__dso_handle);
        __cxa_guard_release(&getFontPlaceholderNames()::names);
      }
    }
    local_30 = getFontPlaceholderNames()::names;
    piVar7 = (int *)(getFontPlaceholderNames()::names + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
                    /* try { // try from 003c13d3 to 003c13df has its CatchHandler @ 003c145e */
    FontOptions::withName((FontOptions *)(this + 0x18),param_1,&local_30);
    piVar7 = (int *)(local_30 + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(piVar7);
      }
    }
  }
  else {
    *(long *)(this + 0x18) = *param_1;
    *param_1 = (long)&DAT_0061ac58;
    *(long *)(this + 0x20) = param_1[1];
    param_1[1] = (long)&DAT_0061ac58;
    *(long *)(this + 0x28) = param_1[2];
    param_1[2] = 0;
    lVar3 = param_1[4];
    *(long *)(this + 0x30) = param_1[3];
    *(long *)(this + 0x38) = lVar3;
    *(long *)(this + 0x40) = param_1[5];
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    lVar3 = param_1[7];
    *(long *)(this + 0x48) = param_1[6];
    *(long *)(this + 0x50) = lVar3;
    *(long *)(this + 0x58) = param_1[8];
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    lVar3 = param_1[9];
    lVar4 = param_1[10];
    uVar5 = *(undefined8 *)((long)param_1 + 0x5e);
    *(undefined8 *)(this + 0x6e) = *(undefined8 *)((long)param_1 + 0x56);
    *(undefined8 *)(this + 0x76) = uVar5;
    *(long *)(this + 0x60) = lVar3;
    *(long *)(this + 0x68) = lVar4;
  }
  if (piVar1 != &emptyString) {
    LOCK();
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      operator_delete__(piVar1);
    }
  }
  pthread_mutexattr_init(local_28);
  pthread_mutexattr_settype(local_28,1);
  pthread_mutexattr_setprotocol(local_28,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x80),local_28);
  pthread_mutexattr_destroy(local_28);
  return;
}


