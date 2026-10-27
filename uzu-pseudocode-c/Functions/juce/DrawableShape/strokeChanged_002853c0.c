// Function : strokeChanged
// Namespace: juce:DrawableShape
// Entry    : 002853c0
// Prototype: undefined strokeChanged(undefined8 param_1, undefined8 param_2, Component * param_3)
// Body     : 002853c0 - 00285c7b


/* WARNING: Unknown calling convention: __cdecl */
/* juce::DrawableShape::strokeChanged() */

void __cdecl
juce::DrawableShape::strokeChanged(undefined8 param_1,undefined8 param_2,Component *param_3)

{
  Path *pPVar1;
  undefined8 uVar2;
  Component *pCVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  float *pfVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  int iVar16;
  ulong uVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined4 uVar28;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  void *local_158;
  undefined8 uStack_150;
  float local_148 [4];
  undefined1 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  Component *local_d0;
  undefined1 local_c8 [12];
  float fStack_bc;
  undefined8 local_b8;
  Path *local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  void *local_78;
  void *local_70;
  undefined8 local_68;
  Path *local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  
  *(undefined8 *)(param_3 + 0x1b4) = 0;
  *(undefined8 *)(param_3 + 0x1bc) = 0;
  *(undefined4 *)(param_3 + 0x1c4) = 0;
  iVar14 = *(int *)(param_3 + 0x17c);
  pPVar1 = (Path *)(param_3 + 0x180);
  local_d0 = param_3;
  if (iVar14 == 0) {
    _local_c8 = ZEXT416(DAT_005d9038);
    local_b8 = 0x3f800000;
    uVar28 = 0;
    in_XMM1_Dc = 0.0;
    in_XMM1_Dd = 0.0;
    fVar21 = DAT_005d94d4;
    PathStrokeHelpers::createStroke
              (*(float *)(param_3 + 0x160),DAT_005d94d4,*(int *)(param_3 + 0x164),
               *(int *)(param_3 + 0x168),(Path *)(param_3 + 0x1a8),pPVar1,(float *)local_c8);
    param_2 = CONCAT44(uVar28,fVar21);
  }
  else if (0.0 < *(float *)(param_3 + 0x160)) {
    lVar8 = *(long *)(param_3 + 0x170);
    local_148[0] = 0.0;
    local_148[1] = 0.0;
    local_148[2] = 0.0;
    local_148[3] = 0.0;
    local_158 = (void *)0x0;
    uStack_150 = 0;
    local_138 = 1;
    uVar12 = (uint)local_b8;
    stack0xffffffffffffff40 = 0;
    local_b8 = CONCAT44(0xffffffff,uVar12 & 0xffffff00);
    local_a8 = ZEXT416(DAT_005d9038);
    local_98 = 0x3f800000;
    local_90 = *(undefined8 *)pPVar1;
    local_88 = 0x3cb851ec;
    local_80 = 0;
    local_7c = 1;
    local_b0 = pPVar1;
    local_60 = (Path *)(param_3 + 0x1a8);
    local_78 = malloc(0x80);
    local_68 = 0x20;
    uVar17 = 1;
    local_f8._0_4_ = 0.0;
    local_118._0_4_ = 0.0;
    fVar21 = 0.0;
    fVar25 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar22 = 0.0;
    fVar18 = 0.0;
    local_70 = local_78;
LAB_00285530:
    do {
      do {
        fVar5 = fVar18;
        fVar18 = (float)((int)fVar5 + 1);
        fVar24 = *(float *)(lVar8 + ((long)(int)fVar5 % (long)iVar14 & 0xffffffffU) * 4);
      } while (fVar24 <= 0.0);
      local_f8._0_4_ = (float)local_f8 + fVar24;
      if ((float)local_118 < (float)local_f8) {
        local_e8 = fVar5;
        if (((uint)fVar5 & 1) == 0) {
          do {
            pfVar7 = local_148;
            bVar15 = (byte)uVar17;
            uVar6 = PathFlatteningIterator::next((PathFlatteningIterator *)local_c8);
            if ((char)uVar6 == '\0') goto LAB_00285a6b;
            fVar21 = local_c8._0_4_;
            local_128._0_4_ = local_c8._4_4_;
            uVar28 = 0;
            uVar29 = 0;
            if ((uVar17 & 1) == 0) {
              local_128._4_4_ = (float)local_128;
              uStack_120._0_4_ = (float)local_128;
              uStack_120._4_4_ = (float)local_128;
              fVar25 = (float)local_128;
              uVar12 = (uint)uStack_150;
              if (uStack_150._4_4_ == 0) {
                local_148[0] = 0.0;
                local_148[1] = 0.0;
                local_148[2] = 0.0;
                local_148[3] = 0.0;
                if ((int)(uint)uStack_150 < 3) {
                  local_108 = local_c8._0_8_;
                  uStack_100 = 0;
                  uStack_120._4_4_ = (float)uStack_120;
                  local_158 = realloc(local_158,0x20);
                  iVar4 = uStack_150._4_4_;
                  uStack_150 = 8;
                  iVar9 = iVar4 + 3;
                  fVar21 = (float)local_108;
                  fVar25 = local_108._4_4_;
                  uVar28 = (undefined4)uStack_100;
                  uVar29 = uStack_100._4_4_;
                  uVar12 = 8;
                }
                else {
                  iVar4 = 0;
                  iVar9 = 3;
                }
                *(undefined8 *)((long)local_158 + (long)iVar4 * 4) = 0x47c35100;
                uStack_150 = CONCAT44(iVar9,(uint)uStack_150);
                *(undefined4 *)((long)local_158 + (long)iVar4 * 4 + 8) = 0;
                iVar4 = iVar9 + 3;
                if ((int)uVar12 < iVar4) goto LAB_002856ea;
              }
              else {
                iVar4 = uStack_150._4_4_ + 3;
                iVar9 = uStack_150._4_4_;
                if ((int)(uint)uStack_150 < iVar4) {
LAB_002856ea:
                  uVar13 = iVar9 + iVar4 / 2 + 0xb;
                  uVar11 = uVar13 & 0xfffffff8;
                  if (uVar12 != uVar11) {
                    local_108 = CONCAT44(fVar25,fVar21);
                    uStack_100 = CONCAT44(uVar29,uVar28);
                    if ((int)uVar11 < 1) {
                      free(local_158);
                      local_158 = (void *)0x0;
                    }
                    else {
                      local_158 = realloc(local_158,(ulong)uVar11 << 2);
                    }
                    fVar21 = (float)local_108;
                  }
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar13) & 0xfffffffffffffff8;
                  iVar4 = uStack_150._4_4_ + 3;
                  iVar9 = uStack_150._4_4_;
                }
              }
              lVar10 = (long)iVar9;
              *(undefined4 *)((long)local_158 + lVar10 * 4) = 0x47c35080;
              *(float *)((long)local_158 + lVar10 * 4 + 4) = fVar21;
              uStack_150 = CONCAT44(iVar4,(uint)uStack_150);
              *(float *)((long)local_158 + lVar10 * 4 + 8) = (float)local_128;
              pfVar7 = local_148;
              if (fVar21 < local_148[0]) {
LAB_002857da:
                *pfVar7 = fVar21;
              }
              else {
                pfVar7 = local_148 + 1;
                if (local_148[1] < fVar21) goto LAB_002857da;
              }
              if ((float)local_128 < local_148[2]) {
                pfVar7 = local_148 + 2;
                goto LAB_00285800;
              }
              pfVar7 = local_148 + 3;
              if (local_148[3] < (float)local_128) goto LAB_00285800;
            }
            else {
              if (uStack_150._4_4_ == 0) {
                local_148[1] = fVar21;
                local_148[0] = fVar21;
                local_148[3] = (float)local_128;
                local_148[2] = (float)local_128;
                iVar9 = 3;
                if ((int)(uint)uStack_150 < 3) goto LAB_00285680;
              }
              else {
                if (fVar21 < local_148[0]) {
LAB_002855e2:
                  *pfVar7 = fVar21;
                }
                else {
                  pfVar7 = local_148 + 1;
                  if (local_148[1] < fVar21) goto LAB_002855e2;
                }
                pfVar7 = local_148 + 2;
                if ((float)local_128 < local_148[2]) {
LAB_00285602:
                  *pfVar7 = (float)local_128;
                }
                else {
                  pfVar7 = local_148 + 3;
                  if (local_148[3] < (float)local_128) goto LAB_00285602;
                }
                iVar9 = uStack_150._4_4_ + 3;
                if ((int)(uint)uStack_150 < iVar9) {
LAB_00285680:
                  uVar12 = uStack_150._4_4_ + (uStack_150._4_4_ + 3) / 2 + 0xb;
                  uVar13 = uVar12 & 0xfffffff8;
                  if ((uint)uStack_150 != uVar13) {
                    local_108 = local_c8._0_8_;
                    uStack_100 = 0;
                    local_128 = CONCAT44((float)local_128,(float)local_128);
                    uStack_120 = CONCAT44((float)local_128,(float)local_128);
                    if ((int)uVar13 < 1) {
                      free(local_158);
                      local_158 = (void *)0x0;
                    }
                    else {
                      local_158 = realloc(local_158,(ulong)uVar13 << 2);
                    }
                    fVar21 = (float)local_108;
                  }
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar12) & 0xfffffffffffffff8;
                  iVar9 = uStack_150._4_4_ + 3;
                }
              }
              lVar10 = (long)uStack_150._4_4_;
              *(undefined4 *)((long)local_158 + lVar10 * 4) = 0x47c35100;
              *(float *)((long)local_158 + lVar10 * 4 + 4) = fVar21;
              uStack_150 = CONCAT44(iVar9,(uint)uStack_150);
              pfVar7 = (float *)((long)local_158 + lVar10 * 4 + 8);
LAB_00285800:
              *pfVar7 = (float)local_128;
            }
            fVar21 = local_c8._8_4_ - local_c8._0_4_;
            fVar25 = local_c8._12_4_ - local_c8._4_4_;
            local_128 = CONCAT44(fVar25,fVar21);
            uStack_120 = 0;
            fVar22 = hypotf(fVar21,fVar25);
            local_118._0_4_ = (float)local_118 + fVar22;
            uVar17 = local_b8 & 0xff;
          } while ((float)local_118 < (float)local_f8);
        }
        else {
          do {
            bVar15 = (byte)uVar17;
            uVar6 = PathFlatteningIterator::next((PathFlatteningIterator *)local_c8);
            if ((char)uVar6 == '\0') goto LAB_00285a6b;
            fVar21 = local_c8._8_4_ - local_c8._0_4_;
            fVar25 = local_c8._12_4_ - local_c8._4_4_;
            local_128 = CONCAT44(fVar25,fVar21);
            uStack_120 = 0;
            fVar22 = hypotf(fVar21,fVar25);
            local_118._0_4_ = (float)local_118 + fVar22;
            uVar17 = local_b8 & 0xff;
          } while ((float)local_118 < (float)local_f8);
        }
        fVar21 = (float)local_128;
        fVar25 = local_128._4_4_;
        fVar30 = (float)uStack_120;
        fVar31 = uStack_120._4_4_;
        fVar5 = local_e8;
      }
      pfVar7 = local_148;
      fVar23 = ((float)local_f8 - ((float)local_118 - fVar22)) / fVar22;
      fVar24 = fVar23 * fVar21 + local_c8._0_4_;
      fVar26 = fVar23 * fVar25 + local_c8._4_4_;
      fVar27 = fVar23 * fVar30 + 0.0;
      fVar23 = fVar23 * fVar31 + 0.0;
      if (((uint)fVar5 & 1) == 0) {
        local_128 = CONCAT44(fVar25,fVar21);
        uStack_120 = CONCAT44(fVar31,fVar30);
        local_108 = CONCAT44(local_108._4_4_,fVar22);
        Path::lineTo(fVar24,fVar26,(Path *)&local_158);
        fVar21 = (float)local_128;
        fVar25 = local_128._4_4_;
        fVar30 = (float)uStack_120;
        fVar31 = uStack_120._4_4_;
        fVar22 = (float)local_108;
        goto LAB_00285530;
      }
      if (uStack_150._4_4_ == 0) {
        local_148[1] = fVar24;
        local_148[0] = fVar24;
        local_148[3] = fVar26;
        local_148[2] = fVar26;
        iVar9 = 3;
        if ((int)(uint)uStack_150 < 3) goto LAB_00285970;
      }
      else {
        if (fVar24 < local_148[0]) {
LAB_00285922:
          *pfVar7 = fVar24;
        }
        else {
          pfVar7 = local_148 + 1;
          if (local_148[1] < fVar24) goto LAB_00285922;
        }
        pfVar7 = local_148 + 2;
        if (fVar26 < local_148[2]) {
LAB_00285942:
          *pfVar7 = fVar26;
        }
        else {
          pfVar7 = local_148 + 3;
          if (local_148[3] < fVar26) goto LAB_00285942;
        }
        iVar9 = uStack_150._4_4_ + 3;
        if ((int)(uint)uStack_150 < iVar9) {
LAB_00285970:
          uVar12 = uStack_150._4_4_ + (uStack_150._4_4_ + 3) / 2 + 0xb;
          uVar13 = uVar12 & 0xfffffff8;
          if ((uint)uStack_150 != uVar13) {
            local_108 = CONCAT44(local_108._4_4_,fVar22);
            local_128 = CONCAT44(fVar25,fVar21);
            uStack_120 = CONCAT44(fVar31,fVar30);
            local_e8 = fVar24;
            fStack_e4 = fVar26;
            fStack_e0 = fVar27;
            fStack_dc = fVar23;
            local_58 = fVar26;
            fStack_54 = fVar26;
            fStack_50 = fVar26;
            fStack_4c = fVar26;
            if ((int)uVar13 < 1) {
              free(local_158);
              local_158 = (void *)0x0;
            }
            else {
              local_158 = realloc(local_158,(ulong)uVar13 << 2);
            }
            fVar24 = local_e8;
            fVar26 = local_58;
            fVar21 = (float)local_128;
            fVar25 = local_128._4_4_;
            fVar30 = (float)uStack_120;
            fVar31 = uStack_120._4_4_;
            fVar22 = (float)local_108;
          }
          uStack_150 = CONCAT44(uStack_150._4_4_,uVar12) & 0xfffffffffffffff8;
          iVar9 = uStack_150._4_4_ + 3;
        }
      }
      lVar10 = (long)uStack_150._4_4_;
      *(undefined4 *)((long)local_158 + lVar10 * 4) = 0x47c35100;
      *(float *)((long)local_158 + lVar10 * 4 + 4) = fVar24;
      uStack_150 = CONCAT44(iVar9,(uint)uStack_150);
      *(float *)((long)local_158 + lVar10 * 4 + 8) = fVar26;
    } while( true );
  }
