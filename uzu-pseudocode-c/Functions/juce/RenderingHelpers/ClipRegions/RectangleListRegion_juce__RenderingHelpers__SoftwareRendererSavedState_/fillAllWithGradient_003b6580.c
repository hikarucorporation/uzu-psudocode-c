// Function : fillAllWithGradient
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b6580
// Prototype: undefined fillAllWithGradient(RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long param_1, ColourGradient * param_2, float * param_3, char param_4)
// Body     : 003b6580 - 003b8551


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillAllWithGradient(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::ColourGradient&, juce::AffineTransform const&, bool) const */

void __thiscall
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillAllWithGradient
          (RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
          long param_1,ColourGradient *param_2,float *param_3,char param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  uint uVar8;
  void *__ptr;
  int iVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  float *pfVar13;
  byte *pbVar14;
  int iVar15;
  double dVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  char cVar22;
  long lVar23;
  long lVar24;
  byte *pbVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  double dVar37;
  double local_1a0;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  int local_104;
  double local_100;
  double local_f8;
  char local_f0;
  char local_ef;
  long local_d8 [2];
  int local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  long *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  int *local_58;
  int *local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  iVar15 = *(int *)(param_2 + 0x24) * 0x100 + -0x100;
  if (iVar15 < 1) {
    iVar15 = 1;
  }
  fVar30 = hypotf((param_3[2] + *param_3 * *(float *)param_2 + param_3[1] * *(float *)(param_2 + 4))
                  - (param_3[2] +
                    *param_3 * *(float *)(param_2 + 8) + param_3[1] * *(float *)(param_2 + 0xc)),
                  (param_3[5] +
                  param_3[3] * *(float *)param_2 + param_3[4] * *(float *)(param_2 + 4)) -
                  (param_3[5] +
                  param_3[3] * *(float *)(param_2 + 8) + param_3[4] * *(float *)(param_2 + 0xc)));
  iVar1 = (int)fVar30 * 3;
  if (iVar1 <= iVar15) {
    iVar15 = iVar1;
  }
  if ((int)fVar30 < 1) {
    iVar15 = 1;
  }
  if (iVar15 == 0) {
    __ptr = (void *)0x0;
    ColourGradient::createLookupTable(param_2,0,0);
    plVar20 = *(long **)(param_1 + 0x68);
    if (plVar20 == (long *)0x0) goto LAB_003b6691;
LAB_003b666b:
    local_bc = (undefined4)plVar20[2];
    local_b8 = *(undefined4 *)((long)plVar20 + 0x14);
  }
  else {
    __ptr = malloc((long)iVar15 << 2);
    ColourGradient::createLookupTable(param_2,(long)__ptr,iVar15);
    plVar20 = *(long **)(param_1 + 0x68);
    if (plVar20 != (long *)0x0) goto LAB_003b666b;
LAB_003b6691:
    local_bc = 0;
    local_b8 = 0;
  }
  local_b0 = (long *)0x0;
                    /* try { // try from 003b66b4 to 003b66c8 has its CatchHandler @ 003b8552 */
  (**(code **)(*plVar20 + 0x38))(plVar20,local_d8,0,0,2);
  if (local_c8 != 1) {
    if (local_c8 != 2) {
      if (param_2[0x10] == (ColourGradient)0x0) {
        GradientPixelIterators::Linear::Linear
                  ((Linear *)&local_118,(undefined8 *)param_2,param_3,__ptr,iVar15 + -1);
        dVar37 = DAT_005d9098;
        if ((long)*(int *)(this + 0x1c) != 0) {
          piVar12 = *(int **)(this + 0x10);
          piVar10 = piVar12 + (long)*(int *)(this + 0x1c) * 4;
          if (local_f0 == '\0') {
            dVar16 = (double)(ulong)(uint)local_108;
            do {
              if (0 < piVar12[3]) {
                iVar15 = *piVar12;
                iVar1 = piVar12[2];
                lVar24 = (long)piVar12[1];
                lVar21 = (long)local_c0;
                lVar23 = (long)local_c4;
                lVar11 = (long)(piVar12[3] + piVar12[1]);
                if (local_ef == '\0') {
                  pbVar25 = (byte *)(local_d8[0] + lVar24 * lVar23 + lVar21 * iVar15);
                  do {
                    dVar16 = ((double)(int)lVar24 - local_f8) * local_100 + dVar37;
                    iVar28 = iVar15 * local_104 - SUB84(dVar16,0);
                    pbVar14 = pbVar25;
                    iVar17 = iVar1 + 1;
                    do {
                      fVar30 = (float)(iVar28 >> 0xc);
                      if ((int)fStack_110 < iVar28 >> 0xc) {
                        fVar30 = fStack_110;
                      }
                      if (iVar28 < 0) {
                        fVar30 = 0.0;
                      }
                      uVar8 = *(uint *)(CONCAT44(fStack_114,local_118) + (long)(int)fVar30 * 4);
                      *pbVar14 = (char)((0x100 - (uVar8 >> 0x18)) * (uint)*pbVar14 >> 8) +
                                 (char)(uVar8 >> 0x18);
                      iVar17 = iVar17 + -1;
                      pbVar14 = pbVar14 + lVar21;
                      iVar28 = iVar28 + local_104;
                    } while (1 < iVar17);
                    lVar24 = lVar24 + 1;
                    pbVar25 = pbVar25 + lVar23;
                  } while (lVar24 < lVar11);
                }
                else {
                  pbVar25 = (byte *)(local_d8[0] + lVar24 * lVar23 + lVar21 * iVar15);
                  do {
                    pbVar14 = pbVar25;
                    iVar17 = iVar15 * local_104 - SUB84(dVar16,0);
                    iVar28 = iVar1 + 1;
                    do {
                      fVar30 = (float)(iVar17 >> 0xc);
                      if ((int)fStack_110 < iVar17 >> 0xc) {
                        fVar30 = fStack_110;
                      }
                      if (iVar17 < 0) {
                        fVar30 = 0.0;
                      }
                      uVar8 = *(uint *)(CONCAT44(fStack_114,local_118) + (long)(int)fVar30 * 4);
                      *pbVar14 = (char)((0x100 - (uVar8 >> 0x18)) * (uint)*pbVar14 >> 8) +
                                 (char)(uVar8 >> 0x18);
                      iVar28 = iVar28 + -1;
                      pbVar14 = pbVar14 + lVar21;
                      iVar17 = iVar17 + local_104;
                    } while (1 < iVar28);
                    lVar24 = lVar24 + 1;
                    pbVar25 = pbVar25 + lVar23;
                  } while (lVar24 < lVar11);
                }
              }
              piVar12 = piVar12 + 4;
            } while (piVar12 != piVar10);
          }
          else {
            do {
              iVar15 = piVar12[3];
              if (0 < iVar15) {
                uVar8 = piVar12[2];
                iVar1 = piVar12[1];
                lVar23 = (long)iVar1;
                lVar24 = (long)local_c0;
                lVar11 = *piVar12 * lVar24;
                do {
                  lVar21 = lVar23 * local_c4 + local_d8[0];
                  iVar17 = local_104 * (int)lVar23 - (int)local_108;
                  fVar30 = (float)(iVar17 >> 0xc);
                  if ((int)fStack_110 < (int)fVar30) {
                    fVar30 = fStack_110;
                  }
                  if (iVar17 < 0) {
                    fVar30 = 0.0;
                  }
                  uVar19 = *(uint *)(CONCAT44(fStack_114,local_118) + (long)(int)fVar30 * 4);
                  iVar17 = 0x100 - (uVar19 >> 0x18);
                  cVar22 = (char)(uVar19 >> 0x18);
                  *(char *)(lVar11 + lVar21) =
                       (char)((uint)*(byte *)(lVar11 + lVar21) * iVar17 >> 8) + cVar22;
                  if (1 < (int)uVar8) {
                    lVar21 = lVar21 + lVar11;
                    uVar19 = uVar8;
                    if ((uVar8 & 1) == 0) {
                      *(char *)(lVar21 + lVar24) =
                           (char)((uint)*(byte *)(lVar21 + lVar24) * iVar17 >> 8) + cVar22;
                      lVar21 = lVar21 + lVar24;
                      uVar19 = uVar8 - 1;
                    }
                    if (uVar8 != 2) {
                      iVar28 = uVar19 + 2;
                      do {
                        *(char *)(lVar21 + lVar24) =
                             (char)((uint)*(byte *)(lVar21 + lVar24) * iVar17 >> 8) + cVar22;
                        *(char *)(lVar21 + lVar24 * 2) =
                             (char)((uint)*(byte *)(lVar21 + lVar24 * 2) * iVar17 >> 8) + cVar22;
                        lVar21 = lVar21 + lVar24 * 2;
                        iVar28 = iVar28 + -2;
                      } while (3 < iVar28);
                    }
                  }
                  lVar23 = lVar23 + 1;
                } while (lVar23 < iVar15 + iVar1);
              }
              piVar12 = piVar12 + 4;
            } while (piVar12 != piVar10);
          }
        }
        goto LAB_003b8525;
      }
      iVar15 = iVar15 + -1;
      fVar30 = *(float *)param_2;
      fVar32 = *(float *)(param_2 + 4);
      fVar31 = fVar30 - (float)*(undefined8 *)(param_2 + 8);
      fVar33 = fVar32 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      dVar37 = (double)(fVar31 * fVar31 + fVar33 * fVar33);
      if (dVar37 < 0.0) {
        dVar16 = sqrt(dVar37);
      }
      else {
        dVar16 = SQRT(dVar37);
      }
      dVar5 = (double)fVar30;
      dVar2 = (double)fVar32;
      uVar34 = SUB84(DAT_005d9098,0);
      uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
      if (param_4 != '\0') {
        if ((long)*(int *)(this + 0x1c) != 0) {
          piVar12 = *(int **)(this + 0x10);
          local_a8._0_8_ = piVar12 + (long)*(int *)(this + 0x1c) * 4;
          do {
            iVar1 = piVar12[3];
            if (0 < iVar1) {
              iVar17 = *piVar12;
              iVar28 = piVar12[2];
              iVar9 = piVar12[1];
              lVar11 = (long)iVar9;
              do {
                dVar6 = (double)(int)lVar11 - dVar2;
                lVar24 = (long)local_c0;
                pbVar25 = (byte *)(local_c4 * lVar11 + lVar24 * iVar17 + local_d8[0]);
                iVar27 = iVar28;
                iVar29 = iVar17;
                while( true ) {
                  dVar3 = (double)iVar29 - dVar5;
                  dVar3 = dVar3 * dVar3 + dVar6 * dVar6;
                  iVar18 = iVar15;
                  if (dVar3 < dVar37) {
                    if (dVar3 < 0.0) {
                      dVar3 = sqrt(dVar3);
                      uVar34 = SUB84(DAT_005d9098,0);
                      uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                    }
                    else {
                      dVar3 = SQRT(dVar3);
                    }
                    iVar18 = SUB84(dVar3 * ((double)iVar15 / dVar16) +
                                   (double)CONCAT44(uVar35,uVar34),0);
                  }
                  uVar8 = *(uint *)((long)__ptr + (long)iVar18 * 4);
                  *pbVar25 = (char)((0x100 - (uVar8 >> 0x18)) * (uint)*pbVar25 >> 8) +
                             (char)(uVar8 >> 0x18);
                  if (iVar27 < 2) break;
                  iVar27 = iVar27 + -1;
                  pbVar25 = pbVar25 + lVar24;
                  iVar29 = iVar29 + 1;
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 < iVar1 + iVar9);
            }
            piVar12 = piVar12 + 4;
          } while (piVar12 != (int *)local_a8._0_8_);
        }
        goto LAB_003b8525;
      }
      fVar30 = *param_3;
      fVar32 = param_3[1];
      fVar31 = param_3[4];
      fVar33 = param_3[3];
      _local_78 = ZEXT416((uint)fVar32);
      _local_98 = ZEXT416((uint)fVar31);
      fVar36 = fVar30 * fVar31 - fVar33 * fVar32;
      dVar6 = (double)fVar36;
      uVar8 = _DAT_005d91b0 & SUB84(dVar6,0);
      uVar19 = _UNK_005d91b4 & (uint)((ulong)dVar6 >> 0x20);
      if ((double)CONCAT44(uVar19,uVar8) == DAT_005d94e0) {
        if ((fVar36 == 0.0) && (!NAN(fVar36))) goto LAB_003b7926;
LAB_003b7161:
        dVar6 = _DAT_005d9000 / dVar6;
        fVar33 = (float)((double)(float)((uint)fVar33 ^ _DAT_006524b0) * dVar6);
        local_78._0_4_ = (BADTYPE)((double)(float)((uint)fVar32 ^ _DAT_006524b0) * dVar6);
        local_78._4_4_ = (BADTYPE)((double)fVar30 * dVar6);
        fVar30 = param_3[5];
        fVar32 = (float)((uint)param_3[2] ^ _DAT_006524b0);
        fStack_80 = fVar32 * 0.0 - fVar30 * 0.0;
        fStack_7c = fVar32 * 0.0 - fVar30 * 0.0;
        local_88 = (int *)CONCAT44(fVar32 * fVar33 - fVar30 * (float)local_78._4_4_,
                                   fVar32 * (float)((double)fVar31 * dVar6) -
                                   fVar30 * (float)local_78._0_4_);
        _fStack_70 = 0;
        local_98._4_4_ = local_78._4_4_;
        local_98._0_4_ = local_78._4_4_;
        fStack_90 = (float)local_78._4_4_;
        fStack_8c = (float)local_78._4_4_;
        fVar30 = (float)((double)fVar31 * dVar6);
      }
      else {
        if ((DAT_005db368 < (double)CONCAT44(uVar19,uVar8)) &&
           (DAT_005db370 * (double)CONCAT44(uVar19,uVar8) < (double)CONCAT44(uVar19,uVar8)))
        goto LAB_003b7161;
LAB_003b7926:
        fStack_80 = param_3[4];
        fStack_7c = param_3[5];
        local_88 = (int *)CONCAT44(fStack_7c,param_3[2]);
      }
      if ((long)*(int *)(this + 0x1c) != 0) {
        piVar12 = *(int **)(this + 0x10);
        local_50 = piVar12 + (long)*(int *)(this + 0x1c) * 4;
        local_48 = local_88._4_4_;
        fStack_44 = local_88._4_4_;
        fStack_40 = local_88._4_4_;
        fStack_3c = local_88._4_4_;
        do {
          local_58 = piVar12;
          if (0 < piVar12[3]) {
            iVar1 = *piVar12;
            iVar17 = piVar12[2];
            local_a8._0_8_ = (long)iVar1;
            lVar11 = (long)piVar12[1];
            local_68 = (long)(piVar12[3] + piVar12[1]);
            do {
              fVar31 = (float)local_78._0_4_ * (float)(int)lVar11 + (float)local_88;
              fVar32 = (float)(int)lVar11 * (float)local_98._0_4_ + local_48;
              lVar24 = (long)local_c0;
              pbVar25 = (byte *)(local_c4 * lVar11 + lVar24 * local_a8._0_8_ + local_d8[0]);
              iVar28 = iVar17;
              iVar9 = iVar1;
              while( true ) {
                dVar6 = (double)fVar33 * (double)iVar9 + ((double)fVar32 - dVar2);
                dVar3 = (double)iVar9 * (double)fVar30 + ((double)fVar31 - dVar5);
                dVar6 = dVar6 * dVar6 + dVar3 * dVar3;
                iVar27 = iVar15;
                if (dVar6 < dVar37) {
                  if (dVar6 < 0.0) {
                    dVar6 = sqrt(dVar6);
                    uVar34 = SUB84(DAT_005d9098,0);
                    uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                  }
                  else {
                    dVar6 = SQRT(dVar6);
                  }
                  iVar27 = SUB84(dVar6 * ((double)iVar15 / dVar16) + (double)CONCAT44(uVar35,uVar34)
                                 ,0);
                  if (iVar15 <= iVar27) {
                    iVar27 = iVar15;
                  }
                }
                uVar8 = *(uint *)((long)__ptr + (long)iVar27 * 4);
                *pbVar25 = (char)((0x100 - (uVar8 >> 0x18)) * (uint)*pbVar25 >> 8) +
                           (char)(uVar8 >> 0x18);
                if (iVar28 < 2) break;
                iVar28 = iVar28 + -1;
                pbVar25 = pbVar25 + lVar24;
                iVar9 = iVar9 + 1;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < local_68);
          }
          piVar12 = local_58 + 4;
        } while (piVar12 != local_50);
      }
      goto LAB_003b8525;
    }
    if (param_2[0x10] == (ColourGradient)0x0) {
      GradientPixelIterators::Linear::Linear
                ((Linear *)&local_118,(undefined8 *)param_2,param_3,__ptr,iVar15 + -1);
      dVar37 = DAT_005d9098;
      if ((long)*(int *)(this + 0x1c) != 0) {
        piVar12 = *(int **)(this + 0x10);
        piVar10 = piVar12 + (long)*(int *)(this + 0x1c) * 4;
        dVar16 = (double)(ulong)(uint)local_108;
        do {
          iVar15 = piVar12[3];
          if (0 < iVar15) {
            iVar1 = *piVar12;
            iVar17 = piVar12[2];
            iVar28 = piVar12[1];
            lVar11 = (long)iVar28;
            do {
              if (local_f0 == '\0') {
                if (local_ef == '\0') {
                  dVar16 = ((double)(int)lVar11 - local_f8) * local_100 + dVar37;
                }
              }
              else {
                iVar9 = local_104 * (int)lVar11 - SUB84(dVar16,0);
                fVar30 = (float)(iVar9 >> 0xc);
                if ((int)fStack_110 < (int)fVar30) {
                  fVar30 = fStack_110;
                }
                if (iVar9 < 0) {
                  fVar30 = 0.0;
                }
                fStack_10c = *(float *)(CONCAT44(fStack_114,local_118) + (long)(int)fVar30 * 4);
              }
              puVar26 = (uint *)(local_c4 * lVar11 + local_d8[0] + (long)local_c0 * (long)iVar1);
              iVar27 = local_104 * iVar1 - SUB84(dVar16,0);
              iVar9 = iVar17;
              while( true ) {
                pfVar13 = &fStack_10c;
                if (local_f0 == '\0') {
                  fVar30 = (float)(iVar27 >> 0xc);
                  if ((int)fStack_110 < iVar27 >> 0xc) {
                    fVar30 = fStack_110;
                  }
                  if (iVar27 < 0) {
                    fVar30 = 0.0;
                  }
                  pfVar13 = (float *)(CONCAT44(fStack_114,local_118) + (long)(int)fVar30 * 4);
                }
                fVar30 = *pfVar13;
                iVar29 = 0x100 - ((uint)fVar30 >> 0x18);
                uVar8 = ((*puVar26 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) + ((uint)fVar30 & 0xff00ff)
                ;
                uVar19 = ((*puVar26 >> 8 & 0xff00ff) * iVar29 >> 8 & 0xff00ff) +
                         ((uint)fVar30 >> 8 & 0xff00ff);
                *puVar26 = ((0x100 - (uVar19 >> 8 & 0x10001) | uVar19) & 0xff00ff) << 8 |
                           (0x100 - (uVar8 >> 8 & 0x10001) | uVar8) & 0xff00ff;
                if (iVar9 < 2) break;
                iVar9 = iVar9 + -1;
                puVar26 = (uint *)((long)puVar26 + (long)local_c0);
                iVar27 = iVar27 + local_104;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < iVar15 + iVar28);
          }
          piVar12 = piVar12 + 4;
        } while (piVar12 != piVar10);
      }
      goto LAB_003b8525;
    }
    if (param_4 != '\0') {
      fVar31 = (float)*(undefined8 *)param_2;
      fVar33 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar30 = fVar31 - (float)*(undefined8 *)(param_2 + 8);
      fVar32 = fVar33 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
      dVar37 = (double)(fVar30 * fVar30 + fVar32 * fVar32);
      if (dVar37 < 0.0) {
        dVar16 = sqrt(dVar37);
      }
      else {
        dVar16 = SQRT(dVar37);
      }
      if ((long)*(int *)(this + 0x1c) != 0) {
        piVar12 = *(int **)(this + 0x10);
        local_a8._0_8_ = piVar12 + (long)*(int *)(this + 0x1c) * 4;
        uVar34 = SUB84(DAT_005d9098,0);
        uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
        do {
          iVar1 = piVar12[3];
          if (0 < iVar1) {
            iVar17 = *piVar12;
            iVar28 = piVar12[2];
            iVar9 = piVar12[1];
            lVar11 = (long)iVar9;
            do {
              dVar5 = (double)(int)lVar11 - (double)fVar33;
              lVar24 = (long)local_c0;
              puVar26 = (uint *)(lVar24 * iVar17 + local_c4 * lVar11 + local_d8[0]);
              iVar27 = iVar28;
              iVar29 = iVar17;
              while( true ) {
                dVar2 = (double)iVar29 - (double)fVar31;
                dVar2 = dVar2 * dVar2 + dVar5 * dVar5;
                iVar18 = iVar15 + -1;
                if (dVar2 < dVar37) {
                  if (dVar2 < 0.0) {
                    dVar2 = sqrt(dVar2);
                    uVar34 = SUB84(DAT_005d9098,0);
                    uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                  }
                  else {
                    dVar2 = SQRT(dVar2);
                  }
                  iVar18 = SUB84(dVar2 * ((double)(iVar15 + -1) / dVar16) +
                                 (double)CONCAT44(uVar35,uVar34),0);
                }
                uVar8 = *(uint *)((long)__ptr + (long)iVar18 * 4);
                iVar18 = 0x100 - (uVar8 >> 0x18);
                uVar19 = ((*puVar26 & 0xff00ff) * iVar18 >> 8 & 0xff00ff) + (uVar8 & 0xff00ff);
                uVar8 = ((*puVar26 >> 8 & 0xff00ff) * iVar18 >> 8 & 0xff00ff) +
                        (uVar8 >> 8 & 0xff00ff);
                *puVar26 = ((0x100 - (uVar8 >> 8 & 0x10001) | uVar8) & 0xff00ff) << 8 |
                           (0x100 - (uVar19 >> 8 & 0x10001) | uVar19) & 0xff00ff;
                if (iVar27 < 2) break;
                iVar27 = iVar27 + -1;
                puVar26 = (uint *)((long)puVar26 + lVar24);
                iVar29 = iVar29 + 1;
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < iVar1 + iVar9);
          }
          piVar12 = piVar12 + 4;
        } while (piVar12 != (int *)local_a8._0_8_);
      }
      goto LAB_003b8525;
    }
    fVar31 = (float)*(undefined8 *)param_2;
    fVar33 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar30 = fVar31 - (float)*(undefined8 *)(param_2 + 8);
    fVar32 = fVar33 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    dVar37 = (double)(fVar30 * fVar30 + fVar32 * fVar32);
    if (dVar37 < 0.0) {
      dVar16 = sqrt(dVar37);
    }
    else {
      dVar16 = SQRT(dVar37);
    }
    fVar30 = *param_3;
    fVar32 = fVar30 * param_3[4] - param_3[3] * param_3[1];
    dVar5 = (double)fVar32;
    uVar8 = _DAT_005d91b0 & SUB84(dVar5,0);
    uVar19 = _UNK_005d91b4 & (uint)((ulong)dVar5 >> 0x20);
    if ((double)CONCAT44(uVar19,uVar8) == DAT_005d94e0) {
      if ((fVar32 == 0.0) && (!NAN(fVar32))) goto LAB_003b7b87;
LAB_003b771d:
      dVar5 = _DAT_005d9000 / dVar5;
      dVar2 = (double)fVar30;
      fStack_110 = (float)(dVar5 * (double)(float)((uint)param_3[3] ^ _DAT_006524b0));
      fVar30 = (float)(dVar5 * (double)param_3[4]);
      local_118 = (float)((double)(float)((uint)param_3[1] ^ _DAT_006524b0) * dVar5);
      fStack_10c = (float)(dVar2 * dVar5);
      fStack_114 = fVar30 * (float)((uint)param_3[2] ^ _DAT_006524b0) - local_118 * param_3[5];
      local_108 = (float)((uint)param_3[2] ^ _DAT_006524b0) * fStack_110 - param_3[5] * fStack_10c;
    }
    else {
      if ((DAT_005db368 < (double)CONCAT44(uVar19,uVar8)) &&
         (DAT_005db370 * (double)CONCAT44(uVar19,uVar8) < (double)CONCAT44(uVar19,uVar8)))
      goto LAB_003b771d;
LAB_003b7b87:
      local_108 = param_3[5];
      uVar7 = *(undefined8 *)(param_3 + 1);
      local_118 = (float)uVar7;
      fStack_114 = (float)((ulong)uVar7 >> 0x20);
      fStack_110 = (float)*(undefined8 *)(param_3 + 3);
      fStack_10c = (float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20);
    }
    if ((long)*(int *)(this + 0x1c) != 0) {
      iVar15 = iVar15 + -1;
      dVar5 = (double)fVar33;
      local_a8._8_4_ = SUB84(dVar5,0);
      local_a8._0_8_ = (double)fVar31;
      local_a8._12_4_ = (int)((ulong)dVar5 >> 0x20);
      dVar5 = (double)fStack_110;
      piVar12 = *(int **)(this + 0x10);
      local_88 = piVar12 + (long)*(int *)(this + 0x1c) * 4;
      local_78._4_4_ = fStack_10c;
      local_78._0_4_ = local_118;
      fStack_70 = fStack_110;
      fStack_6c = fStack_10c;
      local_68 = CONCAT44(local_108,fStack_114);
      fStack_60 = fStack_10c;
      fStack_5c = local_108;
      uVar34 = SUB84(DAT_005d9098,0);
      uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
      do {
        local_98 = (undefined1  [8])piVar12;
        iVar1 = piVar12[3];
        if (0 < iVar1) {
          iVar17 = *piVar12;
          iVar28 = piVar12[2];
          iVar9 = piVar12[1];
          lVar11 = (long)iVar9;
          do {
            dVar2 = (double)((float)(int)lVar11 * (float)local_78._0_4_ + (float)local_68) -
                    (double)local_a8._0_8_;
            dVar6 = (double)((float)(int)lVar11 * (float)local_78._4_4_ + local_68._4_4_) -
                    (double)local_a8._8_8_;
            lVar24 = (long)local_c0;
            puVar26 = (uint *)(lVar24 * iVar17 + local_c4 * lVar11 + local_d8[0]);
            iVar27 = iVar28;
            iVar29 = iVar17;
            while( true ) {
              dVar3 = dVar5 * (double)iVar29 + dVar6;
              dVar4 = (double)iVar29 * (double)fVar30 + dVar2;
              dVar3 = dVar3 * dVar3 + dVar4 * dVar4;
              iVar18 = iVar15;
              if (dVar3 < dVar37) {
                if (dVar3 < 0.0) {
                  dVar3 = sqrt(dVar3);
                  uVar34 = SUB84(DAT_005d9098,0);
                  uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                }
                else {
                  dVar3 = SQRT(dVar3);
                }
                iVar18 = SUB84(dVar3 * ((double)iVar15 / dVar16) + (double)CONCAT44(uVar35,uVar34),0
                              );
                if (iVar15 <= iVar18) {
                  iVar18 = iVar15;
                }
              }
              uVar8 = *(uint *)((long)__ptr + (long)iVar18 * 4);
              iVar18 = 0x100 - (uVar8 >> 0x18);
              uVar19 = ((*puVar26 & 0xff00ff) * iVar18 >> 8 & 0xff00ff) + (uVar8 & 0xff00ff);
              uVar8 = ((*puVar26 >> 8 & 0xff00ff) * iVar18 >> 8 & 0xff00ff) +
                      (uVar8 >> 8 & 0xff00ff);
              *puVar26 = ((0x100 - (uVar8 >> 8 & 0x10001) | uVar8) & 0xff00ff) << 8 |
                         (0x100 - (uVar19 >> 8 & 0x10001) | uVar19) & 0xff00ff;
              if (iVar27 < 2) break;
              iVar27 = iVar27 + -1;
              puVar26 = (uint *)((long)puVar26 + lVar24);
              iVar29 = iVar29 + 1;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < iVar1 + iVar9);
        }
        piVar12 = (int *)((long)local_98 + 0x10);
      } while (piVar12 != local_88);
    }
    goto LAB_003b8525;
  }
  if (param_2[0x10] == (ColourGradient)0x0) {
    GradientPixelIterators::Linear::Linear
              ((Linear *)&local_118,(undefined8 *)param_2,param_3,__ptr,iVar15 + -1);
    dVar37 = DAT_005d9098;
    if ((long)*(int *)(this + 0x1c) != 0) {
      piVar12 = *(int **)(this + 0x10);
      piVar10 = piVar12 + (long)*(int *)(this + 0x1c) * 4;
      if (local_f0 == '\0') {
        local_1a0 = (double)(ulong)(uint)local_108;
        do {
          iVar15 = piVar12[3];
          if (0 < iVar15) {
            iVar1 = *piVar12;
            iVar17 = piVar12[2];
            iVar28 = piVar12[1];
            lVar11 = (long)iVar28;
            pbVar25 = (byte *)(local_d8[0] + lVar11 * local_c4 + (long)iVar1 * (long)local_c0 + 2);
            do {
              if (local_ef == '\0') {
                local_1a0 = ((double)(int)lVar11 - local_f8) * local_100 + dVar37;
              }
              iVar27 = local_104 * iVar1 - local_1a0._0_4_;
              pbVar14 = pbVar25;
              iVar9 = iVar17 + 1;
              do {
                fVar30 = (float)(iVar27 >> 0xc);
                if ((int)fStack_110 < iVar27 >> 0xc) {
                  fVar30 = fStack_110;
                }
                if (iVar27 < 0) {
                  fVar30 = 0.0;
                }
                uVar8 = *(uint *)(CONCAT44(fStack_114,local_118) + (long)(int)fVar30 * 4);
                iVar29 = 0x100 - (uVar8 >> 0x18);
                uVar19 = (((uint)*pbVar14 << 0x10 | (uint)pbVar14[-2]) * iVar29 >> 8 & 0xff00ff) +
                         (uVar8 & 0xff00ff);
                uVar19 = 0x100 - (uVar19 >> 8 & 0x10001) | uVar19;
                iVar29 = ((uint)pbVar14[-1] * iVar29 >> 8) + (uVar8 >> 8 & 0xff00ff);
                pbVar14[-1] = -(char)((uint)iVar29 >> 8) | (byte)iVar29;
                *pbVar14 = (byte)(uVar19 >> 0x10);
                pbVar14[-2] = (byte)uVar19;
                iVar9 = iVar9 + -1;
                pbVar14 = pbVar14 + local_c0;
                iVar27 = iVar27 + local_104;
              } while (1 < iVar9);
              lVar11 = lVar11 + 1;
              pbVar25 = pbVar25 + local_c4;
            } while (lVar11 < iVar15 + iVar28);
          }
          piVar12 = piVar12 + 4;
        } while (piVar12 != piVar10);
      }
      else {
        do {
          iVar15 = piVar12[3];
          if (0 < iVar15) {
            iVar1 = piVar12[2];
            iVar17 = piVar12[1];
            lVar11 = (long)iVar17;
            pbVar25 = (byte *)(local_d8[0] + lVar11 * local_c4 + (long)*piVar12 * (long)local_c0 + 2
                              );
            do {
              iVar28 = local_104 * (int)lVar11 - (int)local_108;
              fVar30 = (float)(iVar28 >> 0xc);
              if ((int)fStack_110 < (int)fVar30) {
                fVar30 = fStack_110;
              }
              if (iVar28 < 0) {
                fVar30 = 0.0;
              }
              uVar8 = *(uint *)(CONCAT44(fStack_114,local_118) + (long)(int)fVar30 * 4);
              pbVar14 = pbVar25;
              iVar28 = iVar1;
              while( true ) {
                iVar9 = 0x100 - (uVar8 >> 0x18);
                uVar19 = (((uint)*pbVar14 << 0x10 | (uint)pbVar14[-2]) * iVar9 >> 8 & 0xff00ff) +
                         (uVar8 & 0xff00ff);
                uVar19 = 0x100 - (uVar19 >> 8 & 0x10001) | uVar19;
                iVar9 = ((uint)pbVar14[-1] * iVar9 >> 8) + (uVar8 >> 8 & 0xff00ff);
                pbVar14[-1] = -(char)((uint)iVar9 >> 8) | (byte)iVar9;
                *pbVar14 = (byte)(uVar19 >> 0x10);
                pbVar14[-2] = (byte)uVar19;
                if (iVar28 < 2) break;
                iVar28 = iVar28 + -1;
                pbVar14 = pbVar14 + local_c0;
              }
              lVar11 = lVar11 + 1;
              pbVar25 = pbVar25 + local_c4;
            } while (lVar11 < iVar15 + iVar17);
          }
          piVar12 = piVar12 + 4;
        } while (piVar12 != piVar10);
      }
    }
    goto LAB_003b8525;
  }
  if (param_4 != '\0') {
    fVar31 = (float)*(undefined8 *)param_2;
    fVar33 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar30 = fVar31 - (float)*(undefined8 *)(param_2 + 8);
    fVar32 = fVar33 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    dVar37 = (double)(fVar30 * fVar30 + fVar32 * fVar32);
    if (dVar37 < 0.0) {
      dVar16 = sqrt(dVar37);
    }
    else {
      dVar16 = SQRT(dVar37);
    }
    if ((long)*(int *)(this + 0x1c) != 0) {
      piVar12 = *(int **)(this + 0x10);
      local_a8._0_8_ = piVar12 + (long)*(int *)(this + 0x1c) * 4;
      uVar34 = SUB84(DAT_005d9098,0);
      uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
      do {
        iVar1 = piVar12[3];
        if (0 < iVar1) {
          iVar17 = *piVar12;
          iVar28 = piVar12[2];
          iVar9 = piVar12[1];
          lVar11 = (long)iVar9;
          do {
            dVar5 = (double)(int)lVar11 - (double)fVar33;
            lVar24 = (long)local_c0;
            pbVar25 = (byte *)(local_d8[0] + local_c4 * lVar11 + lVar24 * iVar17 + 2);
            iVar27 = iVar28;
            iVar29 = iVar17;
            while( true ) {
              dVar2 = (double)iVar29 - (double)fVar31;
              dVar2 = dVar2 * dVar2 + dVar5 * dVar5;
              iVar18 = iVar15 + -1;
              if (dVar2 < dVar37) {
                if (dVar2 < 0.0) {
                  dVar2 = sqrt(dVar2);
                  uVar34 = SUB84(DAT_005d9098,0);
                  uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
                }
                else {
                  dVar2 = SQRT(dVar2);
                }
                iVar18 = SUB84(dVar2 * ((double)(iVar15 + -1) / dVar16) +
                               (double)CONCAT44(uVar35,uVar34),0);
              }
              uVar8 = *(uint *)((long)__ptr + (long)iVar18 * 4);
              iVar18 = 0x100 - (uVar8 >> 0x18);
              uVar19 = (((uint)*pbVar25 << 0x10 | (uint)pbVar25[-2]) * iVar18 >> 8 & 0xff00ff) +
                       (uVar8 & 0xff00ff);
              uVar19 = 0x100 - (uVar19 >> 8 & 0x10001) | uVar19;
              iVar18 = ((uint)pbVar25[-1] * iVar18 >> 8) + (uVar8 >> 8 & 0xff00ff);
              pbVar25[-1] = -(char)((uint)iVar18 >> 8) | (byte)iVar18;
              *pbVar25 = (byte)(uVar19 >> 0x10);
              pbVar25[-2] = (byte)uVar19;
              if (iVar27 < 2) break;
              iVar27 = iVar27 + -1;
              pbVar25 = pbVar25 + lVar24;
              iVar29 = iVar29 + 1;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < iVar1 + iVar9);
        }
        piVar12 = piVar12 + 4;
      } while (piVar12 != (int *)local_a8._0_8_);
    }
    goto LAB_003b8525;
  }
  fVar31 = (float)*(undefined8 *)param_2;
  fVar33 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar30 = fVar31 - (float)*(undefined8 *)(param_2 + 8);
  fVar32 = fVar33 - (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  dVar37 = (double)(fVar30 * fVar30 + fVar32 * fVar32);
  if (dVar37 < 0.0) {
    dVar16 = sqrt(dVar37);
  }
  else {
    dVar16 = SQRT(dVar37);
  }
  fVar30 = *param_3;
  fVar32 = fVar30 * param_3[4] - param_3[3] * param_3[1];
  dVar5 = (double)fVar32;
  uVar8 = _DAT_005d91b0 & SUB84(dVar5,0);
  uVar19 = _UNK_005d91b4 & (uint)((ulong)dVar5 >> 0x20);
  if ((double)CONCAT44(uVar19,uVar8) == DAT_005d94e0) {
    if ((fVar32 == 0.0) && (!NAN(fVar32))) goto LAB_003b7e83;
LAB_003b7861:
    dVar5 = _DAT_005d9000 / dVar5;
    dVar2 = (double)fVar30;
    fStack_110 = (float)(dVar5 * (double)(float)((uint)param_3[3] ^ _DAT_006524b0));
    fVar30 = (float)(dVar5 * (double)param_3[4]);
    local_118 = (float)((double)(float)((uint)param_3[1] ^ _DAT_006524b0) * dVar5);
    fStack_10c = (float)(dVar2 * dVar5);
    fStack_114 = fVar30 * (float)((uint)param_3[2] ^ _DAT_006524b0) - local_118 * param_3[5];
    local_108 = (float)((uint)param_3[2] ^ _DAT_006524b0) * fStack_110 - param_3[5] * fStack_10c;
  }
  else {
    if ((DAT_005db368 < (double)CONCAT44(uVar19,uVar8)) &&
       (DAT_005db370 * (double)CONCAT44(uVar19,uVar8) < (double)CONCAT44(uVar19,uVar8)))
    goto LAB_003b7861;
LAB_003b7e83:
    local_108 = param_3[5];
    uVar7 = *(undefined8 *)(param_3 + 1);
    local_118 = (float)uVar7;
    fStack_114 = (float)((ulong)uVar7 >> 0x20);
    fStack_110 = (float)*(undefined8 *)(param_3 + 3);
    fStack_10c = (float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20);
  }
  if ((long)*(int *)(this + 0x1c) != 0) {
    iVar15 = iVar15 + -1;
    dVar5 = (double)fVar33;
    local_a8._8_4_ = SUB84(dVar5,0);
    local_a8._0_8_ = (double)fVar31;
    local_a8._12_4_ = (int)((ulong)dVar5 >> 0x20);
    dVar5 = (double)fStack_110;
    piVar12 = *(int **)(this + 0x10);
    local_88 = piVar12 + (long)*(int *)(this + 0x1c) * 4;
    local_78._4_4_ = fStack_10c;
    local_78._0_4_ = local_118;
    fStack_70 = fStack_110;
    fStack_6c = fStack_10c;
    local_68 = CONCAT44(local_108,fStack_114);
    fStack_60 = fStack_10c;
    fStack_5c = local_108;
    uVar34 = SUB84(DAT_005d9098,0);
    uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
    do {
      local_98 = (undefined1  [8])piVar12;
      iVar1 = piVar12[3];
      if (0 < iVar1) {
        iVar17 = *piVar12;
        iVar28 = piVar12[2];
        iVar9 = piVar12[1];
        lVar11 = (long)iVar9;
        do {
          dVar2 = (double)((float)(int)lVar11 * (float)local_78._0_4_ + (float)local_68) -
                  (double)local_a8._0_8_;
          dVar6 = (double)((float)(int)lVar11 * (float)local_78._4_4_ + local_68._4_4_) -
                  (double)local_a8._8_8_;
          lVar24 = (long)local_c0;
          pbVar25 = (byte *)(local_d8[0] + local_c4 * lVar11 + lVar24 * iVar17 + 2);
          iVar27 = iVar28;
          iVar29 = iVar17;
          while( true ) {
            dVar3 = dVar5 * (double)iVar29 + dVar6;
            dVar4 = (double)iVar29 * (double)fVar30 + dVar2;
            dVar3 = dVar3 * dVar3 + dVar4 * dVar4;
            iVar18 = iVar15;
            if (dVar3 < dVar37) {
              if (dVar3 < 0.0) {
                dVar3 = sqrt(dVar3);
                uVar34 = SUB84(DAT_005d9098,0);
                uVar35 = (undefined4)((ulong)DAT_005d9098 >> 0x20);
              }
              else {
                dVar3 = SQRT(dVar3);
              }
              iVar18 = SUB84(dVar3 * ((double)iVar15 / dVar16) + (double)CONCAT44(uVar35,uVar34),0);
              if (iVar15 <= iVar18) {
                iVar18 = iVar15;
              }
            }
            uVar8 = *(uint *)((long)__ptr + (long)iVar18 * 4);
            iVar18 = 0x100 - (uVar8 >> 0x18);
            uVar19 = (((uint)*pbVar25 << 0x10 | (uint)pbVar25[-2]) * iVar18 >> 8 & 0xff00ff) +
                     (uVar8 & 0xff00ff);
            uVar19 = 0x100 - (uVar19 >> 8 & 0x10001) | uVar19;
            iVar18 = ((uint)pbVar25[-1] * iVar18 >> 8) + (uVar8 >> 8 & 0xff00ff);
            pbVar25[-1] = -(char)((uint)iVar18 >> 8) | (byte)iVar18;
            *pbVar25 = (byte)(uVar19 >> 0x10);
            pbVar25[-2] = (byte)uVar19;
            if (iVar27 < 2) break;
            iVar27 = iVar27 + -1;
            pbVar25 = pbVar25 + lVar24;
            iVar29 = iVar29 + 1;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar1 + iVar9);
      }
      piVar12 = (int *)((long)local_98 + 0x10);
    } while (piVar12 != local_88);
  }
LAB_003b8525:
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 8))();
  }
  free(__ptr);
  return;
}


