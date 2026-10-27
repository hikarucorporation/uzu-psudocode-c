// Function : createAlertWindow
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020d920
// Prototype: Component * createAlertWindow(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, long * param_4, undefined8 * param_5, uint * param_6, uint * param_7, uint * param_8, undefined4 param_9, int param_10, long * param_11)
// Body     : 0020d920 - 0020e47e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LookAndFeel_V2::createAlertWindow(juce::String const&, juce::String const&, juce::String
   const&, juce::String const&, juce::String const&, juce::MessageBoxIconType, int,
   juce::Component*) */

Component * __thiscall
juce::LookAndFeel_V2::createAlertWindow
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,long *param_4,
          undefined8 *param_5,uint *param_6,uint *param_7,uint *param_8,undefined4 param_9,
          int param_10,long *param_11)

{
  long *plVar1;
  Label *this;
  long lVar2;
  byte bVar3;
  Component *pCVar4;
  long *plVar5;
  Component *pCVar6;
  undefined4 uVar7;
  Component CVar8;
  uint uVar9;
  int iVar10;
  wint_t wVar11;
  wint_t wVar12;
  Component *this_00;
  Timer *this_01;
  void *pvVar13;
  undefined4 *puVar14;
  String *pSVar15;
  undefined8 *puVar16;
  uint *puVar17;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  size_t __n;
  uint *puVar21;
  long lVar22;
  int *piVar23;
  uint *puVar24;
  byte *pbVar25;
  ulong uVar26;
  byte *pbVar27;
  uint uVar28;
  float fVar29;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 uVar32;
  long local_98;
  undefined4 local_90;
  uint *local_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  Component *local_60;
  uint *local_58;
  Component *local_50;
  uint *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar24 = param_7;
  local_88 = param_6;
  local_48 = param_8;
  this_00 = operator_new(0x430);
  *(undefined ***)this_00 = &PTR__Component_00707878;
  lVar22 = *param_4;
  *(long *)(this_00 + 8) = lVar22;
  piVar23 = (int *)(lVar22 + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    *piVar23 = *piVar23 + 1;
    UNLOCK();
    lVar22 = *param_4;
  }
  pbVar25 = &DAT_0061ac58;
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
  piVar23 = (int *)(lVar22 + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    *piVar23 = *piVar23 + 1;
    UNLOCK();
    lVar22 = *param_4;
  }
  LOCK();
  lVar2 = *(long *)(this_00 + 0x18);
  *(long *)(this_00 + 0x18) = lVar22;
  UNLOCK();
  piVar23 = (int *)(lVar2 + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    iVar10 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar23);
    }
  }
                    /* try { // try from 0020da48 to 0020daa5 has its CatchHandler @ 0020e51f */
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
    uVar9 = *(uint *)(this_01 + 0x38);
    iVar10 = *(int *)(this_01 + 0x3c);
    detail::TopLevelWindowManager::singletonHolder = this_01;
    if ((int)uVar9 <= iVar10) goto LAB_0020db10;
  }
  else {
    uVar9 = *(uint *)(detail::TopLevelWindowManager::singletonHolder + 0x38);
    iVar10 = *(int *)(detail::TopLevelWindowManager::singletonHolder + 0x3c);
    this_01 = detail::TopLevelWindowManager::singletonHolder;
    if ((int)uVar9 <= iVar10) {
LAB_0020db10:
      this_01 = detail::TopLevelWindowManager::singletonHolder;
      uVar28 = iVar10 + ((iVar10 - (iVar10 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (uVar9 != uVar28) {
        if ((int)uVar28 < 1) {
          free(*(void **)(detail::TopLevelWindowManager::singletonHolder + 0x30));
          *(undefined8 *)(this_01 + 0x30) = 0;
        }
        else {
          pvVar13 = realloc(*(void **)(detail::TopLevelWindowManager::singletonHolder + 0x30),
                            (ulong)uVar28 << 3);
          *(void **)(this_01 + 0x30) = pvVar13;
        }
      }
      *(uint *)(this_01 + 0x38) = uVar28;
      iVar10 = *(int *)(this_01 + 0x3c);
    }
  }
  *(int *)(this_01 + 0x3c) = iVar10 + 1;
  *(Component **)(*(long *)(this_01 + 0x30) + (long)iVar10 * 8) = this_00;
  iVar10 = *(int *)(this_01 + 0x10);
  *(undefined4 *)(this_01 + 0x10) = 10;
  if (iVar10 == 0) {
                    /* try { // try from 0020db97 to 0020db9e has its CatchHandler @ 0020e48e */
    Timer::TimerThread::addTimer(*(TimerThread **)(this_01 + 0x18),(long)this_01);
    pCVar4 = *(Component **)(this_01 + 0x40);
  }
  else {
    Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this_01 + 0x18),(long)this_01);
    pCVar4 = *(Component **)(this_01 + 0x40);
  }
  for (; pCVar4 != this_00; pCVar4 = *(Component **)(pCVar4 + 0x30)) {
    pCVar6 = Component::currentlyFocusedComponent;
    if (pCVar4 == (Component *)0x0) goto joined_r0x0020dbca;
  }
LAB_0020dbe2:
                    /* try { // try from 0020dbe2 to 0020dbe9 has its CatchHandler @ 0020e51f */
  uVar9 = Component::isShowing(this_00);
  CVar8 = SUB41(uVar9,0);
LAB_0020dbea:
  this_00[0xef] = CVar8;
  *(undefined ***)this_00 = &PTR__AlertWindow_0070c970;
  local_60 = this_00 + 0xf8;
  *(undefined1 **)(this_00 + 0xf8) = &DAT_0061ac58;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(undefined8 *)(this_00 + 0x110) = 0;
  *(undefined4 *)(this_00 + 0x118) = 9;
  this = (Label *)(this_00 + 0x120);
  local_70 = 0x61ac58;
  uStack_6c = 0;
  local_80 = 0x61ac58;
  uStack_7c = 0;
                    /* try { // try from 0020dc3d to 0020dc4e has its CatchHandler @ 0020e4c6 */
  Label::Label(this,(long *)&local_70,(long *)&local_80);
  *(undefined4 *)(this_00 + 0x338) = param_9;
  *(undefined ***)(this_00 + 0x340) = &PTR__ComponentBoundsConstrainer_00708960;
  uVar31 = _UNK_005dca88;
  *(undefined8 *)(this_00 + 0x348) = _DAT_005dca80;
  *(undefined8 *)(this_00 + 0x350) = uVar31;
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
  local_58 = param_7;
  if (param_11 == (long *)0x0) {
    *(undefined8 *)(this_00 + 0x420) = 0;
    this_00[0x428] = (Component)0x1;
    fVar29 = DAT_005d9038;
  }
  else {
    puVar16 = (undefined8 *)param_11[0x1b];
    if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 0020e189 to 0020e192 has its CatchHandler @ 0020e47f */
      puVar16 = operator_new(0x18);
      *(undefined4 *)(puVar16 + 1) = 0;
      *puVar16 = &PTR__ReferenceCountedObject_00714b80;
      puVar16[2] = param_11;
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      plVar5 = (long *)param_11[0x1b];
      param_11[0x1b] = (long)puVar16;
      if (plVar5 == (long *)0x0) goto LAB_0020dd0e;
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
      puVar16 = (undefined8 *)param_11[0x1b];
      *(undefined8 **)(this_00 + 0x420) = puVar16;
      if (puVar16 != (undefined8 *)0x0) goto LAB_0020dd15;
    }
    else {
LAB_0020dd0e:
      *(undefined8 **)(this_00 + 0x420) = puVar16;
LAB_0020dd15:
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
    }
    this_00[0x428] = (Component)0x1;
                    /* try { // try from 0020dd21 to 0020de94 has its CatchHandler @ 0020e54e */
    fVar29 = Component::getApproximateScaleFactorForComponent(param_11);
  }
  puVar17 = (uint *)&local_98;
  *(float *)(this_00 + 0x42c) = fVar29;
  Component::setAlwaysOnTop(this_00,(ushort)(0 < WindowUtilsInternal::numAlwaysOnTopPeers));
  Component::setColour((Component *)this,0x1000281,_ZN4juce7ColoursL16transparentBlackE_5);
  Component::setColour((Component *)this,0x1000280,_ZN4juce7ColoursL16transparentBlackE_5);
  Component::setColour((Component *)this,0x1000282,_ZN4juce7ColoursL16transparentBlackE_5);
  this_00[0x20a] = this_00[0x20a];
  *(ushort *)(this_00 + 0x208) = (ushort)*(undefined3 *)(this_00 + 0x208) & 0xffe7 | 8;
  (**(code **)(*(long *)(this_00 + 0x120) + 0x60))(this,1);
  uVar31 = Component::addChildComponent(this_00,(Component *)this,0xffffffff);
  if (*(char *)*param_5 == '\0') {
                    /* try { // try from 0020e12c to 0020e135 has its CatchHandler @ 0020e489 */
    puVar14 = operator_new__(0x1b);
    LOCK();
    *puVar14 = 0;
    UNLOCK();
    *(undefined8 *)(puVar14 + 2) = 4;
    *(undefined2 *)(puVar14 + 4) = 0x20;
    lVar22 = *(long *)local_60;
    *(undefined4 **)local_60 = puVar14 + 4;
    piVar23 = (int *)(lVar22 + -0x10);
    uVar31 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
    if (piVar23 != &emptyString) {
      LOCK();
      iVar10 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      uVar31 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
      if (iVar10 == 0) {
        operator_delete__(piVar23);
        uVar31 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
      }
    }
  }
  local_50 = this_00 + 0x358;
  pbVar27 = (byte *)*param_5;
  iVar10 = 0x800;
  pbVar19 = pbVar27;
  do {
    bVar3 = *pbVar19;
    if (bVar3 == 0) {
      if (pbVar27 != &DAT_0061ac58) {
        LOCK();
        *(int *)(pbVar27 + -0x10) = *(int *)(pbVar27 + -0x10) + 1;
        UNLOCK();
      }
      pbVar19 = *(byte **)local_60;
      if (pbVar19 != pbVar27) goto LAB_0020decf;
      goto LAB_0020e088;
    }
    pbVar20 = pbVar19 + 1;
    if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
      if ((bVar3 & 0x20) == 0) {
        pbVar20 = pbVar19 + 2;
      }
      else {
        pbVar20 = pbVar19 + (4 - (ulong)((bVar3 & 0x10) == 0));
      }
    }
    iVar10 = iVar10 + -1;
    pbVar19 = pbVar20;
  } while (iVar10 != 0);
  if ((pbVar27 != (byte *)0x0) && (*pbVar27 != 0)) {
    __n = (long)pbVar20 - (long)pbVar27;
    uVar26 = __n + 4 & 0xfffffffffffffffc;
    puVar14 = operator_new__(uVar26 + 0x17);
    LOCK();
    *puVar14 = 0;
    UNLOCK();
    *(ulong *)(puVar14 + 2) = uVar26;
    pbVar25 = (byte *)(puVar14 + 4);
    memcpy(pbVar25,pbVar27,__n);
    uVar31 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    *(undefined1 *)((long)puVar14 + __n + 0x10) = 0;
  }
  pbVar19 = *(byte **)local_60;
  pbVar27 = pbVar25;
  if (pbVar19 != pbVar25) {
LAB_0020decf:
    uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar19,pbVar27);
    uVar31 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    if (uVar9 != 0) {
      pbVar25 = pbVar27 + -0x10;
      if (pbVar25 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar25 = *(int *)pbVar25 + 1;
        UNLOCK();
      }
      LOCK();
      lVar22 = *(long *)local_60;
      *(byte **)local_60 = pbVar27;
      UNLOCK();
      piVar23 = (int *)(lVar22 + -0x10);
      if (piVar23 != &emptyString) {
        LOCK();
        iVar10 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          operator_delete__(piVar23);
        }
      }
      local_98 = *(long *)(this_00 + 8);
      piVar23 = (int *)(local_98 + -0x10);
      if (piVar23 != &emptyString) {
        LOCK();
        *piVar23 = *piVar23 + 1;
        UNLOCK();
      }
                    /* try { // try from 0020df3d to 0020df55 has its CatchHandler @ 0020e4c4 */
      juce::String::appendCharPointer((String *)&local_98,&DAT_005e3916,0x5e3918);
      local_80 = (uint)local_98;
      uStack_7c = (undefined4)((ulong)local_98 >> 0x20);
      piVar23 = (int *)(local_98 + -0x10);
      if (piVar23 != &emptyString) {
        LOCK();
        *piVar23 = *piVar23 + 1;
        UNLOCK();
      }
                    /* try { // try from 0020df73 to 0020df81 has its CatchHandler @ 0020e496 */
      pSVar15 = juce::String::operator+=((String *)&local_80,(String *)local_60);
      lVar22 = *(long *)pSVar15;
      local_70 = (uint)lVar22;
      uStack_6c = (undefined4)((ulong)lVar22 >> 0x20);
      piVar23 = (int *)(lVar22 + -0x10);
      if (piVar23 != &emptyString) {
        LOCK();
        *piVar23 = *piVar23 + 1;
        UNLOCK();
      }
      piVar23 = (int *)(CONCAT44(uStack_7c,local_80) + -0x10);
      if (piVar23 != &emptyString) {
        LOCK();
        iVar10 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          operator_delete__(piVar23);
        }
      }
      piVar23 = (int *)(local_98 + -0x10);
      if (piVar23 != &emptyString) {
        LOCK();
        iVar10 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          operator_delete__(piVar23);
        }
      }
                    /* try { // try from 0020dfeb to 0020e060 has its CatchHandler @ 0020e4d0 */
      uVar31 = Label::setText(this,(long *)&local_70,0);
      piVar23 = (int *)(CONCAT44(uStack_6c,local_70) + -0x10);
      puVar14 = &emptyString;
      if (piVar23 != &emptyString) {
        LOCK();
        *piVar23 = *piVar23 + 1;
        UNLOCK();
      }
      LOCK();
      lVar22 = *(long *)(this_00 + 0x20);
      *(long *)(this_00 + 0x20) = CONCAT44(uStack_6c,local_70);
      UNLOCK();
      piVar23 = (int *)(lVar22 + -0x10);
      uVar18 = extraout_RDX;
      if (piVar23 != &emptyString) {
        LOCK();
        iVar10 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          operator_delete__(piVar23);
          uVar31 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
          uVar18 = extraout_RDX_00;
        }
      }
      AlertWindow::updateLayout(uVar31,param_2_00,this_00,1,uVar18,puVar14,puVar24,(ulong)param_8);
      uVar31 = Component::internalRepaintUnchecked
                         ((long)this_00,0,*(ulong *)(this_00 + 0x40),'\x01');
      piVar23 = (int *)(CONCAT44(uStack_6c,local_70) + -0x10);
      if (piVar23 != &emptyString) {
        LOCK();
        iVar10 = *piVar23;
        *piVar23 = *piVar23 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          operator_delete__(piVar23);
          uVar31 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
        }
      }
    }
  }
