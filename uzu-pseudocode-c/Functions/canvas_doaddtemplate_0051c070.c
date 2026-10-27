// Function : canvas_doaddtemplate
// Namespace: 
// Entry    : 0051c070
// Prototype: undefined canvas_doaddtemplate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, uint * param_10, undefined8 * param_11)
// Body     : 0051c070 - 0051c0de


void canvas_doaddtemplate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,uint *param_10,undefined8 *param_11)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar1 = *param_10;
  if (0 < (long)(int)uVar1) {
    uVar3 = 0;
    do {
      if (*(long *)((long)*param_11 + uVar3 * 8) == param_9) {
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  pvVar2 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (void *)*param_11,(long)(int)uVar1 * 8,(long)(int)uVar1 * 8 + 8);
  *(long *)((long)pvVar2 + (long)(int)uVar1 * 8) = param_9;
  *param_11 = pvVar2;
  *param_10 = uVar1 + 1;
  return;
}


