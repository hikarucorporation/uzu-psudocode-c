// Function : png_xy_from_XYZ
// Namespace: juce:pnglibNamespace
// Entry    : 003a7060
// Prototype: undefined8 png_xy_from_XYZ(int * param_1, int * param_2)
// Body     : 003a7060 - 003a73bf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_xy_from_XYZ(juce::pnglibNamespace::png_xy*,
   juce::pnglibNamespace::png_XYZ const*) */

undefined8 __cdecl juce::pnglibNamespace::png_xy_from_XYZ(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  
  iVar6 = *param_2;
  uVar10 = 1;
  iVar7 = param_2[1] + iVar6 + param_2[2];
  if (iVar7 != 0) {
    iVar8 = 0;
    iVar3 = 0;
    if (iVar6 != 0) {
      dVar11 = floor(((double)iVar6 * DAT_005de6e8) / (double)iVar7 + DAT_005db338);
      if (DAT_0065a018 < dVar11) {
        return 1;
      }
      if (dVar11 < DAT_005de630) {
        return 1;
      }
      iVar3 = (int)dVar11;
    }
    *param_1 = iVar3;
    if (param_2[1] != 0) {
      dVar11 = floor(((double)param_2[1] * DAT_005de6e8) / (double)iVar7 + DAT_005db338);
      if (DAT_0065a018 < dVar11) {
        return 1;
      }
      if (dVar11 < DAT_005de630) {
        return 1;
      }
      iVar8 = (int)dVar11;
    }
    param_1[1] = iVar8;
    iVar6 = param_2[3];
    iVar3 = param_2[4] + iVar6 + param_2[5];
    if (iVar3 != 0) {
      iVar8 = *param_2;
      iVar1 = param_2[1];
      iVar9 = 0;
      iVar4 = 0;
      if (iVar6 != 0) {
        dVar11 = floor(((double)iVar6 * DAT_005de6e8) / (double)iVar3 + DAT_005db338);
        if (DAT_0065a018 < dVar11) {
          return 1;
        }
        if (dVar11 < DAT_005de630) {
          return 1;
        }
        iVar4 = (int)dVar11;
      }
      param_1[2] = iVar4;
      if (param_2[4] != 0) {
        dVar11 = floor(((double)param_2[4] * DAT_005de6e8) / (double)iVar3 + DAT_005db338);
        if (DAT_0065a018 < dVar11) {
          return 1;
        }
        if (dVar11 < DAT_005de630) {
          return 1;
        }
        iVar9 = (int)dVar11;
      }
      param_1[3] = iVar9;
      iVar6 = param_2[6];
      iVar4 = param_2[7] + iVar6 + param_2[8];
      if (iVar4 != 0) {
        iVar9 = param_2[3];
        iVar2 = param_2[4];
        iVar5 = 0;
        if (iVar6 != 0) {
          dVar11 = floor(((double)iVar6 * DAT_005de6e8) / (double)iVar4 + DAT_005db338);
          if (DAT_0065a018 < dVar11) {
            return 1;
          }
          if (dVar11 < DAT_005de630) {
            return 1;
          }
          iVar5 = (int)dVar11;
        }
        iVar6 = 0;
        param_1[4] = iVar5;
        if (param_2[7] != 0) {
          dVar11 = floor(((double)param_2[7] * DAT_005de6e8) / (double)iVar4 + DAT_005db338);
          if (DAT_0065a018 < dVar11) {
            return 1;
          }
          if (dVar11 < DAT_005de630) {
            return 1;
          }
          iVar6 = (int)dVar11;
        }
        param_1[5] = iVar6;
        iVar4 = iVar3 + iVar7 + iVar4;
        if (iVar4 != 0) {
          iVar5 = 0;
          dVar11 = (double)iVar4;
          iVar6 = param_2[7];
          iVar7 = 0;
          iVar3 = iVar8 + iVar9 + param_2[6];
          if (iVar3 != 0) {
            dVar12 = floor(((double)iVar3 * DAT_005de6e8) / dVar11 + DAT_005db338);
            if (DAT_0065a018 < dVar12) {
              return 1;
            }
            if (dVar12 < DAT_005de630) {
              return 1;
            }
            iVar7 = (int)dVar12;
          }
          param_1[6] = iVar7;
          iVar6 = iVar1 + iVar2 + iVar6;
          if (iVar6 != 0) {
            dVar11 = floor(((double)iVar6 * DAT_005de6e8) / dVar11 + DAT_005db338);
            if (DAT_0065a018 < dVar11) {
              return 1;
            }
            if (dVar11 < DAT_005de630) {
              return 1;
            }
            iVar5 = (int)dVar11;
          }
          param_1[7] = iVar5;
          uVar10 = 0;
        }
      }
    }
  }
  return uVar10;
}


