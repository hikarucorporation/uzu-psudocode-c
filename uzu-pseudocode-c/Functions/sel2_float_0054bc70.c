// Function : sel2_float
// Namespace: 
// Entry    : 0054bc70
// Prototype: undefined sel2_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054bc70 - 0054bcb1


void sel2_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(param_9 + 0x30) == 1) && (iVar1 = *(int *)(param_9 + 0x38), iVar1 != 0)) {
    puVar2 = (undefined8 *)(*(long *)(param_9 + 0x40) + 8);
    do {
      if ((float)param_1 == *(float *)(puVar2 + -1)) {
        outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long *)*puVar2)
        ;
        return;
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 2;
    } while (iVar1 != 0);
  }
  outlet_float(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x48));
  return;
}


