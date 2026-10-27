// Function : contains
// Namespace: juce:Component
// Entry    : 00231370
// Prototype: ulong contains(undefined8 param_1, Component * this)
// Body     : 00231370 - 0023160c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Component::contains(juce::Point<float>) */

ulong __thiscall juce::Component::contains(undefined8 param_1,Component *this)

{
  Component *this_00;
  float *pfVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  char cVar5;
  undefined4 in_EAX;
  uint uVar6;
  ulong uVar7;
  Desktop *this_01;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  int iVar17;
  undefined1 auVar16 [16];
  float fVar18;
  float local_38;
  float fStack_34;
  undefined8 local_28;
  Component *local_20;
  undefined8 *local_18;
  
  fVar13 = (float)((ulong)param_1 >> 0x20);
  fVar10 = (float)param_1;
  iVar9 = SUB84((double)fVar10 + _DAT_005d9a90,0);
  iVar12 = SUB84((double)fVar13 + _UNK_005d9a98,0);
  auVar3._4_4_ = -(uint)(-1 < iVar9);
  auVar3._0_4_ = -(uint)(-1 < iVar9);
  auVar3._8_4_ = -(uint)(-1 < iVar12);
  auVar3._12_4_ = -(uint)(-1 < iVar12);
  uVar6 = movmskpd(in_EAX,auVar3);
  if (((uVar6 & 1) == 0) || (bVar4 = (byte)uVar6 >> 1, bVar4 == 0)) {
    return 0;
  }
  iVar14 = (int)*(undefined8 *)(this + 0x40);
  iVar17 = (int)((ulong)*(undefined8 *)(this + 0x40) >> 0x20);
  auVar16._0_4_ = -(uint)(iVar9 < iVar14);
  auVar16._4_4_ = -(uint)(iVar9 < iVar14);
  auVar16._8_4_ = -(uint)(iVar12 < iVar17);
  auVar16._12_4_ = -(uint)(iVar12 < iVar17);
  uVar6 = movmskpd(CONCAT31((int3)(uVar6 >> 8),bVar4),auVar16);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if ((byte)((byte)uVar6 >> 1) == 0) {
    return 0;
  }
  cVar5 = (**(code **)(*(long *)this + 0xa0))
                    (this,(ulong)((double)fVar10 + _DAT_005d9a90) & 0xffffffff,
                     (ulong)((double)fVar13 + _UNK_005d9a98) & 0xffffffff);
  if (cVar5 == '\0') {
    return 0;
  }
  this_00 = *(Component **)(this + 0x30);
  if (this_00 != (Component *)0x0) {
    local_18 = &local_28;
    local_28 = param_1;
    local_20 = this;
    uVar11 = detail::ComponentHelpers::
             convertToParentSpace<juce::Point<float>>(juce::Component_const&,juce::Point<float>)::
             {lambda()#1}::operator()((_lambda___1_ *)&local_20);
    fVar10 = (float)((ulong)uVar11 >> 0x20);
    pfVar1 = *(float **)(this + 0x50);
    if (pfVar1 != (float *)0x0) {
      uVar11 = CONCAT44((float)uVar11 * pfVar1[3] + pfVar1[4] * fVar10 + pfVar1[5],
                        (float)uVar11 * *pfVar1 + pfVar1[1] * fVar10 + pfVar1[2]);
    }
    uVar7 = contains(uVar11,this_00);
    return uVar7 & 0xffffffff;
  }
  if ((*(ushort *)(this + 0xe8) & 1) == 0) {
    return 0;
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0023148d to 00231496 has its CatchHandler @ 00231628 */
    this_01 = operator_new(0x1d0);
                    /* try { // try from 0023149a to 002314a1 has its CatchHandler @ 00231615 */
    Desktop::Desktop(this_01);
    Desktop::instance = this_01;
  }
  if ((long)*(int *)(Desktop::instance + 0xdc) == 0) {
    return 0;
  }
  lVar8 = 0;
  while (plVar2 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar8),
        (Component *)plVar2[1] != this) {
    lVar8 = lVar8 + 8;
    if ((long)*(int *)(Desktop::instance + 0xdc) * 8 == lVar8) {
      return 0;
    }
  }
  pfVar1 = *(float **)(this + 0x50);
  if (pfVar1 != (float *)0x0) {
    param_1 = CONCAT44(fVar10 * pfVar1[3] + pfVar1[4] * fVar13 + pfVar1[5],
                       fVar10 * *pfVar1 + pfVar1[1] * fVar13 + pfVar1[2]);
  }
  fStack_34 = (float)((ulong)param_1 >> 0x20);
  local_38 = (float)param_1;
                    /* try { // try from 00231542 to 0023154a has its CatchHandler @ 0023160d */
  fVar10 = (float)(**(code **)(*(long *)this + 0x88))(this);
  fVar13 = (float)(_DAT_005d91c0 & (uint)fVar10);
  if (fVar13 == DAT_005d94c8) {
    if ((fVar10 == DAT_005d9038) && (!NAN(fVar10) && !NAN(DAT_005d9038))) goto LAB_002315ac;
  }
  else {
    fVar15 = (float)((uint)(fVar10 + DAT_005d9054) & _DAT_005d91c0);
    if (fVar15 <= DAT_005d94cc) goto LAB_002315ac;
    fVar18 = DAT_005d9038;
    if (DAT_005d9038 <= fVar13) {
      fVar18 = fVar13;
    }
    if (fVar15 <= fVar18 * DAT_005d94d0) goto LAB_002315ac;
  }
  param_1 = CONCAT44(fStack_34 * fVar10,local_38 * fVar10);
LAB_002315ac:
  fStack_34 = (float)((ulong)param_1 >> 0x20);
  local_38 = (float)param_1;
                    /* WARNING: Could not recover jumptable at 0x002315fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(*plVar2 + 0xb0))
                    (plVar2,(ulong)((double)local_38 + DAT_005d9098) & 0xffffffff |
                            (long)((double)fStack_34 + DAT_005d9098) << 0x20,1);
  return uVar7;
}


