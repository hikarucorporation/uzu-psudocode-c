// Function : handleKeyUpOrDown
// Namespace: juce:ComponentPeer
// Entry    : 002cf3f0
// Prototype: undefined handleKeyUpOrDown(ComponentPeer * this, undefined1 param_1)
// Body     : 002cf3f0 - 002cf654


/* juce::ComponentPeer::handleKeyUpOrDown(bool) */

void __thiscall juce::ComponentPeer::handleKeyUpOrDown(ComponentPeer *this,undefined1 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  ulong uVar7;
  ComponentPeer *pCVar8;
  ComponentPeer *pCVar9;
  long *plVar10;
  uint uVar11;
  
  if (Component::currentlyFocusedComponent != (ComponentPeer *)0x0) {
    this = Component::currentlyFocusedComponent;
  }
  if (ModalComponentManager::singletonHolder != 0) {
    if (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24)) {
      uVar7 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
      do {
        lVar2 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                         (ulong)((int)uVar7 - 2) * 8);
        if (*(char *)(lVar2 + 0x5c) != '\0') {
          pCVar9 = *(ComponentPeer **)(lVar2 + 0x40);
          if ((pCVar9 != (ComponentPeer *)0x0) && (pCVar9 != this)) {
            pCVar8 = this;
            goto LAB_002cf470;
          }
          break;
        }
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
    }
  }
  goto joined_r0x002cf4d8;
  while (pCVar8 = *(ComponentPeer **)(pCVar8 + 0x30), pCVar8 != pCVar9) {
LAB_002cf470:
    if (pCVar8 == (ComponentPeer *)0x0) {
      cVar6 = (**(code **)(*(long *)pCVar9 + 0x170))(pCVar9,this);
      if (cVar6 == '\0') {
        if ((ModalComponentManager::singletonHolder == 0) ||
           ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1)) {
          pCVar9 = (ComponentPeer *)0x0;
          goto LAB_002cf4ce;
        }
        uVar7 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        pCVar9 = (ComponentPeer *)0x0;
        goto LAB_002cf4ad;
      }
      break;
    }
  }
  goto joined_r0x002cf4d8;
  while (uVar7 = uVar7 - 1, 1 < uVar7) {
LAB_002cf4ad:
    lVar2 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                     (ulong)((int)uVar7 - 2) * 8);
    if (*(char *)(lVar2 + 0x5c) != '\0') {
      pCVar9 = *(ComponentPeer **)(lVar2 + 0x40);
      break;
    }
  }
LAB_002cf4ce:
  if (pCVar9 != (ComponentPeer *)0x0) {
    this = pCVar9;
  }
joined_r0x002cf4d8:
  do {
    if (this == (ComponentPeer *)0x0) {
      return;
    }
    plVar10 = *(long **)(this + 0xd8);
    if (plVar10 == (long *)0x0) {
      plVar10 = operator_new(0x18);
      *(undefined4 *)(plVar10 + 1) = 0;
      *plVar10 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar10[2] = (long)this;
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      plVar3 = *(long **)(this + 0xd8);
      *(long **)(this + 0xd8) = plVar10;
      if (plVar3 == (long *)0x0) goto LAB_002cf500;
      LOCK();
      plVar10 = plVar3 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar10 = *(long **)(this + 0xd8);
      if (plVar10 != (long *)0x0) goto LAB_002cf500;
      plVar10 = (long *)0x0;
    }
    else {
LAB_002cf500:
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
                    /* try { // try from 002cf509 to 002cf514 has its CatchHandler @ 002cf655 */
    cVar6 = (**(code **)(*(long *)this + 0x110))(this,param_1);
    if (cVar6 == '\0') {
      if (plVar10 == (long *)0x0) {
        return;
      }
      if (plVar10[2] == 0) goto LAB_002cf5a0;
      plVar3 = *(long **)(this + 0x98);
      bVar5 = true;
      if (plVar3 == (long *)0x0) goto LAB_002cf5a3;
      uVar11 = *(uint *)((long)plVar3 + 0xc);
      while (0 < (int)uVar11) {
        uVar11 = uVar11 - 1;
        plVar4 = *(long **)(*plVar3 + (ulong)uVar11 * 8);
                    /* try { // try from 002cf56e to 002cf576 has its CatchHandler @ 002cf65f */
        cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,param_1,this);
        if ((cVar6 != '\0') || (plVar10[2] == 0)) {
          bVar5 = false;
          break;
        }
        if ((int)*(uint *)((long)plVar3 + 0xc) < (int)uVar11) {
          uVar11 = *(uint *)((long)plVar3 + 0xc);
        }
      }
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      iVar1 = (int)*plVar3;
      UNLOCK();
    }
    else {
      if (plVar10 == (long *)0x0) {
        return;
      }
LAB_002cf5a0:
      bVar5 = false;
LAB_002cf5a3:
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      iVar1 = (int)*plVar3;
      UNLOCK();
    }
    if (iVar1 == 0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    if (!bVar5) {
      return;
    }
    this = *(ComponentPeer **)(this + 0x30);
  } while( true );
}


