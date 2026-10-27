// Function : AudioProcessor
// Namespace: juce:AudioProcessor
// Entry    : 004c7da0
// Prototype: undefined AudioProcessor(AudioProcessor * this, undefined8 * param_1)
// Body     : 004c7da0 - 004c804d


/* juce::AudioProcessor::AudioProcessor(juce::AudioProcessor::BusesProperties const&) */

void __thiscall juce::AudioProcessor::AudioProcessor(AudioProcessor *this,undefined8 *param_1)

{
  pthread_t pVar1;
  pthread_t *ppVar2;
  pthread_t pVar3;
  pthread_t *ppVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  pthread_mutexattr_t local_48 [2];
  pthread_mutexattr_t local_40 [2];
  pthread_mutexattr_t local_38 [2];
  
  *(undefined ***)this = &PTR__AudioProcessor_007142b8;
  pVar3 = pthread_self();
  for (ppVar4 = wrapperTypeBeingCreated; ppVar2 = wrapperTypeBeingCreated,
      ppVar4 != (pthread_t *)0x0; ppVar4 = (pthread_t *)ppVar4[1]) {
    if (pVar3 == *ppVar4) goto LAB_004c7e5f;
  }
  do {
    ppVar4 = ppVar2;
    if (ppVar4 == (pthread_t *)0x0) {
                    /* try { // try from 004c7e12 to 004c7e1b has its CatchHandler @ 004c804e */
      ppVar4 = operator_new(0x18);
      ppVar2 = wrapperTypeBeingCreated;
      *ppVar4 = pVar3;
      ppVar4[1] = (pthread_t)ppVar2;
      *(undefined4 *)(ppVar4 + 2) = 0;
      LOCK();
      bVar7 = ppVar2 == wrapperTypeBeingCreated;
      if (bVar7) {
        wrapperTypeBeingCreated = ppVar4;
      }
      UNLOCK();
      ppVar2 = wrapperTypeBeingCreated;
      while (wrapperTypeBeingCreated = ppVar2, !bVar7) {
        ppVar4[1] = (pthread_t)ppVar2;
        LOCK();
        bVar7 = ppVar2 == wrapperTypeBeingCreated;
        if (bVar7) {
          wrapperTypeBeingCreated = ppVar4;
        }
        UNLOCK();
        ppVar2 = wrapperTypeBeingCreated;
      }
LAB_004c7e5f:
      *(int *)(this + 8) = (int)ppVar4[2];
      *(undefined4 *)(this + 0x44) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined2 *)(this + 0x40) = 0;
      pthread_mutexattr_init(local_48);
      pthread_mutexattr_settype(local_48,1);
      pthread_mutexattr_setprotocol(local_48,1);
      pthread_mutex_init((pthread_mutex_t *)(this + 0x48),local_48);
      pthread_mutexattr_destroy(local_48);
      pthread_mutexattr_init(local_40);
      pthread_mutexattr_settype(local_40,1);
      pthread_mutexattr_setprotocol(local_40,1);
      pthread_mutex_init((pthread_mutex_t *)(this + 0x70),local_40);
      pthread_mutexattr_destroy(local_40);
      pthread_mutexattr_init(local_38);
      pthread_mutexattr_settype(local_38,1);
      pthread_mutexattr_setprotocol(local_38,1);
      pthread_mutex_init((pthread_mutex_t *)(this + 0x98),local_38);
      pthread_mutexattr_destroy(local_38);
      *(undefined8 *)(this + 0xd0) = 0;
      *(undefined8 *)(this + 0xd8) = 0;
      *(undefined8 *)(this + 0xc0) = 0;
      *(undefined8 *)(this + 200) = 0;
      *(undefined1 **)(this + 0xe0) = &DAT_0061ac58;
      *(undefined1 **)(this + 0xe8) = &DAT_0061ac58;
      *(undefined8 *)(this + 0xf0) = 0;
      *(undefined1 **)(this + 0xf8) = &DAT_0061ac58;
      *(undefined1 **)(this + 0x100) = &DAT_0061ac58;
      *(undefined1 **)(this + 0x108) = &DAT_0061ac58;
      *(undefined8 *)(this + 0x120) = 0;
      *(undefined8 *)(this + 0x128) = 0;
      *(undefined8 *)(this + 0x110) = 0;
      *(undefined8 *)(this + 0x118) = 0;
      *(undefined8 *)(this + 0x130) = 0;
      *(undefined ***)(this + 0x138) = &PTR__Listener_00714858;
      *(AudioProcessor **)(this + 0x140) = this;
      if ((long)*(int *)((long)param_1 + 0xc) != 0) {
        plVar5 = (long *)*param_1;
        lVar6 = (long)*(int *)((long)param_1 + 0xc) * 0x38;
        do {
                    /* try { // try from 004c7ff0 to 004c7fff has its CatchHandler @ 004c805a */
          createBus(this,1,plVar5);
          plVar5 = plVar5 + 7;
          lVar6 = lVar6 + -0x38;
        } while (lVar6 != 0);
      }
      if ((long)*(int *)((long)param_1 + 0x1c) != 0) {
        plVar5 = (long *)param_1[2];
        lVar6 = (long)*(int *)((long)param_1 + 0x1c) * 0x38;
        do {
                    /* try { // try from 004c8020 to 004c802c has its CatchHandler @ 004c8058 */
          createBus(this,0,plVar5);
          plVar5 = plVar5 + 7;
          lVar6 = lVar6 + -0x38;
        } while (lVar6 != 0);
      }
                    /* try { // try from 004c8037 to 004c803e has its CatchHandler @ 004c8056 */
      updateSpeakerFormatStrings(this);
      return;
    }
    LOCK();
    pVar1 = *ppVar4;
    if (pVar1 == 0) {
      *ppVar4 = pVar3;
    }
    UNLOCK();
    if (pVar1 == 0) {
      *(undefined4 *)(ppVar4 + 2) = 0;
      goto LAB_004c7e5f;
    }
    ppVar2 = (pthread_t *)ppVar4[1];
  } while( true );
}


