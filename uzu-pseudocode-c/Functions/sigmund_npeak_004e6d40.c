// Function : sigmund_npeak
// Namespace: 
// Entry    : 004e6d40
// Prototype: undefined sigmund_npeak(float param_1, long param_2)
// Body     : 004e6d40 - 004e6d4f


void sigmund_npeak(float param_1,long param_2)

{
  if (param_1 <= DAT_005d9038) {
    param_1 = DAT_005d9038;
  }
  *(int *)(param_2 + 0x58) = (int)param_1;
  return;
}


