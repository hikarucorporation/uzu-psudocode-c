// Function : Font
// Namespace: juce:Font
// Entry    : 003c9c40
// Prototype: undefined Font(Font * this, long * param_1)
// Body     : 003c9c40 - 003ca2ac


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Font::Font(juce::ReferenceCountedObjectPtr<juce::Typeface> const&) */

void __thiscall juce::Font::Font(Font *this,long *param_1)

{
  char cVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  void *pvVar5;
  int iVar6;
  SharedFontInternal *this_00;
  int *piVar7;
  long *plVar8;
  char *pcVar9;
  char *local_1d8;
  undefined1 *puStack_1d0;
  long *local_1c8;
  long *local_1c0;
  long *plStack_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  uint uStack_18c;
  undefined4 uStack_188;
  undefined2 uStack_184;
  undefined2 uStack_180;
  undefined4 uStack_17e;
  undefined4 uStack_17a;
  undefined4 uStack_176;
  char *local_168;
  undefined1 *puStack_160;
  long *local_158;
  long *local_150;
  long *plStack_148;
  undefined8 local_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long local_120;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined2 uStack_110;
  undefined4 uStack_10e;
  undefined8 uStack_10a;
  long local_100;
  long local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined2 local_9c;
  char *local_98;
  undefined1 *puStack_90;
  long *local_88;
  long *local_80;
  long *plStack_78;
  undefined8 local_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  undefined6 uStack_48;
  undefined6 uStack_40;
  undefined8 uStack_3a;
  
  this_00 = operator_new(0xa8);
  local_f0 = (long *)*param_1;
  local_100 = local_f0[2];
  piVar7 = (int *)(local_100 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    local_f0 = (long *)*param_1;
  }
  local_f8 = local_f0[3];
  piVar7 = (int *)(local_f8 + -0x10);
  if (piVar7 == &emptyString) {
LAB_003c9cbd:
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  else {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    local_f0 = (long *)*param_1;
    if (local_f0 != (long *)0x0) goto LAB_003c9cbd;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_b8 = 1;
  local_b4 = _DAT_005ddff0;
  uStack_ac = _UNK_005ddff8;
  local_a4 = 0xbf800000bf800000;
  local_9c = 1;
                    /* try { // try from 003c9d13 to 003c9d22 has its CatchHandler @ 003ca2fd */
  FontOptions::FontOptions((FontOptions *)&local_1d8,&local_100);
  local_168 = local_1d8;
  local_190 = 0;
  local_1d8 = "";
  puStack_160 = puStack_1d0;
  puStack_1d0 = &DAT_0061ac58;
  local_158 = local_1c8;
  local_1c8 = (long *)0x0;
  local_150 = local_1c0;
  plStack_148 = plStack_1b8;
  local_140 = local_1b0;
  local_1c0 = (long *)0x0;
  plStack_1b8 = (long *)0x0;
  local_1b0 = 0;
  local_138 = local_1a8;
  uStack_130 = uStack_1a0;
  local_128 = local_198;
  local_1a8 = (void *)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_110 = uStack_180;
  uStack_10e = uStack_17e;
  uStack_10a = CONCAT44(uStack_176,uStack_17a);
  local_120 = (ulong)uStack_18c << 0x20;
  uStack_118 = uStack_188;
  uStack_114 = uStack_184;
  if (local_f0 != (long *)0x0) {
    LOCK();
    plVar8 = local_f0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)(*local_f0 + 8))();
    }
  }
  piVar7 = (int *)(local_f8 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      operator_delete__(piVar7);
    }
  }
  piVar7 = (int *)(local_100 + -0x10);
  if (piVar7 == &emptyString) {
LAB_003c9e22:
    pcVar9 = local_168 + -0x10;
    if (pcVar9 == (char *)&emptyString) {
LAB_003c9e62:
      cVar1 = *local_168;
      goto joined_r0x003c9e65;
    }
  }
  else {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 != 0) goto LAB_003c9e22;
    operator_delete__(piVar7);
    pcVar9 = local_168 + -0x10;
    if (pcVar9 == (char *)&emptyString) goto LAB_003c9e62;
  }
  LOCK();
  *(int *)(local_168 + -0x10) = *(int *)(local_168 + -0x10) + 1;
  UNLOCK();
  cVar1 = *local_168;
  LOCK();
  piVar7 = (int *)(local_168 + -0x10);
  iVar6 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar6 == 0) {
    operator_delete__(pcVar9);
  }
