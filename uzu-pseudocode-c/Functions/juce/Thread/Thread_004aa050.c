// Function : Thread
// Namespace: juce:Thread
// Entry    : 004aa050
// Prototype: undefined Thread(Thread * this, long * param_1, undefined8 param_2)
// Body     : 004aa050 - 004aa17e


/* juce::Thread::Thread(juce::String const&, unsigned long) */

void __thiscall juce::Thread::Thread(Thread *this,long *param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  pthread_mutexattr_t local_20 [2];
  
  *(undefined ***)this = &PTR__Thread_00713508;
  lVar1 = *param_1;
  *(long *)(this + 8) = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  this[0x58] = (Thread)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  pthread_mutexattr_init(local_20);
  pthread_mutexattr_settype(local_20,1);
  pthread_mutexattr_setprotocol(local_20,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x60),local_20);
  pthread_mutexattr_destroy(local_20);
  this[0x88] = (Thread)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0xb8));
  this[0xe8] = (Thread)0x0;
  this[0xf0] = (Thread)0x0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x120));
  this[0x150] = (Thread)0x0;
  *(undefined8 *)(this + 0x158) = param_2;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined2 *)(this + 0x164) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 400) = 0;
  return;
}


