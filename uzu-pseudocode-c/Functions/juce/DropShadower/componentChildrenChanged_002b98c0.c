// Function : componentChildrenChanged
// Namespace: juce:DropShadower
// Entry    : 002b98c0
// Prototype: undefined componentChildrenChanged(long param_1)
// Body     : 002b98c0 - 002b98c4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::DropShadower::componentChildrenChanged(juce::Component&) */

void __cdecl juce::DropShadower::componentChildrenChanged(long param_1)

{
  int iVar1;
  int iVar2;
  Component *this;
  undefined8 uVar3;
  uint uVar4;
  Component *pCVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 *puVar8;
  Desktop *pDVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  Component *pCVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  int iVar24;
  bool bVar25;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (((((*(long *)(param_1 + 8) != 0) &&
          (pCVar5 = *(Component **)(*(long *)(param_1 + 8) + 0x10), pCVar5 != (Component *)0x0)) &&
         (uVar4 = Component::isShowing(pCVar5), (char)uVar4 != '\0')) &&
        ((*(long *)(param_1 + 8) != 0 &&
         (lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x10), 0 < *(int *)(lVar18 + 0x40))))) &&
       (0 < *(int *)(lVar18 + 0x44))) {
      SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                 XWindowSystem::singletonHolder);
      lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if ((*(long *)(lVar18 + 0x30) != 0) &&
         ((*(long *)(param_1 + 0x48) == 0 || (*(char *)(*(long *)(param_1 + 0x48) + 0x39) == '\0')))
         ) {
        uVar4 = *(uint *)(param_1 + 0x1c);
        if ((int)uVar4 < 4) {
          do {
            pCVar5 = operator_new(0x108);
            if (*(long *)(param_1 + 8) == 0) {
              lVar18 = 0;
            }
            else {
              lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x10);
            }
            *(undefined1 **)(pCVar5 + 8) = &DAT_0061ac58;
            *(undefined1 **)(pCVar5 + 0x10) = &DAT_0061ac58;
            *(undefined1 **)(pCVar5 + 0x18) = &DAT_0061ac58;
            *(undefined1 **)(pCVar5 + 0x20) = &DAT_0061ac58;
            *(undefined1 **)(pCVar5 + 0x28) = &DAT_0061ac58;
            *(undefined8 *)(pCVar5 + 0x30) = 0;
            *(undefined8 *)(pCVar5 + 0x38) = 0;
            *(undefined8 *)(pCVar5 + 0x40) = 0;
            *(undefined8 *)(pCVar5 + 0x48) = 0;
            *(undefined8 *)(pCVar5 + 0x50) = 0;
            *(undefined8 *)(pCVar5 + 0x58) = 0;
            *(undefined8 *)(pCVar5 + 0x60) = 0;
            *(undefined8 *)(pCVar5 + 0x68) = 0;
            *(undefined8 *)(pCVar5 + 0x70) = 0;
            *(undefined8 *)(pCVar5 + 0x78) = 0;
            *(undefined8 *)(pCVar5 + 0x80) = 0;
            *(undefined8 *)(pCVar5 + 0x88) = 0;
            *(undefined8 *)(pCVar5 + 0x90) = 0;
            *(undefined8 *)(pCVar5 + 0x98) = 0;
            *(undefined8 *)(pCVar5 + 0xa0) = 0;
            *(undefined8 *)(pCVar5 + 0xa8) = 0;
            *(undefined8 *)(pCVar5 + 0xb0) = 0;
            *(undefined8 *)(pCVar5 + 0xb8) = 0;
            *(undefined4 *)(pCVar5 + 0xc0) = 0;
            *(undefined8 *)(pCVar5 + 200) = 0;
            *(undefined8 *)(pCVar5 + 0xd0) = 0;
            *(undefined8 *)(pCVar5 + 0xd8) = 0;
            *(undefined8 *)(pCVar5 + 0xe0) = 0;
            *(undefined8 *)(pCVar5 + 0xe5) = 0;
            *(undefined ***)pCVar5 = &PTR__ShadowWindow_0070fc18;
            if (lVar18 == 0) {
              *(undefined8 *)(pCVar5 + 0xf0) = 0;
            }
            else {
              puVar8 = *(undefined8 **)(lVar18 + 0xd8);
              if (puVar8 == (undefined8 *)0x0) {
                puVar8 = operator_new(0x18);
                *(undefined4 *)(puVar8 + 1) = 0;
                *puVar8 = &PTR__ReferenceCountedObject_00714b80;
                puVar8[2] = lVar18;
                LOCK();
                *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
                UNLOCK();
                plVar7 = *(long **)(lVar18 + 0xd8);
                *(undefined8 **)(lVar18 + 0xd8) = puVar8;
                if (plVar7 != (long *)0x0) {
                  LOCK();
                  plVar16 = plVar7 + 1;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  if ((int)*plVar16 == 0) {
                    (**(code **)(*plVar7 + 8))();
                  }
                  lVar10 = *(long *)(lVar18 + 0xd8);
                  *(long *)(pCVar5 + 0xf0) = lVar10;
                  if (lVar10 != 0) {
                    LOCK();
                    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                    UNLOCK();
                  }
                  goto LAB_0028c615;
                }
              }
              *(undefined8 **)(pCVar5 + 0xf0) = puVar8;
              LOCK();
              *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
              UNLOCK();
            }
LAB_0028c615:
            uVar3 = *(undefined8 *)(param_1 + 0x28);
            *(undefined8 *)(pCVar5 + 0xf8) = *(undefined8 *)(param_1 + 0x20);
            *(undefined8 *)(pCVar5 + 0x100) = uVar3;
            Component::setVisible(pCVar5,1);
            uVar4 = *(uint3 *)(pCVar5 + 0xe8) | 0x200000;
            *(undefined2 *)(pCVar5 + 0xe8) = *(undefined2 *)(pCVar5 + 0xe8);
            pCVar5[0xea] = SUB41(uVar4 >> 0x10,0);
            plVar7 = *(long **)(pCVar5 + 0xe0);
            *(undefined8 *)(pCVar5 + 0xe0) = 0;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 8))();
              uVar4 = (uint)*(uint3 *)(pCVar5 + 0xe8);
            }
            pCVar5[0xea] = SUB41(uVar4 >> 0x10,0);
            *(ushort *)(pCVar5 + 0xe8) = (ushort)uVar4 & 0xffe7 | 8;
            if ((*(ushort *)(lVar18 + 0xe8) & 1) == 0) {
              if (*(Component **)(lVar18 + 0x30) != (Component *)0x0) {
                Component::addChildComponent(*(Component **)(lVar18 + 0x30),pCVar5,0xffffffff);
              }
            }
            else {
              Component::setBounds(pCVar5,*(int *)(pCVar5 + 0x38),*(int *)(pCVar5 + 0x3c),1,1);
              Component::addToDesktop(pCVar5,0x406,0);
            }
            iVar24 = *(int *)(param_1 + 0x1c);
            if ((int)*(uint *)(param_1 + 0x18) <= iVar24) {
              uVar4 = iVar24 + ((iVar24 - (iVar24 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
              if (*(uint *)(param_1 + 0x18) != uVar4) {
                if ((int)uVar4 < 1) {
                  free(*(void **)(param_1 + 0x10));
                  *(undefined8 *)(param_1 + 0x10) = 0;
                }
                else {
                  pvVar6 = realloc(*(void **)(param_1 + 0x10),(ulong)uVar4 << 3);
                  *(void **)(param_1 + 0x10) = pvVar6;
                }
              }
              *(uint *)(param_1 + 0x18) = uVar4;
              iVar24 = *(int *)(param_1 + 0x1c);
            }
            uVar4 = iVar24 + 1;
            *(uint *)(param_1 + 0x1c) = uVar4;
            *(Component **)(*(long *)(param_1 + 0x10) + (long)iVar24 * 8) = pCVar5;
          } while (iVar24 < 3);
          lVar18 = *(long *)(*(long *)(param_1 + 8) + 0x10);
        }
        iVar24 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
          iVar24 = *(int *)(param_1 + 0x2c);
        }
        iVar24 = iVar24 + *(int *)(param_1 + 0x24);
        iVar1 = *(int *)(lVar18 + 0x38);
        iVar22 = *(int *)(lVar18 + 0x3c) - iVar24;
        iVar2 = *(int *)(lVar18 + 0x40);
        iVar17 = iVar24 * 2 + *(int *)(lVar18 + 0x44);
        uVar23 = 3;
        lVar18 = 4;
        if (uVar4 < 4) goto LAB_0028cb7c;
