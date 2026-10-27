// Function : resized
// Namespace: juce:Slider
// Entry    : 002e4070
// Prototype: undefined resized(Slider * this)
// Body     : 002e4070 - 002e4337


/* juce::Slider::resized() */

void __thiscall juce::Slider::resized(Slider *this)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  Component *this_01;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(this + 0x1a0);
  do {
    if ((*(long *)(this + 0x68) != 0) &&
       (pLVar5 = *(LookAndFeel_V4 **)(*(long *)(this + 0x68) + 0x10),
       pLVar5 != (LookAndFeel_V4 *)0x0)) goto LAB_002e40e0;
    this = *(Slider **)(this + 0x30);
  } while (this != (Slider *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e40b9 to 002e40c2 has its CatchHandler @ 002e434b */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002e40c6 to 002e40cd has its CatchHandler @ 002e4338 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar5 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002e40e0:
  (**(code **)(*(long *)(pLVar5 + 0x58) + 0x68))
            (&local_50,pLVar5 + 0x58,*(undefined8 *)(lVar2 + 0x18));
  *(ulong *)(lVar2 + 0x1f0) = CONCAT44(uStack_4c,local_50);
  *(ulong *)(lVar2 + 0x1f8) = CONCAT44(uStack_44,uStack_48);
  if (*(Component **)(lVar2 + 600) != (Component *)0x0) {
    Component::setBounds
              (*(Component **)(lVar2 + 600),(int)local_40,(int)((ulong)local_40 >> 0x20),
               (int)local_38,(int)((ulong)local_38 >> 0x20));
  }
  uVar1 = *(uint *)(lVar2 + 0x20);
  if (0xc < uVar1) {
    return;
  }
  if ((0xa05U >> (uVar1 & 0x1f) & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x1d8) = local_50;
    uStack_44 = uStack_48;
LAB_002e4163:
    *(undefined4 *)(lVar2 + 0x1dc) = uStack_44;
    return;
  }
  if ((0x140aU >> (uVar1 & 0x1f) & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x1d8) = uStack_4c;
    goto LAB_002e4163;
  }
  if (uVar1 != 8) {
    return;
  }
  uVar12 = *(ulong *)(lVar2 + 0x1f0);
  uVar6 = *(ulong *)(lVar2 + 0x1f8);
  iVar13 = (int)(uVar12 >> 0x20);
  iVar8 = (int)uVar6;
  iVar9 = (int)(uVar6 >> 0x20);
  if (*(int *)(lVar2 + 0x208) - 1U < 2) {
    bVar4 = 0 < iVar9;
    uVar12 = (ulong)((int)uVar12 + 2);
    uVar11 = 0;
    if (4 < iVar8) {
      uVar11 = (ulong)(iVar8 - 4);
    }
  }
  else {
    bVar4 = 4 < iVar9;
    iVar13 = iVar13 + 2;
    uVar11 = 0;
    if (0 < iVar8) {
      uVar11 = uVar6 & 0xffffffff;
    }
    uVar6 = uVar6 - 0x400000000;
  }
  iVar8 = (int)uVar12;
  uVar12 = 0;
  if (bVar4) {
    uVar12 = uVar6 & 0xffffffff00000000;
  }
  iVar10 = (int)uVar11;
  iVar9 = (int)(uVar12 >> 0x20);
  *(bool *)(lVar2 + 0x234) = iVar9 < iVar10;
  if (iVar9 < iVar10) {
    iVar7 = (int)(uVar11 >> 0x1f) + iVar10 >> 1;
    if (iVar10 < iVar7) {
      iVar7 = iVar10;
    }
    Component::setBounds(*(Component **)(lVar2 + 0x268),iVar8,iVar13,iVar7,iVar9);
    lVar3 = *(long *)(lVar2 + 0x268);
    if (*(int *)(lVar3 + 0x1b0) != 2) {
      *(undefined4 *)(lVar3 + 0x1b0) = 2;
      Component::internalRepaintUnchecked(lVar3,0,*(ulong *)(lVar3 + 0x40),'\x01');
    }
    iVar8 = iVar7 + iVar8;
    uVar12 = uVar12 | (uint)(iVar10 - iVar7);
    this_01 = *(Component **)(lVar2 + 0x260);
    if (*(int *)(this_01 + 0x1b0) == 1) goto LAB_002e431e;
    *(undefined4 *)(this_01 + 0x1b0) = 1;
  }
  else {
    iVar7 = iVar9 / 2;
    if (iVar9 < iVar9 / 2) {
      iVar7 = iVar9;
    }
    Component::setBounds(*(Component **)(lVar2 + 0x268),iVar8,(iVar13 + iVar9) - iVar7,iVar10,iVar7)
    ;
    lVar3 = *(long *)(lVar2 + 0x268);
    if (*(int *)(lVar3 + 0x1b0) != 4) {
      *(undefined4 *)(lVar3 + 0x1b0) = 4;
      Component::internalRepaintUnchecked(lVar3,0,*(ulong *)(lVar3 + 0x40),'\x01');
    }
    uVar12 = (ulong)(uint)(iVar9 - iVar7) << 0x20 | uVar11;
    this_01 = *(Component **)(lVar2 + 0x260);
    if (*(int *)(this_01 + 0x1b0) == 8) goto LAB_002e431e;
    *(undefined4 *)(this_01 + 0x1b0) = 8;
  }
  Component::internalRepaintUnchecked((long)this_01,0,*(ulong *)(this_01 + 0x40),'\x01');
  this_01 = *(Component **)(lVar2 + 0x260);
LAB_002e431e:
  Component::setBounds(this_01,iVar8,iVar13,(int)uVar12,(int)(uVar12 >> 0x20));
  return;
}


