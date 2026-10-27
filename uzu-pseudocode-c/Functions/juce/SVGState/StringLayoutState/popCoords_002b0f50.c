// Function : popCoords
// Namespace: juce:SVGState:StringLayoutState
// Entry    : 002b0f50
// Prototype: undefined1[16] popCoords(StringLayoutState * this)
// Body     : 002b0f50 - 002b1100


/* juce::SVGState::StringLayoutState::popCoords() */

undefined1  [16] __thiscall juce::SVGState::StringLayoutState::popCoords(StringLayoutState *this)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  StringLayoutState *this_00;
  byte bVar4;
  void *pvVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint unaff_R15D;
  undefined1 auVar12 [16];
  uint local_34;
  
  iVar2 = *(int *)(this + 0x1c);
  if (iVar2 == 0) {
    bVar4 = 0;
    iVar8 = *(int *)(this + 0x2c);
  }
  else {
    puVar3 = *(uint **)(this + 0x10);
    unaff_R15D = *puVar3;
    memmove(puVar3,puVar3 + 1,(long)(iVar2 + -1) << 2);
    iVar8 = *(int *)(this + 0x1c);
    uVar1 = iVar8 - 1;
    *(uint *)(this + 0x1c) = uVar1;
    iVar7 = iVar8 * 2 + -2;
    iVar8 = 0;
    if (-1 < iVar7) {
      iVar8 = iVar7;
    }
    bVar4 = 1;
    if (iVar8 < *(int *)(this + 0x18)) {
      uVar9 = 0x10;
      if (0x10 < (int)uVar1) {
        uVar9 = uVar1;
      }
      if ((int)uVar9 < *(int *)(this + 0x18)) {
        pvVar5 = realloc(*(void **)(this + 0x10),(ulong)uVar9 << 2);
        *(void **)(this + 0x10) = pvVar5;
        *(uint *)(this + 0x18) = uVar9;
      }
    }
    iVar8 = *(int *)(this + 0x2c);
  }
  if (iVar8 == 0) {
    uVar11 = 0;
    this_00 = *(StringLayoutState **)this;
  }
  else {
    puVar3 = *(uint **)(this + 0x20);
    local_34 = *puVar3;
    memmove(puVar3,puVar3 + 1,(long)(iVar8 + -1) << 2);
    iVar7 = *(int *)(this + 0x2c);
    uVar1 = iVar7 - 1;
    *(uint *)(this + 0x2c) = uVar1;
    iVar7 = iVar7 * 2 + -2;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    uVar11 = 1;
    if (iVar7 < *(int *)(this + 0x28)) {
      uVar9 = 0x10;
      if (0x10 < (int)uVar1) {
        uVar9 = uVar1;
      }
      if ((int)uVar9 < *(int *)(this + 0x28)) {
        pvVar5 = realloc(*(void **)(this + 0x20),(ulong)uVar9 << 2);
        *(void **)(this + 0x20) = pvVar5;
        *(uint *)(this + 0x28) = uVar9;
      }
    }
    this_00 = *(StringLayoutState **)this;
  }
  if (this_00 == (StringLayoutState *)0x0) {
    uVar10 = 0;
    uVar6 = 0;
  }
  else {
    auVar12 = popCoords(this_00);
    uVar10 = auVar12._0_8_ >> 0x28;
    uVar6 = 0;
    if (iVar2 == 0) {
      bVar4 = auVar12[4];
      unaff_R15D = auVar12._0_4_;
    }
    else {
      uVar10 = 0;
    }
    if (iVar8 == 0) {
      uVar11 = auVar12._8_8_ >> 0x20;
      uVar6 = auVar12._8_8_ & 0xffffff0000000000;
      local_34 = auVar12._8_4_;
    }
  }
  auVar12._0_8_ = (ulong)unaff_R15D | (ulong)bVar4 << 0x20 | uVar10 << 0x28;
  auVar12._8_8_ = local_34 | uVar6 | (uVar11 & 0xff) << 0x20;
  return auVar12;
}


