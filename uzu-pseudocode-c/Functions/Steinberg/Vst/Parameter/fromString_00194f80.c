// Function : fromString
// Namespace: Steinberg:Vst:Parameter
// Entry    : 00194f80
// Prototype: undefined fromString(undefined8 param_1_00, long param_2, undefined8 param_3)
// Body     : 00194f80 - 00194fbb


/* Steinberg::Vst::Parameter::fromString(char16_t const*, double&) const */

void __thiscall
Steinberg::Vst::Parameter::fromString(undefined8 param_1_00,long param_2,undefined8 param_3)

{
  short *psVar1;
  ulong uVar2;
  long local_10;
  int local_8;
  
  uVar2 = 0;
  do {
    psVar1 = (short *)(param_2 + uVar2);
    uVar2 = uVar2 + 2;
  } while (*psVar1 != 0);
  local_8 = (int)(uVar2 >> 1) + -1;
  local_10 = param_2;
  UString::scanFloat((UString *)&local_10,param_3);
  return;
}


