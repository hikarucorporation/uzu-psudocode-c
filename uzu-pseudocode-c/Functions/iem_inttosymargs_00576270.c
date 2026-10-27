// Function : iem_inttosymargs
// Namespace: 
// Entry    : 00576270
// Prototype: undefined iem_inttosymargs(uint * param_1, uint param_2)
// Body     : 00576270 - 00576287


void iem_inttosymargs(uint *param_1,uint param_2)

{
  *param_1 = (uint)((param_2 & 0x100002) != 0) << 0x19 | param_2 & 1;
  return;
}


