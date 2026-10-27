// Function : lookAndFeelChanged
// Namespace: juce:ComboBox
// Entry    : 002db430
// Prototype: undefined lookAndFeelChanged(ComboBox * this)
// Body     : 002db430 - 002db895


/* juce::ComboBox::lookAndFeelChanged() */

void __thiscall juce::ComboBox::lookAndFeelChanged(ComboBox *this)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  ComboBox *pCVar5;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar6;
  Label *this_01;
  undefined8 *puVar7;
  void *__ptr;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  long local_58;
  undefined8 uStack_50;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pCVar5 = this;
  do {
    if ((*(long *)(pCVar5 + 0x68) != 0) &&
       (pLVar6 = *(LookAndFeel_V4 **)(*(long *)(pCVar5 + 0x68) + 0x10),
       pLVar6 != (LookAndFeel_V4 *)0x0)) goto LAB_002db4a0;
    pCVar5 = *(ComboBox **)(pCVar5 + 0x30);
  } while (pCVar5 != (ComboBox *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002db479 to 002db482 has its CatchHandler @ 002db8a9 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002db486 to 002db48d has its CatchHandler @ 002db896 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar6 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002db4a0:
  this_01 = (Label *)(**(code **)(*(long *)(pLVar6 + 0x48) + 0x20))(pLVar6 + 0x48,this);
  lVar8 = *(long *)(this + 0x1b8);
  if (lVar8 == 0) {
    *(Label **)(this + 0x1b8) = this_01;
    if (this_01 == (Label *)0x0) {
      lVar8 = 0;
      goto LAB_002db666;
    }
  }
  else {
    bVar2 = *(char *)(lVar8 + 0x210) != '\0';
    bVar3 = *(char *)(lVar8 + 0x211) != '\0';
    this_01[0x210] = (Label)(bVar2 || bVar3);
    *(undefined2 *)(this_01 + 0x211) = 0;
    uVar4 = 0xe0;
    if (!bVar2 && !bVar3) {
      uVar4 = 0;
    }
    this_01[0xea] = this_01[0xea];
    *(ushort *)(this_01 + 0xe8) = uVar4 | *(ushort *)(this_01 + 0xe8) & 0xff1f;
    plVar1 = *(long **)(this_01 + 0xe0);
    *(undefined8 *)(this_01 + 0xe0) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    lVar8 = *(long *)(this + 0x1b8);
    if (*(int *)(this_01 + 0x1b8) != *(int *)(lVar8 + 0x1b8)) {
      *(int *)(this_01 + 0x1b8) = *(int *)(lVar8 + 0x1b8);
                    /* try { // try from 002db555 to 002db563 has its CatchHandler @ 002db8b1 */
      Component::internalRepaintUnchecked((long)this_01,0,*(ulong *)(this_01 + 0x40),'\x01');
      lVar8 = *(long *)(this + 0x1b8);
    }
                    /* try { // try from 002db579 to 002db57e has its CatchHandler @ 002db91a */
    (**(code **)(*(long *)(lVar8 + 0xf0) + 0x10))(&local_58,lVar8 + 0xf0);
                    /* try { // try from 002db58c to 002db591 has its CatchHandler @ 002db8ef */
    (**(code **)(*(long *)(this_01 + 0xf0) + 0x18))(this_01 + 0xf0,&local_58);
    piVar12 = (int *)(local_58 + -0x10);
    if (piVar12 != &emptyString) {
      LOCK();
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        operator_delete__(piVar12);
      }
    }
                    /* try { // try from 002db5c9 to 002db5ce has its CatchHandler @ 002db8ed */
    (**(code **)(**(long **)(*(long *)(this + 0x1b8) + 0x178) + 0x10))(&local_58);
                    /* try { // try from 002db5d8 to 002db5e2 has its CatchHandler @ 002db8d6 */
    (**(code **)(local_58 + 0x28))(&local_38,&uStack_50);
                    /* try { // try from 002db5e7 to 002db5ec has its CatchHandler @ 002db8ce */
    (**(code **)(local_58 + 0x58))(&uStack_50);
                    /* try { // try from 002db5ed to 002db5fb has its CatchHandler @ 002db8b3 */
    Label::setText(this_01,&local_38,0);
    piVar12 = (int *)(CONCAT44(local_38._4_4_,(undefined4)local_38) + -0x10);
    if (piVar12 != &emptyString) {
      LOCK();
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        operator_delete__(piVar12);
      }
    }
    plVar1 = *(long **)(this + 0x1b8);
    *(Label **)(this + 0x1b8) = this_01;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      this_01 = *(Label **)(this + 0x1b8);
    }
    lVar8 = 0;
    if (this_01 == (Label *)0x0) goto LAB_002db666;
  }
  (**(code **)(*(long *)this_01 + 0x60))(this_01,1);
  Component::addChildComponent((Component *)this,(Component *)this_01,0xffffffff);
  lVar8 = *(long *)(this + 0x1b8);
