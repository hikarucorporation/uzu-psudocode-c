// Function : getbytes
// Namespace: 
// Entry    : 00538260
// Prototype: void * getbytes(size_t param_1)
// Body     : 00538260 - 00538296


void * getbytes(size_t param_1)

{
  void *pvVar1;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = calloc(param_1,1);
  if (pvVar1 == (void *)0x0) {
    post(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
         in_XMM7_Qa,"pd: getbytes() failed -- out of memory");
    return (void *)0x0;
  }
  return pvVar1;
}