LAB_0028c811:
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + uVar23 * 8);
        if (lVar10 == 0) goto LAB_0028cb7c;
        plVar7 = *(long **)(lVar10 + 0xd8);
        if (plVar7 == (long *)0x0) {
          plVar7 = operator_new(0x18);
          *(undefined4 *)(plVar7 + 1) = 0;
          *plVar7 = (long)&PTR__ReferenceCountedObject_00714b80;
          plVar7[2] = lVar10;
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          plVar16 = *(long **)(lVar10 + 0xd8);
          *(long **)(lVar10 + 0xd8) = plVar7;
          if (plVar16 != (long *)0x0) {
            LOCK();
            plVar7 = plVar16 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)(*plVar16 + 8))();
            }
            plVar7 = *(long **)(lVar10 + 0xd8);
            if (plVar7 == (long *)0x0) goto LAB_0028cb7c;
          }
        }
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        if ((Component *)plVar7[2] == (Component *)0x0) goto LAB_0028cb64;
        Component::setAlwaysOnTop
                  ((Component *)plVar7[2],
                   *(ushort *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0xe8) >> 0xb & 1);
        pCVar5 = (Component *)plVar7[2];
        if (pCVar5 != (Component *)0x0) {
          switch((int)lVar18) {
          case 1:
            Component::setBounds(pCVar5,iVar1 - iVar24,iVar22,iVar24,iVar17);
            break;
          case 2:
            Component::setBounds(pCVar5,iVar2 + iVar1,iVar22,iVar24,iVar17);
            break;
          case 3:
            Component::setBounds(pCVar5,iVar1,iVar22,iVar2,iVar24);
            break;
          case 4:
            lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x10);
            Component::setBounds
                      (pCVar5,iVar1,*(int *)(lVar10 + 0x44) + *(int *)(lVar10 + 0x3c),iVar2,iVar24);
            pCVar5 = (Component *)plVar7[2];
            if (pCVar5 == (Component *)0x0) goto LAB_0028cb9b;
            goto LAB_0028c9a9;
          default:
            goto juce_DropShadower_updateShadows_switchD_0028c893_default;
          }
          pCVar5 = (Component *)plVar7[2];
          if (pCVar5 != (Component *)0x0) {
juce_DropShadower_updateShadows_switchD_0028c893_default:
            if (uVar23 == 3) {
LAB_0028c9a9:
              if (*(long *)(param_1 + 8) == 0) goto LAB_0028cb64;
              puVar8 = (undefined8 *)(*(long *)(param_1 + 8) + 0x10);
            }
            else {
              puVar8 = (undefined8 *)(lVar18 * 8 + *(long *)(param_1 + 0x10));
            }
            pCVar19 = (Component *)*puVar8;
            if ((pCVar19 != (Component *)0x0) && (pCVar19 != pCVar5)) {
              this = *(Component **)(pCVar5 + 0x30);
              if (this == (Component *)0x0) {
                if (((*(ushort *)(pCVar5 + 0xe8) & 1) != 0) &&
                   ((*(ushort *)(pCVar19 + 0xe8) & 1) != 0)) {
                  if (Desktop::instance == (Desktop *)0x0) {
                    pDVar9 = operator_new(0x1d0);
                    Desktop::Desktop(pDVar9);
                    Desktop::instance = pDVar9;
                  }
                  lVar10 = *(long *)(Desktop::instance + 0xd0);
                  iVar14 = *(int *)(Desktop::instance + 0xdc);
                  lVar13 = (long)iVar14;
                  if (lVar13 == 0) {
                    plVar16 = (long *)0x0;
                  }
                  else {
                    lVar12 = 0;
                    do {
                      plVar16 = *(long **)(lVar10 + lVar12);
                      if ((Component *)plVar16[1] == pCVar5) goto LAB_0028cae9;
                      lVar12 = lVar12 + 8;
                    } while (lVar13 * 8 != lVar12);
                    plVar16 = (long *)0x0;
                  }
LAB_0028cae9:
                  do {
                    if ((*(ushort *)(pCVar19 + 0xe8) & 1) != 0) {
                      if (Desktop::instance == (Desktop *)0x0) {
                        pDVar9 = operator_new(0x1d0);
                        Desktop::Desktop(pDVar9);
                        lVar10 = *(long *)(pDVar9 + 0xd0);
                        iVar14 = *(int *)(pDVar9 + 0xdc);
                        lVar13 = (long)iVar14;
                        Desktop::instance = pDVar9;
                      }
                      if (iVar14 != 0) {
                        lVar12 = 0;
                        goto LAB_0028cb3e;
                      }
                      break;
                    }
                    pCVar19 = *(Component **)(pCVar19 + 0x30);
                  } while (pCVar19 != (Component *)0x0);
                }
              }
              else {
                uVar4 = *(uint *)(this + 100);
                if ((long)(int)uVar4 != 0) {
                  lVar13 = *(long *)(this + 0x58);
                  lVar10 = (long)(int)uVar4 * 8;
                  lVar21 = 0;
                  lVar12 = lVar10;
                  do {
                    if (*(Component **)(lVar13 + lVar21 * 8) == pCVar5) {
                      uVar20 = (uint)lVar21;
                      if (-1 < (int)uVar20) {
                        if ((uint)(lVar21 + 1U) < uVar4) {
                          pCVar5 = *(Component **)(lVar13 + (lVar21 + 1U & 0xffffffff) * 8);
                        }
                        else {
                          pCVar5 = (Component *)0x0;
                        }
                        if (pCVar5 != pCVar19) {
                          lVar12 = 0;
                          iVar14 = 0;
                          goto LAB_0028cab4;
                        }
                      }
                      break;
                    }
                    lVar21 = lVar21 + 1;
                    lVar12 = lVar12 + -8;
                  } while (lVar12 != 0);
                }
              }
            }
            goto LAB_0028cb64;
          }
        }
