// Function : timerCallback
// Namespace: juce:ComponentAnimator
// Entry    : 001e1170
// Prototype: undefined timerCallback(ComponentAnimator * this)
// Body     : 001e1170 - 001e19d6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ComponentAnimator::timerCallback() */

void __thiscall juce::ComponentAnimator::timerCallback(ComponentAnimator *this)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  Component *this_00;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  int iVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  long *local_78;
  long *local_60;
  timespec local_40;
  
  clock_gettime(1,&local_40);
  auVar2 = SEXT816(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) *
           SEXT816(0x20c49ba5e353f7cf);
  uVar18 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
  if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar18) ||
     (uVar18 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
    LOCK();
    UNLOCK();
    _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar18;
  }
  uVar5 = *(uint *)(this + 0x88);
  if (*(uint *)(this + 0x88) == 0) {
    *(uint *)(this + 0x88) = uVar18;
    uVar5 = uVar18;
  }
  pvVar12 = *(void **)(this + 0x78);
  uVar9 = *(uint *)(this + 0x84);
  if ((long)(int)uVar9 < 1) {
    local_78 = (long *)0x0;
    if (uVar9 == 0) goto LAB_001e1994;
    local_60 = (long *)((long)(int)uVar9 << 3);
    local_78 = (long *)0x0;
  }
  else {
    uVar14 = uVar9 + (uVar9 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar14 < 1) {
      local_78 = (long *)0x0;
    }
    else {
      local_78 = malloc((ulong)uVar14 << 3);
    }
    memcpy(local_78,pvVar12,(ulong)uVar9 * 8);
    local_60 = local_78 + uVar9;
  }
  plVar17 = local_78;
  if (uVar9 != 0) goto LAB_001e12b3;
