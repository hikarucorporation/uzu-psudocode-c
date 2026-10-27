// Function : metro_ft1
// Namespace: 
// Entry    : 0055c3b0
// Prototype: undefined metro_ft1(float param_1, long param_2)
// Body     : 0055c3b0 - 0055c3d5


void metro_ft1(float param_1,long param_2)

{
  *(double *)(param_2 + 0x38) =
       (double)(float)(~-(uint)(0.0 < param_1) & DAT_005d9038 |
                      (uint)param_1 & -(uint)(0.0 < param_1));
  return;
}


