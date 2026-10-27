// Function : layoutFileBrowserComponent
// Namespace: juce:LookAndFeel_V4
// Entry    : 00200ba0
// Prototype: undefined layoutFileBrowserComponent(undefined8 param_1_00, long param_2, long param_3, Component * param_4, Component * param_5, long param_6, Component * param_7)
// Body     : 00200ba0 - 00200ba4


/* non-virtual thunk to
   juce::LookAndFeel_V4::layoutFileBrowserComponent(juce::FileBrowserComponent&,
   juce::DirectoryContentsDisplayComponent*, juce::FilePreviewComponent*, juce::ComboBox*,
   juce::TextEditor*, juce::Button*) */

void __thiscall
juce::LookAndFeel_V4::layoutFileBrowserComponent
          (undefined8 param_1_00,long param_2,long param_3,Component *param_4,Component *param_5,
          long param_6,Component *param_7)

{
  Component *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = 0x28;
  if (0x28 < *(int *)(param_2 + 0x40)) {
    iVar2 = *(int *)(param_2 + 0x40);
  }
  uVar7 = iVar2 - 0x28;
  iVar6 = 10;
  if (10 < *(int *)(param_2 + 0x44)) {
    iVar6 = *(int *)(param_2 + 0x44);
  }
  uVar1 = iVar6 - 10;
  uVar5 = 0x16;
  if (uVar1 < 0x16) {
    uVar5 = uVar1;
  }
  iVar3 = uVar1 - uVar5;
  iVar4 = 0x16;
  if (iVar3 < 0x16) {
    iVar4 = iVar3;
  }
  iVar3 = iVar3 - iVar4;
  Component::setBounds(param_5,0x14,5,iVar2 + -0x5a,uVar5);
  Component::setBounds(param_7,iVar2 + -0x40,5,0x2c,uVar5);
  uVar1 = 0x14;
  if (uVar7 < 0x14) {
    uVar1 = uVar7;
  }
  Component::setBounds
            ((Component *)(param_6 + 8),uVar1 + 0x14,(iVar6 - iVar4) + -5,uVar7 - uVar1,iVar4);
  if (param_4 != (Component *)0x0) {
    uVar1 = uVar7 / 3;
    uVar7 = uVar7 - uVar1;
    Component::setBounds(param_4,(iVar2 - uVar1) + -0x14,uVar5 + 5,uVar1,iVar3);
  }
  if ((param_3 == 0) ||
     (this = (Component *)
             __dynamic_cast(param_3,&DirectoryContentsDisplayComponent::typeinfo,
                            &Component::typeinfo), this == (Component *)0x0)) {
    return;
  }
  uVar1 = 0;
  if (-1 < (int)uVar7) {
    uVar1 = uVar7;
  }
  if (iVar3 < 0x15) {
    iVar3 = 0x14;
  }
  Component::setBounds(this,0x14,uVar5 + 0xf,uVar1,iVar3 + -0x14);
  return;
}


