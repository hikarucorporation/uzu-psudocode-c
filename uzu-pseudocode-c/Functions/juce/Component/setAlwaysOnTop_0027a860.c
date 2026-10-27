// Function : setAlwaysOnTop
// Namespace: juce:Component
// Entry    : 0027a860
// Prototype: undefined setAlwaysOnTop(Component * this, short param_1)
// Body     : 0027a860 - 0027aa23


/* juce::Component::setAlwaysOnTop(bool) */

void __thiscall juce::Component::setAlwaysOnTop(Component *this,short param_1)

{
  int iVar1;
  long *plVar2;
  uint3 uVar3;
  char cVar4;
  long *plVar5;
  Desktop *this_00;
  long lVar6;
  
  if (((*(ushort *)(this + 0xe8) & 0x800) == 0) != (bool)(char)param_1) {
    return;
  }
  plVar5 = *(long **)(this + 0xd8);
  if (plVar5 == (long *)0x0) {
    plVar5 = operator_new(0x18);
    *(undefined4 *)(plVar5 + 1) = 0;
    *plVar5 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar5[2] = (long)this;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar5;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar5 = *(long **)(this + 0xd8);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_0027a898;
      }
    }
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
LAB_0027a898:
  uVar3 = *(uint3 *)(this + 0xe8);
  this[0xea] = this[0xea];
  *(ushort *)(this + 0xe8) = (ushort)uVar3 & 0xf7ff | param_1 << 0xb;
  if ((uVar3 & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027a95a to 0027a963 has its CatchHandler @ 0027aa43 */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 0027a967 to 0027a96e has its CatchHandler @ 0027aa30 */
      Desktop::Desktop(this_00);
      iVar1 = *(int *)(this_00 + 0xdc);
      Desktop::instance = this_00;
    }
    else {
      iVar1 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar1 != 0) {
      lVar6 = 0;
      do {
        plVar2 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar6);
        if ((Component *)plVar2[1] == this) {
                    /* try { // try from 0027a9a9 to 0027a9b4 has its CatchHandler @ 0027aa26 */
          cVar4 = (**(code **)(*plVar2 + 0xd0))(plVar2);
          if (cVar4 == '\0') {
            lVar6 = plVar2[2];
                    /* try { // try from 0027a9bc to 0027a9d0 has its CatchHandler @ 0027aa24 */
            removeFromDesktop(this);
            (**(code **)(*(long *)this + 0x70))(this,(int)lVar6,0);
          }
          break;
        }
        lVar6 = lVar6 + 8;
      } while ((long)iVar1 * 8 != lVar6);
    }
  }
  if ((char)param_1 == '\0') {
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (plVar5[2] != 0) {
                    /* try { // try from 0027a9e2 to 0027aa01 has its CatchHandler @ 0027aa4b */
      toFront(this,'\0');
    }
  }
  if (plVar5[2] != 0) {
    internalHierarchyChanged(this);
  }
  LOCK();
  plVar2 = plVar5 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0027aa18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 8))(plVar5);
    return;
  }
  return;
}


