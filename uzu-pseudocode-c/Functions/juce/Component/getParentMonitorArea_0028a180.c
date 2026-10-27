// Function : getParentMonitorArea
// Namespace: juce:Component
// Entry    : 0028a180
// Prototype: undefined1[16] getParentMonitorArea(Component * this)
// Body     : 0028a180 - 0028a2ce


/* juce::Component::getParentMonitorArea() const */

undefined1  [16] __thiscall juce::Component::getParentMonitorArea(Component *this)

{
  long *plVar1;
  int iVar2;
  Desktop *this_00;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  Component *local_60;
  undefined1 *local_58;
  Rectangle<int> local_50 [16];
  undefined1 local_40 [16];
  
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0028a1aa to 0028a1b1 has its CatchHandler @ 0028a2cf */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  plVar1 = *(long **)(Desktop::instance + 0xe0);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = *(ulong *)(this + 0x40);
  auVar13 = auVar13 << 0x40;
  do {
    local_60 = this;
    local_58 = local_40;
    local_40 = auVar13;
    auVar13 = detail::ComponentHelpers::
              convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
              ::{lambda()#1}::operator()((_lambda___1_ *)&local_60);
    local_50 = (Rectangle<int>  [16])auVar13;
    if (*(float **)(this + 0x50) != (float *)0x0) {
      auVar13 = Rectangle<int>::transformedBy(local_50,*(float **)(this + 0x50));
    }
    this = *(Component **)(this + 0x30);
  } while (this != (Component *)0x0);
  lVar3 = *plVar1;
  iVar2 = auVar13._0_4_;
  iVar9 = auVar13._8_4_ + iVar2;
  iVar8 = auVar13._4_4_;
  iVar4 = auVar13._12_4_ + iVar8;
  lVar11 = (long)*(int *)((long)plVar1 + 0xc) * 0x70;
  iVar10 = -1;
  lVar12 = 0;
  do {
    iVar6 = (int)*(undefined8 *)(lVar3 + 4);
    iVar5 = iVar6;
    if (iVar6 < iVar2) {
      iVar5 = iVar2;
    }
    iVar6 = (int)*(undefined8 *)(lVar3 + 0xc) + iVar6;
    if (iVar9 < iVar6) {
      iVar6 = iVar9;
    }
    iVar6 = iVar6 - iVar5;
    if (iVar6 < 0) {
LAB_0028a250:
      iVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar7 = (int)((ulong)*(undefined8 *)(lVar3 + 4) >> 0x20);
      iVar5 = iVar7;
      if (iVar7 < iVar8) {
        iVar5 = iVar8;
      }
      iVar7 = (int)((ulong)*(undefined8 *)(lVar3 + 0xc) >> 0x20) + iVar7;
      if (iVar4 < iVar7) {
        iVar7 = iVar4;
      }
      iVar7 = iVar7 - iVar5;
      if (iVar7 < 0) goto LAB_0028a250;
    }
    if (iVar10 <= iVar7 * iVar6) {
      iVar10 = iVar7 * iVar6;
      lVar12 = lVar3;
    }
    lVar3 = lVar3 + 0x70;
    lVar11 = lVar11 + -0x70;
    if (lVar11 == 0) {
      return *(undefined1 (*) [16])(lVar12 + 0x14);
    }
  } while( true );
}


