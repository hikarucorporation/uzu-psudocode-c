// Function : OutlineWindowComponent
// Namespace: juce:OutlineWindowComponent
// Entry    : 002b8fd0
// Prototype: undefined OutlineWindowComponent(OutlineWindowComponent * this, long param_1, undefined8 param_2)
// Body     : 002b8fd0 - 002b91e4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::OutlineWindowComponent::OutlineWindowComponent(juce::Component*,
   juce::FocusOutline::OutlineWindowProperties&) */

void __thiscall
juce::OutlineWindowComponent::OutlineWindowComponent
          (OutlineWindowComponent *this,long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  Component *this_00;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  
  *(undefined1 **)(this + 8) = &DAT_0061ac58;
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
  *(undefined ***)this = &PTR__OutlineWindowComponent_0070fdd8;
  if (param_1 == 0) {
    *(undefined8 *)(this + 0xf0) = 0;
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 002b917c to 002b9185 has its CatchHandler @ 002b91e5 */
      puVar5 = operator_new(0x18);
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &PTR__ReferenceCountedObject_00714b80;
      puVar5[2] = param_1;
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
      plVar3 = *(long **)(param_1 + 0xd8);
      *(undefined8 **)(param_1 + 0xd8) = puVar5;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar7 = *(long *)(param_1 + 0xd8);
        *(long *)(this + 0xf0) = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        goto LAB_002b9087;
      }
    }
    *(undefined8 **)(this + 0xf0) = puVar5;
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
LAB_002b9087:
  *(undefined8 *)(this + 0xf8) = param_2;
                    /* try { // try from 002b908e to 002b909a has its CatchHandler @ 002b91ec */
  Component::setVisible((Component *)this,1);
  this[0xea] = this[0xea];
  *(ushort *)(this + 0xe8) = *(ushort *)(this + 0xe8) & 0xffe7 | 8;
  if (*(long *)(this + 0xf0) == 0) {
    if ((_DAT_000000e8 & 1) != 0) goto LAB_002b914e;
    if (_DAT_00000030 == (Component *)0x0) {
      return;
    }
    lVar7 = 0;
    iVar2 = *(int *)(_DAT_00000030 + 100);
    this_00 = _DAT_00000030;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0xf0) + 0x10);
    if ((*(ushort *)(lVar7 + 0xe8) & 1) != 0) {
LAB_002b914e:
                    /* try { // try from 002b9154 to 002b9175 has its CatchHandler @ 002b91ec */
      Component::setBounds((Component *)this,*(int *)(this + 0x38),*(int *)(this + 0x3c),1,1);
      Component::addToDesktop((Component *)this,0x406,0);
      return;
    }
    this_00 = *(Component **)(lVar7 + 0x30);
    if (this_00 == (Component *)0x0) {
      return;
    }
    iVar2 = *(int *)(this_00 + 100);
  }
  if ((long)iVar2 != 0) {
    uVar6 = 1;
    lVar4 = 0;
    do {
      if (*(long *)(*(long *)(this_00 + 0x58) + lVar4) == lVar7) goto LAB_002b9144;
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 8;
    } while ((long)iVar2 * 8 != lVar4);
  }
  uVar6 = 0;
LAB_002b9144:
                    /* try { // try from 002b9144 to 002b914b has its CatchHandler @ 002b91ea */
  Component::addChildComponent(this_00,(Component *)this,uVar6);
  return;
}


