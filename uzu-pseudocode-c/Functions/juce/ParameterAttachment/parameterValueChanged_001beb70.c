// Function : parameterValueChanged
// Namespace: juce:ParameterAttachment
// Entry    : 001beb70
// Prototype: ulong parameterValueChanged(undefined4 param_1, long * param_2_00)
// Body     : 001beb70 - 001bec45


/* WARNING: Unknown calling convention: __cdecl */
/* juce::ParameterAttachment::parameterValueChanged(int, float) */

ulong __cdecl juce::ParameterAttachment::parameterValueChanged(undefined4 param_1,long *param_2_00)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  pthread_t pVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  pthread_t pVar8;
  ulong uVar9;
  
  LOCK();
  *(undefined4 *)(param_2_00 + 4) = param_1;
  UNLOCK();
  puVar7 = MessageManager::getInstance();
  iVar6 = pthread_mutex_lock((pthread_mutex_t *)(puVar7 + 4));
  if (iVar6 != 0) {
                    /* try { // try from 001bec3f to 001bec45 has its CatchHandler @ 001bec46 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  pVar8 = pthread_self();
  pVar4 = puVar7[2];
  pthread_mutex_unlock((pthread_mutex_t *)(puVar7 + 4));
  if (pVar4 == pVar8) {
    LOCK();
    *(undefined4 *)(param_2_00[2] + 0x18) = 0;
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x001bec20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(*param_2_00 + 0x20))(param_2_00);
    return uVar9;
  }
  uVar9 = 0;
  puVar1 = (uint *)(param_2_00[2] + 0x18);
  LOCK();
  uVar3 = *puVar1;
  if (uVar3 == 0) {
    *puVar1 = 1;
  }
  else {
    uVar9 = (ulong)uVar3;
  }
  UNLOCK();
  if (uVar3 == 0) {
    plVar5 = (long *)param_2_00[2];
    if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
       (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
      uVar9 = InternalMessageQueue::postMessage
                        ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                         (long)plVar5);
      return uVar9;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    uVar9 = param_2_00[2];
    LOCK();
    *(undefined4 *)(uVar9 + 0x18) = 0;
    UNLOCK();
  }
  return uVar9;
}


