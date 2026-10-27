// Function : pointerinlet_pointer
// Namespace: 
// Entry    : 0053a3e0
// Prototype: undefined pointerinlet_pointer(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0053a3e0 - 0053a419


void pointerinlet_pointer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long *)(param_9 + 0x28),param_10,param_11,param_12,param_13,param_14);
  puVar2 = *(undefined8 **)(param_9 + 0x28);
  puVar2[2] = param_10[2];
  uVar3 = param_10[1];
  *puVar2 = *param_10;
  puVar2[1] = uVar3;
  if (param_10[2] != 0) {
    piVar1 = (int *)(param_10[2] + 0xc);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


