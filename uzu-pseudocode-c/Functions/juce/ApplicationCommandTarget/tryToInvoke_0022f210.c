// Function : tryToInvoke
// Namespace: juce:ApplicationCommandTarget
// Entry    : 0022f210
// Prototype: ulong tryToInvoke(ApplicationCommandTarget * param_1, undefined4 * param_2)
// Body     : 0022f210 - 0022f318


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ApplicationCommandTarget::tryToInvoke(juce::ApplicationCommandTarget::InvocationInfo
   const&, bool) */

ulong __cdecl
juce::ApplicationCommandTarget::tryToInvoke(ApplicationCommandTarget *param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined7 extraout_var;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  
  bVar14 = isCommandActive(param_1,*param_2);
  uVar17 = CONCAT71(extraout_var,bVar14) & 0xffffffff;
  if (!bVar14) {
    return uVar17;
  }
  plVar15 = operator_new(0x48);
  *(undefined4 *)(plVar15 + 1) = 0;
  *plVar15 = (long)&PTR__CommandMessage_0070e138;
  puVar16 = *(undefined8 **)(param_1 + 8);
  if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 0022f2a3 to 0022f2ac has its CatchHandler @ 0022f319 */
    puVar16 = operator_new(0x18);
    *(undefined4 *)(puVar16 + 1) = 0;
    *puVar16 = &PTR__ReferenceCountedObject_0070e178;
    puVar16[2] = param_1;
    LOCK();
    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
    UNLOCK();
    plVar2 = *(long **)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = puVar16;
    if (plVar2 == (long *)0x0) goto LAB_0022f256;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    puVar16 = *(undefined8 **)(param_1 + 8);
    plVar15[2] = (long)puVar16;
    if (puVar16 == (undefined8 *)0x0) goto LAB_0022f25f;
  }
  else {
LAB_0022f256:
    plVar15[2] = (long)puVar16;
  }
  LOCK();
  *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
  UNLOCK();
LAB_0022f25f:
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  *(undefined4 *)(plVar15 + 7) = param_2[8];
  *(undefined4 *)((long)plVar15 + 0x3c) = uVar11;
  *(undefined4 *)(plVar15 + 8) = uVar12;
  *(undefined4 *)((long)plVar15 + 0x44) = uVar13;
  *(undefined4 *)(plVar15 + 5) = uVar7;
  *(undefined4 *)((long)plVar15 + 0x2c) = uVar8;
  *(undefined4 *)(plVar15 + 6) = uVar9;
  *(undefined4 *)((long)plVar15 + 0x34) = uVar10;
  *(undefined4 *)(plVar15 + 3) = uVar3;
  *(undefined4 *)((long)plVar15 + 0x1c) = uVar4;
  *(undefined4 *)(plVar15 + 4) = uVar5;
  *(undefined4 *)((long)plVar15 + 0x24) = uVar6;
  if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
     (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar15 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
  }
  else {
    InternalMessageQueue::postMessage
              ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar15);
  }
  return uVar17;
}


