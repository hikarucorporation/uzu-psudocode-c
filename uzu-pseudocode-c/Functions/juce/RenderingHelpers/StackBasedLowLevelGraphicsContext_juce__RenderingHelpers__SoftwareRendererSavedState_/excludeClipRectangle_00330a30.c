// Function : excludeClipRectangle
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00330a30
// Prototype: undefined excludeClipRectangle(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 * param_1)
// Body     : 00330a30 - 00330f2b


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::excludeClipRectangle(juce::Rectangle<int>
   const&) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::
excludeClipRectangle
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  long *local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  long *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  plVar3 = *(long **)(this + 8);
  plVar11 = (long *)*plVar3;
  if (plVar11 == (long *)0x0) {
    return;
  }
  iVar4 = (int)*param_1;
  iVar6 = (int)param_1[1];
  iVar12 = (int)((ulong)*param_1 >> 0x20);
  iVar7 = (int)((ulong)param_1[1] >> 0x20);
  if (1 < (int)plVar11[1]) {
    (**(code **)(*plVar11 + 0x10))(&local_a8);
    plVar11 = (long *)*plVar3;
    *plVar3 = (long)local_a8;
    local_a8 = plVar11;
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar11 + 8))();
        cVar2 = (char)plVar3[5];
        fVar13 = local_78;
        fVar15 = fStack_74;
        goto joined_r0x00330a9e;
      }
    }
  }
  cVar2 = (char)plVar3[5];
  fVar13 = local_78;
  fVar15 = fStack_74;
