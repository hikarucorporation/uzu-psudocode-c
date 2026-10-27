// Function : mouseWheelMove
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027ff70
// Prototype: undefined mouseWheelMove(MenuWindow * this, undefined8 param_2_00, long param_2)
// Body     : 0027ff70 - 0027ff9a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::PopupMenu::HelperClasses::MenuWindow::mouseWheelMove(juce::MouseEvent const&,
   juce::MouseWheelDetails const&) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::mouseWheelMove
          (MenuWindow *this,undefined8 param_2_00,long param_2)

{
  alterChildYPos(this,SUB84((double)(*(float *)(param_2 + 4) * _DAT_005de480 * DAT_005d9040) +
                            DAT_005d9098,0));
  return;
}


