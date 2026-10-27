// Function : withTypeface
// Namespace: juce:FontOptions
// Entry    : 00304330
// Prototype: undefined withTypeface(undefined4 * param_1, long * param_2, long * param_3)
// Body     : 00304330 - 003046b9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FontOptions::withTypeface(juce::ReferenceCountedObjectPtr<juce::Typeface>) const */

void __cdecl juce::FontOptions::withTypeface(undefined4 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long local_168;
  long local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  long *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined2 uStack_104;
  undefined2 local_102;
  undefined6 uStack_100;
  undefined8 uStack_fa;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined2 local_da;
  undefined6 uStack_d8;
  undefined8 uStack_d2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_90;
  long local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  void *local_60;
  
  if (*param_3 == 0) {
    FontOptions((FontOptions *)&local_158,param_2);
  }
  else {
    local_160 = *(long *)(*param_3 + 0x10);
    piVar6 = (int *)(local_160 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
                    /* try { // try from 0030436f to 00304380 has its CatchHandler @ 003046eb */
    withName((FontOptions *)&local_90,param_2,&local_160);
    local_168 = *(long *)(*param_3 + 0x18);
    piVar6 = (int *)(local_168 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
                    /* try { // try from 00304399 to 003043ad has its CatchHandler @ 003046ba */
    withStyle((FontOptions *)&local_158,&local_90,&local_168);
    piVar6 = (int *)(local_168 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar6);
      }
    }
    plVar7 = local_78;
    if (local_60 != (void *)0x0) {
      operator_delete(local_60);
      plVar7 = local_78;
    }
    for (; plVar7 != local_70; plVar7 = plVar7 + 1) {
      piVar6 = (int *)(*plVar7 + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar6);
        }
      }
    }
    if (local_78 != (long *)0x0) {
      operator_delete(local_78);
    }
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar7 = local_80 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*local_80 + 8))();
      }
    }
    piVar6 = (int *)(local_88 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar6);
      }
    }
    piVar6 = (int *)(local_90 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar6);
      }
    }
    piVar6 = (int *)(local_160 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar6);
      }
    }
  }
  uVar5 = local_118;
  uVar4 = local_130;
  plVar3 = local_148;
  uVar8 = (undefined4)local_158;
  uVar9 = local_158._4_4_;
  uVar10 = (undefined4)uStack_150;
  uVar11 = uStack_150._4_4_;
  local_158 = &DAT_0061ac58;
  uStack_150 = &DAT_0061ac58;
  local_148 = (long *)0x0;
  uVar12 = (undefined4)local_140;
  uVar13 = local_140._4_4_;
  uVar14 = (undefined4)uStack_138;
  uVar15 = uStack_138._4_4_;
  local_140 = (long *)0x0;
  uStack_138 = (long *)0x0;
  local_130 = 0;
  uVar16 = (undefined4)local_128;
  uVar17 = local_128._4_4_;
  uVar18 = (undefined4)uStack_120;
  uVar19 = uStack_120._4_4_;
  local_128 = (void *)0x0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_d8 = uStack_100;
  uStack_d2 = uStack_fa;
  uStack_e8 = uStack_110;
  uStack_e4 = uStack_10c;
  uStack_e0 = uStack_108;
  uStack_dc = uStack_104;
  local_da = local_102;
  plVar7 = (long *)*param_3;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    if (plVar3 == plVar7) {
      plVar7 = plVar3;
      goto LAB_003045ac;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      local_a8 = uVar8;
      uStack_a4 = uVar9;
      uStack_a0 = uVar10;
      uStack_9c = uVar11;
      local_b8 = uVar12;
      uStack_b4 = uVar13;
      uStack_b0 = uVar14;
      uStack_ac = uVar15;
      local_c8 = uVar16;
      uStack_c4 = uVar17;
      uStack_c0 = uVar18;
      uStack_bc = uVar19;
      (**(code **)(*plVar3 + 8))();
      uVar8 = local_a8;
      uVar9 = uStack_a4;
      uVar10 = uStack_a0;
      uVar11 = uStack_9c;
      uVar12 = local_b8;
      uVar13 = uStack_b4;
      uVar14 = uStack_b0;
      uVar15 = uStack_ac;
      uVar16 = local_c8;
      uVar17 = uStack_c4;
      uVar18 = uStack_c0;
      uVar19 = uStack_bc;
    }
  }
LAB_003045ac:
  *param_1 = uVar8;
  param_1[1] = uVar9;
  param_1[2] = uVar10;
  param_1[3] = uVar11;
  *(long **)(param_1 + 4) = plVar7;
  param_1[6] = uVar12;
  param_1[7] = uVar13;
  param_1[8] = uVar14;
  param_1[9] = uVar15;
  *(undefined8 *)(param_1 + 10) = uVar4;
  param_1[0xc] = uVar16;
  param_1[0xd] = uVar17;
  param_1[0xe] = uVar18;
  param_1[0xf] = uVar19;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(ulong *)((long)param_1 + 0x56) = CONCAT62(uStack_d8,local_da);
  *(undefined8 *)((long)param_1 + 0x5e) = uStack_d2;
  *(ulong *)(param_1 + 0x12) = CONCAT44(uStack_e4,uStack_e8);
  *(ulong *)(param_1 + 0x14) = CONCAT26(local_da,CONCAT24(uStack_dc,uStack_e0));
  plVar7 = local_140;
  plVar3 = uStack_138;
  if (local_128 != (void *)0x0) {
    operator_delete(local_128);
    plVar7 = local_140;
    plVar3 = uStack_138;
  }
  for (; plVar1 = uStack_138, plVar7 != uStack_138; plVar7 = plVar7 + 1) {
    piVar6 = (int *)(*plVar7 + -0x10);
    uStack_138 = plVar3;
    if (piVar6 != &emptyString) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar6);
      }
    }
    plVar3 = uStack_138;
    uStack_138 = plVar1;
  }
  uStack_138 = plVar3;
  if (local_140 != (long *)0x0) {
    operator_delete(local_140);
  }
  if (local_148 != (long *)0x0) {
    LOCK();
    plVar7 = local_148 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*local_148 + 8))();
    }
  }
  piVar6 = (int *)(uStack_150 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  piVar6 = (int *)(local_158 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  return;
}


