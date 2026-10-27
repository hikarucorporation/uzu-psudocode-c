// Function : renderImageTransformed
// Namespace: juce:RenderingHelpers:ClipRegions:RectangleListRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003b8580
// Prototype: undefined renderImageTransformed(RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long param_1, long * param_2, int param_3, float * param_4, int param_5, char param_6)
// Body     : 003b8580 - 003b866d


/* juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::renderImageTransformed(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::Image const&, int, juce::AffineTransform const&, juce::Graphics::ResamplingQuality, bool)
   const */

void __thiscall
juce::RenderingHelpers::ClipRegions::
RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::renderImageTransformed
          (RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
          long param_1,long *param_2,int param_3,float *param_4,int param_5,char param_6)

{
  long *plVar1;
  long alStack_88 [3];
  undefined4 local_6c;
  undefined4 local_68;
  long *local_60;
  long local_58 [3];
  undefined4 local_3c;
  undefined4 local_38;
  long *local_30;
  
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 == (long *)0x0) {
    local_6c = 0;
    local_68 = 0;
  }
  else {
    local_6c = (undefined4)plVar1[2];
    local_68 = *(undefined4 *)((long)plVar1 + 0x14);
  }
  local_60 = (long *)0x0;
                    /* try { // try from 003b85ca to 003b85d9 has its CatchHandler @ 003b8699 */
  (**(code **)(*plVar1 + 0x38))(plVar1,alStack_88,0,0,2);
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    local_3c = 0;
    local_38 = 0;
  }
  else {
    local_3c = (undefined4)plVar1[2];
    local_38 = *(undefined4 *)((long)plVar1 + 0x14);
  }
  local_30 = (long *)0x0;
                    /* try { // try from 003b8609 to 003b8617 has its CatchHandler @ 003b866e */
  (**(code **)(*plVar1 + 0x38))(plVar1,local_58,0,0,0);
  EdgeTableFillers::
  renderImageTransformed<juce::RenderingHelpers::ClipRegions::RectangleListRegion<juce::RenderingHelpers::SoftwareRendererSavedState>const>
            (*(EdgeTableFillers **)(this + 0x10),*(int *)(this + 0x1c),alStack_88,local_58,param_3,
             param_4,param_5,param_6);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  return;
}


