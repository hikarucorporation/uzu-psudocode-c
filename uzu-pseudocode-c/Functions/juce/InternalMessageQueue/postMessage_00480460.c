// Function : postMessage
// Namespace: juce:InternalMessageQueue
// Entry    : 00480460
// Prototype: undefined postMessage(InternalMessageQueue * this, long param_1)
// Body     : 00480460 - 00480528


/* juce::InternalMessageQueue::postMessage(juce::MessageManager::MessageBase*) */

void __thiscall juce::InternalMessageQueue::postMessage(InternalMessageQueue *this,long param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 local_19;
  
  pthread_mutex_lock((pthread_mutex_t *)this);
  iVar1 = *(int *)(this + 0x34);
  if ((int)*(uint *)(this + 0x30) <= iVar1) {
    uVar3 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 0x30) != uVar3) {
      if ((int)uVar3 < 1) {
        free(*(void **)(this + 0x28));
        *(undefined8 *)(this + 0x28) = 0;
      }
      else {
        pvVar2 = realloc(*(void **)(this + 0x28),(ulong)uVar3 << 3);
        *(void **)(this + 0x28) = pvVar2;
      }
    }
    *(uint *)(this + 0x30) = uVar3;
    iVar1 = *(int *)(this + 0x34);
  }
  *(int *)(this + 0x34) = iVar1 + 1;
  *(long *)(*(long *)(this + 0x28) + (long)iVar1 * 8) = param_1;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  if (*(int *)(this + 0x40) < 0x80) {
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    pthread_mutex_unlock((pthread_mutex_t *)this);
    local_19 = 0xff;
                    /* try { // try from 00480502 to 00480510 has its CatchHandler @ 00480529 */
    write(*(int *)(this + 0x38),&local_19,1);
    pthread_mutex_lock((pthread_mutex_t *)this);
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}


