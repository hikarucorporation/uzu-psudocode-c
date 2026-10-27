// Function : String
// Namespace: juce:String
// Entry    : 004a6dd0
// Prototype: undefined String(String * this, undefined8 * param_1)
// Body     : 004a6dd0 - 004a6de0


/* juce::String::String(juce::String&&) */

void __thiscall juce::String::String(String *this,undefined8 *param_1)

{
  *(undefined8 *)this = *param_1;
  *param_1 = &DAT_0061ac58;
  return;
}


