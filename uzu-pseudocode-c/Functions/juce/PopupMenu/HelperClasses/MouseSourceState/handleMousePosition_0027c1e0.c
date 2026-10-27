// Function : handleMousePosition
// Namespace: juce:PopupMenu:HelperClasses:MouseSourceState
// Entry    : 0027c1e0
// Prototype: undefined handleMousePosition(MouseSourceState * this, ulong param_1)
// Body     : 0027c1e0 - 0027cc8a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::PopupMenu::HelperClasses::MouseSourceState::handleMousePosition(juce::Point<int>) */

void __thiscall
juce::PopupMenu::HelperClasses::MouseSourceState::handleMousePosition
          (MouseSourceState *this,ulong param_1)

{
  MenuWindow *pMVar1;
  MenuWindow MVar2;
  MenuWindow MVar3;
  MouseSourceState MVar4;
  undefined1 auVar5 [16];
  double dVar6;
  __time_t __ptr;
  timespec tVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  Component *pCVar16;
  Desktop *pDVar17;
  Component *pCVar18;
  uint uVar19;
  long *plVar20;
  int iVar21;
  Component *pCVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  long *plVar26;
  MenuWindow *pMVar27;
  uint uVar28;
  MouseSourceState MVar29;
  undefined8 uVar30;
  float fVar31;
  timespec tVar32;
  float local_b8;
  float fStack_b4;
  timespec local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulong local_58;
  long local_50;
  timespec *local_48;
  timespec local_40;
  
  plVar20 = *(long **)(this + 0x28);
  uVar14 = param_1;
  if (plVar20 != (long *)0x0) {
    plVar26 = plVar20;
    do {
      plVar13 = plVar26;
      plVar26 = (long *)plVar13[6];
    } while ((long *)plVar13[6] != (long *)0x0);
    uVar14 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<int>>(plVar13,param_1);
    if (plVar13 != plVar20) {
      uVar14 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<int>>
                         ((long)plVar13,plVar20,uVar14);
    }
  }
  clock_gettime(1,&local_88);
  auVar5 = SEXT816(local_88.tv_nsec / 1000 + local_88.tv_sec * 1000000) *
           SEXT816(0x20c49ba5e353f7cf);
  uVar28 = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
  if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar28) ||
     (uVar28 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
    LOCK();
    UNLOCK();
    _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar28;
  }
  uVar23 = (uint)uVar14;
  uVar19 = (uint)(uVar14 >> 0x20);
  if ((*(int *)(*(Component **)(this + 0x28) + 0x1b0) + 100U < uVar28) &&
     (bVar8 = Component::reallyContains
                        (CONCAT44((float)(int)uVar19,(float)(int)uVar23),
                         *(Component **)(this + 0x28)), bVar8)) {
    pMVar27 = *(MenuWindow **)(this + 0x28);
    if (((*(long *)(pMVar27 + 0x188) != 0) &&
        ((lVar15 = *(long *)(*(long *)(pMVar27 + 0x188) + 0x10), lVar15 != 0 &&
         (pMVar27[0x17a] == (MenuWindow)0x0)))) &&
       ((*(long *)(pMVar27 + 400) == 0 || ((*(ushort *)(*(long *)(pMVar27 + 400) + 0xe8) & 2) == 0))
       )) {
      lVar15 = __dynamic_cast(lVar15,&Component::typeinfo,&ItemComponent::typeinfo,0);
      MenuWindow::showSubMenuFor(pMVar27,lVar15);
    }
  }
  fStack_b4 = (float)(int)uVar19;
  local_b8 = (float)(int)uVar23;
  iVar21 = *(int *)(this + 0x4c);
  iVar24 = (int)(param_1 >> 0x20);
  local_58 = param_1;
  dVar6 = hypot((double)(*(int *)(this + 0x38) - (int)param_1),
                (double)(*(int *)(this + 0x3c) - iVar24));
  bVar8 = Component::reallyContains(CONCAT44(fStack_b4,local_b8),*(Component **)(this + 0x28));
  if ((2 < (int)dVar6) && (bVar8)) {
    *(undefined1 *)(*(long *)(this + 0x28) + 0x17a) = 0;
    *(uint *)(this + 0x4c) = uVar28;
  }
  if ((2 < (int)dVar6 || 0x15e < uVar28 - iVar21 && iVar21 != 0) &&
     (*(char *)(*(long *)(this + 0x28) + 0x17a) == '\0')) {
    for (lVar15 = *(long *)(*(long *)(this + 0x28) + 400);
        (uVar14 = local_58, lVar15 != 0 && ((*(ushort *)(lVar15 + 0xe8) & 2) != 0));
        lVar15 = *(long *)(lVar15 + 400)) {
      if ((long)*(int *)(lVar15 + 0x1c4) != 0) {
        plVar26 = *(long **)(lVar15 + 0x1b8);
        plVar20 = plVar26 + *(int *)(lVar15 + 0x1c4);
        do {
          pCVar22 = *(Component **)(*plVar26 + 0x28);
          uVar30 = detail::MouseInputSourceImpl::getScreenPosition
                             (*(MouseInputSourceImpl **)(*plVar26 + 0x30));
          pCVar18 = pCVar22;
          do {
            pCVar16 = pCVar18;
            pCVar18 = *(Component **)(pCVar16 + 0x30);
          } while (*(Component **)(pCVar16 + 0x30) != (Component *)0x0);
          uVar30 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                             (uVar30,(long *)pCVar16);
          if (pCVar16 != pCVar22) {
            uVar30 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                               (uVar30,(long)pCVar16,(long *)pCVar22);
          }
          bVar9 = Component::reallyContains
                            (CONCAT44((float)SUB84((double)(float)((ulong)uVar30 >> 0x20) +
                                                   _UNK_005d9a98,0),
                                      (float)SUB84((double)(float)uVar30 + _DAT_005d9a90,0)),pCVar22
                            );
          if (bVar9) goto LAB_0027c40a;
          plVar26 = plVar26 + 1;
        } while (plVar26 != plVar20);
      }
    }
    if (((!bVar8) || (*(ulong *)(this + 0x38) == local_58)) ||
       (lVar15 = *(long *)(*(long *)(this + 0x28) + 400), lVar15 == 0)) {
      *(ulong *)(this + 0x38) = local_58;
    }
    else {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *(ulong *)(lVar15 + 0x40);
      tVar32 = (timespec)(auVar5 << 0x40);
      do {
        local_88 = tVar32;
        local_50 = lVar15;
        local_48 = &local_88;
        tVar32 = (timespec)
                 detail::ComponentHelpers::
                 convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
                 ::{lambda()#1}::operator()((_lambda___1_ *)&local_50);
        local_40 = tVar32;
        if (*(float **)(lVar15 + 0x50) != (float *)0x0) {
          tVar32 = (timespec)
                   Rectangle<int>::transformedBy
                             ((Rectangle<int> *)&local_40,*(float **)(lVar15 + 0x50));
        }
        lVar15 = *(long *)(lVar15 + 0x30);
      } while (lVar15 != 0);
      iVar21 = (int)tVar32.tv_sec;
      if (*(int *)(*(long *)(this + 0x28) + 0x38) < iVar21) {
        fVar31 = DAT_00652e14;
      }
      else {
        fVar31 = (float)(int)tVar32.tv_nsec;
      }
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (timespec)ZEXT816(0);
      local_68 = 1;
      Path::addTriangle((float)(int)((int)*(undefined8 *)(this + 0x38) + -2 +
                                    (uint)(iVar21 <= *(int *)(*(long *)(this + 0x28) + 0x38)) * 4),
                        (float)(int)((ulong)*(undefined8 *)(this + 0x38) >> 0x20),
                        fVar31 + (float)iVar21,(float)tVar32.tv_sec._4_4_,fVar31 + (float)iVar21,
                        (float)(tVar32.tv_nsec._4_4_ + tVar32.tv_sec._4_4_),(Path *)&local_88);
      uVar12 = Path::contains((float)(int)uVar14,(float)iVar24,&local_88.tv_sec);
      tVar32 = local_88;
      local_88.tv_nsec._4_4_ = 0;
      tVar7 = local_88;
      local_88.tv_sec = tVar32.tv_sec;
      __ptr = local_88.tv_sec;
      local_88 = tVar7;
      free((void *)__ptr);
      *(ulong *)(this + 0x38) = uVar14;
      if ((char)uVar12 != '\0') goto LAB_0027c40a;
    }
    pCVar18 = Component::getComponentAt(CONCAT44(fStack_b4,local_b8),*(Component **)(this + 0x28));
    pCVar22 = *(Component **)(this + 0x28);
    bVar9 = pCVar18 != pCVar22;
    bVar10 = pCVar18 != (Component *)0x0;
    if (bVar10 && bVar9) {
      lVar15 = __dynamic_cast(pCVar18,&Component::typeinfo,&ItemComponent::typeinfo,0);
      if (lVar15 == 0) {
        do {
          pCVar18 = *(Component **)(pCVar18 + 0x30);
          lVar15 = 0;
          if (pCVar18 == (Component *)0x0) break;
          lVar15 = __dynamic_cast(pCVar18,&Component::typeinfo,&ItemComponent::typeinfo,0);
        } while (lVar15 == 0);
      }
    }
    else {
      lVar15 = 0;
    }
    if (*(long *)(pCVar22 + 0x188) == 0) {
      if (lVar15 != 0) goto LAB_0027cb2f;
    }
    else if (*(long *)(*(long *)(pCVar22 + 0x188) + 0x10) != lVar15) {
LAB_0027cb2f:
      if (bVar8) {
        if ((bVar10 && bVar9) && (*(MenuWindow **)(pCVar22 + 400) != (MenuWindow *)0x0)) {
          MenuWindow::hide(*(MenuWindow **)(pCVar22 + 400),0,'\x01');
          pCVar22 = *(Component **)(this + 0x28);
        }
      }
      else {
        if (((*(long *)(pCVar22 + 400) != 0) &&
            ((*(ushort *)(*(long *)(pCVar22 + 400) + 0xe8) & 2) != 0)) ||
           (pCVar22[0x1cd] == (Component)0x0)) goto LAB_0027c40a;
        lVar15 = 0;
      }
      MenuWindow::setCurrentlyHighlightedChild((MenuWindow *)pCVar22,lVar15);
    }
  }
LAB_0027c40a:
  pMVar27 = *(MenuWindow **)(this + 0x28);
  iVar21 = *(int *)(pMVar27 + 0x184);
  if ((((iVar21 == 0) && (pMVar27[0x178] == (MenuWindow)0x0)) ||
      (*(uint *)(pMVar27 + 0x40) <= uVar23)) ||
     ((*(uint *)(pMVar27 + 0x44) <= uVar19 &&
      ((*(ushort *)(*(long *)(this + 0x30) + 0x3c) & 0x1f0) == 0)))) {
LAB_0027c631:
    *(undefined8 *)(this + 0x40) = 0x3ff0000000000000;
    bVar8 = false;
  }
  else {
    if ((iVar21 < 1) || (0x17 < (int)uVar19)) {
      if ((*(int *)(pMVar27 + 0x180) - *(int *)(pMVar27 + 0x174) <= iVar21) ||
         ((int)uVar19 <= (int)(*(uint *)(pMVar27 + 0x44) - 0x18))) goto LAB_0027c631;
      if (uVar28 <= *(int *)(this + 0x48) + 0x14U) goto LAB_0027c974;
      dVar6 = *(double *)(this + 0x40) * _DAT_005de660;
      if (DAT_00652488 <= *(double *)(this + 0x40) * _DAT_005de660) {
        dVar6 = DAT_00652488;
      }
      *(double *)(this + 0x40) = dVar6;
      if ((int)*(uint *)(pMVar27 + 0x154) < 1) {
        iVar21 = 0;
      }
      else {
        uVar14 = 1;
        do {
          iVar21 = *(int *)(*(long *)(*(long *)(pMVar27 + 0x148) + -8 + uVar14 * 8) + 0x44) *
                   (int)dVar6;
          if (*(uint *)(pMVar27 + 0x154) <= uVar14) break;
          uVar14 = uVar14 + 1;
        } while (iVar21 == 0);
      }
    }
    else {
      if (uVar28 <= *(int *)(this + 0x48) + 0x14U) {
LAB_0027c974:
        bVar8 = true;
        goto LAB_0027c647;
      }
      dVar6 = *(double *)(this + 0x40) * _DAT_005de660;
      if (DAT_00652488 <= *(double *)(this + 0x40) * _DAT_005de660) {
        dVar6 = DAT_00652488;
      }
      *(double *)(this + 0x40) = dVar6;
      if ((int)*(uint *)(pMVar27 + 0x154) < 1) {
        iVar21 = 0;
      }
      else {
        uVar14 = 1;
        do {
          iVar21 = *(int *)(*(long *)(*(long *)(pMVar27 + 0x148) + -8 + uVar14 * 8) + 0x44) *
                   (int)dVar6;
          if (*(uint *)(pMVar27 + 0x154) <= uVar14) break;
          uVar14 = uVar14 + 1;
        } while (iVar21 == 0);
      }
      iVar21 = -iVar21;
    }
    bVar8 = true;
    MenuWindow::alterChildYPos(pMVar27,iVar21);
    *(uint *)(this + 0x48) = uVar28;
  }
LAB_0027c647:
  lVar15 = *(long *)(this + 0x28);
  do {
    lVar25 = lVar15;
    lVar15 = *(long *)(lVar25 + 0xf0);
  } while (*(long *)(lVar25 + 0xf0) != 0);
  while ((*(ushort *)(lVar25 + 0xe8) & 2) != 0) {
    if ((long)*(int *)(lVar25 + 0x1c4) != 0) {
      plVar20 = *(long **)(lVar25 + 0x1b8);
      plVar26 = plVar20 + *(int *)(lVar25 + 0x1c4);
      do {
        pCVar22 = *(Component **)(*plVar20 + 0x28);
        uVar30 = detail::MouseInputSourceImpl::getScreenPosition
                           (*(MouseInputSourceImpl **)(*plVar20 + 0x30));
        pCVar18 = pCVar22;
        do {
          pCVar16 = pCVar18;
          pCVar18 = *(Component **)(pCVar16 + 0x30);
        } while (*(Component **)(pCVar16 + 0x30) != (Component *)0x0);
        uVar30 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                           (uVar30,(long *)pCVar16);
        if (pCVar16 != pCVar22) {
          uVar30 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                             (uVar30,(long)pCVar16,(long *)pCVar22);
        }
        bVar9 = Component::reallyContains
                          (CONCAT44((float)SUB84((double)(float)((ulong)uVar30 >> 0x20) +
                                                 _UNK_005d9a98,0),
                                    (float)SUB84((double)(float)uVar30 + _DAT_005d9a90,0)),pCVar22);
        if (bVar9) {
          bVar9 = true;
          pCVar22 = *(Component **)(this + 0x28);
          MVar2 = *(MenuWindow *)(pCVar22 + 0x179);
          MVar3 = *(MenuWindow *)(pCVar22 + 0x1cd);
          goto joined_r0x0027c74e;
        }
        plVar20 = plVar20 + 1;
      } while (plVar20 != plVar26);
    }
    lVar25 = *(long *)(lVar25 + 400);
    if (lVar25 == 0) break;
  }
  bVar9 = false;
  pCVar22 = *(Component **)(this + 0x28);
  MVar2 = *(MenuWindow *)(pCVar22 + 0x179);
  MVar3 = *(MenuWindow *)(pCVar22 + 0x1cd);
joined_r0x0027c74e:
  if (((MVar2 != (MenuWindow)0x0) && (!bVar9)) && (MVar3 != (MenuWindow)0x0)) goto LAB_0027c759;
  MVar4 = this[0x50];
  if (MVar3 == (MenuWindow)0x0) {
LAB_0027c7d0:
    MVar29 = (MouseSourceState)0x0;
  }
  else if (((ushort)ModifierKeys::currentModifiers & 0x1f0) == 0) {
    if (ComponentPeer::getNativeRealtimeModifiers._16_8_ == 0) goto LAB_0027c7d0;
                    /* try { // try from 0027c7b7 to 0027c7bc has its CatchHandler @ 0027cc8f */
    uVar14 = (*(code *)ComponentPeer::getNativeRealtimeModifiers._24_8_)
                       (ComponentPeer::getNativeRealtimeModifiers);
    pCVar22 = *(Component **)(this + 0x28);
    MVar29 = (MouseSourceState)((uVar14 & 0x1f0) != 0);
  }
  else {
    MVar29 = (MouseSourceState)0x1;
  }
  this[0x50] = MVar29;
  bVar10 = Component::reallyContains(CONCAT44(fStack_b4,local_b8),pCVar22);
  pMVar27 = *(MenuWindow **)(this + 0x28);
  if (LinuxComponentPeer::isActiveApplication == '\x01') {
    if (Component::currentlyFocusedComponent == 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027c80d to 0027c816 has its CatchHandler @ 0027cc8d */
        pDVar17 = operator_new(0x1d0);
                    /* try { // try from 0027c81a to 0027c821 has its CatchHandler @ 0027cc8b */
        Desktop::Desktop(pDVar17);
        Desktop::instance = pDVar17;
      }
      uVar19 = *(uint *)(Desktop::instance + 0xdc);
      do {
        if ((int)uVar19 < 1) {
          pMVar1 = pMVar27 + 0x17b;
          pMVar27 = *(MenuWindow **)(this + 0x28);
          if (!(*pMVar1 != (MenuWindow)0x0 && !bVar10)) goto LAB_0027c9e7;
          goto LAB_0027c89f;
        }
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027c876 to 0027c87f has its CatchHandler @ 0027ccaa */
          pDVar17 = operator_new(0x1d0);
                    /* try { // try from 0027c883 to 0027c88a has its CatchHandler @ 0027cc97 */
          Desktop::Desktop(pDVar17);
          Desktop::instance = pDVar17;
        }
        uVar19 = uVar19 - 1;
        cVar11 = (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + (ulong)uVar19 * 8) +
                             0xe8))();
      } while (cVar11 == '\0');
      pMVar27[0x17b] = (MenuWindow)0x1;
      pMVar27 = *(MenuWindow **)(this + 0x28);
    }
  }
  else if (!bVar10) {
LAB_0027c89f:
    if (uVar28 <= *(int *)(pMVar27 + 0x1ac) + 10U) {
      return;
    }
    PopupMenuSettings::menuWasHiddenBecauseOfAppChange = 1;
    do {
      pCVar22 = (Component *)pMVar27;
      pMVar27 = *(MenuWindow **)(pCVar22 + 0xf0);
    } while (*(MenuWindow **)(pCVar22 + 0xf0) != (MenuWindow *)0x0);
    goto LAB_0027c759;
  }
LAB_0027c9e7:
  if ((MVar4 == (MouseSourceState)0x0) ||
     ((this[0x50] != (MouseSourceState)0x0 || uVar28 <= *(int *)(pMVar27 + 0x1a8) + 0xfaU) || bVar8)
     ) {
    *(uint *)(pMVar27 + 0x1ac) = uVar28;
    return;
  }
  if ((bVar10) && (pMVar27[0x1ce] != (MenuWindow)0x0)) {
    MenuWindow::triggerCurrentlyHighlightedItem(pMVar27);
    return;
  }
  if (pMVar27[0x1cd] == (MenuWindow)0x0) {
    if (pMVar27[0x1ce] != (MenuWindow)0x0 || bVar9) {
      return;
    }
  }
  else if (bVar9) {
    return;
  }
  do {
    pCVar22 = (Component *)pMVar27;
    pMVar27 = *(MenuWindow **)(pCVar22 + 0xf0);
  } while (*(MenuWindow **)(pCVar22 + 0xf0) != (MenuWindow *)0x0);
LAB_0027c759:
  MenuWindow::hide((MenuWindow *)pCVar22,0,'\x01');
  return;
}


