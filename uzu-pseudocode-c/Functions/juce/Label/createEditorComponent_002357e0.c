// Function : createEditorComponent
// Namespace: juce:Label
// Entry    : 002357e0
// Prototype: TextEditor * createEditorComponent(undefined8 param_1, undefined8 param_2, undefined8 param_3, Label * this)
// Body     : 002357e0 - 002374ed


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Label::createEditorComponent() */

TextEditor * __thiscall
juce::Label::createEditorComponent
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,Label *this)

{
  Component *this_00;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  Ranges *this_01;
  byte *pbVar4;
  Font *this_02;
  Component *pCVar5;
  TextEditor *this_03;
  RangedValues<juce::Font> *this_04;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  TextEditor *this_05;
  Desktop *pDVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  Component *pCVar15;
  undefined8 *puVar16;
  Component *pCVar17;
  undefined8 uVar18;
  Label *pLVar19;
  LookAndFeel_V4 *pLVar20;
  ulong uVar21;
  char *pcVar22;
  char *pcVar23;
  byte **ppbVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar28;
  uint uVar29;
  ulong uVar30;
  int *piVar31;
  byte **ppbVar32;
  uint in_R9D;
  undefined4 in_register_0000008c;
  byte *pbVar33;
  bool bVar34;
  Viewport *pVVar35;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar36;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 uVar37;
  long *local_158;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_150;
  Component *local_148;
  int *local_140;
  byte *local_138;
  long lStack_130;
  long *local_128;
  long *local_120;
  long *local_118;
  void *local_108;
  Timer *local_d0;
  Font *local_c8;
  TextEditor *local_c0;
  TextEditor *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  void *local_80;
  undefined8 local_48;
  undefined8 uStack_40;
  
  this_05 = operator_new(0x350);
  lVar25 = *(long *)(this + 8);
  local_140 = (int *)(lVar25 + -0x10);
  if (local_140 == &emptyString) {
    *(undefined ***)this_05 = &PTR__TextInputTarget_00714a78;
    *(undefined ***)(this_05 + 8) = &PTR__Component_00707878;
    *(long *)(this_05 + 0x10) = lVar25;
  }
  else {
    LOCK();
    *(int *)(lVar25 + -0x10) = *(int *)(lVar25 + -0x10) + 1;
    UNLOCK();
    *(undefined ***)this_05 = &PTR__TextInputTarget_00714a78;
    *(undefined ***)(this_05 + 8) = &PTR__Component_00707878;
    *(long *)(this_05 + 0x10) = lVar25;
    LOCK();
    *(int *)(lVar25 + -0x10) = *(int *)(lVar25 + -0x10) + 1;
    UNLOCK();
  }
  *(undefined1 **)(this_05 + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(this_05 + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(this_05 + 0x28) = &DAT_0061ac58;
  *(undefined1 **)(this_05 + 0x30) = &DAT_0061ac58;
  *(undefined8 *)(this_05 + 0x38) = 0;
  *(undefined8 *)(this_05 + 0x40) = 0;
  *(undefined8 *)(this_05 + 0x48) = 0;
  *(undefined8 *)(this_05 + 0x50) = 0;
  *(undefined8 *)(this_05 + 0x58) = 0;
  *(undefined8 *)(this_05 + 0x60) = 0;
  *(undefined8 *)(this_05 + 0x68) = 0;
  *(undefined8 *)(this_05 + 0x70) = 0;
  *(undefined8 *)(this_05 + 0x78) = 0;
  *(undefined8 *)(this_05 + 0x80) = 0;
  *(undefined8 *)(this_05 + 0x88) = 0;
  *(undefined8 *)(this_05 + 0x90) = 0;
  *(undefined8 *)(this_05 + 0x98) = 0;
  *(undefined8 *)(this_05 + 0xa0) = 0;
  *(undefined8 *)(this_05 + 0xa8) = 0;
  *(undefined8 *)(this_05 + 0xb0) = 0;
  *(undefined8 *)(this_05 + 0xb8) = 0;
  *(undefined8 *)(this_05 + 0xc0) = 0;
  *(undefined4 *)(this_05 + 200) = 0;
  *(undefined8 *)(this_05 + 0xd0) = 0;
  *(undefined8 *)(this_05 + 0xd8) = 0;
  *(undefined8 *)(this_05 + 0xe0) = 0;
  *(undefined8 *)(this_05 + 0xe8) = 0;
  *(undefined8 *)(this_05 + 0xed) = 0;
  *(undefined1 **)(this_05 + 0x100) = &DAT_0061ac58;
  *(undefined ***)this_05 = &PTR__TextEditor_0070c670;
  this_00 = (Component *)(this_05 + 8);
  *(undefined ***)this_00 = &PTR__TextEditor_0070c798;
  *(undefined ***)(this_05 + 0xf8) = &PTR__TextEditor_0070c940;
  *(undefined8 *)(this_05 + 0x108) = 0;
  *(undefined8 *)(this_05 + 0x110) = 0;
  *(undefined8 *)(this_05 + 0x118) = 0;
  *(undefined8 *)(this_05 + 0x120) = 0;
  *(undefined8 *)(this_05 + 0x128) = 0;
  *(undefined8 *)(this_05 + 0x130) = 0;
  *(undefined8 *)(this_05 + 0x138) = 0;
  *(undefined8 *)(this_05 + 0x140) = 0;
  *(undefined8 *)(this_05 + 0x148) = 0;
  *(undefined8 *)(this_05 + 0x150) = 0;
  *(undefined8 *)(this_05 + 0x158) = 0;
  *(undefined8 *)(this_05 + 0x160) = 0;
  *(undefined8 *)(this_05 + 0x168) = 0;
  *(undefined8 *)(this_05 + 0x170) = 0;
  *(undefined8 *)(this_05 + 0x178) = 0;
  *(undefined8 *)(this_05 + 0x180) = 0;
  *(undefined8 *)(this_05 + 0x188) = 0;
  uVar18 = _UNK_005dd0f8;
  *(undefined8 *)(this_05 + 0x198) = _DAT_005dd0f0;
  *(undefined8 *)(this_05 + 0x1a0) = uVar18;
  *(undefined4 *)(this_05 + 0x1a8) = 9;
  *(undefined ***)(this_05 + 0x1b0) = &PTR__GlobalMouseListener_00710598;
  *(Component **)(this_05 + 0x1b8) = this_00;
  this_05[0x1c0] = (TextEditor)0x0;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0023598c to 00235995 has its CatchHandler @ 00237682 */
    pDVar11 = operator_new(0x1d0);
                    /* try { // try from 00235999 to 002359a0 has its CatchHandler @ 0023756e */
    Desktop::Desktop(pDVar11);
    Desktop::instance = pDVar11;
  }
                    /* try { // try from 002359b4 to 002359be has its CatchHandler @ 00237682 */
  Desktop::addGlobalMouseListener(Desktop::instance,(long)(this_05 + 0x1b0));
  uVar18 = _UNK_005dd108;
  *(undefined8 *)(this_05 + 0x1c8) = _DAT_005dd100;
  *(undefined8 *)(this_05 + 0x1d0) = uVar18;
  *(undefined ***)(this_05 + 0x1d8) = &PTR__ChangeBroadcaster_00712b80;
  *(undefined ***)(this_05 + 0x1e0) = &PTR__AsyncUpdater_00712b58;
  *(undefined8 *)(this_05 + 0x1e8) = 0;
  local_b8 = this_05 + 0x1b0;
                    /* try { // try from 002359fc to 00235a05 has its CatchHandler @ 0023767a */
  puVar12 = operator_new(0x20);
  *(undefined4 *)(puVar12 + 1) = 0;
  *puVar12 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar12[2] = this_05 + 0x1e0;
  *(undefined4 *)(puVar12 + 3) = 0;
  LOCK();
  *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
  UNLOCK();
  local_c0 = this_05 + 0x1d8;
  pvVar14 = *(void **)(this_05 + 0x1e8);
  *(undefined8 **)(this_05 + 0x1e8) = puVar12;
  if (pvVar14 != (void *)0x0) {
    LOCK();
    piVar31 = (int *)((long)pvVar14 + 8);
    *piVar31 = *piVar31 + -1;
    UNLOCK();
    if (*piVar31 == 0) {
      operator_delete(pvVar14);
    }
  }
  *(undefined ***)(this_05 + 0x1e0) = &PTR__ChangeBroadcasterCallback_00712ba0;
  this_05[0x220] = (TextEditor)0x0;
  *(undefined8 *)(this_05 + 0x1f8) = 0;
  *(undefined8 *)(this_05 + 0x200) = 0;
  *(undefined8 *)(this_05 + 0x208) = 0;
  *(undefined8 *)(this_05 + 0x210) = 0;
  *(undefined4 *)(this_05 + 0x218) = 0;
  *(TextEditor **)(this_05 + 0x1f0) = local_c0;
  *(undefined ***)(this_05 + 0x1d8) = &PTR__UndoManager_00713ef8;
  *(undefined8 *)(this_05 + 0x228) = 0;
  *(undefined8 *)(this_05 + 0x230) = 0;
  *(undefined8 *)(this_05 + 0x238) = 0;
  *(undefined8 *)(this_05 + 0x240) = 0;
  *(undefined1 **)(this_05 + 0x248) = &DAT_0061ac58;
  *(undefined8 *)(this_05 + 0x250) = 0;
  *(undefined8 *)(this_05 + 600) = 0;
  *(undefined2 *)(this_05 + 0x260) = 1;
  *(undefined8 *)(this_05 + 0x254) = 0x1e00007530;
  *(undefined8 *)(this_05 + 0x268) = 0;
  *(undefined8 *)(this_05 + 0x270) = 0;
  *(undefined8 *)(this_05 + 0x278) = 0x400000004;
  *(undefined4 *)(this_05 + 0x280) = 0;
                    /* try { // try from 00235b05 to 00235b20 has its CatchHandler @ 00237672 */
  FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_b0,0);
                    /* try { // try from 00235b21 to 00235b35 has its CatchHandler @ 0023765d */
  Component::withDefaultMetrics(&local_138,(long)this_00,(long *)&local_b0);
  this_02 = (Font *)(this_05 + 0x288);
                    /* try { // try from 00235b42 to 00235b4e has its CatchHandler @ 0023764e */
  Font::Font(this_02,(long *)&local_138);
  plVar28 = local_120;
  local_c8 = this_02;
  if (local_108 != (void *)0x0) {
    operator_delete(local_108);
    plVar28 = local_120;
  }
  for (; plVar28 != local_118; plVar28 = plVar28 + 1) {
    piVar31 = (int *)(*plVar28 + -0x10);
    if (piVar31 != &emptyString) {
      LOCK();
      iVar9 = *piVar31;
      *piVar31 = *piVar31 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        operator_delete__(piVar31);
      }
    }
  }
  if (local_120 != (long *)0x0) {
    operator_delete(local_120);
  }
  if (local_128 != (long *)0x0) {
    LOCK();
    plVar28 = local_128 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)(*local_128 + 8))();
    }
  }
  piVar31 = (int *)(lStack_130 + -0x10);
  if (piVar31 != &emptyString) {
    LOCK();
    iVar9 = *piVar31;
    *piVar31 = *piVar31 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(piVar31);
    }
  }
  local_138 = local_138 + -0x10;
  if (local_138 != (byte *)&emptyString) {
    LOCK();
    iVar9 = *(int *)local_138;
    *(int *)local_138 = *(int *)local_138 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(local_138);
    }
  }
  plVar28 = local_98;
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
    plVar28 = local_98;
  }
  for (; plVar28 != local_90; plVar28 = plVar28 + 1) {
    piVar31 = (int *)(*plVar28 + -0x10);
    if (piVar31 != &emptyString) {
      LOCK();
      iVar9 = *piVar31;
      *piVar31 = *piVar31 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        operator_delete__(piVar31);
      }
    }
  }
  if (local_98 != (long *)0x0) {
    operator_delete(local_98);
  }
  if (local_a0 != (long *)0x0) {
    LOCK();
    plVar28 = local_a0 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)(*local_a0 + 8))();
    }
  }
  piVar31 = (int *)(local_a8 + -0x10);
  if (piVar31 != &emptyString) {
    LOCK();
    iVar9 = *piVar31;
    *piVar31 = *piVar31 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(piVar31);
    }
  }
  local_b0 = local_b0 + -2;
  if (local_b0 != (long *)&emptyString) {
    LOCK();
    lVar25 = *local_b0;
    *(int *)local_b0 = (int)*local_b0 + -1;
    UNLOCK();
    if ((int)lVar25 == 0) {
      operator_delete__(local_b0);
    }
  }
  *(undefined4 *)(this_05 + 0x290) = 0;
  *(undefined1 **)(this_05 + 0x298) = &DAT_0061ac58;
  *(undefined8 *)(this_05 + 0x2a0) = 0;
  *(undefined8 *)(this_05 + 0x2a8) = 0;
  this_05[0x2b0] = (TextEditor)0x0;
                    /* try { // try from 00235cbf to 00235cc8 has its CatchHandler @ 00237646 */
  puVar12 = operator_new(0x40);
  *puVar12 = &PTR__ReferenceCountedObject_00706828;
  *(undefined4 *)(puVar12 + 1) = 0;
  puVar12[2] = &PTR__AsyncUpdater_00712b58;
  puVar12[3] = 0;
                    /* try { // try from 00235ce9 to 00235cf2 has its CatchHandler @ 00237636 */
  puVar13 = operator_new(0x20);
  *(undefined4 *)(puVar13 + 1) = 0;
  *puVar13 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar13[2] = puVar12 + 2;
  *(undefined4 *)(puVar13 + 3) = 0;
  LOCK();
  *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
  UNLOCK();
  pvVar14 = (void *)puVar12[3];
  puVar12[3] = puVar13;
  if (pvVar14 != (void *)0x0) {
    LOCK();
    piVar31 = (int *)((long)pvVar14 + 8);
    *piVar31 = *piVar31 + -1;
    UNLOCK();
    if (*piVar31 == 0) {
      operator_delete(pvVar14);
    }
  }
  puVar12[4] = 0;
  puVar12[5] = 0;
  *puVar12 = &PTR__SimpleValueSource_00713f78;
  puVar12[2] = &PTR__SimpleValueSource_00713fb0;
  puVar12[6] = &var::Instance::attributesVoid;
  *(undefined8 **)(this_05 + 0x2b8) = puVar12;
  LOCK();
  *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
  UNLOCK();
  *(undefined8 *)(this_05 + 0x2d0) = 0;
  *(undefined8 *)(this_05 + 0x2d8) = 0;
  *(undefined8 *)(this_05 + 0x2c0) = 0;
  *(undefined8 *)(this_05 + 0x2c8) = 0;
  *(undefined4 *)(this_05 + 0x2e0) = 0;
  *(undefined8 *)(this_05 + 0x2e8) = 0x3f80000000000000;
  *(undefined4 *)(this_05 + 0x2f0) = 0;
  *(undefined8 *)(this_05 + 0x2f8) = 0;
  *(undefined8 *)(this_05 + 0x300) = 0;
  *(undefined8 *)(this_05 + 0x308) = 0;
  *(undefined8 *)(this_05 + 0x310) = 0;
  *(undefined4 *)(this_05 + 0x318) = 0;
  *(undefined8 *)(this_05 + 800) = 0;
  *(undefined8 *)(this_05 + 0x328) = 0;
                    /* try { // try from 00235db7 to 00235dc0 has its CatchHandler @ 0023762e */
  pvVar14 = operator_new(0x118);
  memset(pvVar14,0,0x118);
  *(void **)((long)pvVar14 + 0x60) = pvVar14;
  *(undefined8 *)((long)pvVar14 + 0x68) = 0;
  *(undefined8 *)((long)pvVar14 + 0x70) = 0;
  *(undefined8 *)((long)pvVar14 + 0x78) = 0;
  *(undefined8 *)((long)pvVar14 + 0x80) = 0;
  *(undefined8 *)((long)pvVar14 + 0x88) = 0;
  *(undefined8 *)((long)pvVar14 + 0x90) = 0;
  *(undefined4 *)((long)pvVar14 + 0x98) = 9;
                    /* try { // try from 00235dfe to 00235e02 has its CatchHandler @ 002375ff */
  detail::ShapedTextOptions::fontsForRange::{lambda()#1}::operator()
            ((_lambda___1_ *)((long)pvVar14 + 0xc0));
  *(undefined8 *)((long)pvVar14 + 0xf0) = 0x3f80000000000000;
  *(undefined8 *)((long)pvVar14 + 0xf8) = 0x1000000000000;
  *(undefined8 *)((long)pvVar14 + 0x100) = 0x7fffffffffffffff;
  *(undefined1 **)((long)pvVar14 + 0x108) = &DAT_0061ac58;
  *(undefined4 *)((long)pvVar14 + 0x110) = 0;
  *(void **)(this_05 + 0x330) = pvVar14;
  *(TextEditor **)(this_05 + 0x338) = this_05;
  *(undefined8 *)(this_05 + 0x340) = 0x100000000;
  *(undefined4 *)(this_05 + 0x348) = 1;
                    /* try { // try from 00235e75 to 00235f04 has its CatchHandler @ 00237758 */
  uVar8 = (**(code **)(*(long *)this_05 + 0x50))();
  uVar29 = *(uint *)(this_05 + 0x340);
  uVar37 = 0;
  if ((int)uVar29 < 0) {
    uVar29 = 0;
  }
  if (uVar8 < uVar29) {
    uVar29 = uVar8;
  }
  uVar36 = extraout_XMM0_Da;
  uVar10 = extraout_XMM0_Db;
  if (uVar29 != 0) {
    TextEditor::ParagraphsModel::getText
              (&local_158,*(long *)(*(long *)(this_05 + 0x338) + 0x330) + 0x60);
    uVar8 = juce::String::operator[]((String *)&local_158,uVar29 - 1);
    plVar28 = local_158 + -2;
    uVar36 = extraout_XMM0_Da_00;
    uVar10 = extraout_XMM0_Db_00;
    if (plVar28 != (long *)&emptyString) {
      LOCK();
      lVar25 = *plVar28;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)lVar25 == 0) {
        operator_delete__(plVar28);
        uVar36 = extraout_XMM0_Da_02;
        uVar10 = extraout_XMM0_Db_02;
      }
    }
    if (uVar8 != 10) {
      uVar8 = (**(code **)(**(long **)(this_05 + 0x338) + 0x50))();
      uVar37 = 1;
      uVar36 = extraout_XMM0_Da_01;
      uVar10 = extraout_XMM0_Db_01;
      if (uVar29 != uVar8) {
        uVar37 = *(undefined4 *)(this_05 + 0x348);
      }
    }
  }
  *(undefined4 *)(this_05 + 0x344) = uVar37;
                    /* try { // try from 00235fd3 to 00235fe1 has its CatchHandler @ 002375fa */
  MouseCursor::SharedCursorHandle::createStandard
            (CONCAT44(uVar10,uVar36),param_2,param_3,(SharedCursorHandle *)&local_158,4);
  p_Var3 = local_150;
                    /* try { // try from 00235fec to 00235ff8 has its CatchHandler @ 002375ea */
  Component::setMouseCursor
            (CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,(long)this_00,
             (long)local_158,local_150);
  if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var3 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var3 + 8) = 0;
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = p_Var3 + 8;
        iVar9 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar9 = (int)*(long *)(p_Var3 + 8);
        *(int *)(p_Var3 + 8) = iVar9 + -1;
      }
      if (iVar9 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
      }
    }
  }
                    /* try { // try from 0023604c to 00236055 has its CatchHandler @ 00237758 */
  pCVar15 = operator_new(0x248);
  *(undefined ***)pCVar15 = &PTR__Component_00707878;
  *(undefined1 **)(pCVar15 + 8) = &DAT_0061ac58;
  *(undefined1 **)(pCVar15 + 0x10) = &DAT_0061ac58;
  *(undefined1 **)(pCVar15 + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(pCVar15 + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(pCVar15 + 0x28) = &DAT_0061ac58;
  *(undefined8 *)(pCVar15 + 0x30) = 0;
  *(undefined8 *)(pCVar15 + 0x38) = 0;
  *(undefined8 *)(pCVar15 + 0x40) = 0;
  *(undefined8 *)(pCVar15 + 0x48) = 0;
  *(undefined8 *)(pCVar15 + 0x50) = 0;
  *(undefined8 *)(pCVar15 + 0x58) = 0;
  *(undefined8 *)(pCVar15 + 0x60) = 0;
  *(undefined8 *)(pCVar15 + 0x68) = 0;
  *(undefined8 *)(pCVar15 + 0x70) = 0;
  *(undefined8 *)(pCVar15 + 0x78) = 0;
  *(undefined8 *)(pCVar15 + 0x80) = 0;
  *(undefined8 *)(pCVar15 + 0x88) = 0;
  *(undefined8 *)(pCVar15 + 0x90) = 0;
  *(undefined8 *)(pCVar15 + 0x98) = 0;
  *(undefined8 *)(pCVar15 + 0xa0) = 0;
  *(undefined8 *)(pCVar15 + 0xa8) = 0;
  *(undefined8 *)(pCVar15 + 0xb0) = 0;
  *(undefined8 *)(pCVar15 + 0xb8) = 0;
  *(undefined4 *)(pCVar15 + 0xc0) = 0;
  *(undefined8 *)(pCVar15 + 200) = 0;
  *(undefined8 *)(pCVar15 + 0xd0) = 0;
  *(undefined8 *)(pCVar15 + 0xd8) = 0;
  *(undefined8 *)(pCVar15 + 0xe0) = 0;
  *(undefined8 *)(pCVar15 + 0xe5) = 0;
  *(undefined ***)pCVar15 = &PTR__Viewport_00708dc8;
  *(undefined ***)(pCVar15 + 0xf0) = &PTR__Viewport_00708f98;
  *(undefined ***)(pCVar15 + 0xf8) = &PTR__Viewport_00708ff8;
  local_148 = pCVar15 + 0x110;
  *(undefined8 *)(pCVar15 + 0x100) = 0;
  *(undefined8 *)(pCVar15 + 0x108) = 0;
  *(undefined1 **)(pCVar15 + 0x118) = &DAT_0061ac58;
  *(undefined1 **)(pCVar15 + 0x120) = &DAT_0061ac58;
  *(undefined1 **)(pCVar15 + 0x128) = &DAT_0061ac58;
  *(undefined1 **)(pCVar15 + 0x130) = &DAT_0061ac58;
  *(undefined1 **)(pCVar15 + 0x138) = &DAT_0061ac58;
  *(undefined8 *)(pCVar15 + 0x140) = 0;
  *(undefined8 *)(pCVar15 + 0x148) = 0;
  *(undefined8 *)(pCVar15 + 0x150) = 0;
  *(undefined8 *)(pCVar15 + 0x158) = 0;
  *(undefined8 *)(pCVar15 + 0x160) = 0;
  *(undefined8 *)(pCVar15 + 0x168) = 0;
  *(undefined8 *)(pCVar15 + 0x170) = 0;
  *(undefined8 *)(pCVar15 + 0x178) = 0;
  *(undefined8 *)(pCVar15 + 0x180) = 0;
  *(undefined8 *)(pCVar15 + 0x188) = 0;
  *(undefined8 *)(pCVar15 + 400) = 0;
  *(undefined8 *)(pCVar15 + 0x198) = 0;
  *(undefined8 *)(pCVar15 + 0x1a0) = 0;
  *(undefined8 *)(pCVar15 + 0x1a8) = 0;
  *(undefined8 *)(pCVar15 + 0x1b0) = 0;
  *(undefined8 *)(pCVar15 + 0x1b8) = 0;
  *(undefined8 *)(pCVar15 + 0x1c0) = 0;
  *(undefined8 *)(pCVar15 + 0x1c8) = 0;
  *(undefined4 *)(pCVar15 + 0x1d0) = 0;
  *(undefined8 *)(pCVar15 + 0x1e8) = 0;
  *(undefined8 *)(pCVar15 + 0x1f0) = 0;
  *(undefined8 *)(pCVar15 + 0x1d8) = 0;
  *(undefined8 *)(pCVar15 + 0x1e0) = 0;
  *(undefined8 *)(pCVar15 + 0x1f5) = 0;
  *(undefined ***)(pCVar15 + 0x110) = &PTR__Component_0070e650;
  *(undefined8 *)(pCVar15 + 0x20c) = 0;
  *(undefined8 *)(pCVar15 + 0x214) = 0;
  *(undefined8 *)(pCVar15 + 0x200) = 0;
  *(undefined8 *)(pCVar15 + 0x208) = 0;
  *(undefined8 *)(pCVar15 + 0x21c) = 0x1000000010;
  *(undefined4 *)(pCVar15 + 0x224) = 1;
  *(undefined8 *)(pCVar15 + 0x228) = 0x101000000010101;
                    /* try { // try from 002361f6 to 002361ff has its CatchHandler @ 002375e2 */
  puVar12 = operator_new(0x170);
  *puVar12 = &PTR__DragToScrollListener_0070e810;
  puVar12[1] = &PTR__DragToScrollListener_0070e880;
  puVar12[2] = pCVar15;
  local_d0 = (Timer *)(puVar12 + 3);
  Timer::Timer(local_d0);
  puVar12[3] = &PTR__AnimatedPosition_0070e8f0;
  uVar18 = DAT_005de648;
  local_48 = 0;
  uStack_40 = DAT_005de648;
  puVar12[8] = 0;
  puVar12[9] = uVar18;
  puVar12[10] = 0x3fa999999999999a;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  uVar18 = CONCAT44(_UNK_005dd11c,_UNK_005dd118);
  puVar12[0xe] = CONCAT44(_UNK_005dd114,_DAT_005dd110);
  puVar12[0xf] = uVar18;
  puVar12[0x10] = 0;
  puVar12[0x11] = 0;
  puVar12[0x12] = 0;
  puVar12[0x13] = 0;
  puVar12[0x14] = 0;
  puVar12[0x15] = 0;
  *(undefined4 *)(puVar12 + 0x16) = 0;
  Timer::Timer((Timer *)(puVar12 + 0x17));
  puVar12[0x17] = &PTR__AnimatedPosition_0070e8f0;
  puVar12[0x1c] = local_48;
  puVar12[0x1d] = uStack_40;
  puVar12[0x1e] = 0x3fa999999999999a;
  puVar12[0x1f] = 0;
  puVar12[0x20] = 0;
  puVar12[0x21] = 0;
  uVar7 = _UNK_005dd11c;
  uVar10 = _UNK_005dd118;
  uVar36 = _UNK_005dd114;
  uVar37 = _DAT_005dd110;
  *(undefined4 *)(puVar12 + 0x22) = _DAT_005dd110;
  *(undefined4 *)((long)puVar12 + 0x114) = uVar36;
  *(undefined4 *)(puVar12 + 0x23) = uVar10;
  *(undefined4 *)((long)puVar12 + 0x11c) = uVar7;
  puVar12[0x28] = 0;
  puVar12[0x29] = 0;
  puVar12[0x26] = 0;
  puVar12[0x27] = 0;
  puVar12[0x24] = 0;
  puVar12[0x25] = 0;
  *(undefined4 *)(puVar12 + 0x2a) = 0;
  puVar12[0x2b] = 0;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00236328 to 00236331 has its CatchHandler @ 0023751c */
    pDVar11 = operator_new(0x1d0);
                    /* try { // try from 00236335 to 0023633c has its CatchHandler @ 0023750f */
    Desktop::Desktop(pDVar11);
    Desktop::instance = pDVar11;
  }
  puVar12[0x2c] = **(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28);
  *(undefined2 *)(puVar12 + 0x2d) = 0;
  lVar25 = puVar12[2];
  puVar13 = *(undefined8 **)(lVar25 + 0x1a0);
  if (puVar13 == (undefined8 *)0x0) {
                    /* try { // try from 00236374 to 0023637d has its CatchHandler @ 0023750d */
    puVar13 = operator_new(0x18);
    *puVar13 = 0;
    puVar13[1] = 0;
    *(undefined4 *)(puVar13 + 2) = 0;
    *(undefined8 **)(lVar25 + 0x1a0) = puVar13;
  }
  puVar16 = (undefined8 *)*puVar13;
  iVar9 = *(int *)((long)puVar13 + 0xc);
  if ((long)iVar9 != 0) {
    lVar25 = 0;
    do {
      if (*(undefined8 **)((long)puVar16 + lVar25) == puVar12) goto LAB_00236468;
      lVar25 = lVar25 + 8;
    } while ((long)iVar9 * 8 != lVar25);
  }
  if ((int)*(uint *)(puVar13 + 1) <= iVar9) {
    uVar29 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar13 + 1) != uVar29) {
      if ((int)uVar29 < 1) {
        free(puVar16);
        *puVar13 = 0;
        puVar16 = (undefined8 *)0x0;
      }
      else {
        puVar16 = realloc(puVar16,(ulong)uVar29 << 3);
        *puVar13 = puVar16;
      }
    }
    *(uint *)(puVar13 + 1) = uVar29;
    iVar9 = *(int *)((long)puVar13 + 0xc);
  }
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  else {
    memmove(puVar16 + 1,puVar16,(long)iVar9 << 3);
    puVar16 = (undefined8 *)*puVar13;
    iVar9 = *(int *)((long)puVar13 + 0xc) + 1;
  }
  *puVar16 = puVar12;
  *(int *)((long)puVar13 + 0xc) = iVar9;
  *(int *)(puVar13 + 2) = *(int *)(puVar13 + 2) + 1;
