// Function : scrollBarMoved
// Namespace: juce:Viewport
// Entry    : 00263770
// Prototype: undefined scrollBarMoved(double param_1, Viewport * this, long param_3)
// Body     : 00263770 - 00263863


/* juce::Viewport::scrollBarMoved(juce::ScrollBar*, double) */

void __thiscall juce::Viewport::scrollBarMoved(double param_1,Viewport *this,long param_3)

{
  ComponentHelpers *pCVar1;
  Component *this_00;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 local_28;
  double local_20;
  undefined8 local_18;
  
  if ((*(long *)(this + 0x200) == 0) ||
     (pCVar1 = *(ComponentHelpers **)(*(long *)(this + 0x200) + 0x10),
     pCVar1 == (ComponentHelpers *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_20 = param_1;
    auVar7 = detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>>
                       ((ComponentHelpers *)(this + 0x110),pCVar1,0,*(undefined8 *)(pCVar1 + 0x40));
    uVar2 = auVar7._0_8_;
    param_1 = local_20;
  }
  lVar3 = (ulong)(uint)-(int)uVar2 - (uVar2 & 0xffffffff00000000);
  if (*(long *)(this + 0x108) == param_3) {
    lVar4 = 0;
    local_18._0_4_ = (int)lVar3;
    iVar6 = SUB84(param_1 + DAT_005d9098,0);
    if ((int)local_18 == iVar6) {
      return;
    }
  }
  else {
    if (*(long *)(this + 0x100) != param_3) {
      return;
    }
    lVar4 = 4;
    local_18._4_4_ = (int)((ulong)lVar3 >> 0x20);
    iVar6 = SUB84(param_1 + DAT_005d9098,0);
    if (local_18._4_4_ == iVar6) {
      return;
    }
  }
  local_28 = *(undefined8 *)(this + 0x208);
  *(int *)((long)&local_28 + lVar4) = iVar6;
  if ((*(long *)(this + 0x200) == 0) ||
     (this_00 = *(Component **)(*(long *)(this + 0x200) + 0x10), this_00 == (Component *)0x0)) {
    return;
  }
  local_18 = lVar3;
  uVar5 = viewportPosToCompPos(this,local_28);
  Component::setBounds
            (this_00,(int)uVar5,(int)((ulong)uVar5 >> 0x20),*(int *)(this_00 + 0x40),
             *(int *)(this_00 + 0x44));
  return;
}


