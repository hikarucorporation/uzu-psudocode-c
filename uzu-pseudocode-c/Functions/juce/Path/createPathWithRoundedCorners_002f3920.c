// Function : createPathWithRoundedCorners
// Namespace: juce:Path
// Entry    : 002f3920
// Prototype: undefined createPathWithRoundedCorners(float param_1, undefined8 * param_2, long * param_3)
// Body     : 002f3920 - 002f41ba


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Path::createPathWithRoundedCorners(float) const */

void __cdecl
juce::Path::createPathWithRoundedCorners(float param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  void *__src;
  double dVar2;
  double dVar3;
  ulong uVar4;
  float *pfVar5;
  void *__dest;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined7 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  void *local_a8;
  uint uStack_a0;
  int iStack_9c;
  float local_98 [4];
  undefined1 local_88;
  double local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  double local_58;
  double local_50;
  double local_48;
  long local_40;
  undefined8 *local_38;
  
  if (param_1 <= DAT_00652618) {
    *param_2 = 0;
    param_2[1] = 0;
    uVar16 = *(uint *)((long)param_3 + 0xc);
    if (0 < (int)uVar16) {
      __src = (void *)*param_3;
      uVar12 = uVar16 + (uVar16 >> 1) + 8 & 0xfffffff8;
      if ((int)uVar12 < 1) {
        __dest = (void *)0x0;
      }
      else {
        __dest = malloc((ulong)uVar12 << 2);
        *param_2 = __dest;
      }
      *(uint *)(param_2 + 1) = uVar12;
      memcpy(__dest,__src,(ulong)uVar16 * 4);
    }
    *(uint *)((long)param_2 + 0xc) = uVar16;
    lVar1 = param_3[3];
    param_2[2] = param_3[2];
    param_2[3] = lVar1;
    *(char *)(param_2 + 4) = (char)param_3[4];
  }
  else {
    uVar20 = 0;
    uVar22 = 0;
    local_98[0] = 0.0;
    local_98[1] = 0.0;
    local_98[2] = 0.0;
    local_98[3] = 0.0;
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    iStack_9c = 0;
    local_88 = 1;
    local_38 = param_2;
    if (*(int *)((long)param_3 + 0xc) < 1) {
      iStack_9c = 0;
      local_88 = 1;
      uVar18 = 0;
      uVar19 = 0;
      uStack_a0 = 0;
      local_a8 = (void *)0x0;
    }
    else {
      lVar1 = *param_3;
      local_50 = (double)param_1;
      local_40 = 0;
      iVar14 = 0;
      uVar6 = 0;
      uVar7 = 0;
      fVar17 = DAT_005de3d8;
      iVar15 = 0;
      do {
        iVar11 = iVar15 + 1;
        lVar13 = (long)iVar15;
        fVar25 = *(float *)(lVar1 + lVar13 * 4);
        if ((fVar25 != DAT_005de3d0) || (NAN(fVar25) || NAN(DAT_005de3d0))) {
          uVar9 = (undefined7)(uVar7 >> 8);
          if ((fVar25 != fVar17) || (NAN(fVar25) || NAN(fVar17))) {
            if ((fVar25 != DAT_005de41c) || (NAN(fVar25) || NAN(DAT_005de41c))) {
              if ((fVar25 != DAT_005de3dc) || (NAN(fVar25) || NAN(DAT_005de3dc))) {
                if ((fVar25 == DAT_005de3d4) && (!NAN(fVar25) && !NAN(DAT_005de3d4))) {
                  cubicTo(*(float *)(lVar1 + (long)iVar11 * 4),*(float *)(lVar1 + 8 + lVar13 * 4),
                          *(float *)(lVar1 + 0xc + lVar13 * 4),*(float *)(lVar1 + 0x10 + lVar13 * 4)
                          ,*(float *)(lVar1 + 0x14 + lVar13 * 4),
                          *(float *)(lVar1 + 0x18 + lVar13 * 4),(Path *)&local_a8);
                  iVar11 = iVar15 + 7;
                  goto LAB_002f40a6;
                }
              }
              else {
                quadraticTo(*(float *)(lVar1 + (long)iVar11 * 4),*(float *)(lVar1 + 8 + lVar13 * 4),
                            *(float *)(lVar1 + 0xc + lVar13 * 4),
                            *(float *)(lVar1 + 0x10 + lVar13 * 4),(Path *)&local_a8);
                iVar11 = iVar15 + 5;
LAB_002f40a6:
                uVar6 = 0;
                fVar17 = DAT_005de3d8;
              }
              goto LAB_002f3a04;
            }
            local_68._0_4_ = *(undefined4 *)(lVar1 + 4 + (long)iVar14 * 4);
            local_78._0_4_ = *(undefined4 *)(lVar1 + 8 + (long)iVar14 * 4);
            if (5 < iVar15) goto LAB_002f3b8a;
            fVar17 = 0.0;
            fVar24 = 0.0;
            fVar21 = 0.0;
            fVar23 = 0.0;
            if ((uVar6 & 1) != 0) goto LAB_002f3bd6;
          }
          else {
            local_68._0_4_ = *(undefined4 *)(lVar1 + (long)iVar11 * 4);
            iVar11 = iVar15 + 3;
            local_78._0_4_ = *(undefined4 *)(lVar1 + 8 + lVar13 * 4);
            if (iVar15 < 6) {
              fVar17 = 0.0;
              fVar24 = 0.0;
              fVar21 = 0.0;
              fVar23 = 0.0;
              uVar4 = CONCAT71(uVar9,1);
              if ((uVar6 & 1) != 0) {
LAB_002f3bd6:
                local_80 = (double)CONCAT44(local_80._4_4_,fVar21);
                local_58 = (double)CONCAT44(local_58._4_4_,fVar17);
                local_48 = (double)CONCAT44(local_48._4_4_,fVar24);
                dVar2 = hypot((double)(fVar17 - fVar21),(double)(fVar24 - fVar23));
                if (0.0 < dVar2) {
                  dVar26 = local_50 / dVar2;
                  if (DAT_005db338 <= local_50 / dVar2) {
                    dVar26 = DAT_005db338;
                  }
                  *(float *)((long)local_a8 + (long)iStack_9c * 4 + -8) =
                       (float)((double)local_80._0_4_ -
                              (double)(local_80._0_4_ - local_58._0_4_) * dVar26);
                  *(float *)((long)local_a8 + (long)iStack_9c * 4 + -4) =
                       (float)((double)fVar23 - (double)(fVar23 - local_48._0_4_) * dVar26);
                }
                local_48 = (double)((float)local_68._0_4_ - local_80._0_4_);
                local_58 = (double)((float)local_78._0_4_ - fVar23);
                dVar2 = hypot(local_48,local_58);
                uVar4 = uVar6;
                if (DAT_005db340 < dVar2) {
                  dVar26 = local_50 / dVar2;
                  if (DAT_005db338 <= local_50 / dVar2) {
                    dVar26 = DAT_005db338;
                  }
                  quadraticTo(local_80._0_4_,fVar23,
                              (float)(local_48 * dVar26 + (double)local_80._0_4_),
                              (float)(local_58 * dVar26 + (double)fVar23),(Path *)&local_a8);
                }
              }
            }
            else {
LAB_002f3b8a:
              if ((uVar6 & 1) != 0) {
                fVar17 = *(float *)(lVar1 + (ulong)(iVar15 - 5) * 4);
                fVar24 = *(float *)(lVar1 + (ulong)(iVar15 - 4) * 4);
                fVar21 = *(float *)(lVar1 + (ulong)(iVar15 - 2) * 4);
                fVar23 = *(float *)(lVar1 + (ulong)(iVar15 - 1) * 4);
                goto LAB_002f3bd6;
              }
              if ((fVar25 != fVar17) || (uVar4 = CONCAT71(uVar9,1), NAN(fVar25) || NAN(fVar17)))
              goto LAB_002f3d40;
            }
            uVar6 = uVar4;
            lineTo((float)local_68._0_4_,(float)local_78._0_4_,(Path *)&local_a8);
          }
LAB_002f3d40:
          if ((fVar25 != DAT_005de41c) || (NAN(fVar25) || NAN(DAT_005de41c))) {
            fVar17 = DAT_005de3d8;
          }
          else {
            if ((uVar7 & 1) != 0) {
              fVar17 = *(float *)(lVar1 + -0xc + (long)iVar11 * 4);
              fVar25 = *(float *)(lVar1 + -8 + (long)iVar11 * 4);
              local_80 = (double)CONCAT44(local_80._4_4_,
                                          *(undefined4 *)(lVar1 + 0x10 + (long)iVar14 * 4));
              fVar24 = *(float *)(lVar1 + 0x14 + (long)iVar14 * 4);
              local_58 = (double)CONCAT44(local_58._4_4_,fVar17);
              dVar2 = hypot((double)(fVar17 - (float)local_68._0_4_),
                            (double)(fVar25 - (float)local_78._0_4_));
              if (DAT_005db340 < dVar2) {
                dVar26 = local_50 / dVar2;
                if (DAT_005db338 <= local_50 / dVar2) {
                  dVar26 = DAT_005db338;
                }
                *(float *)((long)local_a8 + (long)iStack_9c * 4 + -8) =
                     (float)((double)(float)local_68._0_4_ -
                            (double)((float)local_68._0_4_ - local_58._0_4_) * dVar26);
                *(float *)((long)local_a8 + (long)iStack_9c * 4 + -4) =
                     (float)((double)(float)local_78._0_4_ -
                            (double)((float)local_78._0_4_ - fVar25) * dVar26);
              }
              local_80 = (double)(local_80._0_4_ - (float)local_68._0_4_);
              dVar26 = (double)(fVar24 - (float)local_78._0_4_);
              dVar2 = hypot(local_80,dVar26);
              if (DAT_005db340 < dVar2) {
                dVar3 = local_50 / dVar2;
                if (DAT_005db338 <= local_50 / dVar2) {
                  dVar3 = DAT_005db338;
                }
                fVar17 = (float)(local_80 * dVar3 + (double)(float)local_68._0_4_);
                local_80 = (double)CONCAT44(local_80._4_4_,fVar17);
                fVar25 = (float)(dVar26 * dVar3 + (double)(float)local_78._0_4_);
                quadraticTo((float)local_68._0_4_,(float)local_78._0_4_,fVar17,fVar25,
                            (Path *)&local_a8);
                *(float *)((long)local_a8 + (long)(int)local_40 * 4 + 4) = local_80._0_4_;
                *(float *)((long)local_a8 + (long)(int)local_40 * 4 + 8) = fVar25;
              }
            }
            lVar13 = (long)iStack_9c;
            fVar17 = DAT_005de3d8;
            if (lVar13 == 0) {
            }
            else {
              if (0 < iStack_9c) {
                fVar25 = *(float *)((long)local_a8 + (ulong)(iStack_9c - 1) * 4);
                if ((fVar25 == DAT_005de41c) && (!NAN(fVar25) && !NAN(DAT_005de41c)))
                goto LAB_002f3a04;
              }
              iVar15 = iStack_9c + 1;
              if ((int)uStack_a0 <= iStack_9c) {
                local_68._0_4_ = (int)uVar7;
                uVar16 = iVar15 / 2 + iStack_9c + 9U & 0xfffffff8;
                if (uStack_a0 != uVar16) {
                  local_78._0_4_ = (int)uVar6;
                  if ((int)uVar16 < 1) {
                    free(local_a8);
                    local_a8 = (void *)0x0;
                  }
                  else {
                    local_a8 = realloc(local_a8,(ulong)uVar16 << 2);
                  }
                  uVar6 = (ulong)(uint)local_78._0_4_;
                }
                uVar7 = (ulong)(uint)local_68._0_4_;
                uStack_a0 = uVar16;
              }
              fVar17 = DAT_005de3d8;
              *(undefined4 *)((long)local_a8 + lVar13 * 4) = 0x47c35280;
              iStack_9c = iVar15;
            }
          }
        }
        else {
          lVar8 = (long)iStack_9c;
          fVar25 = *(float *)(lVar1 + (long)iVar11 * 4);
          fVar24 = *(float *)(lVar1 + 8 + lVar13 * 4);
          if (lVar8 == 0) {
            local_98[1] = fVar25;
            local_98[0] = fVar25;
            local_98[3] = fVar24;
            local_98[2] = fVar24;
          }
          else {
            pfVar5 = local_98;
            if (fVar25 < local_98[0]) {
LAB_002f3a69:
              *pfVar5 = fVar25;
            }
            else {
              pfVar5 = local_98 + 1;
              if (local_98[1] < fVar25) goto LAB_002f3a69;
            }
            pfVar5 = local_98 + 2;
            if (local_98[2] <= fVar24) {
              pfVar5 = local_98 + 3;
              if (fVar24 <= local_98[3]) goto LAB_002f3afc;
            }
            *pfVar5 = fVar24;
          }
LAB_002f3afc:
          iVar11 = iVar15 + 3;
          iVar10 = iStack_9c + 3;
          if ((int)uStack_a0 < iVar10) {
            uVar16 = iStack_9c + iVar10 / 2 + 0xbU & 0xfffffff8;
            if (uStack_a0 != uVar16) {
              local_78 = ZEXT416((uint)fVar25);
              local_68 = ZEXT416((uint)fVar24);
              if ((int)uVar16 < 1) {
                free(local_a8);
                local_a8 = (void *)0x0;
              }
              else {
                local_a8 = realloc(local_a8,(ulong)uVar16 << 2);
              }
              fVar17 = DAT_005de3d8;
              fVar24 = (float)local_68._0_4_;
              fVar25 = (float)local_78._0_4_;
            }
            uStack_a0 = uVar16;
          }
          *(undefined4 *)((long)local_a8 + lVar8 * 4) = 0x47c35100;
          *(float *)((long)local_a8 + lVar8 * 4 + 4) = fVar25;
          *(float *)((long)local_a8 + lVar8 * 4 + 8) = fVar24;
          uVar7 = (ulong)(-(uint)(*(float *)(lVar1 + (long)iVar11 * 4) == fVar17) & 1);
          uVar6 = 0;
          iVar14 = iVar15;
          local_40 = lVar8;
          iStack_9c = iVar10;
        }
LAB_002f3a04:
        iVar15 = iVar11;
      } while (iVar11 < *(int *)((long)param_3 + 0xc));
      uVar18 = local_98[0];
      uVar19 = local_98[1];
      uVar20 = local_98[2];
      uVar22 = local_98[3];
    }
    *local_38 = local_a8;
    *(uint *)(local_38 + 1) = uStack_a0;
    *(int *)((long)local_38 + 0xc) = iStack_9c;
    *(undefined4 *)(local_38 + 2) = uVar18;
    *(undefined4 *)((long)local_38 + 0x14) = uVar19;
    *(undefined4 *)(local_38 + 3) = uVar20;
    *(undefined4 *)((long)local_38 + 0x1c) = uVar22;
    *(undefined1 *)(local_38 + 4) = local_88;
  }
  return;
}


