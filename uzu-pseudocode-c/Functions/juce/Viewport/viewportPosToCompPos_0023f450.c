// Function : viewportPosToCompPos
// Namespace: juce:Viewport
// Entry    : 0023f450
// Prototype: undefined8 viewportPosToCompPos(Viewport * this, undefined8 param_1)
// Body     : 0023f450 - 0023f656


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Viewport::viewportPosToCompPos(juce::Point<int>) const */

undefined8 __thiscall juce::Viewport::viewportPosToCompPos(Viewport *this,undefined8 param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  
  auVar17 = detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>>
                      ((ComponentHelpers *)(this + 0x110),
                       *(ComponentHelpers **)(*(long *)(this + 0x200) + 0x10),0,
                       *(undefined8 *)
                        (*(ComponentHelpers **)(*(long *)(this + 0x200) + 0x10) + 0x40));
  uVar2 = *(int *)(this + 0x150) - auVar17._8_4_;
  uVar3 = *(int *)(this + 0x154) - auVar17._12_4_;
  uVar5 = -(int)((ulong)param_1 >> 0x20);
  pfVar1 = *(float **)(*(long *)(*(long *)(this + 0x200) + 0x10) + 0x50);
  if (pfVar1 == (float *)0x0) {
    fVar11 = 0.0;
    fVar6 = 0.0;
    fVar9 = 0.0;
    fVar7 = 0.0;
    fVar8 = DAT_005d9038;
    fVar12 = DAT_005d9038;
  }
  else {
    fVar11 = pfVar1[1];
    fVar6 = pfVar1[2];
    fVar9 = pfVar1[3];
    fVar7 = pfVar1[5];
    fVar8 = pfVar1[4];
    fVar12 = *pfVar1;
  }
  uVar2 = (int)uVar2 >> 0x1f & uVar2;
  uVar4 = -(int)param_1 >> 0x1f & -(int)param_1;
  uVar3 = (int)uVar3 >> 0x1f & uVar3;
  uVar5 = (int)uVar5 >> 0x1f & uVar5;
  fVar10 = fVar12 * fVar8 - fVar9 * fVar11;
  dVar14 = (double)fVar10;
  uVar15 = _DAT_005d91b0 & SUB84(dVar14,0);
  uVar16 = _UNK_005d91b4 & (uint)((ulong)dVar14 >> 0x20);
  if ((double)CONCAT44(uVar16,uVar15) == DAT_005d94e0) {
    if ((fVar10 == 0.0) && (!NAN(fVar10))) goto LAB_0023f5fd;
  }
  else if (((double)CONCAT44(uVar16,uVar15) <= DAT_005db368) ||
          ((double)CONCAT44(uVar16,uVar15) <= DAT_005db370 * (double)CONCAT44(uVar16,uVar15)))
  goto LAB_0023f5fd;
  dVar14 = _DAT_005d9000 / dVar14;
  fVar9 = (float)((double)(float)((uint)fVar9 ^ _DAT_006524b0) * dVar14);
  dVar13 = (double)fVar12;
  fVar11 = (float)(dVar14 * (double)(float)((uint)fVar11 ^ _DAT_006524b0));
  fVar12 = (float)(dVar14 * (double)fVar8);
  fVar8 = (float)(dVar13 * dVar14);
  fVar10 = (float)((uint)fVar6 ^ _DAT_006524b0);
  fVar6 = fVar12 * fVar10 - fVar11 * fVar7;
  fVar7 = fVar10 * fVar9 - fVar7 * fVar8;
LAB_0023f5fd:
  if ((int)uVar2 < (int)uVar4) {
    uVar2 = uVar4;
  }
  if ((int)uVar3 < (int)uVar5) {
    uVar3 = uVar5;
  }
  return CONCAT44((int)(fVar9 * (float)(int)uVar2 + fVar8 * (float)(int)uVar3 + fVar7),
                  (int)(fVar6 + fVar12 * (float)(int)uVar2 + fVar11 * (float)(int)uVar3));
}


