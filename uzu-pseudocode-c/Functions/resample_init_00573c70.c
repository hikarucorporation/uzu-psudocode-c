// Function : resample_init
// Namespace: 
// Entry    : 00573c70
// Prototype: undefined resample_init(long param_1)
// Body     : 00573c70 - 00573cab


void resample_init(long param_1)

{
  *(undefined8 *)(param_1 + 4) = 0x100000001;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


