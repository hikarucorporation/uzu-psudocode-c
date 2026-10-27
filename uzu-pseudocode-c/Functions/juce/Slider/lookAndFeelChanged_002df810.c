// Function : lookAndFeelChanged
// Namespace: juce:Slider
// Entry    : 002df810
// Prototype: undefined lookAndFeelChanged(undefined8 param_1, undefined8 param_2, undefined8 param_3, Slider * this)
// Body     : 002df810 - 002dff3e


/* juce::Slider::lookAndFeelChanged() */

void __thiscall
juce::Slider::lookAndFeelChanged
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,Slider *this)

{
  LookAndFeel_V4 *pLVar1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  long lVar4;
  Component *this_00;
  long lVar5;
  long *plVar6;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_01;
  Desktop *this_02;
  LookAndFeel_V4 *pLVar7;
  Component *pCVar8;
  void *__ptr;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  int *piVar16;
  long *plVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  long lVar18;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar19;
  undefined4 uVar20;
  long local_78;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_70;
  code *local_68;
  undefined8 local_60;
  long local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar4 = *(long *)(this + 0x1a0);
  do {
    if ((*(long *)(this + 0x68) != 0) &&
       (pLVar7 = *(LookAndFeel_V4 **)(*(long *)(this + 0x68) + 0x10),
       pLVar7 != (LookAndFeel_V4 *)0x0)) {
      iVar13 = *(int *)(lVar4 + 0x208);
      goto joined_r0x002df8da;
    }
    this = *(Slider **)(this + 0x30);
  } while (this != (Slider *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002df8aa to 002df8b3 has its CatchHandler @ 002dff74 */
    this_02 = operator_new(0x1d0);
                    /* try { // try from 002df8b7 to 002df8be has its CatchHandler @ 002dff61 */
    Desktop::Desktop(this_02);
    Desktop::instance = this_02;
  }
  pLVar7 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  iVar13 = *(int *)(lVar4 + 0x208);
joined_r0x002df8da:
  if (iVar13 == 0) {
    plVar17 = *(long **)(lVar4 + 600);
    *(undefined8 *)(lVar4 + 600) = 0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    goto LAB_002dfd18;
  }
  if (*(long *)(lVar4 + 600) == 0) {
    plVar17 = *(long **)(lVar4 + 0x18);
    (**(code **)(**(long **)(lVar4 + 0x50) + 0x10))(&local_78);
                    /* try { // try from 002df924 to 002df929 has its CatchHandler @ 002dff7c */
    (**(code **)(local_78 + 0x20))(&p_Stack_70);
                    /* try { // try from 002df92d to 002df93a has its CatchHandler @ 002dff47 */
    (**(code **)(*plVar17 + 0x1b8))(&local_50,plVar17);
                    /* try { // try from 002df93f to 002df944 has its CatchHandler @ 002dff3f */
    (**(code **)(local_78 + 0x58))(&p_Stack_70);
  }
  else {
    (**(code **)(**(long **)(*(long *)(lVar4 + 600) + 0x178) + 0x10))(&local_78);
                    /* try { // try from 002df884 to 002df88e has its CatchHandler @ 002dffa3 */
    (**(code **)(local_78 + 0x28))(&local_50,&p_Stack_70);
                    /* try { // try from 002df893 to 002df898 has its CatchHandler @ 002dff9b */
    (**(code **)(local_78 + 0x58))(&p_Stack_70);
  }
  plVar17 = *(long **)(lVar4 + 600);
  *(undefined8 *)(lVar4 + 600) = 0;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
                    /* try { // try from 002df971 to 002df973 has its CatchHandler @ 002e0001 */
  pCVar8 = (Component *)
           (**(code **)(*(long *)(pLVar7 + 0x58) + 0x48))
                     (pLVar7 + 0x58,*(undefined8 *)(lVar4 + 0x18));
  plVar17 = *(long **)(lVar4 + 600);
  *(Component **)(lVar4 + 600) = pCVar8;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))();
    pCVar8 = *(Component **)(lVar4 + 600);
  }
  this_00 = *(Component **)(lVar4 + 0x18);
                    /* try { // try from 002df9a2 to 002df9fb has its CatchHandler @ 002e0001 */
  (**(code **)(*(long *)pCVar8 + 0x60))(pCVar8,1);
  Component::addChildComponent(this_00,pCVar8,0xffffffff);
  lVar18 = *(long *)(lVar4 + 600);
  *(undefined1 *)(lVar18 + 0xea) = *(undefined1 *)(lVar18 + 0xea);
  *(ushort *)(lVar18 + 0xe8) = (ushort)*(undefined3 *)(lVar18 + 0xe8) & 0xffdf;
  Label::setText(*(Label **)(lVar4 + 600),&local_50,0);
  plVar17 = (long *)(*(long *)(lVar4 + 600) + 0xf0);
                    /* try { // try from 002dfa1d to 002dfa22 has its CatchHandler @ 002dffe5 */
  (**(code **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xf0) + 0x10))
            (&local_78,*(long *)(lVar4 + 0x18) + 0xf0);
                    /* try { // try from 002dfa26 to 002dfa2e has its CatchHandler @ 002dffba */
  (**(code **)(*plVar17 + 0x18))(plVar17);
  piVar16 = (int *)(local_78 + -0x10);
  if (piVar16 != &emptyString) {
    LOCK();
    iVar13 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar13 == 0) {
      operator_delete__(piVar16);
    }
  }
  lVar18 = *(long *)(lVar4 + 600);
  if (lVar18 != 0) {
    if (*(char *)(lVar4 + 0x230) == '\0') {
LAB_002dfab4:
      if (*(char *)(lVar18 + 0x210) != '\0' || *(char *)(lVar18 + 0x211) != '\0') {
        *(undefined1 *)(lVar18 + 0x210) = 0;
        uVar12 = 0;
LAB_002dfacb:
        *(undefined2 *)(lVar18 + 0x211) = 0;
        *(undefined1 *)(lVar18 + 0xea) = *(undefined1 *)(lVar18 + 0xea);
        *(ushort *)(lVar18 + 0xe8) = (ushort)*(undefined3 *)(lVar18 + 0xe8) & 0xff1f | uVar12;
        plVar17 = *(long **)(lVar18 + 0xe0);
        *(undefined8 *)(lVar18 + 0xe0) = 0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
      }
    }
    else {
      lVar10 = *(long *)(lVar4 + 0x18);
      do {
        if ((*(ushort *)(lVar10 + 0xe8) & 0x8000) != 0) goto LAB_002dfab4;
        lVar10 = *(long *)(lVar10 + 0x30);
      } while (lVar10 != 0);
      if (*(char *)(lVar18 + 0x210) == '\0' && *(char *)(lVar18 + 0x211) == '\0') {
        *(undefined1 *)(lVar18 + 0x210) = 1;
        uVar12 = 0xe0;
        goto LAB_002dfacb;
      }
    }
  }
  lVar18 = *(long *)(lVar4 + 600);
  uStack_40 = 0;
  uStack_3c = 0;
  uVar19 = *(undefined4 *)(lVar18 + 0x118);
  uVar20 = *(undefined4 *)(lVar18 + 0x11c);
  local_78 = *(long *)(lVar18 + 0x118);
  p_Stack_70 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar18 + 0x120);
  *(long *)(lVar18 + 0x118) = lVar4;
  *(undefined4 *)(lVar18 + 0x120) = 0;
  *(undefined4 *)(lVar18 + 0x124) = 0;
  local_68 = *(code **)(lVar18 + 0x128);
  *(code **)(lVar18 + 0x128) =
       std::
       _Function_handler<void(),juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda()#1}>
       ::_M_manager;
  local_60 = *(undefined8 *)(lVar18 + 0x130);
  *(code **)(lVar18 + 0x130) =
       std::
       _Function_handler<void(),juce::Slider::Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda()#1}>
       ::_M_invoke;
  lVar18 = lVar4;
  local_48 = lVar4;
  if (local_68 != (code *)0x0) {
                    /* try { // try from 002dfb83 to 002dfb8f has its CatchHandler @ 002dff93 */
    lVar18 = (*local_68)(&local_78,&local_78,3);
  }
  if ((*(uint *)(lVar4 + 0x20) & 0xfffffffe) == 2) {
    lVar10 = *(long *)(lVar4 + 600);
    lVar5 = *(long *)(lVar4 + 0x18);
    puVar11 = *(undefined8 **)(lVar10 + 0x90);
    if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 002dfbc8 to 002dfbd1 has its CatchHandler @ 002e0001 */
      puVar11 = operator_new(0x18);
      lVar18 = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
      *(undefined8 **)(lVar10 + 0x90) = puVar11;
      __ptr = (void *)*puVar11;
      iVar13 = *(int *)((long)puVar11 + 0xc);
    }
    else {
      __ptr = (void *)*puVar11;
      iVar13 = *(int *)((long)puVar11 + 0xc);
    }
    lVar10 = (long)iVar13;
    if (lVar10 != 0) {
      lVar14 = 0;
      do {
        if (*(long *)((long)__ptr + lVar14) == lVar5) goto LAB_002dfc70;
        lVar14 = lVar14 + 8;
      } while (lVar10 * 8 != lVar14);
    }
    if ((int)*(uint *)(puVar11 + 1) <= iVar13) {
      uVar15 = iVar13 + ((iVar13 - (iVar13 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar11 + 1) != uVar15) {
        if ((int)uVar15 < 1) {
          free(__ptr);
          lVar18 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
          *puVar11 = 0;
          __ptr = (void *)0x0;
        }
        else {
          __ptr = realloc(__ptr,(ulong)uVar15 << 3);
          lVar18 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          *puVar11 = __ptr;
        }
      }
      *(uint *)(puVar11 + 1) = uVar15;
      iVar13 = *(int *)((long)puVar11 + 0xc);
      lVar10 = (long)iVar13;
    }
    *(int *)((long)puVar11 + 0xc) = iVar13 + 1;
    *(long *)((long)__ptr + lVar10 * 8) = lVar5;
LAB_002dfc70:
    lVar10 = *(long *)(lVar4 + 600);
                    /* try { // try from 002dfc78 to 002dfc81 has its CatchHandler @ 002dff91 */
    MouseCursor::SharedCursorHandle::createStandard
              (lVar18,CONCAT44(uVar20,uVar19),param_3,(SharedCursorHandle *)&local_78,0);
    this_01 = p_Stack_70;
                    /* try { // try from 002dfc8b to 002dfc95 has its CatchHandler @ 002dff84 */
    Component::setMouseCursor
              (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar20,uVar19),param_3,
               lVar10,local_78,p_Stack_70);
    if (this_01 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_002dfcf8;
    if (*(long *)(this_01 + 8) == 0x100000001) {
      *(undefined8 *)(this_01 + 8) = 0;
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      (**(code **)(*(long *)this_01 + 0x18))(this_01);
      piVar16 = (int *)(local_50 + -0x10);
      if (piVar16 == &emptyString) goto LAB_002dfd18;
      goto LAB_002dfd06;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var3 = this_01 + 8;
      iVar13 = *(int *)p_Var3;
      *(int *)p_Var3 = *(int *)p_Var3 + -1;
      UNLOCK();
    }
    else {
      iVar13 = (int)*(long *)(this_01 + 8);
      *(int *)(this_01 + 8) = iVar13 + -1;
    }
    if (iVar13 != 1) goto LAB_002dfcf8;
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_01);
    piVar16 = (int *)(local_50 + -0x10);
    if (piVar16 != &emptyString) goto LAB_002dfd06;
  }
  else {
LAB_002dfcf8:
    piVar16 = (int *)(local_50 + -0x10);
    if (piVar16 != &emptyString) {
LAB_002dfd06:
      LOCK();
      iVar13 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar13 == 0) {
        operator_delete__(piVar16);
      }
    }
  }
