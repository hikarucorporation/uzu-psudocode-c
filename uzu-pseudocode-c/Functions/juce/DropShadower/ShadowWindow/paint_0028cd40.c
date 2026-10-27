// Function : paint
// Namespace: juce:DropShadower:ShadowWindow
// Entry    : 0028cd40
// Prototype: undefined paint(ShadowWindow * this, Graphics * param_1)
// Body     : 0028cd40 - 0028ddc8


/* WARNING: Removing unreachable block (ram,0x0028ce58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::DropShadower::ShadowWindow::paint(juce::Graphics&) */

void __thiscall juce::DropShadower::ShadowWindow::paint(ShadowWindow *this,Graphics *param_1)

{
  ulong uVar1;
  ComponentHelpers *pCVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  double *pdVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  double *pdVar10;
  uint uVar11;
  ShadowWindow *pSVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 in_XMM6_Db;
  undefined4 in_XMM6_Dc;
  undefined4 in_XMM6_Dd;
  undefined1 auVar19 [16];
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_198;
  double *local_190;
  uint local_188;
  uint local_184;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  ShadowWindow *local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  float fStack_110;
  float fStack_10c;
  float local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  float local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*(long *)(this + 0xf0) == 0) {
    return;
  }
  pCVar2 = *(ComponentHelpers **)(*(long *)(this + 0xf0) + 0x10);
  if (pCVar2 == (ComponentHelpers *)0x0) {
    return;
  }
  auVar19 = detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>>
                      ((ComponentHelpers *)this,pCVar2,0,*(undefined8 *)(pCVar2 + 0x40));
  local_148 = auVar19._8_8_;
  local_118 = auVar19._0_8_;
  uVar4 = *(uint *)(this + 0xf8);
  uVar13 = uVar4 & 0xffffff;
  pdVar5 = malloc(0x80);
  _local_1a8 = ZEXT816(0);
  local_198 = 0;
  local_188 = 8;
  *pdVar5 = 0.0;
  *(uint *)(pdVar5 + 1) = uVar4;
  local_184 = 2;
  pdVar5[2] = 1.0;
  *(uint *)(pdVar5 + 3) = uVar13;
  local_178._0_4_ = (float)(uVar4 >> 0x18);
  iVar6 = SUB84((double)(DAT_005de488 * (float)(uVar4 >> 0x18)) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  local_190 = pdVar5;
  memmove(pdVar5 + 4,pdVar5 + 2,0x10);
  pdVar5[2] = 0.9499999992549419;
  *(uint *)(pdVar5 + 3) = iVar8 << 0x18 | uVar13;
  iVar6 = SUB84((double)(DAT_005de48c * (float)local_178._0_4_) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  local_184 = 3;
  lVar7 = 0;
  if (((_DAT_005de670 < *pdVar5) || (lVar7 = 1, _DAT_005de670 < pdVar5[2])) ||
     (lVar7 = 2, _DAT_005de670 < pdVar5[4])) {
    pdVar10 = pdVar5 + lVar7 * 2;
    memmove(pdVar5 + lVar7 * 2 + 2,pdVar10,(ulong)((uint)lVar7 ^ 3) << 4);
  }
  else {
    pdVar10 = pdVar5 + 6;
  }
  *pdVar10 = 0.8499999940395355;
  *(uint *)(pdVar10 + 1) = iVar8 << 0x18 | uVar13;
  iVar6 = SUB84((double)(DAT_005de490 * (float)local_178._0_4_) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  local_184 = 4;
  uVar4 = 0;
  if (((DAT_00651f60 < *pdVar5) || (uVar4 = 1, DAT_00651f60 < pdVar5[2])) ||
     ((uVar4 = 2, DAT_00651f60 < pdVar5[4] || (uVar4 = 3, DAT_00651f60 < pdVar5[6])))) {
    pdVar10 = pdVar5 + (ulong)uVar4 * 2;
    memmove(pdVar5 + (ulong)uVar4 * 2 + 2,pdVar10,(ulong)(4 - uVar4) << 4);
  }
  else {
    pdVar10 = pdVar5 + 8;
  }
  *pdVar10 = 0.75;
  *(uint *)(pdVar10 + 1) = iVar8 << 0x18 | uVar13;
  iVar6 = SUB84((double)(DAT_005de494 * (float)local_178._0_4_) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  local_184 = 5;
  uVar4 = 0;
  if (((_DAT_005de678 < *pdVar5) || (uVar4 = 1, _DAT_005de678 < pdVar5[2])) ||
     ((uVar4 = 2, _DAT_005de678 < pdVar5[4] ||
      ((uVar4 = 3, _DAT_005de678 < pdVar5[6] || (uVar4 = 4, _DAT_005de678 < pdVar5[8])))))) {
    pdVar10 = pdVar5 + (ulong)uVar4 * 2;
    memmove(pdVar5 + (ulong)uVar4 * 2 + 2,pdVar10,(ulong)(5 - uVar4) << 4);
  }
  else {
    pdVar10 = pdVar5 + 10;
  }
  *pdVar10 = 0.6500000059604645;
  *(uint *)(pdVar10 + 1) = iVar8 << 0x18 | uVar13;
  iVar6 = SUB84((double)(DAT_005de498 * (float)local_178._0_4_) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  local_184 = 6;
  uVar4 = 0;
  if (((((_DAT_005de680 < *pdVar5) || (uVar4 = 1, _DAT_005de680 < pdVar5[2])) ||
       (uVar4 = 2, _DAT_005de680 < pdVar5[4])) ||
      ((uVar4 = 3, _DAT_005de680 < pdVar5[6] || (uVar4 = 4, _DAT_005de680 < pdVar5[8])))) ||
     (uVar4 = 5, _DAT_005de680 < pdVar5[10])) {
    pdVar10 = pdVar5 + (ulong)uVar4 * 2;
    memmove(pdVar5 + (ulong)uVar4 * 2 + 2,pdVar10,(ulong)(6 - uVar4) << 4);
  }
  else {
    pdVar10 = pdVar5 + 0xc;
  }
  *pdVar10 = 0.550000011920929;
  *(uint *)(pdVar10 + 1) = iVar8 << 0x18 | uVar13;
  iVar6 = SUB84((double)(DAT_005de49c * (float)local_178._0_4_) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  local_184 = 7;
  lVar7 = 0;
  if ((((_DAT_005de688 < *pdVar5) || (lVar7 = 1, _DAT_005de688 < pdVar5[2])) ||
      ((lVar7 = 2, _DAT_005de688 < pdVar5[4] ||
       (((lVar7 = 3, _DAT_005de688 < pdVar5[6] || (lVar7 = 4, _DAT_005de688 < pdVar5[8])) ||
        (lVar7 = 5, _DAT_005de688 < pdVar5[10])))))) || (lVar7 = 6, _DAT_005de688 < pdVar5[0xc])) {
    pdVar10 = pdVar5 + lVar7 * 2;
    memmove(pdVar5 + lVar7 * 2 + 2,pdVar10,(ulong)((uint)lVar7 ^ 7) << 4);
  }
  else {
    pdVar10 = pdVar5 + 0xe;
  }
  *pdVar10 = 0.44999998807907104;
  fVar14 = (float)local_178._0_4_ * _DAT_005de4a0;
  *(uint *)(pdVar10 + 1) = iVar8 << 0x18 | uVar13;
  local_184 = 8;
  iVar6 = SUB84((double)fVar14 + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  uVar4 = 0;
  if (((*pdVar5 <= _DAT_005de690) && (uVar4 = 1, pdVar5[2] <= _DAT_005de690)) &&
     (((uVar4 = 2, pdVar5[4] <= _DAT_005de690 &&
       ((uVar4 = 3, pdVar5[6] <= _DAT_005de690 && (uVar4 = 4, pdVar5[8] <= _DAT_005de690)))) &&
      ((uVar4 = 5, pdVar5[10] <= _DAT_005de690 && (uVar4 = 6, pdVar5[0xc] <= _DAT_005de690)))))) {
    uVar4 = 7;
    uVar11 = 8;
    if (pdVar5[0xe] <= _DAT_005de690) goto LAB_0028d3b2;
  }
  uVar11 = uVar4;
LAB_0028d3b2:
  local_190 = realloc(pdVar5,0x100);
  local_188 = 0x10;
  local_130 = this;
  if (uVar11 < 8) {
    pdVar5 = local_190 + (ulong)uVar11 * 2;
    memmove(local_190 + (ulong)uVar11 * 2 + 2,pdVar5,(ulong)(8 - uVar11) << 4);
  }
  else {
    pdVar5 = local_190 + 0x10;
  }
  *pdVar5 = 0.34999996423721313;
  *(uint *)(pdVar5 + 1) = iVar8 << 0x18 | uVar13;
  uVar1 = (long)(int)local_184 + 1;
  uVar13 = (uint)uVar1;
  uVar4 = *(uint *)(local_130 + 0xf8);
  iVar6 = SUB84((double)((float)(uVar4 >> 0x18) * _DAT_005de4a4) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  if ((long)(int)local_184 < 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    pdVar5 = local_190;
    do {
      if (DAT_005de698 < *pdVar5) goto LAB_0028d49e;
      uVar9 = uVar9 + 1;
      pdVar5 = pdVar5 + 2;
    } while ((uVar1 & 0xffffffff) != uVar9);
    uVar9 = uVar1 & 0xffffffff;
  }
LAB_0028d49e:
  uVar11 = uVar13;
  if ((int)local_188 <= (int)uVar13) {
    uVar11 = local_184 + ((int)((local_184 - ((int)(local_184 + 2) >> 0x1f)) + 2) >> 1) + 10 &
             0xfffffff8;
    local_184 = uVar13;
    if (local_188 != uVar11) {
      if ((int)uVar11 < 1) {
        free(local_190);
        local_190 = (double *)0x0;
      }
      else {
        local_190 = realloc(local_190,(ulong)uVar11 << 4);
      }
    }
    local_188 = uVar11;
    uVar11 = local_184;
  }
  local_184 = uVar11;
  pSVar12 = local_130;
  iVar6 = uVar13 - (uint)uVar9;
  if (uVar13 < (uint)uVar9 || iVar6 == 0) {
    pdVar5 = local_190 + uVar1 * 2;
  }
  else {
    pdVar5 = local_190 + (uVar9 & 0xffffffff) * 2;
    memmove(local_190 + (uVar9 & 0xffffffff) * 2 + 2,pdVar5,(long)iVar6 << 4);
  }
  *pdVar5 = 0.24999994039535522;
  *(uint *)(pdVar5 + 1) = iVar8 << 0x18 | uVar4 & 0xffffff;
  uVar1 = (long)(int)local_184 + 1;
  uVar13 = (uint)uVar1;
  uVar4 = *(uint *)(pSVar12 + 0xf8);
  iVar6 = SUB84((double)((float)(uVar4 >> 0x18) * _DAT_005de4a8) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  if ((long)(int)local_184 < 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    pdVar5 = local_190;
    do {
      if (DAT_005de6a0 < *pdVar5) goto LAB_0028d5ee;
      uVar9 = uVar9 + 1;
      pdVar5 = pdVar5 + 2;
    } while ((uVar1 & 0xffffffff) != uVar9);
    uVar9 = uVar1 & 0xffffffff;
  }
LAB_0028d5ee:
  uVar11 = uVar13;
  if ((int)local_188 <= (int)uVar13) {
    uVar11 = local_184 + ((int)((local_184 - ((int)(local_184 + 2) >> 0x1f)) + 2) >> 1) + 10 &
             0xfffffff8;
    local_184 = uVar13;
    if (local_188 != uVar11) {
      if ((int)uVar11 < 1) {
        free(local_190);
        local_190 = (double *)0x0;
      }
      else {
        local_190 = realloc(local_190,(ulong)uVar11 << 4);
      }
    }
    pSVar12 = local_130;
    local_188 = uVar11;
    uVar11 = local_184;
  }
  local_184 = uVar11;
  iVar6 = uVar13 - (uint)uVar9;
  if (uVar13 < (uint)uVar9 || iVar6 == 0) {
    pdVar5 = local_190 + uVar1 * 2;
  }
  else {
    pdVar5 = local_190 + (uVar9 & 0xffffffff) * 2;
    memmove(local_190 + (uVar9 & 0xffffffff) * 2 + 2,pdVar5,(long)iVar6 << 4);
  }
  *pdVar5 = 0.14999991655349731;
  *(uint *)(pdVar5 + 1) = iVar8 << 0x18 | uVar4 & 0xffffff;
  uVar1 = (long)(int)local_184 + 1;
  uVar13 = (uint)uVar1;
  uVar4 = *(uint *)(pSVar12 + 0xf8);
  iVar6 = SUB84((double)((float)(uVar4 >> 0x18) * _DAT_005de4ac) + DAT_005d9098,0);
  iVar8 = 0xff;
  if (iVar6 < 0xff) {
    iVar8 = iVar6;
  }
  if ((long)(int)local_184 < 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    pdVar5 = local_190;
    do {
      if (DAT_005de6a8 < *pdVar5) goto LAB_0028d72e;
      uVar9 = uVar9 + 1;
      pdVar5 = pdVar5 + 2;
    } while ((uVar1 & 0xffffffff) != uVar9);
    uVar9 = uVar1 & 0xffffffff;
  }
LAB_0028d72e:
  uVar11 = uVar13;
  if ((int)local_188 <= (int)uVar13) {
    uVar11 = local_184 + ((int)((local_184 - ((int)(local_184 + 2) >> 0x1f)) + 2) >> 1) + 10 &
             0xfffffff8;
    local_184 = uVar13;
    if (local_188 != uVar11) {
      if ((int)uVar11 < 1) {
        free(local_190);
        local_190 = (double *)0x0;
      }
      else {
        local_190 = realloc(local_190,(ulong)uVar11 << 4);
      }
    }
    local_188 = uVar11;
    uVar11 = local_184;
  }
  local_184 = uVar11;
  local_178._0_4_ = SUB84(local_118,0);
  local_178._4_4_ = SUB84(local_118 >> 0x20,0);
  local_178._8_4_ = 0;
  local_178._12_4_ = 0;
  iVar6 = uVar13 - (uint)uVar9;
  if (uVar13 < (uint)uVar9 || iVar6 == 0) {
    pdVar5 = local_190 + uVar1 * 2;
  }
  else {
    pdVar5 = local_190 + (uVar9 & 0xffffffff) * 2;
    local_178._8_8_ = 0;
    local_178._0_8_ = local_118;
    memmove(local_190 + (uVar9 & 0xffffffff) * 2 + 2,pdVar5,(long)iVar6 << 4);
  }
  pSVar12 = local_130;
  *pdVar5 = 0.049999892711639404;
  *(uint *)(pdVar5 + 1) = iVar8 << 0x18 | uVar4 & 0xffffff;
  local_184 = local_184 + 1;
  fVar14 = DAT_005d9044 * (float)*(int *)(local_130 + 0xfc);
  local_f8._0_4_ = (float)*(int *)(local_130 + 0xfc) + fVar14;
  fVar15 = fVar14 + fVar14;
  auVar19._0_4_ = (float)(int)local_148 - fVar15;
  auVar19._4_4_ = (float)(int)((ulong)local_148 >> 0x20) - fVar15;
  auVar19._8_4_ = 0.0 - fVar15;
  auVar19._12_4_ = 0.0 - fVar15;
  local_58 = maxps(auVar19,ZEXT816(0));
  local_68 = (float)(int)*(undefined8 *)(local_130 + 0x100) + fVar14 + (float)(int)local_178._0_4_;
  fStack_140 = (float)(int)((ulong)*(undefined8 *)(local_130 + 0x100) >> 0x20) +
               fVar14 + (float)(int)local_178._4_4_;
  fStack_110 = fVar14 + (float)(int)local_178._8_4_ + 0.0;
  fStack_10c = fVar14 + (float)(int)local_178._12_4_ + 0.0;
  local_178._0_4_ = (float)local_f8._0_4_ + (float)local_f8._0_4_ + local_58._0_4_;
  if ((float)local_178._0_4_ <= 0.0) {
    local_178._0_4_ = 0.0;
  }
  local_108 = (float)local_f8._0_4_ + (float)local_f8._0_4_ + local_58._4_4_;
  if (local_108 <= 0.0) {
    local_108 = 0.0;
  }
  local_b8 = local_68 - (float)local_f8._0_4_;
  local_128 = fStack_140 - (float)local_f8._0_4_;
  local_158 = local_108;
  if ((float)local_f8._0_4_ <= local_108) {
    local_158 = (float)local_f8._0_4_;
  }
  local_1a8._4_4_ = local_128 + local_158;
  local_178._4_4_ = in_XMM6_Db;
  local_178._8_4_ = in_XMM6_Dc;
  local_178._12_4_ = in_XMM6_Dd;
  local_d8 = (float)local_178._0_4_;
  if ((float)local_f8._0_4_ <= (float)local_178._0_4_) {
    local_d8 = (float)local_f8._0_4_;
  }
  local_118 = CONCAT44(fStack_140,local_b8 + local_d8);
  fStack_1a0 = local_d8 * 0.0 + local_b8;
  local_88 = ZEXT416((uint)fStack_1a0);
  local_148 = CONCAT44(fStack_140,local_1a8._4_4_);
  local_1a8._0_4_ = local_b8 + local_d8;
  fStack_19c = (float)local_1a8._4_4_;
  local_198 = 1;
  fStack_13c = fStack_140;
  fStack_124 = fStack_140;
  fStack_120 = fStack_140;
  fStack_11c = fStack_140;
  uStack_104 = in_XMM6_Db;
  uStack_100 = in_XMM6_Dc;
  uStack_fc = in_XMM6_Dd;
  fStack_b4 = fStack_140;
  fStack_b0 = fStack_110;
  fStack_ac = fStack_10c;
  fStack_64 = fStack_140;
  fStack_60 = fStack_110;
  fStack_5c = fStack_10c;
                    /* try { // try from 0028d90c to 0028dd7a has its CatchHandler @ 0028ddc9 */
  Graphics::setGradientFill(param_1,(undefined8 *)local_1a8);
  local_168 = CONCAT44(local_128,local_b8);
  uStack_160 = CONCAT44(local_158,local_d8);
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),&local_168);
  local_178._0_4_ = (float)local_178._0_4_ - local_d8;
  local_e8 = (float)local_178._0_4_;
  if ((float)local_f8._0_4_ <= (float)local_178._0_4_) {
    local_e8 = (float)local_f8._0_4_;
  }
  local_c8 = ((float)local_178._0_4_ + (float)local_118) - local_e8;
  local_1a8._0_4_ = local_e8 * 0.0 + local_c8;
  local_98 = ZEXT416((uint)local_1a8._0_4_);
  uStack_e4 = local_178._4_4_;
  uStack_e0 = local_178._8_4_;
  uStack_dc = local_178._12_4_;
  uStack_c4 = local_178._4_4_;
  uStack_c0 = local_178._8_4_;
  uStack_bc = local_178._12_4_;
  local_a8 = local_e8 + local_c8;
  uStack_a4 = local_178._4_4_;
  uStack_a0 = local_178._8_4_;
  uStack_9c = local_178._12_4_;
  local_1a8._4_4_ = (float)local_148;
  fStack_1a0 = local_a8;
  fStack_19c = (float)local_148;
  local_198 = 1;
  Graphics::setGradientFill(param_1,(undefined8 *)local_1a8);
  local_168 = CONCAT44(local_128,local_c8);
  uStack_160 = CONCAT44(local_158,local_e8);
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),&local_168);
  local_178._0_4_ = (float)local_178._0_4_ - local_e8;
  local_48 = (float)local_178._0_4_ * 0.0 + (float)local_118;
  uStack_44 = local_178._4_4_;
  uStack_40 = local_178._8_4_;
  uStack_3c = local_178._12_4_;
  local_1a8._4_4_ = (float)local_148;
  local_1a8._0_4_ = local_48;
  fStack_1a0 = local_48;
  fStack_19c = local_158 * 0.0 + local_128;
  local_198 = 0;
  Graphics::setGradientFill(param_1,(undefined8 *)local_1a8);
  local_168 = CONCAT44(local_128,(int)local_118);
  uStack_160 = CONCAT44(local_158,local_178._0_4_);
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),&local_168);
  local_108 = local_108 - local_158;
  local_158 = local_108;
  if ((float)local_f8._0_4_ <= local_108) {
    local_158 = (float)local_f8._0_4_;
  }
  local_128 = (local_108 + (float)local_148) - local_158;
  uStack_154 = uStack_104;
  uStack_150 = uStack_100;
  uStack_14c = uStack_fc;
  fStack_124 = (float)uStack_104;
  fStack_120 = (float)uStack_100;
  fStack_11c = (float)uStack_fc;
  local_1a8._4_4_ = local_158 * 0.0 + local_128;
  local_f8 = ZEXT416((uint)local_1a8._4_4_);
  local_1a8._0_4_ = (int)local_118;
  fStack_1a0 = (float)local_88._0_4_;
  fStack_19c = (float)local_1a8._4_4_;
  local_198 = 1;
  Graphics::setGradientFill(param_1,(undefined8 *)local_1a8);
  local_78 = local_b8;
  fStack_74 = local_128;
  fStack_70 = fStack_b4;
  uStack_6c = fStack_124;
  local_168 = CONCAT44(local_128,local_b8);
  uStack_160 = CONCAT44(local_158,local_d8);
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),&local_168);
  local_1a8._4_4_ = local_f8._0_4_;
  local_1a8._0_4_ = local_98._0_4_;
  fStack_1a0 = local_a8;
  fStack_19c = (float)local_f8._0_4_;
  local_198 = 1;
  Graphics::setGradientFill(param_1,(undefined8 *)local_1a8);
  local_168 = CONCAT44(local_128,local_c8);
  uStack_160 = CONCAT44(local_158,local_e8);
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),&local_168);
  auVar16._4_4_ = local_f8._0_4_;
  auVar16._0_4_ = local_48;
  auVar16._8_4_ = local_48;
  auVar16._12_4_ = local_128 + local_158;
  local_198 = 0;
  _local_1a8 = auVar16;
  Graphics::setGradientFill(param_1,(undefined8 *)local_1a8);
  auVar3._4_8_ = auVar16._8_8_;
  auVar3._0_4_ = fStack_74;
  auVar17._0_8_ = auVar3._0_8_ << 0x20;
  auVar17._8_4_ = fStack_70;
  auVar17._12_4_ = uStack_6c;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = (float)local_118;
  uStack_160 = CONCAT44(local_158,local_178._0_4_);
  local_168 = auVar18._0_8_;
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),&local_168);
  local_108 = local_108 - local_158;
  local_1a8._4_4_ = local_108 * 0.0 + (float)local_148;
  local_178 = ZEXT416((uint)local_1a8._4_4_);
  local_1a8._0_4_ = (int)local_118;
  fStack_1a0 = (float)local_88._0_4_;
  fStack_19c = (float)local_1a8._4_4_;
  local_198 = 0;
  Graphics::setGradientFill(param_1,(undefined8 *)local_1a8);
  local_168 = CONCAT44((float)local_148,local_b8);
  uStack_160 = CONCAT44(local_108,local_d8);
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),&local_168);
  local_1a8._4_4_ = local_178._0_4_;
  local_1a8._0_4_ = local_98._0_4_;
  fStack_1a0 = local_a8;
  fStack_19c = (float)local_178._0_4_;
  local_198 = 0;
  Graphics::setGradientFill(param_1,(undefined8 *)local_1a8);
  local_168 = CONCAT44((float)local_148,local_c8);
  uStack_160 = CONCAT44(local_108,local_e8);
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),&local_168);
  Graphics::setColour(param_1,*(undefined4 *)(pSVar12 + 0xf8));
  local_168 = CONCAT44(fStack_64,local_68);
  uStack_160 = local_58._0_8_;
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))(*(long **)(param_1 + 8),&local_168);
  local_184 = 0;
  free(local_190);
  return;
}


