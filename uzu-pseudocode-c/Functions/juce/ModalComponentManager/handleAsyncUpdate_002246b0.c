// Function : handleAsyncUpdate
// Namespace: juce:ModalComponentManager
// Entry    : 002246b0
// Prototype: undefined handleAsyncUpdate(ModalComponentManager * this)
// Body     : 002246b0 - 002249f6


/* juce::ModalComponentManager::handleAsyncUpdate() */

void __thiscall juce::ModalComponentManager::handleAsyncUpdate(ModalComponentManager *this)

{
  ComponentMovementWatcher CVar1;
  uint uVar2;
  ComponentMovementWatcher *pCVar3;
  long *plVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  void *pvVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ComponentMovementWatcher *this_00;
  
  uVar15 = (ulong)*(uint *)(this + 0x24);
  if (0 < (int)*(uint *)(this + 0x24)) {
    do {
      uVar16 = uVar15 - 1;
      pCVar3 = *(ComponentMovementWatcher **)(*(long *)(this + 0x18) + (uVar16 & 0xffffffff) * 8);
      if (pCVar3[0x5c] == (ComponentMovementWatcher)0x0) {
        if ((uint)uVar16 < *(uint *)(this + 0x24)) {
          pvVar8 = (void *)(*(long *)(this + 0x18) + (uVar16 & 0xffffffff) * 8);
          memmove(pvVar8,(void *)((long)pvVar8 + 8),
                  (long)(int)(*(uint *)(this + 0x24) - (int)uVar15) << 3);
          iVar17 = *(int *)(this + 0x24);
          uVar2 = iVar17 - 1;
          *(uint *)(this + 0x24) = uVar2;
          this_00 = pCVar3;
          if ((*(int *)(this + 0x20) <= iVar17 * 2 + -2) || (*(int *)(this + 0x20) < iVar17))
          goto LAB_0022479a;
          if (iVar17 < 2) {
            free(*(void **)(this + 0x18));
            *(undefined8 *)(this + 0x18) = 0;
            *(uint *)(this + 0x20) = uVar2;
            CVar1 = pCVar3[0x5d];
            goto joined_r0x0022479e;
          }
          pvVar8 = realloc(*(void **)(this + 0x18),(ulong)uVar2 << 3);
          *(void **)(this + 0x18) = pvVar8;
          *(uint *)(this + 0x20) = uVar2;
          if (pCVar3[0x5d] != (ComponentMovementWatcher)0x0) goto LAB_002247a4;
LAB_00224840:
          plVar9 = (long *)0x0;
        }
        else {
          this_00 = (ComponentMovementWatcher *)0x0;
LAB_0022479a:
          CVar1 = pCVar3[0x5d];
joined_r0x0022479e:
          if (CVar1 == (ComponentMovementWatcher)0x0) goto LAB_00224840;
LAB_002247a4:
          lVar11 = *(long *)(pCVar3 + 0x40);
          if (lVar11 == 0) goto LAB_00224840;
          plVar9 = *(long **)(lVar11 + 0xd8);
          if (plVar9 == (long *)0x0) {
                    /* try { // try from 002247c8 to 002247d1 has its CatchHandler @ 002249f7 */
            plVar9 = operator_new(0x18);
            *(undefined4 *)(plVar9 + 1) = 0;
            *plVar9 = (long)&PTR__ReferenceCountedObject_00714b80;
            plVar9[2] = lVar11;
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            plVar4 = *(long **)(lVar11 + 0xd8);
            *(long **)(lVar11 + 0xd8) = plVar9;
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar9 = plVar4 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)(*plVar4 + 8))();
              }
              plVar9 = *(long **)(lVar11 + 0xd8);
              if (plVar9 == (long *)0x0) goto LAB_00224840;
            }
          }
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        for (uVar12 = (ulong)*(uint *)(pCVar3 + 0x54); 0 < (int)uVar12; uVar12 = uVar12 - 1) {
          plVar4 = *(long **)(*(long *)(pCVar3 + 0x48) + -8 + uVar12 * 8);
                    /* try { // try from 00224867 to 00224869 has its CatchHandler @ 00224a06 */
          (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined4 *)(pCVar3 + 0x58));
        }
        if (plVar9 != (long *)0x0) {
          if ((long *)plVar9[2] != (long *)0x0) {
            (**(code **)(*(long *)plVar9[2] + 8))();
          }
          LOCK();
          plVar4 = plVar9 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
        }
        if ((detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance
             == '\0') &&
           (iVar17 = __cxa_guard_acquire(&detail::ComponentHelpers::
                                          ModalComponentManagerChangeNotifier::getInstance()::
                                          instance), iVar17 != 0)) {
          detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance.
          _8_8_ = detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::
                  instance;
          detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance.
          _0_8_ = detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::
                  instance;
          detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance.
          _16_8_ = 0;
          detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance.
          _24_8_ = 0;
          detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance.
          _32_8_ = 0;
          __cxa_atexit(detail::ComponentHelpers::ModalComponentManagerChangeNotifier::
                       ~ModalComponentManagerChangeNotifier,
                       detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()
                       ::instance,&__dso_handle);
          __cxa_guard_release(&detail::ComponentHelpers::ModalComponentManagerChangeNotifier::
                               getInstance()::instance);
        }
        uVar7 = detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::
                instance._24_8_;
        lVar11 = (long)(int)detail::ComponentHelpers::ModalComponentManagerChangeNotifier::
                            getInstance()::instance._36_4_;
        if (lVar11 != 0) {
          lVar13 = 0;
          do {
            lVar5 = *(long *)(uVar7 + lVar13);
            if (lVar5 != 0) {
              if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002249f2 to 002249f6 has its CatchHandler @ 00224a01 */
                std::__throw_bad_function_call();
              }
                    /* try { // try from 002248dd to 002248df has its CatchHandler @ 002249fc */
              (**(code **)(lVar5 + 0x18))();
            }
            lVar13 = lVar13 + 8;
          } while (lVar11 * 8 != lVar13);
        }
        if (this_00 != (ComponentMovementWatcher *)0x0) {
          if ((this_00[0x5d] != (ComponentMovementWatcher)0x0) &&
             (*(long **)(this_00 + 0x40) != (long *)0x0)) {
            (**(code **)(**(long **)(this_00 + 0x40) + 8))();
          }
          uVar2 = *(uint *)(this_00 + 0x54);
          uVar12 = (ulong)uVar2;
          if (0 < (int)uVar2) {
            iVar17 = -uVar2;
            uVar14 = uVar12;
            while( true ) {
              uVar10 = (ulong)((int)uVar14 - 1);
              lVar11 = *(long *)(this_00 + 0x48);
              plVar9 = *(long **)(lVar11 + uVar10 * 8);
              memmove((void *)(lVar11 + uVar10 * 8),(void *)(lVar11 + uVar10 * 8 + 8),
                      (long)((int)uVar12 + iVar17) << 3);
              *(int *)(this_00 + 0x54) = *(int *)(this_00 + 0x54) + -1;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              if (uVar14 < 2) break;
              uVar12 = (ulong)*(uint *)(this_00 + 0x54);
              iVar17 = iVar17 + 1;
              uVar14 = uVar14 - 1;
            }
          }
          *(undefined4 *)(this_00 + 0x54) = 0;
          free(*(void **)(this_00 + 0x48));
          ComponentMovementWatcher::~ComponentMovementWatcher(this_00);
          operator_delete(this_00);
        }
      }
      bVar6 = 1 < (long)uVar15;
      uVar15 = uVar16;
    } while (bVar6);
  }
  return;
}


