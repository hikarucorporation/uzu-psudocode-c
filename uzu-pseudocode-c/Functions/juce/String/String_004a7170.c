// Function : String
// Namespace: juce:String
// Entry    : 004a7170
// Prototype: undefined String(String * this, byte * param_1)
// Body     : 004a7170 - 004a7180


/* juce::String::String(juce::StringRef) */

void __thiscall juce::String::String(String *this,byte *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(param_1);
  *(undefined4 **)this = puVar1;
  return;
}


