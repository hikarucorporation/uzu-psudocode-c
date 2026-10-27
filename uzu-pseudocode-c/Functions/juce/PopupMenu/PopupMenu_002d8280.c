// Function : PopupMenu
// Namespace: juce:PopupMenu
// Entry    : 002d8280
// Prototype: undefined PopupMenu(PopupMenu * this, undefined8 * param_1)
// Body     : 002d8280 - 002d8337


/* juce::PopupMenu::PopupMenu(juce::PopupMenu const&) */

void __thiscall juce::PopupMenu::PopupMenu(PopupMenu *this,undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  Item *this_00;
  long *plVar6;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  plVar6 = (long *)*param_1;
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    iVar3 = 0;
  }
  else {
    uVar4 = uVar1 + (uVar1 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar4 < 1) {
      lVar2 = 0;
      iVar3 = 0;
    }
    else {
      ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::setAllocatedSizeInternal
                ((ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *)this,uVar4);
      iVar3 = *(int *)(this + 0xc);
      lVar2 = *(long *)this;
    }
    *(uint *)(this + 8) = uVar4;
  }
  iVar5 = uVar1 + 1;
  this_00 = (Item *)((long)iVar3 * 0x70 + lVar2);
  while (iVar5 = iVar5 + -1, 0 < iVar5) {
                    /* try { // try from 002d82ff to 002d8306 has its CatchHandler @ 002d8338 */
    Item::Item(this_00,plVar6);
    this_00 = this_00 + 0x70;
    plVar6 = plVar6 + 0xe;
  }
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + uVar1;
  lVar2 = param_1[2];
  *(long *)(this + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}


