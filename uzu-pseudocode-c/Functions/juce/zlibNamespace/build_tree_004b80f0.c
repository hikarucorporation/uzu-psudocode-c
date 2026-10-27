// Function : build_tree
// Namespace: juce:zlibNamespace
// Entry    : 004b80f0
// Prototype: undefined build_tree(long param_1, long * param_2)
// Body     : 004b80f0 - 004b89da


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::build_tree(juce::zlibNamespace::internal_state*,
   juce::zlibNamespace::tree_desc_s*) */

void __cdecl juce::zlibNamespace::build_tree(long param_1,long *param_2)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  byte bVar16;
  ushort uVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  short *psVar24;
  ushort uVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ushort auStack_68 [4];
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  ulong local_40;
  long local_38;
  
  lVar5 = *param_2;
  lVar19 = *(long *)param_2[2];
  uVar18 = *(uint *)(param_2[2] + 0x14);
  *(undefined8 *)(param_1 + 0x14b4) = 0x23d00000000;
  local_40 = 0xffffffff;
  if ((int)uVar18 < 1) {
    uVar15 = 0;
  }
  else {
    uVar13 = 0;
    do {
      while (*(short *)(lVar5 + uVar13 * 4) == 0) {
        *(undefined2 *)(lVar5 + 2 + uVar13 * 4) = 0;
        uVar13 = uVar13 + 1;
        if (uVar18 == uVar13) goto LAB_004b8174;
      }
      iVar20 = *(int *)(param_1 + 0x14b4);
      *(int *)(param_1 + 0x14b4) = iVar20 + 1;
      *(int *)(param_1 + 0xbc4 + (long)iVar20 * 4) = (int)uVar13;
      *(undefined1 *)(param_1 + 0x14bc + uVar13) = 0;
      local_40 = uVar13 & 0xffffffff;
      uVar13 = uVar13 + 1;
    } while (uVar18 != uVar13);
LAB_004b8174:
    uVar15 = *(uint *)(param_1 + 0x14b4);
    if (1 < (int)uVar15) goto LAB_004b8183;
  }
  do {
    uVar26 = (int)local_40 + 1;
    if ((int)local_40 < 2) {
      local_40 = (ulong)uVar26;
    }
    else {
      uVar26 = 0;
    }
    *(uint *)(param_1 + 0x14b4) = uVar15 + 1;
    *(uint *)(param_1 + 0xbc4 + (long)(int)uVar15 * 4) = uVar26;
    lVar30 = (long)(int)uVar26;
    *(undefined2 *)(lVar5 + lVar30 * 4) = 1;
    *(undefined1 *)(param_1 + 0x14bc + lVar30) = 0;
    *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + -1;
    if (lVar19 != 0) {
      *(long *)(param_1 + 0x1720) =
           *(long *)(param_1 + 0x1720) - (ulong)*(ushort *)(lVar19 + 2 + lVar30 * 4);
    }
    uVar15 = *(uint *)(param_1 + 0x14b4);
  } while ((int)uVar15 < 2);
