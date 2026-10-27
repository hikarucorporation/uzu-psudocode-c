// Function : clock_new
// Namespace: 
// Entry    : 0053ae70
// Prototype: undefined clock_new(undefined8 param_1, undefined8 param_2)
// Body     : 0053ae70 - 0053aeaf


void clock_new(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = getbytes(0x28);
  *puVar1 = 0xbff0000000000000;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x465c8000;
  return;
}