LAB_00236468:
  puVar13 = puVar12 + 1;
  ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
  ::initialiseIfNeeded
            ((ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
              *)(puVar12 + 0x12));
  puVar16 = (undefined8 *)puVar12[0x12];
  pvVar14 = (void *)*puVar16;
  iVar9 = *(int *)((long)puVar16 + 0xc);
  lVar25 = (long)iVar9;
  if (lVar25 != 0) {
    lVar26 = 0;
    do {
      if (*(undefined8 **)((long)pvVar14 + lVar26) == puVar13) goto LAB_00236515;
      lVar26 = lVar26 + 8;
    } while (lVar25 * 8 != lVar26);
  }
  if ((int)*(uint *)(puVar16 + 1) <= iVar9) {
    uVar29 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar16 + 1) != uVar29) {
      if ((int)uVar29 < 1) {
        free(pvVar14);
        *puVar16 = 0;
        pvVar14 = (void *)0x0;
      }
      else {
        pvVar14 = realloc(pvVar14,(ulong)uVar29 << 3);
        *puVar16 = pvVar14;
      }
    }
    *(uint *)(puVar16 + 1) = uVar29;
    iVar9 = *(int *)((long)puVar16 + 0xc);
    lVar25 = (long)iVar9;
  }
  *(int *)((long)puVar16 + 0xc) = iVar9 + 1;
  *(undefined8 **)((long)pvVar14 + lVar25 * 8) = puVar13;