LAB_001e1980:
  plVar17 = plVar17 + 1;
  if (plVar17 != local_60) {
    while( true ) {
      pvVar12 = *(void **)(this + 0x78);
      uVar9 = *(uint *)(this + 0x84);
      if (uVar9 == 0) break;
LAB_001e12b3:
      plVar16 = (long *)*plVar17;
      uVar13 = 0;
      while (*(long **)((long)pvVar12 + uVar13) != plVar16) {
        uVar13 = uVar13 + 8;
        if ((long)(int)uVar9 * 8 == uVar13) goto LAB_001e1980;
      }
      if (((plVar16[1] == 0) ||
          (this_00 = *(Component **)(plVar16[1] + 0x10), this_00 == (Component *)0x0)) &&
         ((*plVar16 == 0 ||
          (this_00 = *(Component **)(*plVar16 + 0x10), this_00 == (Component *)0x0)))) {
LAB_001e1630:
        if ((*plVar16 != 0) && (*(long *)(*plVar16 + 0x10) != 0)) {
          plVar10 = (long *)plVar16[0x10];
          if (plVar10 == (long *)0x0) {
                    /* try { // try from 001e1674 to 001e167d has its CatchHandler @ 001e19f3 */
            plVar10 = operator_new(0x18);
            *(undefined4 *)(plVar10 + 1) = 0;
            *plVar10 = (long)&PTR__ReferenceCountedObject_0070e370;
            plVar10[2] = (long)plVar16;
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            plVar15 = (long *)plVar16[0x10];
            plVar16[0x10] = (long)plVar10;
            if (plVar15 == (long *)0x0) goto LAB_001e1653;
            LOCK();
            plVar10 = plVar15 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)(*plVar15 + 8))();
            }
            plVar10 = (long *)plVar16[0x10];
            if (plVar10 != (long *)0x0) goto LAB_001e1653;
            plVar10 = (long *)0x0;
            lVar11 = *plVar16;
            if (lVar11 != 0) goto LAB_001e1660;
LAB_001e16d1:
            plVar15 = (long *)0x0;
          }
          else {
LAB_001e1653:
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            lVar11 = *plVar16;
            if (lVar11 == 0) goto LAB_001e16d1;
LAB_001e1660:
            plVar15 = *(long **)(lVar11 + 0x10);
          }
          iVar8 = SUB84((double)(float)(double)plVar16[4] * DAT_005de5f8 + DAT_005d9098,0);
          if (0xfe < iVar8) {
            iVar8 = 0xff;
          }
          if (iVar8 < 1) {
            iVar8 = 0;
          }
          if (*(byte *)((long)plVar15 + 0xec) != (byte)~(byte)iVar8) {
            *(byte *)((long)plVar15 + 0xec) = ~(byte)iVar8;
                    /* try { // try from 001e1721 to 001e1785 has its CatchHandler @ 001e19f8 */
            (**(code **)(*plVar15 + 0xe8))();
            lVar11 = *plVar16;
          }
          Component::setBounds
                    (*(Component **)(lVar11 + 0x10),(int)plVar16[2],(int)((ulong)plVar16[2] >> 0x20)
                     ,(int)plVar16[3],(int)((ulong)plVar16[3] >> 0x20));
          if ((plVar10 == (long *)0x0) || (plVar10[2] != 0)) {
            if ((plVar16[1] != 0) && (*(long *)(plVar16[1] + 0x10) != 0)) {
              (**(code **)(**(long **)(*plVar16 + 0x10) + 0x60))
                        (*(long **)(*plVar16 + 0x10),DAT_005db340 < (double)plVar16[4]);
            }
            if (plVar10 == (long *)0x0) goto LAB_001e17a0;
          }
          LOCK();
          plVar15 = plVar10 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      else {
        iVar8 = (int)plVar16[5] + (uVar18 - uVar5);
        *(int *)(plVar16 + 5) = iVar8;
        dVar23 = (double)iVar8 / (double)*(int *)((long)plVar16 + 0x2c);
        if ((dVar23 < DAT_005db340) || (_DAT_005d9000 <= dVar23)) goto LAB_001e1630;
        plVar10 = (long *)plVar16[0x10];
        if (plVar10 == (long *)0x0) {
                    /* try { // try from 001e14c3 to 001e14cc has its CatchHandler @ 001e19f3 */
          plVar10 = operator_new(0x18);
          *(undefined4 *)(plVar10 + 1) = 0;
          iVar8 = 0x70e370;
          *plVar10 = (long)&PTR__ReferenceCountedObject_0070e370;
          plVar10[2] = (long)plVar16;
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          plVar15 = (long *)plVar16[0x10];
          plVar16[0x10] = (long)plVar10;
          if (plVar15 == (long *)0x0) goto LAB_001e1361;
          LOCK();
          plVar10 = plVar15 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          iVar8 = 0x70e370;
          if ((int)*plVar10 == 0) {
            iVar8 = (**(code **)(*plVar15 + 8))();
          }
          plVar10 = (long *)plVar16[0x10];
          if (plVar10 != (long *)0x0) goto LAB_001e1361;
          plVar10 = (long *)0x0;
        }
        else {
LAB_001e1361:
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        dVar24 = _DAT_005d9000;
        dVar29 = (double)plVar16[6];
        dVar1 = (double)plVar16[7];
        if (DAT_005db338 <= dVar23) {
          dVar23 = ((dVar1 - dVar29) * DAT_005db338 + dVar29) * DAT_005db338 +
                   (((double)plVar16[8] - dVar1) * (dVar23 + DAT_00652be8) + dVar1) *
                   (dVar23 + DAT_00652be8);
        }
        else {
          dVar23 = ((dVar1 - dVar29) * dVar23 + dVar29) * dVar23;
        }
        dVar29 = (dVar23 - (double)plVar16[9]) / (_DAT_005d9000 - (double)plVar16[9]);
        plVar16[9] = (long)dVar23;
        bVar19 = true;
        if (dVar29 < dVar24) {
          if ((char)plVar16[0xf] == '\0') {
LAB_001e14bc:
            bVar6 = false;
          }
          else {
            iVar25 = (int)plVar16[2];
            iVar3 = (int)((ulong)plVar16[2] >> 0x20);
            dVar23 = ((double)iVar25 - (double)plVar16[10]) * dVar29 + (double)plVar16[10];
            dVar1 = ((double)iVar3 - (double)plVar16[0xb]) * dVar29 + (double)plVar16[0xb];
            auVar2._8_4_ = SUB84(dVar1,0);
            auVar2._0_8_ = dVar23;
            auVar2._12_4_ = (int)((ulong)dVar1 >> 0x20);
            *(undefined1 (*) [16])(plVar16 + 10) = auVar2;
            iVar22 = (int)plVar16[3];
            iVar4 = (int)((ulong)plVar16[3] >> 0x20);
            dVar24 = ((double)(iVar22 + iVar25) - (double)plVar16[0xc]) * dVar29 +
                     (double)plVar16[0xc];
            dVar26 = ((double)(iVar4 + iVar3) - (double)plVar16[0xd]) * dVar29 +
                     (double)plVar16[0xd];
            plVar16[0xc] = (long)dVar24;
            plVar16[0xd] = (long)dVar26;
            iVar20 = SUB84(dVar23 + _DAT_005d9a90,0);
            iVar21 = SUB84(dVar1 + _UNK_005d9a98,0);
            auVar28._0_4_ = -(uint)(iVar25 == iVar20);
            auVar28._4_4_ = -(uint)(iVar25 == iVar20);
            auVar28._8_4_ = -(uint)(iVar3 == iVar21);
            auVar28._12_4_ = -(uint)(iVar3 == iVar21);
            uVar9 = movmskpd(iVar8,auVar28);
            iVar8 = SUB84((dVar24 - dVar23) + _DAT_005d9a90,0);
            iVar25 = SUB84((dVar26 - dVar1) + _UNK_005d9a98,0);
            if ((((uVar9 ^ 3) & 1) == 0) && (bVar7 = (byte)(uVar9 ^ 3) >> 1, bVar7 == 0)) {
              auVar27._0_4_ = -(uint)(iVar22 == iVar8);
              auVar27._4_4_ = -(uint)(iVar22 == iVar8);
              auVar27._8_4_ = -(uint)(iVar4 == iVar25);
              auVar27._12_4_ = -(uint)(iVar4 == iVar25);
              uVar9 = movmskpd(CONCAT31((int3)(uVar9 >> 8),bVar7),auVar27);
              if ((((uVar9 ^ 3) & 1) == 0) && ((byte)((byte)(uVar9 ^ 3) >> 1) == 0))
              goto LAB_001e14bc;
            }
            bVar6 = true;
                    /* try { // try from 001e1550 to 001e1563 has its CatchHandler @ 001e19d9 */
            Component::setBounds(this_00,iVar20,iVar21,iVar8,iVar25);
          }
          if ((plVar10 == (long *)0x0) || (plVar10[2] != 0)) {
            if (*(char *)((long)plVar16 + 0x79) == '\0') {
              uVar13 = 1;
              bVar19 = true;
              if (!bVar6) goto LAB_001e1604;
            }
            else {
              dVar23 = ((double)plVar16[4] - (double)plVar16[0xe]) * dVar29 + (double)plVar16[0xe];
              iVar8 = SUB84((double)(float)dVar23 * DAT_005de5f8 + DAT_005d9098,0);
              if (0xfe < iVar8) {
                iVar8 = 0xff;
              }
              plVar16[0xe] = (long)dVar23;
              if (iVar8 < 1) {
                iVar8 = 0;
              }
              uVar13 = 1;
              if (this_00[0xec] != (Component)~(byte)iVar8) {
                this_00[0xec] = (Component)~(byte)iVar8;
                    /* try { // try from 001e15e6 to 001e15f0 has its CatchHandler @ 001e19d7 */
                (**(code **)(*(long *)this_00 + 0xe8))();
                uVar13 = 1;
              }
            }
          }
          else {
            uVar13 = 0;
          }
          bVar19 = false;
        }
LAB_001e1604:
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar15 = plVar10 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            uVar13 = uVar13 & 0xffffffff;
            (**(code **)(*plVar10 + 8))();
          }
        }
        if (bVar19) goto LAB_001e1630;
        if ((uVar13 & 1) != 0) break;
      }
