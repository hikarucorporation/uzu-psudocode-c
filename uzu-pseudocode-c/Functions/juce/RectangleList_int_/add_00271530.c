// Function : add
// Namespace: juce:RectangleList_int_
// Entry    : 00271530
// Prototype: undefined add(long * param_1, ulong param_2, ulong param_3)
// Body     : 00271530 - 00271b49


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RectangleList<int>::add(juce::Rectangle<int>) */

void __cdecl juce::RectangleList<int>::add(long *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  byte bVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  ulong *puVar25;
  ulong *puVar26;
  int iVar27;
  uint local_ac;
  ulong local_a8;
  ulong *local_a0;
  undefined8 local_98;
  ulong local_90;
  int local_88;
  int local_84;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  ulong **local_58;
  uint *local_50;
  ulong *local_48;
  ulong *local_40;
  ulong *local_38;
  
  if ((0 < (int)param_3) && (0xffffffff < (long)param_3)) {
    iVar12 = *(int *)((long)param_1 + 0xc);
    if (iVar12 == 0) {
      if ((int)param_1[1] < 1) {
        pvVar10 = realloc((void *)*param_1,0x80);
        *param_1 = (long)pvVar10;
        iVar12 = *(int *)((long)param_1 + 0xc);
        *(undefined4 *)(param_1 + 1) = 8;
      }
      else {
        pvVar10 = (void *)*param_1;
        iVar12 = 0;
      }
      *(int *)((long)param_1 + 0xc) = iVar12 + 1;
    }
    else {
      if (0 < iVar12) {
        local_90 = param_2 >> 0x20;
        iVar13 = (int)param_2;
        iVar19 = (int)param_3 + iVar13;
        uVar18 = (ulong)(uint)((int)(param_3 >> 0x20) + (int)(param_2 >> 0x20));
        lVar24 = (ulong)(iVar12 - 1) << 4;
        iVar27 = -iVar12;
        uVar20 = (ulong)(iVar12 - 1);
        local_a8 = uVar18;
        local_70 = param_3;
        bVar8 = false;
        do {
          lVar2 = *param_1;
          iVar12 = (int)*(undefined8 *)(lVar2 + lVar24);
          bVar7 = bVar8;
          if (iVar12 < iVar19) {
            iVar16 = (int)((ulong)*(undefined8 *)(lVar2 + lVar24) >> 0x20);
            if ((int)uVar18 <= iVar16) goto LAB_002715d0;
            uVar3 = *(undefined8 *)(lVar2 + 8 + lVar24);
            iVar5 = (int)uVar3;
            iVar11 = iVar5 + iVar12;
            if (iVar11 <= iVar13) goto LAB_002715d0;
            iVar6 = (int)((ulong)uVar3 >> 0x20);
            iVar22 = iVar16 + iVar6;
            if ((((int)local_90 < iVar22) && (0 < iVar5)) && (0 < iVar6)) {
              if (((iVar12 < iVar13) || (iVar16 < (int)local_90)) ||
                 ((iVar19 < iVar11 || ((int)uVar18 < iVar22)))) {
                local_84 = iVar13 - iVar12;
                bVar7 = local_84 == 0 || iVar13 < iVar12;
                local_88 = (int)local_90 - iVar16;
                bVar17 = bVar7 + 2;
                if (local_88 != 0 && iVar16 <= (int)local_90) {
                  bVar17 = bVar7;
                }
                bVar9 = bVar17 + 4;
                if (iVar19 <= iVar11) {
                  bVar9 = bVar17;
                }
                if (iVar11 < iVar13) {
                  bVar9 = bVar17;
                }
                iVar12 = (int)local_a8;
                bVar17 = bVar9 | 8;
                if (iVar12 <= iVar22) {
                  bVar17 = bVar9;
                }
                if (iVar22 < (int)local_90) {
                  bVar17 = bVar9;
                }
                bVar7 = true;
                uVar18 = local_a8;
                switch(bVar17) {
                case 7:
                  *(int *)(lVar2 + 0xc + lVar24) = iVar22 - iVar12;
                  *(int *)(lVar2 + 4 + lVar24) = iVar12;
                  break;
                case 8:
                case 9:
                case 10:
                case 0xc:
                  goto switchD_00271789_caseD_8;
                case 0xb:
                  *(int *)(lVar2 + 8 + lVar24) = iVar11 - iVar19;
                  *(int *)(lVar2 + lVar24) = iVar19;
                  break;
                case 0xd:
                  *(int *)(lVar2 + 0xc + lVar24) = local_88;
                  break;
                case 0xe:
                  *(int *)(lVar2 + 8 + lVar24) = local_84;
                  break;
                default:
                  goto switchD_00271789_default;
                }
                goto LAB_002715d0;
              }
              if (*(uint *)((long)param_1 + 0xc) <= uVar20) goto LAB_002715d0;
              memmove((void *)(lVar2 + lVar24),(void *)(lVar2 + lVar24 + 0x10),
                      (long)(int)(*(uint *)((long)param_1 + 0xc) + iVar27) << 4);
              iVar12 = *(int *)((long)param_1 + 0xc);
              uVar14 = iVar12 - 1;
              *(uint *)((long)param_1 + 0xc) = uVar14;
              iVar12 = iVar12 * 2 + -2;
              if (iVar12 < 0) {
                iVar12 = 0;
              }
              if (iVar12 < (int)param_1[1]) {
                if ((int)uVar14 < 5) {
                  uVar14 = 4;
                }
                if ((int)uVar14 < (int)param_1[1]) {
                  pvVar10 = realloc((void *)*param_1,(ulong)uVar14 << 4);
                  *param_1 = (long)pvVar10;
                  *(uint *)(param_1 + 1) = uVar14;
                }
              }
              uVar18 = local_a8;
            }
            else {
switchD_00271789_default:
            }
          }
          else {
LAB_002715d0:
            bVar7 = bVar8;
          }
switchD_00271789_caseD_8:
          uVar21 = local_70;
          lVar24 = lVar24 + -0x10;
          iVar27 = iVar27 + 1;
          bVar4 = 0 < (long)uVar20;
          uVar20 = uVar20 - 1;
          bVar8 = bVar7;
        } while (bVar4);
        iVar12 = *(int *)((long)param_1 + 0xc);
        param_3 = local_70;
        if ((bVar7) && (iVar12 != 0)) {
          local_a0 = malloc(0x80);
          local_98 = &DAT_100000008;
          *local_a0 = param_2;
          local_a0[1] = uVar21;
          puVar26 = (ulong *)*param_1;
          puVar25 = puVar26 + (long)iVar12 * 2;
          iVar12 = 1;
          do {
            uVar18 = *puVar26;
            if ((int)uVar18 < iVar19) {
              uVar20 = uVar18 >> 0x20;
              iVar27 = (int)(uVar18 >> 0x20);
              if (iVar27 < (int)local_a8) {
                uVar21 = puVar26[1];
                if (iVar13 < (int)uVar21 + (int)uVar18) {
                  iVar16 = (int)(uVar21 >> 0x20);
                  if ((((int)local_90 < iVar16 + iVar27) && (0 < (int)uVar21)) && (0 < iVar16)) {
                    uVar23 = uVar21 + uVar18;
                    uVar21 = (uVar21 & 0xffffffff00000000) + uVar18;
                    local_78 = uVar23 & 0xffffffff | uVar21 & 0xffffffff00000000;
                    local_ac = iVar12 - 1;
                    local_80 = uVar18;
                    if (0 < iVar12) {
                      uVar21 = uVar21 >> 0x20;
                      while( true ) {
                        uVar15 = (ulong)local_ac;
                        local_68 = local_a0[uVar15 * 2];
                        iVar27 = (int)local_a0[uVar15 * 2 + 1] + (int)local_68;
                        iVar12 = (int)(local_68 >> 0x20);
                        iVar16 = *(int *)((long)local_a0 + uVar15 * 0x10 + 0xc) + iVar12;
                        local_60 = CONCAT44(iVar16,iVar27);
                        if ((((int)local_68 < (int)uVar23) && ((int)uVar18 < iVar27)) &&
                           ((iVar12 < (int)uVar21 && ((int)uVar20 < iVar16)))) {
                          local_38 = local_a0 + uVar15 * 2;
                          local_58 = &local_a0;
                          local_50 = &local_ac;
                          local_48 = &local_68;
                          local_40 = &local_80;
                          subtract<juce::Rectangle<int>>(juce::Array<juce::Rectangle<int>,juce::DummyCriticalSection,0>&,juce::Rectangle<int>)
                          ::{lambda()#1}::operator()((_lambda___1_ *)&local_58);
                        }
                        if ((int)local_ac < 1) break;
                        uVar23 = local_78 & 0xffffffff;
                        uVar18 = local_80 & 0xffffffff;
                        uVar20 = local_80 >> 0x20;
                        uVar21 = local_78 >> 0x20;
                        local_ac = local_ac - 1;
                      }
                      iVar12 = local_98._4_4_;
                      local_ac = local_ac - 1;
                    }
                    if (iVar12 == 0) goto LAB_00271b40;
                  }
                }
              }
            }
            puVar26 = puVar26 + 2;
          } while (puVar26 != puVar25);
          iVar13 = *(int *)((long)param_1 + 0xc) + iVar12;
          if ((int)*(uint *)(param_1 + 1) < iVar13) {
            uVar14 = iVar13 + iVar13 / 2 + 8U & 0xfffffff8;
            if (*(uint *)(param_1 + 1) != uVar14) {
              if ((int)uVar14 < 1) {
                free((void *)*param_1);
                *param_1 = 0;
              }
              else {
                pvVar10 = realloc((void *)*param_1,(ulong)uVar14 << 4);
                *param_1 = (long)pvVar10;
              }
            }
            *(uint *)(param_1 + 1) = uVar14;
            iVar12 = local_98._4_4_;
          }
          if (iVar12 != 0) {
            lVar24 = 0;
            do {
              iVar13 = *(int *)((long)param_1 + 0xc);
              *(int *)((long)param_1 + 0xc) = iVar13 + 1;
              uVar3 = ((undefined8 *)((long)local_a0 + lVar24))[1];
              puVar1 = (undefined8 *)(*param_1 + (long)iVar13 * 0x10);
              *puVar1 = *(undefined8 *)((long)local_a0 + lVar24);
              puVar1[1] = uVar3;
              lVar24 = lVar24 + 0x10;
            } while ((long)iVar12 * 0x10 != lVar24);
          }
LAB_00271b40:
          local_98 = (undefined1 *)((ulong)local_98 & 0xffffffff);
          free(local_a0);
          return;
        }
      }
      if ((int)*(uint *)(param_1 + 1) <= iVar12) {
        uVar14 = iVar12 + ((iVar12 - (iVar12 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(param_1 + 1) != uVar14) {
          if ((int)uVar14 < 1) {
            free((void *)*param_1);
            *param_1 = 0;
          }
          else {
            pvVar10 = realloc((void *)*param_1,(ulong)uVar14 << 4);
            *param_1 = (long)pvVar10;
          }
        }
        *(uint *)(param_1 + 1) = uVar14;
        iVar12 = *(int *)((long)param_1 + 0xc);
      }
      *(int *)((long)param_1 + 0xc) = iVar12 + 1;
      pvVar10 = (void *)*param_1;
    }
    *(ulong *)((long)pvVar10 + (long)iVar12 * 0x10) = param_2;
    *(ulong *)((long)pvVar10 + (long)iVar12 * 0x10 + 8) = param_3;
  }
  return;
}


