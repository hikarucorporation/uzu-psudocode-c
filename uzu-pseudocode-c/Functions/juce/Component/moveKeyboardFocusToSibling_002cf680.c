// Function : moveKeyboardFocusToSibling
// Namespace: juce:Component
// Entry    : 002cf680
// Prototype: undefined moveKeyboardFocusToSibling(Component * this, byte param_1)
// Body     : 002cf680 - 002cf9c0


/* juce::Component::moveKeyboardFocusToSibling(bool) */

void __thiscall juce::Component::moveKeyboardFocusToSibling(Component *this,byte param_1)

{
  Component *pCVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  Component *this_00;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  Component *pCVar8;
  long *local_50;
  long *local_48;
  long *local_40;
  
  if (*(long *)(this + 0x30) == 0) {
    return;
  }
  (**(code **)(*(long *)this + 0xd8))(&local_50,this);
  if (local_50 != (long *)0x0) {
                    /* try { // try from 002cf6cc to 002cf80a has its CatchHandler @ 002cf9de */
    this_00 = (Component *)(**(code **)(*local_50 + 0x18 + (ulong)(param_1 ^ 1) * 8))(local_50,this)
    ;
    if (this_00 != (Component *)0x0) {
LAB_002cf6db:
      if ((ModalComponentManager::singletonHolder != 0) &&
         (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
        uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        do {
          lVar6 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                           (ulong)((int)uVar5 - 2) * 8);
          if (*(char *)(lVar6 + 0x5c) != '\0') {
            pCVar1 = *(Component **)(lVar6 + 0x40);
            if ((pCVar1 != (Component *)0x0) && (pCVar1 != this_00)) {
              pCVar8 = this_00;
              goto LAB_002cf7c0;
            }
            break;
          }
          uVar5 = uVar5 - 1;
        } while (1 < uVar5);
      }
      goto LAB_002cf7f1;
    }
    lVar6 = *(long *)(this + 0x30);
    do {
      bVar3 = true;
      if (lVar6 == 0) goto LAB_002cf80d;
    } while (((*(ushort *)(lVar6 + 0xe8) & 0x80) == 0) &&
            (lVar6 = *(long *)(lVar6 + 0x30), lVar6 != 0));
    (**(code **)(*local_50 + 0x28))(&local_48);
    if (local_48 == local_40) {
      this_00 = (Component *)0x0;
    }
    else {
      plVar7 = local_40 + -1;
      if (param_1 != 0) {
        plVar7 = local_48;
      }
      this_00 = (Component *)*plVar7;
    }
    if (local_48 != (long *)0x0) {
      operator_delete(local_48);
    }
    if ((local_48 != local_40) && (this_00 != (Component *)0x0)) goto LAB_002cf6db;
    goto LAB_002cf80d;
  }
  goto LAB_002cf821;
  while (pCVar8 = *(Component **)(pCVar8 + 0x30), pCVar8 != pCVar1) {
LAB_002cf7c0:
    if (pCVar8 == (Component *)0x0) {
      cVar4 = (**(code **)(*(long *)pCVar1 + 0x170))(pCVar1,this_00);
      if (cVar4 == '\0') {
        plVar7 = *(long **)(this_00 + 0xd8);
        if (plVar7 == (long *)0x0) {
                    /* try { // try from 002cf892 to 002cf89b has its CatchHandler @ 002cf9dc */
          plVar7 = operator_new(0x18);
          *(undefined4 *)(plVar7 + 1) = 0;
          *plVar7 = (long)&PTR__ReferenceCountedObject_00714b80;
          plVar7[2] = (long)this_00;
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          plVar2 = *(long **)(this_00 + 0xd8);
          *(long **)(this_00 + 0xd8) = plVar7;
          if (plVar2 == (long *)0x0) goto LAB_002cf849;
          LOCK();
          plVar7 = plVar2 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
          plVar7 = *(long **)(this_00 + 0xd8);
          if (plVar7 != (long *)0x0) goto LAB_002cf849;
          plVar7 = (long *)0x0;
        }
        else {
LAB_002cf849:
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        if ((ModalComponentManager::singletonHolder == 0) ||
           ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1)) goto LAB_002cf918;
        uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        goto LAB_002cf872;
      }
      break;
    }
  }
  goto LAB_002cf7f1;
  while (uVar5 = uVar5 - 1, 1 < uVar5) {
LAB_002cf872:
    lVar6 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                     (ulong)((int)uVar5 - 2) * 8);
    if (*(char *)(lVar6 + 0x5c) != '\0') {
      plVar2 = *(long **)(lVar6 + 0x40);
      if (plVar2 != (long *)0x0) {
                    /* try { // try from 002cf912 to 002cf988 has its CatchHandler @ 002cf9c1 */
        (**(code **)(*plVar2 + 0x178))();
      }
      break;
    }
  }
LAB_002cf918:
  if (plVar7 != (long *)0x0) {
    if (plVar7[2] != 0) {
      if ((ModalComponentManager::singletonHolder != 0) &&
         (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
        uVar5 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        do {
          lVar6 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                           (ulong)((int)uVar5 - 2) * 8);
          if (*(char *)(lVar6 + 0x5c) != '\0') {
            pCVar1 = *(Component **)(lVar6 + 0x40);
            if ((pCVar1 != (Component *)0x0) && (pCVar1 != this_00)) {
              pCVar8 = this_00;
              goto LAB_002cf96d;
            }
            break;
          }
          uVar5 = uVar5 - 1;
        } while (1 < uVar5);
      }
      goto LAB_002cf98d;
    }
LAB_002cf9a7:
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
  }
  goto LAB_002cf80b;
  while (pCVar8 = *(Component **)(pCVar8 + 0x30), pCVar8 != pCVar1) {
LAB_002cf96d:
    if (pCVar8 == (Component *)0x0) {
      cVar4 = (**(code **)(*(long *)pCVar1 + 0x170))(pCVar1,this_00);
      if (cVar4 == '\0') goto LAB_002cf9a7;
      break;
    }
  }
LAB_002cf98d:
  LOCK();
  plVar2 = plVar7 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
LAB_002cf7f1:
  grabKeyboardFocusInternal(this_00,1,'\x01',2 - (uint)param_1);
LAB_002cf80b:
  bVar3 = false;
LAB_002cf80d:
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 8))();
  }
  if (bVar3) {
LAB_002cf821:
    moveKeyboardFocusToSibling(*(Component **)(this + 0x30),param_1);
  }
  return;
}


