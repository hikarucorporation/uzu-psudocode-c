// Function : sendEnablementChangeMessage
// Namespace: juce:Component
// Entry    : 00233b10
// Prototype: undefined sendEnablementChangeMessage(Component * this)
// Body     : 00233b10 - 00233c1a


/* juce::Component::sendEnablementChangeMessage() */

void __thiscall juce::Component::sendEnablementChangeMessage(Component *this)

{
  Component *this_00;
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
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
        goto LAB_00233b2e;
      }
    }
  }
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
LAB_00233b2e:
                    /* try { // try from 00233b31 to 00233b39 has its CatchHandler @ 00233c1b */
  (**(code **)(*(long *)this + 0xe0))(this);
  if (plVar2 != (long *)0x0) {
    if (plVar2[2] != 0) {
      uVar3 = *(uint *)(this + 100);
      if (0 < (int)uVar3) {
        uVar4 = (ulong)(uVar3 - 1);
        while( true ) {
          for (; (uVar3 <= uVar4 ||
                 (this_00 = *(Component **)(*(long *)(this + 0x58) + uVar4 * 8),
                 this_00 == (Component *)0x0)); uVar4 = uVar4 - 1) {
            if ((long)uVar4 < 1) goto LAB_00233b9b;
          }
                    /* try { // try from 00233b74 to 00233b78 has its CatchHandler @ 00233c1d */
          sendEnablementChangeMessage(this_00);
          if ((plVar2[2] == 0) || ((long)uVar4 < 1)) break;
          uVar3 = *(uint *)(this + 100);
          uVar4 = uVar4 - 1;
        }
      }
    }
LAB_00233b9b:
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00233bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}