LAB_004b8183:
  iVar20 = (int)local_40;
  *(int *)(param_2 + 1) = iVar20;
  uVar13 = (ulong)(uVar15 >> 1);
  do {
    iVar21 = *(int *)(param_1 + 0xbc0 + uVar13 * 4);
    uVar26 = (int)uVar13 * 2;
    uVar14 = uVar13;
    if ((int)uVar26 <= (int)uVar15) {
      uVar14 = uVar13 & 0xffffffff;
      do {
        uVar22 = uVar26;
        if ((int)uVar26 < (int)uVar15) {
          uVar15 = uVar26 | 1;
          lVar31 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar15 * 4);
          lVar19 = (long)(int)uVar26;
          lVar30 = (long)*(int *)(param_1 + 0xbc0 + lVar19 * 4);
          uVar25 = *(ushort *)(lVar5 + lVar30 * 4);
          uVar17 = *(ushort *)(lVar5 + lVar31 * 4);
          if (uVar17 < uVar25) {
LAB_004b8209:
            lVar19 = (long)(int)uVar15;
            uVar22 = uVar15;
          }
          else {
            if (uVar17 != uVar25) goto LAB_004b8213;
            if (*(byte *)(param_1 + 0x14bc + lVar31) <= *(byte *)(param_1 + 0x14bc + lVar30))
            goto LAB_004b8209;
          }
        }
        else {
LAB_004b8213:
          lVar19 = (long)(int)uVar26;
        }
        iVar3 = *(int *)(param_1 + 0xbc0 + lVar19 * 4);
        uVar25 = *(ushort *)(lVar5 + (long)iVar3 * 4);
        uVar17 = *(ushort *)(lVar5 + (long)iVar21 * 4);
        if ((uVar17 < uVar25) ||
           ((uVar17 == uVar25 &&
            (*(byte *)(param_1 + 0x14bc + (long)iVar21) <= *(byte *)(param_1 + 0x14bc + (long)iVar3)
            )))) {
          uVar22 = (uint)uVar14;
          break;
        }
        *(int *)(param_1 + 0xbc0 + (long)(int)(uint)uVar14 * 4) = iVar3;
        uVar26 = uVar22 * 2;
        uVar15 = *(uint *)(param_1 + 0x14b4);
        uVar14 = (ulong)uVar22;
      } while ((int)uVar26 <= (int)uVar15);
      uVar14 = (ulong)(int)uVar22;
    }
    *(int *)(param_1 + 0xbc0 + uVar14 * 4) = iVar21;
    if ((long)uVar13 < 2) {
      iVar21 = *(int *)(param_1 + 0x14b4);
      lVar19 = (long)(int)uVar18;
      do {
        iVar28 = *(int *)(param_1 + 0xbc4);
        iVar3 = iVar21 + -1;
        *(int *)(param_1 + 0x14b4) = iVar3;
        iVar4 = *(int *)(param_1 + 0xbc0 + (long)iVar21 * 4);
        *(int *)(param_1 + 0xbc4) = iVar4;
        lVar30 = 1;
        if (2 < iVar21) {
          uVar18 = 2;
          uVar15 = 1;
          do {
            uVar26 = uVar18;
            if ((int)uVar18 < iVar3) {
              uVar22 = uVar18 | 1;
              lVar31 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar22 * 4);
              lVar30 = (long)(int)uVar18;
              lVar32 = (long)*(int *)(param_1 + 0xbc0 + lVar30 * 4);
              uVar25 = *(ushort *)(lVar5 + lVar32 * 4);
              uVar17 = *(ushort *)(lVar5 + lVar31 * 4);
              if (uVar17 < uVar25) {
LAB_004b8359:
                lVar30 = (long)(int)uVar22;
                uVar26 = uVar22;
              }
              else {
                if (uVar17 != uVar25) goto LAB_004b8363;
                if (*(byte *)(param_1 + 0x14bc + lVar31) <= *(byte *)(param_1 + 0x14bc + lVar32))
                goto LAB_004b8359;
              }
            }
            else {
LAB_004b8363:
              lVar30 = (long)(int)uVar18;
            }
            iVar21 = *(int *)(param_1 + 0xbc0 + lVar30 * 4);
            uVar25 = *(ushort *)(lVar5 + (long)iVar21 * 4);
            uVar17 = *(ushort *)(lVar5 + (long)iVar4 * 4);
            if ((uVar17 < uVar25) ||
               ((uVar17 == uVar25 &&
                (*(byte *)(param_1 + 0x14bc + (long)iVar4) <=
                 *(byte *)(param_1 + 0x14bc + (long)iVar21))))) {
              uVar26 = uVar15;
              break;
            }
            *(int *)(param_1 + 0xbc0 + (long)(int)uVar15 * 4) = iVar21;
            uVar18 = uVar26 * 2;
            iVar3 = *(int *)(param_1 + 0x14b4);
            uVar15 = uVar26;
          } while ((int)uVar18 <= iVar3);
          lVar30 = (long)(int)uVar26;
        }
        lVar32 = 1;
        lVar31 = (long)iVar28;
        *(int *)(param_1 + 0xbc0 + lVar30 * 4) = iVar4;
        iVar21 = *(int *)(param_1 + 0xbc4);
        lVar30 = (long)iVar21;
        iVar3 = *(int *)(param_1 + 0x14b8);
        *(int *)(param_1 + 0x14b8) = iVar3 + -1;
        *(int *)(param_1 + 0xbbc + (long)iVar3 * 4) = iVar28;
        iVar3 = *(int *)(param_1 + 0x14b8);
        *(int *)(param_1 + 0x14b8) = iVar3 + -1;
        *(int *)(param_1 + 0xbbc + (long)iVar3 * 4) = iVar21;
        *(short *)(lVar5 + lVar19 * 4) =
             *(short *)(lVar5 + lVar30 * 4) + *(short *)(lVar5 + lVar31 * 4);
        bVar16 = *(byte *)(param_1 + 0x14bc + lVar31);
        bVar2 = *(byte *)(param_1 + 0x14bc + lVar30);
        if (bVar16 < bVar2) {
          bVar16 = bVar2;
        }
        *(byte *)(param_1 + 0x14bc + lVar19) = bVar16 + 1;
        *(short *)(lVar5 + 2 + lVar30 * 4) = (short)lVar19;
        *(short *)(lVar5 + 2 + lVar31 * 4) = (short)lVar19;
        *(int *)(param_1 + 0xbc4) = (int)lVar19;
        iVar21 = *(int *)(param_1 + 0x14b4);
        if (1 < iVar21) {
          uVar18 = 2;
          uVar15 = 1;
          do {
            uVar26 = uVar18;
            if ((int)uVar18 < iVar21) {
              uVar22 = uVar18 | 1;
              lVar31 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar22 * 4);
              lVar30 = (long)(int)uVar18;
              lVar32 = (long)*(int *)(param_1 + 0xbc0 + lVar30 * 4);
              uVar25 = *(ushort *)(lVar5 + lVar32 * 4);
              uVar17 = *(ushort *)(lVar5 + lVar31 * 4);
              if (uVar17 < uVar25) {
LAB_004b84b8:
                lVar30 = (long)(int)uVar22;
                uVar26 = uVar22;
              }
              else {
                if (uVar17 != uVar25) goto LAB_004b84c3;
                if (*(byte *)(param_1 + 0x14bc + lVar31) <= *(byte *)(param_1 + 0x14bc + lVar32))
                goto LAB_004b84b8;
              }
            }
            else {
LAB_004b84c3:
              lVar30 = (long)(int)uVar18;
            }
            iVar21 = *(int *)(param_1 + 0xbc0 + lVar30 * 4);
            uVar25 = *(ushort *)(lVar5 + (long)iVar21 * 4);
            uVar17 = *(ushort *)(lVar5 + lVar19 * 4);
            if ((uVar17 < uVar25) ||
               ((uVar17 == uVar25 &&
                (*(byte *)(param_1 + 0x14bc + lVar19) <= *(byte *)(param_1 + 0x14bc + (long)iVar21))
                ))) break;
            *(int *)(param_1 + 0xbc0 + (long)(int)uVar15 * 4) = iVar21;
            uVar18 = uVar26 * 2;
            iVar21 = *(int *)(param_1 + 0x14b4);
            uVar15 = uVar26;
          } while ((int)uVar18 <= iVar21);
          lVar32 = (long)(int)uVar15;
        }
        *(int *)(param_1 + 0xbc0 + lVar32 * 4) = (int)lVar19;
        lVar19 = lVar19 + 1;
        iVar21 = *(int *)(param_1 + 0x14b4);
        if (iVar21 < 2) {
          iVar21 = *(int *)(param_1 + 0x14b8);
          *(int *)(param_1 + 0x14b8) = iVar21 + -1;
          *(undefined4 *)(param_1 + 0xbbc + (long)iVar21 * 4) = *(undefined4 *)(param_1 + 0xbc4);
          lVar19 = *param_2;
          lVar32 = param_2[1];
          plVar6 = (long *)param_2[2];
          lVar30 = *plVar6;
          local_38 = plVar6[1];
          lVar9 = plVar6[2];
          lVar10 = plVar6[3];
          iVar21 = (int)lVar10;
          lVar31 = (long)iVar21;
          *(undefined8 *)(param_1 + 0xbb0) = 0;
          *(undefined8 *)(param_1 + 3000) = 0;
          *(undefined8 *)(param_1 + 0xba0) = 0;
          *(undefined8 *)(param_1 + 0xba8) = 0;
          *(undefined2 *)
           (lVar19 + 2 + (long)*(int *)(param_1 + 0xbc0 + (long)*(int *)(param_1 + 0x14b8) * 4) * 4)
               = 0;
          iVar3 = *(int *)(param_1 + 0x14b8);
          if ((long)iVar3 < 0x23c) {
            lVar23 = 0;
            iVar28 = 0;
            do {
              iVar4 = *(int *)(param_1 + (long)iVar3 * 4 + 0xbc4 + lVar23 * 4);
              lVar29 = (long)iVar4;
              uVar25 = *(ushort *)(lVar19 + 2 + (ulong)*(ushort *)(lVar19 + 2 + lVar29 * 4) * 4);
              if ((int)(uint)uVar25 < iVar21) {
                *(short *)(lVar19 + 2 + lVar29 * 4) = (short)(uVar25 + 1);
                iVar8 = uVar25 + 1;
              }
              else {
                *(short *)(lVar19 + 2 + lVar29 * 4) = (short)lVar10;
                iVar8 = iVar21;
              }
              if (iVar4 <= (int)lVar32) {
                psVar24 = (short *)(param_1 + 0xba0 + (long)iVar8 * 2);
                *psVar24 = *psVar24 + 1;
                iVar12 = 0;
                if ((int)lVar9 <= iVar4) {
                  iVar12 = *(int *)(local_38 + (long)(iVar4 - (int)lVar9) * 4);
                }
                uVar13 = (ulong)*(ushort *)(lVar19 + lVar29 * 4);
                *(long *)(param_1 + 0x1718) =
                     *(long *)(param_1 + 0x1718) + (uint)(iVar8 + iVar12) * uVar13;
                if (lVar30 != 0) {
                  *(long *)(param_1 + 0x1720) =
                       *(long *)(param_1 + 0x1720) +
                       (iVar12 + (uint)*(ushort *)(lVar30 + 2 + lVar29 * 4)) * uVar13;
                }
              }
              iVar28 = iVar28 + (uint)(iVar21 <= (int)(uint)uVar25);
              lVar23 = lVar23 + 1;
            } while (0x23c - iVar3 != (int)lVar23);
            if (iVar28 != 0) {
              do {
                psVar24 = (short *)(param_1 + lVar31 * 2 + 0xba0);
                lVar30 = (lVar31 << 0x20) + 0x100000000;
                do {
                  lVar30 = lVar30 + -0x100000000;
                  psVar1 = psVar24 + -1;
                  psVar24 = psVar24 + -1;
                } while (*psVar1 == 0);
                *psVar24 = *psVar1 + -1;
                psVar24 = (short *)(param_1 + 0xba0 + (lVar30 >> 0x1f));
                *psVar24 = *psVar24 + 2;
                uVar25 = *(short *)(param_1 + 0xba0 + lVar31 * 2) - 1;
                *(ushort *)(param_1 + 0xba0 + lVar31 * 2) = uVar25;
                bVar7 = 2 < iVar28;
                iVar28 = iVar28 + -2;
              } while (bVar7);
              if (iVar21 != 0) {
                iVar21 = 0x23d;
                while( true ) {
                  if (uVar25 != 0) {
                    uVar18 = (uint)uVar25;
                    do {
                      piVar27 = (int *)(param_1 + 0xbbc + (long)iVar21 * 4);
                      do {
                        iVar3 = *piVar27;
                        lVar30 = (long)iVar3;
                        iVar21 = iVar21 + -1;
                        piVar27 = piVar27 + -1;
                      } while ((int)lVar32 < iVar3);
                      uVar25 = *(ushort *)(lVar19 + 2 + lVar30 * 4);
                      if ((uint)lVar31 != (uint)uVar25) {
                        *(long *)(param_1 + 0x1718) =
                             *(long *)(param_1 + 0x1718) +
                             (ulong)*(ushort *)(lVar19 + lVar30 * 4) * (lVar31 - (ulong)uVar25);
                        *(short *)(lVar19 + 2 + lVar30 * 4) = (short)lVar31;
                      }
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  lVar31 = lVar31 + -1;
                  if ((int)lVar31 == 0) break;
                  uVar25 = *(ushort *)(param_1 + 0xba0 + lVar31 * 2);
                }
              }
            }
          }
          auStack_68[1] = *(short *)(param_1 + 0xba0) * 2;
          sVar11 = *(short *)(param_1 + 0xba2) + *(short *)(param_1 + 0xba0) * 2;
          auStack_68[2] = sVar11 * 2;
          sVar11 = *(short *)(param_1 + 0xba4) + sVar11 * 2;
          auStack_68[3] = sVar11 * 2;
          sVar11 = *(short *)(param_1 + 0xba6) + sVar11 * 2;
          local_60 = sVar11 * 2;
          sVar11 = *(short *)(param_1 + 0xba8) + sVar11 * 2;
          local_5e = sVar11 * 2;
          sVar11 = *(short *)(param_1 + 0xbaa) + sVar11 * 2;
          local_5c = sVar11 * 2;
          sVar11 = *(short *)(param_1 + 0xbac) + sVar11 * 2;
          local_5a = sVar11 * 2;
          sVar11 = *(short *)(param_1 + 0xbae) + sVar11 * 2;
          local_58 = sVar11 * 2;
          sVar11 = *(short *)(param_1 + 0xbb0) + sVar11 * 2;
          local_56 = sVar11 * 2;
          sVar11 = *(short *)(param_1 + 0xbb2) + sVar11 * 2;
          local_54 = sVar11 * 2;
          local_52 = (*(short *)(param_1 + 0xbb4) + sVar11 * 2) * 2;
          local_50 = (local_52 + *(short *)(param_1 + 0xbb6)) * 2;
          local_4e = (local_50 + *(short *)(param_1 + 3000)) * 2;
          local_4c = (local_4e + *(short *)(param_1 + 0xbba)) * 2;
          local_4a = (local_4c + *(short *)(param_1 + 0xbbc)) * 2;
          if (-1 < iVar20) {
            uVar13 = 0;
            do {
              uVar25 = *(ushort *)(lVar5 + 2 + uVar13 * 4);
              if (uVar25 != 0) {
                uVar15 = (uint)auStack_68[uVar25];
                uVar17 = auStack_68[uVar25] + 1;
                auStack_68[uVar25] = uVar17;
                uVar26 = uVar25 & 3;
                uVar18 = 0;
                if (2 < uVar25 - 1) {
                  uVar22 = uVar25 & 0xfffffffc;
                  uVar18 = 0;
                  do {
                    iVar21 = (uVar15 >> 3 & 1) +
                             (uVar15 >> 2 & 1 | (uVar15 & 2) + (uVar15 & 1 | uVar18) * 4) * 2;
                    uVar17 = (ushort)iVar21;
                    uVar15 = uVar15 >> 4;
                    uVar18 = iVar21 * 2;
                    uVar22 = uVar22 - 4;
                  } while (uVar22 != 0);
                }
                if ((uVar25 & 3) != 0) {
                  do {
                    uVar18 = uVar15 & 1 | uVar18;
                    uVar17 = (ushort)uVar18;
                    uVar15 = uVar15 >> 1;
                    uVar18 = uVar18 * 2;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                *(ushort *)(lVar5 + uVar13 * 4) = uVar17;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != iVar20 + 1);
          }
          return;
        }
      } while( true );
    }
    uVar13 = uVar13 - 1;
    uVar15 = *(uint *)(param_1 + 0x14b4);
  } while( true );
}


