// Function : drawMenuBarItem
// Namespace: juce:LookAndFeel_V4
// Entry    : 00202a40
// Prototype: undefined8 drawMenuBarItem(LookAndFeel_V4 * this, Graphics * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, long * param_5, char param_6, char param_7, undefined8 param_8, Component * param_9)
// Body     : 00202a40 - 00202a68


/* non-virtual thunk to juce::LookAndFeel_V4::drawMenuBarItem(juce::Graphics&, int, int, int,
   juce::String const&, bool, bool, bool, juce::MenuBarComponent&) */

undefined8 __thiscall
juce::LookAndFeel_V4::drawMenuBarItem
          (LookAndFeel_V4 *this,Graphics *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,long *param_5,char param_6,char param_7,undefined8 param_8,
          Component *param_9)

{
  undefined8 in_RAX;
  
  drawMenuBarItem(this + -0x40,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,param_9);
  return in_RAX;
}


