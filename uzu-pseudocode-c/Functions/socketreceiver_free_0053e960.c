// Function : socketreceiver_free
// Namespace: 
// Entry    : 0053e960
// Prototype: undefined socketreceiver_free(undefined8 * param_1)
// Body     : 0053e960 - 0053e98c


void socketreceiver_free(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  freebytes(param_1);
  return;
}