LAB_0020e088:
  pbVar27 = pbVar27 + -0x10;
  if (pbVar27 != (byte *)&emptyString) {
    LOCK();
    iVar10 = *(int *)pbVar27;
    *(int *)pbVar27 = *(int *)pbVar27 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(pbVar27);
      uVar31 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
    }
  }
                    /* try { // try from 0020e0af to 0020e0b6 has its CatchHandler @ 0020e54e */
  AlertWindow::lookAndFeelChanged(uVar31,param_2_00,(AlertWindow *)this_00);
  puVar21 = local_58;
  puVar24 = local_88;
  uVar7 = _UNK_005dd04c;
  uVar32 = _UNK_005dd048;
  uVar30 = _UNK_005dd044;
  uVar31 = CONCAT44(_UNK_005dd044,_DAT_005dd040);
  *(undefined4 *)local_50 = _DAT_005dd040;
  *(undefined4 *)(local_50 + 4) = uVar30;
  *(undefined4 *)(local_50 + 8) = uVar32;
  *(undefined4 *)(local_50 + 0xc) = uVar7;
  if (param_10 == 1) {
    local_70 = 0x1b;
    uStack_6c = 0;
    local_68 = 0;
    local_80 = 0xd;
    uStack_7c = 0;
    local_78 = 0;
    puVar24 = &local_80;
    puVar17 = &local_70;
    puVar21 = local_88;
    goto LAB_0020e466;
  }
  pbVar25 = *(byte **)local_88;
  bVar3 = *pbVar25;
  uVar9 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    uVar9 = (uint)bVar3;
    if ((bVar3 & 0x40) == 0) {
      uVar9 = uVar9 & 0x7f;
    }
    else {
      uVar28 = 0x3f;
      if ((bVar3 & 0x20) != 0) {
        uVar28 = uVar9 & 0x10 ^ 0x1f;
      }
      uVar9 = uVar28 & uVar9;
      if (((((pbVar25[1] & 0xc0) == 0x80) &&
           (uVar9 = pbVar25[1] & 0x3f | uVar9 << 6, (bVar3 & 0x20) != 0)) &&
          ((pbVar25[2] & 0xc0) == 0x80)) &&
         ((uVar9 = pbVar25[2] & 0x3f | uVar9 << 6, (bVar3 >> 5 & (bVar3 & 0x10) == 0) == 0 &&
          ((pbVar25[3] & 0xffffffc0) == 0x80)))) {
        uVar9 = uVar9 << 6 | pbVar25[3] & 0x3f;
      }
    }
  }
  wVar11 = towlower(uVar9);
  uStack_6c = 0;
  local_68 = 0;
  pbVar25 = *(byte **)puVar21;
  bVar3 = *pbVar25;
  uVar9 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    uVar9 = (uint)bVar3;
    if ((bVar3 & 0x40) == 0) {
      uVar9 = uVar9 & 0x7f;
    }
    else {
      uVar28 = 0x3f;
      if ((bVar3 & 0x20) != 0) {
        uVar28 = uVar9 & 0x10 ^ 0x1f;
      }
      uVar9 = uVar28 & uVar9;
      if ((((pbVar25[1] & 0xc0) == 0x80) &&
          (uVar9 = pbVar25[1] & 0x3f | uVar9 << 6, (bVar3 & 0x20) != 0)) &&
         (((pbVar25[2] & 0xc0) == 0x80 &&
          ((uVar9 = pbVar25[2] & 0x3f | uVar9 << 6, (bVar3 >> 5 & (bVar3 & 0x10) == 0) == 0 &&
           ((pbVar25[3] & 0xffffffc0) == 0x80)))))) {
        uVar9 = uVar9 << 6 | pbVar25[3] & 0x3f;
      }
    }
  }
  local_70 = wVar11;
  wVar12 = towlower(uVar9);
  uStack_7c = 0;
  local_78 = 0;
  uVar30 = extraout_XMM0_Da_06;
  uVar32 = extraout_XMM0_Db_06;
  if (wVar11 == wVar12) {
LAB_0020e379:
    local_80 = 0;
    uStack_7c = 0;
    local_78 = 0;
  }
  else {
    local_80 = wVar12;
    if (((int)wVar11 < 0x100) && ((int)wVar12 < 0x100)) {
      wVar11 = towlower(wVar11);
      wVar12 = towlower(wVar12);
      uVar30 = extraout_XMM0_Da_07;
      uVar32 = extraout_XMM0_Db_07;
      if (wVar11 == wVar12) goto LAB_0020e379;
    }
  }
  if (param_10 == 3) {
    local_90 = 0;
    local_98 = 0;
    uVar31 = AlertWindow::addButton
                       (CONCAT44(uVar32,uVar30),param_2_00,(AlertWindow *)this_00,(long *)puVar24,1,
                        (int *)&local_70,(uint *)&local_98,(ulong)param_8);
    local_90 = 0;
    local_98 = 0;
    uVar31 = AlertWindow::addButton
                       (uVar31,param_2_00,(AlertWindow *)this_00,(long *)puVar21,2,(int *)&local_80,
                        (uint *)&local_98,(ulong)param_8);
    local_98 = 0x1b;
    local_90 = 0;
    local_38 = 0;
    local_40 = 0;
    puVar24 = (uint *)&local_40;
    puVar21 = local_48;
  }
  else {
    if (param_10 != 2) {
      return this_00;
    }
    local_98 = 0xd;
    local_90 = 0;
    uVar31 = AlertWindow::addButton
                       (CONCAT44(uVar32,uVar30),param_2_00,(AlertWindow *)this_00,(long *)puVar24,1,
                        (int *)&local_98,&local_70,(ulong)param_8);
    local_98 = 0x1b;
    local_90 = 0;
    puVar24 = &local_80;
    puVar17 = (uint *)&local_98;
  }
LAB_0020e466:
  AlertWindow::addButton
            (uVar31,param_2_00,(AlertWindow *)this_00,(long *)puVar21,0,(int *)puVar17,puVar24,
             (ulong)param_8);
  return this_00;
joined_r0x0020dbca:
  if (pCVar6 == this_00) goto LAB_0020dbe2;
  if (pCVar6 == (Component *)0x0) {
    CVar8 = (Component)0x0;
    goto LAB_0020dbea;
  }
  pCVar6 = *(Component **)(pCVar6 + 0x30);
  goto joined_r0x0020dbca;
}


