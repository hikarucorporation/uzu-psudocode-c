// Function : getDisplayForRect
// Namespace: juce:Displays
// Entry    : 002caaf0
// Prototype: long getDisplayForRect(long param_1, int param_2, undefined8 param_3, undefined8 param_4, char param_5)
// Body     : 002caaf0 - 002cad65


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Displays::getDisplayForRect(juce::Rectangle<int>, bool) const */

long __cdecl
juce::Displays::getDisplayForRect
          (long param_1,int param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  double dVar15;
  double __x;
  double dVar16;
  
  if (param_2 == 0) {
    lVar13 = 0;
  }
  else {
    iVar3 = (int)param_3;
    iVar12 = (int)param_4 + iVar3;
    iVar9 = (int)((ulong)param_3 >> 0x20);
    iVar5 = (int)((ulong)param_4 >> 0x20) + iVar9;
    if (param_5 == '\0') {
      lVar11 = (long)param_2 * 0x70;
      iVar10 = -1;
      lVar13 = 0;
      do {
        iVar7 = (int)*(undefined8 *)(param_1 + 4);
        iVar8 = iVar7;
        if (iVar7 < iVar3) {
          iVar8 = iVar3;
        }
        iVar7 = (int)*(undefined8 *)(param_1 + 0xc) + iVar7;
        if (iVar12 < iVar7) {
          iVar7 = iVar12;
        }
        iVar7 = iVar7 - iVar8;
        if (iVar7 < 0) {
LAB_002cad00:
          iVar7 = 0;
          iVar14 = 0;
        }
        else {
          iVar14 = (int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
          iVar8 = iVar14;
          if (iVar14 < iVar9) {
            iVar8 = iVar9;
          }
          iVar14 = (int)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) + iVar14;
          if (iVar5 < iVar14) {
            iVar14 = iVar5;
          }
          iVar14 = iVar14 - iVar8;
          if (iVar14 < 0) goto LAB_002cad00;
        }
        if (iVar10 <= iVar14 * iVar7) {
          iVar10 = iVar14 * iVar7;
          lVar13 = param_1;
        }
        param_1 = param_1 + 0x70;
        lVar11 = lVar11 + -0x70;
      } while (lVar11 != 0);
    }
    else {
      lVar11 = (long)param_2 * 0x70;
      iVar10 = -1;
      lVar13 = 0;
      dVar15 = DAT_0065a018;
      do {
        uVar2 = *(undefined8 *)(param_1 + 0xc);
        dVar1 = *(double *)(param_1 + 0x50);
        dVar16 = dVar1 * DAT_005db340;
        iVar7 = -0x80000000;
        if (DAT_005de630 < dVar16) {
          dVar15 = floor(dVar16);
          iVar7 = (int)dVar15;
          dVar15 = DAT_0065a018;
        }
        __x = (double)(int)uVar2 * dVar1 + dVar16;
        iVar8 = 0x7fffffff;
        iVar14 = 0x7fffffff;
        if (__x < dVar15) {
          dVar15 = ceil(__x);
          iVar14 = (int)dVar15;
          dVar15 = DAT_0065a018;
        }
        dVar16 = dVar16 + dVar1 * (double)(int)((ulong)uVar2 >> 0x20);
        if (dVar16 < dVar15) {
          dVar15 = ceil(dVar16);
          iVar8 = (int)dVar15;
          dVar15 = DAT_0065a018;
        }
        iVar4 = (int)*(undefined8 *)(param_1 + 0x44);
        iVar6 = iVar7 + iVar4;
        if (iVar6 < iVar3) {
          iVar6 = iVar3;
          if (iVar12 < iVar14 + iVar4) goto LAB_002cac6d;
LAB_002cac8b:
          iVar6 = (iVar14 + iVar4) - iVar6;
          if (iVar6 < 0) goto LAB_002cab50;
LAB_002cac96:
          iVar4 = (int)((ulong)*(undefined8 *)(param_1 + 0x44) >> 0x20);
          iVar7 = iVar7 + iVar4;
          iVar14 = iVar9;
          if (iVar9 <= iVar7) {
            iVar14 = iVar7;
          }
          iVar8 = iVar8 + iVar4;
          iVar7 = iVar5;
          if (iVar8 <= iVar5) {
            iVar7 = iVar8;
          }
          iVar7 = iVar7 - iVar14;
          if (iVar7 < 0) goto LAB_002cab50;
        }
        else {
          if (iVar14 + iVar4 <= iVar12) goto LAB_002cac8b;
LAB_002cac6d:
          iVar6 = iVar12 - iVar6;
          if (-1 < iVar6) goto LAB_002cac96;
LAB_002cab50:
          iVar6 = 0;
          iVar7 = 0;
        }
        if (iVar10 <= iVar7 * iVar6) {
          iVar10 = iVar7 * iVar6;
          lVar13 = param_1;
        }
        param_1 = param_1 + 0x70;
        lVar11 = lVar11 + -0x70;
      } while (lVar11 != 0);
    }
  }
  return lVar13;
}


