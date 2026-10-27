// Function : Item
// Namespace: juce:PopupMenu:Item
// Entry    : 0027d910
// Prototype: undefined Item(Item * this, long * param_1)
// Body     : 0027d910 - 0027db20


/* juce::PopupMenu::Item::Item(juce::PopupMenu::Item const&) */

void __thiscall juce::PopupMenu::Item::Item(Item *this,long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *this_00;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  Item *this_01;
  long *plVar8;
  
  lVar4 = *param_1;
  *(long *)this = lVar4;
  piVar3 = (int *)(lVar4 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(int *)(this + 8) = (int)param_1[1];
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if ((code *)param_1[4] != (code *)0x0) {
                    /* try { // try from 0027d964 to 0027d96d has its CatchHandler @ 0027db37 */
    (*(code *)param_1[4])(this + 0x10,param_1 + 2,2);
    *(long *)(this + 0x28) = param_1[5];
    *(long *)(this + 0x20) = param_1[4];
  }
  puVar2 = (undefined8 *)param_1[6];
  if (puVar2 == (undefined8 *)0x0) {
    this_00 = (ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *)0x0;
  }
  else {
                    /* try { // try from 0027d987 to 0027d994 has its CatchHandler @ 0027db32 */
    this_00 = operator_new(0x18);
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    plVar8 = (long *)*puVar2;
    uVar1 = *(uint *)((long)puVar2 + 0xc);
    if ((int)uVar1 < 1) {
      lVar4 = 0;
      iVar5 = 0;
    }
    else {
      uVar6 = uVar1 + (uVar1 >> 1) + 8 & 0xfffffff8;
      if ((int)uVar6 < 1) {
        lVar4 = 0;
        iVar5 = 0;
      }
      else {
        ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::setAllocatedSizeInternal
                  (this_00,uVar6);
        iVar5 = *(int *)(this_00 + 0xc);
        lVar4 = *(long *)this_00;
      }
      *(uint *)(this_00 + 8) = uVar6;
    }
    iVar7 = uVar1 + 1;
    this_01 = (Item *)((long)iVar5 * 0x70 + lVar4);
    while (iVar7 = iVar7 + -1, 0 < iVar7) {
                    /* try { // try from 0027da1f to 0027da26 has its CatchHandler @ 0027db5a */
      Item(this_01,plVar8);
      this_01 = this_01 + 0x70;
      plVar8 = plVar8 + 0xe;
    }
    *(uint *)(this_00 + 0xc) = iVar5 + uVar1;
    lVar4 = puVar2[2];
    *(long *)(this_00 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  *(ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> **)(this + 0x30) = this_00;
  if ((long *)param_1[7] == (long *)0x0) {
    *(undefined8 *)(this + 0x38) = 0;
    lVar4 = param_1[8];
    *(long *)(this + 0x40) = lVar4;
  }
  else {
                    /* try { // try from 0027da7d to 0027da82 has its CatchHandler @ 0027db21 */
    (**(code **)(*(long *)param_1[7] + 0x198))();
    lVar4 = param_1[8];
    *(long *)(this + 0x40) = lVar4;
  }
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0xf8) = *(int *)(lVar4 + 0xf8) + 1;
  }
  lVar4 = param_1[9];
  *(long *)(this + 0x48) = lVar4;
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  *(long *)(this + 0x50) = param_1[10];
  lVar4 = param_1[0xb];
  *(long *)(this + 0x58) = lVar4;
  piVar3 = (int *)(lVar4 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(int *)(this + 0x60) = (int)param_1[0xc];
  this[100] = *(Item *)((long)param_1 + 100);
  this[0x65] = *(Item *)((long)param_1 + 0x65);
  this[0x66] = *(Item *)((long)param_1 + 0x66);
  this[0x67] = *(Item *)((long)param_1 + 0x67);
  this[0x68] = *(Item *)(param_1 + 0xd);
  return;
}


