// Function : isTypeOf
// Namespace: Steinberg:FObject
// Entry    : 0019f940
// Prototype: undefined8 isTypeOf(undefined8 param_1, char * param_2)
// Body     : 0019f940 - 0019f964


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FObject::isTypeOf(char const*, bool) const */

undefined8 __cdecl Steinberg::FObject::isTypeOf(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar1 = strcmp(param_2,"FObject");
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}


