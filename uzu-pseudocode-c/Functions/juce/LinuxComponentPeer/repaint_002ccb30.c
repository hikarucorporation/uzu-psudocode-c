// Function : repaint
// Namespace: juce:LinuxComponentPeer
// Entry    : 002ccb30
// Prototype: undefined repaint(LinuxComponentPeer * this, int * param_1)
// Body     : 002ccb30 - 002ccd02


/* juce::LinuxComponentPeer::repaint(juce::Rectangle<int> const&) */

void __thiscall juce::LinuxComponentPeer::repaint(LinuxComponentPeer *this,int *param_1)

{
  double dVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  plVar2 = *(long **)(this + 0xd0);
  if (plVar2 == (long *)0x0) {
    return;
  }
  iVar3 = *param_1;
  iVar6 = param_1[1];
  iVar7 = 0;
  if (-1 < iVar3) {
    iVar7 = iVar3;
  }
  iVar4 = 0;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  iVar5 = iVar3 + param_1[2];
  if (*(int *)(this + 0x138) < iVar3 + param_1[2]) {
    iVar5 = *(int *)(this + 0x138);
  }
  iVar5 = iVar5 - iVar7;
  dVar8 = 0.0;
  if (-1 < iVar5) {
    iVar3 = iVar6 + param_1[3];
    if (*(int *)(this + 0x13c) < iVar6 + param_1[3]) {
      iVar3 = *(int *)(this + 0x13c);
    }
    iVar3 = iVar3 - iVar4;
    if (-1 < iVar3) {
      dVar10 = (double)iVar4;
      dVar8 = (double)iVar7;
      goto LAB_002ccbbd;
    }
  }
  iVar5 = 0;
  iVar3 = 0;
  dVar10 = 0.0;
LAB_002ccbbd:
  dVar1 = *(double *)(*plVar2 + 0x158);
  dVar8 = dVar8 * dVar1;
  dVar10 = dVar10 * dVar1;
  iVar7 = -0x80000000;
  iVar6 = -0x80000000;
  if (DAT_005de630 < dVar8) {
    dVar9 = floor(dVar8);
    iVar6 = (int)dVar9;
  }
  if (DAT_005de630 < dVar10) {
    dVar9 = floor(dVar10);
    iVar7 = (int)dVar9;
  }
  dVar8 = dVar8 + (double)iVar5 * dVar1;
  iVar5 = 0x7fffffff;
  iVar4 = 0x7fffffff;
  if (dVar8 < DAT_0065a018) {
    dVar8 = ceil(dVar8);
    iVar4 = (int)dVar8;
  }
  dVar10 = dVar10 + dVar1 * (double)iVar3;
  if (dVar10 < DAT_0065a018) {
    dVar8 = ceil(dVar10);
    iVar5 = (int)dVar8;
  }
  RectangleList<int>::add(plVar2 + 4,CONCAT44(iVar7,iVar6),CONCAT44(iVar5 - iVar7,iVar4 - iVar6));
  return;
}


