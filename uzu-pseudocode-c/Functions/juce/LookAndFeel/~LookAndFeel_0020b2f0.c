// Function : ~LookAndFeel
// Namespace: juce:LookAndFeel
// Entry    : 0020b2f0
// Prototype: undefined ~LookAndFeel(LookAndFeel * this)
// Body     : 0020b2f0 - 0020b531


/* juce::LookAndFeel::~LookAndFeel() */

void __thiscall juce::LookAndFeel::~LookAndFeel(LookAndFeel *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  
  *(undefined ***)this = &PTR__LookAndFeel_00709020;
  *(undefined ***)(this + 8) = &PTR__LookAndFeel_007090c8;
  *(undefined ***)(this + 0x10) = &PTR__LookAndFeel_00709128;
  *(undefined ***)(this + 0x18) = &PTR__LookAndFeel_00709150;
  *(undefined ***)(this + 0x20) = &PTR__LookAndFeel_00709188;
  *(undefined ***)(this + 0x28) = &PTR__LookAndFeel_007091d8;
  *(undefined ***)(this + 0x30) = &PTR__LookAndFeel_00709210;
  *(undefined ***)(this + 0x38) = &PTR__LookAndFeel_00709240;
  *(undefined ***)(this + 0x40) = &PTR__LookAndFeel_007092a0;
  *(undefined ***)(this + 0x48) = &PTR__LookAndFeel_00709388;
  *(undefined ***)(this + 0x50) = &PTR__LookAndFeel_007093d8;
  *(undefined ***)(this + 0x58) = &PTR__LookAndFeel_00709410;
  *(undefined ***)(this + 0x60) = &PTR__LookAndFeel_00709490;
  *(undefined ***)(this + 0x68) = &PTR__LookAndFeel_007094d0;
  *(undefined ***)(this + 0x70) = &PTR__LookAndFeel_00709508;
  *(undefined ***)(this + 0x78) = &PTR__LookAndFeel_00709538;
  *(undefined ***)(this + 0x80) = &PTR__LookAndFeel_007095b8;
  *(undefined ***)(this + 0x88) = &PTR__LookAndFeel_00709600;
  *(undefined ***)(this + 0x90) = &PTR__LookAndFeel_00709630;
  *(undefined ***)(this + 0x98) = &PTR__LookAndFeel_00709658;
  *(undefined ***)(this + 0xa0) = &PTR__LookAndFeel_00709688;
  *(undefined ***)(this + 0xa8) = &PTR__LookAndFeel_007096c0;
  *(undefined ***)(this + 0xb0) = &PTR__LookAndFeel_00709700;
  *(undefined ***)(this + 0xb8) = &PTR__LookAndFeel_00709728;
  *(undefined ***)(this + 0xc0) = &PTR__LookAndFeel_00709760;
  *(undefined ***)(this + 200) = &PTR__LookAndFeel_00709788;
  *(undefined ***)(this + 0xd0) = &PTR__LookAndFeel_007097b0;
  *(undefined ***)(this + 0xd8) = &PTR__LookAndFeel_007097d8;
  *(undefined ***)(this + 0xe0) = &PTR__LookAndFeel_00709800;
  plVar3 = *(long **)(this + 0x120);
  if (plVar3 != (long *)0x0) {
    plVar3[2] = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(long **)(this + 0x110);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  piVar5 = (int *)(*(long *)(this + 0x108) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
      lVar4 = *(long *)(this + 0x100);
      goto joined_r0x0020b4f1;
    }
  }
  lVar4 = *(long *)(this + 0x100);
joined_r0x0020b4f1:
  piVar5 = (int *)(lVar4 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
  }
  piVar5 = (int *)(*(long *)(this + 0xf8) + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
  }
  *(undefined4 *)(this + 0xf4) = 0;
  free(*(void **)(this + 0xe8));
  return;
}


