// Function : logicalToPhysical<float>
// Namespace: juce:Displays
// Entry    : 002bacf0
// Prototype: float logicalToPhysical<float>(undefined8 param_1, long * param_2)
// Body     : 002bacf0 - 002bae52


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Point<float> juce::Displays::logicalToPhysical<float>(juce::Point<float>,
   juce::Displays::Display const*) const */

float __cdecl juce::Displays::logicalToPhysical<float>(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Desktop *this;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  
  fVar12 = (float)param_1;
  if ((long)*(int *)((long)param_2 + 0xc) != 0) {
    lVar7 = *param_2;
    iVar4 = SUB84((double)fVar12 + DAT_005d9098,0);
    iVar5 = SUB84((double)(float)((ulong)param_1 >> 0x20) + DAT_005d9098,0);
    lVar10 = (long)*(int *)((long)param_2 + 0xc) * 0x70;
    iVar8 = 0x7fffffff;
    lVar11 = 0;
    do {
      uVar1 = *(ulong *)(lVar7 + 0xc);
      iVar9 = (int)*(undefined8 *)(lVar7 + 4);
      iVar6 = (int)((ulong)*(undefined8 *)(lVar7 + 4) >> 0x20);
      iVar3 = (int)(uVar1 >> 0x20);
      if ((((iVar9 - iVar4 == 0 || iVar9 < iVar4) && (iVar6 <= iVar5)) &&
          (iVar4 < iVar9 + (int)uVar1)) && (iVar5 < iVar3 + iVar6)) {
        lVar11 = lVar7;
        goto LAB_002badd3;
      }
      dVar2 = hypot((double)((iVar9 - iVar4) +
                            ((int)(((uint)(uVar1 >> 0x1f) & 1) + (int)uVar1) >> 1)),
                    (double)((iVar6 - iVar5) + iVar3 / 2));
      if ((int)dVar2 <= iVar8) {
        iVar8 = (int)dVar2;
        lVar11 = lVar7;
      }
      lVar7 = lVar7 + 0x70;
      lVar10 = lVar10 + -0x70;
    } while (lVar10 != 0);
    if (lVar11 != 0) {
LAB_002badd3:
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002baddf to 002bade8 has its CatchHandler @ 002bae66 */
        this = operator_new(0x1d0);
                    /* try { // try from 002badec to 002badf3 has its CatchHandler @ 002bae53 */
        Desktop::Desktop(this);
        Desktop::instance = this;
      }
      fVar12 = (float)((*(double *)(lVar11 + 0x50) / (double)*(float *)(Desktop::instance + 0x130))
                      * (double)(fVar12 - *(float *)(Desktop::instance + 0x130) *
                                          (float)(int)*(undefined8 *)(lVar11 + 4))) +
               (float)(int)*(undefined8 *)(lVar11 + 0x44);
    }
  }
  return fVar12;
}


