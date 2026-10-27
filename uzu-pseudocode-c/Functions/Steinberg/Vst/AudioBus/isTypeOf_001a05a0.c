// Function : isTypeOf
// Namespace: Steinberg:Vst:AudioBus
// Entry    : 001a05a0
// Prototype: undefined8 isTypeOf(undefined8 param_1_00, char * param_2, char param_3)
// Body     : 001a05a0 - 001a0607


/* Steinberg::Vst::AudioBus::isTypeOf(char const*, bool) const */

undefined8 __thiscall
Steinberg::Vst::AudioBus::isTypeOf(undefined8 param_1_00,char *param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar1 = strcmp(param_2,"Vst::AudioBus");
  uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  if ((iVar1 != 0) && (param_3 != '\0')) {
    iVar1 = strcmp(param_2,"Vst::Bus");
    if (iVar1 == 0) {
      return CONCAT71((int7)(CONCAT44(extraout_var_00,iVar1) >> 8),1);
    }
    iVar1 = strcmp(param_2,"FObject");
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var_01,iVar1) >> 8),iVar1 == 0);
  }
  return uVar2;
}


