// Function : setToggleState
// Namespace: juce:Button
// Entry    : 0022dbf0
// Prototype: undefined setToggleState(Button * this, Button param_2, int param_3, int param_4)
// Body     : 0022dbf0 - 0022dfe1


/* juce::Button::setToggleState(bool, juce::NotificationType, juce::NotificationType) */

void __thiscall juce::Button::setToggleState(Button *this,Button param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  Button BVar4;
  Button *pBVar5;
  long *plVar6;
  long lVar7;
  long *local_58;
  undefined1 *local_48;
  Button local_40 [12];
  int local_34;
  
  pBVar5 = this;
  do {
    if ((*(ushort *)(pBVar5 + 0xe8) & 0x8000) != 0) {
      return;
    }
    pBVar5 = *(Button **)(pBVar5 + 0x30);
  } while (pBVar5 != (Button *)0x0);
  if (this[0x1f1] == param_2) {
    return;
  }
  local_58 = *(long **)(this + 0xd8);
  if (local_58 == (long *)0x0) {
    local_58 = operator_new(0x18);
    *(undefined4 *)(local_58 + 1) = 0;
    *local_58 = (long)&PTR__ReferenceCountedObject_00714b80;
    local_58[2] = (long)this;
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    plVar6 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = local_58;
    if (plVar6 == (long *)0x0) goto LAB_0022dc50;
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_58 = *(long **)(this + 0xd8);
    if (local_58 != (long *)0x0) goto LAB_0022dc50;
    local_58 = (long *)0x0;
  }
  else {
LAB_0022dc50:
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  if (param_2 != (Button)0x0) {
    lVar2 = *(long *)(this + 0x30);
    if ((lVar2 != 0) && (*(int *)(this + 0x1ac) != 0)) {
      plVar6 = *(long **)(this + 0xd8);
      if (plVar6 == (long *)0x0) {
                    /* try { // try from 0022df0d to 0022df16 has its CatchHandler @ 0022e032 */
        plVar6 = operator_new(0x18);
        *(undefined4 *)(plVar6 + 1) = 0;
        *plVar6 = (long)&PTR__ReferenceCountedObject_00714b80;
        plVar6[2] = (long)this;
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        plVar3 = *(long **)(this + 0xd8);
        *(long **)(this + 0xd8) = plVar6;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar6 = plVar3 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
          plVar6 = *(long **)(this + 0xd8);
          if (plVar6 == (long *)0x0) {
            iVar1 = *(int *)(lVar2 + 100);
            if ((long)iVar1 != 0) {
              lVar2 = *(long *)(lVar2 + 0x58);
              local_34 = *(int *)(this + 0x1ac);
              lVar7 = 0;
              do {
                pBVar5 = *(Button **)(lVar2 + lVar7);
                if ((((pBVar5 != this) && (pBVar5 != (Button *)0x0)) &&
                    (pBVar5 = (Button *)__dynamic_cast(pBVar5,&Component::typeinfo,&typeinfo,0),
                    pBVar5 != (Button *)0x0)) && (*(int *)(pBVar5 + 0x1ac) == local_34)) {
                    /* try { // try from 0022dfcb to 0022dfdc has its CatchHandler @ 0022e032 */
                  setToggleState(pBVar5,(Button)0x0,param_3,param_4);
                  break;
                }
                lVar7 = lVar7 + 8;
              } while ((long)iVar1 * 8 != lVar7);
            }
            goto LAB_0022ddce;
          }
        }
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      iVar1 = *(int *)(lVar2 + 100);
      if ((long)iVar1 != 0) {
        lVar2 = *(long *)(lVar2 + 0x58);
        lVar7 = 0;
        do {
          pBVar5 = *(Button **)(lVar2 + lVar7);
                    /* try { // try from 0022dd14 to 0022dd25 has its CatchHandler @ 0022e004 */
          if (((pBVar5 != this) && (pBVar5 != (Button *)0x0)) &&
             ((pBVar5 = (Button *)__dynamic_cast(pBVar5,&Component::typeinfo,&typeinfo,0),
              pBVar5 != (Button *)0x0 &&
              ((*(int *)(pBVar5 + 0x1ac) == *(int *)(this + 0x1ac) &&
               (setToggleState(pBVar5,(Button)0x0,param_3,param_4), plVar6[2] == 0)))))) {
            LOCK();
            plVar3 = plVar6 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            iVar1 = (int)*plVar3;
            UNLOCK();
            goto joined_r0x0022dd3a;
          }
          lVar7 = lVar7 + 8;
        } while ((long)iVar1 * 8 != lVar7);
        if (plVar6 == (long *)0x0) goto LAB_0022ddce;
      }
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      iVar1 = (int)*plVar3;
      UNLOCK();
joined_r0x0022dd3a:
      if (iVar1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
LAB_0022ddce:
    if (local_58 == (long *)0x0) {
      return;
    }
    if (local_58[2] == 0) goto LAB_0022deef;
  }
                    /* try { // try from 0022ddf5 to 0022ddfc has its CatchHandler @ 0022e02a */
  (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_48);
                    /* try { // try from 0022de07 to 0022de0c has its CatchHandler @ 0022e022 */
  BVar4 = (Button)(**(code **)(local_48 + 0x30))(local_40);
                    /* try { // try from 0022de15 to 0022de1a has its CatchHandler @ 0022e01a */
  (**(code **)(local_48 + 0x58))(local_40);
  if (BVar4 != param_2) {
    local_48 = &var::Instance::attributesBool;
                    /* try { // try from 0022de40 to 0022de47 has its CatchHandler @ 0022dfec */
    local_40[0] = param_2;
    (**(code **)(**(long **)(this + 0x1c0) + 0x18))();
                    /* try { // try from 0022de4d to 0022de52 has its CatchHandler @ 0022dfe4 */
    (**(code **)(local_48 + 0x58))(local_40);
    if (local_58 == (long *)0x0) {
      return;
    }
    if (local_58[2] == 0) goto LAB_0022deef;
  }
  this[0x1f1] = param_2;
                    /* try { // try from 0022de7b to 0022dedd has its CatchHandler @ 0022e032 */
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  if (param_3 != 0) {
    sendClickMessage(this,&ModifierKeys::currentModifiers);
    if (local_58 == (long *)0x0) {
      return;
    }
    if (local_58[2] == 0) goto LAB_0022deef;
  }
  if (param_4 == 0) {
    (**(code **)(*(long *)this + 0x1c0))(this);
  }
  else {
    sendStateMessage(this);
  }
                    /* try { // try from 0022dede to 0022dee5 has its CatchHandler @ 0022dfe2 */
  Component::getAccessibilityHandler((Component *)this);
  if (local_58 == (long *)0x0) {
    return;
  }
LAB_0022deef:
  LOCK();
  plVar6 = local_58 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)(*local_58 + 8))();
  }
  return;
}


