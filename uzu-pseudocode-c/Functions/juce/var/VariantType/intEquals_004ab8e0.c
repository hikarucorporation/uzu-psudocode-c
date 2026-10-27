// Function : intEquals
// Namespace: juce:var:VariantType
// Entry    : 004ab8e0
// Prototype: undefined1 intEquals(int * param_1, undefined8 param_2, long param_3)
// Body     : 004ab8e0 - 004ab9dc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::intEquals(juce::var::ValueUnion const&, juce::var::ValueUnion const&,
   juce::var::VariantType const&) */

undefined1 __cdecl juce::var::VariantType::intEquals(int *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_7d;
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
  
  if (((*(char *)(param_3 + 5) == '\0') && (*(char *)(param_3 + 3) == '\0')) &&
     (*(char *)(param_3 + 6) == '\0')) {
                    /* try { // try from 004ab8fd to 004ab902 has its CatchHandler @ 004ab9e5 */
    iVar1 = (**(code **)(param_3 + 0x10))(param_2);
    uVar2 = iVar1 == *param_1;
  }
  else {
    local_80 = 0;
    local_7e = 1;
    local_7d = 0;
    local_75 = 1;
    local_70 = intToInt;
    local_68 = intToInt64;
    local_60 = intToDouble;
    local_58 = intToString;
    local_50 = intToBool;
    local_48 = defaultToObject;
    local_40 = defaultToArray;
    local_38 = defaultToBinary;
    local_30 = defaultClone;
    local_28 = defaultCleanUp;
    local_20 = defaultCreateCopy;
    local_18 = intEquals;
    local_10 = intWriteToStream;
                    /* try { // try from 004ab9c7 to 004ab9d3 has its CatchHandler @ 004ab9dd */
    uVar2 = (**(code **)(param_3 + 0x68))(param_2,param_1,&local_80);
  }
  return uVar2;
}


