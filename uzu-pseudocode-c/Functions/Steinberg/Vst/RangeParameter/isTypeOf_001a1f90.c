// Function : isTypeOf
// Namespace: Steinberg:Vst:RangeParameter
// Entry    : 001a1f90
// Prototype: undefined8 isTypeOf(undefined8 param_1_00, char * param_2, char param_3)
// Body     : 001a1f90 - 001a1ff7


/* Steinberg::Vst::RangeParameter::isTypeOf(char const*, bool) const */

undefined8 __thiscall
Steinberg::Vst::RangeParameter::isTypeOf(undefined8 param_1_00,char *param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar1 = strcmp(param_2,"RangeParameter");
  uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  if ((iVar1 != 0) && (param_3 != '\0')) {
    iVar1 = strcmp(param_2,"Parameter");
    if (iVar1 == 0) {
      return CONCAT71((int7)(CONCAT44(extraout_var_00,iVar1) >> 8),1);
    }
    iVar1 = strcmp(param_2,"FObject");
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var_01,iVar1) >> 8),iVar1 == 0);
  }
  return uVar2;
}


