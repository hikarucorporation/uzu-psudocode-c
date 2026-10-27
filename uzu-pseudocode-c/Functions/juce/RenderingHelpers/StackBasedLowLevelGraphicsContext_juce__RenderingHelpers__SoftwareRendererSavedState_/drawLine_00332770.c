// Function : drawLine
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00332770
// Prototype: undefined drawLine(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 * param_1)
// Body     : 00332770 - 003327e6


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::drawLine(juce::Line<float>
   const&) */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::drawLine
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,undefined8 *param_1)

{
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this_00;
  void *local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  this_00 = *(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)(this + 8);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = 1;
  Path::addLineSegment(*param_1,param_1[1],DAT_005d9038,(Path *)&local_58);
  local_28 = ZEXT416((uint)DAT_005d9038);
  local_18 = 0x3f800000;
                    /* try { // try from 003327be to 003327cd has its CatchHandler @ 003327e7 */
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::fillPath
            (this_00,&local_58,(undefined8 *)local_28);
  uStack_50 = uStack_50 & 0xffffffff;
  free(local_58);
  return;
}


