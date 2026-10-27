// Function : iem_fstyletoint
// Namespace: 
// Entry    : 005762c0
// Prototype: uint iem_fstyletoint(uint * param_1)
// Body     : 005762c0 - 005762c5


uint iem_fstyletoint(uint *param_1)

{
  return *param_1 & 0x3f;
}