LAB_00236515:
  ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
  ::initialiseIfNeeded
            ((ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
              *)(puVar12 + 0x26));
  puVar16 = (undefined8 *)puVar12[0x26];
  pvVar14 = (void *)*puVar16;
  iVar9 = *(int *)((long)puVar16 + 0xc);
  lVar25 = (long)iVar9;
  if (lVar25 != 0) {
    lVar26 = 0;
    do {
      if (*(undefined8 **)((long)pvVar14 + lVar26) == puVar13) goto LAB_002365d5;
      lVar26 = lVar26 + 8;
    } while (lVar25 * 8 != lVar26);
  }
  if ((int)*(uint *)(puVar16 + 1) <= iVar9) {
    uVar29 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar16 + 1) != uVar29) {
      if ((int)uVar29 < 1) {
        free(pvVar14);
        *puVar16 = 0;
        pvVar14 = (void *)0x0;
      }
      else {
        pvVar14 = realloc(pvVar14,(ulong)uVar29 << 3);
        *puVar16 = pvVar14;
      }
    }
    *(uint *)(puVar16 + 1) = uVar29;
    iVar9 = *(int *)((long)puVar16 + 0xc);
    lVar25 = (long)iVar9;
  }
  *(int *)((long)puVar16 + 0xc) = iVar9 + 1;
  *(undefined8 **)((long)pvVar14 + lVar25 * 8) = puVar13;
