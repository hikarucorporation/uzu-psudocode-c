// Function : rtext_height
// Namespace: 
// Entry    : 0051e700
// Prototype: undefined4 rtext_height(undefined8 param_1)
// Body     : 0051e700 - 0051e732


uint rtext_height(long *param_1)

{
  byte *in_R9;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  uint local_c [3];
  
  local_c[1] = 0;
  local_c[0] = 0;
  rtext_senditup(in_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                 in_XMM7_Qa,param_1,0,local_c + 1,local_c,(int *)(local_c + 2),in_R9);
  return local_c[0];
}


