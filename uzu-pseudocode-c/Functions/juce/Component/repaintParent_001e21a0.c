// Function : repaintParent
// Namespace: juce:Component
// Entry    : 001e21a0
// Prototype: undefined repaintParent(Component * this)
// Body     : 001e21a0 - 001e2264


/* juce::Component::repaintParent() */

void __thiscall juce::Component::repaintParent(Component *this)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  Component *local_40;
  undefined8 *local_38;
  Rectangle<int> local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = *(long *)(this + 0x30);
  if (lVar1 != 0) {
    local_18 = *(undefined8 *)(this + 0x40);
    local_20 = 0;
    local_38 = &local_20;
    local_40 = this;
    auVar7 = detail::ComponentHelpers::
             convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
             ::{lambda()#1}::operator()((_lambda___1_ *)&local_40);
    local_30 = (Rectangle<int>  [16])auVar7;
    if (*(float **)(this + 0x50) != (float *)0x0) {
      auVar7 = Rectangle<int>::transformedBy(local_30,*(float **)(this + 0x50));
    }
    uVar2 = auVar7._0_4_;
    uVar6 = 0;
    if (-1 < (int)uVar2) {
      uVar6 = uVar2;
    }
    uVar4 = 0;
    if (-1 < (long)auVar7._0_8_) {
      uVar4 = auVar7._0_8_ >> 0x20;
    }
    iVar3 = uVar2 + auVar7._8_4_;
    if (*(int *)(lVar1 + 0x40) < iVar3) {
      iVar3 = *(int *)(lVar1 + 0x40);
    }
    iVar3 = iVar3 - uVar6;
    if (-1 < iVar3) {
      iVar5 = auVar7._4_4_ + auVar7._12_4_;
      if (*(int *)(lVar1 + 0x44) < iVar5) {
        iVar5 = *(int *)(lVar1 + 0x44);
      }
      iVar5 = iVar5 - (int)uVar4;
      if (((-1 < iVar5) && (iVar3 != 0)) && (iVar5 != 0)) {
        internalRepaintUnchecked(lVar1,(ulong)uVar6 | uVar4 << 0x20,CONCAT44(iVar5,iVar3),'\0');
      }
    }
  }
  return;
}


