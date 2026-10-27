// Function : MenuWindow
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 00278410
// Prototype: undefined MenuWindow(undefined4 param_1_00, MenuWindow * this, long * param_3, long param_4, undefined8 * param_5, int param_6, undefined8 param_7)
// Body     : 00278410 - 0027a5a9


/* juce::PopupMenu::HelperClasses::MenuWindow::MenuWindow(juce::PopupMenu const&,
   juce::PopupMenu::HelperClasses::MenuWindow*, juce::PopupMenu::Options, bool,
   juce::ApplicationCommandManager**, float) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::MenuWindow
          (undefined4 param_1_00,MenuWindow *this,long *param_3,long param_4,undefined8 *param_5,
          int param_6,undefined8 param_7)

{
  Item *this_00;
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ComponentHelpers *pCVar4;
  long *plVar5;
  ComponentHelpers *pCVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  Desktop *pDVar14;
  ulong uVar15;
  Component *this_01;
  Component *pCVar16;
  Component *pCVar17;
  byte *pbVar18;
  String *pSVar19;
  undefined8 *puVar20;
  long lVar21;
  void *pvVar22;
  wint_t *pwVar23;
  size_t sVar24;
  ulong uVar25;
  ComponentHelpers *this_02;
  MenuWindow *pMVar26;
  LookAndFeel_V4 *pLVar27;
  long *plVar28;
  double dVar29;
  MenuWindow MVar30;
  uint uVar31;
  int iVar32;
  bool bVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  long *plVar41;
  int iVar42;
  long lVar43;
  uint uVar44;
  byte *pbVar45;
  long lVar46;
  int iVar47;
  ulong uVar48;
  int iVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  byte *local_f0;
  ulong local_e8;
  wint_t *local_e0;
  MenuWindow *local_d8;
  wint_t *local_d0;
  MenuWindow *local_c8;
  byte *local_c0;
  int local_b4;
  int local_b0;
  int local_ac;
  double local_a8;
  ulong local_a0;
  timespec local_98;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_44;
  LookAndFeel_V4 *local_40;
  long local_38;
  
  local_b4 = param_6;
  piVar11 = operator_new__(0x1f);
  LOCK();
  *piVar11 = 0;
  UNLOCK();
  piVar11[2] = 8;
  piVar11[3] = 0;
  piVar11[4] = 0x756e656d;
  *(undefined1 *)(piVar11 + 5) = 0;
  *(undefined ***)this = &PTR__Component_00707878;
  *(int **)(this + 8) = piVar11 + 4;
  LOCK();
  *piVar11 = *piVar11 + 1;
  UNLOCK();
  *(undefined1 **)(this + 0x10) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x28) = &DAT_0061ac58;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe5) = 0;
  LOCK();
  iVar42 = *piVar11;
  *piVar11 = *piVar11 + -1;
  UNLOCK();
  if (iVar42 == 0) {
    operator_delete__(piVar11);
  }
  *(undefined ***)this = &PTR__MenuWindow_0070f3d0;
  *(long *)(this + 0xf0) = param_4;
  if (param_4 == 0) {
    if ((param_3[2] == 0) ||
       (pLVar27 = *(LookAndFeel_V4 **)(param_3[2] + 0x10), pLVar27 == (LookAndFeel_V4 *)0x0)) {
      pMVar26 = this;
      do {
        if ((*(long *)(pMVar26 + 0x68) != 0) &&
           (pLVar27 = *(LookAndFeel_V4 **)(*(long *)(pMVar26 + 0x68) + 0x10),
           pLVar27 != (LookAndFeel_V4 *)0x0)) goto LAB_002785d0;
        pMVar26 = *(MenuWindow **)(pMVar26 + 0x30);
      } while (pMVar26 != (MenuWindow *)0x0);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002785a9 to 002785b2 has its CatchHandler @ 0027a5ac */
        pDVar14 = operator_new(0x1d0);
                    /* try { // try from 002785b6 to 002785bd has its CatchHandler @ 0027a5aa */
        Desktop::Desktop(pDVar14);
        goto LAB_002785be;
      }
      goto LAB_002785c5;
    }
  }
  else {
    lVar12 = param_4;
    do {
      if ((*(long *)(lVar12 + 0x68) != 0) &&
         (pLVar27 = *(LookAndFeel_V4 **)(*(long *)(lVar12 + 0x68) + 0x10),
         pLVar27 != (LookAndFeel_V4 *)0x0)) goto LAB_002785d0;
      lVar12 = *(long *)(lVar12 + 0x30);
    } while (lVar12 != 0);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027854c to 00278555 has its CatchHandler @ 0027a5d2 */
      pDVar14 = operator_new(0x1d0);
                    /* try { // try from 00278559 to 00278560 has its CatchHandler @ 0027a5bf */
      Desktop::Desktop(pDVar14);
LAB_002785be:
      Desktop::instance = pDVar14;
    }
LAB_002785c5:
    pLVar27 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  }
LAB_002785d0:
                    /* try { // try from 002785d8 to 002785e0 has its CatchHandler @ 0027a639 */
  lVar12 = (**(code **)(*(long *)(pLVar27 + 0x40) + 0xa0))(pLVar27 + 0x40,param_5);
  local_98.tv_sec = *param_5;
  local_98.tv_nsec = param_5[1];
  local_88 = (long *)param_5[2];
  if (local_88 != (long *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  local_80 = (long *)param_5[3];
  if (local_80 != (long *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  local_78 = (long *)param_5[4];
  if (local_78 != (long *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  local_70 = (long *)param_5[5];
  if (local_70 != (long *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_68 = param_5[6];
  uStack_60 = param_5[7];
  local_58 = param_5[8];
  uStack_50 = param_5[9];
  if (lVar12 == 0) {
LAB_002786cc:
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = *(long **)(lVar12 + 0xd8);
    if (plVar13 == (long *)0x0) {
                    /* try { // try from 00278679 to 00278682 has its CatchHandler @ 0027a5e5 */
      plVar13 = operator_new(0x18);
      *(undefined4 *)(plVar13 + 1) = 0;
      *plVar13 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar13[2] = lVar12;
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      plVar41 = *(long **)(lVar12 + 0xd8);
      *(long **)(lVar12 + 0xd8) = plVar13;
      if (plVar41 != (long *)0x0) {
        LOCK();
        plVar13 = plVar41 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)(*plVar41 + 8))();
        }
        plVar13 = *(long **)(lVar12 + 0xd8);
        if (plVar13 == (long *)0x0) goto LAB_002786cc;
      }
    }
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_c8 = this + 0xf8;
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar41 = local_80 + 1;
    *(int *)plVar41 = (int)*plVar41 + -1;
    UNLOCK();
    if ((int)*plVar41 == 0) {
      lVar12 = *local_80;
      local_80 = plVar13;
      (**(code **)(lVar12 + 8))();
      plVar13 = local_80;
    }
  }
  local_80 = plVar13;
  *(__time_t *)local_c8 = local_98.tv_sec;
  *(long *)(local_c8 + 8) = local_98.tv_nsec;
  *(long **)(this + 0x108) = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  *(long **)(this + 0x110) = local_80;
  if (local_80 != (long *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  *(long **)(this + 0x118) = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  *(long **)(this + 0x120) = local_70;
  if (local_70 == (long *)0x0) {
    *(undefined8 *)(this + 0x138) = local_58;
    *(undefined8 *)(this + 0x140) = uStack_50;
    *(undefined4 *)(this + 0x128) = (undefined4)local_68;
    *(undefined4 *)(this + 300) = local_68._4_4_;
    *(undefined4 *)(this + 0x130) = (undefined4)uStack_60;
    *(undefined4 *)(this + 0x134) = uStack_60._4_4_;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    *(undefined4 *)(this + 0x138) = (undefined4)local_58;
    *(undefined4 *)(this + 0x13c) = local_58._4_4_;
    *(undefined4 *)(this + 0x140) = (undefined4)uStack_50;
    *(undefined4 *)(this + 0x144) = uStack_50._4_4_;
    *(undefined4 *)(this + 0x128) = (undefined4)local_68;
    *(undefined4 *)(this + 300) = local_68._4_4_;
    *(undefined4 *)(this + 0x130) = (undefined4)uStack_60;
    *(undefined4 *)(this + 0x134) = uStack_60._4_4_;
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar13 = local_70 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)(*local_70 + 8))();
      }
    }
  }
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar13 = local_78 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)(*local_78 + 8))();
    }
  }
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar13 = local_80 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)(*local_80 + 8))();
    }
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar13 = local_88 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  local_d8 = this + 0x148;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = param_7;
  if ((*(long *)(this + 0x108) == 0) ||
     (lVar12 = *(long *)(*(long *)(this + 0x108) + 0x10), lVar12 == 0)) {
    *(undefined8 *)(this + 0x160) = 0;
  }
  else {
    puVar20 = *(undefined8 **)(lVar12 + 0xd8);
    if (puVar20 == (undefined8 *)0x0) {
                    /* try { // try from 00278ab2 to 00278abb has its CatchHandler @ 0027a5d4 */
      puVar20 = operator_new(0x18);
      *(undefined4 *)(puVar20 + 1) = 0;
      *puVar20 = &PTR__ReferenceCountedObject_00714b80;
      puVar20[2] = lVar12;
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
      plVar13 = *(long **)(lVar12 + 0xd8);
      *(undefined8 **)(lVar12 + 0xd8) = puVar20;
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar41 = plVar13 + 1;
        *(int *)plVar41 = (int)*plVar41 + -1;
        UNLOCK();
        if ((int)*plVar41 == 0) {
          (**(code **)(*plVar13 + 8))();
        }
        lVar12 = *(long *)(lVar12 + 0xd8);
        *(long *)(this + 0x160) = lVar12;
        if (lVar12 != 0) {
          LOCK();
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
          UNLOCK();
        }
        goto LAB_0027886c;
      }
    }
    *(undefined8 **)(this + 0x160) = puVar20;
    LOCK();
    *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
    UNLOCK();
  }
