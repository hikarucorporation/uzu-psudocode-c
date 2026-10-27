// Function : getTabButtonBestWidth
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f89c0
// Prototype: int getTabButtonBestWidth(LookAndFeel_V2 * this, long param_1, int param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 001f89c0 - 001f8d64


/* juce::LookAndFeel_V2::getTabButtonBestWidth(juce::TabBarButton&, int) */

int __thiscall
juce::LookAndFeel_V2::getTabButtonBestWidth
          (LookAndFeel_V2 *this,long param_1,int param_2,undefined8 param_3,uint *param_4,
          ulong param_5)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 extraout_RDX;
  int iVar8;
  byte *pbVar9;
  int *piVar10;
  float fVar11;
  long *local_190;
  float local_188;
  byte *local_178;
  undefined1 *puStack_170;
  long *local_168;
  long *local_160;
  long *plStack_158;
  undefined8 local_150;
  void *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined2 uStack_122;
  undefined2 uStack_120;
  undefined4 uStack_11e;
  undefined4 uStack_11a;
  undefined4 uStack_116;
  byte *local_108;
  long lStack_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 uStack_ae;
  undefined4 uStack_aa;
  undefined4 uStack_a6;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  FontOptions::FontOptions((float)param_2 * DAT_005d98e8,(FontOptions *)&local_98,0);
                    /* try { // try from 001f89f8 to 001f8a11 has its CatchHandler @ 001f8dbd */
  uVar6 = (**(code **)(*(long *)this + 0x50))(this);
  FontOptions::FontOptions((FontOptions *)&local_178,&local_98);
  local_108 = local_178;
  local_178 = &DAT_0061ac58;
  lStack_100 = (long)puStack_170;
  puStack_170 = &DAT_0061ac58;
  local_f8 = local_168;
  local_168 = (long *)0x0;
  local_f0 = local_160;
  plStack_e8 = plStack_158;
  local_e0 = local_150;
  local_160 = (long *)0x0;
  plStack_158 = (long *)0x0;
  local_150 = 0;
  local_d8 = local_148;
  uStack_d0 = uStack_140;
  local_c8 = local_138;
  local_148 = (void *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_c0 = CONCAT44(uStack_12c,uVar6);
  fVar11 = (float)CONCAT22(uStack_120,uStack_122);
  uStack_ae = uStack_11e;
  uStack_aa = uStack_11a;
  uStack_a6 = uStack_116;
                    /* try { // try from 001f8ab7 to 001f8ac8 has its CatchHandler @ 001f8d6a */
  local_130 = uVar6;
  Font::Font((Font *)&local_190,(long *)&local_108);
                    /* try { // try from 001f8ad0 to 001f8ad9 has its CatchHandler @ 001f8d65 */
  juce::String::trim((long *)&local_178,(long *)(param_1 + 0x158));
  pbVar9 = local_178;
                    /* try { // try from 001f8adf to 001f8aff has its CatchHandler @ 001f8d6f */
  uVar3 = GlyphArrangement::getStringBounds
                    (&local_190,local_178,extraout_RDX,param_3,param_4,param_5);
  local_188 = fVar11;
  iVar7 = (**(code **)(*(long *)this + 0x390))((int)uVar3,this,param_2);
  local_188 = ceilf(local_188);
  pbVar9 = pbVar9 + -0x10;
  if (pbVar9 != (byte *)&emptyString) {
    LOCK();
    iVar8 = *(int *)pbVar9;
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(pbVar9);
    }
  }
  if (local_190 != (long *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_190 + 8))();
    }
  }
  plVar1 = local_f0;
  plVar4 = plStack_e8;
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
    plVar1 = local_f0;
    plVar4 = plStack_e8;
  }
  for (; plVar5 = plStack_e8, plVar1 != plStack_e8; plVar1 = plVar1 + 1) {
    piVar10 = (int *)(*plVar1 + -0x10);
    plStack_e8 = plVar4;
    if (piVar10 != &emptyString) {
      LOCK();
      iVar8 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        operator_delete__(piVar10);
      }
    }
    plVar4 = plStack_e8;
    plStack_e8 = plVar5;
  }
  plStack_e8 = plVar4;
  if (local_f0 != (long *)0x0) {
    operator_delete(local_f0);
  }
  if (local_f8 != (long *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  piVar10 = (int *)(lStack_100 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar8 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(piVar10);
    }
  }
  pbVar9 = local_108 + -0x10;
  if (pbVar9 != (byte *)&emptyString) {
    LOCK();
    iVar8 = *(int *)pbVar9;
    *(int *)pbVar9 = *(int *)pbVar9 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(pbVar9);
    }
  }
  plVar1 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    plVar1 = local_80;
  }
  for (; plVar1 != local_78; plVar1 = plVar1 + 1) {
    piVar10 = (int *)(*plVar1 + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      iVar8 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        operator_delete__(piVar10);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  iVar8 = (int)local_188;
  piVar10 = (int *)(local_90 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar2 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar10);
    }
  }
  piVar10 = (int *)(local_98 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar2 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar10);
    }
  }
  iVar8 = iVar8 + iVar7 * 2;
  if (*(long *)(param_1 + 0x208) != 0) {
    iVar8 = iVar8 + *(int *)(*(long *)(param_1 + 0x208) + 0x40 +
                            (ulong)((*(uint *)(*(long *)(param_1 + 0x1f8) + 0x150) & 0xfffffffe) ==
                                   2) * 4);
  }
  iVar7 = param_2 * 8;
  if (iVar8 <= param_2 * 8) {
    iVar7 = iVar8;
  }
  if (iVar8 < param_2 * 2) {
    iVar7 = param_2 * 2;
  }
  return iVar7;
}


