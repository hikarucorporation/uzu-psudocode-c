// Function : sel2_symbol
// Namespace: 
// Entry    : 0054bcc0
// Prototype: undefined sel2_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10)
// Body     : 0054bcc0 - 0054bd01


void sel2_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(param_9 + 0x30) == 2) && (iVar1 = *(int *)(param_9 + 0x38), iVar1 != 0)) {
    puVar2 = (undefined8 *)(*(long *)(param_9 + 0x40) + 8);
    do {
      if (puVar2[-1] == param_10) {
        outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long *)*puVar2)
        ;
        return;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 2;
    } while (iVar1 != 0);
  }
  outlet_symbol(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x48));
  return;
}


