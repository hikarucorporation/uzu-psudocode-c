// Function : operator=
// Namespace: juce:File
// Entry    : 0049f790
// Prototype: File * operator=(File * this, undefined8 * param_1)
// Body     : 0049f790 - 0049f79f


/* juce::File::TEMPNAMEPLACEHOLDERVALUE(juce::File&&) */

File * __thiscall juce::File::operator=(File *this,undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)this;
  *(undefined8 *)this = *param_1;
  *param_1 = uVar1;
  return this;
}


