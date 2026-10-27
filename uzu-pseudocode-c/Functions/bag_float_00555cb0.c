// Function : bag_float
// Namespace: 
// Entry    : 00555cb0
// Prototype: undefined bag_float(float param_1, long param_2)
// Body     : 00555cb0 - 00555d61


void bag_float(float param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(float *)(param_2 + 0x30) == 0.0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
    if (puVar1 != (undefined8 *)0x0) {
      if (param_1 == *(float *)(puVar1 + 1)) {
        *(undefined8 *)(param_2 + 0x38) = *puVar1;
        freebytes(puVar1);
        return;
      }
      while (puVar2 = puVar1, puVar1 = (undefined8 *)*puVar2, puVar1 != (undefined8 *)0x0) {
        if (param_1 == *(float *)(puVar1 + 1)) {
          *puVar2 = *puVar1;
          freebytes(puVar1);
          return;
        }
      }
    }
  }
  else {
    puVar2 = getbytes(0x10);
    *puVar2 = 0;
    *(float *)(puVar2 + 1) = param_1;
    puVar1 = *(undefined8 **)(param_2 + 0x38);
    if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
      *(undefined8 **)(param_2 + 0x38) = puVar2;
      return;
    }
    do {
      puVar3 = puVar1;
      puVar1 = (undefined8 *)*puVar3;
    } while (puVar1 != (undefined8 *)0x0);
    *puVar3 = puVar2;
  }
  return;
}


