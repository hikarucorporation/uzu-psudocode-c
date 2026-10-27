// Function : operator=
// Namespace: juce:String
// Entry    : 0049f780
// Prototype: String * operator=(String * this, undefined8 * param_1)
// Body     : 0049f780 - 0049f78f


/* juce::String::TEMPNAMEPLACEHOLDERVALUE(juce::String&&) */

String * __thiscall juce::String::operator=(String *this,undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)this;
  *(undefined8 *)this = *param_1;
  *param_1 = uVar1;
  return this;
}