LAB_0027886c:
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  clock_gettime(1,&local_98);
  auVar55 = SEXT816(local_98.tv_nsec / 1000 + local_98.tv_sec * 1000000) *
            SEXT816(0x20c49ba5e353f7cf);
  uVar34 = (int)(auVar55._8_8_ >> 7) - (auVar55._12_4_ >> 0x1f);
  if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar34) ||
     (uVar34 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
    LOCK();
    UNLOCK();
    _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar34;
  }
  *(uint *)(this + 0x1a8) = uVar34;
  *(uint *)(this + 0x1ac) = uVar34;
  *(uint *)(this + 0x1b0) = uVar34;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  if (param_4 == 0) {
    param_1_00 = DAT_005d9038;
  }
  *(undefined4 *)(this + 0x1c8) = param_1_00;
  *(undefined2 *)(this + 0x1cc) = 0;
  this[0x1ce] = (MenuWindow)((ModifierKeys::currentModifiers & 0x1f0) == 0);
  this[0xea] = this[0xea];
  *(ushort *)(this + 0xe8) = *(ushort *)(this + 0xe8) & 0xfddf | 0x200;
                    /* try { // try from 0027898e to 0027899a has its CatchHandler @ 0027a64e */
  Component::setAlwaysOnTop((Component *)this,1);
  this[0xea] = this[0xea];
  *(ushort *)(this + 0xe8) = *(ushort *)(this + 0xe8) & 0xff3f | 0x40;
  if (param_4 == 0) {
    if (param_3[2] == 0) {
      pLVar27 = (LookAndFeel_V4 *)0x0;
      lVar12 = *(long *)(this + 0x68);
      goto joined_r0x00279c7f;
    }
    pLVar27 = *(LookAndFeel_V4 **)(param_3[2] + 0x10);
    lVar12 = *(long *)(this + 0x68);
    if (lVar12 == 0) goto LAB_00278a4e;
LAB_00278a04:
    if (*(LookAndFeel_V4 **)(lVar12 + 0x10) != pLVar27) {
LAB_00278a59:
      if (pLVar27 == (LookAndFeel_V4 *)0x0) {
LAB_00278b73:
        plVar13 = *(long **)(this + 0x68);
        *(undefined8 *)(this + 0x68) = 0;
      }
      else {
        puVar20 = *(undefined8 **)(pLVar27 + 0x120);
        if (puVar20 == (undefined8 *)0x0) {
                    /* try { // try from 00278b1b to 00278b24 has its CatchHandler @ 0027a64e */
          puVar20 = operator_new(0x18);
          *(undefined4 *)(puVar20 + 1) = 0;
          *puVar20 = &PTR__ReferenceCountedObject_00710ff8;
          puVar20[2] = pLVar27;
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          plVar13 = *(long **)(pLVar27 + 0x120);
          *(undefined8 **)(pLVar27 + 0x120) = puVar20;
          if (plVar13 != (long *)0x0) {
            LOCK();
            plVar41 = plVar13 + 1;
            *(int *)plVar41 = (int)*plVar41 + -1;
            UNLOCK();
            if ((int)*plVar41 == 0) {
              (**(code **)(*plVar13 + 8))();
            }
            puVar20 = *(undefined8 **)(pLVar27 + 0x120);
            if (puVar20 == (undefined8 *)0x0) goto LAB_00278b73;
          }
        }
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
        plVar13 = *(long **)(this + 0x68);
        *(undefined8 **)(this + 0x68) = puVar20;
      }
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar41 = plVar13 + 1;
        *(int *)plVar41 = (int)*plVar41 + -1;
        UNLOCK();
        if ((int)*plVar41 == 0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
                    /* try { // try from 00278b8f to 00278b96 has its CatchHandler @ 0027a64e */
      Component::sendLookAndFeelChange((Component *)this);
    }
  }
  else {
    lVar12 = param_4;
    do {
      if ((*(long *)(lVar12 + 0x68) != 0) &&
         (pLVar27 = *(LookAndFeel_V4 **)(*(long *)(lVar12 + 0x68) + 0x10),
         pLVar27 != (LookAndFeel_V4 *)0x0)) {
        lVar12 = *(long *)(this + 0x68);
        goto joined_r0x00279c7f;
      }
      lVar12 = *(long *)(lVar12 + 0x30);
    } while (lVar12 != 0);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00278a1e to 00278a27 has its CatchHandler @ 0027a5bd */
      pDVar14 = operator_new(0x1d0);
                    /* try { // try from 00278a2b to 00278a32 has its CatchHandler @ 0027a5bb */
      Desktop::Desktop(pDVar14);
      Desktop::instance = pDVar14;
    }
    pLVar27 = Desktop::getDefaultLookAndFeel(Desktop::instance);
    lVar12 = *(long *)(this + 0x68);
joined_r0x00279c7f:
    if (lVar12 != 0) goto LAB_00278a04;
LAB_00278a4e:
    if (pLVar27 != (LookAndFeel_V4 *)0x0) goto LAB_00278a59;
  }
  pMVar26 = this;
  do {
    if ((*(long *)(pMVar26 + 0x68) != 0) &&
       (pLVar27 = *(LookAndFeel_V4 **)(*(long *)(pMVar26 + 0x68) + 0x10),
       pLVar27 != (LookAndFeel_V4 *)0x0)) {
      lVar12 = *(long *)(this + 0x110);
      goto joined_r0x00278bc5;
    }
    pMVar26 = *(MenuWindow **)(pMVar26 + 0x30);
  } while (pMVar26 != (MenuWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00278bd5 to 00278bde has its CatchHandler @ 0027a5e3 */
    pDVar14 = operator_new(0x1d0);
                    /* try { // try from 00278be2 to 00278be9 has its CatchHandler @ 0027a5e1 */
    Desktop::Desktop(pDVar14);
    Desktop::instance = pDVar14;
  }
  pLVar27 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  lVar12 = *(long *)(this + 0x110);
joined_r0x00278bc5:
  if ((lVar12 == 0) || (*(Component **)(lVar12 + 0x10) == (Component *)0x0)) {
    lVar12 = *(long *)(this + 0xf0);
    if (lVar12 == 0) {
      if (*(long *)(this + 0x108) != 0) {
        lVar12 = *(long *)(*(long *)(this + 0x108) + 0x10);
        goto joined_r0x00278c43;
      }
    }
    else {
joined_r0x00278c43:
      for (; lVar12 != 0; lVar12 = *(long *)(lVar12 + 0x30)) {
        if ((*(byte *)(lVar12 + 0xea) & 0x20) != 0) {
          this[0xea] = (MenuWindow)((byte)this[0xea] | 0x20);
          plVar13 = *(long **)(this + 0xe0);
          *(undefined8 *)(this + 0xe0) = 0;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 8))();
          }
          break;
        }
      }
    }
                    /* try { // try from 00278c8f to 00278ca2 has its CatchHandler @ 0027a641 */
    uVar34 = (**(code **)(*(long *)(pLVar27 + 0x40) + 0x70))(pLVar27 + 0x40);
    Component::addToDesktop((Component *)this,uVar34 | 0x402,0);
  }
  else {
                    /* try { // try from 00278c11 to 00278c1d has its CatchHandler @ 0027a607 */
    Component::addChildComponent(*(Component **)(lVar12 + 0x10),(Component *)this,0xffffffff);
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00278caf to 00278cb8 has its CatchHandler @ 0027a653 */
    pDVar14 = operator_new(0x1d0);
                    /* try { // try from 00278cbc to 00278cc3 has its CatchHandler @ 0027a5fc */
    Desktop::Desktop(pDVar14);
    Desktop::instance = pDVar14;
  }
                    /* try { // try from 00278ccb to 00278d0b has its CatchHandler @ 0027a653 */
  Desktop::addGlobalMouseListener(Desktop::instance,(long)this);
  if (*(long *)(this + 0x110) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)(this + 0x110) + 0x10);
  }
  if ((((param_4 == 0) && (lVar12 == 0)) &&
      (cVar7 = (**(code **)(*(long *)(pLVar27 + 0x40) + 0xb0))(pLVar27 + 0x40,local_c8),
      cVar7 != '\0')) &&
     ((*(long *)(this + 0x108) != 0 &&
      (plVar13 = *(long **)(*(long *)(this + 0x108) + 0x10), plVar13 != (long *)0x0)))) {
                    /* try { // try from 00278d25 to 00278d29 has its CatchHandler @ 0027a5ae */
    fVar51 = Component::getApproximateScaleFactorForComponent(plVar13);
    *(float *)(this + 0x1c8) = fVar51;
  }
  uVar34 = *(uint *)(pLVar27 + 0xf4);
  uVar39 = _ZN4juce7ColoursL5blackE_14;
  if (0 < (int)uVar34) {
    lVar12 = *(long *)(pLVar27 + 0xe8);
    uVar8 = uVar34;
    uVar40 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar12 + (long)(int)uVar40 * 8) == 0x1000700) {
          if (-1 < (int)uVar40) {
            if (uVar34 <= uVar40) goto LAB_00278daa;
            uVar39 = *(uint *)(lVar12 + 4 + (ulong)uVar40 * 8);
          }
          goto joined_r0x00278d99;
        }
        uVar44 = (int)(uVar40 + uVar8) / 2;
        if (uVar44 == uVar40) goto joined_r0x00278d99;
        if (*(int *)(lVar12 + (long)(int)uVar44 * 8) < 0x1000701) break;
        uVar8 = uVar44;
        if ((int)uVar44 <= (int)uVar40) goto joined_r0x00278d99;
      }
      uVar40 = uVar44;
    } while ((int)uVar44 < (int)uVar8);
  }
