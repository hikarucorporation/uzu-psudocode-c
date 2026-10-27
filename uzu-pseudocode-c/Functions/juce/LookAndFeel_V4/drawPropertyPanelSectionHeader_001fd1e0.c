// Function : drawPropertyPanelSectionHeader
// Namespace: juce:LookAndFeel_V4
// Entry    : 001fd1e0
// Prototype: undefined drawPropertyPanelSectionHeader(LookAndFeel_V4 * this, Graphics * param_1, ulong * param_2, byte param_3, int param_4, int param_5)
// Body     : 001fd1e0 - 001fd698


/* juce::LookAndFeel_V4::drawPropertyPanelSectionHeader(juce::Graphics&, juce::String const&, bool,
   int, int) */

void __thiscall
juce::LookAndFeel_V4::drawPropertyPanelSectionHeader
          (LookAndFeel_V4 *this,Graphics *param_1,ulong *param_2,byte param_3,int param_4,
          int param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  long *local_1a0;
  float local_194;
  ulong *local_190;
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
  
  local_194 = (float)param_5;
  fVar16 = DAT_0065b218 * local_194;
  local_a8 = ZEXT416((uint)fVar16);
  fVar15 = (local_194 - fVar16) * DAT_005d9044;
  local_188 = (undefined1 *)CONCAT44(fVar15,fVar15);
  uStack_180 = (undefined1 *)CONCAT44(fVar16,fVar16);
  uVar2 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar2) {
    lVar3 = *(long *)(this + 0xe8);
    uVar6 = uVar2;
    uVar11 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar3 + (long)(int)uVar11 * 8) == 0x1005700) {
          if (-1 < (int)uVar11) {
            uVar7 = 0;
            if (uVar11 < uVar2) {
              uVar7 = *(undefined4 *)(lVar3 + 4 + (ulong)uVar11 * 8);
            }
            goto LAB_001fd2b1;
          }
          goto LAB_001fd2ab;
        }
        uVar8 = (int)(uVar11 + uVar6) / 2;
        if (uVar8 == uVar11) goto LAB_001fd2ab;
        if (*(int *)(lVar3 + (long)(int)uVar8 * 8) < 0x1005701) break;
        uVar6 = uVar8;
        if ((int)uVar8 <= (int)uVar11) goto LAB_001fd2ab;
      }
      uVar11 = uVar8;
    } while ((int)uVar8 < (int)uVar6);
  }
LAB_001fd2ab:
  uVar7 = _ZN4juce7ColoursL5blackE_14;
LAB_001fd2b1:
  puVar13 = (uint *)(ulong)param_3;
  puVar14 = (undefined8 *)0x0;
  local_190 = param_2;
  (**(code **)(*(long *)this + 0x130))(this,param_1,&local_188,uVar7);
  uVar2 = *(uint *)(this + 0xf4);
  if (0 < (int)uVar2) {
    lVar3 = *(long *)(this + 0xe8);
    uVar6 = uVar2;
    uVar11 = 0;
    do {
      while( true ) {
        if (*(int *)(lVar3 + (long)(int)uVar11 * 8) == 0x1008301) {
          if (-1 < (int)uVar11) {
            uVar7 = 0;
            if (uVar11 < uVar2) {
              uVar7 = *(undefined4 *)(lVar3 + 4 + (ulong)uVar11 * 8);
            }
            goto LAB_001fd33e;
          }
          goto LAB_001fd338;
        }
        uVar8 = (int)(uVar11 + uVar6) / 2;
        if (uVar8 == uVar11) goto LAB_001fd338;
        if (*(int *)(lVar3 + (long)(int)uVar8 * 8) < 0x1008302) break;
        uVar6 = uVar8;
        if ((int)uVar8 <= (int)uVar11) goto LAB_001fd338;
      }
      uVar11 = uVar8;
    } while ((int)uVar8 < (int)uVar6);
  }
LAB_001fd338:
  uVar7 = _ZN4juce7ColoursL5blackE_14;
LAB_001fd33e:
  Graphics::setColour(param_1,uVar7);
  FontOptions::FontOptions
            (local_194 * (float)s_333_power__f_00652630._0_4_,(FontOptions *)&local_98,1);
                    /* try { // try from 001fd369 to 001fd382 has its CatchHandler @ 001fd6c7 */
  uVar7 = (**(code **)(*(long *)this + 0x50))(this);
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
  uStack_d0 = CONCAT44(uStack_13c,uVar7);
  uStack_ba = uStack_12a;
                    /* try { // try from 001fd42b to 001fd43c has its CatchHandler @ 001fd699 */
  local_140 = uVar7;
  Font::Font((Font *)&local_1a0,&local_118);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 001fd450 to 001fd464 has its CatchHandler @ 001fd69e */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_1a0);
  if (local_1a0 != (long *)0x0) {
    LOCK();
    plVar10 = local_1a0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)(*local_1a0 + 8))();
    }
  }
  plVar10 = local_100;
  plVar4 = plStack_f8;
  if (local_e8 != (void *)0x0) {
    operator_delete(local_e8);
    plVar10 = local_100;
    plVar4 = plStack_f8;
  }
  for (; plVar5 = plStack_f8, plVar10 != plStack_f8; plVar10 = plVar10 + 1) {
    piVar12 = (int *)(*plVar10 + -0x10);
    plStack_f8 = plVar4;
    if (piVar12 != &emptyString) {
      LOCK();
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        operator_delete__(piVar12);
      }
    }
    plVar4 = plStack_f8;
    plStack_f8 = plVar5;
  }
  plStack_f8 = plVar4;
  if (local_100 != (long *)0x0) {
    operator_delete(local_100);
  }
  if (local_108 != (long *)0x0) {
    LOCK();
    plVar10 = local_108 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)(*local_108 + 8))();
    }
  }
  piVar12 = (int *)(lStack_110 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    iVar9 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(piVar12);
    }
  }
  piVar12 = (int *)(local_118 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    iVar9 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(piVar12);
    }
  }
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
  }
  plVar10 = local_80;
  if (local_80 != local_78) {
    do {
      piVar12 = (int *)(*plVar10 + -0x10);
      if (piVar12 != &emptyString) {
        LOCK();
        iVar9 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          operator_delete__(piVar12);
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != local_78);
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  fVar15 = fVar15 + fVar15 + (float)local_a8._0_4_;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar10 = local_88 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  fVar15 = fVar15 + DAT_005d9078;
  piVar12 = (int *)(local_90 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    iVar9 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(piVar12);
    }
  }
  iVar9 = (int)fVar15;
  piVar12 = (int *)(local_98 + -0x10);
  if (piVar12 != &emptyString) {
    LOCK();
    iVar1 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar12);
    }
  }
  Graphics::drawText((ulong)(uint)(float)iVar9,
                     CONCAT44((float)param_5,(float)((param_4 - iVar9) + -4)),(long)param_1,
                     local_190,0x21,1,puVar13,puVar14);
  return;
}


