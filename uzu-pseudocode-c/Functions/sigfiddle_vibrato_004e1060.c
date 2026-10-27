// Function : sigfiddle_vibrato
// Namespace: 
// Entry    : 004e1060
// Prototype: undefined sigfiddle_vibrato(float param_1, float param_2, long param_3)
// Body     : 004e1060 - 004e10d3


void sigfiddle_vibrato(float param_1,float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  uVar3 = ~-(uint)(0.0 < param_2) & DAT_005d94d8;
  *(int *)(param_3 + 0x328) = (int)param_1;
  *(uint *)(param_3 + 0x330) = uVar3 | (uint)param_2 & -(uint)(0.0 < param_2);
  iVar1 = (int)(((double)param_1 * DAT_00651e50 * (double)*(float *)(param_3 + 0x6c)) /
               (double)*(int *)(param_3 + 0x68));
  iVar2 = 0x13;
  if (iVar1 < 0x13) {
    iVar2 = iVar1;
  }
  iVar1 = 1;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(param_3 + 0x32c) = iVar1;
  return;
}


