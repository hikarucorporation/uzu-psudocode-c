// Function : drawFileBrowserRow
// Namespace: juce:LookAndFeel_V4
// Entry    : 001ee600
// Prototype: undefined drawFileBrowserRow(LookAndFeel_V4 * this, Graphics * param_1, int param_2, int param_3, undefined8 param_5_00, long * param_5, long * param_6, long * param_7, undefined8 param_8, byte param_9, char param_10, undefined8 param_11, undefined8 param_12)
// Body     : 001ee600 - 001ee644


/* juce::LookAndFeel_V4::drawFileBrowserRow(juce::Graphics&, int, int, juce::File const&,
   juce::String const&, juce::Image*, juce::String const&, juce::String const&, bool, bool, int,
   juce::DirectoryContentsDisplayComponent&) */

void __thiscall
juce::LookAndFeel_V4::drawFileBrowserRow
          (LookAndFeel_V4 *this,Graphics *param_1,int param_2,int param_3,undefined8 param_5_00,
          long *param_5,long *param_6,long *param_7,undefined8 param_8,byte param_9,char param_10,
          undefined8 param_11,undefined8 param_12)

{
  undefined8 in_stack_fffffffffffffff0;
  
  LookAndFeel_V2::drawFileBrowserRow
            ((LookAndFeel_V2 *)this,param_1,param_2,param_3,param_8,param_5,param_6,param_7,
             (long *)param_8,param_9,param_10,in_stack_fffffffffffffff0,param_12);
  return;
}