joined_r0x00278d99:
  if (uVar39 < 0xff000000) {
LAB_00278daa:
                    /* try { // try from 00278daa to 00278db5 has its CatchHandler @ 0027a60c */
    SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
              ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
               XWindowSystem::singletonHolder);
  }
                    /* try { // try from 00278db6 to 00278dc2 has its CatchHandler @ 0027a634 */
  Component::setOpaque((Component *)this,1);
  uVar15 = (ulong)*(uint *)((long)param_3 + 0xc);
  local_40 = pLVar27;
  if (0 < (int)*(uint *)((long)param_3 + 0xc)) {
    local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)(this + 0x13c));
    lVar12 = 0;
LAB_00278e02:
    lVar46 = *param_3;
    lVar43 = lVar12 * 0x70;
    lVar12 = lVar12 + 1;
    if ((lVar12 < (int)uVar15) || (*(char *)(lVar46 + 0x66 + lVar43) == '\0')) {
                    /* try { // try from 00278e1b to 00278e24 has its CatchHandler @ 0027a729 */
      this_01 = operator_new(0x180);
      *(undefined1 **)(this_01 + 8) = &DAT_0061ac58;
      *(undefined1 **)(this_01 + 0x10) = &DAT_0061ac58;
      *(undefined1 **)(this_01 + 0x18) = &DAT_0061ac58;
      *(undefined1 **)(this_01 + 0x20) = &DAT_0061ac58;
      *(undefined1 **)(this_01 + 0x28) = &DAT_0061ac58;
      *(undefined8 *)(this_01 + 0x30) = 0;
      *(undefined8 *)(this_01 + 0x38) = 0;
      *(undefined8 *)(this_01 + 0x40) = 0;
      *(undefined8 *)(this_01 + 0x48) = 0;
      *(undefined8 *)(this_01 + 0x50) = 0;
      *(undefined8 *)(this_01 + 0x58) = 0;
      *(undefined8 *)(this_01 + 0x60) = 0;
      *(undefined8 *)(this_01 + 0x68) = 0;
      *(undefined8 *)(this_01 + 0x70) = 0;
      *(undefined8 *)(this_01 + 0x78) = 0;
      *(undefined8 *)(this_01 + 0x80) = 0;
      *(undefined8 *)(this_01 + 0x88) = 0;
      *(undefined8 *)(this_01 + 0x90) = 0;
      *(undefined8 *)(this_01 + 0x98) = 0;
      *(undefined8 *)(this_01 + 0xa0) = 0;
      *(undefined8 *)(this_01 + 0xa8) = 0;
      *(undefined8 *)(this_01 + 0xb0) = 0;
      *(undefined8 *)(this_01 + 0xb8) = 0;
      *(undefined4 *)(this_01 + 0xc0) = 0;
      *(undefined8 *)(this_01 + 200) = 0;
      *(undefined8 *)(this_01 + 0xd0) = 0;
      *(undefined8 *)(this_01 + 0xd8) = 0;
      *(undefined8 *)(this_01 + 0xe0) = 0;
      *(undefined8 *)(this_01 + 0xe5) = 0;
      *(undefined ***)this_01 = &PTR__ItemComponent_0070f590;
      this_00 = (Item *)(this_01 + 0xf0);
                    /* try { // try from 00278ebb to 00278ec4 has its CatchHandler @ 0027a71a */
      Item::Item(this_00,(long *)(lVar46 + lVar43));
      *(MenuWindow **)(this_01 + 0x160) = this;
      *(MenuWindow **)(this_01 + 0x168) = local_c8;
      lVar21 = *(long *)(lVar46 + 0x40 + lVar43);
      *(long *)(this_01 + 0x170) = lVar21;
      if (lVar21 != 0) {
        *(int *)(lVar21 + 0xf8) = *(int *)(lVar21 + 0xf8) + 1;
      }
      this_01[0x178] = (Component)0x0;
      if (this_01[0x157] != (Component)0x0) {
                    /* try { // try from 00278f0b to 00278f14 has its CatchHandler @ 0027a793 */
        pCVar16 = operator_new(0x110);
        *(undefined1 **)(pCVar16 + 8) = &DAT_0061ac58;
        *(undefined1 **)(pCVar16 + 0x10) = &DAT_0061ac58;
        *(undefined1 **)(pCVar16 + 0x18) = &DAT_0061ac58;
        *(undefined1 **)(pCVar16 + 0x20) = &DAT_0061ac58;
        *(undefined1 **)(pCVar16 + 0x28) = &DAT_0061ac58;
        *(undefined8 *)(pCVar16 + 0x30) = 0;
        *(undefined8 *)(pCVar16 + 0x38) = 0;
        *(undefined8 *)(pCVar16 + 0x40) = 0;
        *(undefined8 *)(pCVar16 + 0x48) = 0;
        *(undefined8 *)(pCVar16 + 0x50) = 0;
        *(undefined8 *)(pCVar16 + 0x58) = 0;
        *(undefined8 *)(pCVar16 + 0x60) = 0;
        *(undefined8 *)(pCVar16 + 0x68) = 0;
        *(undefined8 *)(pCVar16 + 0x70) = 0;
        *(undefined8 *)(pCVar16 + 0x78) = 0;
        *(undefined8 *)(pCVar16 + 0x80) = 0;
        *(undefined8 *)(pCVar16 + 0x88) = 0;
        *(undefined8 *)(pCVar16 + 0x90) = 0;
        *(undefined8 *)(pCVar16 + 0x98) = 0;
        *(undefined8 *)(pCVar16 + 0xa0) = 0;
        *(undefined8 *)(pCVar16 + 0xa8) = 0;
        *(undefined8 *)(pCVar16 + 0xb0) = 0;
        *(undefined8 *)(pCVar16 + 0xb8) = 0;
        *(undefined4 *)(pCVar16 + 0xc0) = 0;
        *(undefined4 *)(pCVar16 + 0xf8) = 0;
        *(undefined2 *)(pCVar16 + 0xfc) = 0;
        *(undefined8 *)(pCVar16 + 0x100) = 0;
        *(undefined8 *)(pCVar16 + 0xd8) = 0;
        *(undefined8 *)(pCVar16 + 0xe0) = 0;
        *(undefined8 *)(pCVar16 + 200) = 0;
        *(undefined8 *)(pCVar16 + 0xd0) = 0;
        *(undefined8 *)(pCVar16 + 0xe5) = 0;
        *(undefined ***)pCVar16 = &PTR__CustomComponent_0070f750;
        *(undefined ***)(pCVar16 + 0xf0) = &PTR__HeaderItemComponent_0070f900;
        *(MenuWindow **)(pCVar16 + 0x108) = local_c8;
                    /* try { // try from 00278fcc to 00278fd8 has its CatchHandler @ 0027a6c9 */
        Component::setName(pCVar16,(long *)this_00);
        pCVar17 = *(Component **)(this_01 + 0x170);
        if (pCVar17 != pCVar16) {
          *(int *)(pCVar16 + 0xf8) = *(int *)(pCVar16 + 0xf8) + 1;
          *(Component **)(this_01 + 0x170) = pCVar16;
          if (pCVar17 != (Component *)0x0) {
            pCVar16 = pCVar17 + 0xf8;
            *(int *)pCVar16 = *(int *)pCVar16 + -1;
            if (*(int *)pCVar16 == 0) {
              (**(code **)(*(long *)pCVar17 + 8))();
            }
          }
        }
                    /* try { // try from 00279010 to 00279086 has its CatchHandler @ 0027a793 */
        Component::setEnabled(this_01,'\0');
        lVar21 = *(long *)(this_01 + 0x170);
      }
      if (lVar21 != 0) {
        *(Item **)(lVar21 + 0x100) = this_00;
        Component::internalRepaintUnchecked(lVar21,0,*(ulong *)(lVar21 + 0x40),'\x01');
        pCVar17 = *(Component **)(this_01 + 0x170);
        (**(code **)(*(long *)pCVar17 + 0x60))(pCVar17,1);
        Component::addChildComponent(this_01,pCVar17,0xffffffff);
      }
      (**(code **)(*(long *)this_01 + 0x60))(this_01,1);
      Component::addChildComponent((Component *)this,this_01,0xffffffff);
      if (((*(long *)(this_01 + 0x140) != 0) && (*(int *)(this_01 + 0xf8) != 0)) &&
         (**(char **)(this_01 + 0x148) == '\0')) {
        local_98.tv_sec = (__time_t)&DAT_0061ac58;
        lVar21 = *(long *)(*(long *)(this_01 + 0x140) + 0x50);
        uVar34 = *(uint *)(lVar21 + 0x74);
        if (0 < (int)uVar34) {
          uVar15 = 0;
          do {
            piVar11 = *(int **)(*(long *)(lVar21 + 0x68) + uVar15 * 8);
            if (*piVar11 == *(int *)(this_01 + 0xf8)) {
              uVar34 = piVar11[5];
              uVar15 = (ulong)uVar34;
              if ((long)(int)uVar34 < 1) {
                if (uVar15 == 0) break;
                local_e0 = (wint_t *)((long)(int)uVar34 * 0xc);
                pwVar23 = (wint_t *)0x0;
              }
              else {
                pvVar22 = *(void **)(piVar11 + 2);
                uVar34 = (uVar34 >> 1) + uVar34 + 8 & 0xfffffff8;
                if ((int)uVar34 < 1) {
                  pwVar23 = (wint_t *)0x0;
                }
                else {
                  pwVar23 = malloc((ulong)uVar34 * 0xc);
                }
                memcpy(pwVar23,pvVar22,uVar15 * 0xc);
                local_e0 = pwVar23 + uVar15 * 3;
              }
              local_d0 = pwVar23;
              goto LAB_002795cf;
            }
            uVar15 = uVar15 + 1;
          } while (uVar34 != uVar15);
        }
        pwVar23 = (wint_t *)0x0;
        goto LAB_002797bf;
      }
      goto LAB_002790b3;
    }
    goto LAB_00278df0;
  }
