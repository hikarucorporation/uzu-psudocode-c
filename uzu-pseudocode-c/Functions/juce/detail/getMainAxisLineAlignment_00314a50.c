// Function : getMainAxisLineAlignment
// Namespace: juce:detail
// Entry    : 00314a50
// Prototype: undefined getMainAxisLineAlignment(undefined8 param_1, float * param_2, byte param_3, ulong param_4, ulong param_5, ulong param_6, ulong param_7, char param_8)
// Body     : 00314a50 - 00314cb2


/* WARNING: Unknown calling convention: __cdecl */
/* juce::detail::getMainAxisLineAlignment(juce::Justification, juce::Span<juce::detail::ShapedGlyph
   const, 18446744073709551615ul>, juce::detail::LineLength, std::optional<float>,
   std::optional<float>, bool) */

void __cdecl
juce::detail::getMainAxisLineAlignment
          (undefined8 param_1,float *param_2,byte param_3,ulong param_4,ulong param_5,ulong param_6,
          ulong param_7,char param_8)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uStack_14;
  
  fVar10 = (float)param_1;
  fVar11 = (float)((ulong)param_1 >> 0x20);
  if (param_8 == '\0') {
    fVar10 = fVar11;
    if ((param_6 & 0xff00000000) != 0) goto LAB_00314ab8;
LAB_00314a74:
    fVar5 = 0.0;
  }
  else {
    if ((param_6 & 0xff00000000) == 0) goto LAB_00314a74;
LAB_00314ab8:
    fVar5 = (float)param_6;
  }
  if ((param_7 & 0xff00000000) != 0) {
    fVar5 = (float)param_7;
  }
  uVar7 = param_5;
  if (DAT_005de558 + fVar5 < fVar10) {
    if ((param_7 & 0xff00000000) != 0) {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = fVar10;
      *(ulong *)(param_2 + 3) = (ulong)uStack_14;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      return;
    }
    if (param_4 == 0) {
      fVar11 = 0.0;
      bVar1 = true;
      lVar9 = 0;
      uVar6 = param_5;
      goto LAB_00314c2d;
    }
    if (*(long *)((param_5 - 0x10) + param_4 * 0x20) < *(long *)(param_5 + 0x10)) {
      fVar11 = fVar5 - fVar10;
    }
    else {
      fVar11 = 0.0;
    }
    uVar6 = param_4 * 0x20 + param_5;
  }
  else {
    if ((param_3 & 4) == 0) {
      fVar11 = 0.0;
      if ((param_3 & 2) != 0) {
        fVar11 = fVar5 - fVar10;
      }
    }
    else {
      fVar11 = (fVar5 - fVar11) * DAT_005d9044;
    }
    uVar6 = param_4 * 0x20 + param_5;
    if (param_4 == 0) {
      bVar1 = true;
      lVar9 = 0;
      uVar7 = uVar6;
      goto LAB_00314c2d;
    }
  }
  lVar9 = 0;
  uVar2 = param_5;
  do {
    lVar9 = (lVar9 + 1) - (ulong)(*(char *)(uVar2 + 0x1d) == '\0');
    uVar2 = uVar2 + 0x20;
  } while (uVar2 != uVar6);
  lVar4 = param_4 << 5;
  if (3 < (long)param_4) {
    lVar3 = ((param_4 & 0x7ffffffffffffff) >> 2) + 1;
    lVar4 = uVar6 - param_5;
    uVar2 = param_5 + 0x40;
    do {
      uVar7 = uVar2;
      if (*(char *)(uVar7 - 0x23) == '\0') {
        uVar7 = uVar7 - 0x40;
        goto LAB_00314c2a;
      }
      if (*(char *)(uVar7 - 3) == '\0') {
        uVar7 = uVar7 - 0x20;
        goto LAB_00314c2a;
      }
      if (*(char *)(uVar7 + 0x1d) == '\0') goto LAB_00314c2a;
      if (*(char *)(uVar7 + 0x3d) == '\0') {
        uVar7 = uVar7 + 0x20;
        goto LAB_00314c2a;
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + -0x80;
      uVar2 = uVar7 + 0x80;
    } while (1 < lVar3);
    uVar7 = uVar7 + 0x40;
  }
  lVar4 = lVar4 >> 5;
  if (lVar4 == 1) {
LAB_00314c03:
    bVar1 = false;
    if (*(char *)(uVar7 + 0x1d) != '\0') {
      uVar7 = uVar6;
    }
  }
  else {
    if (lVar4 == 2) {
LAB_00314bf8:
      if (*(char *)(uVar7 + 0x1d) != '\0') {
        uVar7 = uVar7 + 0x20;
        goto LAB_00314c03;
      }
    }
    else {
      if (lVar4 != 3) {
        bVar1 = false;
        uVar7 = uVar6;
        goto LAB_00314c2d;
      }
      if (*(char *)(uVar7 + 0x1d) != '\0') {
        uVar7 = uVar7 + 0x20;
        goto LAB_00314bf8;
      }
    }
LAB_00314c2a:
    bVar1 = false;
  }
LAB_00314c2d:
  lVar4 = 0;
  if ((!bVar1) && (uVar6 = uVar6 - 0x20, param_5 <= uVar6)) {
    lVar4 = 0;
    do {
      if (*(char *)(uVar6 + 0x1d) == '\0') break;
      lVar4 = lVar4 + 1;
      uVar6 = uVar6 - 0x20;
    } while (param_5 <= uVar6);
  }
  lVar3 = 0;
  fVar12 = 0.0;
  if (((param_3 & 0x40) == 0) || (DAT_005de558 + fVar5 < fVar10)) {
    lVar8 = 0;
  }
  else {
    lVar8 = (long)(uVar7 - param_5) >> 5;
    lVar3 = param_4 - lVar4;
    if ((long)(param_4 - lVar4) <= lVar8) {
      lVar3 = lVar8;
    }
    lVar9 = lVar9 - (lVar4 + lVar8);
    if (0 < lVar9) {
      fVar12 = (fVar5 - fVar10) / (float)lVar9;
    }
  }
  *param_2 = fVar11;
  param_2[1] = fVar12;
  param_2[2] = fVar10;
  *(long *)(param_2 + 4) = lVar8;
  *(long *)(param_2 + 6) = lVar3;
  return;
}


