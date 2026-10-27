// Function : file_handle_free
// Namespace: 
// Entry    : 0057ad80
// Prototype: undefined file_handle_free(long param_1)
// Body     : 0057ad80 - 0057ada3


void file_handle_free(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x30);
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  if (-1 < *(int *)(param_1 + 0x30)) {
    sys_close(*(int *)(param_1 + 0x30));
    puVar1 = *(undefined4 **)(param_1 + 0x38);
  }
  *puVar1 = 0xffffffff;
  return;
}


