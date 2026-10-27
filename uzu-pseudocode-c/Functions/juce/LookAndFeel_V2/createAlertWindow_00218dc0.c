// Function : createAlertWindow
// Namespace: juce:LookAndFeel_V2
// Entry    : 00218dc0
// Prototype: Component * createAlertWindow(undefined8 param_1_00, long * param_2, undefined8 * param_3, undefined8 * param_4, undefined8 * param_5, undefined8 * param_6, undefined4 param_7, int param_8, long param_9)
// Body     : 00218dc0 - 00218dc4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* non-virtual thunk to juce::LookAndFeel_V2::createAlertWindow(juce::String const&, juce::String
   const&, juce::String const&, juce::String const&, juce::String const&, juce::MessageBoxIconType,
   int, juce::Component*) */

Component * __thiscall
juce::LookAndFeel_V2::createAlertWindow
          (undefined8 param_1_00,long *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6,undefined4 param_7,int param_8,long param_9)

{
  Label *this;
  long lVar1;
  byte bVar2;
  Component *pCVar3;
  long *plVar4;
  Component *pCVar5;
  undefined4 uVar6;
  Component CVar7;
  uint uVar8;
  int iVar9;
  wint_t wVar10;
  wint_t wVar11;
  Component *this_00;
  Timer *this_01;
  void *pvVar12;
  undefined4 *puVar13;
  String *pSVar14;
  undefined8 *puVar15;
  uint *puVar16;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  size_t __n;
  long *plVar20;
  long lVar21;
  int *piVar22;
  uint *puVar23;
  byte *pbVar24;
  ulong uVar25;
  byte *pbVar26;
  uint uVar27;
  float fVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 uVar31;
  undefined8 in_XMM1_Qa;
  long lStack_98;
  undefined4 uStack_90;
  long *plStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  Component *pCStack_60;
  long *plStack_58;
  Component *pCStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar23 = (uint *)param_5;
  plStack_88 = param_4;
  plStack_48 = param_6;
  this_00 = operator_new(0x430);
  *(undefined ***)this_00 = &PTR__Component_00707878;
  lVar21 = *param_2;
  *(long *)(this_00 + 8) = lVar21;
  piVar22 = (int *)(lVar21 + -0x10);
  if (piVar22 != &emptyString) {
    LOCK();
    *piVar22 = *piVar22 + 1;
    UNLOCK();
    lVar21 = *param_2;
  }
  pbVar24 = &DAT_0061ac58;
  *(undefined1 **)(this_00 + 0x10) = &DAT_0061ac58;
  *(undefined1 **)(this_00 + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(this_00 + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(this_00 + 0x28) = &DAT_0061ac58;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined4 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xe5) = 0;
  *(undefined ***)this_00 = &PTR__TopLevelWindow_0070cf40;
  *(undefined2 *)(this_00 + 0xed) = 1;
  this_00[0xef] = (Component)0x0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  piVar22 = (int *)(lVar21 + -0x10);
  if (piVar22 != &emptyString) {
    LOCK();
    *piVar22 = *piVar22 + 1;
    UNLOCK();
    lVar21 = *param_2;
  }
  LOCK();
  lVar1 = *(long *)(this_00 + 0x18);
  *(long *)(this_00 + 0x18) = lVar21;
  UNLOCK();
  piVar22 = (int *)(lVar1 + -0x10);
  if (piVar22 != &emptyString) {
    LOCK();
    iVar9 = *piVar22;
    *piVar22 = *piVar22 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(piVar22);
    }
  }
  Component::setOpaque(this_00,1);
  Component::addToDesktop
            (this_00,(uint)(byte)this_00[0xee] << 3 | (uint)(byte)this_00[0xed] << 8 | 1,0);
  *(ushort *)(this_00 + 0xe8) = *(ushort *)(this_00 + 0xe8) | 0x2020;
  if (detail::TopLevelWindowManager::singletonHolder == (Timer *)0x0) {
    this_01 = operator_new(0x48);
    *(undefined8 *)(this_01 + 0x30) = 0;
    *(undefined8 *)(this_01 + 0x38) = 0;
    *(undefined8 *)(this_01 + 0x20) = 0;
    *(undefined8 *)(this_01 + 0x28) = 0;
    *(undefined8 *)(this_01 + 0x10) = 0;
    *(undefined8 *)(this_01 + 0x18) = 0;
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)(this_01 + 8) = 0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    Timer::Timer(this_01);
    DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(this_01 + 0x28));
    *(undefined ***)this_01 = &PTR__TopLevelWindowManager_00710e68;
    *(undefined ***)(this_01 + 0x28) = &PTR__TopLevelWindowManager_00710e90;
    *(undefined8 *)(this_01 + 0x30) = 0;
    *(undefined8 *)(this_01 + 0x38) = 0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    LOCK();
    UNLOCK();
    uVar8 = *(uint *)(this_01 + 0x38);
    iVar9 = *(int *)(this_01 + 0x3c);
    detail::TopLevelWindowManager::singletonHolder = this_01;
    if ((int)uVar8 <= iVar9) goto LAB_0020db10;
  }
  else {
    uVar8 = *(uint *)(detail::TopLevelWindowManager::singletonHolder + 0x38);
    iVar9 = *(int *)(detail::TopLevelWindowManager::singletonHolder + 0x3c);
    this_01 = detail::TopLevelWindowManager::singletonHolder;
    if ((int)uVar8 <= iVar9) {
LAB_0020db10:
      this_01 = detail::TopLevelWindowManager::singletonHolder;
      uVar27 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (uVar8 != uVar27) {
        if ((int)uVar27 < 1) {
          free(*(void **)(detail::TopLevelWindowManager::singletonHolder + 0x30));
          *(undefined8 *)(this_01 + 0x30) = 0;
        }
        else {
          pvVar12 = realloc(*(void **)(detail::TopLevelWindowManager::singletonHolder + 0x30),
                            (ulong)uVar27 << 3);
          *(void **)(this_01 + 0x30) = pvVar12;
        }
      }
      *(uint *)(this_01 + 0x38) = uVar27;
      iVar9 = *(int *)(this_01 + 0x3c);
    }
  }
  *(int *)(this_01 + 0x3c) = iVar9 + 1;
  *(Component **)(*(long *)(this_01 + 0x30) + (long)iVar9 * 8) = this_00;
  iVar9 = *(int *)(this_01 + 0x10);
  *(undefined4 *)(this_01 + 0x10) = 10;
  if (iVar9 == 0) {
    Timer::TimerThread::addTimer(*(TimerThread **)(this_01 + 0x18),(long)this_01);
    pCVar3 = *(Component **)(this_01 + 0x40);
  }
  else {
    Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this_01 + 0x18),(long)this_01);
    pCVar3 = *(Component **)(this_01 + 0x40);
  }
  for (; pCVar3 != this_00; pCVar3 = *(Component **)(pCVar3 + 0x30)) {
    pCVar5 = Component::currentlyFocusedComponent;
    if (pCVar3 == (Component *)0x0) goto joined_r0x0020dbca;
  }
