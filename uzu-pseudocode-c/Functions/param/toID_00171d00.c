// Function : toID
// Namespace: param
// Entry    : 00171d00
// Prototype: param * toID(param * this, uint param_1)
// Body     : 00171d00 - 00171d7b


/* param::toID(param::PID) */

param * __thiscall param::toID(param *this,uint param_1)

{
  char *pcVar1;
  String aSStack_28 [8];
  String local_20 [8];
  byte *local_18;
  
  if (param_1 < 10) {
    pcVar1 = *(char **)(&DAT_00701df8 + (long)(int)param_1 * 8);
  }
  else {
    pcVar1 = "Unknown";
  }
  juce::String::String(local_20,(byte *)pcVar1);
                    /* try { // try from 00171d33 to 00171d3d has its CatchHandler @ 00171d89 */
  juce::String::toLowerCase((undefined8 *)aSStack_28,(undefined8 *)local_20);
  juce::StringRef::StringRef((StringRef *)&local_18,&DAT_005e3c3c);
                    /* try { // try from 00171d54 to 00171d5e has its CatchHandler @ 00171d7c */
  juce::String::removeCharacters((undefined8 *)this,(undefined8 *)aSStack_28,local_18);
  juce::String::~String(aSStack_28);
  juce::String::~String(local_20);
  return this;
}


