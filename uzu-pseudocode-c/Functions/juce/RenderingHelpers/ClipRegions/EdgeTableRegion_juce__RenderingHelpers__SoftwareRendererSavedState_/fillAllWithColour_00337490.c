// Function : fillAllWithColour
// Namespace: juce:RenderingHelpers:ClipRegions:EdgeTableRegion_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00337490
// Prototype: undefined fillAllWithColour(EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long param_1, undefined4 param_2, char param_3)
// Body     : 00337490 - 0033765d


/* juce::RenderingHelpers::ClipRegions::EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillAllWithColour(juce::RenderingHelpers::SoftwareRendererSavedState&,
   juce::PixelARGB, bool) const */

void __thiscall
juce::RenderingHelpers::ClipRegions::
EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState>::fillAllWithColour
          (EdgeTableRegion<juce::RenderingHelpers::SoftwareRendererSavedState> *this,long param_1,
          undefined4 param_2,char param_3)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  EdgeTable *this_00;
  undefined1 *local_68 [2];
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_50 [16];
  int local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  long *local_28;
  
  plVar1 = *(long **)(param_1 + 0x68);
  if (plVar1 == (long *)0x0) {
    local_34 = 0;
    local_30 = 0;
  }
  else {
    local_34 = (undefined4)plVar1[2];
    local_30 = *(undefined4 *)((long)plVar1 + 0x14);
  }
  local_28 = (long *)0x0;
                    /* try { // try from 003374d1 to 003374e5 has its CatchHandler @ 0033765e */
  (**(code **)(*plVar1 + 0x38))(plVar1,local_50,0,0,2);
  this_00 = (EdgeTable *)(this + 0x10);
  local_68[0] = local_50;
  local_58 = param_2;
  if (local_40 == 1) {
    cVar2 = (char)((uint)param_2 >> 8);
    cVar3 = (char)((uint)param_2 >> 0x10);
    if (param_3 == '\0') {
      local_54 = local_38 == 3 && ((char)param_2 == cVar2 && cVar3 == cVar2);
      EdgeTable::
      iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,false>>
                (this_00,(long *)local_68);
    }
    else {
      local_54 = local_38 == 3 && ((char)param_2 == cVar2 && cVar3 == cVar2);
      EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,true>>
                (this_00,(long *)local_68);
    }
  }
  else if (local_40 == 2) {
    if (param_3 == '\0') {
      local_54 = 0;
      EdgeTable::
      iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,false>>
                (this_00,(long *)local_68);
    }
    else {
      local_54 = 0;
      EdgeTable::
      iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,true>>
                (this_00,(long *)local_68);
    }
  }
  else if (param_3 == '\0') {
    local_54 = 0;
    EdgeTable::
    iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,false>>
              (this_00,(long *)local_68);
  }
  else {
    local_54 = 0;
    EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,true>>
              (this_00,(long *)local_68);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


