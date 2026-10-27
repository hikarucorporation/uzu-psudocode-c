// Function : perform
// Namespace: juce:UndoManager
// Entry    : 004c22a0
// Prototype: ulong perform(UndoManager * this, long * param_1)
// Body     : 004c22a0 - 004c29b8


/* juce::UndoManager::perform(juce::UndoableAction*) */

ulong __thiscall juce::UndoManager::perform(UndoManager *this,long *param_1)

{
  OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *this_00;
  undefined8 *__dest;
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long *unaff_RBX;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  bool bVar16;
  timeval local_40;
  
  if (param_1 != (long *)0x0) {
                    /* try { // try from 004c22cd to 004c22d2 has its CatchHandler @ 004c29bd */
    if ((this[0x89] == (UndoManager)0x0) &&
       (cVar1 = (**(code **)(*param_1 + 0x10))(param_1), cVar1 != '\0')) {
      if ((*(int *)(this + 0x84) - 1U < *(uint *)(this + 0x5c)) &&
         ((plVar5 = *(long **)(*(long *)(this + 0x50) + -8 + (long)*(int *)(this + 0x84) * 8),
          plVar5 != (long *)0x0 && (this[0x88] == (UndoManager)0x0)))) {
                    /* try { // try from 004c2335 to 004c233d has its CatchHandler @ 004c29b9 */
        if (((0 < *(int *)((long)plVar5 + 0xc)) &&
            (unaff_RBX = *(long **)(*plVar5 + (ulong)(*(int *)((long)plVar5 + 0xc) - 1) * 8),
            unaff_RBX != (long *)0x0)) &&
           (plVar4 = (long *)(**(code **)(*unaff_RBX + 0x28))(unaff_RBX,param_1),
           plVar4 != (long *)0x0)) {
          (**(code **)(*param_1 + 8))(param_1);
                    /* try { // try from 004c2356 to 004c237e has its CatchHandler @ 004c29b9 */
          iVar2 = (**(code **)(*unaff_RBX + 0x20))(unaff_RBX);
          *(int *)(this + 0x78) = *(int *)(this + 0x78) - iVar2;
          iVar2 = *(int *)((long)plVar5 + 0xc);
          param_1 = plVar4;
          if (iVar2 < 2) {
            if (iVar2 == 1) {
              plVar4 = *(long **)*plVar5;
              *(undefined4 *)((long)plVar5 + 0xc) = 0;
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 8))();
              }
            }
            if ((int)plVar5[1] != 0) {
              free((void *)*plVar5);
              *plVar5 = 0;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
          else {
            OwnedArray<juce::UndoableAction,juce::DummyCriticalSection>::removeRange
                      (plVar5,iVar2 + -1);
          }
        }
      }
      else {
                    /* try { // try from 004c23a0 to 004c23a9 has its CatchHandler @ 004c29bb */
        plVar5 = operator_new(0x20);
        *plVar5 = 0;
        plVar5[1] = 0;
        lVar15 = *(long *)(this + 0x70);
        plVar5[2] = lVar15;
        piVar14 = (int *)(lVar15 + -0x10);
        if (piVar14 != &emptyString) {
          LOCK();
          *piVar14 = *piVar14 + 1;
          UNLOCK();
        }
        gettimeofday(&local_40,(__timezone_ptr_t)0x0);
        plVar5[3] = local_40.tv_usec / 1000 + local_40.tv_sec * 1000;
        uVar9 = *(uint *)(this + 0x84);
        lVar15 = (long)(int)uVar9;
        uVar10 = *(uint *)(this + 0x5c);
        if ((int)*(uint *)(this + 0x58) <= (int)uVar10) {
          uVar10 = uVar10 + ((int)((uVar10 - ((int)(uVar10 + 1) >> 0x1f)) + 1) >> 1) + 9 &
                   0xfffffff8;
          if (*(uint *)(this + 0x58) != uVar10) {
            if ((int)uVar10 < 1) {
              free(*(void **)(this + 0x50));
              *(undefined8 *)(this + 0x50) = 0;
            }
            else {
              pvVar6 = realloc(*(void **)(this + 0x50),(ulong)uVar10 << 3);
              *(void **)(this + 0x50) = pvVar6;
            }
          }
          *(uint *)(this + 0x58) = uVar10;
          uVar10 = *(uint *)(this + 0x5c);
        }
        lVar13 = *(long *)(this + 0x50);
        if (uVar9 < uVar10) {
          memmove((void *)(lVar13 + lVar15 * 8 + 8),(void *)(lVar13 + lVar15 * 8),
                  (long)(int)(uVar10 - uVar9) << 3);
          unaff_RBX = (long *)(lVar15 * 8 + *(long *)(this + 0x50));
          uVar10 = *(uint *)(this + 0x5c);
        }
        else {
          unaff_RBX = (long *)(lVar13 + (long)(int)uVar10 * 8);
        }
        *unaff_RBX = (long)plVar5;
        *(uint *)(this + 0x5c) = uVar10 + 1;
        *(int *)(this + 0x84) = *(int *)(this + 0x84) + 1;
      }
                    /* try { // try from 004c24c4 to 004c24c9 has its CatchHandler @ 004c29bb */
      iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + iVar2;
      iVar2 = *(int *)((long)plVar5 + 0xc);
      if ((int)*(uint *)(plVar5 + 1) <= iVar2) {
        uVar9 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        unaff_RBX = (long *)(ulong)uVar9;
        if (*(uint *)(plVar5 + 1) != uVar9) {
          if ((int)uVar9 < 1) {
            free((void *)*plVar5);
            *plVar5 = 0;
          }
          else {
            pvVar6 = realloc((void *)*plVar5,(long)unaff_RBX << 3);
            *plVar5 = (long)pvVar6;
          }
        }
        *(uint *)(plVar5 + 1) = uVar9;
        iVar2 = *(int *)((long)plVar5 + 0xc);
      }
      *(int *)((long)plVar5 + 0xc) = iVar2 + 1;
      *(long **)(*plVar5 + (long)iVar2 * 8) = param_1;
      this[0x88] = (UndoManager)0x0;
      uVar9 = *(uint *)(this + 0x84);
      if ((int)uVar9 < *(int *)(this + 0x5c)) {
        this_00 = (OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *)
                  (this + 0x60);
        OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection>::deleteAllObjects
                  (this_00);
        if (*(int *)(this + 0x68) != 0) {
          free(*(void **)this_00);
          *(undefined8 *)this_00 = 0;
        }
        *(undefined4 *)(this + 0x68) = 0;
        uVar10 = *(uint *)(this + 0x5c);
        uVar9 = *(uint *)(this + 0x84);
        if ((int)uVar9 < (int)uVar10) {
LAB_004c25bc:
          do {
            if (uVar9 < uVar10) {
              lVar15 = *(long *)(this + 0x50);
              lVar13 = (long)(int)uVar9;
              plVar5 = *(long **)(lVar15 + lVar13 * 8);
              memmove((void *)(lVar15 + lVar13 * 8),(void *)(lVar15 + lVar13 * 8 + 8),
                      (long)(int)(uVar10 + ~uVar9) << 3);
              iVar2 = *(int *)(this + 0x5c);
              uVar9 = iVar2 - 1;
              *(uint *)(this + 0x5c) = uVar9;
              if ((*(int *)(this + 0x58) <= iVar2 * 2 + -2) || (*(int *)(this + 0x58) < iVar2))
              goto LAB_004c2632;
              if (iVar2 < 2) {
                free(*(void **)(this + 0x50));
                *(undefined8 *)(this + 0x50) = 0;
              }
              else {
                pvVar6 = realloc(*(void **)(this + 0x50),(ulong)uVar9 << 3);
                *(void **)(this + 0x50) = pvVar6;
              }
              *(uint *)(this + 0x58) = uVar9;
              uVar9 = *(uint *)(this + 0x68);
              iVar2 = *(int *)(this + 0x6c);
              if ((int)uVar9 <= iVar2) goto LAB_004c2640;
            }
            else {
              plVar5 = (long *)0x0;
LAB_004c2632:
              uVar9 = *(uint *)(this + 0x68);
              iVar2 = *(int *)(this + 0x6c);
              if ((int)uVar9 <= iVar2) {
LAB_004c2640:
                uVar10 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
                if (uVar9 != uVar10) {
                  if ((int)uVar10 < 1) {
                    free(*(void **)this_00);
                    *(undefined8 *)this_00 = 0;
                  }
                  else {
                    pvVar6 = realloc(*(void **)this_00,(ulong)uVar10 << 3);
                    *(void **)this_00 = pvVar6;
                  }
                }
                *(uint *)(this + 0x68) = uVar10;
                iVar2 = *(int *)(this + 0x6c);
              }
            }
            *(int *)(this + 0x6c) = iVar2 + 1;
            *(long **)(*(long *)(this + 0x60) + (long)iVar2 * 8) = plVar5;
            iVar2 = *(int *)((long)plVar5 + 0xc);
            if ((long)iVar2 == 0) {
              unaff_RBX = (long *)0x0;
              *(undefined4 *)(this + 0x78) = *(undefined4 *)(this + 0x78);
              uVar10 = *(uint *)(this + 0x5c);
              uVar9 = *(uint *)(this + 0x84);
              if ((int)uVar10 <= (int)uVar9) break;
              goto LAB_004c25bc;
            }
            lVar15 = *plVar5;
            lVar13 = 0;
            unaff_RBX = (long *)0x0;
            do {
              iVar3 = (**(code **)(**(long **)(lVar15 + lVar13) + 0x20))();
              uVar9 = (int)unaff_RBX + iVar3;
              unaff_RBX = (long *)(ulong)uVar9;
              lVar13 = lVar13 + 8;
            } while ((long)iVar2 * 8 != lVar13);
            *(uint *)(this + 0x78) = *(int *)(this + 0x78) - uVar9;
            uVar10 = *(uint *)(this + 0x5c);
            uVar9 = *(uint *)(this + 0x84);
          } while ((int)uVar9 < (int)uVar10);
        }
      }
      if (0 < (int)uVar9) {
        do {
          if ((*(int *)(this + 0x78) <= *(int *)(this + 0x7c)) ||
             (iVar2 = *(int *)(this + 0x5c), iVar2 <= *(int *)(this + 0x80))) break;
          lVar15 = (long)*(int *)(**(long **)(this + 0x50) + 0xc);
          if (lVar15 == 0) {
            *(int *)(this + 0x78) = *(int *)(this + 0x78);
LAB_004c27f5:
            __dest = *(undefined8 **)(this + 0x50);
            plVar5 = (long *)*__dest;
            memmove(__dest,__dest + 1,(long)(iVar2 + -1) << 3);
            iVar2 = *(int *)(this + 0x5c);
            uVar9 = iVar2 - 1;
            unaff_RBX = (long *)(ulong)uVar9;
            *(uint *)(this + 0x5c) = uVar9;
            if ((iVar2 * 2 + -2 < *(int *)(this + 0x58)) && (iVar2 <= *(int *)(this + 0x58))) {
              if (iVar2 < 2) goto LAB_004c2850;
              pvVar6 = realloc(*(void **)(this + 0x50),(ulong)uVar9 << 3);
              *(void **)(this + 0x50) = pvVar6;
LAB_004c2863:
              *(int *)(this + 0x58) = (int)unaff_RBX;
            }
            if (plVar5 != (long *)0x0) {
              piVar14 = (int *)(plVar5[2] + -0x10);
              if (piVar14 != &emptyString) {
                LOCK();
                iVar2 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar2 == 0) {
                  operator_delete__(piVar14);
                }
              }
              uVar9 = *(uint *)((long)plVar5 + 0xc);
              uVar7 = (ulong)uVar9;
              if (0 < (int)uVar9) {
                iVar2 = -uVar9;
                uVar12 = uVar7;
                while( true ) {
                  uVar8 = (ulong)((int)uVar12 - 1);
                  lVar15 = *plVar5;
                  unaff_RBX = *(long **)(lVar15 + uVar8 * 8);
                  memmove((void *)(lVar15 + uVar8 * 8),(void *)(lVar15 + uVar8 * 8 + 8),
                          (long)((int)uVar7 + iVar2) << 3);
                  *(int *)((long)plVar5 + 0xc) = *(int *)((long)plVar5 + 0xc) + -1;
                  if (unaff_RBX != (long *)0x0) {
                    (**(code **)(*unaff_RBX + 8))(unaff_RBX);
                  }
                  if (uVar12 < 2) break;
                  uVar7 = (ulong)*(uint *)((long)plVar5 + 0xc);
                  iVar2 = iVar2 + 1;
                  uVar12 = uVar12 - 1;
                }
              }
              *(undefined4 *)((long)plVar5 + 0xc) = 0;
              free((void *)*plVar5);
              operator_delete(plVar5);
            }
          }
          else {
            lVar13 = *(long *)**(long **)(this + 0x50);
            lVar11 = 0;
            unaff_RBX = (long *)0x0;
            do {
              iVar2 = (**(code **)(**(long **)(lVar13 + lVar11) + 0x20))();
              uVar9 = (int)unaff_RBX + iVar2;
              unaff_RBX = (long *)(ulong)uVar9;
              lVar11 = lVar11 + 8;
            } while (lVar15 * 8 != lVar11);
            iVar2 = *(int *)(this + 0x5c);
            *(uint *)(this + 0x78) = *(int *)(this + 0x78) - uVar9;
            if (iVar2 != 0) goto LAB_004c27f5;
            if (0 < *(int *)(this + 0x58)) {
              unaff_RBX = (long *)0x0;
              plVar5 = (long *)0x0;
LAB_004c2850:
              free(*(void **)(this + 0x50));
              *(undefined8 *)(this + 0x50) = 0;
              goto LAB_004c2863;
            }
          }
          iVar2 = *(int *)(this + 0x84);
          *(int *)(this + 0x84) = iVar2 + -1;
        } while (1 < iVar2);
      }
      uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      if (((byte)this[0x48] & 1) != 0) {
        LOCK();
        bVar16 = *(int *)(*(long *)(this + 0x10) + 0x18) == 0;
        if (bVar16) {
          *(int *)(*(long *)(this + 0x10) + 0x18) = 1;
        }
        UNLOCK();
        if (bVar16) {
          plVar5 = *(long **)(this + 0x10);
          if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
             (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar4 = plVar5 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
            LOCK();
            *(undefined4 *)(*(long *)(this + 0x10) + 0x18) = 0;
            UNLOCK();
          }
          else {
            InternalMessageQueue::postMessage
                      ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                       (long)plVar5);
          }
        }
      }
      goto LAB_004c238f;
    }
    (**(code **)(*param_1 + 8))(param_1);
  }
  uVar7 = 0;
LAB_004c238f:
  return uVar7 & 0xffffffff;
}


