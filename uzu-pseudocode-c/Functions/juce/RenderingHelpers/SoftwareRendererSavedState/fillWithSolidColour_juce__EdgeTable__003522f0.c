// Function : fillWithSolidColour<juce::EdgeTable>
// Namespace: juce:RenderingHelpers:SoftwareRendererSavedState
// Entry    : 003522f0
// Prototype: void fillWithSolidColour<juce::EdgeTable>(SoftwareRendererSavedState * this, EdgeTable * param_1, undefined4 param_2, char param_3)
// Body     : 003522f0 - 003524a3


/* void 
   juce::RenderingHelpers::SoftwareRendererSavedState::fillWithSolidColour<juce::EdgeTable>(juce::EdgeTable&,
   juce::PixelARGB, bool) const */

void __thiscall
juce::RenderingHelpers::SoftwareRendererSavedState::fillWithSolidColour<juce::EdgeTable>
          (SoftwareRendererSavedState *this,EdgeTable *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  char cVar2;
  undefined1 *local_68 [2];
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_50 [16];
  int local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  long *local_28;
  
  if (this == (SoftwareRendererSavedState *)0x0) {
    local_34 = 0;
    local_30 = 0;
  }
  else {
    local_34 = *(undefined4 *)(this + 0x10);
    local_30 = *(undefined4 *)(this + 0x14);
  }
  local_28 = (long *)0x0;
                    /* try { // try from 0035232c to 00352340 has its CatchHandler @ 003524a4 */
  (**(code **)(*(long *)this + 0x38))(this,local_50,0,0,2);
  local_68[0] = local_50;
  local_58 = param_2;
  if (local_40 == 1) {
    cVar1 = (char)((uint)param_2 >> 8);
    cVar2 = (char)((uint)param_2 >> 0x10);
    if (param_3 == '\0') {
      local_54 = local_38 == 3 && ((char)param_2 == cVar1 && cVar2 == cVar1);
      EdgeTable::
      iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,false>>
                (param_1,(long *)local_68);
    }
    else {
      local_54 = local_38 == 3 && ((char)param_2 == cVar1 && cVar2 == cVar1);
      EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelRGB,true>>
                (param_1,(long *)local_68);
    }
  }
  else if (local_40 == 2) {
    if (param_3 == '\0') {
      local_54 = 0;
      EdgeTable::
      iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,false>>
                (param_1,(long *)local_68);
    }
    else {
      local_54 = 0;
      EdgeTable::
      iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelARGB,true>>
                (param_1,(long *)local_68);
    }
  }
  else if (param_3 == '\0') {
    local_54 = 0;
    EdgeTable::
    iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,false>>
              (param_1,(long *)local_68);
  }
  else {
    local_54 = 0;
    EdgeTable::iterate<juce::RenderingHelpers::EdgeTableFillers::SolidColour<juce::PixelAlpha,true>>
              (param_1,(long *)local_68);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