LAB_00279847:
  uVar3 = *(undefined8 *)(this + 0x100);
  fVar51 = *(float *)(this + 0x1c8);
  fVar53 = (float)(int)*(undefined8 *)(this + 0xf8) / fVar51;
  fVar52 = (float)(int)((ulong)*(undefined8 *)(this + 0xf8) >> 0x20) / fVar51;
  uVar15 = 0x80000000;
  uVar48 = 0x80000000;
  if (DAT_00653430 < fVar53) {
    fVar50 = floorf(fVar53);
    uVar48 = (ulong)(uint)(int)fVar50;
  }
  iVar42 = (int)uVar48;
  fVar50 = (float)(int)((ulong)uVar3 >> 0x20);
  if (DAT_00653430 < fVar52) {
    local_e8 = CONCAT44(local_e8._4_4_,fVar50);
    fVar50 = floorf(fVar52);
    uVar15 = (ulong)(uint)(int)fVar50;
    fVar50 = (float)local_e8;
  }
  fVar53 = fVar53 + (float)(int)uVar3 / fVar51;
  iVar38 = 0x7fffffff;
  iVar49 = 0x7fffffff;
  fVar54 = fVar50 / fVar51;
  if (fVar53 < DAT_00653434) {
    local_e8 = CONCAT44(local_e8._4_4_,fVar50 / fVar51);
    fVar51 = ceilf(fVar53);
    iVar49 = (int)fVar51;
    fVar54 = (float)local_e8;
  }
  if (fVar52 + fVar54 < DAT_00653434) {
    fVar51 = ceilf(fVar52 + fVar54);
    iVar38 = (int)fVar51;
  }
  uVar34 = iVar49 - iVar42;
  uVar39 = iVar38 - (int)uVar15;
  local_e8 = (ulong)uVar39;
  local_d0 = (wint_t *)uVar15;
                    /* try { // try from 0027999d to 002799a6 has its CatchHandler @ 0027a722 */
  auVar55 = getParentArea(this,CONCAT44((int)uVar39 / 2 + (int)uVar15,(int)uVar34 / 2 + iVar42),0);
  fVar51 = *(float *)(this + 0x1c8);
  fVar53 = (float)auVar55._0_4_ / fVar51;
  fVar52 = (float)auVar55._4_4_ / fVar51;
  iVar38 = -0x80000000;
  local_e0 = (wint_t *)CONCAT44(local_e0._4_4_,fVar51);
  if (DAT_00653430 < fVar53) {
    fVar51 = floorf(fVar53);
    iVar38 = (int)fVar51;
    fVar51 = local_e0._0_4_;
  }
  uVar39 = 0x80000000;
  fVar50 = fVar51;
  if (DAT_00653430 < fVar52) {
    fVar50 = floorf(fVar52);
    uVar39 = (uint)fVar50;
    fVar50 = local_e0._0_4_;
  }
  uVar15 = local_e8;
  fVar53 = fVar53 + (float)auVar55._8_4_ / fVar51;
  local_e0._0_4_ = NAN;
  iVar49 = 0x7fffffff;
  if (fVar53 < DAT_00653434) {
    fVar51 = ceilf(fVar53);
    iVar49 = (int)fVar51;
  }
  uVar25 = (long)local_d0 << 0x20;
  fVar52 = fVar52 + (float)auVar55._12_4_ / fVar50;
  if (fVar52 < DAT_00653434) {
    fVar51 = ceilf(fVar52);
    local_e0._0_4_ = (float)(int)fVar51;
    uVar15 = local_e8;
  }
  local_a8 = (double)(uVar25 | uVar48);
  uVar40 = iVar49 - iVar38;
  uVar8 = (int)local_e0._0_4_ - uVar39;
  local_a0 = (ulong)uVar8;
  if ((*(long *)(this + 0x110) != 0) &&
     (pCVar4 = *(ComponentHelpers **)(*(long *)(this + 0x110) + 0x10),
     pCVar4 != (ComponentHelpers *)0x0)) {
    pCVar6 = pCVar4;
    do {
      this_02 = pCVar6;
      pCVar6 = *(ComponentHelpers **)(this_02 + 0x30);
    } while (*(ComponentHelpers **)(this_02 + 0x30) != (ComponentHelpers *)0x0);
                    /* try { // try from 00279b6c to 00279fcb has its CatchHandler @ 0027a722 */
    auVar55 = detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<int>>
                        (this_02,local_a8,(double)((ulong)uVar34 | uVar15 << 0x20));
    if (this_02 != pCVar4) {
      auVar55 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<int>>
                          (this_02,pCVar4,auVar55._0_8_,auVar55._8_8_);
    }
    uVar8 = (uint)local_a0;
    iVar35 = uVar8 - auVar55._12_4_;
    local_e8 = auVar55._8_8_ >> 0x20;
    if ((int)uVar8 < auVar55._12_4_) {
      local_e8 = local_a0;
    }
    local_e8 = local_e8 & 0xffffffff;
    uVar34 = auVar55._8_4_;
    iVar47 = uVar40 - uVar34;
    if ((int)uVar40 < (int)uVar34) {
      uVar34 = uVar40;
    }
    if (iVar47 < 0) {
      iVar47 = 0;
    }
    if (iVar35 < 0) {
      iVar35 = 0;
    }
    iVar9 = auVar55._0_4_;
    iVar42 = iVar47 + iVar38;
    if (iVar9 <= iVar47 + iVar38) {
      iVar42 = iVar9;
    }
    if (iVar9 < iVar38) {
      iVar42 = iVar38;
    }
    uVar31 = auVar55._4_4_;
    uVar44 = iVar35 + uVar39;
    if ((int)uVar31 <= (int)(iVar35 + uVar39)) {
      uVar44 = uVar31;
    }
    if ((int)uVar31 < (int)uVar39) {
      uVar44 = uVar39;
    }
    local_d0 = (wint_t *)(ulong)uVar44;
  }
  iVar35 = uVar8 - 0x18;
  uVar8 = *(uint *)(this + 0x154);
  uVar15 = (ulong)(int)uVar8;
  if ((long)uVar15 < 1) {
    if (uVar8 != 0) {
      plVar13 = *(long **)local_d8;
      goto LAB_00279c47;
    }
    *(undefined4 *)(this + 0x17c) = 1;
LAB_00279c95:
    insertColumnBreaks(this,uVar40 - 0x18,iVar35);
  }
  else {
    uVar15 = (ulong)uVar8;
    plVar13 = *(long **)local_d8;
    if (plVar13[uVar8 - 1] != 0) {
      *(undefined1 *)(plVar13[uVar8 - 1] + 0x158) = 0;
    }
LAB_00279c47:
    plVar41 = plVar13 + uVar15;
    iVar47 = 0;
    do {
      iVar47 = iVar47 + (uint)*(byte *)(*plVar13 + 0x158);
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar41);
    *(int *)(this + 0x17c) = iVar47 + 1;
    if (iVar47 == 0) goto LAB_00279c95;
  }
  workOutManualSize(this,uVar40 - 0x18);
  iVar47 = *(int *)(this + 0x180);
  iVar9 = iVar47;
  if (iVar35 < iVar47) {
    iVar9 = iVar35;
  }
  this[0x178] = (MenuWindow)(iVar35 < iVar47);
  iVar47 = updateYPositions(this);
  if ((char)local_b4 == '\0') {
    iVar10 = (int)uVar34 / 2 + iVar42;
    iVar32 = (int)uVar40 / 2 + iVar38;
    bVar33 = iVar10 < iVar32;
    lVar12 = *(long *)(this + 0xf0);
    if (lVar12 != 0) {
      lVar46 = *(long *)(lVar12 + 0xf0);
      if (lVar46 == 0) {
        iVar36 = iVar49 + -0x20;
      }
      else {
        if (*(int *)(lVar12 + 0x40) / 2 + *(int *)(lVar12 + 0x38) <=
            *(int *)(lVar46 + 0x40) / 2 + *(int *)(lVar46 + 0x38)) {
          bVar33 = iVar42 <= iVar47 + 4 && iVar10 < iVar32;
          goto LAB_00279dd9;
        }
        iVar36 = iVar49 + -4;
      }
      bVar33 = (int)(iVar42 + uVar34 + iVar47) < iVar36 || iVar10 < iVar32;
    }
LAB_00279dd9:
    local_b4 = iVar42 + uVar34;
    iVar32 = iVar49 - local_b4;
    iVar36 = iVar42 - iVar38;
    iVar10 = iVar32;
    if (iVar32 < iVar36) {
      iVar10 = iVar36;
    }
    if (iVar10 + -0x20 < iVar47) {
      iVar47 = iVar10 + -0x20 + (int)uVar34 / 3;
      uVar34 = *(uint *)(this + 0x154);
      uVar15 = (ulong)(int)uVar34;
      local_44 = iVar32;
      if ((long)uVar15 < 1) {
        if (uVar34 != 0) {
          plVar13 = *(long **)local_d8;
          goto LAB_00279e89;
        }
        *(undefined4 *)(this + 0x17c) = 1;
LAB_00279ec1:
        insertColumnBreaks(this,iVar47,iVar35);
      }
      else {
        uVar15 = (ulong)uVar34;
        plVar13 = *(long **)local_d8;
        if (plVar13[uVar34 - 1] != 0) {
          *(undefined1 *)(plVar13[uVar34 - 1] + 0x158) = 0;
        }
LAB_00279e89:
        plVar41 = plVar13 + uVar15;
        iVar9 = 0;
        do {
          iVar9 = iVar9 + (uint)*(byte *)(*plVar13 + 0x158);
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar41);
        *(int *)(this + 0x17c) = iVar9 + 1;
        if (iVar9 == 0) goto LAB_00279ec1;
      }
      workOutManualSize(this,iVar47);
      iVar9 = *(int *)(this + 0x180);
      this[0x178] = (MenuWindow)(iVar35 < iVar9);
      iVar47 = updateYPositions(this);
      if (iVar35 < iVar9) {
        iVar9 = iVar35;
      }
      if (1 < *(int *)(this + 0x17c)) {
        uVar34 = *(uint *)(this + 0x154);
        uVar15 = (ulong)(int)uVar34;
        if ((long)uVar15 < 1) {
          if (uVar34 != 0) {
            plVar13 = *(long **)local_d8;
            goto LAB_00279f4e;
          }
          *(undefined4 *)(this + 0x17c) = 1;
LAB_00279f91:
          insertColumnBreaks(this,iVar10 + -0x24,iVar35);
        }
        else {
          uVar15 = (ulong)uVar34;
          plVar13 = *(long **)local_d8;
          if (plVar13[uVar34 - 1] != 0) {
            *(undefined1 *)(plVar13[uVar34 - 1] + 0x158) = 0;
          }
LAB_00279f4e:
          plVar41 = plVar13 + uVar15;
          iVar47 = 0;
          do {
            iVar47 = iVar47 + (uint)*(byte *)(*plVar13 + 0x158);
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar41);
          *(int *)(this + 0x17c) = iVar47 + 1;
          if (iVar47 == 0) goto LAB_00279f91;
        }
        workOutManualSize(this,iVar10 + -0x24);
        iVar9 = *(int *)(this + 0x180);
        this[0x178] = (MenuWindow)(iVar35 < iVar9);
        iVar47 = updateYPositions(this);
        if (iVar35 < iVar9) {
          iVar9 = iVar35;
        }
      }
      if (local_44 < iVar36) goto LAB_00279fe4;
LAB_00279e58:
      iVar35 = (iVar49 - iVar47) + -4;
      if (local_b4 < iVar35) {
        iVar35 = local_b4;
      }
      iVar10 = 1;
    }
    else {
      if (bVar33) goto LAB_00279e58;
LAB_00279fe4:
      iVar35 = iVar42 - iVar47;
      if (iVar42 - iVar47 <= iVar38 + 4) {
        iVar35 = iVar38 + 4;
      }
      iVar10 = -1;
    }
    pMVar26 = this;
    do {
      if ((*(long *)(pMVar26 + 0x68) != 0) &&
         (pLVar27 = *(LookAndFeel_V4 **)(*(long *)(pMVar26 + 0x68) + 0x10),
         pLVar27 != (LookAndFeel_V4 *)0x0)) goto LAB_0027a060;
      pMVar26 = *(MenuWindow **)(pMVar26 + 0x30);
    } while (pMVar26 != (MenuWindow *)0x0);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027a039 to 0027a042 has its CatchHandler @ 0027a5b9 */
      pDVar14 = operator_new(0x1d0);
                    /* try { // try from 0027a046 to 0027a04d has its CatchHandler @ 0027a5b7 */
      Desktop::Desktop(pDVar14);
      Desktop::instance = pDVar14;
    }
    pLVar27 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027a060:
                    /* try { // try from 0027a068 to 0027a072 has its CatchHandler @ 0027a722 */
    iVar32 = (**(code **)(*(long *)(pLVar27 + 0x40) + 0xc0))(pLVar27 + 0x40,local_c8);
    iVar42 = 0;
    if (iVar32 == 0) {
      iVar42 = iVar10;
    }
    iVar42 = iVar42 + iVar35;
    pMVar26 = this;
    do {
      if ((*(long *)(pMVar26 + 0x68) != 0) &&
         (pLVar27 = *(LookAndFeel_V4 **)(*(long *)(pMVar26 + 0x68) + 0x10),
         pLVar27 != (LookAndFeel_V4 *)0x0)) goto LAB_0027a0e0;
      pMVar26 = *(MenuWindow **)(pMVar26 + 0x30);
    } while (pMVar26 != (MenuWindow *)0x0);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027a0b9 to 0027a0c2 has its CatchHandler @ 0027a5b5 */
      pDVar14 = operator_new(0x1d0);
                    /* try { // try from 0027a0c6 to 0027a0cd has its CatchHandler @ 0027a5b3 */
      Desktop::Desktop(pDVar14);
      Desktop::instance = pDVar14;
    }
    pLVar27 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027a0e0:
                    /* try { // try from 0027a0e8 to 0027a241 has its CatchHandler @ 0027a722 */
    iVar35 = (**(code **)(*(long *)(pLVar27 + 0x40) + 0xc0))(pLVar27 + 0x40,local_c8);
    iVar10 = (int)local_d0;
    if ((int)(((int)(((uint)(local_a0 >> 0x1f) & 1) + (int)local_a0) >> 1) + uVar39) <
        ((int)(((uint)(local_e8 >> 0x1f) & 1) + (int)local_e8) >> 1) + iVar10) {
      uVar34 = ((int)local_e8 + iVar10) - iVar9;
      if ((int)uVar34 <= (int)uVar39) {
        uVar34 = uVar39;
      }
      iVar35 = iVar35 + uVar34;
    }
    else {
      iVar35 = iVar10 - iVar35;
    }
  }
  else {
    iVar36 = (int)local_d0;
    iVar35 = (int)local_e8 + iVar36;
    iVar10 = (int)local_e0._0_4_ - iVar35;
    iVar32 = iVar36 - uVar39;
    if (*(int *)(this + 0x144) == 0) {
      if (iVar10 <= iVar32) {
        iVar35 = iVar36 - iVar9;
      }
      if (iVar9 < iVar32 + -0x1e) {
        iVar35 = iVar36 - iVar9;
      }
    }
    else {
      iVar36 = iVar36 - iVar9;
      if (iVar32 <= iVar10) {
        iVar36 = iVar35;
      }
      if (iVar9 < iVar10 + -0x1e) {
        iVar36 = iVar35;
      }
      iVar35 = iVar36;
    }
  }
  iVar49 = (iVar49 - iVar47) + -6;
  if (iVar42 < iVar49) {
    iVar49 = iVar42;
  }
  if (iVar49 <= iVar38 + 1) {
    iVar49 = iVar38 + 1;
  }
  iVar42 = ((int)local_e0._0_4_ - iVar9) + -6;
  if (iVar35 < iVar42) {
    iVar42 = iVar35;
  }
  if (iVar42 <= (int)(uVar39 + 1)) {
    iVar42 = uVar39 + 1;
  }
  *(int *)(this + 0x168) = iVar49;
  *(int *)(this + 0x16c) = iVar42;
  *(int *)(this + 0x170) = iVar47;
  *(int *)(this + 0x174) = iVar9;
  lVar12 = *(long *)(this + 0xf0);
  if (lVar12 == 0) {
LAB_0027a21b:
    MVar30 = (MenuWindow)0x0;
  }
  else {
    MVar30 = (MenuWindow)0x0;
    if (iVar49 + 4 < *(int *)(lVar12 + 0x170) + *(int *)(lVar12 + 0x168)) {
      iVar38 = iVar47 + -8;
      if (iVar47 < 9) {
        iVar38 = 0;
      }
      iVar35 = iVar9 + -8;
      if (iVar9 < 9) {
        iVar35 = 0;
      }
      if (((*(int *)(lVar12 + 0x174) + *(int *)(lVar12 + 0x16c) <= iVar42 + 4) ||
          (iVar49 + 4 + iVar38 <= *(int *)(lVar12 + 0x168))) ||
         (iVar42 + 4 + iVar35 <= *(int *)(lVar12 + 0x16c))) goto LAB_0027a21b;
      MVar30 = (MenuWindow)0x0;
      if (0 < *(int *)(lVar12 + 0x170)) {
        MVar30 = (MenuWindow)((8 < iVar47 && 8 < iVar9) && 0 < *(int *)(lVar12 + 0x174));
      }
    }
  }
  this[0x179] = MVar30;
  Component::setBounds
            ((Component *)this,(int)*(undefined8 *)(this + 0x168),
             (int)((ulong)*(undefined8 *)(this + 0x168) >> 0x20),*(int *)(this + 0x40),
             *(int *)(this + 0x44));
  iVar42 = *(int *)(this + 0x128);
  if (iVar42 == 0) goto LAB_0027a3ac;
  plVar13 = *(long **)(this + 0x148);
  uVar15 = (ulong)*(int *)(this + 0x154);
  lVar12 = uVar15 * 8;
  if ((long)uVar15 < 4) {
    lVar12 = lVar12 >> 3;
    plVar41 = plVar13;
    if (lVar12 != 1) goto LAB_0027a2ea;
LAB_0027a318:
    if (*(int *)(*plVar41 + 0xf8) != iVar42) goto LAB_0027a3ac;
  }
  else {
    lVar46 = ((uVar15 & 0x1fffffffffffffff) >> 2) + 1;
    plVar5 = plVar13 + 2;
    do {
      plVar41 = plVar5;
      if (*(int *)(plVar41[-2] + 0xf8) == iVar42) {
        plVar41 = plVar41 + -2;
        if (plVar41 != plVar13 + uVar15) goto LAB_0027a334;
        goto LAB_0027a3ac;
      }
      if (*(int *)(plVar41[-1] + 0xf8) == iVar42) {
        plVar41 = plVar41 + -1;
        if (plVar41 != plVar13 + uVar15) goto LAB_0027a334;
        goto LAB_0027a3ac;
      }
      if (*(int *)(*plVar41 + 0xf8) == iVar42) goto LAB_0027a327;
      if (*(int *)(plVar41[1] + 0xf8) == iVar42) {
        plVar41 = plVar41 + 1;
        if (plVar41 != plVar13 + uVar15) goto LAB_0027a334;
        goto LAB_0027a3ac;
      }
      lVar46 = lVar46 + -1;
      lVar12 = lVar12 + -0x20;
      plVar5 = plVar41 + 4;
    } while (1 < lVar46);
    plVar41 = plVar41 + 2;
    lVar12 = lVar12 >> 3;
    if (lVar12 == 1) goto LAB_0027a318;
LAB_0027a2ea:
    if (lVar12 == 2) {
LAB_0027a309:
      if (*(int *)(*plVar41 + 0xf8) != iVar42) {
        plVar41 = plVar41 + 1;
        goto LAB_0027a318;
      }
    }
    else {
      if (lVar12 != 3) goto LAB_0027a3ac;
      if (*(int *)(*plVar41 + 0xf8) != iVar42) {
        plVar41 = plVar41 + 1;
        goto LAB_0027a309;
      }
    }
  }
