// Function : qlist_rewind
// Namespace: 
// Entry    : 0055a740
// Prototype: undefined qlist_rewind(long param_1)
// Body     : 0055a740 - 0055a769


void qlist_rewind(long param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(double **)(param_1 + 0x60) != (double *)0x0) {
    clock_unset(*(double **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  return;
}


