// Function : makenote_tick
// Namespace: 
// Entry    : 00555530
// Prototype: undefined makenote_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9)
// Body     : 00555530 - 0055559d


void makenote_tick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = param_9[3];
  outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(lVar1 + 0x40));
  outlet_float((ulong)*(uint *)(param_9 + 2),param_2,param_3,param_4,param_5,param_6,param_7,param_8
               ,*(long **)(lVar1 + 0x38));
  puVar2 = *(undefined8 **)(lVar1 + 0x48);
  if (*(undefined8 **)(lVar1 + 0x48) == param_9) {
    puVar3 = (undefined8 *)(lVar1 + 0x48);
  }
  else {
    do {
      puVar3 = puVar2;
      puVar2 = (undefined8 *)puVar3[1];
      if (puVar2 == (undefined8 *)0x0) goto LAB_00555582;
    } while (puVar2 != param_9);
    puVar3 = puVar3 + 1;
  }
  *puVar3 = param_9[1];
LAB_00555582:
  clock_free((double *)*param_9);
  freebytes(param_9);
  return;
}