LAB_002365d5:
  puVar12[10] = 0x404e000000000000;
  puVar12[0x1e] = 0x404e000000000000;
  *(undefined8 **)(pCVar15 + 0x230) = puVar12;
                    /* try { // try from 002365f6 to 0023660f has its CatchHandler @ 002376d9 */
  (**(code **)(*(long *)local_148 + 0x60))(local_148,1);
  Component::addChildComponent(pCVar15,local_148,0xffffffff);
  pCVar5 = pCVar15 + 0x100;
  pCVar15[0x1f8] = (Component)((byte)pCVar15[0x1f8] | 0x18);
  pCVar17 = pCVar15;
  do {
    if ((*(long *)(pCVar17 + 0x68) != 0) &&
       (pLVar20 = *(LookAndFeel_V4 **)(*(long *)(pCVar17 + 0x68) + 0x10),
       pLVar20 != (LookAndFeel_V4 *)0x0)) goto LAB_00236680;
    pCVar17 = *(Component **)(pCVar17 + 0x30);
  } while (pCVar17 != (Component *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00236659 to 00236662 has its CatchHandler @ 00237505 */
    pDVar11 = operator_new(0x1d0);
                    /* try { // try from 00236666 to 0023666d has its CatchHandler @ 002374f2 */
    Desktop::Desktop(pDVar11);
    Desktop::instance = pDVar11;
  }
  pLVar20 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00236680:
                    /* try { // try from 00236683 to 00236685 has its CatchHandler @ 002376d9 */
  uVar10 = (**(code **)(*(long *)pLVar20 + 0x38))();
  *(undefined4 *)(pCVar15 + 0x218) = uVar10;
  pCVar15[0xe8] = (Component)((byte)pCVar15[0xe8] | 0x38);
  plVar28 = *(long **)(pCVar15 + 0x100);
  *(undefined8 *)(pCVar15 + 0x100) = 0;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))();
  }
  plVar28 = *(long **)(pCVar15 + 0x108);
  *(undefined8 *)(pCVar15 + 0x108) = 0;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))();
  }
                    /* try { // try from 002366d2 to 002366df has its CatchHandler @ 002376d9 */
  lVar25 = (**(code **)(*(long *)pCVar15 + 0x1b8))(pCVar15,1);
  plVar28 = *(long **)pCVar5;
  *(long *)pCVar5 = lVar25;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))();
  }
                    /* try { // try from 002366f6 to 00236700 has its CatchHandler @ 002376d9 */
  uVar18 = (**(code **)(*(long *)pCVar15 + 0x1b8))(pCVar15,0);
  plVar28 = *(long **)(pCVar15 + 0x108);
  *(undefined8 *)(pCVar15 + 0x108) = uVar18;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 8))();
  }
  if (*(Component **)pCVar5 != (Component *)0x0) {
                    /* try { // try from 00236723 to 002368df has its CatchHandler @ 002376d9 */
    Component::addChildComponent(pCVar15,*(Component **)pCVar5,0xffffffff);
  }
  if (*(Component **)(pCVar15 + 0x108) != (Component *)0x0) {
    Component::addChildComponent(pCVar15,*(Component **)(pCVar15 + 0x108),0xffffffff);
  }
  lVar25 = *(long *)(pCVar15 + 0x100);
  pCVar5 = pCVar15 + 0xf8;
  ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>
  ::initialiseIfNeeded
            ((ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>
              *)(lVar25 + 400));
  puVar12 = *(undefined8 **)(lVar25 + 400);
  pvVar14 = (void *)*puVar12;
  iVar9 = *(int *)((long)puVar12 + 0xc);
  lVar25 = (long)iVar9;
  if (lVar25 != 0) {
    lVar26 = 0;
    do {
      if (*(Component **)((long)pvVar14 + lVar26) == pCVar5) goto LAB_00236805;
      lVar26 = lVar26 + 8;
    } while (lVar25 * 8 != lVar26);
  }
  if ((int)*(uint *)(puVar12 + 1) <= iVar9) {
    uVar29 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar12 + 1) != uVar29) {
      if ((int)uVar29 < 1) {
        free(pvVar14);
        *puVar12 = 0;
        pvVar14 = (void *)0x0;
      }
      else {
        pvVar14 = realloc(pvVar14,(ulong)uVar29 << 3);
        *puVar12 = pvVar14;
      }
    }
    *(uint *)(puVar12 + 1) = uVar29;
    iVar9 = *(int *)((long)puVar12 + 0xc);
    lVar25 = (long)iVar9;
  }
  *(int *)((long)puVar12 + 0xc) = iVar9 + 1;
  *(Component **)((long)pvVar14 + lVar25 * 8) = pCVar5;
