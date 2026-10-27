// Function : operator()
// Namespace: param:strToVal:hz__:_lambda_juce__String_const___1_
// Entry    : 00172a90
// Prototype: float operator()(undefined8 param_1_00, undefined8 * param_2)
// Body     : 00172a90 - 00172b59


/* param::strToVal::hz()::{lambda(juce::String const&)#1}::TEMPNAMEPLACEHOLDERVALUE(juce::String
   const&) const */

float __thiscall
param::strToVal::hz()::{lambda(juce::String_const&)#1}::operator()
          (undefined8 param_1_00,undefined8 *param_2)

{
  undefined8 uVar1;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  String aSStack_38 [12];
  float local_2c;
  String local_28 [8];
  char *local_20;
  byte *local_18;
  
  juce::String::String(local_28,&DAT_005d958b);
  juce::StringRef::StringRef((StringRef *)&local_18,(undefined8 *)local_28);
                    /* try { // try from 00172ac0 to 00172aca has its CatchHandler @ 00172b62 */
  juce::String::removeCharacters((undefined8 *)aSStack_38,param_2,local_18);
  juce::String::~String(local_28);
  juce::StringRef::StringRef((StringRef *)&local_20,&DAT_006598e5);
  uVar1 = juce::String::endsWith(aSStack_38,local_20);
  if ((char)uVar1 == '\0') {
    juce::String::getFloatValue(aSStack_38);
    local_2c = extraout_XMM0_Da_00;
  }
  else {
                    /* try { // try from 00172af7 to 00172b08 has its CatchHandler @ 00172b5a */
    juce::String::dropLastCharacters((undefined8 *)local_28,(undefined8 *)aSStack_38,1);
    juce::String::operator=(aSStack_38,(undefined8 *)local_28);
    juce::String::~String(local_28);
    juce::String::getFloatValue(aSStack_38);
    local_2c = extraout_XMM0_Da * DAT_005d94d8;
  }
  juce::String::~String(aSStack_38);
  return local_2c;
}