LAB_002dfd18:
  if (*(int *)(lVar4 + 0x20) == 8) {
    pLVar1 = pLVar7 + 0x58;
    uVar9 = (**(code **)(*(long *)(pLVar7 + 0x58) + 0x40))(pLVar1,*(undefined8 *)(lVar4 + 0x18),1);
    plVar17 = *(long **)(lVar4 + 0x260);
    *(undefined8 *)(lVar4 + 0x260) = uVar9;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    uVar9 = (**(code **)(*(long *)pLVar1 + 0x40))(pLVar1,*(undefined8 *)(lVar4 + 0x18),0);
    plVar17 = *(long **)(lVar4 + 0x268);
    *(undefined8 *)(lVar4 + 0x268) = uVar9;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    (**(code **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xf0) + 0x10))
              ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&local_48,
               *(long *)(lVar4 + 0x18) + 0xf0);
    local_78 = lVar4;
    p_Stack_70 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&local_48;
                    /* try { // try from 002dfdb1 to 002dfdcf has its CatchHandler @ 002dffe7 */
    Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,bool)#1}::operator()
              ((_lambda_juce__Button__bool__1_ *)&local_78,*(Component **)(lVar4 + 0x260),
               (Component)0x1);
    Pimpl::lookAndFeelChanged(juce::LookAndFeel&)::{lambda(juce::Button&,bool)#1}::operator()
              ((_lambda_juce__Button__bool__1_ *)&local_78,*(Component **)(lVar4 + 0x268),
               (Component)0x0);
    piVar16 = (int *)(local_48 + -0x10);
    if (piVar16 != &emptyString) {
      LOCK();
      iVar13 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar13 == 0) {
        operator_delete__(piVar16);
      }
    }
  }
  else {
    plVar17 = *(long **)(lVar4 + 0x260);
    *(undefined8 *)(lVar4 + 0x260) = 0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = *(long **)(lVar4 + 0x268);
    *(undefined8 *)(lVar4 + 0x268) = 0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
  }
  lVar18 = *(long *)(lVar4 + 0x18);
  lVar10 = (**(code **)(*(long *)(pLVar7 + 0x58) + 0x50))(pLVar7 + 0x58);
  plVar17 = *(long **)(lVar18 + 0x80);
  if (lVar10 == 0) {
    if (plVar17 == (long *)0x0) goto LAB_002dfeda;
    *(undefined8 *)(lVar18 + 0x80) = 0;
LAB_002dfeaa:
    plVar6 = (long *)*plVar17;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    operator_delete(plVar17);
  }
  else if (plVar17 == (long *)0x0) {
    puVar11 = operator_new(0x10);
    *puVar11 = 0;
    puVar11[1] = lVar10;
    plVar17 = *(long **)(lVar18 + 0x80);
    *(undefined8 **)(lVar18 + 0x80) = puVar11;
    if (plVar17 != (long *)0x0) goto LAB_002dfeaa;
  }
  else {
    lVar5 = plVar17[1];
    plVar17[1] = lVar10;
    if (lVar5 == lVar10) goto LAB_002dfeda;
  }
  Component::internalRepaintUnchecked(lVar18,0,*(ulong *)(lVar18 + 0x40),'\x01');
LAB_002dfeda:
  (**(code **)(**(long **)(lVar4 + 0x18) + 0x140))();
  Component::internalRepaintUnchecked
            (*(long *)(lVar4 + 0x18),0,*(ulong *)(*(long *)(lVar4 + 0x18) + 0x40),'\x01');
  return;
}


