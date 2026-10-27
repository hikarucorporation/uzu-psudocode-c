// Function : mouseDrag
// Namespace: juce:ResizableCornerComponent
// Entry    : 002d7d60
// Prototype: undefined mouseDrag(ResizableCornerComponent * this, undefined8 * param_1)
// Body     : 002d7d60 - 002d7e55


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ResizableCornerComponent::mouseDrag(juce::MouseEvent const&) */

void __thiscall
juce::ResizableCornerComponent::mouseDrag(ResizableCornerComponent *this,undefined8 *param_1)

{
  ComponentHelpers *this_00;
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long local_10;
  long local_8;
  
  if ((*(long *)(this + 0xf0) != 0) &&
     (this_00 = *(ComponentHelpers **)(*(long *)(this + 0xf0) + 0x10),
     this_00 != (ComponentHelpers *)0x0)) {
    uVar4 = SUB84((double)((float)*param_1 - (float)param_1[5]) + _DAT_005d9a90,0) +
            (int)*(undefined8 *)(this + 0x108);
    uVar5 = SUB84((double)((float)((ulong)*param_1 >> 0x20) - (float)((ulong)param_1[5] >> 0x20)) +
                  _UNK_005d9a98,0) + (int)((ulong)*(undefined8 *)(this + 0x108) >> 0x20);
    local_10 = *(long *)(this + 0x100);
    auVar6._0_4_ = -(uint)(0 < (int)uVar4);
    auVar6._4_4_ = -(uint)(0 < (int)uVar4);
    auVar6._8_4_ = -(uint)(0 < (int)uVar5);
    auVar6._12_4_ = -(uint)(0 < (int)uVar5);
    uVar2 = movmskpd((int)param_1,auVar6);
    uVar3 = (ulong)uVar4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    if ((uVar2 & 2) == 0) {
      uVar5 = 0;
    }
    local_8 = uVar3 + ((ulong)uVar5 << 0x20);
    if (*(long **)(this + 0xf8) != (long *)0x0) {
      ComponentBoundsConstrainer::setBoundsForComponent
                (*(long **)(this + 0xf8),this_00,local_10,local_8,1,1);
      return;
    }
    plVar1 = *(long **)(this_00 + 0x48);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_10);
      return;
    }
    Component::setBounds
              ((Component *)this_00,*(int *)(this + 0x100),*(int *)(this + 0x104),(int)uVar3,uVar5);
  }
  return;
}


