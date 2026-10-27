// Function : mtof
// Namespace: 
// Entry    : 00576f90
// Prototype: undefined8 mtof(float param_1)
// Body     : 00576f90 - 00576fd4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 mtof(float param_1)

{
  undefined8 in_RAX;
  
  if (DAT_00652e10 < param_1) {
    if (DAT_00653438 < param_1) {
      return in_RAX;
    }
    exp((double)param_1 * _DAT_00652440);
  }
  return in_RAX;
}