LAB_0028cb9b:
        LOCK();
        plVar16 = plVar7 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        goto LAB_0028c4ee;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x1c);
    uVar23 = (ulong)uVar4;
    if (0 < (int)uVar4) {
      iVar24 = -uVar4;
      uVar15 = uVar23;
      while( true ) {
        uVar11 = (ulong)((int)uVar15 - 1);
        lVar18 = *(long *)(param_1 + 0x10);
        plVar7 = *(long **)(lVar18 + uVar11 * 8);
        memmove((void *)(lVar18 + uVar11 * 8),(void *)(lVar18 + uVar11 * 8 + 8),
                (long)((int)uVar23 + iVar24) << 3);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        if (uVar15 < 2) break;
        uVar23 = (ulong)*(uint *)(param_1 + 0x1c);
        iVar24 = iVar24 + 1;
        uVar15 = uVar15 - 1;
      }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      free(*(void **)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
LAB_0028c4ee:
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
  while (lVar12 = lVar12 + 8, lVar13 * 8 != lVar12) {
LAB_0028cb3e:
    if (*(Component **)(*(long *)(lVar10 + lVar12) + 8) == pCVar19) {
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0xe0))(plVar16);
      }
      break;
    }
  }
  goto LAB_0028cb64;
  while( true ) {
    iVar14 = iVar14 + -1;
    lVar12 = lVar12 + 8;
    if (lVar10 == lVar12) break;
LAB_0028cab4:
    if (*(Component **)(lVar13 + lVar12) == pCVar19) {
      if (-1 < -iVar14) {
        Component::reorderChildInternal(this,uVar20,-((uint)((int)uVar20 < -iVar14) + iVar14));
      }
      break;
    }
  }
LAB_0028cb64:
  LOCK();
  plVar16 = plVar7 + 1;
  *(int *)plVar16 = (int)*plVar16 + -1;
  UNLOCK();
  if ((int)*plVar16 == 0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
LAB_0028cb7c:
  do {
    bVar25 = uVar23 == 0;
    uVar23 = uVar23 - 1;
    if (bVar25) goto LAB_0028c4ee;
    lVar18 = lVar18 + -1;
  } while (*(uint *)(param_1 + 0x1c) <= uVar23);
  goto LAB_0028c811;
}


