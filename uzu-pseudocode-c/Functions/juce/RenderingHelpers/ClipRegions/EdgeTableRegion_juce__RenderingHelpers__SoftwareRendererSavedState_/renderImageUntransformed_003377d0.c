// Function : renderImageUntransformed
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003377d0
// Prototype: undefined renderImageUntransformed(EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long param_1, long * param_2, int param_3, int param_4, int param_5, byte param_6)
// Body     : 003377d0 - 003378bf


/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::renderImageUntransformed(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::Image const&, int, int, int, bool) const */

void __thiscall
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::renderImageUntransformed
          (EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this,long param_1,
          long *param_2,int param_3,int param_4,int param_5,byte param_6)

{
  long *plVar1;
  long local_88 [3];
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
                    /* try { // try from 0033781a to 0033782b has its CatchHandler @ 003378eb */
  (**(code **)(*plVar1 + 0x38))(plVar1,local_88,0,0,2);
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
                    /* try { // try from 0033785a to 00337868 has its CatchHandler @ 003378c0 */
  (**(code **)(*plVar1 + 0x38))(plVar1,local_58,0,0,0);
  EdgeTableFillers::renderImageUntransformed<juce::EdgeTable_const>
            ((undefined8 *)(this + 0x10),local_88,local_58,param_3,param_4,param_5,param_6);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  return;
}


