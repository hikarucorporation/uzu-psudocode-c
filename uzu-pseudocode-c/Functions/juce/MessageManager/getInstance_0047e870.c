// Function : getInstance
// Namespace: juce:MessageManager
// Entry    : 0047e870
// Prototype: undefined8 * getInstance(void)
// Body     : 0047e870 - 0047eb42


/* juce::MessageManager::getInstance() */

undefined8 * juce::MessageManager::getInstance(void)

{
  undefined8 *puVar1;
  pthread_t pVar2;
  pthread_mutex_t *ppVar3;
  pthread_mutex_t *local_48;
  undefined8 local_40;
  code *local_38;
  code *local_30;
  
  if (instance == (undefined8 *)0x0) {
    puVar1 = operator_new(0x48);
    *puVar1 = 0;
    puVar1[1] = 0;
    pVar2 = pthread_self();
    puVar1[2] = pVar2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    local_48 = (pthread_mutex_t *)0x5e5e09;
    instance = puVar1;
    if (InternalRunLoop::singletonHolder._40_8_ == 0) {
      pthread_mutex_lock((pthread_mutex_t *)InternalRunLoop::singletonHolder);
      if ((InternalRunLoop::singletonHolder._40_8_ == 0) &&
         (SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false>::get()::alreadyInside
          == '\0')) {
        SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false>::get()::alreadyInside = 1
        ;
                    /* try { // try from 0047e92a to 0047e933 has its CatchHandler @ 0047ec0b */
        ppVar3 = operator_new(0xb0);
        ppVar3[4].__align = 0;
        *(undefined8 *)((long)ppVar3 + 0xa8) = 0;
        *(undefined8 *)((long)ppVar3 + 0x90) = 0;
        *(undefined8 *)((long)ppVar3 + 0x98) = 0;
        *(undefined8 *)((long)ppVar3 + 0x80) = 0;
        *(undefined8 *)((long)ppVar3 + 0x88) = 0;
        *(undefined8 *)((long)ppVar3 + 0x70) = 0;
        ppVar3[3].__align = 0;
        *(undefined8 *)((long)ppVar3 + 0x60) = 0;
        *(undefined8 *)((long)ppVar3 + 0x68) = 0;
        ppVar3[2].__align = 0;
        *(undefined8 *)((long)ppVar3 + 0x58) = 0;
        *(undefined8 *)((long)ppVar3 + 0x40) = 0;
        *(undefined8 *)((long)ppVar3 + 0x48) = 0;
        *(undefined8 *)((long)ppVar3 + 0x30) = 0;
        *(undefined8 *)((long)ppVar3 + 0x38) = 0;
        (ppVar3->__data).__list.__next = (__pthread_internal_list *)0x0;
        ppVar3[1].__align = 0;
        *(int *)((long)&ppVar3->__data + 0x10) = 0;
        *(int *)((long)&ppVar3->__data + 0x14) = 0;
        (ppVar3->__data).__list.__prev = (__pthread_internal_list *)0x0;
        ppVar3->__align = 0;
        *(int *)((long)&ppVar3->__data + 8) = 0;
        *(uint *)((long)&ppVar3->__data + 0xc) = 0;
        pthread_mutexattr_init((pthread_mutexattr_t *)&local_48);
        pthread_mutexattr_settype((pthread_mutexattr_t *)&local_48,1);
        pthread_mutexattr_setprotocol((pthread_mutexattr_t *)&local_48,1);
        pthread_mutex_init(ppVar3,(pthread_mutexattr_t *)&local_48);
        pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_48);
        *(undefined4 *)((long)ppVar3 + 0x30) = 0;
        *(undefined8 *)((long)ppVar3 + 0x38) = 0;
        *(long *)((long)ppVar3 + 0x40) = (long)ppVar3 + 0x30;
        *(long *)((long)ppVar3 + 0x48) = (long)ppVar3 + 0x30;
        ppVar3[2].__align = 0;
        *(undefined8 *)((long)ppVar3 + 0x58) = 0;
        *(undefined8 *)((long)ppVar3 + 0x60) = 0;
        *(undefined8 *)((long)ppVar3 + 0x68) = 0;
        *(undefined8 *)((long)ppVar3 + 0x70) = 0;
        ppVar3[3].__align = 0;
        *(undefined8 *)((long)ppVar3 + 0x80) = 0;
        *(undefined8 *)((long)ppVar3 + 0x88) = 0;
        *(undefined8 *)((long)ppVar3 + 0x90) = 0;
        *(undefined8 *)((long)ppVar3 + 0x98) = 0;
        ppVar3[4].__align = 0;
        *(undefined4 *)((long)ppVar3 + 0xa8) = 0;
        LOCK();
        UNLOCK();
        SingletonHolder<juce::InternalRunLoop,juce::CriticalSection,false>::get()::alreadyInside =
             '\0';
        InternalRunLoop::singletonHolder._40_8_ = ppVar3;
      }
      pthread_mutex_unlock((pthread_mutex_t *)InternalRunLoop::singletonHolder);
    }
    if (InternalMessageQueue::singletonHolder._40_8_ == 0) {
      pthread_mutex_lock((pthread_mutex_t *)InternalMessageQueue::singletonHolder);
      if ((InternalMessageQueue::singletonHolder._40_8_ == 0) &&
         (SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false>::get()::
          alreadyInside == '\0')) {
        SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false>::get()::
        alreadyInside = 1;
                    /* try { // try from 0047ea5d to 0047ea66 has its CatchHandler @ 0047ebf8 */
        ppVar3 = operator_new(0x48);
        pthread_mutexattr_init((pthread_mutexattr_t *)&local_48);
        pthread_mutexattr_settype((pthread_mutexattr_t *)&local_48,1);
        pthread_mutexattr_setprotocol((pthread_mutexattr_t *)&local_48,1);
        pthread_mutex_init(ppVar3,(pthread_mutexattr_t *)&local_48);
        pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_48);
        ppVar3[1].__align = 0;
        *(undefined8 *)((long)ppVar3 + 0x30) = 0;
        *(undefined4 *)((long)ppVar3 + 0x40) = 0;
        socketpair(1,1,0,(int *)((long)ppVar3 + 0x38));
        local_40 = 0;
        local_30 = std::
                   _Function_handler<void(int),juce::InternalMessageQueue::InternalMessageQueue()::{lambda(int)#1}>
                   ::_M_invoke;
        local_38 = std::
                   _Function_handler<void(int),juce::InternalMessageQueue::InternalMessageQueue()::{lambda(int)#1}>
                   ::_M_manager;
        local_48 = ppVar3;
                    /* try { // try from 0047eaf6 to 0047eafd has its CatchHandler @ 0047eb4b */
        LinuxEventLoop::registerFdCallback(*(uint *)((long)ppVar3 + 0x3c),&local_48);
        if (local_38 != (code *)0x0) {
                    /* try { // try from 0047eb08 to 0047eb14 has its CatchHandler @ 0047eb43 */
          (*local_38)(&local_48,&local_48,3);
        }
        LOCK();
        UNLOCK();
        SingletonHolder<juce::InternalMessageQueue,juce::CriticalSection,false>::get()::
        alreadyInside = '\0';
        InternalMessageQueue::singletonHolder._40_8_ = ppVar3;
      }
      pthread_mutex_unlock((pthread_mutex_t *)InternalMessageQueue::singletonHolder);
    }
  }
  return instance;
}