LAB_0027a327:
  if (plVar41 != plVar13 + uVar15) {
LAB_0027a334:
    if ((*(long *)(this + 0x110) == 0) ||
       (plVar13 = *(long **)(*(long *)(this + 0x110) + 0x10), plVar13 == (long *)0x0)) {
      dVar29 = local_a8;
    }
    else {
      plVar5 = plVar13;
      do {
        plVar28 = plVar5;
        plVar5 = (long *)plVar28[6];
      } while ((long *)plVar28[6] != (long *)0x0);
                    /* try { // try from 0027a35c to 0027a37e has its CatchHandler @ 0027a5dc */
      dVar29 = (double)detail::ComponentHelpers::convertFromParentSpace<juce::Point<int>>
                                 (plVar28,(ulong)local_a8);
      if (plVar28 != plVar13) {
        dVar29 = (double)detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<int>>
                                   ((long)plVar28,plVar13,(ulong)dVar29);
      }
    }
                    /* try { // try from 0027a3a4 to 0027a3ab has its CatchHandler @ 0027a5f5 */
    ensureItemComponentIsVisible
              (this,*plVar41,
               (ulong)(uint)((int)((ulong)dVar29 >> 0x20) - *(int *)(this + 0x16c)) | 0x100000000);
  }
LAB_0027a3ac:
  uVar15 = *(ulong *)(this + 0x168);
  uVar48 = *(ulong *)(this + 0x170);
  iVar38 = (int)(uVar15 >> 0x20);
  iVar42 = *(int *)(this + 0x184);
  iVar49 = (int)(uVar48 >> 0x20);
  if (iVar42 < 0) {
    iVar38 = iVar38 - iVar42;
    uVar34 = iVar49 + iVar42;
    uVar25 = (ulong)uVar34;
    if ((int)uVar34 < 0) {
      uVar25 = 0;
    }
    uVar15 = uVar15 & 0xffffffff;
    uVar48 = uVar48 & 0xffffffff | uVar25 << 0x20;
  }
  else if ((iVar42 != 0) && (0 < iVar49 + (iVar42 - *(int *)(this + 0x180)))) {
    uVar48 = uVar48 & 0xffffffff | (ulong)(uint)-(iVar42 - *(int *)(this + 0x180)) << 0x20;
  }
                    /* try { // try from 0027a411 to 0027a4e1 has its CatchHandler @ 0027a722 */
  Component::setBounds((Component *)this,(int)uVar15,iVar38,(int)uVar48,(int)(uVar48 >> 0x20));
  updateYPositions(this);
  if ((getActiveWindows()::activeMenuWindows == '\0') &&
     (iVar42 = __cxa_guard_acquire(&getActiveWindows()::activeMenuWindows), iVar42 != 0)) {
    __cxa_atexit(Array<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0>::
                 ~Array,&getActiveWindows()::activeMenuWindows,&__dso_handle);
    __cxa_guard_release(&getActiveWindows()::activeMenuWindows);
  }
  if ((int)DAT_0071c8d0 <= DAT_0071c8d4) {
    uVar34 = DAT_0071c8d4 + ((DAT_0071c8d4 - (DAT_0071c8d4 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8
    ;
    if (DAT_0071c8d0 != uVar34) {
      if ((int)uVar34 < 1) {
        free(getActiveWindows()::activeMenuWindows);
        getActiveWindows()::activeMenuWindows = (void *)0x0;
      }
      else {
        getActiveWindows()::activeMenuWindows =
             realloc(getActiveWindows()::activeMenuWindows,(ulong)uVar34 << 3);
      }
    }
    DAT_0071c8d0 = uVar34;
  }
  lVar12 = (long)DAT_0071c8d4;
  DAT_0071c8d4 = DAT_0071c8d4 + 1;
  *(MenuWindow **)((long)getActiveWindows()::activeMenuWindows + lVar12 * 8) = this;
  (**(code **)(*(long *)(local_40 + 0x40) + 0xa8))(local_40 + 0x40,this);
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar14 = operator_new(0x1d0);
                    /* try { // try from 0027a4e5 to 0027a4ec has its CatchHandler @ 0027a5fa */
    Desktop::Desktop(pDVar14);
    Desktop::instance = pDVar14;
  }
  local_38 = **(long **)(*(long *)(Desktop::instance + 0x40) + 0x28);
                    /* try { // try from 0027a507 to 0027a516 has its CatchHandler @ 0027a62f */
  getMouseState(this,&local_38);
  return;
LAB_002795cf:
                    /* try { // try from 002795cf to 002795db has its CatchHandler @ 0027a724 */
  KeyPress::getTextDescription(&local_f0,pwVar23);
  if (*(byte *)local_98.tv_sec != 0) {
                    /* try { // try from 002795e9 to 002796de has its CatchHandler @ 0027a733 */
    juce::String::appendCharPointer((String *)&local_98,&DAT_006577ab,0x6577ad);
  }
  iVar42 = 0;
  pbVar18 = local_f0;
  do {
    bVar1 = *pbVar18;
    if ((char)bVar1 < '\0') {
      do {
        pbVar45 = pbVar18 + 1;
        pbVar18 = pbVar18 + 1;
      } while ((*pbVar45 & 0xc0) == 0x80);
    }
    else {
      pbVar18 = pbVar18 + 1;
      if (bVar1 == 0) break;
    }
    iVar42 = iVar42 + 1;
  } while( true );
  if (iVar42 == 1) {
    bVar1 = *local_f0;
    uVar34 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) != 0) {
        uVar34 = bVar1 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar34 = 0x3f;
        }
        uVar34 = uVar34 & bVar1;
        if ((((local_f0[1] & 0xffffffc0) == 0x80) &&
            (uVar34 = local_f0[1] & 0x3f | uVar34 << 6, (bVar1 & 0x20) != 0)) &&
           (((local_f0[2] & 0xffffffc0) == 0x80 &&
            ((uVar34 = local_f0[2] & 0x3f | uVar34 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
             ((local_f0[3] & 0xffffffc0) == 0x80)))))) {
          uVar34 = uVar34 << 6 | local_f0[3] & 0x3f;
        }
        goto LAB_00279661;
      }
    }
    else {
LAB_00279661:
      if (0x7f < uVar34) goto LAB_00279666;
    }
    juce::String::appendCharPointer((String *)&local_98,"shortcut: \'",0x5e3cd5);
    pSVar19 = juce::String::operator+=((String *)&local_98,(String *)&local_f0);
    local_c0 = (byte *)CONCAT62(local_c0._2_6_,0x27);
    sVar24 = strlen((char *)&local_c0);
    juce::String::appendCharPointer(pSVar19,&local_c0,(long)&local_c0 + sVar24);
  }
  else {
LAB_00279666:
    juce::String::operator+=((String *)&local_98,(String *)&local_f0);
  }
  pbVar18 = local_f0 + -0x10;
  if (pbVar18 != (byte *)&emptyString) {
    LOCK();
    iVar42 = *(int *)pbVar18;
    *(int *)pbVar18 = *(int *)pbVar18 + -1;
    UNLOCK();
    if (iVar42 == 0) {
      operator_delete__(pbVar18);
    }
  }
  pwVar23 = pwVar23 + 3;
  if (pwVar23 == local_e0) goto LAB_002797ba;
  goto LAB_002795cf;
