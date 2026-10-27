// Function : getDisplayForPoint
// Namespace: juce:Displays
// Entry    : 00231840
// Prototype: Displays * getDisplayForPoint(Displays * this, int param_1, undefined8 param_2)
// Body     : 00231840 - 00231a03


/* juce::Displays::getDisplayForPoint(juce::Point<int>, bool) const */

Displays * __thiscall
juce::Displays::getDisplayForPoint(Displays *this,int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Displays *pDVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (param_1 == 0) {
    pDVar6 = (Displays *)0x0;
  }
  else {
    lVar8 = (long)param_1 * 0x70;
    iVar9 = 0x7fffffff;
    pDVar6 = (Displays *)0x0;
    do {
      uVar1 = *(undefined8 *)(this + 0xc);
      dVar16 = *(double *)(this + 0x50);
      dVar17 = dVar16 * DAT_005db340;
      iVar13 = -0x80000000;
      if (DAT_005de630 < dVar17) {
        dVar15 = floor(dVar17);
        iVar13 = (int)dVar15;
      }
      dVar15 = (double)(int)uVar1 * dVar16 + dVar17;
      iVar11 = 0x7fffffff;
      iVar12 = 0x7fffffff;
      if (dVar15 < DAT_0065a018) {
        dVar15 = ceil(dVar15);
        iVar12 = (int)dVar15;
      }
      dVar17 = dVar17 + dVar16 * (double)(int)((ulong)uVar1 >> 0x20);
      if (dVar17 < DAT_0065a018) {
        dVar16 = ceil(dVar17);
        iVar11 = (int)dVar16;
      }
      iVar2 = (int)*(undefined8 *)(this + 0x44);
      iVar4 = iVar13 + iVar2;
      iVar3 = (int)((ulong)*(undefined8 *)(this + 0x44) >> 0x20);
      iVar7 = iVar13 + iVar3;
      iVar14 = (int)param_2;
      iVar5 = iVar4 - iVar14;
      iVar10 = (int)((ulong)param_2 >> 0x20);
      if ((((iVar5 == 0 || iVar4 < iVar14) && (iVar7 <= iVar10)) && (iVar14 < iVar2 + iVar12)) &&
         (iVar10 < iVar3 + iVar11)) {
        return this;
      }
      dVar16 = hypot((double)(iVar5 + (iVar12 - iVar13) / 2),
                     (double)((iVar7 - iVar10) + (iVar11 - iVar13) / 2));
      if ((int)dVar16 <= iVar9) {
        iVar9 = (int)dVar16;
        pDVar6 = this;
      }
      this = this + 0x70;
      lVar8 = lVar8 + -0x70;
    } while (lVar8 != 0);
  }
  return pDVar6;
}


