// Function : createLookupTable
// Namespace: juce:ColourGradient
// Entry    : 002ec2e0
// Prototype: undefined createLookupTable(ColourGradient * this, long param_1, int param_2)
// Body     : 002ec2e0 - 002ec685


/* juce::ColourGradient::createLookupTable(juce::PixelARGB*, int) const */

void __thiscall
juce::ColourGradient::createLookupTable(ColourGradient *this,long param_1,int param_2)

{
  uint *puVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  
  dVar2 = DAT_005d9098;
  iVar7 = *(int *)(this + 0x24);
  if (iVar7 < 2) {
    uVar9 = iVar7 - 1;
    iVar19 = 0;
  }
  else {
    iVar19 = 0;
    lVar20 = 0;
    do {
      lVar16 = *(long *)(this + 0x18);
      lVar10 = lVar20 + 1;
      iVar23 = SUB84(*(double *)(lVar16 + lVar10 * 0x10) * (double)(param_2 + -1) + dVar2,0);
      iVar24 = iVar23 - iVar19;
      if (0 < iVar24) {
        uVar9 = *(uint *)(lVar16 + 8 + lVar20 * 0x10);
        uVar11 = *(uint *)(lVar16 + 8 + lVar10 * 0x10);
        uVar22 = uVar9 & 0xff00ff;
        uVar9 = uVar9 >> 8 & 0xff00ff;
        puVar6 = (uint *)(param_1 + (long)iVar19 * 4);
        iVar7 = 0;
        do {
          iVar5 = iVar7 / iVar24;
          uVar8 = (iVar5 * ((uVar11 & 0xff00ff) - uVar22) >> 8) + uVar22;
          uVar14 = iVar5 * ((uVar11 >> 8 & 0xff00ff) - uVar9) + uVar9 * 0x100;
          uVar21 = uVar8 >> 0x10;
          uVar17 = uVar14 >> 0x18;
          cVar3 = (char)(uVar14 >> 0x18);
          if (cVar3 == -1) {
            uVar4 = uVar14 >> 8 & 0xff00ff;
          }
          else if (cVar3 == '\0') {
            uVar8 = 0;
            uVar4 = 0;
            uVar21 = 0;
          }
          else {
            uVar8 = (uVar8 & 0xff) * uVar17 + 0x7f >> 8;
            uVar4 = (uVar14 >> 8 & 0xff) * uVar17 + 0x7f >> 8;
            uVar21 = (uVar21 & 0xff) * uVar17 + 0x7f >> 8;
          }
          *puVar6 = uVar8 & 0xff | uVar14 & 0xff000000 | (uVar4 & 0xff) << 8 |
                    (uVar21 & 0xff) << 0x10;
          puVar6 = puVar6 + 1;
          iVar19 = iVar19 + 1;
          iVar7 = iVar7 + 0x100;
        } while (iVar23 != iVar19);
        iVar7 = *(int *)(this + 0x24);
      }
      uVar9 = iVar7 - 1;
      lVar20 = lVar10;
    } while (lVar10 < (int)uVar9);
  }
  uVar11 = 0;
  if (0 < iVar7) {
    uVar11 = *(uint *)(*(long *)(this + 0x18) + 8 + (ulong)uVar9 * 0x10);
    uVar22 = uVar11 >> 8;
    uVar8 = uVar11 >> 0x10;
    uVar14 = uVar11 >> 0x18;
    cVar3 = (char)(uVar11 >> 0x18);
    uVar9 = uVar11;
    if (cVar3 == -1) goto joined_r0x002ec4c8;
    if (cVar3 != '\0') {
      uVar22 = (uVar11 >> 8 & 0xff) * uVar14 + 0x7f >> 8;
      uVar8 = (uVar11 >> 0x10 & 0xff) * uVar14 + 0x7f >> 8;
      uVar9 = (uVar11 & 0xff) * uVar14 + 0x7f >> 8;
      goto joined_r0x002ec4c8;
    }
  }
  uVar8 = 0;
  uVar22 = 0;
  uVar9 = 0;
joined_r0x002ec4c8:
  if (iVar19 != param_2) {
    lVar20 = (long)iVar19;
    puVar6 = (uint *)(param_1 + lVar20 * 4);
    uVar9 = uVar9 & 0xff | (uVar22 & 0xff) << 8 | (uVar8 & 0xff) << 0x10 | uVar11 & 0xff000000;
    uVar12 = ((long)param_2 * 4 + lVar20 * -4) - 4;
    if (0x1b < uVar12) {
      uVar13 = (uVar12 >> 2) + 1;
      uVar18 = uVar13 & 0xfffffffffffffff8;
      uVar15 = (uVar18 - 8 >> 3) + 1;
      uVar12 = (ulong)((uint)uVar15 & 7);
      if (uVar18 - 8 < 0x38) {
        lVar10 = 0;
      }
      else {
        uVar15 = uVar15 & 0xfffffffffffffff8;
        lVar16 = param_1 + lVar20 * 4;
        lVar10 = 0;
        do {
          puVar1 = (uint *)(lVar16 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0x10 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0x20 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0x30 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0x40 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0x50 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0x60 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0x70 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0x80 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0x90 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0xa0 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0xb0 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0xc0 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0xd0 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0xe0 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar16 + 0xf0 + lVar10 * 4);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          lVar10 = lVar10 + 0x40;
          uVar15 = uVar15 - 8;
        } while (uVar15 != 0);
      }
      if (uVar12 != 0) {
        lVar20 = param_1 + (lVar10 + lVar20) * 4;
        lVar16 = 0;
        do {
          puVar1 = (uint *)(lVar20 + lVar16);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          puVar1 = (uint *)(lVar20 + 0x10 + lVar16);
          *puVar1 = uVar9;
          puVar1[1] = uVar9;
          puVar1[2] = uVar9;
          puVar1[3] = uVar9;
          lVar16 = lVar16 + 0x20;
        } while (uVar12 * 0x20 != lVar16);
      }
      if (uVar13 == uVar18) {
        return;
      }
      puVar6 = puVar6 + uVar18;
    }
    do {
      *puVar6 = uVar9;
      puVar6 = puVar6 + 1;
    } while (puVar6 != (uint *)(param_1 + (long)param_2 * 4));
  }
  return;
}