LAB_00236805:
  lVar25 = *(long *)(pCVar15 + 0x108);
  ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>
  ::initialiseIfNeeded
            ((ListenerList<juce::ScrollBar::Listener,juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>>
              *)(lVar25 + 400));
  puVar12 = *(undefined8 **)(lVar25 + 400);
  pvVar14 = (void *)*puVar12;
  iVar9 = *(int *)((long)puVar12 + 0xc);
  lVar25 = (long)iVar9;
  if (lVar25 != 0) {
    lVar26 = 0;
    do {
      if (*(Component **)((long)pvVar14 + lVar26) == pCVar5) goto LAB_002368b5;
      lVar26 = lVar26 + 8;
    } while (lVar25 * 8 != lVar26);
  }
  if ((int)*(uint *)(puVar12 + 1) <= iVar9) {
    uVar29 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar12 + 1) != uVar29) {
      if ((int)uVar29 < 1) {
        free(pvVar14);
        *puVar12 = 0;
        pvVar14 = (void *)0x0;
      }
      else {
        pvVar14 = realloc(pvVar14,(ulong)uVar29 << 3);
        *puVar12 = pvVar14;
      }
    }
    *(uint *)(puVar12 + 1) = uVar29;
    iVar9 = *(int *)((long)puVar12 + 0xc);
    lVar25 = (long)iVar9;
  }
  *(int *)((long)puVar12 + 0xc) = iVar9 + 1;
  *(Component **)((long)pvVar14 + lVar25 * 8) = pCVar5;