LAB_002797ba:
  pwVar23 = local_d0;
LAB_002797bf:
  free(pwVar23);
                    /* try { // try from 002797c4 to 002797d5 has its CatchHandler @ 0027a646 */
  juce::String::trim((long *)&local_f0,&local_98.tv_sec);
  pbVar18 = *(byte **)(this_01 + 0x148);
  *(byte **)(this_01 + 0x148) = local_f0;
  pbVar45 = pbVar18 + -0x10;
  local_f0 = pbVar18;
  if (pbVar45 != (byte *)&emptyString) {
    LOCK();
    iVar42 = *(int *)pbVar45;
    *(int *)pbVar45 = *(int *)pbVar45 + -1;
    UNLOCK();
    if (iVar42 == 0) {
      operator_delete__(pbVar45);
    }
  }
  pbVar18 = (byte *)(local_98.tv_sec + -0x10);
  if (pbVar18 != (byte *)&emptyString) {
    LOCK();
    iVar42 = *(int *)pbVar18;
    *(int *)pbVar18 = *(int *)pbVar18 + -1;
    UNLOCK();
    if (iVar42 == 0) {
      operator_delete__(pbVar18);
    }
  }
LAB_002790b3:
  local_ac = 0x50;
  local_b0 = 0x10;
  plVar13 = *(long **)(this_01 + 0x170);
  if (plVar13 == (long *)0x0) {
    uVar2 = *(undefined4 *)(*(long *)(this_01 + 0x168) + 0x40);
    pCVar17 = this_01;
    do {
      if ((*(long *)(pCVar17 + 0x68) != 0) &&
         (pLVar27 = *(LookAndFeel_V4 **)(*(long *)(pCVar17 + 0x68) + 0x10),
         pLVar27 != (LookAndFeel_V4 *)0x0)) {
        cVar7 = **(char **)(this_01 + 0x148);
        pbVar45 = *(byte **)(this_01 + 0xf0);
        pbVar18 = local_f0;
        goto joined_r0x00279342;
      }
      pCVar17 = *(Component **)(pCVar17 + 0x30);
    } while (pCVar17 != (Component *)0x0);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027930a to 00279313 has its CatchHandler @ 0027a627 */
      pDVar14 = operator_new(0x1d0);
                    /* try { // try from 00279317 to 0027931e has its CatchHandler @ 0027a614 */
      Desktop::Desktop(pDVar14);
      Desktop::instance = pDVar14;
    }
    pLVar27 = Desktop::getDefaultLookAndFeel(Desktop::instance);
    cVar7 = **(char **)(this_01 + 0x148);
    pbVar45 = *(byte **)(this_01 + 0xf0);
    pbVar18 = local_f0;
