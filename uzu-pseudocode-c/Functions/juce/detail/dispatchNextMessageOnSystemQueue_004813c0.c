// Function : dispatchNextMessageOnSystemQueue
// Namespace: juce:detail
// Entry    : 004813c0
// Prototype: undefined8 dispatchNextMessageOnSystemQueue(int param_1)
// Body     : 004813c0 - 0048143c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::dispatchNextMessageOnSystemQueue(bool) */

undefined8 __cdecl juce::detail::dispatchNextMessageOnSystemQueue(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    do {
    } while (InternalRunLoop::singletonHolder._40_8_ == 0);
    uVar1 = InternalRunLoop::dispatchPendingEvents
                      ((InternalRunLoop *)InternalRunLoop::singletonHolder._40_8_);
    return uVar1;
  }
  while( true ) {
    do {
      uVar1 = InternalRunLoop::singletonHolder._40_8_;
    } while (InternalRunLoop::singletonHolder._40_8_ == 0);
    uVar2 = InternalRunLoop::dispatchPendingEvents
                      ((InternalRunLoop *)InternalRunLoop::singletonHolder._40_8_);
    if ((char)uVar2 != '\0') break;
    pthread_mutex_lock((pthread_mutex_t *)uVar1);
                    /* try { // try from 0048141f to 00481428 has its CatchHandler @ 0048143d */
    poll(*(pollfd **)(uVar1 + 0x70),*(long *)(uVar1 + 0x78) - (long)*(pollfd **)(uVar1 + 0x70) >> 3,
         2000);
    pthread_mutex_unlock((pthread_mutex_t *)uVar1);
  }
  return CONCAT71((int7)((ulong)uVar2 >> 8),1);
}


