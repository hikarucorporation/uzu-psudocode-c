// Function : hideEditor
// Namespace: juce:Label
// Entry    : 00238f60
// Prototype: undefined hideEditor(Label * this, char param_1)
// Body     : 00238f60 - 002390f9


/* juce::Label::hideEditor(bool) */

void __thiscall juce::Label::hideEditor(Label *this,char param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  char cVar7;
  
  if (*(long *)(this + 0x1c0) == 0) {
    return;
  }
  plVar6 = *(long **)(this + 0xd8);
  if (plVar6 == (long *)0x0) {
    plVar6 = operator_new(0x18);
    *(undefined4 *)(plVar6 + 1) = 0;
    *plVar6 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar6[2] = (long)this;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar1 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar6;
    if (plVar1 == (long *)0x0) goto LAB_00238f8b;
    LOCK();
    plVar6 = plVar1 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar6 = *(long **)(this + 0xd8);
    if (plVar6 != (long *)0x0) goto LAB_00238f8b;
    plVar6 = (long *)0x0;
  }
  else {
LAB_00238f8b:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar1 = *(long **)(this + 0x1c0);
  *(undefined8 *)(this + 0x1c0) = 0;
                    /* try { // try from 00238fa6 to 00238fb1 has its CatchHandler @ 002390fa */
  (**(code **)(*(long *)this + 0x1b8))(this);
  if (param_1 == '\0') {
                    /* try { // try from 00238fcc to 00238fd3 has its CatchHandler @ 002390fc */
    uVar5 = updateFromTextEditorContents((long *)this,plVar1[0x66]);
    cVar7 = (char)uVar5;
LAB_00238fd7:
    (**(code **)(*plVar1 + 8))(plVar1);
    if (plVar6 != (long *)0x0) {
      lVar2 = plVar6[2];
      goto joined_r0x00238fee;
    }
    bVar3 = true;
    if (cVar7 == '\0') {
      return;
    }
  }
  else {
    if (plVar1 != (long *)0x0) {
      cVar7 = '\0';
      goto LAB_00238fd7;
    }
    if (plVar6 == (long *)0x0) {
      return;
    }
    cVar7 = '\0';
    lVar2 = plVar6[2];
joined_r0x00238fee:
    if (lVar2 != 0) {
                    /* try { // try from 00238ff7 to 00239005 has its CatchHandler @ 002390fc */
      Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
    }
    bVar3 = false;
    bVar4 = bVar3;
    if (cVar7 == '\0') goto LAB_00239095;
  }
                    /* try { // try from 00239084 to 002390bf has its CatchHandler @ 002390fc */
  (**(code **)(*(long *)this + 0x1a0))(this);
  bVar4 = true;
  if (bVar3) {
    return;
  }
LAB_00239095:
  if (plVar6[2] != 0) {
    Component::exitModalState((Component *)this,0);
  }
  if ((bVar4) && (plVar6[2] != 0)) {
    callChangeListeners(this);
  }
  LOCK();
  plVar1 = plVar6 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002390d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 8))(plVar6);
    return;
  }
  return;
}