joined_r0x00279342:
    local_f0 = pbVar45;
    if (cVar7 == '\0') {
      pbVar45 = local_f0 + -0x10;
      local_c0 = local_f0;
      if (pbVar45 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar45 = *(int *)pbVar45 + 1;
        UNLOCK();
      }
    }
    else {
      pbVar18 = local_f0 + -0x10;
      if (pbVar18 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar18 = *(int *)pbVar18 + 1;
        UNLOCK();
      }
                    /* try { // try from 0027919f to 002791b6 has its CatchHandler @ 0027a687 */
      juce::String::appendCharPointer((String *)&local_f0,&DAT_005e3cd6,0x5e3cd9);
      local_98.tv_sec = (__time_t)local_f0;
      pbVar18 = local_f0 + -0x10;
      if (pbVar18 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar18 = *(int *)pbVar18 + 1;
        UNLOCK();
      }
                    /* try { // try from 002791df to 002791eb has its CatchHandler @ 0027a658 */
      pSVar19 = juce::String::operator+=((String *)&local_98,(String *)(this_01 + 0x148));
      local_c0 = *(byte **)pSVar19;
      pbVar18 = local_c0 + -0x10;
      if (pbVar18 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar18 = *(int *)pbVar18 + 1;
        UNLOCK();
      }
      pbVar18 = (byte *)(local_98.tv_sec + -0x10);
      if (pbVar18 != (byte *)&emptyString) {
        LOCK();
        iVar42 = *(int *)pbVar18;
        *(int *)pbVar18 = *(int *)pbVar18 + -1;
        UNLOCK();
        if (iVar42 == 0) {
          operator_delete__(pbVar18);
        }
      }
      pbVar45 = local_f0 + -0x10;
      pbVar18 = local_f0;
      if (pbVar45 != (byte *)&emptyString) {
        LOCK();
        iVar42 = *(int *)pbVar45;
        *(int *)pbVar45 = *(int *)pbVar45 + -1;
        UNLOCK();
        if (iVar42 == 0) {
          operator_delete__(pbVar45);
          pbVar18 = local_f0;
        }
      }
    }
    local_f0 = pbVar18;
                    /* try { // try from 0027937c to 00279396 has its CatchHandler @ 0027a6a8 */
    (**(code **)(*(long *)(pLVar27 + 0x40) + 0x60))
              (pLVar27 + 0x40,&local_c0,this_01[0x156],uVar2,&local_ac,&local_b0,
               *(undefined8 *)(this_01 + 0x168));
    pbVar18 = local_c0 + -0x10;
    if (pbVar18 != (byte *)&emptyString) {
      LOCK();
      iVar42 = *(int *)pbVar18;
      *(int *)pbVar18 = *(int *)pbVar18 + -1;
      UNLOCK();
      if (iVar42 == 0) {
        operator_delete__(pbVar18);
      }
    }
  }
  else {
                    /* try { // try from 002790d2 to 00279116 has its CatchHandler @ 0027a731 */
    (**(code **)(*plVar13 + 0x198))(plVar13,&local_ac,&local_b0);
  }
  iVar42 = local_b0;
  if (599 < local_b0) {
    iVar42 = 600;
  }
  if (iVar42 < 1) {
    iVar42 = 1;
  }
  Component::setBounds(this_01,*(int *)(this_01 + 0x38),*(int *)(this_01 + 0x3c),local_ac,iVar42);
  puVar20 = *(undefined8 **)(this_01 + 0x90);
  if (puVar20 == (undefined8 *)0x0) {
                    /* try { // try from 00279266 to 0027926f has its CatchHandler @ 0027a731 */
    puVar20 = operator_new(0x18);
    *puVar20 = 0;
    puVar20[1] = 0;
    *(undefined4 *)(puVar20 + 2) = 0;
    *(undefined8 **)(this_01 + 0x90) = puVar20;
    pvVar22 = (void *)*puVar20;
    iVar42 = *(int *)((long)puVar20 + 0xc);
  }
  else {
    pvVar22 = (void *)*puVar20;
    iVar42 = *(int *)((long)puVar20 + 0xc);
  }
  lVar21 = (long)iVar42;
  if (lVar21 != 0) {
    lVar37 = 0;
    do {
      if (*(MenuWindow **)((long)pvVar22 + lVar37) == this) goto LAB_00279433;
      lVar37 = lVar37 + 8;
    } while (lVar21 * 8 != lVar37);
  }
  if ((int)*(uint *)(puVar20 + 1) <= iVar42) {
    uVar34 = iVar42 + ((iVar42 - (iVar42 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar20 + 1) != uVar34) {
      if ((int)uVar34 < 1) {
        free(pvVar22);
        *puVar20 = 0;
        pvVar22 = (void *)0x0;
      }
      else {
        pvVar22 = realloc(pvVar22,(ulong)uVar34 << 3);
        *puVar20 = pvVar22;
      }
    }
    *(uint *)(puVar20 + 1) = uVar34;
    iVar42 = *(int *)((long)puVar20 + 0xc);
    lVar21 = (long)iVar42;
  }
  *(int *)((long)puVar20 + 0xc) = iVar42 + 1;
  *(MenuWindow **)((long)pvVar22 + lVar21 * 8) = this;
LAB_00279433:
  pMVar26 = local_d8;
  iVar42 = *(int *)(this + 0x154);
  if ((int)*(uint *)(this + 0x150) <= iVar42) {
    uVar34 = iVar42 + ((iVar42 - (iVar42 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 0x150) != uVar34) {
      if ((int)uVar34 < 1) {
        free(*(void **)local_d8);
        *(long *)pMVar26 = 0;
      }
      else {
        pvVar22 = realloc(*(void **)local_d8,(ulong)uVar34 << 3);
        *(void **)pMVar26 = pvVar22;
      }
    }
    *(uint *)(this + 0x150) = uVar34;
    iVar42 = *(int *)(this + 0x154);
  }
  *(int *)(this + 0x154) = iVar42 + 1;
  *(Component **)(*(long *)(this + 0x148) + (long)iVar42 * 8) = this_01;
  local_98.tv_sec = (__time_t)&var::Instance::attributesInt;
  local_98.tv_nsec = CONCAT44(local_98.tv_nsec._4_4_,(int)lVar12);
                    /* try { // try from 002794eb to 002794fe has its CatchHandler @ 0027a6f7 */
  NamedValueSet::set((NamedValueSet *)(this_01 + 200),&explicitFocusOrderId,&local_98.tv_sec);
                    /* try { // try from 00279507 to 00279511 has its CatchHandler @ 0027a6ef */
  (**(code **)(local_98.tv_sec + 0x58))(&local_98.tv_nsec);
  if (((float)local_e8 != 0.0) && ((float)*(int *)(lVar46 + 8 + lVar43) == (float)local_e8)) {
                    /* try { // try from 00279530 to 0027953a has its CatchHandler @ 0027a729 */
    setCurrentlyHighlightedChild(this,(long)this_01);
  }
LAB_00278df0:
  uVar15 = (ulong)*(int *)((long)param_3 + 0xc);
  if ((long)uVar15 <= lVar12) goto LAB_00279847;
  goto LAB_00278e02;
}


