// Function : handleDragMove
// Namespace: juce:ComponentPeer
// Entry    : 002cbf20
// Prototype: undefined handleDragMove(ComponentPeer * this, long param_1)
// Body     : 002cbf20 - 002cc32e


/* juce::ComponentPeer::handleDragMove(juce::ComponentPeer::DragInfo const&) */

void __thiscall juce::ComponentPeer::handleDragMove(ComponentPeer *this,long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  Component *pCVar4;
  Component *pCVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  pointer_____offset_0x10___ *ppuVar11;
  
  pCVar4 = Component::getComponentAt
                     (CONCAT44((float)(int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                               (float)(int)*(undefined8 *)(param_1 + 0x18)),
                      *(Component **)(this + 8));
  if (*(long *)(this + 0x90) == 0) {
    pCVar5 = (Component *)0x0;
  }
  else {
    pCVar5 = *(Component **)(*(long *)(this + 0x90) + 0x10);
  }
  if (pCVar4 != *(Component **)(this + 0x98)) {
    *(Component **)(this + 0x98) = pCVar4;
    if (pCVar4 != (Component *)0x0) {
      do {
        iVar2 = *(int *)(param_1 + 0xc);
        ppuVar11 = &FileDragAndDropTarget::typeinfo;
        if (iVar2 == 0) {
          ppuVar11 = &TextDragAndDropTarget::typeinfo;
        }
        lVar6 = __dynamic_cast(pCVar4,&Component::typeinfo,ppuVar11,0xfffffffffffffffe);
        if (lVar6 != 0) {
          if (pCVar4 == pCVar5) goto LAB_002cc09b;
          if (iVar2 == 0) {
            plVar7 = (long *)__dynamic_cast(pCVar4,&Component::typeinfo,
                                            &TextDragAndDropTarget::typeinfo,0xfffffffffffffffe);
            cVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_1 + 0x10);
          }
          else {
            plVar7 = (long *)__dynamic_cast(pCVar4,&Component::typeinfo,
                                            &FileDragAndDropTarget::typeinfo,0xfffffffffffffffe);
            cVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,param_1);
          }
          if (cVar3 != '\0') goto LAB_002cc059;
        }
        pCVar4 = *(Component **)(pCVar4 + 0x30);
      } while (pCVar4 != (Component *)0x0);
    }
    pCVar4 = (Component *)0x0;
LAB_002cc059:
    if (pCVar4 != pCVar5) {
      if (pCVar5 != (Component *)0x0) {
        if (*(int *)(param_1 + 0xc) == 0) {
          plVar7 = (long *)__dynamic_cast(pCVar5,&Component::typeinfo,
                                          &TextDragAndDropTarget::typeinfo,0xfffffffffffffffe);
          lVar6 = param_1 + 0x10;
          lVar10 = *plVar7;
        }
        else {
          plVar7 = (long *)__dynamic_cast(pCVar5,&Component::typeinfo,
                                          &FileDragAndDropTarget::typeinfo,0xfffffffffffffffe);
          lVar10 = *plVar7;
          lVar6 = param_1;
        }
        (**(code **)(lVar10 + 0x28))(plVar7,lVar6);
      }
      plVar7 = *(long **)(this + 0x90);
      *(undefined8 *)(this + 0x90) = 0;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      if (pCVar4 == (Component *)0x0) {
        return;
      }
      ppuVar11 = &FileDragAndDropTarget::typeinfo;
      if (*(int *)(param_1 + 0xc) == 0) {
        ppuVar11 = &TextDragAndDropTarget::typeinfo;
      }
      lVar6 = __dynamic_cast(pCVar4,&Component::typeinfo,ppuVar11,0xfffffffffffffffe);
      pCVar5 = pCVar4;
      if (lVar6 == 0) goto LAB_002cc26a;
      puVar9 = *(undefined8 **)(pCVar4 + 0xd8);
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = operator_new(0x18);
        *(undefined4 *)(puVar9 + 1) = 0;
        *puVar9 = &PTR__ReferenceCountedObject_00714b80;
        puVar9[2] = pCVar4;
        LOCK();
        *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
        UNLOCK();
        plVar7 = *(long **)(pCVar4 + 0xd8);
        *(undefined8 **)(pCVar4 + 0xd8) = puVar9;
        if (plVar7 == (long *)0x0) goto LAB_002cc14e;
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
        puVar9 = *(undefined8 **)(pCVar4 + 0xd8);
        if (puVar9 != (undefined8 *)0x0) goto LAB_002cc14e;
        plVar7 = *(long **)(this + 0x90);
        *(undefined8 *)(this + 0x90) = 0;
      }
      else {
LAB_002cc14e:
        LOCK();
        *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
        UNLOCK();
        plVar7 = *(long **)(this + 0x90);
        *(undefined8 **)(this + 0x90) = puVar9;
      }
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      uVar8 = detail::ComponentHelpers::convertCoordinate<juce::Point<int>>
                        ((long *)pCVar4,*(long **)(this + 8),*(ulong *)(param_1 + 0x18));
      if (*(int *)(param_1 + 0xc) == 0) {
        plVar7 = (long *)__dynamic_cast(pCVar4,&Component::typeinfo,&TextDragAndDropTarget::typeinfo
                                        ,0xfffffffffffffffe);
        lVar6 = param_1 + 0x10;
        lVar10 = *plVar7;
      }
      else {
        plVar7 = (long *)__dynamic_cast(pCVar4,&Component::typeinfo,&FileDragAndDropTarget::typeinfo
                                        ,0xfffffffffffffffe);
        lVar10 = *plVar7;
        lVar6 = param_1;
      }
      (**(code **)(lVar10 + 0x18))(plVar7,lVar6,uVar8 & 0xffffffff,uVar8 >> 0x20);
      goto LAB_002cc26a;
    }
  }
LAB_002cc09b:
  if (pCVar5 == (Component *)0x0) {
    return;
  }
LAB_002cc26a:
  ppuVar11 = &FileDragAndDropTarget::typeinfo;
  if (*(int *)(param_1 + 0xc) == 0) {
    ppuVar11 = &TextDragAndDropTarget::typeinfo;
  }
  lVar6 = __dynamic_cast(pCVar5,&Component::typeinfo,ppuVar11,0xfffffffffffffffe);
  if (lVar6 == 0) {
    return;
  }
  uVar8 = detail::ComponentHelpers::convertCoordinate<juce::Point<int>>
                    ((long *)pCVar5,*(long **)(this + 8),*(ulong *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0xc) == 0) {
    plVar7 = (long *)__dynamic_cast(pCVar5,&Component::typeinfo,&TextDragAndDropTarget::typeinfo,
                                    0xfffffffffffffffe);
    param_1 = param_1 + 0x10;
  }
  else {
    plVar7 = (long *)__dynamic_cast(pCVar5,&Component::typeinfo,&FileDragAndDropTarget::typeinfo,
                                    0xfffffffffffffffe);
  }
                    /* WARNING: Could not recover jumptable at 0x002cc32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x20))
            (plVar7,param_1,uVar8 & 0xffffffff,uVar8 >> 0x20,*(code **)(*plVar7 + 0x20));
  return;
}


