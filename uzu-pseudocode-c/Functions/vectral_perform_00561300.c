// Function : vectral_perform
// Namespace: 
// Entry    : 00561300
// Prototype: long vectral_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00561300 - 0056137e


long vectral_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long lVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_9 + 8);
  bVar2 = magic_isnan(**(uint **)(lVar1 + 0x78));
  if ((int)CONCAT71(extraout_var,bVar2) != 0) {
    bVar2 = magic_isnan(**(uint **)(lVar1 + 0x80));
    if ((int)CONCAT71(extraout_var_00,bVar2) != 0) goto LAB_00561356;
  }
  magic_setnan(*(undefined4 **)(lVar1 + 0x78));
  uVar3 = magic_setnan(*(undefined4 **)(lVar1 + 0x80));
  pd_error(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,
           "vectral~: doesn\'t understand \'float\'",extraout_RDX,param_12,param_13,param_14);
LAB_00561356:
  (**(code **)(lVar1 + 0x38))
            (lVar1,*(undefined4 *)(param_9 + 0x10),*(undefined8 *)(param_9 + 0x18),
             *(undefined8 *)(param_9 + 0x20),*(undefined8 *)(param_9 + 0x28),
             *(undefined8 *)(param_9 + 0x30));
  return param_9 + 0x38;
}