LAB_002368b5:
  lVar25 = *(long *)(pCVar15 + 0x100);
  puVar12 = *(undefined8 **)(lVar25 + 0x90);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = operator_new(0x18);
    *puVar12 = 0;
    puVar12[1] = 0;
    *(undefined4 *)(puVar12 + 2) = 0;
    *(undefined8 **)(lVar25 + 0x90) = puVar12;
    puVar13 = (undefined8 *)*puVar12;
    iVar9 = *(int *)((long)puVar12 + 0xc);
  }
  else {
    puVar13 = (undefined8 *)*puVar12;
    iVar9 = *(int *)((long)puVar12 + 0xc);
  }
  if ((long)iVar9 != 0) {
    lVar25 = 0;
    do {
      if (*(Component **)((long)puVar13 + lVar25) == pCVar15) goto LAB_002369a8;
      lVar25 = lVar25 + 8;
    } while ((long)iVar9 * 8 != lVar25);
  }
  if ((int)*(uint *)(puVar12 + 1) <= iVar9) {
    uVar29 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar12 + 1) != uVar29) {
      if ((int)uVar29 < 1) {
        free(puVar13);
        *puVar12 = 0;
        puVar13 = (undefined8 *)0x0;
      }
      else {
        puVar13 = realloc(puVar13,(ulong)uVar29 << 3);
        *puVar12 = puVar13;
      }
    }
    *(uint *)(puVar12 + 1) = uVar29;
    iVar9 = *(int *)((long)puVar12 + 0xc);
  }
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  else {
    memmove(puVar13 + 1,puVar13,(long)iVar9 << 3);
    puVar13 = (undefined8 *)*puVar12;
    iVar9 = *(int *)((long)puVar12 + 0xc) + 1;
  }
  *puVar13 = pCVar15;
  *(int *)((long)puVar12 + 0xc) = iVar9;
  *(int *)(puVar12 + 2) = *(int *)(puVar12 + 2) + 1;
LAB_002369a8:
  lVar25 = *(long *)(pCVar15 + 0x108);
  puVar12 = *(undefined8 **)(lVar25 + 0x90);
  if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 002369c9 to 002369d2 has its CatchHandler @ 002376d9 */
    puVar12 = operator_new(0x18);
    *puVar12 = 0;
    puVar12[1] = 0;
    *(undefined4 *)(puVar12 + 2) = 0;
    *(undefined8 **)(lVar25 + 0x90) = puVar12;
    puVar13 = (undefined8 *)*puVar12;
    iVar9 = *(int *)((long)puVar12 + 0xc);
  }
  else {
    puVar13 = (undefined8 *)*puVar12;
    iVar9 = *(int *)((long)puVar12 + 0xc);
  }
  if ((long)iVar9 != 0) {
    lVar25 = 0;
    do {
      if (*(Component **)((long)puVar13 + lVar25) == pCVar15) goto LAB_00236a98;
      lVar25 = lVar25 + 8;
    } while ((long)iVar9 * 8 != lVar25);
  }
  if ((int)*(uint *)(puVar12 + 1) <= iVar9) {
    uVar29 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar12 + 1) != uVar29) {
      if ((int)uVar29 < 1) {
        free(puVar13);
        *puVar12 = 0;
        puVar13 = (undefined8 *)0x0;
      }
      else {
        puVar13 = realloc(puVar13,(ulong)uVar29 << 3);
        *puVar12 = puVar13;
      }
    }
    *(uint *)(puVar12 + 1) = uVar29;
    iVar9 = *(int *)((long)puVar12 + 0xc);
  }
  if (iVar9 == 0) {
    iVar9 = 1;
  }
  else {
    memmove(puVar13 + 1,puVar13,(long)iVar9 << 3);
    puVar13 = (undefined8 *)*puVar12;
    iVar9 = *(int *)((long)puVar12 + 0xc) + 1;
  }
  *puVar13 = pCVar15;
  *(int *)((long)puVar12 + 0xc) = iVar9;
  *(int *)(puVar12 + 2) = *(int *)(puVar12 + 2) + 1;
LAB_00236a98:
                    /* try { // try from 00236a9b to 00236aa3 has its CatchHandler @ 002376d9 */
  (**(code **)(*(long *)pCVar15 + 0x140))(pCVar15);
  plVar28 = *(long **)(this_05 + 0x188);
  *(undefined ***)pCVar15 = &PTR__Viewport_00710628;
  *(undefined ***)(pCVar15 + 0xf0) = &PTR__TextEditorViewport_007107f8;
  *(undefined ***)(pCVar15 + 0xf8) = &PTR__TextEditorViewport_00710858;
  *(TextEditor **)(pCVar15 + 0x238) = this_05;
  *(undefined4 *)(pCVar15 + 0x240) = 0;
  pCVar15[0x244] = (Component)0x0;
  *(Component **)(this_05 + 0x188) = pCVar15;
  if (plVar28 == (long *)0x0) {
LAB_00236b0e:
                    /* try { // try from 00236b11 to 00236b43 has its CatchHandler @ 00237758 */
    (**(code **)(*(long *)pCVar15 + 0x60))(pCVar15,1);
    Component::addChildComponent(this_00,pCVar15,0xffffffff);
    pVVar35 = *(Viewport **)(this_05 + 0x188);
  }
  else {
    (**(code **)(*plVar28 + 8))();
    pCVar15 = *(Component **)(this_05 + 0x188);
    pVVar35 = (Viewport *)0x0;
    if (pCVar15 != (Component *)0x0) goto LAB_00236b0e;
  }
  puVar12 = operator_new(0x128);
  *puVar12 = &PTR__Component_00707878;
  puVar12[1] = &DAT_0061ac58;
  puVar12[2] = &DAT_0061ac58;
  puVar12[3] = &DAT_0061ac58;
  puVar12[4] = &DAT_0061ac58;
  puVar12[5] = &DAT_0061ac58;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0x11] = 0;
  puVar12[0x12] = 0;
  puVar12[0x13] = 0;
  puVar12[0x14] = 0;
  puVar12[0x15] = 0;
  puVar12[0x16] = 0;
  puVar12[0x17] = 0;
  *(undefined4 *)(puVar12 + 0x18) = 0;
  puVar12[0x19] = 0;
  puVar12[0x1a] = 0;
  puVar12[0x1b] = 0;
  puVar12[0x1c] = 0;
  *(undefined8 *)((long)puVar12 + 0xe5) = 0;
  Timer::Timer((Timer *)(puVar12 + 0x1e));
  *puVar12 = &PTR__TextHolderComponent_00710898;
  puVar12[0x1e] = &PTR__TextHolderComponent_00710a50;
  puVar12[0x23] = &PTR__TextHolderComponent_00710a78;
  puVar12[0x24] = this_05;
  *(undefined1 *)((long)puVar12 + 0xea) = *(undefined1 *)((long)puVar12 + 0xea);
  *(ushort *)(puVar12 + 0x1d) = *(ushort *)(puVar12 + 0x1d) & 0xffc7 | 0x18;
                    /* try { // try from 00236c29 to 00236c34 has its CatchHandler @ 002375c2 */
  MouseCursor::SharedCursorHandle::createStandard
            (CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),CONCAT44(uVar36,uVar37),param_3,
             (SharedCursorHandle *)&local_158,0);
                    /* try { // try from 00236c3f to 00236c49 has its CatchHandler @ 002375b5 */
  Component::setMouseCursor
            (CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),CONCAT44(uVar36,uVar37),param_3,
             (long)puVar12,(long)local_158,local_150);
  if (local_150 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(local_150 + 8) == 0x100000001) {
      *(undefined8 *)(local_150 + 8) = 0;
      (**(code **)(*(long *)local_150 + 0x10))(local_150);
      (**(code **)(*(long *)local_150 + 0x18))(local_150);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var3 = local_150 + 8;
        iVar9 = *(int *)p_Var3;
        *(int *)p_Var3 = *(int *)p_Var3 + -1;
        UNLOCK();
      }
      else {
        iVar9 = (int)*(long *)(local_150 + 8);
        *(int *)(local_150 + 8) = iVar9 + -1;
      }
      if (iVar9 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_150);
      }
    }
  }
  this_03 = (TextEditor *)puVar12[0x24];
                    /* try { // try from 00236c9c to 00236ca3 has its CatchHandler @ 002375b3 */
  TextEditor::updateValueFromText(this_03);
  Value::addListener((Value *)(this_03 + 0x2b8),(long)(puVar12 + 0x23));
  *(undefined8 **)(this_05 + 400) = puVar12;
  if ((*(long *)(pVVar35 + 0x200) != 0) &&
     (*(undefined8 **)(*(long *)(pVVar35 + 0x200) + 0x10) == puVar12)) goto LAB_00236f21;
                    /* try { // try from 00236cdc to 00236ce3 has its CatchHandler @ 00237758 */
  Viewport::deleteOrRemoveContentComp(pVVar35);
  puVar13 = (undefined8 *)puVar12[0x1b];
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = operator_new(0x18);
    *(undefined4 *)(puVar13 + 1) = 0;
    *puVar13 = &PTR__ReferenceCountedObject_00714b80;
    puVar13[2] = puVar12;
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
    plVar28 = (long *)puVar12[0x1b];
    puVar12[0x1b] = puVar13;
    if (plVar28 == (long *)0x0) goto LAB_00236cf4;
    LOCK();
    plVar2 = plVar28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar28 + 8))();
    }
    puVar13 = (undefined8 *)puVar12[0x1b];
    if (puVar13 != (undefined8 *)0x0) goto LAB_00236cf4;
    puVar13 = (undefined8 *)0x0;
    plVar28 = *(long **)(pVVar35 + 0x200);
    *(undefined8 *)(pVVar35 + 0x200) = 0;
  }
  else {
LAB_00236cf4:
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
    plVar28 = *(long **)(pVVar35 + 0x200);
    *(undefined8 **)(pVVar35 + 0x200) = puVar13;
  }
  if (plVar28 != (long *)0x0) {
    LOCK();
    plVar2 = plVar28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar28 + 8))();
    }
    puVar13 = *(undefined8 **)(pVVar35 + 0x200);
  }
  pVVar35[0x22a] = (Viewport)0x1;
  if ((puVar13 != (undefined8 *)0x0) &&
     (pCVar15 = (Component *)puVar13[2], pCVar15 != (Component *)0x0)) {
                    /* try { // try from 00236d41 to 00236dba has its CatchHandler @ 00237758 */
    (**(code **)(*(long *)pCVar15 + 0x60))(pCVar15,1);
    Component::addChildComponent((Component *)(pVVar35 + 0x110),pCVar15,0xffffffff);
    if ((*(long *)(pVVar35 + 0x200) == 0) ||
       (pCVar15 = *(Component **)(*(long *)(pVVar35 + 0x200) + 0x10), pCVar15 == (Component *)0x0))
    {
LAB_00236e27:
      lVar25 = 0;
    }
    else {
      uVar18 = Viewport::viewportPosToCompPos(pVVar35,0);
      Component::setBounds
                (pCVar15,(int)uVar18,(int)((ulong)uVar18 >> 0x20),*(int *)(pCVar15 + 0x40),
                 *(int *)(pCVar15 + 0x44));
      if (*(long *)(pVVar35 + 0x200) == 0) goto LAB_00236e27;
      lVar25 = *(long *)(*(long *)(pVVar35 + 0x200) + 0x10);
    }
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::initialiseIfNeeded
              ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(lVar25 + 0xa0));
    puVar12 = *(undefined8 **)(lVar25 + 0xa0);
    pvVar14 = (void *)*puVar12;
    iVar9 = *(int *)((long)puVar12 + 0xc);
    lVar25 = (long)iVar9;
    if (lVar25 != 0) {
      lVar26 = 0;
      do {
        if (*(Viewport **)((long)pvVar14 + lVar26) == pVVar35 + 0xf0) goto LAB_00236ef9;
        lVar26 = lVar26 + 8;
      } while (lVar25 * 8 != lVar26);
    }
    if ((int)*(uint *)(puVar12 + 1) <= iVar9) {
      uVar29 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar12 + 1) != uVar29) {
        if ((int)uVar29 < 1) {
          free(pvVar14);
          *puVar12 = 0;
          pvVar14 = (void *)0x0;
        }
        else {
          pvVar14 = realloc(pvVar14,(ulong)uVar29 << 3);
          *puVar12 = pvVar14;
        }
      }
      *(uint *)(puVar12 + 1) = uVar29;
      iVar9 = *(int *)((long)puVar12 + 0xc);
      lVar25 = (long)iVar9;
    }
    *(int *)((long)puVar12 + 0xc) = iVar9 + 1;
    *(Viewport **)((long)pvVar14 + lVar25 * 8) = pVVar35 + 0xf0;
  }
