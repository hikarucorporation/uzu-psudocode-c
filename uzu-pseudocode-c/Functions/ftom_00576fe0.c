// Function : ftom
// Namespace: 
// Entry    : 00576fe0
// Prototype: undefined8 ftom(float param_1)
// Body     : 00576fe0 - 00577011


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ftom(float param_1)

{
  undefined8 in_RAX;
  
  if (0.0 < param_1) {
    log((double)param_1 * _DAT_00652450);
    return in_RAX;
  }
  return in_RAX;
}