LAB_0020dbe2:
  uVar8 = Component::isShowing(this_00);
  CVar7 = SUB41(uVar8,0);
LAB_0020dbea:
  this_00[0xef] = CVar7;
  *(undefined ***)this_00 = &PTR__AlertWindow_0070c970;
  pCStack_60 = this_00 + 0xf8;
  *(undefined1 **)(this_00 + 0xf8) = &DAT_0061ac58;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined4 *)(this_00 + 0x118) = 9;
  this = (Label *)(this_00 + 0x120);
  uStack_70 = 0x61ac58;
  uStack_6c = 0;
  uStack_80 = 0x61ac58;
  uStack_7c = 0;
  Label::Label(this,(long *)&uStack_70,(long *)&uStack_80);
  *(undefined4 *)(this_00 + 0x338) = param_7;
  *(undefined ***)(this_00 + 0x340) = &PTR__ComponentBoundsConstrainer_00708960;
  uVar30 = _UNK_005dca88;
  *(undefined8 *)(this_00 + 0x348) = _DAT_005dca80;
  *(undefined8 *)(this_00 + 0x350) = uVar30;
  *(undefined8 *)(this_00 + 0x358) = 0;
  *(undefined8 *)(this_00 + 0x360) = 0;
  *(undefined8 *)(this_00 + 0x368) = 0;
  *(undefined ***)(this_00 + 0x370) = &PTR__ComponentDragger_0070bee0;
  *(undefined8 *)(this_00 + 0x378) = 0;
  *(undefined8 *)(this_00 + 0x380) = 0;
  *(undefined8 *)(this_00 + 0x388) = 0;
  *(undefined8 *)(this_00 + 0x390) = 0;
  *(undefined8 *)(this_00 + 0x398) = 0;
  *(undefined8 *)(this_00 + 0x3a0) = 0;
  *(undefined8 *)(this_00 + 0x3a8) = 0;
  *(undefined8 *)(this_00 + 0x3b0) = 0;
  *(undefined8 *)(this_00 + 0x3b8) = 0;
  *(undefined8 *)(this_00 + 0x3c0) = 0;
  *(undefined8 *)(this_00 + 0x3c8) = 0;
  *(undefined8 *)(this_00 + 0x3d0) = 0;
  *(undefined8 *)(this_00 + 0x3d8) = 0;
  *(undefined8 *)(this_00 + 0x3e0) = 0;
  *(undefined8 *)(this_00 + 1000) = 0;
  *(undefined8 *)(this_00 + 0x3f0) = 0;
  *(undefined8 *)(this_00 + 0x3f8) = 0;
  *(undefined8 *)(this_00 + 0x400) = 0;
  *(undefined8 *)(this_00 + 0x408) = 0;
  *(undefined8 *)(this_00 + 0x410) = 0;
  *(undefined8 *)(this_00 + 0x418) = 0;
  plStack_58 = param_5;
  if (param_9 == 0) {
    *(undefined8 *)(this_00 + 0x420) = 0;
    this_00[0x428] = (Component)0x1;
    fVar28 = DAT_005d9038;
  }
  else {
    puVar15 = *(undefined8 **)(param_9 + 0xd8);
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = operator_new(0x18);
      *(undefined4 *)(puVar15 + 1) = 0;
      *puVar15 = &PTR__ReferenceCountedObject_00714b80;
      puVar15[2] = param_9;
      LOCK();
      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
      UNLOCK();
      plVar4 = *(long **)(param_9 + 0xd8);
      *(undefined8 **)(param_9 + 0xd8) = puVar15;
      if (plVar4 == (long *)0x0) goto LAB_0020dd0e;
      LOCK();
      plVar20 = plVar4 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
      puVar15 = *(undefined8 **)(param_9 + 0xd8);
      *(undefined8 **)(this_00 + 0x420) = puVar15;
      if (puVar15 != (undefined8 *)0x0) goto LAB_0020dd15;
    }
    else {
LAB_0020dd0e:
      *(undefined8 **)(this_00 + 0x420) = puVar15;
LAB_0020dd15:
      LOCK();
      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
      UNLOCK();
    }
    this_00[0x428] = (Component)0x1;
    fVar28 = Component::getApproximateScaleFactorForComponent((long *)param_9);
  }
  puVar16 = (uint *)&lStack_98;
  *(float *)(this_00 + 0x42c) = fVar28;
  Component::setAlwaysOnTop(this_00,(ushort)(0 < WindowUtilsInternal::numAlwaysOnTopPeers));
  Component::setColour((Component *)this,0x1000281,_ZN4juce7ColoursL16transparentBlackE_5);
  Component::setColour((Component *)this,0x1000280,_ZN4juce7ColoursL16transparentBlackE_5);
  Component::setColour((Component *)this,0x1000282,_ZN4juce7ColoursL16transparentBlackE_5);
  this_00[0x20a] = this_00[0x20a];
  *(ushort *)(this_00 + 0x208) = (ushort)*(undefined3 *)(this_00 + 0x208) & 0xffe7 | 8;
  (**(code **)(*(long *)(this_00 + 0x120) + 0x60))(this,1);
  uVar30 = Component::addChildComponent(this_00,(Component *)this,0xffffffff);
  if (*(char *)*param_3 == '\0') {
    puVar13 = operator_new__(0x1b);
    LOCK();
    *puVar13 = 0;
    UNLOCK();
    *(undefined8 *)(puVar13 + 2) = 4;
    *(undefined2 *)(puVar13 + 4) = 0x20;
    lVar21 = *(long *)pCStack_60;
    *(undefined4 **)pCStack_60 = puVar13 + 4;
    piVar22 = (int *)(lVar21 + -0x10);
    uVar30 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
    if (piVar22 != &emptyString) {
      LOCK();
      iVar9 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      uVar30 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
      if (iVar9 == 0) {
        operator_delete__(piVar22);
        uVar30 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
      }
    }
  }
  pCStack_50 = this_00 + 0x358;
  pbVar26 = (byte *)*param_3;
  iVar9 = 0x800;
  pbVar18 = pbVar26;
  do {
    bVar2 = *pbVar18;
    if (bVar2 == 0) {
      if (pbVar26 != &DAT_0061ac58) {
        LOCK();
        *(int *)(pbVar26 + -0x10) = *(int *)(pbVar26 + -0x10) + 1;
        UNLOCK();
      }
      pbVar18 = *(byte **)pCStack_60;
      if (pbVar18 != pbVar26) goto LAB_0020decf;
      goto LAB_0020e088;
    }
    pbVar19 = pbVar18 + 1;
    if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
      if ((bVar2 & 0x20) == 0) {
        pbVar19 = pbVar18 + 2;
      }
      else {
        pbVar19 = pbVar18 + (4 - (ulong)((bVar2 & 0x10) == 0));
      }
    }
    iVar9 = iVar9 + -1;
    pbVar18 = pbVar19;
  } while (iVar9 != 0);
  if ((pbVar26 != (byte *)0x0) && (*pbVar26 != 0)) {
    __n = (long)pbVar19 - (long)pbVar26;
    uVar25 = __n + 4 & 0xfffffffffffffffc;
    puVar13 = operator_new__(uVar25 + 0x17);
    LOCK();
    *puVar13 = 0;
    UNLOCK();
    *(ulong *)(puVar13 + 2) = uVar25;
    pbVar24 = (byte *)(puVar13 + 4);
    memcpy(pbVar24,pbVar26,__n);
    uVar30 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    *(undefined1 *)((long)puVar13 + __n + 0x10) = 0;
  }
  pbVar18 = *(byte **)pCStack_60;
  pbVar26 = pbVar24;
  if (pbVar18 != pbVar24) {
LAB_0020decf:
    uVar8 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar18,pbVar26);
    uVar30 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    if (uVar8 != 0) {
      pbVar24 = pbVar26 + -0x10;
      if (pbVar24 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar24 = *(int *)pbVar24 + 1;
        UNLOCK();
      }
      LOCK();
      lVar21 = *(long *)pCStack_60;
      *(byte **)pCStack_60 = pbVar26;
      UNLOCK();
      piVar22 = (int *)(lVar21 + -0x10);
      if (piVar22 != &emptyString) {
        LOCK();
        iVar9 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          operator_delete__(piVar22);
        }
      }
      lStack_98 = *(long *)(this_00 + 8);
      piVar22 = (int *)(lStack_98 + -0x10);
      if (piVar22 != &emptyString) {
        LOCK();
        *piVar22 = *piVar22 + 1;
        UNLOCK();
      }
      juce::String::appendCharPointer((String *)&lStack_98,&DAT_005e3916,0x5e3918);
      uStack_80 = (uint)lStack_98;
      uStack_7c = (undefined4)((ulong)lStack_98 >> 0x20);
      piVar22 = (int *)(lStack_98 + -0x10);
      if (piVar22 != &emptyString) {
        LOCK();
        *piVar22 = *piVar22 + 1;
        UNLOCK();
      }
      pSVar14 = juce::String::operator+=((String *)&uStack_80,(String *)pCStack_60);
      lVar21 = *(long *)pSVar14;
      uStack_70 = (uint)lVar21;
      uStack_6c = (undefined4)((ulong)lVar21 >> 0x20);
      piVar22 = (int *)(lVar21 + -0x10);
      if (piVar22 != &emptyString) {
        LOCK();
        *piVar22 = *piVar22 + 1;
        UNLOCK();
      }
      piVar22 = (int *)(CONCAT44(uStack_7c,uStack_80) + -0x10);
      if (piVar22 != &emptyString) {
        LOCK();
        iVar9 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          operator_delete__(piVar22);
        }
      }
      piVar22 = (int *)(lStack_98 + -0x10);
      if (piVar22 != &emptyString) {
        LOCK();
        iVar9 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          operator_delete__(piVar22);
        }
      }
      uVar30 = Label::setText(this,(long *)&uStack_70,0);
      piVar22 = (int *)(CONCAT44(uStack_6c,uStack_70) + -0x10);
      puVar13 = &emptyString;
      if (piVar22 != &emptyString) {
        LOCK();
        *piVar22 = *piVar22 + 1;
        UNLOCK();
      }
      LOCK();
      lVar21 = *(long *)(this_00 + 0x20);
      *(long *)(this_00 + 0x20) = CONCAT44(uStack_6c,uStack_70);
      UNLOCK();
      piVar22 = (int *)(lVar21 + -0x10);
      uVar17 = extraout_RDX;
      if (piVar22 != &emptyString) {
        LOCK();
        iVar9 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          operator_delete__(piVar22);
          uVar30 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          uVar17 = extraout_RDX_00;
        }
      }
      AlertWindow::updateLayout(uVar30,in_XMM1_Qa,this_00,1,uVar17,puVar13,puVar23,(ulong)param_6);
      uVar30 = Component::internalRepaintUnchecked
                         ((long)this_00,0,*(ulong *)(this_00 + 0x40),'\x01');
      piVar22 = (int *)(CONCAT44(uStack_6c,uStack_70) + -0x10);
      if (piVar22 != &emptyString) {
        LOCK();
        iVar9 = *piVar22;
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          operator_delete__(piVar22);
          uVar30 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        }
      }
    }
  }
