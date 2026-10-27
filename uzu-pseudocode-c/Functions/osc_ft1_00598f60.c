// Function : osc_ft1
// Namespace: 
// Entry    : 00598f60
// Prototype: undefined osc_ft1(float param_1, long param_2)
// Body     : 00598f60 - 00598f84


void osc_ft1(float param_1,long param_2)

{
  *(double *)(param_2 + 0x30) =
       (double)(param_1 * (float)(&DAT_0065da28)[*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x37])
  ;
  return;
}


