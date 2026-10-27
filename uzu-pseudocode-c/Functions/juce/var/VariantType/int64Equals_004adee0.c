// Function : int64Equals
// Namespace: juce:var:VariantType
// Entry    : 004adee0
// Prototype: undefined1 int64Equals(long * param_1, undefined8 param_2, long param_3)
// Body     : 004adee0 - 004adfcf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::int64Equals(juce::var::ValueUnion const&, juce::var::ValueUnion const&,
   juce::var::VariantType const&) */

undefined1 __cdecl
juce::var::VariantType::int64Equals(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined7 local_80;
  undefined4 uStack_79;
  undefined1 local_75;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  code *local_10;
  
  if (*(char *)(param_3 + 5) == '\0' && *(char *)(param_3 + 6) == '\0') {
                    /* try { // try from 004adef3 to 004adef8 has its CatchHandler @ 004adfd8 */
    lVar1 = (**(code **)(param_3 + 0x18))(param_2);
    uVar2 = lVar1 == *param_1;
  }
  else {
    local_80 = 0x1000000;
    uStack_79 = 0;
    local_75 = 1;
    local_70 = int64ToInt;
    local_68 = int64ToInt64;
    local_60 = int64ToDouble;
    local_58 = int64ToString;
    local_50 = int64ToBool;
    local_48 = defaultToObject;
    local_40 = defaultToArray;
    local_38 = defaultToBinary;
    local_30 = defaultClone;
    local_28 = defaultCleanUp;
    local_20 = defaultCreateCopy;
    local_18 = int64Equals;
    local_10 = int64WriteToStream;
                    /* try { // try from 004adfba to 004adfc6 has its CatchHandler @ 004adfd0 */
    uVar2 = (**(code **)(param_3 + 0x68))(param_2,param_1,&local_80);
  }
  return uVar2;
}