LAB_00285b08:
  local_118 = (**(code **)(*(long *)param_3 + 0x1a8))(param_3);
  fStack_110 = extraout_XMM0_Dc;
  fStack_10c = extraout_XMM0_Dd;
  fStack_f0 = in_XMM1_Dc;
  fStack_ec = in_XMM1_Dd;
  local_f8 = param_2;
  if (*(long *)(param_3 + 0x30) == 0) {
    iVar19 = 0;
    iVar20 = 0;
    iVar4 = -0x80000000;
    iVar14 = 0;
    iVar9 = 0;
    uVar6 = local_118;
    if ((float)local_118 <= DAT_00653430) goto LAB_00285b88;
  }
  else {
    uVar6 = 0;
    lVar8 = __dynamic_cast(*(long *)(param_3 + 0x30),&Component::typeinfo,
                           &DrawableComposite::typeinfo,0);
    iVar20 = 0;
    if (lVar8 != 0) {
      uVar6 = *(undefined8 *)(lVar8 + 0xf0);
      iVar20 = (int)((ulong)uVar6 >> 0x20);
    }
    iVar19 = (int)uVar6;
    iVar4 = -0x80000000;
    iVar14 = iVar19;
    iVar9 = iVar20;
    uVar6 = local_118;
    if ((float)local_118 <= DAT_00653430) goto LAB_00285b88;
  }
  iVar20 = iVar9;
  iVar19 = iVar14;
  fVar21 = floorf((float)local_118);
  iVar4 = (int)fVar21;
  uVar6 = local_118;
