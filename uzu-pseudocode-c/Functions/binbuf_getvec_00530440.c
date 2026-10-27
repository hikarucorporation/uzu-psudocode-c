// Function : binbuf_getvec
// Namespace: 
// Entry    : 00530440
// Prototype: undefined8 binbuf_getvec(long param_1)
// Body     : 00530440 - 00530444


undefined8 binbuf_getvec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


