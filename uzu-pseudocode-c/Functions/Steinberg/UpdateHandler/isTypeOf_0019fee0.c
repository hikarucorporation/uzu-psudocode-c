// Function : isTypeOf
// Namespace: Steinberg:UpdateHandler
// Entry    : 0019fee0
// Prototype: undefined8 isTypeOf(undefined8 param_1_00, char * param_2, char param_3)
// Body     : 0019fee0 - 0019ff2b


/* Steinberg::UpdateHandler::isTypeOf(char const*, bool) const */

undefined8 __thiscall
Steinberg::UpdateHandler::isTypeOf(undefined8 param_1_00,char *param_2,char param_3)

{
  int iVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  undefined4 extraout_var_00;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar1 = strcmp(param_2,"UpdateHandler");
  uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  if ((iVar1 != 0) && (param_3 != '\0')) {
    iVar1 = strcmp(param_2,"FObject");
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var_00,iVar1) >> 8),iVar1 == 0);
  }
  return uVar2;
}


