// Function : ~ItemComponent
// Namespace: juce:PopupMenu:HelperClasses:ItemComponent
// Entry    : 0027b9f0
// Prototype: undefined ~ItemComponent(ItemComponent * this)
// Body     : 0027b9f0 - 0027ba9b


/* juce::PopupMenu::HelperClasses::ItemComponent::~ItemComponent() */

void __thiscall juce::PopupMenu::HelperClasses::ItemComponent::~ItemComponent(ItemComponent *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  lVar3 = *(long *)(this + 0x170);
  lVar6 = 0;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x100) = 0;
                    /* try { // try from 0027ba12 to 0027ba65 has its CatchHandler @ 0027ba9c */
    Component::internalRepaintUnchecked(lVar3,0,*(ulong *)(lVar3 + 0x40),'\x01');
    lVar6 = *(long *)(this + 0x170);
  }
  uVar5 = 0xffffffff;
  if ((long)*(int *)(this + 100) != 0) {
    lVar3 = (long)*(int *)(this + 100) << 3;
    lVar4 = 0;
    do {
      if (*(long *)(*(long *)(this + 0x58) + lVar4 * 8) == lVar6) {
        uVar5 = (uint)lVar4;
        break;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  Component::removeChildComponent((Component *)this,uVar5,'\x01',1);
  plVar2 = *(long **)(this + 0x170);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 0x1f;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  Item::~Item((Item *)(this + 0xf0));
  Component::~Component((Component *)this);
  return;
}


