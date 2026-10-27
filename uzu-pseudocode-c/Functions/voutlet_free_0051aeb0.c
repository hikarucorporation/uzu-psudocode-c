// Function : voutlet_free
// Namespace: 
// Entry    : 0051aeb0
// Prototype: undefined voutlet_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0051aeb0 - 0051af48


void voutlet_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  long lVar2;
  
  canvas_rmoutlet(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x30),*(long **)(param_9 + 0x38),param_11,param_12,param_13,
                  param_14);
  if ((*(undefined8 **)(param_9 + 0x68) != (undefined8 *)0x0) && (0 < *(int *)(param_9 + 0x60))) {
    freebytes((void *)**(undefined8 **)(param_9 + 0x68));
    resample_free(*(long *)(param_9 + 0x68) + 8);
    if (1 < *(int *)(param_9 + 0x60)) {
      lVar2 = 1;
      lVar1 = 0x50;
      do {
        freebytes(*(void **)(*(long *)(param_9 + 0x68) + -8 + lVar1));
        resample_free(*(long *)(param_9 + 0x68) + lVar1);
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0x48;
      } while (lVar2 < *(int *)(param_9 + 0x60));
    }
  }
  return;
}


