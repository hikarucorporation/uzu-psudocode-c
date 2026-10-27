// Function : componentMovedOrResized
// Namespace: juce:Viewport
// Entry    : 00263870
// Prototype: undefined componentMovedOrResized(Viewport * param_1)
// Body     : 00263870 - 00263874


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Viewport::componentMovedOrResized(juce::Component&, bool, bool) */

void __cdecl juce::Viewport::componentMovedOrResized(Viewport *param_1)

{
  long *plVar1;
  Component *pCVar2;
  Viewport VVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  Component *this;
  long *plVar7;
  Component *this_00;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  bool bVar15;
  undefined8 uVar16;
  int iVar17;
  ulong unaff_RBX;
  int iVar18;
  uint uVar19;
  ComponentHelpers *pCVar20;
  int iVar21;
  int iVar22;
  char cVar23;
  ulong uVar24;
  ulong in_R10;
  int iVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_34;
  
  iVar25 = *(int *)(param_1 + 0x218);
  bVar8 = iVar25 < *(int *)(param_1 + 0x40);
  bVar9 = iVar25 < *(int *)(param_1 + 0x44);
  bVar26 = param_1[0x228] != (Viewport)0x0;
  bVar15 = bVar26 && (bVar9 && bVar8);
  bVar27 = param_1[0x229] != (Viewport)0x0;
  pCVar2 = (Component *)(param_1 + 0x110);
  iVar13 = 2;
  if (bVar15) goto LAB_00242590;
LAB_00242560:
  uVar24 = 0;
  if (!bVar27 || (!bVar9 || !bVar8)) goto LAB_002425ad;
LAB_0024256e:
  bVar28 = *(char *)(*(long *)(param_1 + 0x100) + 0x17e) == '\0';
  do {
    iVar17 = *(int *)(param_1 + 0x40);
    iVar22 = *(int *)(param_1 + 0x44);
    uVar14 = *(ulong *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x200);
    if ((lVar4 == 0) || (lVar5 = *(long *)(lVar4 + 0x10), lVar5 == 0)) {
LAB_002426a0:
      if (bVar28) goto LAB_002426a9;
LAB_00242740:
      uVar19 = 0;
      uStack_34 = 0;
      iVar18 = 0;
      iVar17 = 0;
      if ((char)uVar24 != '\0') goto LAB_00242756;
    }
    else {
      uVar6 = *(ulong *)(lVar5 + 0x38);
      iVar18 = (int)*(undefined8 *)(lVar5 + 0x40) + (int)uVar6;
      iVar21 = (int)((ulong)*(undefined8 *)(lVar5 + 0x40) >> 0x20) + (int)(uVar6 >> 0x20);
      unaff_RBX = 0x8000000080000000;
      if (((uVar6 & 0x8000000080000000) == 0) && ((iVar18 <= iVar17 && (iVar21 <= iVar22))))
      goto LAB_002426a0;
      cVar23 = (char)uVar24;
      uVar24 = CONCAT71(0x80000000800000,bVar15) & 0xffffffff;
      if (cVar23 == '\0' && (bVar26 && (bVar9 && bVar8))) {
        uVar24 = CONCAT71((int7)(uVar24 >> 8),(int)uVar6 < 0 || iVar17 < iVar18);
      }
      if (!bVar28 && (bVar27 && (bVar9 && bVar8))) {
        if (((long)uVar6 < 0) || (iVar22 < iVar21)) goto LAB_00242658;
LAB_0024264e:
        bVar28 = false;
      }
      else {
        if (!(bVar27 && (bVar9 && bVar8))) goto LAB_0024264e;
LAB_00242658:
        uVar14 = CONCAT44(iVar22,iVar17 - iVar25);
        bVar28 = true;
      }
      if ((char)uVar24 != '\0') {
        uVar14 = uVar14 & 0xffffffff | (ulong)(uint)(iVar22 - iVar25) << 0x20;
      }
      unaff_RBX = 0x8000000080000000;
      iVar11 = (int)(uVar14 >> 0x20);
      if ((((uVar6 & 0x8000000080000000) == 0) && (iVar18 <= (int)uVar14)) && (iVar21 <= iVar11))
      goto LAB_002426a0;
      uVar19 = (uint)((int)uVar14 < iVar18);
      if ((char)uVar24 != '\0') {
        uVar19 = (uint)bVar15;
      }
      if (!bVar26 || (!bVar9 || !bVar8)) {
        uVar19 = (uint)bVar15;
      }
      uVar24 = (ulong)uVar19;
      if (!(bVar28 || (!bVar27 || (!bVar9 || !bVar8)))) {
        if (iVar11 < iVar21) goto LAB_002426a9;
        goto LAB_00242740;
      }
      if (!(bVar27 && (bVar9 && bVar8))) goto LAB_00242740;
LAB_002426a9:
      uVar14 = (ulong)(uint)(iVar17 - iVar25) | uVar14 & 0xffffffff00000000;
      uVar19 = (uint)CONCAT71((int7)(unaff_RBX >> 8),1);
      bVar10 = true;
      bVar28 = true;
      if ((char)uVar24 == '\0') {
        VVar3 = param_1[0x22e];
        uStack_34 = uVar19;
      }
      else {
LAB_00242756:
        uVar14 = uVar14 & 0xffffffff | (ulong)(uint)(iVar22 - iVar25) << 0x20;
        bVar10 = false;
        bVar28 = false;
        VVar3 = param_1[0x22e];
        uStack_34 = uVar19;
      }
      iVar18 = iVar25;
      if (VVar3 != (Viewport)0x0) {
        iVar18 = 0;
        bVar28 = bVar10;
      }
      if ((char)uStack_34 == '\0') {
        iVar18 = 0;
      }
      iVar17 = 0;
      if (param_1[0x22f] == (Viewport)0x0) {
        iVar17 = iVar25;
      }
      if (bVar28) {
        iVar17 = 0;
      }
    }
    iVar21 = (int)uVar14;
    iVar22 = (int)(uVar14 >> 0x20);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)) {
      Component::setBounds(pCVar2,iVar18,iVar17,iVar21,iVar22);
      if ((*(long *)(param_1 + 0x200) != 0) &&
         (pCVar20 = *(ComponentHelpers **)(*(long *)(param_1 + 0x200) + 0x10),
         pCVar20 != (ComponentHelpers *)0x0)) {
        uVar14 = (ulong)*(uint *)(pCVar20 + 0x40);
        goto LAB_0024283d;
      }
      uVar12 = 0;
      uVar16 = 0;
LAB_00242868:
      iVar11 = -(int)uVar12;
      pCVar2 = *(Component **)(param_1 + 0x100);
      this = *(Component **)(param_1 + 0x108);
      iVar13 = 0;
      if (param_1[0x22f] != (Viewport)0x0) {
        iVar13 = iVar22;
      }
      Component::setBounds(this,iVar18,iVar13,iVar21,iVar25);
      dVar30 = (double)(int)uVar16;
      dVar32 = 0.0;
      if (dVar30 <= 0.0) {
        dVar30 = 0.0;
      }
      dVar29 = *(double *)(this + 0x128);
      if ((dVar29 != 0.0) || (NAN(dVar29))) {
LAB_002428d8:
        *(undefined8 *)(this + 0x128) = 0;
        *(double *)(this + 0x130) = dVar30;
        dVar29 = *(double *)(this + 0x138);
        dVar31 = *(double *)(this + 0x140);
        if (dVar31 - dVar29 < dVar30) {
          dVar30 = dVar30 - (dVar31 - dVar29);
          if (dVar29 <= dVar30) {
            dVar30 = dVar29;
          }
          dVar32 = (double)(~-(ulong)(dVar29 < 0.0) & (ulong)dVar30);
          dVar30 = (dVar32 - dVar29) + dVar31;
          if (dVar30 <= dVar32) {
            dVar30 = dVar32;
          }
        }
        if ((dVar29 != dVar32) || (NAN(dVar29) || NAN(dVar32))) {
LAB_00242942:
          *(double *)(this + 0x138) = dVar32;
          *(double *)(this + 0x140) = dVar30;
          ScrollBar::updateThumbPosition((ScrollBar *)this);
          LOCK();
          bVar15 = *(int *)(*(long *)(this + 0xf8) + 0x18) == 0;
          if (bVar15) {
            *(int *)(*(long *)(this + 0xf8) + 0x18) = 1;
          }
          UNLOCK();
          if (bVar15) {
            plVar7 = *(long **)(this + 0xf8);
            if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0))
               || (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar7 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar7 + 8))(plVar7);
              }
              LOCK();
              *(undefined4 *)(*(long *)(this + 0xf8) + 0x18) = 0;
              UNLOCK();
            }
            else {
              InternalMessageQueue::postMessage
                        ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                         (long)plVar7);
            }
          }
        }
        else if ((dVar31 != dVar30) || (NAN(dVar31) || NAN(dVar30))) goto LAB_00242942;
        ScrollBar::updateThumbPosition((ScrollBar *)this);
        dVar29 = *(double *)(this + 0x128);
        dVar31 = *(double *)(this + 0x130);
      }
      else {
        dVar31 = *(double *)(this + 0x130);
        if ((dVar31 != dVar30) || (NAN(dVar31) || NAN(dVar30))) goto LAB_002428d8;
      }
      dVar32 = (double)iVar11;
      dVar30 = (double)iVar21 + dVar32;
      if ((double)iVar21 + dVar32 <= dVar32) {
        dVar30 = dVar32;
      }
      if (dVar30 - dVar32 < dVar31 - dVar29) {
        dVar31 = dVar31 - (dVar30 - dVar32);
        if (dVar32 <= dVar31) {
          dVar31 = dVar32;
        }
        dVar29 = (double)(-(ulong)(dVar32 < dVar29) & (ulong)dVar29 |
                         ~-(ulong)(dVar32 < dVar29) & (ulong)dVar31);
        dVar31 = dVar30 + (dVar29 - dVar32);
        if (dVar31 <= dVar29) {
          dVar31 = dVar29;
        }
      }
      if ((*(double *)(this + 0x138) != dVar29) || (NAN(*(double *)(this + 0x138)) || NAN(dVar29)))
      {
LAB_00242a69:
        *(double *)(this + 0x138) = dVar29;
        *(double *)(this + 0x140) = dVar31;
        ScrollBar::updateThumbPosition((ScrollBar *)this);
        LOCK();
        bVar15 = *(int *)(*(long *)(this + 0xf8) + 0x18) == 0;
        if (bVar15) {
          *(int *)(*(long *)(this + 0xf8) + 0x18) = 1;
        }
        UNLOCK();
        if (bVar15) {
          plVar7 = *(long **)(this + 0xf8);
          if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
             (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar7 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar7 + 8))(plVar7);
            }
            LOCK();
            *(undefined4 *)(*(long *)(this + 0xf8) + 0x18) = 0;
            UNLOCK();
          }
          else {
            InternalMessageQueue::postMessage
                      ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                       (long)plVar7);
          }
        }
      }
      else if ((*(double *)(this + 0x140) != dVar31) ||
              (NAN(*(double *)(this + 0x140)) || NAN(dVar31))) goto LAB_00242a69;
      iVar18 = -(int)((ulong)uVar12 >> 0x20);
      iVar13 = iVar11;
      if ((char)uVar24 == '\0') {
        iVar13 = 0;
      }
      *(double *)(this + 0x148) = (double)*(int *)(param_1 + 0x21c);
      if (!bVar26 || (!bVar9 || !bVar8)) {
        iVar13 = iVar11;
      }
      iVar11 = 0;
      if (param_1[0x22e] != (Viewport)0x0) {
        iVar11 = iVar21;
      }
      Component::setBounds(pCVar2,iVar11,iVar17,iVar25,iVar22);
      iVar25 = (int)((ulong)uVar16 >> 0x20);
      dVar30 = (double)iVar25;
      dVar32 = 0.0;
      if (dVar30 <= 0.0) {
        dVar30 = 0.0;
      }
      dVar29 = *(double *)(pCVar2 + 0x128);
      if ((dVar29 != 0.0) || (NAN(dVar29))) {
LAB_00242b80:
        *(undefined8 *)(pCVar2 + 0x128) = 0;
        *(double *)(pCVar2 + 0x130) = dVar30;
        dVar29 = *(double *)(pCVar2 + 0x138);
        dVar31 = *(double *)(pCVar2 + 0x140);
        if (dVar31 - dVar29 < dVar30) {
          dVar30 = dVar30 - (dVar31 - dVar29);
          if (dVar29 <= dVar30) {
            dVar30 = dVar29;
          }
          dVar32 = (double)(~-(ulong)(dVar29 < 0.0) & (ulong)dVar30);
          dVar30 = (dVar32 - dVar29) + dVar31;
          if (dVar30 <= dVar32) {
            dVar30 = dVar32;
          }
        }
        if ((dVar29 != dVar32) || (NAN(dVar29) || NAN(dVar32))) {
LAB_00242bea:
          *(double *)(pCVar2 + 0x138) = dVar32;
          *(double *)(pCVar2 + 0x140) = dVar30;
          ScrollBar::updateThumbPosition((ScrollBar *)pCVar2);
          LOCK();
          bVar15 = *(int *)(*(long *)(pCVar2 + 0xf8) + 0x18) == 0;
          if (bVar15) {
            *(int *)(*(long *)(pCVar2 + 0xf8) + 0x18) = 1;
          }
          UNLOCK();
          if (bVar15) {
            plVar7 = *(long **)(pCVar2 + 0xf8);
            if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0))
               || (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar7 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar7 + 8))(plVar7);
              }
              LOCK();
              *(undefined4 *)(*(long *)(pCVar2 + 0xf8) + 0x18) = 0;
              UNLOCK();
            }
            else {
              InternalMessageQueue::postMessage
                        ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                         (long)plVar7);
            }
          }
        }
        else if ((dVar31 != dVar30) || (NAN(dVar31) || NAN(dVar30))) goto LAB_00242bea;
        ScrollBar::updateThumbPosition((ScrollBar *)pCVar2);
        dVar29 = *(double *)(pCVar2 + 0x128);
        dVar31 = *(double *)(pCVar2 + 0x130);
      }
      else {
        dVar31 = *(double *)(pCVar2 + 0x130);
        if ((dVar31 != dVar30) || (NAN(dVar31) || NAN(dVar30))) goto LAB_00242b80;
      }
      dVar32 = (double)iVar18;
      dVar30 = (double)iVar22 + dVar32;
      if ((double)iVar22 + dVar32 <= dVar32) {
        dVar30 = dVar32;
      }
      if (dVar30 - dVar32 < dVar31 - dVar29) {
        dVar31 = dVar31 - (dVar30 - dVar32);
        if (dVar32 <= dVar31) {
          dVar31 = dVar32;
        }
        dVar29 = (double)(-(ulong)(dVar32 < dVar29) & (ulong)dVar29 |
                         ~-(ulong)(dVar32 < dVar29) & (ulong)dVar31);
        dVar31 = dVar30 + (dVar29 - dVar32);
        if (dVar31 <= dVar29) {
          dVar31 = dVar29;
        }
      }
      if ((*(double *)(pCVar2 + 0x138) == dVar29) &&
         (!NAN(*(double *)(pCVar2 + 0x138)) && !NAN(dVar29))) {
        if ((*(double *)(pCVar2 + 0x140) == dVar31) &&
           (!NAN(*(double *)(pCVar2 + 0x140)) && !NAN(dVar31))) goto LAB_00242d7b;
      }
      *(double *)(pCVar2 + 0x138) = dVar29;
      *(double *)(pCVar2 + 0x140) = dVar31;
      ScrollBar::updateThumbPosition((ScrollBar *)pCVar2);
      LOCK();
      bVar15 = *(int *)(*(long *)(pCVar2 + 0xf8) + 0x18) == 0;
      if (bVar15) {
        *(int *)(*(long *)(pCVar2 + 0xf8) + 0x18) = 1;
      }
      UNLOCK();
      if (bVar15) {
        plVar7 = *(long **)(pCVar2 + 0xf8);
        if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
           (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar7 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar7 + 8))(plVar7,(uint)uVar24);
          }
          LOCK();
          *(undefined4 *)(*(long *)(pCVar2 + 0xf8) + 0x18) = 0;
          UNLOCK();
        }
        else {
          InternalMessageQueue::postMessage
                    ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                     (long)plVar7);
        }
      }