LAB_001e17a0:
      uVar9 = *(uint *)(this + 0x84);
      if (0 < (int)uVar9) {
        lVar11 = *(long *)(this + 0x78);
        uVar13 = 0;
        do {
          if (*(long **)(lVar11 + uVar13 * 8) == plVar16) {
            if ((uint)uVar13 < uVar9) {
              plVar16 = *(long **)(lVar11 + uVar13 * 8);
              memmove((void *)(lVar11 + uVar13 * 8),(void *)(lVar11 + uVar13 * 8 + 8),
                      (long)(int)(~(uint)uVar13 + uVar9) << 3);
              uVar9 = *(int *)(this + 0x84) - 1;
              *(uint *)(this + 0x84) = uVar9;
              iVar8 = *(int *)(this + 0x80);
              if ((int)(uVar9 * 2) < iVar8) {
LAB_001e182c:
                if ((int)uVar9 < iVar8) {
                  if ((int)uVar9 < 1) {
                    free(*(void **)(this + 0x78));
                    *(undefined8 *)(this + 0x78) = 0;
                  }
                  else {
                    pvVar12 = realloc(*(void **)(this + 0x78),(ulong)uVar9 << 3);
                    *(void **)(this + 0x78) = pvVar12;
                  }
                  *(uint *)(this + 0x80) = uVar9;
                }
              }
            }
            else {
              plVar16 = (long *)0x0;
              iVar8 = *(int *)(this + 0x80);
              if ((int)(uVar9 * 2) < iVar8) goto LAB_001e182c;
            }
            if (plVar16 != (long *)0x0) {
              plVar10 = (long *)plVar16[1];
              plVar16[1] = 0;
              if (plVar10 != (long *)0x0) {
                if ((long *)plVar10[2] != (long *)0x0) {
                  (**(code **)(*(long *)plVar10[2] + 8))();
                }
                LOCK();
                plVar15 = plVar10 + 1;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)*plVar15 == 0) {
                  (**(code **)(*plVar10 + 8))(plVar10);
                }
              }
              plVar10 = (long *)plVar16[0x10];
              if (plVar10 != (long *)0x0) {
                plVar10[2] = 0;
                LOCK();
                plVar15 = plVar10 + 1;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)*plVar15 == 0) {
                  (**(code **)(*plVar10 + 8))();
                }
              }
              plVar10 = (long *)plVar16[1];
              if (plVar10 != (long *)0x0) {
                LOCK();
                plVar15 = plVar10 + 1;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)*plVar15 == 0) {
                  (**(code **)(*plVar10 + 8))();
                }
              }
              plVar10 = (long *)*plVar16;
              if (plVar10 != (long *)0x0) {
                LOCK();
                plVar15 = plVar10 + 1;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)*plVar15 == 0) {
                  (**(code **)(*plVar10 + 8))();
                }
              }
              operator_delete(plVar16);
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar9 != uVar13);
      }
      if (((byte)this[0x48] & 1) == 0) break;
      LOCK();
      bVar19 = *(int *)(*(long *)(this + 0x10) + 0x18) == 0;
      if (bVar19) {
        *(int *)(*(long *)(this + 0x10) + 0x18) = 1;
      }
      UNLOCK();
      if (!bVar19) break;
      plVar16 = *(long **)(this + 0x10);
      if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
         (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar16 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)(*plVar16 + 8))();
        }
        LOCK();
        *(undefined4 *)(*(long *)(this + 0x10) + 0x18) = 0;
        UNLOCK();
        break;
      }
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar16)
      ;
      plVar17 = plVar17 + 1;
      if (plVar17 == local_60) goto LAB_001e1994;
    }
    goto LAB_001e1980;
  }
LAB_001e1994:
  free(local_78);
  *(uint *)(this + 0x88) = uVar18;
  if (*(int *)(this + 0x84) == 0) {
    Timer::stopTimer((Timer *)(this + 0x50));
    return;
  }
  return;
}