LAB_00285b88:
  local_118._4_4_ = (float)((ulong)uVar6 >> 0x20);
  iVar14 = -0x80000000;
  uVar2 = local_f8;
  if (DAT_00653430 < local_118._4_4_) {
    fVar21 = floorf(local_118._4_4_);
    local_118 = uVar6;
    iVar14 = (int)fVar21;
    uVar6 = local_118;
    uVar2 = local_f8;
  }
  local_f8._4_4_ = (float)((ulong)uVar2 >> 0x20);
  local_f8._0_4_ = (float)uVar2;
  local_118._4_4_ = (float)((ulong)uVar6 >> 0x20);
  local_118._0_4_ = (float)uVar6;
  local_118._0_4_ = (float)local_118 + (float)local_f8;
  local_118._4_4_ = local_118._4_4_ + local_f8._4_4_;
  iVar16 = 0x7fffffff;
  iVar9 = 0x7fffffff;
  local_f8 = uVar2;
  if ((float)local_118 < DAT_00653434) {
    fStack_110 = fStack_110 + fStack_f0;
    fStack_10c = fStack_10c + fStack_ec;
    fVar21 = ceilf((float)local_118);
    uVar6 = CONCAT44(local_118._4_4_,(float)local_118);
    iVar9 = (int)fVar21;
  }
  if (local_118._4_4_ < DAT_00653434) {
    fVar21 = ceilf(local_118._4_4_);
    local_118 = uVar6;
    iVar16 = (int)fVar21;
    uVar6 = local_118;
  }
  pCVar3 = local_d0;
  *(ulong *)(local_d0 + 0xf0) = CONCAT44(-iVar14,-iVar4);
  local_118 = uVar6;
  Component::setBounds(local_d0,iVar19 + iVar4,iVar20 + iVar14,iVar9 - iVar4,iVar16 - iVar14);
  Component::internalRepaintUnchecked((long)pCVar3,0,*(ulong *)(pCVar3 + 0x40),'\x01');
  return;
LAB_00285a6b:
  if ((((uint)local_e8 & 1) == 0) && ((bVar15 & 1) == 0)) {
    Path::lineTo((float)local_c8._8_4_,fStack_bc,(Path *)&local_158);
  }
  param_3 = local_d0;
  local_48 = ZEXT416(DAT_005d9038);
  local_38 = 0x3f800000;
  uVar28 = 0;
  in_XMM1_Dc = 0.0;
  in_XMM1_Dd = 0.0;
  fVar21 = DAT_005d94d4;
  PathStrokeHelpers::createStroke
            (*(float *)(local_d0 + 0x160),DAT_005d94d4,*(int *)(local_d0 + 0x164),
             *(int *)(local_d0 + 0x168),local_60,(Path *)&local_158,(float *)local_48);
  free(local_78);
  uStack_150 = uStack_150 & 0xffffffff;
  free(local_158);
  param_2 = CONCAT44(uVar28,fVar21);
  goto LAB_00285b08;
}


