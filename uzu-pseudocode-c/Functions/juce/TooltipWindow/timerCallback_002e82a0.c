// Function : timerCallback
// Namespace: juce:TooltipWindow
// Entry    : 002e82a0
// Prototype: undefined timerCallback(TooltipWindow * this)
// Body     : 002e82a0 - 002e8856


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::TooltipWindow::timerCallback() */

void __thiscall juce::TooltipWindow::timerCallback(TooltipWindow *this)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  MouseInputSourceImpl *this_00;
  long *plVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  Desktop *pDVar8;
  long lVar9;
  undefined8 *puVar10;
  TooltipWindow *pTVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  byte *pbVar15;
  long lVar16;
  bool bVar17;
  float fVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar19;
  float fVar20;
  float fVar21;
  byte *local_80;
  undefined8 local_78;
  float local_6c;
  undefined1 local_68 [16];
  MouseInputSourceImpl *local_58;
  timespec local_50;
  undefined8 *local_40;
  byte **local_38;
  
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002e82ca to 002e82d1 has its CatchHandler @ 002e88cf */
    Desktop::Desktop(pDVar8);
    Desktop::instance = pDVar8;
  }
  this_00 = (MouseInputSourceImpl *)**(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28);
  if ((*(int *)(this_00 + 0x14) == 1) || (*(long *)(this_00 + 0x48) == 0)) {
    lVar16 = 0;
    cVar3 = **(char **)(this + 0x138);
  }
  else {
    lVar16 = *(long *)(*(long *)(this_00 + 0x48) + 0x10);
    cVar3 = **(char **)(this + 0x138);
  }
  local_58 = this_00;
  if (cVar3 != '\0') {
    if ((lVar16 == 0) || (this[0x14d] != (TooltipWindow)0x0)) {
                    /* try { // try from 002e835b to 002e8362 has its CatchHandler @ 002e88c7 */
      hideTip(this);
      return;
    }
    return;
  }
  if (lVar16 != 0) {
    if (*(long *)(this + 0x30) != 0) {
      lVar12 = 0;
      lVar9 = lVar16;
      do {
        if ((*(ushort *)(lVar9 + 0xe8) & 1) != 0) {
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e837e to 002e8387 has its CatchHandler @ 002e8883 */
            pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002e838b to 002e8392 has its CatchHandler @ 002e8870 */
            Desktop::Desktop(pDVar8);
            Desktop::instance = pDVar8;
          }
          if ((long)*(int *)(Desktop::instance + 0xdc) == 0) goto LAB_002e83d3;
          lVar13 = 0;
          goto LAB_002e83c0;
        }
        lVar9 = *(long *)(lVar9 + 0x30);
      } while (lVar9 != 0);
      goto LAB_002e83d5;
    }
    goto LAB_002e844e;
  }
  local_80 = &DAT_0061ac58;
  goto LAB_002e8462;
  while (lVar13 = lVar13 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar13) {
LAB_002e83c0:
    lVar12 = *(long *)(*(long *)(Desktop::instance + 0xd0) + lVar13);
    if (*(long *)(lVar12 + 8) == lVar9) goto LAB_002e83d5;
  }
LAB_002e83d3:
  lVar12 = 0;
