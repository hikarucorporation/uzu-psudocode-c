// Function : transformedBy
// Namespace: juce:Rectangle_int_
// Entry    : 001e33e0
// Prototype: undefined1[16] transformedBy(Rectangle<int> * this, float * param_1)
// Body     : 001e33e0 - 001e35f4


/* juce::Rectangle<int>::transformedBy(juce::AffineTransform const&) const */

undefined1  [16] __thiscall juce::Rectangle<int>::transformedBy(Rectangle<int> *this,float *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  fVar5 = (float)*(int *)this;
  fVar13 = (float)(*(int *)this + *(int *)(this + 8));
  fVar8 = (float)*(int *)(this + 4);
  fVar9 = (float)(*(int *)(this + 4) + *(int *)(this + 0xc));
  fVar14 = param_1[1] * fVar8;
  fVar15 = param_1[1] * fVar9;
  fVar10 = *param_1 * fVar5;
  fVar12 = param_1[2];
  fVar11 = fVar10 + fVar14 + fVar12;
  fVar8 = param_1[4] * fVar8;
  fVar9 = param_1[4] * fVar9;
  fVar5 = fVar5 * param_1[3];
  fVar6 = param_1[5];
  fVar16 = fVar5 + fVar8 + fVar6;
  fVar10 = fVar15 + fVar10 + fVar12;
  fVar5 = fVar9 + fVar5 + fVar6;
  fVar7 = *param_1 * fVar13;
  fVar14 = fVar12 + fVar7 + fVar14;
  fVar12 = fVar12 + fVar7 + fVar15;
  fVar13 = param_1[3] * fVar13;
  fVar8 = fVar6 + fVar13 + fVar8;
  fVar6 = fVar6 + fVar13 + fVar9;
  fVar13 = fVar10;
  if (fVar14 <= fVar10) {
    fVar13 = fVar14;
  }
  if (fVar10 <= fVar14) {
    fVar10 = fVar14;
  }
  fVar9 = fVar12;
  if (fVar13 <= fVar12) {
    fVar9 = fVar13;
  }
  if (fVar11 <= fVar9) {
    fVar9 = fVar11;
  }
  if (fVar12 <= fVar10) {
    fVar12 = fVar10;
  }
  if (fVar12 <= fVar11) {
    fVar12 = fVar11;
  }
  fVar13 = fVar5;
  if (fVar8 <= fVar5) {
    fVar13 = fVar8;
  }
  if (fVar5 <= fVar8) {
    fVar5 = fVar8;
  }
  fVar10 = fVar6;
  if (fVar13 <= fVar6) {
    fVar10 = fVar13;
  }
  if (fVar16 <= fVar10) {
    fVar10 = fVar16;
  }
  if (fVar6 <= fVar5) {
    fVar6 = fVar5;
  }
  iVar3 = -0x80000000;
  iVar4 = -0x80000000;
  if (DAT_00653430 < fVar9) {
    fVar13 = floorf(fVar9);
    iVar4 = (int)fVar13;
  }
  if (fVar6 <= fVar16) {
    fVar6 = fVar16;
  }
  if (DAT_00653430 < fVar10) {
    fVar13 = floorf(fVar10);
    iVar3 = (int)fVar13;
  }
  fVar9 = fVar9 + (fVar12 - fVar9);
  iVar2 = 0x7fffffff;
  iVar1 = 0x7fffffff;
  if (fVar9 < DAT_00653434) {
    fVar12 = ceilf(fVar9);
    iVar1 = (int)fVar12;
  }
  fVar10 = fVar10 + (fVar6 - fVar10);
  if (fVar10 < DAT_00653434) {
    fVar12 = ceilf(fVar10);
    iVar2 = (int)fVar12;
  }
  auVar17._4_4_ = iVar3;
  auVar17._0_4_ = iVar4;
  auVar17._12_4_ = iVar2 - iVar3;
  auVar17._8_4_ = iVar1 - iVar4;
  return auVar17;
}


