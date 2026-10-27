// Function : undoOrRedo
// Namespace: juce:TextEditor
// Entry    : 002747f0
// Prototype: undefined8 undoOrRedo(TextEditor * this, char param_1, undefined8 param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 002747f0 - 00274d31


/* juce::TextEditor::undoOrRedo(bool) */

undefined8 __thiscall
juce::TextEditor::undoOrRedo
          (TextEditor *this,char param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          ulong param_5)

{
  long *plVar1;
  OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *pOVar2;
  int iVar3;
  TextEditor TVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  char cVar7;
  TextEditor *pTVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined8 extraout_RDX;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  timespec local_40;
  
  if (this[0x1c8] == (TextEditor)0x0) {
    pTVar8 = this + 8;
    do {
      if ((*(ushort *)(pTVar8 + 0xe8) & 0x8000) != 0) goto LAB_00274807;
      pTVar8 = *(TextEditor **)(pTVar8 + 0x30);
    } while (pTVar8 != (TextEditor *)0x0);
    uVar11 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
    if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
      clock_gettime(1,&local_40);
      auVar6 = SEXT816(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) *
               SEXT816(0x20c49ba5e353f7cf);
      uVar11 = (int)(auVar6._8_8_ >> 7) - (auVar6._12_4_ >> 0x1f);
      if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar11) ||
         (uVar11 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
        LOCK();
        UNLOCK();
        _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar11;
      }
    }
    *(uint *)(this + 0x280) = uVar11;
    this[0x260] = (TextEditor)0x1;
    LOCK();
    lVar10 = *(long *)(this + 0x248);
    *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
    UNLOCK();
    piVar12 = (int *)(lVar10 + -0x10);
    if (piVar12 == &emptyString) {
LAB_002748fd:
      uVar11 = *(uint *)(this + 0x25c);
      lVar10 = (long)(int)uVar11;
      if (param_1 != '\0') goto LAB_0027490f;
LAB_00274a39:
      if ((*(uint *)(this + 0x234) <= uVar11) ||
         (plVar5 = *(long **)(*(long *)(this + 0x228) + lVar10 * 8), plVar5 == (long *)0x0))
      goto LAB_00274807;
      TVar4 = this[0x261];
      this[0x261] = (TextEditor)0x1;
      iVar3 = *(int *)((long)plVar5 + 0xc);
      if ((long)iVar3 != 0) {
        lVar10 = *plVar5;
        lVar13 = 0;
        do {
                    /* try { // try from 00274a88 to 00274a8a has its CatchHandler @ 00274d36 */
          cVar7 = (**(code **)(**(long **)(lVar10 + lVar13) + 0x10))();
          if (cVar7 == '\0') {
            pOVar2 = (OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *)
                     (this + 0x228);
                    /* try { // try from 00274c1b to 00274c22 has its CatchHandler @ 00274d32 */
            OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection>::deleteAllObjects
                      (pOVar2);
            if (*(int *)(this + 0x230) != 0) {
              free(*(void **)pOVar2);
              *(undefined8 *)pOVar2 = 0;
            }
            *(undefined4 *)(this + 0x230) = 0;
            *(undefined4 *)(this + 0x250) = 0;
            *(undefined4 *)(this + 0x25c) = 0;
            if (((byte)this[0x220] & 1) != 0) {
              LOCK();
              bVar15 = *(int *)(*(long *)(this + 0x1e8) + 0x18) == 0;
              if (bVar15) {
                *(int *)(*(long *)(this + 0x1e8) + 0x18) = 1;
              }
              UNLOCK();
              if (bVar15) {
                plVar5 = *(long **)(this + 0x1e8);
                if (((MessageManager::instance == 0) ||
                    (*(int *)(MessageManager::instance + 8) != 0)) ||
                   (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
                  LOCK();
                  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar1 = plVar5 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)(*plVar5 + 8))(plVar5);
                  }
                  LOCK();
                  *(undefined4 *)(*(long *)(this + 0x1e8) + 0x18) = 0;
                  UNLOCK();
                }
                else {
                  InternalMessageQueue::postMessage
                            ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                             (long)plVar5);
                }
              }
            }
            goto LAB_00274ab7;
          }
          lVar13 = lVar13 + 8;
        } while ((long)iVar3 * 8 != lVar13);
        uVar11 = *(uint *)(this + 0x25c);
      }
      *(uint *)(this + 0x25c) = uVar11 + 1;
