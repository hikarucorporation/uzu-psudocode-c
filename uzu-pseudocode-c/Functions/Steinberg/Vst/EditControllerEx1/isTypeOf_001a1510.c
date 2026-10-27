// Function : isTypeOf
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 001a1510
// Prototype: ulong isTypeOf(undefined8 param_1_00, char * param_2, char param_3)
// Body     : 001a1510 - 001a1583


/* Steinberg::Vst::EditControllerEx1::isTypeOf(char const*, bool) const */

ulong __thiscall
Steinberg::Vst::EditControllerEx1::isTypeOf(undefined8 param_1_00,char *param_2,char param_3)

{
  int iVar1;
  undefined8 unaff_RBP;
  undefined7 uVar3;
  ulong uVar2;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strcmp(param_2,"EditControllerEx1");
    uVar3 = (undefined7)((ulong)unaff_RBP >> 8);
    uVar2 = CONCAT71(uVar3,iVar1 == 0);
    if ((iVar1 != 0) && (param_3 != '\0')) {
      iVar1 = strcmp(param_2,"EditController");
      uVar2 = CONCAT71(uVar3,1);
      if (iVar1 != 0) {
        iVar1 = strcmp(param_2,"ComponentBase");
        if (iVar1 != 0) {
          iVar1 = strcmp(param_2,"FObject");
          uVar2 = CONCAT71(uVar3,iVar1 == 0);
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


