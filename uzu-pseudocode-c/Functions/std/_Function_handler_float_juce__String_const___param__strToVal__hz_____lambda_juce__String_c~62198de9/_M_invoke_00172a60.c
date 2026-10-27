// Function : _M_invoke
// Namespace: std:_Function_handler_float_juce__String_const___param__strToVal__hz_____lambda_juce__String_c~62198de9
// Entry    : 00172a60
// Prototype: float _M_invoke(undefined8 param_1, undefined8 param_2)
// Body     : 00172a60 - 00172a64


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<float (juce::String const&), param::strToVal::hz()::{lambda(juce::String
   const&)#1}>::_M_invoke(std::_Any_data const&, juce::String const&) */

float __cdecl
std::
_Function_handler<float(juce::String_const&),param::strToVal::hz()::{lambda(juce::String_const&)#1}>
::_M_invoke(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  String aSStack_38 [12];
  float fStack_2c;
  String aSStack_28 [8];
  char *pcStack_20;
  byte *pbStack_18;
  
  juce::String::String(aSStack_28,&DAT_005d958b);
  juce::StringRef::StringRef((StringRef *)&pbStack_18,(undefined8 *)aSStack_28);
  juce::String::removeCharacters((undefined8 *)aSStack_38,param_2,pbStack_18);
  juce::String::~String(aSStack_28);
  juce::StringRef::StringRef((StringRef *)&pcStack_20,&DAT_006598e5);
  uVar1 = juce::String::endsWith(aSStack_38,pcStack_20);
  if ((char)uVar1 == '\0') {
    juce::String::getFloatValue(aSStack_38);
    fStack_2c = extraout_XMM0_Da_00;
  }
  else {
    juce::String::dropLastCharacters((undefined8 *)aSStack_28,(undefined8 *)aSStack_38,1);
    juce::String::operator=(aSStack_38,(undefined8 *)aSStack_28);
    juce::String::~String(aSStack_28);
    juce::String::getFloatValue(aSStack_38);
    fStack_2c = extraout_XMM0_Da * DAT_005d94d8;
  }
  juce::String::~String(aSStack_38);
  return fStack_2c;
}


