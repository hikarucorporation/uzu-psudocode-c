// Function : clipToRectangle
// Namespace: juce:EdgeTable
// Entry    : 002f11d0
// Prototype: undefined clipToRectangle(long * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 002f11d0 - 002f144c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::EdgeTable::clipToRectangle(juce::Rectangle<int>) */

void __cdecl juce::EdgeTable::clipToRectangle(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  uVar14 = param_1[2];
  iVar17 = (int)param_2;
  iVar18 = (int)uVar14;
  iVar16 = (int)param_3 + iVar17;
  if (iVar17 < iVar18) {
    iVar17 = iVar18;
  }
  iVar10 = (int)((ulong)param_2 >> 0x20);
  iVar9 = (int)(uVar14 >> 0x20);
  iVar7 = iVar10;
  if (iVar10 < iVar9) {
    iVar7 = iVar9;
  }
  iVar18 = (int)param_1[3] + iVar18;
  if (iVar18 < iVar16) {
    iVar16 = iVar18;
  }
  if (-1 < iVar16 - iVar17) {
    iVar10 = (int)((ulong)param_3 >> 0x20) + iVar10;
    iVar3 = (int)((ulong)param_1[3] >> 0x20);
    iVar4 = iVar3 + iVar9;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
    if (((-1 < iVar10 - iVar7) && (0 < iVar16 - iVar17)) && (iVar10 != iVar7)) {
      uVar15 = iVar7 - iVar9;
      iVar10 = iVar10 - iVar9;
      if (iVar10 < iVar3) {
        *(int *)((long)param_1 + 0x1c) = iVar10;
      }
      if (0 < (int)uVar15) {
        lVar8 = *param_1;
        if ((ulong)uVar15 - 1 < 3) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          do {
            *(undefined4 *)(lVar8 + (long)*(int *)((long)param_1 + 0x24) * uVar14 * 4) = 0;
            *(undefined4 *)(lVar8 + (long)*(int *)((long)param_1 + 0x24) * (uVar14 + 1) * 4) = 0;
            *(undefined4 *)(lVar8 + (long)*(int *)((long)param_1 + 0x24) * (uVar14 + 2) * 4) = 0;
            *(undefined4 *)(lVar8 + (long)*(int *)((long)param_1 + 0x24) * (uVar14 + 3) * 4) = 0;
            uVar14 = uVar14 + 4;
          } while ((uVar15 & 0xfffffffc) != uVar14);
        }
        if ((ulong)(uVar15 & 3) != 0) {
          lVar12 = -(ulong)(uVar15 & 3);
          do {
            *(undefined4 *)(lVar8 + (long)*(int *)((long)param_1 + 0x24) * uVar14 * 4) = 0;
            uVar14 = uVar14 + 1;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0);
        }
        uVar14 = (ulong)*(uint *)(param_1 + 2);
        iVar18 = (int)param_1[3] + *(uint *)(param_1 + 2);
      }
      if (((int)uVar14 < iVar17) || (iVar16 < iVar18)) {
        if (iVar16 < iVar18) {
          iVar18 = iVar16;
        }
        if (iVar10 - uVar15 != 0 && (int)uVar15 <= iVar10) {
          iVar17 = iVar17 * 0x100;
          iVar18 = iVar18 * 0x100;
          piVar11 = (int *)((long)(int)uVar15 * (long)*(int *)((long)param_1 + 0x24) * 4 + *param_1)
          ;
          iVar16 = iVar10 - uVar15;
          do {
            iVar7 = *piVar11;
            lVar8 = (long)iVar7;
            if (lVar8 != 0) {
              piVar6 = piVar11 + lVar8 * 2 + -1;
              iVar10 = piVar11[lVar8 * 2 + -1];
              if (iVar18 < piVar11[lVar8 * 2 + -1]) {
                if (iVar18 <= piVar11[1]) {
                  *piVar11 = 0;
                  goto LAB_002f1363;
                }
                if (iVar18 < piVar6[-2]) {
                  piVar5 = piVar6;
                  do {
                    iVar7 = iVar7 + -1;
                    *piVar11 = iVar7;
                    piVar6 = piVar5 + -2;
                    piVar13 = piVar5 + -4;
                    piVar5 = piVar6;
                  } while (iVar18 < *piVar13);
                }
                *piVar6 = iVar18;
                piVar6[1] = 0;
                iVar10 = iVar18;
              }
              if (piVar11[1] < iVar17) {
                piVar5 = piVar11 + 1;
                if (iVar17 < iVar10) {
                  do {
                    piVar13 = piVar6 + -2;
                    piVar1 = piVar6 + -2;
                    piVar6 = piVar13;
                  } while (iVar17 < *piVar1);
                }
                else {
                  piVar13 = piVar6;
                }
                uVar15 = (uint)((ulong)((long)piVar13 - (long)piVar5) >> 2);
                if (1 < (int)uVar15) {
                  iVar7 = *piVar11 - (uVar15 >> 1);
                  *piVar11 = iVar7;
                  memmove(piVar5,piVar13,(long)iVar7 << 3);
                }
                *piVar5 = iVar17;
              }
            }
LAB_002f1363:
            piVar11 = piVar11 + *(int *)((long)param_1 + 0x24);
            bVar2 = 1 < iVar16;
            iVar16 = iVar16 + -1;
          } while (bVar2);
        }
      }
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  return;
}