LAB_00236ef9:
  if (*(long *)(pVVar35 + 0x200) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(*(long *)(pVVar35 + 0x200) + 0x10);
  }
                    /* try { // try from 00236f10 to 00236f8c has its CatchHandler @ 00237758 */
  (**(code **)(*(long *)pVVar35 + 0x1a0))(pVVar35,uVar18);
  Viewport::updateVisibleArea(pVVar35);
LAB_00236f21:
  lVar25 = *(long *)(this_05 + 0x188);
  *(undefined1 *)(lVar25 + 0xea) = *(undefined1 *)(lVar25 + 0xea);
  *(ushort *)(lVar25 + 0xe8) = *(ushort *)(lVar25 + 0xe8) & 0xffdf;
  pVVar35 = *(Viewport **)(this_05 + 0x188);
  *(undefined2 *)(pVVar35 + 0x22c) = 0;
  if (pVVar35[0x229] != (Viewport)0x0 || pVVar35[0x228] != (Viewport)0x0) {
    *(undefined2 *)(pVVar35 + 0x228) = 0;
    Viewport::updateVisibleArea(pVVar35);
  }
  this_05[0xf0] = (TextEditor)((byte)this_05[0xf0] | 0x20);
  TextEditor::recreateCaret(this_05);
  if (local_140 != &emptyString) {
    LOCK();
    iVar9 = *local_140;
    *local_140 = *local_140 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(local_140);
    }
  }
  pLVar19 = this;
  do {
    if ((*(long *)(pLVar19 + 0x68) != 0) &&
       (pLVar20 = *(LookAndFeel_V4 **)(*(long *)(pLVar19 + 0x68) + 0x10),
       pLVar20 != (LookAndFeel_V4 *)0x0)) goto LAB_00237010;
    pLVar19 = *(Label **)(pLVar19 + 0x30);
  } while (pLVar19 != (Label *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00236fe9 to 00236ff2 has its CatchHandler @ 002374f0 */
    pDVar11 = operator_new(0x1d0);
                    /* try { // try from 00236ff6 to 00236ffd has its CatchHandler @ 002374ee */
    Desktop::Desktop(pDVar11);
    Desktop::instance = pDVar11;
  }
  pLVar20 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00237010:
  (**(code **)(*(long *)(pLVar20 + 0x50) + 0x18))(&local_158,pLVar20 + 0x50,this);
  if (local_158 != (long *)0x0) {
    LOCK();
    *(int *)(local_158 + 1) = (int)local_158[1] + 1;
    UNLOCK();
  }
  plVar28 = *(long **)(this_05 + 0x288);
  *(long **)(this_05 + 0x288) = local_158;
  if (plVar28 != (long *)0x0) {
    LOCK();
    plVar2 = plVar28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar28 + 8))();
    }
  }
  this_04 = *(RangedValues<juce::Font> **)(this_05 + 0x330);
  local_138 = (byte *)0x0;
  lStack_130 = 0;
  local_128 = (long *)0x0;
  if (*(long *)(this_04 + 0x68) == *(long *)(this_04 + 0x70)) {
    uVar21 = 0;
  }
  else {
    uVar27 = *(ulong *)(*(long *)(this_04 + 0x70) + -8);
    uVar21 = 0;
    if (-1 < (long)uVar27) {
      uVar21 = uVar27;
    }
  }
  if (local_158 != (long *)0x0) {
    LOCK();
    *(int *)(local_158 + 1) = (int)local_158[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 002370ad to 002370c3 has its CatchHandler @ 00237583 */
  ppbVar32 = &local_138;
  local_b0 = local_158;
  detail::RangedValues<juce::Font>::set<juce::detail::MergeEqualItemsYes>
            (this_04,0,uVar21,(long *)&local_b0,(long *)ppbVar32);
  if (local_b0 != (long *)0x0) {
    LOCK();
    plVar28 = local_b0 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)(*local_b0 + 8))();
    }
  }
                    /* try { // try from 002370ed to 002370f1 has its CatchHandler @ 0023757e */
  TextEditor::TextEditorStorage::clearShapedTexts
            (*(long *)(this_04 + 0x68),*(long *)(this_04 + 0x70),*(long *)(this_04 + 0x80));
  if (local_138 != (byte *)0x0) {
    operator_delete(local_138);
  }
                    /* try { // try from 00237101 to 00237112 has its CatchHandler @ 0023768a */
  uVar21 = Component::findColour(this_00,0x1000201,'\0');
  lVar25 = *(long *)(this_05 + 0x330);
  local_138 = (byte *)0x0;
  lStack_130 = 0;
  local_128 = (long *)0x0;
  if (*(long *)(lVar25 + 0x68) == *(long *)(lVar25 + 0x70)) {
    local_148 = (Component *)0;
  }
  else {
    uVar27 = *(ulong *)(*(long *)(lVar25 + 0x70) + -8);
    local_148 = (Component *)0;
    if (-1 < (long)uVar27) {
      local_148 = (Component *)uVar27;
    }
  }
  this_01 = (Ranges *)(lVar25 + 0x30);
                    /* try { // try from 0023716c to 0023717f has its CatchHandler @ 00237692 */
  ppbVar24 = &local_138;
  detail::Ranges::set(this_01,0,(ulong)local_148,ppbVar24);
  pbVar33 = local_138;
  if (lStack_130 - (long)local_138 != 0) {
    ppbVar24 = (byte **)0x2aaaaaaaaaaaaaab;
    uVar27 = SUB168(SEXT816(lStack_130 - (long)local_138) * SEXT816(0x2aaaaaaaaaaaaaab),8);
    lVar26 = 0;
    do {
                    /* try { // try from 002371c4 to 002371ce has its CatchHandler @ 00237991 */
      detail::RangedValues<juce::Colour>::applyOperation
                ((RangedValues<juce::Colour> *)this_01,(long *)(pbVar33 + lVar26),(int)uVar21);
      lVar26 = lVar26 + 0x30;
    } while (((uVar27 >> 3) - ((long)uVar27 >> 0x3f)) * 0x30 != lVar26);
  }
                    /* try { // try from 002371d8 to 0023720c has its CatchHandler @ 00237692 */
  detail::RangedValues<juce::Colour>::mergeEqualItems
            ((RangedValues<juce::Colour> *)this_01,0,(long *)&local_138);
  detail::RangedValues<juce::Colour>::mergeEqualItems
            ((RangedValues<juce::Colour> *)this_01,(long)local_148,(long *)&local_138);
  lVar26 = *(long *)(lVar25 + 0x70);
  TextEditor::TextEditorStorage::clearShapedTexts
            (*(long *)(lVar25 + 0x68),lVar26,*(long *)(lVar25 + 0x80));
  uVar18 = extraout_RDX;
  if (local_138 != (byte *)0x0) {
    operator_delete(local_138);
    uVar18 = extraout_RDX_00;
  }
                    /* try { // try from 00237221 to 00237248 has its CatchHandler @ 0023768a */
  TextEditor::checkLayout
            (this_05,lVar26,uVar18,(long)ppbVar24,(uint *)ppbVar32,
             CONCAT44(in_register_0000008c,in_R9D));
  TextEditor::scrollToMakeSureCursorIsVisible(this_05);
  Component::internalRepaintUnchecked((long)this_00,0,*(ulong *)(this_05 + 0x48),'\x01');
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar28 = local_158 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)(*local_158 + 8))();
    }
  }
  uVar21 = (ulong)(int)*(uint *)(this + 0xd4);
  if ((long)uVar21 < 1) {
LAB_00237490:
    copyColourIfSpecified((Component *)this,(long)this_05,0x1000284,0x1000201);
    copyColourIfSpecified((Component *)this,(long)this_05,0x1000283,0x1000200);
    copyColourIfSpecified((Component *)this,(long)this_05,0x1000285,0x1000206);
    return this_05;
  }
  bVar6 = false;
  bVar34 = false;
  uVar27 = uVar21 - 1;
  if ((uint)uVar27 < *(uint *)(this + 0xd4)) goto LAB_002372b0;