LAB_0020e088:
  pbVar26 = pbVar26 + -0x10;
  if (pbVar26 != (byte *)&emptyString) {
    LOCK();
    iVar9 = *(int *)pbVar26;
    *(int *)pbVar26 = *(int *)pbVar26 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(pbVar26);
      uVar30 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
    }
  }
  AlertWindow::lookAndFeelChanged(uVar30,in_XMM1_Qa,(AlertWindow *)this_00);
  plVar20 = plStack_58;
  plVar4 = plStack_88;
  uVar6 = _UNK_005dd04c;
  uVar31 = _UNK_005dd048;
  uVar29 = _UNK_005dd044;
  uVar30 = CONCAT44(_UNK_005dd044,_DAT_005dd040);
  *(undefined4 *)pCStack_50 = _DAT_005dd040;
  *(undefined4 *)(pCStack_50 + 4) = uVar29;
  *(undefined4 *)(pCStack_50 + 8) = uVar31;
  *(undefined4 *)(pCStack_50 + 0xc) = uVar6;
  if (param_8 == 1) {
    uStack_70 = 0x1b;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_80 = 0xd;
    uStack_7c = 0;
    uStack_78 = 0;
    puVar23 = &uStack_80;
    puVar16 = &uStack_70;
    plVar20 = plStack_88;
    goto LAB_0020e466;
  }
  pbVar24 = (byte *)*plStack_88;
  bVar2 = *pbVar24;
  uVar8 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar8 = (uint)bVar2;
    if ((bVar2 & 0x40) == 0) {
      uVar8 = uVar8 & 0x7f;
    }
    else {
      uVar27 = 0x3f;
      if ((bVar2 & 0x20) != 0) {
        uVar27 = uVar8 & 0x10 ^ 0x1f;
      }
      uVar8 = uVar27 & uVar8;
      if (((((pbVar24[1] & 0xc0) == 0x80) &&
           (uVar8 = pbVar24[1] & 0x3f | uVar8 << 6, (bVar2 & 0x20) != 0)) &&
          ((pbVar24[2] & 0xc0) == 0x80)) &&
         ((uVar8 = pbVar24[2] & 0x3f | uVar8 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
          ((pbVar24[3] & 0xffffffc0) == 0x80)))) {
        uVar8 = uVar8 << 6 | pbVar24[3] & 0x3f;
      }
    }
  }
  wVar10 = towlower(uVar8);
  uStack_6c = 0;
  uStack_68 = 0;
  pbVar24 = (byte *)*plVar20;
  bVar2 = *pbVar24;
  uVar8 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar8 = (uint)bVar2;
    if ((bVar2 & 0x40) == 0) {
      uVar8 = uVar8 & 0x7f;
    }
    else {
      uVar27 = 0x3f;
      if ((bVar2 & 0x20) != 0) {
        uVar27 = uVar8 & 0x10 ^ 0x1f;
      }
      uVar8 = uVar27 & uVar8;
      if ((((pbVar24[1] & 0xc0) == 0x80) &&
          (uVar8 = pbVar24[1] & 0x3f | uVar8 << 6, (bVar2 & 0x20) != 0)) &&
         (((pbVar24[2] & 0xc0) == 0x80 &&
          ((uVar8 = pbVar24[2] & 0x3f | uVar8 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
           ((pbVar24[3] & 0xffffffc0) == 0x80)))))) {
        uVar8 = uVar8 << 6 | pbVar24[3] & 0x3f;
      }
    }
  }
  uStack_70 = wVar10;
  wVar11 = towlower(uVar8);
  uStack_7c = 0;
  uStack_78 = 0;
  uVar29 = extraout_XMM0_Da_06;
  uVar31 = extraout_XMM0_Db_06;
  if (wVar10 == wVar11) {
LAB_0020e379:
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
  }
  else {
    uStack_80 = wVar11;
    if (((int)wVar10 < 0x100) && ((int)wVar11 < 0x100)) {
      wVar10 = towlower(wVar10);
      wVar11 = towlower(wVar11);
      uVar29 = extraout_XMM0_Da_07;
      uVar31 = extraout_XMM0_Db_07;
      if (wVar10 == wVar11) goto LAB_0020e379;
    }
  }
  if (param_8 == 3) {
    uStack_90 = 0;
    lStack_98 = 0;
    uVar30 = AlertWindow::addButton
                       (CONCAT44(uVar31,uVar29),in_XMM1_Qa,(AlertWindow *)this_00,plVar4,1,
                        (int *)&uStack_70,(uint *)&lStack_98,(ulong)param_6);
    uStack_90 = 0;
    lStack_98 = 0;
    uVar30 = AlertWindow::addButton
                       (uVar30,in_XMM1_Qa,(AlertWindow *)this_00,plVar20,2,(int *)&uStack_80,
                        (uint *)&lStack_98,(ulong)param_6);
    lStack_98 = 0x1b;
    uStack_90 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    puVar23 = (uint *)&uStack_40;
    plVar20 = plStack_48;
  }
  else {
    if (param_8 != 2) {
      return this_00;
    }
    lStack_98 = 0xd;
    uStack_90 = 0;
    uVar30 = AlertWindow::addButton
                       (CONCAT44(uVar31,uVar29),in_XMM1_Qa,(AlertWindow *)this_00,plVar4,1,
                        (int *)&lStack_98,&uStack_70,(ulong)param_6);
    lStack_98 = 0x1b;
    uStack_90 = 0;
    puVar23 = &uStack_80;
    puVar16 = (uint *)&lStack_98;
  }
LAB_0020e466:
  AlertWindow::addButton
            (uVar30,in_XMM1_Qa,(AlertWindow *)this_00,plVar20,0,(int *)puVar16,puVar23,
             (ulong)param_6);
  return this_00;
joined_r0x0020dbca:
  if (pCVar5 == this_00) goto LAB_0020dbe2;
  if (pCVar5 == (Component *)0x0) {
    CVar7 = (Component)0x0;
    goto LAB_0020dbea;
  }
  pCVar5 = *(Component **)(pCVar5 + 0x30);
  goto joined_r0x0020dbca;
}


