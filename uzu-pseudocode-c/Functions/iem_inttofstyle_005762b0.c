// Function : iem_inttofstyle
// Namespace: 
// Entry    : 005762b0
// Prototype: undefined iem_inttofstyle(uint * param_1, uint param_2)
// Body     : 005762b0 - 005762b5


void iem_inttofstyle(uint *param_1,uint param_2)

{
  *param_1 = param_2 & 0x3f;
  return;
}


