// Function : sendLookAndFeelChange
// Namespace: juce:Component
// Entry    : 0027aa70
// Prototype: undefined sendLookAndFeelChange(Component * this)
// Body     : 0027aa70 - 0027ab83


/* juce::Component::sendLookAndFeelChange() */

void __thiscall juce::Component::sendLookAndFeelChange(Component *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  plVar2 = *(long **)(this + 0xd8);
  if (plVar2 == (long *)0x0) {
    plVar2 = operator_new(0x18);
    *(undefined4 *)(plVar2 + 1) = 0;
    *plVar2 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar2[2] = (long)this;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar1 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar2;
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar2 = *(long **)(this + 0xd8);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)0x0;
        goto LAB_0027aa8e;
      }
    }
  }
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
LAB_0027aa8e:
                    /* try { // try from 0027aa92 to 0027aaac has its CatchHandler @ 0027ab86 */
  internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  (**(code **)(*(long *)this + 200))(this);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 0027aabc to 0027aac4 has its CatchHandler @ 0027ab84 */
    if ((plVar2[2] != 0) && ((**(code **)(*(long *)this + 0x180))(this), plVar2[2] != 0)) {
      uVar3 = *(uint *)(this + 100);
      while (0 < (int)uVar3) {
        uVar3 = uVar3 - 1;
                    /* try { // try from 0027aaeb to 0027aaef has its CatchHandler @ 0027ab90 */
        sendLookAndFeelChange(*(Component **)(*(long *)(this + 0x58) + (ulong)uVar3 * 8));
        if (plVar2[2] == 0) break;
        if ((int)*(uint *)(this + 100) < (int)uVar3) {
          uVar3 = *(uint *)(this + 100);
        }
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0027ab17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}


