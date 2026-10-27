// Function : drawRect
// Namespace: juce:LowLevelGraphicsContext
// Entry    : 003322d0
// Prototype: undefined drawRect(float param_1, LowLevelGraphicsContext * this, float * param_3)
// Body     : 003322d0 - 00332665


/* juce::LowLevelGraphicsContext::drawRect(juce::Rectangle<float> const&, float) */

void __thiscall
juce::LowLevelGraphicsContext::drawRect(float param_1,LowLevelGraphicsContext *this,float *param_3)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  float local_9c;
  undefined1 local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [12];
  float fStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  fVar7 = param_3[2];
  fVar14 = param_3[3];
  local_b8 = (undefined8 *)0x0;
  uStack_b0._0_4_ = 0;
  uStack_b0._4_4_ = 0;
  fVar12 = fVar14;
  if (param_1 <= fVar14) {
    fVar12 = param_1;
  }
  bVar2 = 0.0 < fVar7;
  bVar3 = 0.0 < fVar12;
  uVar6 = 0;
  uVar8 = 0;
  uVar10 = 0;
  uVar11 = 0;
  fVar15 = fVar14 - fVar12;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  fVar9 = *param_3;
  uVar20 = 0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar24 = param_3[1];
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  if (bVar3 && bVar2) {
    _local_98 = ZEXT416((uint)fVar12);
    _local_88 = ZEXT416((uint)fVar7);
    local_48 = ZEXT416((uint)param_3[1]);
    local_58 = ZEXT416((uint)(fVar14 - fVar12));
    _local_68 = ZEXT416((uint)*param_3);
    local_9c = param_1;
    local_78 = *param_3;
    fStack_74 = param_3[1];
    fStack_70 = param_3[2];
    fStack_6c = fVar12;
    local_b8 = malloc(0x80);
    uStack_b0._0_4_ = 8;
    *local_b8 = CONCAT44(fStack_74,local_78);
    local_b8[1] = CONCAT44(fStack_6c,fStack_70);
    uVar6 = 8;
    param_1 = local_9c;
    fVar7 = (float)local_88._0_4_;
    uVar8 = local_88._4_4_;
    uVar10 = uStack_80;
    uVar11 = uStack_7c;
    fVar12 = (float)local_98._0_4_;
    fVar15 = (float)local_58._0_4_;
    uVar17 = local_58._4_4_;
    uVar18 = local_58._8_4_;
    uVar19 = local_58._12_4_;
    fVar9 = (float)local_68._0_4_;
    uVar20 = local_68._4_4_;
    fVar21 = (float)local_68._8_4_;
    fVar22 = fStack_5c;
    fVar24 = (float)local_48._0_4_;
    uVar25 = local_48._4_4_;
    uVar26 = local_48._8_4_;
    uVar27 = local_48._12_4_;
  }
  uStack_b0._4_4_ = (uint)(bVar3 && bVar2);
  fVar24 = fVar24 + fVar12;
  fVar14 = fVar15;
  if (param_1 <= fVar15) {
    fVar14 = param_1;
  }
  fVar12 = fVar9;
  fVar16 = fVar14;
  if ((0.0 < fVar7) && (0.0 < fVar14)) {
    fVar13 = (fVar15 + fVar24) - fVar14;
    uVar5 = (uint)(bVar3 && bVar2);
    fVar23 = fVar7;
    if (uVar6 <= uVar5) {
      if (!bVar3 || !bVar2) {
        local_88._4_4_ = uVar8;
        local_88._0_4_ = fVar7;
        uStack_80 = uVar10;
        uStack_7c = uVar11;
        local_48._4_4_ = uVar25;
        local_48._0_4_ = fVar24;
        local_48._8_4_ = uVar26;
        local_48._12_4_ = uVar27;
        local_58._4_4_ = uVar17;
        local_58._0_4_ = fVar15;
        local_58._8_4_ = uVar18;
        local_58._12_4_ = uVar19;
        local_68._4_4_ = uVar20;
        local_68._0_4_ = fVar9;
        local_68._8_4_ = fVar21;
        fStack_5c = fVar22;
        local_98._4_4_ = uVar17;
        local_98._0_4_ = fVar14;
        uStack_90 = uVar18;
        uStack_8c = uVar19;
        local_9c = param_1;
        local_78 = fVar9;
        fStack_74 = fVar13;
        fStack_70 = fVar21;
        fStack_6c = fVar22;
        local_38 = fVar7;
        fStack_34 = fVar14;
        uStack_30 = uVar10;
        uStack_2c = uVar11;
        local_b8 = realloc(local_b8,0x80);
        param_1 = local_9c;
        fVar7 = (float)local_88._0_4_;
        uVar8 = local_88._4_4_;
        uVar10 = uStack_80;
        uVar11 = uStack_7c;
        fVar9 = local_78;
        fVar13 = fStack_74;
        fVar15 = (float)local_58._0_4_;
        uVar17 = local_58._4_4_;
        uVar18 = local_58._8_4_;
        uVar19 = local_58._12_4_;
        fVar12 = (float)local_68._0_4_;
        uVar20 = local_68._4_4_;
        fVar21 = (float)local_68._8_4_;
        fVar22 = fStack_5c;
        fVar23 = local_38;
        fVar14 = fStack_34;
        fVar16 = (float)local_98._0_4_;
        fVar24 = (float)local_48._0_4_;
        uVar25 = local_48._4_4_;
        uVar26 = local_48._8_4_;
        uVar27 = local_48._12_4_;
      }
      uStack_b0._0_4_ = 8;
    }
    pfVar1 = (float *)(local_b8 + (ulong)uVar5 * 2);
    *pfVar1 = fVar9;
    pfVar1[1] = fVar13;
    pfVar1[2] = fVar23;
    pfVar1[3] = fVar14;
    uStack_b0._4_4_ = (bVar3 && bVar2) + 1;
  }
  fVar15 = fVar15 - fVar16;
  fVar14 = fVar7;
  if (param_1 <= fVar7) {
    fVar14 = param_1;
  }
  fVar7 = fVar7 - fVar14;
  fVar16 = fVar15;
  fVar13 = fVar14;
  fVar9 = fVar24;
  if ((0.0 < fVar14) && (0.0 < fVar15)) {
    lVar4 = (long)(int)uStack_b0._4_4_;
    uVar6 = uStack_b0._4_4_ + 1;
    fVar23 = fVar12;
    if ((uint)uStack_b0 <= uStack_b0._4_4_) {
      uVar5 = uStack_b0._4_4_ + uVar6 / 2 + 9 & 0xfffffff8;
      if ((uint)uStack_b0 != uVar5) {
        local_98._4_4_ = uVar8;
        local_98._0_4_ = fVar14;
        uStack_90 = uVar10;
        uStack_8c = uVar11;
        local_68._4_4_ = uVar20;
        local_68._0_4_ = fVar12;
        local_68._8_4_ = fVar21;
        fStack_5c = fVar22;
        local_58._4_4_ = uVar17;
        local_58._0_4_ = fVar15;
        local_58._8_4_ = uVar18;
        local_58._12_4_ = uVar19;
        local_48._4_4_ = uVar25;
        local_48._0_4_ = fVar24;
        local_48._8_4_ = uVar26;
        local_48._12_4_ = uVar27;
        local_88._4_4_ = uVar8;
        local_88._0_4_ = fVar7;
        uStack_80 = uVar10;
        uStack_7c = uVar11;
        local_9c = param_1;
        local_78 = fVar12;
        fStack_74 = fVar24;
        fStack_70 = fVar21;
        fStack_6c = fVar22;
        local_38 = fVar14;
        fStack_34 = fVar15;
        uStack_30 = uVar8;
        uStack_2c = uVar17;
        if (uVar5 == 0) {
          free(local_b8);
          local_b8 = (undefined8 *)0x0;
        }
        else {
          local_b8 = realloc(local_b8,(ulong)uVar5 << 4);
        }
        param_1 = local_9c;
        fVar7 = (float)local_88._0_4_;
        uVar8 = local_88._4_4_;
        fVar14 = local_38;
        fVar15 = fStack_34;
        fVar16 = (float)local_58._0_4_;
        uVar17 = local_58._4_4_;
        fVar12 = (float)local_68._0_4_;
        fVar13 = (float)local_98._0_4_;
        fVar23 = local_78;
        fVar24 = fStack_74;
        fVar9 = (float)local_48._0_4_;
        uVar25 = local_48._4_4_;
      }
      uStack_b0._0_4_ = uVar5;
    }
    pfVar1 = (float *)(local_b8 + lVar4 * 2);
    *pfVar1 = fVar23;
    pfVar1[1] = fVar24;
    pfVar1[2] = fVar14;
    pfVar1[3] = fVar15;
    uStack_b0._4_4_ = uVar6;
  }
  fVar14 = fVar7;
  if (param_1 <= fVar7) {
    fVar14 = param_1;
  }
  if ((0.0 < fVar14) && (0.0 < fVar16)) {
    fVar7 = (fVar7 + fVar12 + fVar13) - fVar14;
    lVar4 = (long)(int)uStack_b0._4_4_;
    uVar6 = uStack_b0._4_4_ + 1;
    if ((uint)uStack_b0 <= uStack_b0._4_4_) {
      uVar5 = uStack_b0._4_4_ + uVar6 / 2 + 9 & 0xfffffff8;
      if ((uint)uStack_b0 != uVar5) {
        local_98._4_4_ = fVar16;
        local_98._0_4_ = fVar14;
        uStack_90 = uVar8;
        uStack_8c = uVar17;
        local_88._4_4_ = fVar9;
        local_88._0_4_ = fVar7;
        uStack_80 = uVar8;
        uStack_7c = uVar25;
        if (uVar5 == 0) {
          free(local_b8);
          local_b8 = (undefined8 *)0x0;
        }
        else {
          local_b8 = realloc(local_b8,(ulong)uVar5 << 4);
        }
        fVar7 = (float)local_88._0_4_;
        fVar9 = (float)local_88._4_4_;
        fVar14 = (float)local_98._0_4_;
        fVar16 = (float)local_98._4_4_;
      }
      uStack_b0._0_4_ = uVar5;
    }
    pfVar1 = (float *)(local_b8 + lVar4 * 2);
    *pfVar1 = fVar7;
    pfVar1[1] = fVar9;
    pfVar1[2] = fVar14;
    pfVar1[3] = fVar16;
    uStack_b0._4_4_ = uVar6;
  }
                    /* try { // try from 0033263b to 00332646 has its CatchHandler @ 00332666 */
  (**(code **)(*(long *)this + 0xc0))(this,&local_b8);
  uStack_b0 = (ulong)(uint)uStack_b0;
  free(local_b8);
  return;
}


