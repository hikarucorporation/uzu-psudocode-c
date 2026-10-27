// Function : file_handle_close
// Namespace: 
// Entry    : 0057afe0
// Prototype: undefined file_handle_close(long param_1)
// Body     : 0057afe0 - 0057affe


void file_handle_close(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (-1 < *piVar1) {
    sys_close(*piVar1);
    piVar1 = *(int **)(param_1 + 0x38);
  }
  *piVar1 = -1;
  return;
}


