// Function : setComponentUnderMouse
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 001e5640
// Prototype: undefined setComponentUnderMouse(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, MouseInputSourceImpl * this, long param_5, undefined8 * param_6, undefined8 param_7)
// Body     : 001e5640 - 001e5a82


/* juce::detail::MouseInputSourceImpl::setComponentUnderMouse(juce::Component*,
   juce::detail::PointerState const&, juce::Time) */

void __thiscall
juce::detail::MouseInputSourceImpl::setComponentUnderMouse
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,MouseInputSourceImpl *this
          ,long param_5,undefined8 *param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar8;
  long *local_48;
  uint local_3c;
  MouseInputSourceImpl *local_38;
  
  if (*(long *)(this + 0x48) == 0) {
    lVar7 = 0;
    if (param_5 == 0) {
      return;
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x48) + 0x10);
    if (lVar7 == param_5) {
      return;
    }
  }
  if (param_5 == 0) {
LAB_001e56fd:
    plVar3 = (long *)0x0;
    local_3c = *(uint *)(this + 0x3c);
  }
  else {
    plVar3 = *(long **)(param_5 + 0xd8);
    if (plVar3 == (long *)0x0) {
      plVar3 = operator_new(0x18);
      *(undefined4 *)(plVar3 + 1) = 0;
      *plVar3 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar3[2] = param_5;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plVar4 = *(long **)(param_5 + 0xd8);
      *(long **)(param_5 + 0xd8) = plVar3;
      param_1_00 = extraout_XMM0_Qa;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          param_1_00 = (**(code **)(*plVar4 + 8))();
        }
        plVar3 = *(long **)(param_5 + 0xd8);
        if (plVar3 == (long *)0x0) goto LAB_001e56fd;
      }
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_3c = *(uint *)(this + 0x3c);
  }
  if (lVar7 != 0) {
    plVar4 = *(long **)(lVar7 + 0xd8);
    if (plVar4 == (long *)0x0) {
                    /* try { // try from 001e577e to 001e5787 has its CatchHandler @ 001e5a88 */
      plVar4 = operator_new(0x18);
      *(undefined4 *)(plVar4 + 1) = 0;
      *plVar4 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar4[2] = lVar7;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar6 = *(long **)(lVar7 + 0xd8);
      *(long **)(lVar7 + 0xd8) = plVar4;
      param_1_00 = extraout_XMM0_Qa_01;
      if (plVar6 == (long *)0x0) goto LAB_001e571d;
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        param_1_00 = (**(code **)(*plVar6 + 8))();
      }
      plVar4 = *(long **)(lVar7 + 0xd8);
      if (plVar4 != (long *)0x0) goto LAB_001e571d;
      plVar4 = (long *)0x0;
    }
    else {
LAB_001e571d:
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
                    /* try { // try from 001e5722 to 001e5731 has its CatchHandler @ 001e5aa5 */
    setButtons(param_1_00,param_2_00,this,param_6,param_7,0);
    param_1_00 = extraout_XMM0_Qa_00;
    if (plVar4 == (long *)0x0) {
      *(uint *)(this + 0x3c) = local_3c;
    }
    else {
      plVar6 = (long *)plVar4[2];
      if (plVar6 != (long *)0x0) {
        plVar2 = *(long **)(this + 0x48);
        if (plVar3 == (long *)0x0) {
          *(undefined8 *)(this + 0x48) = 0;
joined_r0x001e57f9:
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 8))();
            }
          }
        }
        else if (plVar2 != plVar3) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          plVar2 = *(long **)(this + 0x48);
          *(long **)(this + 0x48) = plVar3;
          goto joined_r0x001e57f9;
        }
        local_48 = (long *)plVar6[0x1b];
        if (local_48 == (long *)0x0) {
                    /* try { // try from 001e5a22 to 001e5a2b has its CatchHandler @ 001e5a83 */
          local_48 = operator_new(0x18);
          *(undefined4 *)(local_48 + 1) = 0;
          *local_48 = (long)&PTR__ReferenceCountedObject_00714b80;
          local_48[2] = (long)plVar6;
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          plVar2 = (long *)plVar6[0x1b];
          plVar6[0x1b] = (long)local_48;
          if (plVar2 == (long *)0x0) goto LAB_001e581c;
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
          local_48 = (long *)plVar6[0x1b];
          if (local_48 != (long *)0x0) goto LAB_001e581c;
        }
        else {
LAB_001e581c:
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
        }
        local_38 = this;
                    /* try { // try from 001e582b to 001e5842 has its CatchHandler @ 001e5a8a */
        uVar8 = ScalingHelpers::screenPosToLocalPos(*param_6,plVar6);
        param_1_00 = Component::internalMouseExit
                               (uVar8,param_2_00,param_3,(long *)&local_48,(long *)&local_38,param_7
                               );
        if (local_48 != (long *)0x0) {
          LOCK();
          plVar6 = local_48 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            param_1_00 = (**(code **)(*local_48 + 8))();
          }
        }
      }
      *(uint *)(this + 0x3c) = local_3c;
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        param_1_00 = (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if ((plVar3 == (long *)0x0) || (lVar7 = plVar3[2], lVar7 == 0)) {
LAB_001e58f4:
    plVar4 = *(long **)(this + 0x48);
    *(undefined8 *)(this + 0x48) = 0;
  }
  else {
    puVar5 = *(undefined8 **)(lVar7 + 0xd8);
    if (puVar5 == (undefined8 *)0x0) {
                    /* try { // try from 001e58a4 to 001e58ad has its CatchHandler @ 001e5adb */
      puVar5 = operator_new(0x18);
      *(undefined4 *)(puVar5 + 1) = 0;
      *puVar5 = &PTR__ReferenceCountedObject_00714b80;
      puVar5[2] = lVar7;
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
      plVar4 = *(long **)(lVar7 + 0xd8);
      *(undefined8 **)(lVar7 + 0xd8) = puVar5;
      param_1_00 = extraout_XMM0_Qa_02;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          param_1_00 = (**(code **)(*plVar4 + 8))();
        }
        puVar5 = *(undefined8 **)(lVar7 + 0xd8);
        if (puVar5 == (undefined8 *)0x0) goto LAB_001e58f4;
      }
    }
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    plVar4 = *(long **)(this + 0x48);
    *(undefined8 **)(this + 0x48) = puVar5;
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      param_1_00 = (**(code **)(*plVar4 + 8))();
    }
  }
  if ((plVar3 == (long *)0x0) || (plVar4 = (long *)plVar3[2], plVar4 == (long *)0x0))
  goto LAB_001e5970;
  plVar6 = (long *)plVar4[0x1b];
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 001e59c1 to 001e59ca has its CatchHandler @ 001e5adb */
    plVar6 = operator_new(0x18);
    *(undefined4 *)(plVar6 + 1) = 0;
    *plVar6 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar6[2] = (long)plVar4;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar2 = (long *)plVar4[0x1b];
    plVar4[0x1b] = (long)plVar6;
    if (plVar2 == (long *)0x0) goto LAB_001e592f;
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_48 = (long *)plVar4[0x1b];
    if (local_48 != (long *)0x0) goto LAB_001e5933;
  }
  else {
LAB_001e592f:
    local_48 = plVar6;
LAB_001e5933:
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_38 = this;
                    /* try { // try from 001e5942 to 001e5959 has its CatchHandler @ 001e5ac0 */
  uVar8 = ScalingHelpers::screenPosToLocalPos(*param_6,plVar4);
  param_1_00 = Component::internalMouseEnter
                         (uVar8,param_2_00,param_3,(long *)&local_48,(long *)&local_38,param_7);
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      param_1_00 = (**(code **)(*local_48 + 8))();
    }
  }
LAB_001e5970:
                    /* try { // try from 001e5970 to 001e598b has its CatchHandler @ 001e5adb */
  uVar8 = revealCursor(param_1_00,param_2_00,param_3,this,'\0');
  setButtons(uVar8,param_2_00,this,param_6,param_7,local_3c);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001e59af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3);
      return;
    }
  }
  return;
}


