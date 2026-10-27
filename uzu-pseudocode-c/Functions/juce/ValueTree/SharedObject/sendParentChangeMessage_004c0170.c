// Function : sendParentChangeMessage
// Namespace: juce:ValueTree:SharedObject
// Entry    : 004c0170
// Prototype: undefined sendParentChangeMessage(SharedObject * param_1)
// Body     : 004c0170 - 004c045d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ValueTree::SharedObject::sendParentChangeMessage() */

void __cdecl juce::ValueTree::SharedObject::sendParentChangeMessage(SharedObject *param_1)

{
  SharedObject *pSVar1;
  ulong *puVar2;
  SharedObject *pSVar3;
  long lVar4;
  ulong *__dest;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  SharedObject **local_68;
  SharedObject *local_60;
  long local_58 [4];
  int local_38;
  
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_38 = 0;
  uVar6 = *(uint *)(param_1 + 0x34);
  uVar10 = (ulong)uVar6;
  local_60 = param_1;
  if (0 < (int)uVar6) {
    uVar14 = uVar10 - 1;
    uVar9 = uVar10;
    if (uVar6 <= (uint)uVar14) goto LAB_004c01d4;
    do {
      pSVar3 = *(SharedObject **)(*(long *)(param_1 + 0x28) + (uVar14 & 0xffffffff) * 8);
      uVar9 = uVar10;
      if (pSVar3 != (SharedObject *)0x0) {
                    /* try { // try from 004c01cf to 004c01d3 has its CatchHandler @ 004c046f */
        sendParentChangeMessage(pSVar3);
      }
LAB_004c01d4:
      do {
        uVar10 = uVar14;
        if (uVar9 < 2) goto LAB_004c01eb;
        uVar14 = uVar10 - 1;
        uVar9 = uVar10;
      } while (*(uint *)(param_1 + 0x34) <= (uint)uVar14);
    } while( true );
  }
LAB_004c01eb:
  local_68 = &local_60;
  uVar6 = *(uint *)(param_1 + 0x44);
  uVar10 = (ulong)(int)uVar6;
  if (uVar10 != 0) {
    if (uVar6 != 1) {
      if ((int)uVar6 < 1) {
        __dest = (ulong *)0x0;
      }
      else {
        pvVar5 = *(void **)(param_1 + 0x38);
        uVar12 = uVar6 + (uVar6 >> 1) + 8 & 0xfffffff8;
        if ((int)uVar12 < 1) {
          __dest = (ulong *)0x0;
        }
        else {
          __dest = malloc((ulong)uVar12 << 3);
        }
        memcpy(__dest,pvVar5,(ulong)uVar6 << 3);
      }
      puVar2 = __dest + uVar10;
      uVar14 = 0;
      puVar15 = __dest;
      if (uVar6 == 0) goto LAB_004c02b0;
LAB_004c0290:
      uVar9 = *puVar15;
      if (*(ulong *)(*(long *)(param_1 + 0x38) + uVar14 * 8) != uVar9) goto LAB_004c02ba;
LAB_004c0310:
                    /* try { // try from 004c0314 to 004c031b has its CatchHandler @ 004c0460 */
      ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
      ::
      callCheckedExcluding<juce::ValueTree::SharedObject::sendParentChangeMessage()::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
                ((long *)(uVar9 + 8),&local_68);
LAB_004c031c:
      do {
        puVar15 = puVar15 + 1;
        if (puVar15 == puVar2) {
          free(__dest);
          if (local_38 != 2) goto LAB_004c0426;
          goto LAB_004c035e;
        }
        uVar14 = uVar14 + 1;
        uVar10 = (ulong)*(uint *)(param_1 + 0x44);
        if (uVar14 < uVar10) goto LAB_004c0290;
LAB_004c02b0:
        uVar9 = *puVar15;
        if (uVar9 == 0) goto LAB_004c0310;
LAB_004c02ba:
        if (0 < (int)uVar10) {
          uVar6 = 0;
          do {
            while( true ) {
              if (uVar9 == *(ulong *)(*(long *)(param_1 + 0x38) + (long)(int)uVar6 * 8)) {
                if (-1 < (int)uVar6) goto LAB_004c0310;
                goto LAB_004c031c;
              }
              uVar12 = (int)(uVar6 + (int)uVar10) / 2;
              if (uVar12 == uVar6) goto LAB_004c031c;
              if (*(ulong *)(*(long *)(param_1 + 0x38) + (long)(int)uVar12 * 8) <= uVar9) break;
              uVar10 = (ulong)uVar12;
              if ((int)uVar12 <= (int)uVar6) goto LAB_004c031c;
            }
            uVar6 = uVar12;
          } while ((int)uVar12 < (int)uVar10);
        }
      } while( true );
    }
                    /* try { // try from 004c020e to 004c0217 has its CatchHandler @ 004c045e */
    ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
    ::
    callCheckedExcluding<juce::ValueTree::SharedObject::sendParentChangeMessage()::_lambda(juce::ValueTree::Listener&)_1_&,juce::ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>
              ((long *)(**(long **)(param_1 + 0x38) + 8),&local_68);
  }
  if (local_38 == 2) {
LAB_004c035e:
    pSVar3 = local_60;
    if (((*(int *)(local_58[0] + 0xc) != 0) && (local_60 != (SharedObject *)0x0)) &&
       (uVar6 = *(uint *)(local_60 + 0x44), 0 < (int)uVar6)) {
      lVar4 = *(long *)(local_60 + 0x38);
      uVar12 = uVar6;
      uVar7 = 0;
      do {
        while( true ) {
          if (&local_60 == *(SharedObject ***)(lVar4 + (long)(int)uVar7 * 8)) {
            if (uVar7 < uVar6) {
              pvVar5 = (void *)(lVar4 + (long)(int)uVar7 * 8);
              memmove(pvVar5,(void *)((long)pvVar5 + 8),(long)(int)(uVar6 + ~uVar7) << 3);
              iVar11 = *(int *)(pSVar3 + 0x44);
              uVar6 = iVar11 - 1;
              *(uint *)(pSVar3 + 0x44) = uVar6;
              iVar8 = iVar11 * 2 + -2;
              iVar11 = 0;
              if (-1 < iVar8) {
                iVar11 = iVar8;
              }
              if (iVar11 < *(int *)(pSVar3 + 0x40)) {
                uVar12 = 8;
                if (8 < (int)uVar6) {
                  uVar12 = uVar6;
                }
                if ((int)uVar12 < *(int *)(pSVar3 + 0x40)) {
                  pvVar5 = realloc(*(void **)(pSVar3 + 0x38),(ulong)uVar12 << 3);
                  *(void **)(pSVar3 + 0x38) = pvVar5;
                  *(uint *)(pSVar3 + 0x40) = uVar12;
                }
              }
            }
            goto LAB_004c0426;
          }
          uVar13 = (int)(uVar7 + uVar12) / 2;
          if (uVar13 == uVar7) goto LAB_004c0426;
          if (*(SharedObject ***)(lVar4 + (long)(int)uVar13 * 8) <= &local_60) break;
          uVar12 = uVar13;
          if ((int)uVar13 <= (int)uVar7) goto LAB_004c0426;
        }
        uVar7 = uVar13;
      } while ((int)uVar13 < (int)uVar12);
    }
  }
LAB_004c0426:
  ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::ValueTree::Listener,juce::Array<juce::ValueTree::Listener*,juce::DummyCriticalSection,0>>
                   *)local_58);
  pSVar3 = local_60;
  if (local_60 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = local_60 + 8;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      ~SharedObject(local_60);
      operator_delete(pSVar3);
    }
  }
  return;
}