LAB_002e83d5:
  lVar9 = 0;
  pTVar11 = this;
  do {
    if ((*(ushort *)(pTVar11 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e83fb to 002e8404 has its CatchHandler @ 002e886e */
        pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002e8408 to 002e840f has its CatchHandler @ 002e886c */
        Desktop::Desktop(pDVar8);
        Desktop::instance = pDVar8;
      }
      if ((long)*(int *)(Desktop::instance + 0xdc) == 0) goto LAB_002e8443;
      lVar13 = 0;
      goto LAB_002e8430;
    }
    pTVar11 = *(TooltipWindow **)(pTVar11 + 0x30);
  } while (pTVar11 != (TooltipWindow *)0x0);
  goto LAB_002e8445;
  while (lVar13 = lVar13 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar13) {
LAB_002e8430:
    lVar9 = *(long *)(*(long *)(Desktop::instance + 0xd0) + lVar13);
    if (*(TooltipWindow **)(lVar9 + 8) == pTVar11) goto LAB_002e8445;
  }
LAB_002e8443:
  lVar9 = 0;
LAB_002e8445:
  if (lVar12 != lVar9) {
    return;
  }
LAB_002e844e:
                    /* try { // try from 002e8451 to 002e8461 has its CatchHandler @ 002e888d */
  (**(code **)(*(long *)this + 0x198))(&local_80,this,lVar16);
LAB_002e8462:
  local_78 = detail::MouseInputSourceImpl::getScreenPosition(this_00);
  local_68._8_4_ = extraout_XMM0_Dc;
  local_68._0_8_ = local_78;
  local_68._12_4_ = extraout_XMM0_Dd;
  local_6c = hypotf((float)local_78 - (float)*(undefined8 *)(this + 0x118),
                    (float)((ulong)local_78 >> 0x20) -
                    (float)((ulong)*(undefined8 *)(this + 0x118) >> 0x20));
  *(undefined8 *)(this + 0x118) = local_68._0_8_;
  if (local_80 == *(byte **)(this + 0x130)) {
LAB_002e84bc:
    if (*(long *)(this + 0x120) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)(this + 0x120) + 0x10);
    }
    bVar17 = lVar9 != lVar16;
  }
  else {
    uVar6 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (local_80,*(byte **)(this + 0x130));
    bVar17 = true;
    if (uVar6 == 0) goto LAB_002e84bc;
  }
  uVar6 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_50);
    auVar5 = SEXT816(local_50.tv_nsec / 1000 + local_50.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar6 = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar6) ||
       (uVar6 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar6;
    }
  }
  if (lVar16 == 0) {
LAB_002e85cb:
    plVar4 = *(long **)(this + 0x120);
    *(undefined8 *)(this + 0x120) = 0;
  }
  else {
    puVar10 = *(undefined8 **)(lVar16 + 0xd8);
    if (puVar10 == (undefined8 *)0x0) {
                    /* try { // try from 002e857b to 002e8584 has its CatchHandler @ 002e888b */
      puVar10 = operator_new(0x18);
      *(undefined4 *)(puVar10 + 1) = 0;
      *puVar10 = &PTR__ReferenceCountedObject_00714b80;
      puVar10[2] = lVar16;
      LOCK();
      *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
      UNLOCK();
      plVar4 = *(long **)(lVar16 + 0xd8);
      *(undefined8 **)(lVar16 + 0xd8) = puVar10;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
        puVar10 = *(undefined8 **)(lVar16 + 0xd8);
        if (puVar10 == (undefined8 *)0x0) goto LAB_002e85cb;
      }
    }
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
    plVar4 = *(long **)(this + 0x120);
    *(undefined8 **)(this + 0x120) = puVar10;
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  pbVar15 = local_80 + -0x10;
  if (pbVar15 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar15 = *(int *)pbVar15 + 1;
    UNLOCK();
  }
  LOCK();
  lVar9 = *(long *)(this + 0x130);
  *(byte **)(this + 0x130) = local_80;
  UNLOCK();
  piVar14 = (int *)(lVar9 + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    iVar2 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar14);
    }
  }
  if ((DAT_005d9074 < local_6c) || ((bool)(this[0x14d] != (TooltipWindow)0x0 | bVar17))) {
    *(uint *)(this + 0x144) = uVar6;
  }
  local_50.tv_nsec = (long)&local_58;
  local_40 = &local_78;
  local_38 = &local_80;
  local_50.tv_sec = (__time_t)this;
  if (((*(ushort *)(this + 0xe8) & 2) == 0) && (*(int *)(this + 0x148) + 500U <= uVar6)) {
    if (((*local_80 != 0) && (local_80 != *(byte **)(this + 0x128))) &&
       ((uVar7 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (local_80,*(byte **)(this + 0x128)), uVar7 != 0 &&
        ((uint)(*(int *)(this + 0x140) + *(int *)(this + 0x144)) < uVar6)))) {
      timerCallback()::$_159::operator()((__159 *)&local_50);
    }
    goto LAB_002e87d3;
  }
  if ((lVar16 == 0) || ((this[0x14d] != (TooltipWindow)0x0 || (*local_80 == 0)))) {
    hideTip(this);
    goto LAB_002e87d3;
  }
  if (!bVar17) goto LAB_002e87d3;
  local_68._8_8_ = 0;
  local_68._0_8_ = *(ulong *)(local_58 + 0x70);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e86db to 002e86e4 has its CatchHandler @ 002e886a */
    pDVar8 = operator_new(0x1d0);
                    /* try { // try from 002e86e8 to 002e86ef has its CatchHandler @ 002e8857 */
    Desktop::Desktop(pDVar8);
    Desktop::instance = pDVar8;
  }
  fVar18 = *(float *)(Desktop::instance + 0x130);
  fVar19 = (float)(_DAT_005d91c0 & (uint)fVar18);
  if (fVar19 == DAT_005d94c8) {
    if ((fVar18 != DAT_005d9038) || (NAN(fVar18) || NAN(DAT_005d9038))) {
LAB_002e874f:
      auVar5._4_4_ = fVar18;
      auVar5._0_4_ = fVar18;
      auVar5._8_4_ = fVar18;
      auVar5._12_4_ = fVar18;
      local_68 = divps(local_68,auVar5);
    }
  }
  else {
    fVar20 = (float)((uint)(DAT_005d9054 + fVar18) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar20) {
      fVar21 = DAT_005d9038;
      if (DAT_005d9038 <= fVar19) {
        fVar21 = fVar19;
      }
      if (fVar21 * DAT_005d94d0 < fVar20) goto LAB_002e874f;
    }
  }
  fVar18 = (float)*(undefined8 *)(this + 0x118);
  if ((((float)local_68._0_4_ != fVar18) || (NAN((float)local_68._0_4_) || NAN(fVar18))) ||
     ((float)local_68._4_4_ != (float)((ulong)*(undefined8 *)(this + 0x118) >> 0x20))) {
                    /* try { // try from 002e87bc to 002e883c has its CatchHandler @ 002e8895 */
    displayTipInternal((Component *)this,
                       (ulong)((double)(float)local_78 + DAT_005d9098) & 0xffffffff |
                       (long)((double)local_78._4_4_ + DAT_005d9098) << 0x20,(long *)&local_80);
  }
LAB_002e87d3:
  pbVar15 = local_80 + -0x10;
  if (pbVar15 != (byte *)&emptyString) {
    LOCK();
    iVar2 = *(int *)pbVar15;
    *(int *)pbVar15 = *(int *)pbVar15 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(pbVar15);
    }
  }
  return;
}


