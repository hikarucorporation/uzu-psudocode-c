// Function : getIdealPopupMenuSectionHeaderSizeWithOptions
// Namespace: juce:LookAndFeel_V2
// Entry    : 00202900
// Prototype: undefined getIdealPopupMenuSectionHeaderSizeWithOptions(LookAndFeel_V2 * this, undefined8 param_1, undefined4 param_2, int * param_3, int * param_4, undefined8 param_5)
// Body     : 00202900 - 0020294f


/* non-virtual thunk to
   juce::LookAndFeel_V2::getIdealPopupMenuSectionHeaderSizeWithOptions(juce::String const&, int,
   int&, int&, juce::PopupMenu::Options const&) */

void __thiscall
juce::LookAndFeel_V2::getIdealPopupMenuSectionHeaderSizeWithOptions
          (LookAndFeel_V2 *this,undefined8 param_1,undefined4 param_2,int *param_3,int *param_4,
          undefined8 param_5)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*(long *)(this + -0x40) + 0x1f8))
            (this + -0x40,param_1,0,param_2,param_3,param_4,param_5);
  *param_4 = *param_4 / 2 + *param_4;
  iVar1 = *param_3;
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  *param_3 = (iVar2 >> 2) + iVar1;
  return;
}


