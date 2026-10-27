// Function : useMouseWheelMoveIfNeeded
// Namespace: juce:Viewport
// Entry    : 002680c0
// Prototype: undefined8 useMouseWheelMoveIfNeeded(float param_1_00, float param_2_00, Viewport * param_3, ulong param_4)
// Body     : 002680c0 - 00268338


/* WARNING: Removing unreachable block (ram,0x002682a8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Viewport::useMouseWheelMoveIfNeeded(juce::MouseEvent const&, juce::MouseWheelDetails
   const&) */

undefined8 __cdecl
juce::Viewport::useMouseWheelMoveIfNeeded
          (float param_1_00,float param_2_00,Viewport *param_3,ulong param_4)

{
  Viewport VVar1;
  ulong uVar2;
  Component *this;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((param_4 & 6) != 0) {
    return 0;
  }
  bVar12 = 1;
  bVar11 = 1;
  if (param_3[0x22c] == (Viewport)0x0) {
    bVar11 = (byte)((*(ushort *)(*(long *)(param_3 + 0x100) + 0xe8) & 2) >> 1);
    VVar1 = param_3[0x22d];
  }
  else {
    VVar1 = param_3[0x22d];
  }
  if ((VVar1 == (Viewport)0x0) &&
     (bVar12 = (byte)((*(ushort *)(*(long *)(param_3 + 0x108) + 0xe8) & 2) >> 1),
     (bVar11 | bVar12) != 1)) {
    return 0;
  }
  fVar14 = (float)(_DAT_005d91c0 & (uint)param_1_00);
  iVar5 = 0;
  if (fVar14 == DAT_005d94c8) {
    if ((param_1_00 != 0.0) || (NAN(param_1_00))) goto LAB_0026816d;
  }
  else if ((DAT_005d94cc < fVar14) && (DAT_005d94d0 * fVar14 < fVar14)) {
LAB_0026816d:
    fVar15 = (float)*(int *)(param_3 + 0x21c) * DAT_005d9064 * param_1_00;
    fVar14 = DAT_005d9054;
    if (fVar15 <= DAT_005d9054) {
      fVar14 = fVar15;
    }
    fVar16 = DAT_005d9038;
    if (DAT_005d9038 <= fVar15) {
      fVar16 = fVar15;
    }
    iVar5 = SUB84((double)(float)(~-(uint)(fVar15 < 0.0) & (uint)fVar16 |
                                 (uint)fVar14 & -(uint)(fVar15 < 0.0)) + DAT_005d9098,0);
  }
  fVar14 = (float)(_DAT_005d91c0 & (uint)param_2_00);
  iVar13 = 0;
  if (fVar14 == DAT_005d94c8) {
    if ((param_2_00 != 0.0) || (NAN(param_2_00))) goto LAB_002681fb;
  }
  else if ((DAT_005d94cc < fVar14) && (DAT_005d94d0 * fVar14 < fVar14)) {
LAB_002681fb:
    fVar15 = (float)*(int *)(param_3 + 0x220) * DAT_005d9064 * param_2_00;
    fVar14 = DAT_005d9054;
    if (fVar15 <= DAT_005d9054) {
      fVar14 = fVar15;
    }
    fVar16 = DAT_005d9038;
    if (DAT_005d9038 <= fVar15) {
      fVar16 = fVar15;
    }
    iVar13 = SUB84((double)(float)(~-(uint)(fVar15 < 0.0) & (uint)fVar16 |
                                  (uint)fVar14 & -(uint)(fVar15 < 0.0)) + DAT_005d9098,0);
  }
  uVar2 = *(ulong *)(param_3 + 0x208);
  uVar7 = uVar2 >> 0x20;
  iVar6 = (int)(uVar2 >> 0x20);
  uVar9 = (uint)uVar2;
  if (((iVar13 != 0 && iVar5 != 0) & bVar12 & bVar11) == 1) {
    uVar7 = (ulong)(uint)(iVar6 - iVar13);
joined_r0x002682e4:
    uVar10 = uVar9 - iVar5;
    bVar3 = uVar10 != uVar9;
    uVar9 = uVar10;
    if (bVar3) goto LAB_002682ee;
  }
  else {
    if ((bVar12 != 0) && ((iVar5 != 0 || (iVar5 = iVar13, ((param_4 & 1) == 0 & bVar11) == 0))))
    goto joined_r0x002682e4;
    iVar5 = 0;
    if (bVar11 != 0) {
      iVar5 = iVar13;
    }
    uVar7 = (ulong)(uint)(iVar6 - iVar5);
  }
  uVar10 = uVar9;
  if ((int)uVar7 == iVar6) {
    return 0;
  }
LAB_002682ee:
  uVar8 = CONCAT71((uint7)(uVar2 >> 0x28),1);
  if (*(long *)(param_3 + 0x200) == 0) {
    return uVar8;
  }
  this = *(Component **)(*(long *)(param_3 + 0x200) + 0x10);
  if (this == (Component *)0x0) {
    return uVar8;
  }
  uVar4 = viewportPosToCompPos(param_3,(ulong)uVar10 | uVar7 << 0x20);
  Component::setBounds
            (this,(int)uVar4,(int)((ulong)uVar4 >> 0x20),*(int *)(this + 0x40),*(int *)(this + 0x44)
            );
  return uVar8;
}


