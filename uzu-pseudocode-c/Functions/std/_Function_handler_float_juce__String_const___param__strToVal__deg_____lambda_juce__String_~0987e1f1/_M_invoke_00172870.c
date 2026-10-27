// Function : _M_invoke
// Namespace: std:_Function_handler_float_juce__String_const___param__strToVal__deg_____lambda_juce__String_~0987e1f1
// Entry    : 00172870
// Prototype: undefined4 _M_invoke(undefined8 param_1, undefined8 param_2)
// Body     : 00172870 - 00172874


/* WARNING: Unknown calling convention: __cdecl */
/* std::_Function_handler<float (juce::String const&), param::strToVal::deg()::{lambda(juce::String
   const&)#1}>::_M_invoke(std::_Any_data const&, juce::String const&) */

undefined4 __cdecl
std::
_Function_handler<float(juce::String_const&),param::strToVal::deg()::{lambda(juce::String_const&)#1}>
::_M_invoke(undefined8 param_1,undefined8 *param_2)

{
  undefined4 extraout_XMM0_Da;
  String aSStack_28 [8];
  byte *pbStack_20;
  String aSStack_18 [8];
  
  juce::String::String(aSStack_28,&DAT_005d9584);
  juce::StringRef::StringRef((StringRef *)&pbStack_20,(undefined8 *)aSStack_28);
  juce::String::removeCharacters((undefined8 *)aSStack_18,param_2,pbStack_20);
  juce::String::getFloatValue(aSStack_18);
  juce::String::~String(aSStack_18);
  juce::String::~String(aSStack_28);
  return extraout_XMM0_Da;
}


