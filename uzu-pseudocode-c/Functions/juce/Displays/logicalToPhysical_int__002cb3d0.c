// Function : logicalToPhysical<int>
// Namespace: juce:Displays
// Entry    : 002cb3d0
// Prototype: undefined8 logicalToPhysical<int>(long * param_1, undefined8 param_2)
// Body     : 002cb3d0 - 002cb537


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Point<int> juce::Displays::logicalToPhysical<int>(juce::Point<int>, juce::Displays::Display
   const*) const */

undefined8 __cdecl juce::Displays::logicalToPhysical<int>(long *param_1,undefined8 param_2)

{
  float fVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  Desktop *this;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  double dVar12;
  
  if ((long)*(int *)((long)param_1 + 0xc) != 0) {
    lVar5 = *param_1;
    lVar10 = (long)*(int *)((long)param_1 + 0xc) * 0x70;
    iVar6 = 0x7fffffff;
    lVar9 = 0;
    do {
      uVar2 = *(ulong *)(lVar5 + 0xc);
      iVar7 = (int)*(undefined8 *)(lVar5 + 4);
      iVar11 = (int)param_2;
      iVar4 = (int)((ulong)*(undefined8 *)(lVar5 + 4) >> 0x20);
      iVar8 = (int)((ulong)param_2 >> 0x20);
      iVar3 = (int)(uVar2 >> 0x20);
      if ((((iVar7 - iVar11 == 0 || iVar7 < iVar11) && (iVar4 <= iVar8)) &&
          (iVar11 < iVar7 + (int)uVar2)) && (iVar8 < iVar3 + iVar4)) {
        lVar9 = lVar5;
        goto LAB_002cb492;
      }
      dVar12 = hypot((double)((iVar7 - iVar11) +
                             ((int)(((uint)(uVar2 >> 0x1f) & 1) + (int)uVar2) >> 1)),
                     (double)((iVar4 - iVar8) + iVar3 / 2));
      if ((int)dVar12 <= iVar6) {
        iVar6 = (int)dVar12;
        lVar9 = lVar5;
      }
      lVar5 = lVar5 + 0x70;
      lVar10 = lVar10 + -0x70;
    } while (lVar10 != 0);
    if (lVar9 != 0) {
LAB_002cb492:
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002cb49e to 002cb4a7 has its CatchHandler @ 002cb54b */
        this = operator_new(0x1d0);
                    /* try { // try from 002cb4ab to 002cb4b2 has its CatchHandler @ 002cb538 */
        Desktop::Desktop(this);
        Desktop::instance = this;
      }
      fVar1 = *(float *)(Desktop::instance + 0x130);
      dVar12 = *(double *)(lVar9 + 0x50) / (double)fVar1;
      param_2 = CONCAT44((int)((double)(iVar8 - (int)((float)*(int *)(lVar9 + 8) * fVar1)) * dVar12)
                         + *(int *)(lVar9 + 0x48),
                         (int)((double)(iVar11 - (int)((float)*(int *)(lVar9 + 4) * fVar1)) * dVar12
                              ) + *(int *)(lVar9 + 0x44));
    }
  }
  return param_2;
}


