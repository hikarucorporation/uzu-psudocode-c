// Function : __invoke_impl<float,param::strToVal::deg()::{lambda(juce::String_const&)#1}&,juce::String_const&>
// Namespace: std
// Entry    : 001728a0
// Prototype: undefined4 __invoke_impl<float,param::strToVal::deg()::{lambda(juce::String_const&)#1}&,juce::String_const&>(undefined8 param_1, undefined8 * param_2)
// Body     : 001728a0 - 0017290f


/* WARNING: Unknown calling convention: __cdecl */
/* float std::__invoke_impl<float, param::strToVal::deg()::{lambda(juce::String const&)#1}&,
   juce::String const&>(std::__invoke_other, param::strToVal::deg()::{lambda(juce::String
   const&)#1}&, juce::String const&) */

undefined4 __cdecl
std::
__invoke_impl<float,param::strToVal::deg()::_lambda(juce::String_const&)_1_&,juce::String_const&>
          (undefined8 param_1,undefined8 *param_2)

{
  undefined4 extraout_XMM0_Da;
  String local_28 [8];
  byte *local_20;
  String local_18 [8];
  
  juce::String::String(local_28,&DAT_005d9584);
  juce::StringRef::StringRef((StringRef *)&local_20,(undefined8 *)local_28);
                    /* try { // try from 001728d0 to 001728dc has its CatchHandler @ 00172910 */
  juce::String::removeCharacters((undefined8 *)local_18,param_2,local_20);
  juce::String::getFloatValue(local_18);
  juce::String::~String(local_18);
  juce::String::~String(local_28);
  return extraout_XMM0_Da;
}