LAB_002372a0:
  local_138 = &DAT_0061ac58;
  uVar30 = uVar27;
LAB_002372e4:
  pbVar33 = local_138;
  iVar9 = 0;
  pcVar23 = "jcclr_";
  do {
    if (*pcVar23 < '\0') {
      do {
        pbVar4 = (byte *)(pcVar23 + 1);
        pcVar23 = pcVar23 + 1;
        pcVar22 = pcVar23;
      } while ((*pbVar4 & 0xc0) == 0x80);
    }
    else {
      pcVar22 = pcVar23 + 1;
      if (*pcVar23 == '\0') break;
    }
    iVar9 = iVar9 + 1;
    pcVar23 = pcVar22;
  } while( true );
  uVar29 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (local_138,&detail::colourPropertyPrefix,iVar9,pcVar23,ppbVar32,in_R9D);
  if (uVar29 == 0) {
    if ((long)*(int *)(this + 0xd4) != 0) {
      plVar28 = (long *)(*(long *)(this + 200) + 8);
      lVar25 = (long)*(int *)(this + 0xd4) * 0x18;
      do {
        if ((byte *)plVar28[-1] == pbVar33) goto LAB_002373b1;
        plVar28 = plVar28 + 3;
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != 0);
    }
    plVar28 = (long *)&getNullVarRef()::nullVar;
    if (getNullVarRef()::nullVar == '\0') {
      iVar9 = __cxa_guard_acquire(&getNullVarRef()::nullVar);
      plVar28 = (long *)&getNullVarRef()::nullVar;
      if (iVar9 != 0) {
        getNullVarRef()::nullVar = &var::Instance::attributesVoid;
        __cxa_atexit(var::~var,&getNullVarRef()::nullVar,&__dso_handle);
        __cxa_guard_release(&getNullVarRef()::nullVar);
        plVar28 = (long *)&getNullVarRef()::nullVar;
      }
    }
LAB_002373b1:
                    /* try { // try from 002373b1 to 002373bd has its CatchHandler @ 0023769f */
    uVar18 = NamedValueSet::set((NamedValueSet *)(this_05 + 0xd0),(long *)&local_138,plVar28);
    bVar34 = bVar6;
    if ((char)uVar18 != '\0') {
      bVar34 = true;
    }
    pbVar33 = local_138 + -0x10;
    bVar6 = bVar34;
    if (pbVar33 == (byte *)&emptyString) goto LAB_002373f9;
  }
  else {
    pbVar33 = pbVar33 + -0x10;
    if (pbVar33 == (byte *)&emptyString) goto LAB_002373f9;
  }
  LOCK();
  iVar9 = *(int *)pbVar33;
  *(int *)pbVar33 = *(int *)pbVar33 + -1;
  UNLOCK();
  if (iVar9 == 0) {
    operator_delete__(pbVar33);
  }
LAB_002373f9:
  if ((uVar21 & 0xfffffffe) == 0) {
    if (bVar34) {
      (**(code **)(*(long *)(this_05 + 8) + 0x180))();
    }
    goto LAB_00237490;
  }
  uVar27 = uVar30 - 1;
  uVar21 = uVar30;
  if ((uint)uVar27 < *(uint *)(this + 0xd4)) {
LAB_002372b0:
    local_138 = *(byte **)(*(long *)(this + 200) + uVar27 * 0x18);
    pbVar33 = local_138 + -0x10;
    uVar30 = uVar27;
    if (pbVar33 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar33 = *(int *)pbVar33 + 1;
      UNLOCK();
    }
    goto LAB_002372e4;
  }
  goto LAB_002372a0;
}


