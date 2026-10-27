// Function : poltocar_perform
// Namespace: 
// Entry    : 0055f4f0
// Prototype: long poltocar_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055f4f0 - 0055fb2b


long poltocar_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  float *pfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float __x;
  bool bVar7;
  uint uVar8;
  undefined7 extraout_var;
  float *pfVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  undefined1 uVar18;
  undefined7 uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  float *pfVar23;
  undefined8 uVar24;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulong local_88;
  ulong local_80;
  undefined1 local_78 [16];
  float *local_68;
  long local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar18 = (undefined1)param_14;
  uVar19 = (undefined7)((ulong)param_14 >> 8);
  lVar22 = *(long *)(param_9 + 8);
  iVar6 = *(int *)(param_9 + 0x10);
  pfVar9 = *(float **)(param_9 + 0x18);
  pfVar14 = *(float **)(param_9 + 0x20);
  pfVar15 = *(float **)(param_9 + 0x28);
  pfVar23 = *(float **)(param_9 + 0x30);
  local_60 = param_9;
  bVar7 = magic_isnan(**(uint **)(lVar22 + 0x48));
  uVar21 = local_88;
  if ((int)CONCAT71(extraout_var,bVar7) == 0) {
    uVar24 = magic_setnan(*(undefined4 **)(lVar22 + 0x48));
    pd_error(uVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar22,
             "poltocar~: doesn\'t understand \'float\'",extraout_RDX,param_12,param_13,
             CONCAT71(uVar19,uVar18));
    uVar21 = local_88;
  }
  if (iVar6 == 0) goto LAB_0055fb0e;
  uVar20 = iVar6 - 1;
  uVar11 = (ulong)uVar20;
  local_88 = uVar11 + 1;
  if (*(long *)(lVar22 + 0x50) == 0) {
    if ((6 < uVar20) && ((pfVar23 + uVar11 + 1 <= pfVar15 || (pfVar15 + uVar11 + 1 <= pfVar23)))) {
      uVar21 = local_88 & 0xfffffffffffffff8;
      uVar12 = (uVar21 - 8 >> 3) + 1;
      uVar11 = (ulong)((uint)uVar12 & 3);
      if (uVar21 - 8 < 0x18) {
        lVar22 = 0;
      }
      else {
        uVar12 = uVar12 & 0xfffffffffffffffc;
        lVar22 = 0;
        do {
          pfVar9 = pfVar15 + lVar22;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar15 + lVar22 + 4;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar23 + lVar22;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar23 + lVar22 + 4;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar15 + lVar22 + 8;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar15 + lVar22 + 0xc;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar23 + lVar22 + 8;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar23 + lVar22 + 0xc;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar15 + lVar22 + 0x10;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar15 + lVar22 + 0x14;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar23 + lVar22 + 0x10;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar23 + lVar22 + 0x14;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar15 + lVar22 + 0x18;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar15 + lVar22 + 0x1c;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar23 + lVar22 + 0x18;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          pfVar9 = pfVar23 + lVar22 + 0x1c;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          pfVar9[2] = 0.0;
          pfVar9[3] = 0.0;
          lVar22 = lVar22 + 0x20;
          uVar12 = uVar12 - 4;
        } while (uVar12 != 0);
      }
      if (uVar11 != 0) {
        lVar17 = 0;
        do {
          puVar2 = (undefined8 *)((long)pfVar15 + lVar17 + lVar22 * 4);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)((long)pfVar15 + lVar17 + lVar22 * 4 + 0x10);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)((long)pfVar23 + lVar17 + lVar22 * 4);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)((long)pfVar23 + lVar17 + lVar22 * 4 + 0x10);
          *puVar2 = 0;
          puVar2[1] = 0;
          lVar17 = lVar17 + 0x20;
        } while (uVar11 * 0x20 != lVar17);
      }
      if (local_88 == uVar21) goto LAB_0055fb0e;
      uVar20 = uVar20 - (int)uVar21;
      pfVar23 = pfVar23 + uVar21;
      pfVar15 = pfVar15 + uVar21;
    }
    uVar8 = uVar20 + 1 & 7;
    uVar10 = uVar20;
    if (uVar8 != 0) {
      uVar10 = 0;
      do {
        *pfVar15 = 0.0;
        pfVar15 = pfVar15 + 1;
        *pfVar23 = 0.0;
        pfVar23 = pfVar23 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
      uVar10 = uVar20 - uVar10;
    }
    if (6 < uVar20) {
      lVar22 = 0;
      do {
        pfVar15[lVar22] = 0.0;
        pfVar23[lVar22] = 0.0;
        pfVar15[lVar22 + 1] = 0.0;
        pfVar23[lVar22 + 1] = 0.0;
        pfVar15[lVar22 + 2] = 0.0;
        pfVar23[lVar22 + 2] = 0.0;
        pfVar15[lVar22 + 3] = 0.0;
        pfVar23[lVar22 + 3] = 0.0;
        pfVar15[lVar22 + 4] = 0.0;
        pfVar23[lVar22 + 4] = 0.0;
        pfVar15[lVar22 + 5] = 0.0;
        pfVar23[lVar22 + 5] = 0.0;
        pfVar15[lVar22 + 6] = 0.0;
        pfVar23[lVar22 + 6] = 0.0;
        pfVar15[lVar22 + 7] = 0.0;
        pfVar23[lVar22 + 7] = 0.0;
        lVar22 = lVar22 + 8;
      } while (uVar10 + 1 != (int)lVar22);
    }
    goto LAB_0055fb0e;
  }
  if (uVar20 < 3) {
joined_r0x0055fa58:
    local_88 = uVar21;
    uVar10 = uVar20;
    if ((uVar20 & 1) == 0) {
LAB_0055f9dd:
      fVar5 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      fVar4 = *pfVar14;
      pfVar14 = pfVar14 + 1;
      sincosf(fVar4,&local_ac,&local_b0);
      *pfVar15 = local_b0 * fVar5;
      pfVar15 = pfVar15 + 1;
      *pfVar23 = fVar5 * local_ac;
      pfVar23 = pfVar23 + 1;
      uVar10 = uVar20 - 1;
    }
  }
  else {
    pfVar13 = pfVar15 + uVar11 + 1;
    pfVar16 = pfVar23 + uVar11 + 1;
    uVar21 = local_88;
    if (pfVar15 < pfVar16 && pfVar23 < pfVar13) goto joined_r0x0055fa58;
    if ((((!(pfVar15 < pfVar9 + uVar11 + 1 && pfVar9 < pfVar13)) &&
         (!(pfVar15 < pfVar14 + uVar11 + 1 && pfVar14 < pfVar13))) &&
        (!(pfVar23 < pfVar9 + uVar11 + 1 && pfVar9 < pfVar16))) &&
       (!(pfVar23 < pfVar14 + uVar11 + 1 && pfVar14 < pfVar16))) {
      local_80 = local_88 & 0x1fffffffc;
      uVar11 = (ulong)(uVar20 - (int)local_80);
      local_68 = pfVar9 + local_80;
      pfVar13 = pfVar23 + local_80;
      pfVar3 = pfVar15 + local_80;
      pfVar16 = pfVar14 + local_80;
      uVar21 = 0;
      do {
        local_48 = *(undefined8 *)(pfVar9 + uVar21);
        uStack_40 = *(undefined8 *)(pfVar9 + uVar21 + 2);
        pfVar1 = pfVar14 + uVar21;
        fVar5 = *pfVar1;
        fVar4 = pfVar1[1];
        __x = pfVar1[2];
        sincosf(pfVar1[3],&local_8c,&local_90);
        local_78 = ZEXT416((uint)local_90);
        sincosf(__x,&local_94,&local_98);
        local_78._12_4_ = local_78._4_4_;
        local_78._4_4_ = local_78._0_4_;
        local_78._0_4_ = local_98;
        local_78._8_4_ = 0;
        sincosf(fVar5,&local_a4,&local_a8);
        local_58 = ZEXT416((uint)local_a8);
        sincosf(fVar4,&local_9c,&local_a0);
        pfVar1 = pfVar15 + uVar21;
        *pfVar1 = (float)local_58._0_4_ * (float)local_48;
        pfVar1[1] = local_a0 * local_48._4_4_;
        pfVar1[2] = local_78._0_4_ * (float)uStack_40;
        pfVar1[3] = local_78._4_4_ * uStack_40._4_4_;
        pfVar1 = pfVar23 + uVar21;
        *pfVar1 = local_a4 * (float)local_48;
        pfVar1[1] = local_9c * local_48._4_4_;
        pfVar1[2] = local_94 * (float)uStack_40;
        pfVar1[3] = local_8c * uStack_40._4_4_;
        uVar21 = uVar21 + 4;
      } while (local_80 != uVar21);
      pfVar9 = local_68;
      pfVar14 = pfVar16;
      pfVar23 = pfVar13;
      pfVar15 = pfVar3;
      if (local_88 == local_80) goto LAB_0055fb0e;
    }
    uVar20 = (uint)uVar11;
    uVar10 = uVar20;
    if ((uVar11 & 1) == 0) goto LAB_0055f9dd;
  }
  if (uVar20 != 0) {
    lVar22 = 0;
    do {
      fVar5 = pfVar9[lVar22];
      sincosf(pfVar14[lVar22],&local_b4,&local_b8);
      pfVar15[lVar22] = local_b8 * fVar5;
      pfVar23[lVar22] = fVar5 * local_b4;
      fVar5 = pfVar9[lVar22 + 1];
      sincosf(pfVar14[lVar22 + 1],&local_bc,&local_c0);
      pfVar15[lVar22 + 1] = local_c0 * fVar5;
      pfVar23[lVar22 + 1] = fVar5 * local_bc;
      lVar22 = lVar22 + 2;
    } while (uVar10 + 1 != (int)lVar22);
  }
LAB_0055fb0e:
  return local_60 + 0x38;
}