LAB_00242d7b:
      uVar19 = uStack_34;
      *(double *)(pCVar2 + 0x148) = (double)*(int *)(param_1 + 0x220);
      iVar17 = 0;
      if ((char)uStack_34 != '\0') {
        iVar17 = iVar18;
      }
      if (!bVar27 || (!bVar9 || !bVar8)) {
        iVar17 = iVar18;
      }
      (**(code **)(*(long *)this + 0x60))(this,(uint)uVar24 & 0xff);
      (**(code **)(*(long *)pCVar2 + 0x60))(pCVar2,uVar19 & 0xff);
      if ((*(long *)(param_1 + 0x200) != 0) && (*(long *)(*(long *)(param_1 + 0x200) + 0x10) != 0))
      {
        uVar12 = viewportPosToCompPos(param_1,CONCAT44(iVar17,iVar13));
        this_00 = *(Component **)(*(long *)(param_1 + 0x200) + 0x10);
        iVar18 = (int)((ulong)uVar12 >> 0x20);
        if (((int)*(undefined8 *)(this_00 + 0x38) != (int)uVar12) ||
           ((int)((ulong)*(undefined8 *)(this_00 + 0x38) >> 0x20) != iVar18)) {
          Component::setBounds
                    (this_00,(int)uVar12,iVar18,*(int *)(this_00 + 0x40),*(int *)(this_00 + 0x44));
          return;
        }
      }
      iStack_40 = (int)uVar16 - iVar13;
      if (iVar21 < iStack_40) {
        iStack_40 = iVar21;
      }
      iStack_3c = iVar25 - iVar17;
      if (iVar22 < iStack_3c) {
        iStack_3c = iVar22;
      }
      iStack_48 = iVar13;
      iStack_44 = iVar17;
      if ((((*(int *)(param_1 + 0x208) != iVar13) || (*(int *)(param_1 + 0x20c) != iVar17)) ||
          (*(int *)(param_1 + 0x210) != iStack_40)) || (*(int *)(param_1 + 0x214) != iStack_3c)) {
        *(int *)(param_1 + 0x208) = iVar13;
        *(int *)(param_1 + 0x20c) = iVar17;
        *(int *)(param_1 + 0x210) = iStack_40;
        *(int *)(param_1 + 0x214) = iStack_3c;
        (**(code **)(*(long *)param_1 + 0x198))(param_1,&iStack_48);
      }
      LOCK();
      iVar25 = *(int *)(*(long *)(this + 0xf8) + 0x18);
      *(int *)(*(long *)(this + 0xf8) + 0x18) = 0;
      UNLOCK();
      if (iVar25 != 0) {
        (**(code **)(*(long *)(this + 0xf0) + 0x10))();
      }
      LOCK();
      iVar25 = *(int *)(*(long *)(pCVar2 + 0xf8) + 0x18);
      *(int *)(*(long *)(pCVar2 + 0xf8) + 0x18) = 0;
      UNLOCK();
      if (iVar25 != 0) {
        (**(code **)(*(long *)(pCVar2 + 0xf0) + 0x10))(pCVar2 + 0xf0);
      }
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x38);
    uVar6 = *(ulong *)(lVar4 + 0x40);
    in_R10 = uVar24;
    Component::setBounds(pCVar2,iVar18,iVar17,iVar21,iVar22);
    pCVar20 = *(ComponentHelpers **)(*(long *)(param_1 + 0x200) + 0x10);
    uVar14 = *(ulong *)(pCVar20 + 0x40);
    unaff_RBX = uVar6;
    if ((((lVar5 == *(long *)(pCVar20 + 0x38)) && ((int)uVar6 == (int)uVar14)) &&
        (unaff_RBX = uVar6 >> 0x20, (int)(uVar6 >> 0x20) == (int)(uVar14 >> 0x20))) || (iVar13 < 1))
    {
LAB_0024283d:
      auVar33 = detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>>
                          ((ComponentHelpers *)pCVar2,pCVar20,0,
                           uVar14 & 0xffffffff | (ulong)*(uint *)(pCVar20 + 0x44) << 0x20);
      uVar12 = auVar33._0_8_;
      uVar16 = auVar33._8_8_;
      goto LAB_00242868;
    }
    iVar13 = iVar13 + -1;
    if (!bVar26 || (!bVar9 || !bVar8)) goto LAB_00242560;
LAB_00242590:
    uVar24 = CONCAT71((int7)(in_R10 >> 8),*(char *)(*(long *)(param_1 + 0x108) + 0x17e) == '\0');
    if (bVar27 && (bVar9 && bVar8)) goto LAB_0024256e;
LAB_002425ad:
    bVar28 = false;
  } while( true );
}


