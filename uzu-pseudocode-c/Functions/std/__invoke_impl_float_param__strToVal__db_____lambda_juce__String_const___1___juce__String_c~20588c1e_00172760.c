// Function : __invoke_impl<float,param::strToVal::db()::{lambda(juce::String_const&)#1}&,juce::String_const&>
// Namespace: std
// Entry    : 00172760
// Prototype: undefined4 __invoke_impl<float,param::strToVal::db()::{lambda(juce::String_const&)#1}&,juce::String_const&>(undefined8 param_1, undefined8 * param_2)
// Body     : 00172760 - 001727cf


/* WARNING: Unknown calling convention: __cdecl */
/* float std::__invoke_impl<float, param::strToVal::db()::{lambda(juce::String const&)#1}&,
   juce::String const&>(std::__invoke_other, param::strToVal::db()::{lambda(juce::String
   const&)#1}&, juce::String const&) */

undefined4 __cdecl
std::
__invoke_impl<float,param::strToVal::db()::_lambda(juce::String_const&)_1_&,juce::String_const&>
          (undefined8 param_1,undefined8 *param_2)

{
  undefined4 extraout_XMM0_Da;
  String local_28 [8];
  byte *local_20;
  String local_18 [8];
  
  juce::String::String(local_28,&DAT_005d9584);
  juce::StringRef::StringRef((StringRef *)&local_20,(undefined8 *)local_28);
                    /* try { // try from 00172790 to 0017279c has its CatchHandler @ 001727d0 */
  juce::String::removeCharacters((undefined8 *)local_18,param_2,local_20);
  juce::String::getFloatValue(local_18);
  juce::String::~String(local_18);
  juce::String::~String(local_28);
  return extraout_XMM0_Da;
}


