// Function : iem_symargstoint
// Namespace: 
// Entry    : 00576290
// Prototype: uint iem_symargstoint(uint * param_1)
// Body     : 00576290 - 005762a4


uint iem_symargstoint(uint *param_1)

{
  return (int)(*param_1 << 6) >> 0x1f & 0x100002U | *param_1 & 1;
}


