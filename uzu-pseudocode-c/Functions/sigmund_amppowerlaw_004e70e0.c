// Function : sigmund_amppowerlaw
// Namespace: 
// Entry    : 004e70e0
// Prototype: undefined sigmund_amppowerlaw(float param_1, long param_2)
// Body     : 004e70e0 - 004e7118


void sigmund_amppowerlaw(float param_1,long param_2)

{
  if (DAT_00651f48 < (double)param_1) {
    if (DAT_0065260c < param_1) {
      param_1 = DAT_0065260c;
    }
    *(float *)(param_2 + 0xd8) = param_1;
    return;
  }
  *(undefined4 *)(param_2 + 0xd8) = DAT_00652618;
  return;
}


