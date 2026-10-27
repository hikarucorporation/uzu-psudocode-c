// Function : _M_invoke
// Namespace: std:_Function_handler_void_int__juce__InternalMessageQueue__InternalMessageQueue_____lambda_in~fdc43be2
// Entry    : 0047ec30
// Prototype: undefined _M_invoke(undefined8 * param_1, int * param_2)
// Body     : 0047ec30 - 0047ed8f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (int),
   juce::InternalMessageQueue::InternalMessageQueue()::{lambda(int)#1}>::_M_invoke(std::_Any_data
   const&, int&&) */

void __cdecl
std::
_Function_handler<void(int),juce::InternalMessageQueue::InternalMessageQueue()::{lambda(int)#1}>::
_M_invoke(undefined8 *param_1,int *param_2)

{
  int __fd;
  pthread_mutex_t *__mutex;
  long *plVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 local_31;
  
  __fd = *param_2;
  __mutex = (pthread_mutex_t *)*param_1;
  while( true ) {
    pthread_mutex_lock(__mutex);
    if (0 < *(int *)((long)__mutex + 0x40)) {
      *(int *)((long)__mutex + 0x40) = *(int *)((long)__mutex + 0x40) + -1;
      pthread_mutex_unlock(__mutex);
                    /* try { // try from 0047ec6f to 0047ec7e has its CatchHandler @ 0047ed90 */
      read(__fd,&local_31,1);
      pthread_mutex_lock(__mutex);
    }
    iVar2 = *(int *)((long)__mutex + 0x34);
    if (iVar2 == 0) {
      pthread_mutex_unlock(__mutex);
      return;
    }
    plVar5 = *(long **)&__mutex[1].__data;
    plVar1 = (long *)*plVar5;
    if (plVar1 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      plVar5 = (long *)__mutex[1].__align;
      iVar2 = *(int *)((long)__mutex + 0x34);
      plVar6 = plVar1;
    }
    memmove(plVar5,plVar5 + 1,(long)(iVar2 + -1) << 3);
    uVar4 = *(int *)((long)__mutex + 0x34) - 1;
    *(uint *)((long)__mutex + 0x34) = uVar4;
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar5 = plVar1 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      uVar4 = *(uint *)((long)__mutex + 0x34);
    }
    if (((int)(uVar4 * 2) < *(int *)((long)__mutex + 0x30)) &&
       ((int)uVar4 < *(int *)((long)__mutex + 0x30))) {
      if ((int)uVar4 < 1) {
        free((void *)__mutex[1].__align);
        __mutex[1].__align = 0;
      }
      else {
        pvVar3 = realloc((void *)__mutex[1].__align,(ulong)uVar4 << 3);
        __mutex[1].__align = (long)pvVar3;
      }
      *(uint *)((long)__mutex + 0x30) = uVar4;
    }
    pthread_mutex_unlock(__mutex);
    if (plVar6 == (long *)0x0) break;
                    /* try { // try from 0047ed49 to 0047ed4e has its CatchHandler @ 0047edab */
    (**(code **)(*plVar6 + 0x10))(plVar6);
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  return;
}