joined_r0x003c9e65:
  if (cVar1 == '\0') {
    if ((getFontPlaceholderNames()::names == '\0') &&
       (iVar6 = __cxa_guard_acquire(&getFontPlaceholderNames()::names), iVar6 != 0)) {
                    /* try { // try from 003ca27d to 003ca281 has its CatchHandler @ 003ca2ad */
      FontPlaceholderNames::FontPlaceholderNames();
      __cxa_atexit(FontPlaceholderNames::~FontPlaceholderNames,&getFontPlaceholderNames()::names,
                   &__dso_handle);
      __cxa_guard_release(&getFontPlaceholderNames()::names);
    }
    local_100 = getFontPlaceholderNames()::names;
    piVar7 = (int *)(getFontPlaceholderNames()::names + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
                    /* try { // try from 003c9ea4 to 003c9eb8 has its CatchHandler @ 003ca2c3 */
    FontOptions::withName((FontOptions *)&local_1d8,(long *)&local_168,&local_100);
    plVar4 = plStack_148;
    plVar2 = local_150;
    plVar8 = local_158;
    puVar3 = puStack_160;
    pcVar9 = local_168;
    local_168 = local_1d8;
    puStack_160 = puStack_1d0;
    local_1d8 = pcVar9;
    puStack_1d0 = puVar3;
    local_158 = local_1c8;
    local_1c8 = plVar8;
    local_150 = local_1c0;
    plStack_148 = plStack_1b8;
    local_140 = local_1b0;
    local_1c0 = (long *)0x0;
    plStack_1b8 = (long *)0x0;
    local_1b0 = 0;
    if (plVar2 != plVar4) {
      plVar8 = plVar2;
      do {
        piVar7 = (int *)(*plVar8 + -0x10);
        if (piVar7 != &emptyString) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            operator_delete__(piVar7);
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar4);
    }
    if (plVar2 != (long *)0x0) {
      operator_delete(plVar2);
    }
    pvVar5 = local_138;
    local_138 = local_1a8;
    uStack_130 = uStack_1a0;
    local_128 = local_198;
    local_1a8 = (void *)0x0;
    uStack_1a0 = 0;
    local_198 = 0;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    plVar2 = plStack_1b8;
    local_120 = CONCAT44(uStack_18c,local_190);
    uStack_10a = CONCAT44(uStack_176,uStack_17a);
    uStack_118 = uStack_188;
    uStack_114 = uStack_184;
    uStack_110 = uStack_180;
    uStack_10e = uStack_17e;
    for (plVar8 = local_1c0; plVar8 != plVar2; plVar8 = plVar8 + 1) {
      piVar7 = (int *)(*plVar8 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          operator_delete__(piVar7);
        }
      }
    }
    if (local_1c0 != (long *)0x0) {
      operator_delete(local_1c0);
    }
    if (local_1c8 != (long *)0x0) {
      LOCK();
      plVar8 = local_1c8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)(*local_1c8 + 8))();
      }
    }
    piVar7 = (int *)(puStack_1d0 + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(piVar7);
      }
    }
    piVar7 = (int *)(local_1d8 + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(piVar7);
      }
    }
    piVar7 = (int *)(local_100 + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(piVar7);
      }
    }
  }
  local_98 = local_168;
  local_168 = "";
  puStack_90 = puStack_160;
  puStack_160 = &DAT_0061ac58;
  local_88 = local_158;
  local_158 = (long *)0x0;
  local_80 = local_150;
  plStack_78 = plStack_148;
  local_70 = local_140;
  local_150 = (long *)0x0;
  plStack_148 = (long *)0x0;
  local_140 = 0;
  local_68 = local_138;
  uStack_60 = uStack_130;
  local_58 = local_128;
  local_138 = (void *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_48 = CONCAT24(uStack_114,uStack_118);
  uStack_40 = CONCAT42(uStack_10e,uStack_110);
  uStack_3a = uStack_10a;
  lStack_50 = local_120;
                    /* try { // try from 003ca11a to 003ca129 has its CatchHandler @ 003ca2f0 */
  SharedFontInternal::SharedFontInternal(this_00,(long *)&local_98);
  *(SharedFontInternal **)this = this_00;
  LOCK();
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  UNLOCK();
  plVar8 = local_80;
  plVar2 = plStack_78;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    plVar8 = local_80;
    plVar2 = plStack_78;
  }
  for (; plVar4 = plStack_78, plVar8 != plStack_78; plVar8 = plVar8 + 1) {
    piVar7 = (int *)(*plVar8 + -0x10);
    plStack_78 = plVar2;
    if (piVar7 != &emptyString) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(piVar7);
      }
    }
    plVar2 = plStack_78;
    plStack_78 = plVar4;
  }
  plStack_78 = plVar2;
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar8 = local_88 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  piVar7 = (int *)(puStack_90 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      operator_delete__(piVar7);
    }
  }
  piVar7 = (int *)(local_98 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      operator_delete__(piVar7);
    }
  }
  return;
}


