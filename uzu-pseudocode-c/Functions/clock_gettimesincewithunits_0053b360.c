// Function : clock_gettimesincewithunits
// Namespace: 
// Entry    : 0053b360
// Prototype: double clock_gettimesincewithunits(double param_1, double param_2, int param_3)
// Body     : 0053b360 - 0053b3d1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double clock_gettimesincewithunits(double param_1,double param_2,int param_3)

{
  undefined8 *puVar1;
  double dVar2;
  
  puVar1 = (undefined8 *)__tls_get_addr(&PTR_007159b0);
  dVar2 = *(double *)*puVar1 - param_1;
  if (param_3 == 0) {
    return dVar2 / (param_2 * _DAT_00656b80);
  }
  return (dVar2 * (double)*(float *)((long)((double *)*puVar1)[10] + 0x30)) /
         (param_2 * _DAT_00656b88);
}