LAB_00274ab7:
      this[0x260] = (TextEditor)0x1;
      LOCK();
      lVar10 = *(long *)(this + 0x248);
      *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
      UNLOCK();
      piVar12 = (int *)(lVar10 + -0x10);
      if (piVar12 != &emptyString) {
        LOCK();
        iVar3 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          operator_delete__(piVar12);
        }
      }
      if (((byte)this[0x220] & 1) != 0) {
        LOCK();
        bVar15 = *(int *)(*(long *)(this + 0x1e8) + 0x18) == 0;
        if (bVar15) {
          *(int *)(*(long *)(this + 0x1e8) + 0x18) = 1;
        }
        UNLOCK();
        if (bVar15) {
          plVar5 = *(long **)(this + 0x1e8);
          if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
             (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
            LOCK();
            *(undefined4 *)(*(long *)(this + 0x1e8) + 0x18) = 0;
            UNLOCK();
          }
          else {
            InternalMessageQueue::postMessage
                      ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                       (long)plVar5);
          }
        }
      }
      this[0x261] = TVar4;
    }
    else {
      LOCK();
      iVar3 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar3 != 0) goto LAB_002748fd;
      operator_delete__(piVar12);
      uVar11 = *(uint *)(this + 0x25c);
      lVar10 = (long)(int)uVar11;
      if (param_1 == '\0') goto LAB_00274a39;
LAB_0027490f:
      if ((*(uint *)(this + 0x234) <= uVar11 - 1) ||
         (plVar5 = *(long **)(*(long *)(this + 0x228) + -8 + lVar10 * 8), plVar5 == (long *)0x0))
      goto LAB_00274807;
      TVar4 = this[0x261];
      this[0x261] = (TextEditor)0x1;
      uVar14 = (ulong)*(uint *)((long)plVar5 + 0xc);
      do {
        if ((int)uVar14 < 1) {
          *(int *)(this + 0x25c) = *(int *)(this + 0x25c) + -1;
          goto LAB_00274b55;
        }
                    /* try { // try from 00274965 to 00274967 has its CatchHandler @ 00274d38 */
        cVar7 = (**(code **)(**(long **)(*plVar5 + -8 + uVar14 * 8) + 0x18))();
        uVar14 = uVar14 - 1;
      } while (cVar7 != '\0');
      pOVar2 = (OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *)(this + 0x228)
      ;
                    /* try { // try from 00274977 to 0027497e has its CatchHandler @ 00274d34 */
      OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection>::deleteAllObjects(pOVar2);
      if (*(int *)(this + 0x230) != 0) {
        free(*(void **)pOVar2);
        *(undefined8 *)pOVar2 = 0;
      }
      *(undefined4 *)(this + 0x230) = 0;
      *(undefined4 *)(this + 0x250) = 0;
      *(undefined4 *)(this + 0x25c) = 0;
      if (((byte)this[0x220] & 1) != 0) {
        LOCK();
        bVar15 = *(int *)(*(long *)(this + 0x1e8) + 0x18) == 0;
        if (bVar15) {
          *(int *)(*(long *)(this + 0x1e8) + 0x18) = 1;
        }
        UNLOCK();
        if (bVar15) {
          plVar5 = *(long **)(this + 0x1e8);
          if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
             (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
            LOCK();
            *(undefined4 *)(*(long *)(this + 0x1e8) + 0x18) = 0;
            UNLOCK();
          }
          else {
            InternalMessageQueue::postMessage
                      ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                       (long)plVar5);
          }
        }
      }
LAB_00274b55:
      this[0x260] = (TextEditor)0x1;
      LOCK();
      lVar10 = *(long *)(this + 0x248);
      *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
      UNLOCK();
      piVar12 = (int *)(lVar10 + -0x10);
      if (piVar12 != &emptyString) {
        LOCK();
        iVar3 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          operator_delete__(piVar12);
        }
      }
      if (((byte)this[0x220] & 1) != 0) {
        LOCK();
        bVar15 = *(int *)(*(long *)(this + 0x1e8) + 0x18) == 0;
        if (bVar15) {
          *(int *)(*(long *)(this + 0x1e8) + 0x18) = 1;
        }
        UNLOCK();
        if (bVar15) {
          plVar5 = *(long **)(this + 0x1e8);
          if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
             (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
            LOCK();
            *(undefined4 *)(*(long *)(this + 0x1e8) + 0x18) = 0;
            UNLOCK();
          }
          else {
            InternalMessageQueue::postMessage
                      ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                       (long)plVar5);
          }
        }
      }
      this[0x261] = TVar4;
    }
    uVar9 = 0;
    lVar10 = 1;
    Component::internalRepaintUnchecked((long)(this + 8),0,*(ulong *)(this + 0x48),'\x01');
    textChanged(this,uVar9,extraout_RDX,lVar10,param_4,param_5);
    uVar9 = scrollToMakeSureCursorIsVisible(this);
    uVar9 = CONCAT71((int7)((ulong)uVar9 >> 8),1);
  }
  else {
LAB_00274807:
    uVar9 = 0;
  }
  return uVar9;
}


