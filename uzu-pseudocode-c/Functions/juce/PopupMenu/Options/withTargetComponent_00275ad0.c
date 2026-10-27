// Function : withTargetComponent
// Namespace: juce:PopupMenu:Options
// Entry    : 00275ad0
// Prototype: undefined withTargetComponent(undefined1[16] * param_1, undefined8 * param_2, long param_3)
// Body     : 00275ad0 - 00275ebb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PopupMenu::Options::withTargetComponent(juce::Component*) const */

void __cdecl
juce::PopupMenu::Options::withTargetComponent
          (undefined1 (*param_1) [16],undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long *local_e8;
  long *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined1 *local_50;
  Rectangle<int> local_48 [16];
  undefined1 local_38 [16];
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  plVar2 = (long *)param_2[2];
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  plVar3 = (long *)param_2[3];
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar4 = (long *)param_2[4];
  if (plVar4 != (long *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (long *)param_2[5];
  if (plVar5 != (long *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[8];
  uVar12 = param_2[9];
  if (param_3 == 0) {
LAB_00275bc2:
    local_e8 = (long *)0x0;
  }
  else {
    local_e8 = *(long **)(param_3 + 0xd8);
    if (local_e8 == (long *)0x0) {
                    /* try { // try from 00275b72 to 00275b7b has its CatchHandler @ 00275ecb */
      local_e8 = operator_new(0x18);
      *(undefined4 *)(local_e8 + 1) = 0;
      *local_e8 = (long)&PTR__ReferenceCountedObject_00714b80;
      local_e8[2] = param_3;
      LOCK();
      *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
      UNLOCK();
      plVar6 = *(long **)(param_3 + 0xd8);
      *(long **)(param_3 + 0xd8) = local_e8;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar6 + 8))();
        }
        local_e8 = *(long **)(param_3 + 0xd8);
        if (local_e8 == (long *)0x0) goto LAB_00275bc2;
      }
    }
    LOCK();
    *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
    UNLOCK();
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (local_e8 != (long *)0x0) {
    LOCK();
    *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
    UNLOCK();
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (param_3 == 0) {
LAB_00275ccc:
    local_80 = (long *)0x0;
  }
  else {
    local_80 = *(long **)(param_3 + 0xd8);
    if (local_80 == (long *)0x0) {
                    /* try { // try from 00275c7c to 00275c85 has its CatchHandler @ 00275ebc */
      local_80 = operator_new(0x18);
      *(undefined4 *)(local_80 + 1) = 0;
      *local_80 = (long)&PTR__ReferenceCountedObject_00714b80;
      local_80[2] = param_3;
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      plVar2 = *(long **)(param_3 + 0xd8);
      *(long **)(param_3 + 0xd8) = local_80;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        local_80 = *(long **)(param_3 + 0xd8);
        if (local_80 == (long *)0x0) goto LAB_00275ccc;
      }
    }
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  *(undefined8 *)*param_1 = uVar7;
  *(undefined8 *)(*param_1 + 8) = uVar8;
  *(long **)param_1[1] = local_e8;
  if (local_e8 != (long *)0x0) {
    LOCK();
    *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
    UNLOCK();
  }
  *(long **)(param_1[1] + 8) = plVar3;
  if (plVar3 != (long *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *(long **)param_1[2] = plVar4;
  if (plVar4 != (long *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *(long **)(param_1[2] + 8) = local_80;
  local_78 = (undefined4)uVar9;
  uStack_74 = (undefined4)((ulong)uVar9 >> 0x20);
  uStack_70 = (undefined4)uVar10;
  uStack_6c = (undefined4)((ulong)uVar10 >> 0x20);
  if (local_80 == (long *)0x0) {
    *(undefined8 *)param_1[4] = uVar11;
    *(undefined8 *)(param_1[4] + 8) = uVar12;
    *(undefined4 *)param_1[3] = local_78;
    *(undefined4 *)(param_1[3] + 4) = uStack_74;
    *(undefined4 *)(param_1[3] + 8) = uStack_70;
    *(undefined4 *)(param_1[3] + 0xc) = uStack_6c;
  }
  else {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
    local_68 = (undefined4)uVar11;
    uStack_64 = (undefined4)((ulong)uVar11 >> 0x20);
    uStack_60 = (undefined4)uVar12;
    uStack_5c = (undefined4)((ulong)uVar12 >> 0x20);
    *(undefined4 *)param_1[4] = local_68;
    *(undefined4 *)(param_1[4] + 4) = uStack_64;
    *(undefined4 *)(param_1[4] + 8) = uStack_60;
    *(undefined4 *)(param_1[4] + 0xc) = uStack_5c;
    *(undefined4 *)param_1[3] = local_78;
    *(undefined4 *)(param_1[3] + 4) = uStack_74;
    *(undefined4 *)(param_1[3] + 8) = uStack_70;
    *(undefined4 *)(param_1[3] + 0xc) = uStack_6c;
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_80 + 8))();
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (local_e8 != (long *)0x0) {
    LOCK();
    plVar2 = local_e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_e8 + 8))();
    }
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (local_e8 != (long *)0x0) {
    LOCK();
    plVar2 = local_e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_e8 + 8))();
    }
  }
  if (param_3 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulong *)(param_3 + 0x40);
    auVar13 = auVar13 << 0x40;
    do {
      local_58 = param_3;
      local_50 = local_38;
      local_38 = auVar13;
                    /* try { // try from 00275e79 to 00275e80 has its CatchHandler @ 00275ed3 */
      auVar13 = detail::ComponentHelpers::
                convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
                ::{lambda()#1}::operator()((_lambda___1_ *)&local_58);
      local_48 = (Rectangle<int>  [16])auVar13;
      if (*(float **)(param_3 + 0x50) != (float *)0x0) {
        auVar13 = Rectangle<int>::transformedBy(local_48,*(float **)(param_3 + 0x50));
      }
      param_3 = *(long *)(param_3 + 0x30);
    } while (param_3 != 0);
    *param_1 = auVar13;
  }
  return;
}


