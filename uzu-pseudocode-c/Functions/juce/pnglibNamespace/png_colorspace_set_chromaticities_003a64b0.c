// Function : png_colorspace_set_chromaticities
// Namespace: juce:pnglibNamespace
// Entry    : 003a64b0
// Prototype: undefined png_colorspace_set_chromaticities(pnglibNamespace * param_1, long param_2, uint * param_3)
// Body     : 003a64b0 - 003a7054


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_colorspace_set_chromaticities(juce::pnglibNamespace::png_struct_def
   const*, juce::pnglibNamespace::png_colorspace*, juce::pnglibNamespace::png_xy const*, int) */

void __cdecl
juce::pnglibNamespace::png_colorspace_set_chromaticities
          (pnglibNamespace *param_1,long param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  int iVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  int local_d4;
  double dStack_c0;
  int local_8c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  uVar2 = *param_3;
  if ((((((uVar2 < 0x186a1) && (uVar3 = param_3[1], -1 < (int)uVar3)) &&
        ((int)uVar3 <= (int)(100000 - uVar2))) &&
       ((uVar4 = param_3[2], uVar4 < 0x186a1 && (uVar5 = param_3[3], -1 < (int)uVar5)))) &&
      (((int)uVar5 <= (int)(100000 - uVar4) &&
       ((uVar6 = param_3[4], uVar6 < 0x186a1 && (uVar7 = param_3[5], -1 < (int)uVar7)))))) &&
     (((int)uVar7 <= (int)(100000 - uVar6) &&
      (((uVar8 = param_3[6], uVar8 < 0x186a1 && (uVar9 = param_3[7], 4 < (int)uVar9)) &&
       ((int)uVar9 <= (int)(100000 - uVar8))))))) {
    iVar15 = uVar3 - uVar7;
    local_8c = 0;
    iVar23 = 0;
    iVar24 = uVar4 - uVar6;
    if ((iVar24 != 0) && (iVar23 = 0, iVar15 != 0)) {
      dVar26 = floor(((double)iVar15 * (double)iVar24) / _DAT_005de6f0 + DAT_005db338);
      if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a6ff6;
      iVar23 = (int)dVar26;
    }
    iVar16 = uVar5 - uVar7;
    iVar20 = uVar2 - uVar6;
    if ((iVar20 != 0) && (iVar16 != 0)) {
      dVar26 = floor(((double)iVar20 * (double)iVar16) / _DAT_005de6f0 + DAT_005db338);
      if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a6ff6;
      local_8c = (int)dVar26;
    }
    iVar21 = uVar9 - uVar7;
    iVar18 = 0;
    if ((iVar24 != 0) && (iVar18 = 0, iVar21 != 0)) {
      dVar26 = floor(((double)iVar21 * (double)iVar24) / _DAT_005de6f0 + DAT_005db338);
      if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a6ff6;
      iVar18 = (int)dVar26;
    }
    iVar25 = 0;
    iVar24 = uVar8 - uVar6;
    if ((iVar16 != 0) && (iVar24 != 0)) {
      dVar26 = floor(((double)iVar24 * (double)iVar16) / _DAT_005de6f0 + DAT_005db338);
      if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a6ff6;
      iVar25 = (int)dVar26;
    }
    if (iVar18 - iVar25 != 0) {
      iVar23 = iVar23 - local_8c;
      if (iVar23 == 0) {
        iVar16 = 0;
      }
      else {
        dVar26 = floor(((double)iVar23 * (double)(int)uVar9) / (double)(iVar18 - iVar25) +
                       DAT_005db338);
        if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a64d1;
        iVar16 = (int)dVar26;
      }
      if ((int)uVar9 < iVar16) {
        iVar18 = 0;
        if ((iVar15 != 0) && (iVar18 = 0, iVar24 != 0)) {
          dVar26 = floor(((double)iVar24 * (double)iVar15) / _DAT_005de6f0 + DAT_005db338);
          if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a6ff6;
          iVar18 = (int)dVar26;
        }
        iVar15 = 0;
        if ((iVar20 != 0) && (iVar21 != 0)) {
          dVar26 = floor(((double)iVar21 * (double)iVar20) / _DAT_005de6f0 + DAT_005db338);
          if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) {
LAB_003a6ff6:
            *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 0x80;
                    /* WARNING: Subroutine does not return */
            png_err(param_1);
          }
          iVar15 = (int)dVar26;
        }
        if (iVar18 - iVar15 != 0) {
          if (iVar23 == 0) {
            iVar15 = 0;
          }
          else {
            dVar26 = floor(((double)iVar23 * (double)(int)uVar9) / (double)(iVar18 - iVar15) +
                           DAT_005db338);
            if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a64d1;
            iVar15 = (int)dVar26;
          }
          if ((int)uVar9 < iVar15) {
            dVar26 = floor(DAT_005de6f8 / (double)(int)uVar9 + DAT_005db338);
            iVar23 = (int)dVar26;
            if (dVar26 < DAT_005de630) {
              iVar23 = 0;
            }
            local_d4 = 0;
            if (DAT_0065a018 < dVar26) {
              iVar23 = 0;
            }
            dVar26 = (double)iVar16;
            uVar30 = SUB84((double)iVar15,0);
            uVar31 = (undefined4)((ulong)(double)iVar15 >> 0x20);
            auVar10._8_4_ = uVar30;
            auVar10._0_8_ = dVar26;
            auVar10._12_4_ = uVar31;
            auVar28._8_4_ = uVar30;
            auVar28._0_8_ = dVar26;
            auVar28._12_4_ = uVar31;
            auVar28 = divpd(ram0x005ddba0,auVar28);
            dVar29 = auVar28._8_8_ + _UNK_00651fc8;
            dVar27 = floor(auVar28._0_8_ + _DAT_00651fc0);
            dVar29 = floor(dVar29);
            uVar11 = CONCAT44((int)dVar29,(int)dVar27) &
                     CONCAT44(-(uint)(dVar29 <= DAT_0065a018 && DAT_005de630 <= dVar29),
                              -(uint)(DAT_005de630 <= dVar27 && dVar27 <= DAT_0065a018));
            iVar23 = iVar23 - ((int)(uVar11 >> 0x20) + (int)uVar11);
            if (0 < iVar23) {
              if (uVar2 != 0) {
                dVar27 = floor(((double)(int)uVar2 * DAT_005de6e8) / dVar26 + DAT_005db338);
                if ((DAT_0065a018 < dVar27) || (dVar27 < DAT_005de630)) goto LAB_003a64d1;
                local_d4 = (int)dVar27;
              }
              local_78 = local_d4;
              iVar15 = 0;
              if (uVar3 != 0) {
                dVar27 = floor(((double)(int)uVar3 * DAT_005de6e8) / dVar26 + DAT_005db338);
                if ((DAT_0065a018 < dVar27) || (dVar27 < DAT_005de630)) goto LAB_003a64d1;
                iVar15 = (int)dVar27;
              }
              iStack_74 = iVar15;
              iVar15 = 0;
              if (uVar3 + uVar2 != 100000) {
                dVar26 = floor(((double)(int)(100000 - (uVar3 + uVar2)) * DAT_005de6e8) / dVar26 +
                               DAT_005db338);
                if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a64d1;
                iVar15 = (int)dVar26;
              }
              iStack_70 = iVar15;
              iVar24 = 0;
              dStack_c0 = auVar10._8_8_;
              iVar15 = 0;
              if (uVar4 != 0) {
                dVar26 = floor(((double)(int)uVar4 * DAT_005de6e8) / dStack_c0 + DAT_005db338);
                if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a64d1;
                iVar15 = (int)dVar26;
              }
              iStack_6c = iVar15;
              if (uVar5 != 0) {
                dVar26 = floor(((double)(int)uVar5 * DAT_005de6e8) / dStack_c0 + DAT_005db338);
                if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a64d1;
                iVar24 = (int)dVar26;
              }
              iVar16 = 0;
              iVar15 = 0;
              local_68 = iVar24;
              if (uVar5 + uVar4 != 100000) {
                dVar26 = floor(((double)(int)(100000 - (uVar5 + uVar4)) * DAT_005de6e8) / dStack_c0
                               + DAT_005db338);
                if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a64d1;
                iVar15 = (int)dVar26;
              }
              dVar26 = (double)iVar23;
              iStack_64 = iVar15;
              if (uVar6 != 0) {
                dVar27 = floor(((double)(int)uVar6 * dVar26) / DAT_005de6e8 + DAT_005db338);
                if ((DAT_0065a018 < dVar27) || (dVar27 < DAT_005de630)) goto LAB_003a64d1;
                iVar16 = (int)dVar27;
              }
              iVar23 = 0;
              iVar15 = 0;
              iStack_60 = iVar16;
              if (uVar7 != 0) {
                dVar27 = floor(((double)(int)uVar7 * dVar26) / DAT_005de6e8 + DAT_005db338);
                if ((DAT_0065a018 < dVar27) || (dVar27 < DAT_005de630)) goto LAB_003a64d1;
                iVar15 = (int)dVar27;
              }
              iStack_5c = iVar15;
              if (uVar7 + uVar6 != 100000) {
                dVar26 = floor((dVar26 * (double)(int)(100000 - (uVar7 + uVar6))) / DAT_005de6e8 +
                               DAT_005db338);
                if ((DAT_0065a018 < dVar26) || (dVar26 < DAT_005de630)) goto LAB_003a64d1;
                iVar23 = (int)dVar26;
              }
              local_58 = iVar23;
              uVar17 = png_xy_from_XYZ(&local_50,&local_78);
              if (((((((int)uVar17 == 0) && (local_38 + -5 <= (int)param_3[6])) &&
                    ((int)param_3[6] <= local_38 + 5)) &&
                   (((local_34 + -5 <= (int)param_3[7] && ((int)param_3[7] <= local_34 + 5)) &&
                    ((local_50 + -5 <= (int)*param_3 &&
                     (((int)*param_3 <= local_50 + 5 && (local_4c + -5 <= (int)param_3[1])))))))) &&
                  ((int)param_3[1] <= local_4c + 5)) &&
                 (((((local_48 + -5 <= (int)param_3[2] && ((int)param_3[2] <= local_48 + 5)) &&
                    (local_44 + -5 <= (int)param_3[3])) &&
                   (((int)param_3[3] <= local_44 + 5 && (local_40 + -5 <= (int)param_3[4])))) &&
                  (((int)param_3[4] <= local_40 + 5 &&
                   ((local_3c + -5 <= (int)param_3[5] && ((int)param_3[5] <= local_3c + 5)))))))) {
                uVar1 = *(ushort *)(param_2 + 0x4a);
                if ((uVar1 & 0x8000) != 0) {
                  return;
                }
                if (((uVar1 & 2) == 0) ||
                   (bVar14 = png_colorspace_endpoints_match((int *)param_3,(int *)(param_2 + 4),100)
                   , (int)CONCAT71(extraout_var,bVar14) != 0)) {
                  uVar17 = *(undefined8 *)param_3;
                  uVar12 = *(undefined8 *)(param_3 + 2);
                  uVar13 = *(undefined8 *)(param_3 + 6);
                  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_3 + 4);
                  *(undefined8 *)(param_2 + 0x1c) = uVar13;
                  *(undefined8 *)(param_2 + 4) = uVar17;
                  *(undefined8 *)(param_2 + 0xc) = uVar12;
                  *(ulong *)(param_2 + 0x24) = CONCAT44(iStack_74,local_78);
                  *(ulong *)(param_2 + 0x2c) = CONCAT44(iStack_6c,iStack_70);
                  *(ulong *)(param_2 + 0x34) = CONCAT44(iStack_64,local_68);
                  *(ulong *)(param_2 + 0x3c) = CONCAT44(iStack_5c,iStack_60);
                  *(int *)(param_2 + 0x44) = local_58;
                  bVar14 = png_colorspace_endpoints_match((int *)param_3,(int *)sRGB_xy,1000);
                  uVar19 = uVar1 | 0x42;
                  if ((int)CONCAT71(extraout_var_00,bVar14) == 0) {
                    uVar19 = uVar1 & 0xffbd | 2;
                  }
                  *(ushort *)(param_2 + 0x4a) = uVar19;
                  return;
                }
                *(ushort *)(param_2 + 0x4a) = uVar1 | 0x8000;
                if (((byte)param_1[0x52] & 0x10) == 0) goto LAB_003a7033;
                if (((*(uint *)(param_1 + 0x4c) & 0x8000) == 0) || (*(int *)(param_1 + 0x138) == 0))
                {
                  pcVar22 = "inconsistent chromaticities";
                  goto LAB_003a651a;
                }
                pcVar22 = "inconsistent chromaticities";
                goto LAB_003a64fa;
              }
            }
          }
        }
      }
    }
  }
LAB_003a64d1:
  *(byte *)(param_2 + 0x4b) = *(byte *)(param_2 + 0x4b) | 0x80;
  if (((byte)param_1[0x52] & 0x10) == 0) {
LAB_003a7033:
                    /* WARNING: Subroutine does not return */
    png_err(param_1);
  }
  if (((*(uint *)(param_1 + 0x4c) & 0x8000) == 0) || (*(int *)(param_1 + 0x138) == 0)) {
    pcVar22 = "invalid chromaticities";
LAB_003a651a:
    png_warning((long)param_1,pcVar22);
    return;
  }
  pcVar22 = "invalid chromaticities";
LAB_003a64fa:
  png_chunk_warning((long)param_1,(long)pcVar22);
  return;
}


