// Function : snapValue
// Namespace: juce:CustomDial
// Entry    : 0016b770
// Prototype: undefined8 snapValue(undefined8 param_1, CustomDial * this, int param_3)
// Body     : 0016b770 - 0016b7c4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::CustomDial::snapValue(double, juce::Slider::DragMode) */

undefined8 __thiscall juce::CustomDial::snapValue(undefined8 param_1,CustomDial *this,int param_3)

{
  undefined8 in_RAX;
  undefined8 local_8;
  
  local_8 = in_RAX;
  if ((param_3 != 0) && (this[0x1d0] != (CustomDial)0x0)) {
    Slider::getRange();
    local_8 = param_1;
  }
  return local_8;
}


