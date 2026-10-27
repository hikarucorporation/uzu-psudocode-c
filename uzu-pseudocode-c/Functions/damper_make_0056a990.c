// Function : damper_make
// Namespace: 
// Entry    : 0056a990
// Prototype: undefined4 * damper_make(undefined4 param_1)
// Body     : 0056a990 - 0056a9bc


undefined4 * damper_make(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = getbytes(8);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = 0;
  return puVar1;
}


