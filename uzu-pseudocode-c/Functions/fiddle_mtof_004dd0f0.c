// Function : fiddle_mtof
// Namespace: 
// Entry    : 004dd0f0
// Prototype: undefined8 fiddle_mtof(float param_1)
// Body     : 004dd0f0 - 004dd10f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fiddle_mtof(float param_1)

{
  undefined8 in_RAX;
  
  exp((double)param_1 * _DAT_00652440);
  return in_RAX;
}


