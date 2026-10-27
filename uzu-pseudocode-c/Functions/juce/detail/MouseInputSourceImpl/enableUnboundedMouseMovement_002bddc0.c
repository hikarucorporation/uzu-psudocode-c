// Function : enableUnboundedMouseMovement
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 002bddc0
// Prototype: undefined enableUnboundedMouseMovement(undefined8 param_1, undefined8 param_2, undefined8 param_3, MouseInputSourceImpl * param_4, int param_5)
// Body     : 002bddc0 - 002bdfc4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::detail::MouseInputSourceImpl::enableUnboundedMouseMovement(bool, bool) */

void __cdecl
juce::detail::MouseInputSourceImpl::enableUnboundedMouseMovement
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,MouseInputSourceImpl *param_4,
          int param_5)

{
  MouseInputSourceImpl MVar1;
  Desktop *this;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 local_78 [24];
  long local_60;
  undefined1 *local_58;
  Rectangle<int> local_50 [16];
  undefined1 local_40 [16];
  
  uVar5 = (undefined4)((ulong)param_3 >> 0x20);
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  if (param_5 == 0) {
    param_4[0x41] = (MouseInputSourceImpl)0x0;
    if (param_4[0x40] == (MouseInputSourceImpl)0x0) {
      return;
    }
  }
  else {
    param_4[0x41] = (MouseInputSourceImpl)0x0;
    if (param_4[0x40] == (MouseInputSourceImpl)((*(uint *)(param_4 + 0x3c) & 0x1f0) != 0)) {
      return;
    }
    MVar1 = (MouseInputSourceImpl)0x1;
    if ((*(uint *)(param_4 + 0x3c) & 0x1f0) != 0) goto LAB_002bdf89;
  }
  if ((*(long *)(param_4 + 0x48) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_4 + 0x48) + 0x10), lVar2 != 0)) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulong *)(lVar2 + 0x40);
    auVar12 = auVar12 << 0x40;
    do {
      local_60 = lVar2;
      local_58 = local_40;
      local_40 = auVar12;
      auVar12 = ComponentHelpers::
                convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
                ::{lambda()#1}::operator()((_lambda___1_ *)&local_60);
      local_50 = (Rectangle<int>  [16])auVar12;
      if (*(float **)(lVar2 + 0x50) != (float *)0x0) {
        auVar12 = Rectangle<int>::transformedBy(local_50,*(float **)(lVar2 + 0x50));
      }
      lVar2 = *(long *)(lVar2 + 0x30);
    } while (lVar2 != 0);
    local_78._0_8_ = *(undefined8 *)(param_4 + 0x20);
    local_78._8_8_ = 0;
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002bdea0 to 002bdea9 has its CatchHandler @ 002bdfd8 */
      this = operator_new(0x1d0);
                    /* try { // try from 002bdead to 002bdeb4 has its CatchHandler @ 002bdfc5 */
      Desktop::Desktop(this);
      Desktop::instance = this;
    }
    fVar6 = (float)auVar12._0_4_;
    fVar3 = (float)auVar12._4_4_;
    fVar7 = *(float *)(Desktop::instance + 0x130);
    fVar8 = (float)(_DAT_005d91c0 & (uint)fVar7);
    if (fVar8 == DAT_005d94c8) {
      if ((fVar7 != DAT_005d9038) || (NAN(fVar7) || NAN(DAT_005d9038))) {
LAB_002bdf33:
        auVar9._4_4_ = fVar7;
        auVar9._0_4_ = fVar7;
        auVar9._8_4_ = fVar7;
        auVar9._12_4_ = fVar7;
        auVar9 = divps((undefined1  [16])local_78._0_16_,auVar9);
        local_78._0_8_ = auVar9._0_8_;
      }
    }
    else {
      fVar10 = (float)((uint)(DAT_005d9054 + fVar7) & _DAT_005d91c0);
      if (DAT_005d94cc < fVar10) {
        fVar11 = DAT_005d9038;
        if (DAT_005d9038 <= fVar8) {
          fVar11 = fVar8;
        }
        if (fVar11 * DAT_005d94d0 < fVar10) goto LAB_002bdf33;
      }
    }
    fVar7 = (float)auVar12._8_4_ + fVar6;
    if ((float)local_78._0_4_ <= fVar7) {
      fVar7 = (float)local_78._0_4_;
    }
    fVar8 = (float)auVar12._12_4_ + fVar3;
    if ((float)local_78._4_4_ <= fVar8) {
      fVar8 = (float)local_78._4_4_;
    }
    param_1 = setScreenPosition(CONCAT44(-(uint)((float)local_78._4_4_ < fVar3) & (uint)fVar3 |
                                         ~-(uint)((float)local_78._4_4_ < fVar3) & (uint)fVar8,
                                         -(uint)((float)local_78._0_4_ < fVar6) & (uint)fVar6 |
                                         ~-(uint)((float)local_78._0_4_ < fVar6) & (uint)fVar7));
    param_3 = CONCAT44(uVar5,fVar8);
    param_2 = CONCAT44(uVar4,fVar3);
  }
  MVar1 = (MouseInputSourceImpl)0x0;
LAB_002bdf89:
  param_4[0x40] = MVar1;
  *(undefined8 *)(param_4 + 0x18) = 0;
  revealCursor(param_1,param_2,param_3,param_4,'\x01');
  return;
}


