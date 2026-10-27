// Function : tryAcquire
// Namespace: juce:MessageManager:Lock
// Entry    : 00481960
// Prototype: ulong tryAcquire(long param_1)
// Body     : 00481960 - 00481b9c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::MessageManager::Lock::tryAcquire(bool) const */

ulong __cdecl juce::MessageManager::Lock::tryAcquire(long param_1)

{
  pthread_mutex_t *ppVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  pthread_t pVar9;
  undefined8 *puVar10;
  undefined8 unaff_R15;
  ulong uVar11;
  
  lVar7 = instance;
  if (instance != 0) {
    ppVar1 = (pthread_mutex_t *)(param_1 + 0x28);
    iVar8 = pthread_mutex_lock(ppVar1);
    if (iVar8 != 0) {
                    /* try { // try from 00481b88 to 00481b8e has its CatchHandler @ 00481bea */
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar8);
    }
    cVar4 = *(char *)(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x88) = 0;
    pthread_mutex_unlock(ppVar1);
    if (cVar4 == '\0') {
      pVar9 = pthread_self();
      uVar11 = CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
      if ((*(pthread_t *)(lVar7 + 0x10) == pVar9) || (pVar9 == *(pthread_t *)(lVar7 + 0x18)))
      goto LAB_004819af;
                    /* try { // try from 004819d8 to 004819e6 has its CatchHandler @ 00481bb6 */
      puVar10 = operator_new(0x70);
      *(undefined4 *)(puVar10 + 1) = 0;
      *puVar10 = &PTR__BlockingMessage_00712c80;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      std::condition_variable::condition_variable((condition_variable *)(puVar10 + 7));
      puVar10[0xd] = param_1;
      if (*(undefined8 **)(param_1 + 0x50) != puVar10) {
        LOCK();
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
        UNLOCK();
        pvVar5 = *(void **)(param_1 + 0x50);
        *(undefined8 **)(param_1 + 0x50) = puVar10;
        if (pvVar5 != (void *)0x0) {
          LOCK();
          piVar2 = (int *)((long)pvVar5 + 8);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            std::condition_variable::~condition_variable
                      ((condition_variable *)((long)pvVar5 + 0x38));
            operator_delete(pvVar5);
          }
        }
      }
      plVar6 = *(long **)(param_1 + 0x50);
      if (((instance == 0) || (*(int *)(instance + 8) != 0)) ||
         (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
        pvVar5 = *(void **)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        InternalMessageQueue::postMessage
                  ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar6
                  );
        iVar8 = pthread_mutex_lock(ppVar1);
        if (iVar8 != 0) {
                    /* try { // try from 00481b8f to 00481b95 has its CatchHandler @ 00481bb4 */
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar8);
        }
        cVar4 = *(char *)(param_1 + 0x88);
        *(undefined1 *)(param_1 + 0x88) = 0;
        if (cVar4 == '\0') {
          do {
                    /* try { // try from 00481af6 to 00481b00 has its CatchHandler @ 00481bca */
            std::condition_variable::wait((unique_lock *)(param_1 + 0x58));
            cVar4 = *(char *)(param_1 + 0x88);
            *(undefined1 *)(param_1 + 0x88) = 0;
          } while (cVar4 == '\0');
          if (ppVar1 != (pthread_mutex_t *)0x0) goto LAB_00481b23;
        }
        else {
LAB_00481b23:
          pthread_mutex_unlock(ppVar1);
        }
        if (*(char *)(param_1 + 0x89) != '\0') {
          LOCK();
          *(pthread_t *)(lVar7 + 0x18) = pVar9;
          UNLOCK();
          goto LAB_004819af;
        }
        lVar7 = *(long *)(param_1 + 0x50);
        ppVar1 = (pthread_mutex_t *)(lVar7 + 0x10);
        iVar8 = pthread_mutex_lock(ppVar1);
        if (iVar8 != 0) {
                    /* try { // try from 00481b96 to 00481b9c has its CatchHandler @ 00481b9d */
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar8);
        }
        *(undefined8 *)(lVar7 + 0x68) = 0;
        pthread_mutex_unlock(ppVar1);
        std::condition_variable::notify_one();
        pvVar5 = *(void **)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      if (pvVar5 != (void *)0x0) {
        LOCK();
        piVar2 = (int *)((long)pvVar5 + 8);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          std::condition_variable::~condition_variable((condition_variable *)((long)pvVar5 + 0x38));
          operator_delete(pvVar5);
        }
      }
    }
  }
  uVar11 = 0;
LAB_004819af:
  return uVar11 & 0xffffffff;
}


