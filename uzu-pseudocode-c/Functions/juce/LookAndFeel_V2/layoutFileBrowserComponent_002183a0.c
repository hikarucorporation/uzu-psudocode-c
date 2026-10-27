// Function : layoutFileBrowserComponent
// Namespace: juce:LookAndFeel_V2
// Entry    : 002183a0
// Prototype: undefined layoutFileBrowserComponent(undefined8 param_1_00, long param_2, long param_3, Component * param_4, Component * param_5, long param_6, Component * param_7)
// Body     : 002183a0 - 002183a4


/* non-virtual thunk to
   juce::LookAndFeel_V2::layoutFileBrowserComponent(juce::FileBrowserComponent&,
   juce::DirectoryContentsDisplayComponent*, juce::FilePreviewComponent*, juce::ComboBox*,
   juce::TextEditor*, juce::Button*) */

void __thiscall
juce::LookAndFeel_V2::layoutFileBrowserComponent
          (undefined8 param_1_00,long param_2,long param_3,Component *param_4,Component *param_5,
          long param_6,Component *param_7)

{
  Component *this;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_2 + 0x40) - 0x10;
  if (param_4 != (Component *)0x0) {
    iVar1 = *(int *)(param_2 + 0x40) - (int)uVar2 / 3;
    Component::setBounds
              (param_4,iVar1 + -8,-((int)uVar2 >> 0x1f) ^ uVar2 >> 0x1f,(int)uVar2 / 3,
               *(int *)(param_2 + 0x44));
    uVar2 = iVar1 - 0x14;
  }
  Component::setBounds(param_5,8,4,uVar2 - 0x38,0x16);
  Component::setBounds(param_7,uVar2 - 0x2a,4,0x32,0x16);
  iVar1 = 0x1e;
  if (param_3 != 0) {
    this = (Component *)
           __dynamic_cast(param_3,&DirectoryContentsDisplayComponent::typeinfo,&Component::typeinfo,
                          0xfffffffffffffffe);
    if (this != (Component *)0x0) {
      Component::setBounds(this,8,0x1e,uVar2,*(int *)(param_2 + 0x44) + -0x3c);
      iVar1 = *(int *)(this + 0x3c) + *(int *)(this + 0x44) + 4;
    }
  }
  Component::setBounds((Component *)(param_6 + 8),0x3a,iVar1,uVar2 - 0x32,0x16);
  return;
}


