// Function : drawPropertyPanelSectionHeader
// Namespace: juce:LookAndFeel_V2
// Entry    : 00215f40
// Prototype: undefined drawPropertyPanelSectionHeader(LookAndFeel_V2 * this, Graphics * param_1, ulong * param_2, uint param_4_00, int param_4, int param_5)
// Body     : 00215f40 - 0021631e


/* juce::LookAndFeel_V2::drawPropertyPanelSectionHeader(juce::Graphics&, juce::String const&, bool,
   int, int) */

void __thiscall
juce::LookAndFeel_V2::drawPropertyPanelSectionHeader
          (LookAndFeel_V2 *this,Graphics *param_1,ulong *param_2,uint param_4_00,int param_4,
          int param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  uint *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long *local_178;
  long *local_170;
  long *plStack_168;
  undefined8 local_160;
  void *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_12a;
  long local_118;
  long lStack_110;
  long *local_108;
  long *local_100;
  long *plStack_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_ba;
  undefined1 local_a8 [16];
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  puVar8 = (uint *)(ulong)param_4_00;
  fVar10 = (float)param_5;
  fVar12 = DAT_0065b218 * fVar10;
  local_a8 = ZEXT416((uint)fVar12);
  fVar11 = (fVar10 - fVar12) * DAT_005d9044;
  local_188 = (undefined1 *)CONCAT44(fVar11,fVar11);
  uStack_180 = (undefined1 *)CONCAT44(fVar12,fVar12);
  puVar9 = (undefined8 *)0x0;
  (**(code **)(*(long *)this + 0x130))(this,param_1,&local_188,_ZN4juce7ColoursL5whiteE_144);
  Graphics::setColour(param_1,_ZN4juce7ColoursL5blackE_14);
  FontOptions::FontOptions(fVar10 * (float)s_333_power__f_00652630._0_4_,(FontOptions *)&local_98,1)
  ;
                    /* try { // try from 00215fe5 to 00215ffe has its CatchHandler @ 0021634d */
  uVar4 = (**(code **)(*(long *)this + 0x50))(this);
  FontOptions::FontOptions((FontOptions *)&local_188,&local_98);
  local_118 = (long)local_188;
  local_188 = &DAT_0061ac58;
  lStack_110 = (long)uStack_180;
  uStack_180 = &DAT_0061ac58;
  local_108 = local_178;
  local_178 = (long *)0x0;
  local_100 = local_170;
  plStack_f8 = plStack_168;
  local_f0 = local_160;
  local_170 = (long *)0x0;
  plStack_168 = (long *)0x0;
  local_160 = 0;
  local_e8 = local_158;
  uStack_e0 = uStack_150;
  local_d8 = local_148;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_d0 = CONCAT44(uStack_13c,uVar4);
  uStack_ba = uStack_12a;
                    /* try { // try from 002160a7 to 002160b8 has its CatchHandler @ 0021631f */
  local_140 = uVar4;
  Font::Font((Font *)&local_190,&local_118);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 002160cc to 002160e0 has its CatchHandler @ 00216324 */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_190);
  if (local_190 != (long *)0x0) {
    LOCK();
    plVar6 = local_190 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*local_190 + 8))();
    }
  }
  plVar6 = local_100;
  plVar2 = plStack_f8;
  if (local_e8 != (void *)0x0) {
    operator_delete(local_e8);
    plVar6 = local_100;
    plVar2 = plStack_f8;
  }
  for (; plVar3 = plStack_f8, plVar6 != plStack_f8; plVar6 = plVar6 + 1) {
    piVar7 = (int *)(*plVar6 + -0x10);
    plStack_f8 = plVar2;
    if (piVar7 != &emptyString) {
      LOCK();
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        operator_delete__(piVar7);
      }
    }
    plVar2 = plStack_f8;
    plStack_f8 = plVar3;
  }
  plStack_f8 = plVar2;
  if (local_100 != (long *)0x0) {
    operator_delete(local_100);
  }
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar6 = local_108 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*local_108 + 8))();
    }
  }
  piVar7 = (int *)(lStack_110 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      operator_delete__(piVar7);
    }
  }
  piVar7 = (int *)(local_118 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      operator_delete__(piVar7);
    }
  }
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
  }
  plVar6 = local_80;
  if (local_80 != local_78) {
    do {
      piVar7 = (int *)(*plVar6 + -0x10);
      if (piVar7 != &emptyString) {
        LOCK();
        iVar5 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          operator_delete__(piVar7);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_78);
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  fVar10 = fVar11 + fVar11 + (float)local_a8._0_4_;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar6 = local_88 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  fVar10 = fVar10 + DAT_005d9078;
  piVar7 = (int *)(local_90 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      operator_delete__(piVar7);
    }
  }
  iVar5 = (int)fVar10;
  piVar7 = (int *)(local_98 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar7);
    }
  }
  Graphics::drawText((ulong)(uint)(float)iVar5,
                     CONCAT44((float)param_5,(float)((param_4 - iVar5) + -4)),(long)param_1,param_2,
                     0x21,1,puVar8,puVar9);
  return;
}