joined_r0x00330a9e:
  if (cVar2 == '\0') {
    if (*(char *)((long)plVar3 + 0x29) != '\0') {
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (long *)0x0;
      uStack_a0 = 0;
      local_88 = 1;
      Path::addRectangle((float)iVar4,(float)iVar12,(float)iVar6,(float)iVar7,(Path *)&local_a8);
      Path::applyTransform((Path *)&local_a8,(float *)(plVar3 + 1));
                    /* try { // try from 00330c5b to 00330c5d has its CatchHandler @ 00330f2e */
      auVar26 = (**(code **)(*(long *)*plVar3 + 0x60))();
      Path::addRectangle((float)auVar26._0_4_,(float)auVar26._4_4_,(float)auVar26._8_4_,
                         (float)auVar26._12_4_,(Path *)&local_a8);
      local_88 = 0;
      local_48 = ZEXT416(DAT_005d9038);
      local_38 = 0x3f800000;
                    /* try { // try from 00330cb9 to 00330cce has its CatchHandler @ 00330f2c */
      (**(code **)(*(long *)*plVar3 + 0x38))(&local_50,(long *)*plVar3,(Path *)&local_a8,local_48);
      plVar11 = (long *)*plVar3;
      *plVar3 = (long)local_50;
      local_50 = plVar11;
      if (plVar11 != (long *)0x0) {
        plVar3 = plVar11 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        if ((int)*plVar3 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      uStack_a0 = uStack_a0 & 0xffffffff;
      free(local_a8);
      return;
    }
    fVar19 = (float)iVar4;
    fVar18 = (float)iVar12;
    plVar11 = (long *)*plVar3;
    fVar23 = *(float *)((long)plVar3 + 0xc) * fVar18;
    fVar24 = *(float *)((long)plVar3 + 0xc) * ((float)iVar7 + fVar18);
    fVar21 = *(float *)(plVar3 + 1) * fVar19;
    fVar17 = *(float *)(plVar3 + 2);
    fVar22 = fVar21 + fVar23 + fVar17;
    fVar14 = *(float *)(plVar3 + 3) * fVar18;
    fVar16 = *(float *)(plVar3 + 3) * ((float)iVar7 + fVar18);
    fVar20 = fVar19 * *(float *)((long)plVar3 + 0x14);
    fStack_60 = *(float *)((long)plVar3 + 0x1c);
    fVar25 = fVar20 + fVar14 + fStack_60;
    fVar18 = fVar24 + fVar21 + fVar17;
    fVar20 = fVar16 + fVar20 + fStack_60;
    fVar21 = *(float *)(plVar3 + 1) * ((float)iVar6 + fVar19);
    fVar23 = fVar17 + fVar21 + fVar23;
    fStack_74 = fVar17 + fVar21 + fVar24;
    fVar17 = ((float)iVar6 + fVar19) * *(float *)((long)plVar3 + 0x14);
    fVar14 = fStack_60 + fVar17 + fVar14;
    fStack_60 = fStack_60 + fVar17 + fVar16;
    fVar17 = fVar18;
    if (fVar23 <= fVar18) {
      fVar17 = fVar23;
    }
    if (fVar18 <= fVar23) {
      fVar18 = fVar23;
    }
    fVar16 = fStack_74;
    if (fVar17 <= fStack_74) {
      fVar16 = fVar17;
    }
    if (fVar22 <= fVar16) {
      fVar16 = fVar22;
    }
    local_78 = fStack_74;
    if (fStack_74 <= fVar18) {
      local_78 = fVar18;
    }
    if (local_78 <= fVar22) {
      local_78 = fVar22;
    }
    fVar17 = fVar20;
    if (fVar14 <= fVar20) {
      fVar17 = fVar14;
    }
    if (fVar20 <= fVar14) {
      fVar20 = fVar14;
    }
    fVar18 = fStack_60;
    if (fVar17 <= fStack_60) {
      fVar18 = fVar17;
    }
    if (fVar25 <= fVar18) {
      fVar18 = fVar25;
    }
    fVar17 = fStack_60;
    if (fStack_60 <= fVar20) {
      fVar17 = fVar20;
    }
    iVar4 = 0x7fffffff;
    iVar12 = 0x7fffffff;
    local_68 = (long *)CONCAT44(fStack_60,fVar18);
    fVar20 = local_78;
    fVar14 = fStack_74;
    fVar21 = fStack_74;
    fVar19 = fStack_74;
    fStack_5c = fStack_60;
    if (fVar16 < DAT_00653434) {
      fStack_70 = fStack_74;
      fStack_6c = fStack_74;
      fVar13 = ceilf(fVar16);
      iVar12 = (int)fVar13;
      fVar18 = (float)local_68;
      fVar20 = local_78;
      fVar14 = fStack_74;
      fVar21 = fStack_70;
      fVar19 = fStack_6c;
      fVar13 = local_78;
      fVar15 = fStack_74;
    }
    fStack_74 = fVar15;
    local_78 = fVar13;
    if (fVar17 <= fVar25) {
      fVar17 = fVar25;
    }
    fVar13 = fVar20 - fVar16;
    if (fVar18 < DAT_00653434) {
      local_78 = fVar20 - fVar16;
      fStack_74 = fVar14;
      fStack_70 = fVar21;
      fStack_6c = fVar19;
      fVar13 = ceilf(fVar18);
      iVar4 = (int)fVar13;
      fVar18 = (float)local_68;
      fVar13 = local_78;
    }
    iVar6 = -0x80000000;
    iVar7 = -0x80000000;
    fVar15 = fVar18;
    if (DAT_00653430 < fVar16 + fVar13) {
      fVar13 = floorf(fVar16 + fVar13);
      iVar7 = (int)fVar13;
      fVar15 = (float)local_68;
    }
    fVar15 = fVar15 + (fVar17 - fVar18);
    if (DAT_00653430 < fVar15) {
      fVar13 = floorf(fVar15);
      iVar6 = (int)fVar13;
    }
    uVar8 = (ulong)(uint)(iVar7 - iVar12);
    if (iVar7 - iVar12 < 0) {
      uVar8 = 0;
    }
    uVar10 = (ulong)(uint)(iVar6 - iVar4);
    if (iVar6 - iVar4 < 0) {
      uVar10 = 0;
    }
    uVar5 = CONCAT44(iVar4,iVar12);
    uVar8 = uVar8 | uVar10 << 0x20;
  }
  else {
    fVar18 = (float)(int)plVar3[4] + (float)iVar4;
    local_68 = (long *)*plVar3;
    fVar17 = (float)*(int *)((long)plVar3 + 0x24) + (float)iVar12;
    iVar12 = 0x7fffffff;
    iVar4 = 0x7fffffff;
    local_78 = fVar13;
    fStack_74 = fVar15;
    if (fVar18 < DAT_00653434) {
      fVar13 = ceilf(fVar18);
      iVar4 = (int)fVar13;
    }
    fVar13 = (float)iVar6;
    if (fVar17 < DAT_00653434) {
      local_78 = (float)iVar6;
      fVar13 = ceilf(fVar17);
      iVar12 = (int)fVar13;
      fVar13 = local_78;
    }
    iVar9 = -0x80000000;
    iVar6 = -0x80000000;
    if (DAT_00653430 < fVar18 + fVar13) {
      fVar13 = floorf(fVar18 + fVar13);
      iVar6 = (int)fVar13;
    }
    if (DAT_00653430 < fVar17 + (float)iVar7) {
      fVar13 = floorf(fVar17 + (float)iVar7);
      iVar9 = (int)fVar13;
    }
    uVar8 = (ulong)(uint)(iVar6 - iVar4);
    if (iVar6 - iVar4 < 0) {
      uVar8 = 0;
    }
    uVar10 = (ulong)(uint)(iVar9 - iVar12);
    if (iVar9 - iVar12 < 0) {
      uVar10 = 0;
    }
    uVar5 = CONCAT44(iVar12,iVar4);
    uVar8 = uVar8 | uVar10 << 0x20;
    plVar11 = local_68;
  }
  (**(code **)(*plVar11 + 0x30))(&local_a8,plVar11,uVar5,uVar8);
  plVar11 = (long *)*plVar3;
  *plVar3 = (long)local_a8;
  if (plVar11 != (long *)0x0) {
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    if ((int)*plVar3 == 0) {
      local_a8 = plVar11;
      (**(code **)(*plVar11 + 8))();
    }
  }
  return;
}


