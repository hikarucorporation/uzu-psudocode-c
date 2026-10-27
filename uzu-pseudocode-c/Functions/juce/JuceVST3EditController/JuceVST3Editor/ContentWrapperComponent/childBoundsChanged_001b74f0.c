// Function : childBoundsChanged
// Namespace: juce:JuceVST3EditController:JuceVST3Editor:ContentWrapperComponent
// Entry    : 001b74f0
// Prototype: undefined childBoundsChanged(ComponentHelpers * param_1, Component * param_2, undefined8 param_3, undefined8 param_4, uint * param_5, undefined8 param_6)
// Body     : 001b74f0 - 001b75c3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::childBoundsChanged(juce::Component*)
    */

void __cdecl
juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::childBoundsChanged
          (ComponentHelpers *param_1,Component *param_2,undefined8 param_3,undefined8 param_4,
          uint *param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 extraout_RDX;
  Component *this;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  if (param_1[0x118] == (ComponentHelpers)0x0) {
    this = *(Component **)(param_1 + 0xf0);
    if (this == (Component *)0x0) {
      auVar4 = ZEXT816(0);
      this = param_2;
      auVar1 = ZEXT816(0);
      if (*(long *)(param_1 + 0x108) != 0) goto LAB_001b7564;
    }
    else {
      auVar4 = Component::getLocalBounds(this);
      param_4 = auVar4._8_8_;
      auVar4 = Component::getLocalArea(param_1,(ComponentHelpers *)this,auVar4._0_8_,param_4);
      param_2 = this;
      auVar1 = auVar4;
      if (auVar4._0_8_ != *(long *)(param_1 + 0x108)) goto LAB_001b7564;
    }
    this = param_2;
    auVar1 = auVar4;
    if ((*(int *)(param_1 + 0x110) != auVar4._8_4_) || (*(int *)(param_1 + 0x114) != auVar4._12_4_))
    {
LAB_001b7564:
      resizeHostWindow((ContentWrapperComponent *)param_1);
      if (detail::PluginUtilities::getHostType()::hostType == '\0') {
        puVar3 = &detail::PluginUtilities::getHostType()::hostType;
        iVar2 = __cxa_guard_acquire();
        if (iVar2 != 0) {
                    /* try { // try from 001b75ab to 001b75af has its CatchHandler @ 001b75c4 */
          detail::PluginUtilities::getHostType()::hostType =
               PluginHostType::getHostType(puVar3,this,extraout_RDX,param_4,param_5,param_6);
          __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
        }
      }
      if (detail::PluginUtilities::getHostType()::hostType == 0x12) {
        Component::repaint((Component *)param_1);
      }
      *(undefined1 (*) [16])(param_1 + 0x108) = auVar1;
      return;
    }
  }
  return;
}