LAB_002db666:
  bVar2 = *(char *)(lVar8 + 0x210) != '\0';
  bVar3 = *(char *)(lVar8 + 0x211) != '\0';
  iVar9 = (bVar2 || bVar3) + 1;
  if (iVar9 != *(int *)(this + 0x1d0)) {
    *(int *)(this + 0x1d0) = iVar9;
    this[0xea] = this[0xea];
    *(ushort *)(this + 0xe8) =
         (ushort)*(undefined3 *)(this + 0xe8) & 0xffdf | (ushort)(!bVar2 && !bVar3) << 5;
  }
  uStack_30 = 0;
  uStack_2c = 0;
  local_58 = *(long *)(lVar8 + 0x118);
  uStack_50 = *(undefined8 *)(lVar8 + 0x120);
  *(ComboBox **)(lVar8 + 0x118) = this;
  *(undefined4 *)(lVar8 + 0x120) = 0;
  *(undefined4 *)(lVar8 + 0x124) = 0;
  local_48 = *(code **)(lVar8 + 0x128);
  *(code **)(lVar8 + 0x128) =
       std::_Function_handler<void(),juce::ComboBox::lookAndFeelChanged()::$_128>::_M_manager;
  local_40 = *(undefined8 *)(lVar8 + 0x130);
  *(code **)(lVar8 + 0x130) =
       std::_Function_handler<void(),juce::ComboBox::lookAndFeelChanged()::$_128>::_M_invoke;
  local_38 = this;
  if (local_48 != (code *)0x0) {
                    /* try { // try from 002db724 to 002db730 has its CatchHandler @ 002db8c6 */
    (*local_48)(&local_58,&local_58,3);
  }
  lVar8 = *(long *)(this + 0x1b8);
  puVar7 = *(undefined8 **)(lVar8 + 0x90);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = operator_new(0x18);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 2) = 0;
    *(undefined8 **)(lVar8 + 0x90) = puVar7;
    __ptr = (void *)*puVar7;
    iVar9 = *(int *)((long)puVar7 + 0xc);
  }
  else {
    __ptr = (void *)*puVar7;
    iVar9 = *(int *)((long)puVar7 + 0xc);
  }
  lVar8 = (long)iVar9;
  if (lVar8 != 0) {
    lVar10 = 0;
    do {
      if (*(ComboBox **)((long)__ptr + lVar10) == this) goto LAB_002db80c;
      lVar10 = lVar10 + 8;
    } while (lVar8 * 8 != lVar10);
  }
  if ((int)*(uint *)(puVar7 + 1) <= iVar9) {
    uVar11 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar7 + 1) != uVar11) {
      if ((int)uVar11 < 1) {
        free(__ptr);
        *puVar7 = 0;
        __ptr = (void *)0x0;
      }
      else {
        __ptr = realloc(__ptr,(ulong)uVar11 << 3);
        *puVar7 = __ptr;
      }
    }
    *(uint *)(puVar7 + 1) = uVar11;
    iVar9 = *(int *)((long)puVar7 + 0xc);
    lVar8 = (long)iVar9;
  }
  *(int *)((long)puVar7 + 0xc) = iVar9 + 1;
  *(ComboBox **)((long)__ptr + lVar8 * 8) = this;
LAB_002db80c:
  lVar8 = *(long *)(this + 0x1b8);
  iVar9 = *(int *)(this + 0x1d0);
  *(undefined2 *)(lVar8 + 0xe8) = *(undefined2 *)(lVar8 + 0xe8);
  *(byte *)(lVar8 + 0xea) =
       *(byte *)(lVar8 + 0xea) & 0xdf | (byte)(((uint)(iVar9 != 2) << 0x15) >> 0x10);
  if (iVar9 != 2) {
    plVar1 = *(long **)(lVar8 + 0xe0);
    *(undefined8 *)(lVar8 + 0xe0) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  (**(code **)(*(long *)this + 0x180))(this);
  (**(code **)(*(long *)this + 0x140))(this);
  return;
}


