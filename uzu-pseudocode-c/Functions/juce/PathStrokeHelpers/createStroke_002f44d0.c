// Function : createStroke
// Namespace: juce:PathStrokeHelpers
// Entry    : 002f44d0
// Prototype: undefined createStroke(float param_1, float param_2, int param_3, int param_4, Path * param_5, Path * param_6, float * param_7)
// Body     : 002f44d0 - 002f4a8f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::PathStrokeHelpers::createStroke(float, juce::PathStrokeType::JointStyle,
   juce::PathStrokeType::EndCapStyle, juce::Path&, juce::Path const&, juce::AffineTransform const&,
   float, juce::PathStrokeHelpers::Arrowhead const*) */

void __cdecl
juce::PathStrokeHelpers::createStroke
          (float param_1,float param_2,int param_3,int param_4,Path *param_5,Path *param_6,
          float *param_7)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar26;
  void *local_130;
  void *local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  Path local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8;
  int local_a4;
  Path *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  float *local_80;
  float local_78;
  undefined8 local_74;
  undefined1 local_6c;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (param_1 <= 0.0) {
    *(undefined8 *)(param_5 + 0xc) = 0;
    *(undefined8 *)(param_5 + 0x14) = 0;
    *(undefined4 *)(param_5 + 0x1c) = 0;
    return;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (float *)0x0;
  uStack_e0 = 0;
  local_c8 = (Path)0x1;
  if (param_6 == param_5) {
    local_80 = *(float **)param_5;
    *(undefined8 *)param_5 = 0;
    uVar2 = *(undefined4 *)(param_5 + 8);
    *(undefined4 *)(param_5 + 8) = 0;
    uVar3 = *(undefined4 *)(param_5 + 0xc);
    *(undefined4 *)(param_5 + 0xc) = 0;
    uStack_e0 = CONCAT44(uVar3,uVar2);
    local_d8 = *(undefined8 *)(param_5 + 0x10);
    uStack_d0 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(param_5 + 0x10) = 0;
    *(undefined8 *)(param_5 + 0x18) = 0;
    local_c8 = param_5[0x20];
    param_6 = (Path *)&local_e8;
    local_e8 = local_80;
    local_b8 = local_d8;
  }
  else {
    *(undefined8 *)(param_5 + 0xc) = 0;
    *(undefined8 *)(param_5 + 0x14) = 0;
    *(undefined4 *)(param_5 + 0x1c) = 0;
    local_80 = *(float **)param_6;
  }
  param_5[0x20] = (Path)0x1;
  local_a8 = '\0';
  uStack_b0 = 0;
  local_a4 = -1;
  local_98 = *(undefined8 *)param_7;
  uStack_90 = *(undefined8 *)(param_7 + 2);
  local_88 = *(undefined8 *)(param_7 + 4);
  local_78 = (DAT_005d98e8 / param_2) * (DAT_005d98e8 / param_2);
  local_74 = 0;
  fVar16 = DAT_0065b144 * param_1 * param_1;
  fVar15 = param_1 * DAT_005d9044;
  local_6c = (param_7[5] == 0.0 && param_7[4] == DAT_005d9038) &&
             ((param_7[3] == 0.0 && param_7[2] == 0.0) &&
             (param_7[1] == 0.0 && *param_7 == DAT_005d9038));
  local_a0 = param_6;
  local_68 = malloc(0x80);
  local_58 = 0x20;
  local_120 = 0x308;
  local_60 = local_68;
  local_130 = malloc(0x9180);
  local_f8 = 0.0;
  fStack_f4 = 0.0;
  uVar7 = 0x308;
  iVar8 = 0;
  local_128 = local_130;
LAB_002f4710:
  fStack_ec = 0.0;
  fStack_f0 = 0.0;
  uVar6 = uVar7;
LAB_002f4720:
  uVar4 = PathFlatteningIterator::next((PathFlatteningIterator *)&local_b8);
  if ((char)uVar4 == '\0') {
    if (0 < iVar8) {
      addSubPath(fVar15,fVar16,param_5,(long *)&local_128,0,param_3,param_4);
    }
    free(local_130);
    free(local_68);
    uStack_e0 = uStack_e0 & 0xffffffff;
    free(local_e8);
    return;
  }
  if (local_a4 == 0) {
    if (0 < iVar8) {
      iVar8 = 0;
      addSubPath(fVar15,fVar16,param_5,(long *)&local_128,0,param_3,param_4);
      local_120 = local_120 & 0xffffffff;
    }
    local_f8 = (float)local_b8;
    fStack_f4 = (float)((ulong)local_b8 >> 0x20);
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
  }
  fVar20 = (float)((ulong)uStack_b0 >> 0x20);
  fVar21 = (float)uStack_b0 - local_f8;
  fVar22 = fVar20 - fStack_f4;
  fVar9 = fVar21 * fVar21 + fVar22 * fVar22;
  if ((local_a8 == '\0') && (fVar9 <= DAT_00651f34)) goto code_r0x002f47c2;
  goto LAB_002f4810;
code_r0x002f47c2:
  if (local_60 != local_68) goto LAB_002f4720;
  if (local_80 != (float *)((long)*(int *)(local_a0 + 0xc) * 4 + *(long *)local_a0)) {
    if ((*local_80 != DAT_005de3d0) || (NAN(*local_80) || NAN(DAT_005de3d0))) goto LAB_002f4720;
  }
LAB_002f4810:
  if (fVar9 < DAT_005d9058) {
    local_108 = uStack_b0;
    uStack_100 = 0;
    local_118 = fVar21;
    fStack_114 = fVar22;
    fStack_110 = 0.0 - fStack_f0;
    fStack_10c = 0.0 - fStack_ec;
    fVar9 = sqrtf(fVar9);
    fVar19 = (float)local_108;
    fVar20 = local_108._4_4_;
    fVar21 = local_118;
    fVar22 = fStack_114;
  }
  else {
    fVar9 = SQRT(fVar9);
    fVar19 = (float)uStack_b0;
  }
  fVar10 = (float)((uint)fVar9 & _DAT_005d91c0);
  fVar11 = local_f8;
  fVar12 = fStack_f4;
  fVar13 = local_f8;
  fVar14 = fStack_f4;
  fVar17 = local_f8;
  fVar18 = fStack_f4;
  fVar23 = local_f8;
  fVar24 = fStack_f4;
  fVar25 = local_f8;
  fVar26 = fStack_f4;
  if (fVar10 == DAT_005d94c8) {
    if ((fVar9 != DAT_005d9058) || (NAN(fVar9) || NAN(DAT_005d9058))) {
LAB_002f48b4:
      fVar9 = fVar15 / fVar9;
      fVar11 = fVar19 - fVar22 * fVar9;
      fVar12 = fVar20 + fVar21 * fVar9;
      fVar13 = local_f8 - fVar22 * fVar9;
      fVar14 = fStack_f4 + fVar21 * fVar9;
      fVar23 = local_f8 + fVar22 * fVar9;
      fVar24 = fStack_f4 - fVar21 * fVar9;
      fVar25 = fVar19 + fVar22 * fVar9;
      fVar26 = fVar20 - fVar21 * fVar9;
    }
LAB_002f48f1:
    if ((int)uVar6 <= iVar8) {
LAB_002f4920:
      uVar7 = (iVar8 + 1) / 2 + iVar8 + 9U & 0xfffffff8;
      if (uVar6 != uVar7) {
        local_108 = CONCAT44(fStack_f4,local_f8);
        uStack_100 = CONCAT44(fVar20,fVar19);
        local_118 = fVar23;
        fStack_114 = fVar24;
        fStack_110 = fVar25;
        fStack_10c = fVar26;
        local_48 = fVar11;
        fStack_44 = fVar12;
        fStack_40 = fVar13;
        fStack_3c = fVar14;
        if ((int)uVar7 < 1) {
          free(local_130);
          local_128 = (void *)0x0;
        }
        else {
          local_128 = realloc(local_130,(ulong)uVar7 * 0x30);
        }
        fVar11 = local_48;
        fVar12 = fStack_44;
        fVar13 = fStack_40;
        fVar14 = fStack_3c;
        fVar17 = (float)local_108;
        fVar18 = local_108._4_4_;
        fVar19 = (float)uStack_100;
        fVar20 = uStack_100._4_4_;
        fVar23 = local_118;
        fVar24 = fStack_114;
        fVar25 = fStack_110;
        fVar26 = fStack_10c;
        local_130 = local_128;
      }
      local_120 = (ulong)uVar7;
      goto LAB_002f49ac;
    }
  }
  else {
    if (DAT_005d94cc < fVar10) {
      if (fVar10 * DAT_005d94d0 < fVar10) goto LAB_002f48b4;
      goto LAB_002f48f1;
    }
    if ((int)uVar6 <= iVar8) goto LAB_002f4920;
  }
  uVar7 = uVar6;
LAB_002f49ac:
  local_120 = CONCAT44(iVar8 + 1,(undefined4)local_120);
  lVar5 = (long)iVar8 * 0x30;
  pfVar1 = (float *)((long)local_130 + lVar5);
  *pfVar1 = fVar17;
  pfVar1[1] = fVar18;
  pfVar1[2] = fVar19;
  pfVar1[3] = fVar20;
  pfVar1 = (float *)((long)local_130 + lVar5 + 0x10);
  *pfVar1 = fVar23;
  pfVar1[1] = fVar24;
  pfVar1[2] = fVar25;
  pfVar1[3] = fVar26;
  pfVar1 = (float *)((long)local_130 + lVar5 + 0x20);
  *pfVar1 = fVar11;
  pfVar1[1] = fVar12;
  pfVar1[2] = fVar13;
  pfVar1[3] = fVar14;
  if (local_a8 != '\0') {
    addSubPath(fVar15,fVar16,param_5,(long *)&local_128,1,param_3,param_4);
    local_120 = local_120 & 0xffffffff;
    iVar8 = 0;
    uVar6 = uVar7;
    goto LAB_002f4720;
  }
  local_f8 = (float)uStack_b0;
  fStack_f4 = (float)((ulong)uStack_b0 >> 0x20);
  iVar8 = iVar8 + 1;
  goto LAB_002f4710;
}


