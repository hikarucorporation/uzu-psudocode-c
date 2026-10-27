// Function : __invoke_impl<int,param::strToVal::px()::{lambda(juce::String_const&)#1}&,juce::String_const&>
// Namespace: std
// Entry    : 00172d60
// Prototype: undefined4 __invoke_impl<int,param::strToVal::px()::{lambda(juce::String_const&)#1}&,juce::String_const&>(undefined8 param_1, undefined8 * param_2)
// Body     : 00172d60 - 00172dc9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int std::__invoke_impl<int, param::strToVal::px()::{lambda(juce::String const&)#1}&, juce::String
   const&>(std::__invoke_other, param::strToVal::px()::{lambda(juce::String const&)#1}&,
   juce::String const&) */

undefined4 __cdecl
std::__invoke_impl<int,param::strToVal::px()::_lambda(juce::String_const&)_1_&,juce::String_const&>
          (undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  String local_30 [8];
  byte *local_28;
  String local_20 [8];
  
  juce::String::String(local_30,&DAT_005d9595);
  juce::StringRef::StringRef((StringRef *)&local_28,(undefined8 *)local_30);
                    /* try { // try from 00172d91 to 00172d9d has its CatchHandler @ 00172dca */
  juce::String::removeCharacters((undefined8 *)local_20,param_2,local_28);
  uVar1 = juce::String::getIntValue(local_20);
  juce::String::~String(local_20);
  juce::String::~String(local_30);
  return uVar1;
}


