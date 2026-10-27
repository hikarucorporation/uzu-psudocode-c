// Function : vline_tilde_stop
// Namespace: 
// Entry    : 0058fcc0
// Prototype: undefined vline_tilde_stop(long param_1)
// Body     : 0058fcc0 - 0058fd36


void vline_tilde_stop(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x80);
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 0x18);
    freebytes(pvVar2);
    pvVar2 = pvVar1;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(float *)(param_1 + 0x70) = (float)*(double *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x68) = 0x4415af1d78b58c40;
  return;
}


