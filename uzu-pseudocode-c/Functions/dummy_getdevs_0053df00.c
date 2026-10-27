// Function : dummy_getdevs
// Namespace: 
// Entry    : 0053df00
// Prototype: undefined dummy_getdevs(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
// Body     : 0053df00 - 0053df27


void dummy_getdevs(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x454e4f4e;
  *(undefined1 *)(param_3 + 1) = 0;
  *param_3 = 0x454e4f4e;
  *param_4 = 1;
  *param_2 = 1;
  *param_5 = 0;
  return;
}


